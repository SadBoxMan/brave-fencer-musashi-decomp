#!/usr/bin/env python3
"""What the byte checks cover, and how much of it is decompiled (r142 Phase 3, docs/test_infrastructure.md).

For every area `make regress` checks (main, ovl, abil, stg) it counts the code of the built objects by what it is:
  C      a function written in C in src/ (a real match: GCC 2.7.2 builds it to the original bytes)
  stub   a C definition with an empty body (splat writes them for `jr ra; nop`: not decomp work)
  asm    still INCLUDE_ASM in a C file, or a whole asm file (the split's .s)
  lib    PsyQ library code (symbol_addrs_psyq.txt; it stays asm by design)
from the function sizes in the objects (`nm -S`). All of it is byte-checked; C is the part that is also readable.

The stage engine: the 139 other stage images carry their copy of the shared engine (0x80128158-0x8017BE9C) as a
binary piece taken from the disc, not rebuilt from src/stage, so `make check-stg` does not test the engine's C. It
is covered through the village (`check-stage` rebuilds it from src/stage) once every image's engine is shown to be
the village's apart from relocated addresses: masked as in tools/stage_census.py (lui 0x8017-0x8020 and the offsets
off it, jal targets into the own code), word for word, in all 140 images. That proof is cached in
build/regress/engine_identity.json against the originals' hashes in tools/regress_baseline.txt.

Usage: python -I tools/coverage.py              the table and the engine proof (needs a built tree: make regress)
       python -I tools/coverage.py --progress   function counts per area (`make progress`)
Exit status 1 if the engine proof fails.
"""
import collections
import glob
import json
import os
import re
import subprocess
import sys

TOOLS = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(TOOLS)
sys.path.insert(0, TOOLS)
NM = os.path.join(ROOT, 'tools', 'toolchain', 'bin', 'mipsel-none-elf-nm' + ('.exe' if os.name == 'nt' else ''))
OVERLAYS = ['ovl38', 'stage', 'ovl39', 'ovl36', 'ovl37', 'ovl3a', 'ovl3b']
KINDS = ['C', 'stub', 'asm', 'lib']
INCLUDE_ASM = re.compile(r'INCLUDE_ASM\("[^"]*",\s*(\w+)\)')
EMPTY_DEF = re.compile(r'^[A-Za-z_][^;=(){}]*\b(\w+)\s*\([^;{}]*\)\s*\{\s*\}', re.M)


def area_of(rel):
    """the area of an object under build/ ('src/abil/ovl13.o' -> abil), or None"""
    p = rel.replace('\\', '/').split('/')
    if p[0] not in ('src', 'asm') or len(p) < 2:
        return None
    if len(p) == 2:
        return 'main'
    if p[1] in ('abil', 'stg'):
        return p[1]
    if p[1] in OVERLAYS:
        return 'ovl'
    return 'main' if p[0] == 'asm' and p[1] not in ('nonmatchings',) else None


def psyq_names():
    return {m.group(1) for m in re.finditer(r'^(\w+) = 0x[0-9A-Fa-f]+; // type:func',
                                            open(os.path.join(ROOT, 'symbol_addrs_psyq.txt'), encoding='utf-8').read(), re.M)}


def objects():
    out = collections.defaultdict(list)
    for dp, _, fs in os.walk(os.path.join(ROOT, 'build')):
        rel_dir = os.path.relpath(dp, os.path.join(ROOT, 'build'))
        for f in fs:
            if f.endswith('.o'):
                a = area_of(os.path.join(rel_dir, f))
                if a:
                    out[a].append(os.path.join(dp, f))
    return out


def nm_sizes(paths):
    """{object path: [(name, size)]} for the defined text symbols with a size"""
    res = collections.defaultdict(list)
    seen = {}
    for i in range(0, len(paths), 150):
        chunk = paths[i:i + 150]
        r = subprocess.run([NM, '-S', '--defined-only'] + chunk, cwd=ROOT, capture_output=True, text=True)
        cur = chunk[0] if len(chunk) == 1 else None
        for line in r.stdout.splitlines():
            if line.endswith(':') and not line.startswith(' '):
                cur = os.path.normpath(os.path.join(ROOT, line[:-1]))
                continue
            p = line.split()
            # each asm function also has a `<name>.NON_MATCHING` alias at the same address: counted once
            if len(p) == 4 and p[2] in ('T', 't') and cur and not p[3].endswith('.NON_MATCHING'):
                size = int(p[1], 16)
                if size and (p[0], size) not in seen.setdefault(cur, set()):
                    seen[cur].add((p[0], size))
                    res[cur].append((p[3], size))
    return res


