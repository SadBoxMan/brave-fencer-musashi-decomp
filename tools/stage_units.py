#!/usr/bin/env python3
"""A split stage's C files (r209). Most stage images are one translation unit, src/stg/<stage>.c, built -O2. Four
(SC03_014 / SC03_015, SC03_118 / SC03_119) hold a run of functions built WITHOUT optimisation (-O0: a frame pointer,
every value through the stack), which no -O2 file can match. Their own code is three splat `c` subsegments:

  src/stg/<stage>.c       the -O2 code up to the run            asm/stg/<stage>/nonmatchings/<stage>/
  src/stg/<stage>_o0.c    the run, built -O0 (Makefile)         asm/stg/<stage>/nonmatchings/<stage>_o0/
  src/stg/<stage>_post.c  the -O2 code after it                 asm/stg/<stage>/nonmatchings/<stage>_post/

Symbols stay the stage's (func_sc03_014_80183CF0), the image and its check stay one (check-sc03_014). The runs are
found by o0_runs() (tools/gen_stage_cfgs.py writes the subsegments from it), so a tool that needs a stage's files, a
file's stage or a function's file asks here rather than assuming src/stg/<stage>.c.

Usage: stage_units.py   lists every image with an -O0 run (read from the disc images)"""
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SUFFIXES = ('_o0', '_post')        # in address order after the stage's own file
FP_SET = 0x03A0F021                # addu fp,sp,zero: the -O0 prologue (no -O2 stage function keeps a frame pointer)


def stage_of(path):
    """the stage a src/stg file (or its base name) belongs to: sc03_014_o0.c -> sc03_014"""
    n = os.path.basename(path)
    n = n[:-2] if n.endswith('.c') else n
    for s in SUFFIXES:
        if n.endswith(s):
            return n[:-len(s)]
    return n


def unit_of(path):
    """a file's unit name (its splat subsegment, its nonmatchings folder): sc03_014_o0"""
    n = os.path.basename(path)
    return n[:-2] if n.endswith('.c') else n


def files(lo, root=ROOT):
    """a stage's C files in address order (only the first for a stage with no -O0 run)"""
    lo = lo.lower()
    out = [os.path.join(root, 'src', 'stg', lo + '.c')]
    out += [p for p in (os.path.join(root, 'src', 'stg', lo + s + '.c') for s in SUFFIXES) if os.path.exists(p)]
    return out


def stages(root=ROOT):
    """every split stage with a C file (lower case), each once"""
    return sorted({stage_of(p) for p in glob.glob(os.path.join(root, 'src', 'stg', '*.c'))})


def file_of(lo, func, root=ROOT):
    """the stage's file that holds func (its INCLUDE_ASM or its definition), else the stage's own file"""
    for p in files(lo, root):
        t = open(p, encoding='utf-8').read()
        if re.search(rf'\b{func}\s*\)\s*;|\b{func}\s*\([^;]*\)\s*(?:[A-Za-z_][^;{{}}()]*;\s*)*\{{', t):
            return p
    return files(lo, root)[0]


def is_o0(path):
    """built -O0 (the Makefile's pattern rule for src/stg/%_o0.c)"""
    return unit_of(path).endswith('_o0') and '/stg/' in path.replace(os.sep, '/')


def opt_of(func, root=ROOT):
    """the cc1 optimisation flag a stage function's draft compiles with: -O0 when its asm is in an -O0 unit's folder
    (asm/stg/<stage>/nonmatchings/<stage>_o0/) or (r211) its stage's -O0 file holds it, else -O2"""
    if glob.glob(os.path.join(root, 'asm', 'stg', '*', 'nonmatchings', '*_o0', func + '.s')):
        return '-O0'
    m = re.match(r'func_(sc\d\d_\d\d\d)_', func)
    return '-O0' if m and len(files(m.group(1), root)) > 1 and is_o0(file_of(m.group(1), func, root)) else '-O2'


def o0_runs(ws, fs, base):
    """[(start, end)] addresses of the runs of -O0 functions: those whose first 12 words set the frame pointer.
    ws: the image's words, fs: [(first word, end word)] of its own functions (stage_census.find_funcs)"""
    runs, cur = [], None
    for a, b in fs:
        if FP_SET in ws[a:min(b, a + 12)]:
            cur = [base + a * 4, base + b * 4] if cur is None else [cur[0], base + b * 4]
        elif cur:
            runs.append(tuple(cur))
            cur = None
    if cur:
        runs.append(tuple(cur))
    return runs


def main():
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    import stage_census as C
    for f in sorted(os.listdir(os.path.join(ROOT, 'disc', 'pac4'))):
        if f.endswith('.bin') and f[:-4] != C.REF:
            ws = C.load(os.path.join(ROOT, 'disc', 'pac4', f))
            fs = C.find_funcs(ws, (C.ENG_END - C.BASE) // 4)
            runs = o0_runs(ws, fs, C.BASE)
            if runs:
                n = sum(1 for a, _ in fs for s, e in runs if s <= C.BASE + a * 4 < e)
                print(f[:-4], ' '.join(f'0x{s:08X}-0x{e:08X}' for s, e in runs), f'({n} functions)')


if __name__ == '__main__':
    main()