def classify(area_objs, psyq):
    """{area: {kind: [functions, bytes]}}"""
    table = {}
    for area, objs in area_objs.items():
        counts = {k: [0, 0] for k in KINDS}
        sizes = nm_sizes(objs)
        for obj, syms in sizes.items():
            rel = os.path.relpath(obj, os.path.join(ROOT, 'build')).replace('\\', '/')
            src = os.path.join(ROOT, rel[:-2] + '.c') if rel.startswith('src/') else None
            asm_names, empty = set(), set()
            if src and os.path.exists(src):
                text = open(src, encoding='utf-8', errors='replace').read()
                asm_names = set(INCLUDE_ASM.findall(text))
                empty = set(EMPTY_DEF.findall(text))
            library = os.path.basename(obj) == 'psyq.o'   # asm/psyq.s: the whole PsyQ library range, named or not
            for name, size in syms:
                if name in psyq or library:
                    k = 'lib'
                elif not src:
                    k = 'asm'
                elif name in asm_names:
                    k = 'asm'
                elif name in empty:
                    k = 'stub'
                else:
                    k = 'C'
                counts[k][0] += 1
                counts[k][1] += size
        table[area] = counts
    return table


def baseline_hashes():
    path = os.path.join(ROOT, 'tools', 'regress_baseline.txt')
    out = {}
    for line in open(path, encoding='utf-8'):
        p = line.split()
        if len(p) == 5 and not line.startswith('#'):
            out[p[4]] = p[0]
    return out


def engine_identity():
    """(images checked, images identical, [(name, share)] of the others); cached against the baseline hashes"""
    import stage_census as C
    files = sorted(glob.glob(os.path.join(ROOT, 'disc', 'pac4', '*.bin')))
    base = baseline_hashes()
    key = {os.path.basename(f): base.get('disc/pac4/' + os.path.basename(f)) for f in files}
    cache = os.path.join(ROOT, 'build', 'regress', 'engine_identity.json')
    if os.path.exists(cache):
        c = json.load(open(cache, encoding='utf-8'))
        if c.get('key') == key and None not in key.values():
            return c['n'], c['same'], c['others']
    ee = (C.ENG_END - C.BASE) // 4
    ref = C.norm(C.load(os.path.join(ROOT, 'disc', 'pac4', C.REF + '.bin')), 0, ee)
    same, others = 0, []
    for f in files:
        en = C.norm(C.load(f), 0, ee)
        k = sum(1 for i in range(ee) if en[i] == ref[i])
        if k == ee:
            same += 1
        else:
            others.append((os.path.basename(f)[:-4], round(k / ee, 4)))
    os.makedirs(os.path.dirname(cache), exist_ok=True)
    json.dump({'key': key, 'n': len(files), 'same': same, 'others': others}, open(cache, 'w', encoding='utf-8'))
    return len(files), same, others


def progress():
    """`make progress`: from the sources (no build needed), with tools/stage_progress.py's parser, so an empty stub is
    never counted as a match"""
    import stage_progress as P
    units = [('main EXE', glob.glob(os.path.join(ROOT, 'src', '*.c')))]
    for o in OVERLAYS:
        fs = glob.glob(os.path.join(ROOT, 'src', o, '*.c'))
        if o == 'stage':   # the village's own code is counted with the other stage images below
            fs = [f for f in fs if os.path.basename(f) != 'sc03_001.c']
        units.append((o if o != 'stage' else 'stage engine', fs))
    units.append(('ability packages', glob.glob(os.path.join(ROOT, 'src', 'abil', '*.c'))))
    print('functions: real C matches / still asm, then empty stubs apart (splat writes them for `jr ra; nop`: not decomp work)')
    for name, fs in units:
        c = s = a = 0
        for f in fs:
            x, y, z = P.count(f)
            c, s, a = c + x, s + y, a + z
        print(f'  {name:17} {c:5} / {c + a:5} in C ({100 * c / max(c + a, 1):5.1f} %), {a:4} asm, plus {s} empty stubs')
    sys.argv = [sys.argv[0], '--total']
    P.main()
    return 0


def main():
    if '--progress' in sys.argv:
        return progress()
    table = classify(objects(), psyq_names())
    if not table:
        sys.exit('coverage: no objects under build/ (run make regress first)')
    order = [a for a in ('main', 'ovl', 'abil', 'stg') if a in table]
    print(f'{"area":6} {"code KB":>8} {"C":>7} {"stub":>6} {"asm":>7} {"lib":>6}   C share of the game code (bytes)')
    tot = {k: [0, 0] for k in KINDS}
    for a in order:
        c = table[a]
        for k in KINDS:
            tot[k][0] += c[k][0]
            tot[k][1] += c[k][1]
    for a, c in [(a, table[a]) for a in order] + [('total', tot)]:
        allb = sum(c[k][1] for k in KINDS)
        game = c['C'][1] + c['stub'][1] + c['asm'][1]
        print(f'{a:6} {allb / 1024:8.0f} {c["C"][1] / 1024:6.0f}K {c["stub"][1] / 1024:5.1f}K {c["asm"][1] / 1024:6.0f}K '
              f'{c["lib"][1] / 1024:5.0f}K   {100 * c["C"][1] / max(game, 1):5.1f} %')
    n, same, others = engine_identity()
    ok = same == n
    print(f'engine: the shared engine (0x80128158-0x8017BE9C, relocations masked) is the village\'s in {same} of {n} '
          f'stage images: {"PASS" if ok else "FAIL"}' + ('' if ok else ' ' + ', '.join(f'{s} {p:.2%}' for s, p in others[:10])))
    print('(stg counts each image\'s own code only; the engine\'s C is the village\'s, counted under ovl/stage, and holds for '
          'every image by the line above)')
    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())
