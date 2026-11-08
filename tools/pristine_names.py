#!/usr/bin/env python3
"""r503: restore the splitter's address names in the Phase 1 source of truth (the `pristine` branch).

LuciDin, 8 Nov 2026: "The Pristine Repo should be the Decomp with no 'Phase 2' readability changes, so the original
func names and whatnot." This tool turns every name the project gave during Phase 1 back into a neutral one, as a pure
rename (no type, size, layout, expression or statement changes):

* functions and data named by hand (symbol_addrs*.txt, stg/ and abil/ symbol files, undefined_syms_extra.txt, and the
  C that uses them) get splat's address name in the form the owning image's config uses: func_8001xxxx / D_8001xxxx in
  the EXE, the mode overlays, the shared stage engine and the village; func_scXX_YYY_<addr> / D_scXX_YYY_<addr> for a
  stage's own code and data; func_ovlNN_<addr> / D_ovlNN_<addr> for an ability package's;
* struct and union types the project defined get a name from their size: struct_<SIZE> / union_<SIZE> (hex, no 0x),
  with _2, _3 ... for the second, third ... type of one size in the same file (headers first, then the file in order of
  definition); a struct tag and its typedef get the same name;
* their fields get field_<OFFSET> (hex byte offset from the start of the struct, no 0x); union members m0, m1 ... in
  declaration order; bit-fields field_<OFFSET>_b<BIT> (the byte holding their lowest bit, and the bit in it);
* other typedefs (function pointers, arrays, scalars) get type_<N>, enums enum_<N> and their constants
  enum_<N>_<VALUE>, numbered per file in order of definition.

Kept, with the reason in the kept-names report: the PsyQ / SDK names (symbol_addrs_psyq.txt, the SDK libraries'
function names, and the SDK's own types and their fields, checked against the Runtime Library 4.0 headers' names in
tools/pristine_sdk_names.txt), `main` (the C entry point PsyQ's startup calls), the basic types of include/common.h
(s8 .. u32), every macro (AF, WORK, PS1_FN, the gte_ macros, INCLUDE_ASM ...), local variables, parameters and labels
(no address form exists for them), and every comment (whether descriptive comments go is LuciDin's decision).

The C is read with pycparser after the build's own preprocessor (tools/compilers/gcc-2.7.2-psx/cpp.exe, the Makefile's
CPP_FLAGS plus -DM2CTX), with a scope-aware walk that resolves every identifier and every `.field` / `->field` to its
declaration, so a field is renamed by the struct it belongs to, never by its spelling.

Usage (from the root of a tree split at the pristine commit, with the Makefile's toolchain in place):
  python -I tools/pristine_names.py plan [--out DIR]     analyse; write the reports; change nothing
  python -I tools/pristine_names.py apply [--out DIR]    analyse, then rewrite src/, include/ and the symbol files
  python -I tools/pristine_names.py offsets [--out DIR]  compile a check of every field_<OFFSET> name with cc1
  python -I tools/pristine_names.py survivors [--out DIR] after apply: report any project name left in the code
  python -I tools/pristine_names.py sdk-names HEADERS_DIR  (re)write tools/pristine_sdk_names.txt from the SDK headers
Reports (default build/pristine/): renames.csv, kept.csv, comments.csv, report.md.
"""
import collections
import csv
import glob
import os
import re
import subprocess
import sys

from pycparser import c_ast, c_parser

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CPP = os.path.join(ROOT, 'tools', 'compilers', 'gcc-2.7.2-psx', 'cpp.exe')
CC1 = os.path.join(ROOT, 'tools', 'compilers', 'gcc-2.7.2-psx', 'cc1.exe')
CPP_FLAGS = ['-undef', '-Iinclude', '-D_LANGUAGE_C', '-DPSX', '-DM2CTX']
SDK_NAMES = os.path.join(ROOT, 'tools', 'pristine_sdk_names.txt')
OUT_DEFAULT = os.path.join(ROOT, 'build', 'pristine')

# the address ranges of docs/symbol_scheme.md section 1
EXE_LO, EXE_HI = 0x80010000, 0x800C7F08
PKG_LO, PKG_HI = 0x800C7F08, 0x800CEDF8      # ability package slots (0x800CAE08 / 0x800CCB1C)
MODE_LO, MODE_HI = 0x800CEDF8, 0x80128158    # mode overlays (ovl36 with its data block)
ENG_LO, ENG_HI = 0x80128158, 0x8017BE9C      # shared stage engine

AUTO_RE = re.compile(r'^(?:func|D|jtbl|L|B|STR)_(?:(?:ovl[0-9a-f]{2}|sc\d\d_\d\d\d)_)?[0-9A-F]{8}$')
NEUTRAL_RE = re.compile(r'^(?:struct|union)_(?:[0-9A-F]+|incomplete)(?:_\d+)?$|^field_[0-9A-F]+(?:_b\d+)?(?:_\d+)?$|'
                        r'^m\d+$|^type_\d+$|^enum_\d+(?:_-?[0-9A-Fx]+)?$')
INLINE_RE = re.compile(r'^(?:func|D)_(?:(?:ovl[0-9a-f]{2}|sc\d\d_\d\d\d)_)?[0-9A-F]{8}_inline(?:_\d+)?$')
SYM_LINE_RE = re.compile(r'^(\s*)([A-Za-z_]\w*)(\s*=\s*)(0x[0-9A-Fa-f]+)(\s*;.*)$')
BASIC = {'s8', 'u8', 's16', 'u16', 's32', 'u32'}
C_KEYWORDS = set('''auto break case char const continue default do double else enum extern float for goto if inline
int long register return short signed sizeof static struct switch typedef union unsigned void volatile while
__asm__ __typeof__ typeof asm'''.split())
KEEP_GLOBALS = {'main': 'the C entry point: PsyQ\'s startup (NOHEAP.OBJ __main) calls main; a C name, not a project one'}
# library code inside an overlay, named in that overlay's own symbol file (not symbol_addrs_psyq.txt)
KEEP_LIBRARY = {'DecDCTvlc': 'PsyQ 4.0 LIBPRESS VLC.OBJ in ovl39 (symbol_addrs_ovl39.txt; tools/psyq_match.py)',
                'DecDCTvlcSize': 'PsyQ 4.0 LIBPRESS VLC.OBJ in ovl39 (symbol_addrs_ovl39.txt; tools/psyq_match.py)'}


def rel(p):
    return os.path.relpath(p, ROOT).replace('\\', '/')


# ---- the configs and symbol files ------------------------------------------------------------------------------------

def yaml_configs():
    """[(config path, symbol_name_format prefix or '', [symbol files])] for every splat config"""
    out = []
    for y in sorted(glob.glob(os.path.join(ROOT, '*.yaml')) + glob.glob(os.path.join(ROOT, 'stg', '*.yaml')) +
                    glob.glob(os.path.join(ROOT, 'abil', '*.yaml'))):
        text = open(y, encoding='utf-8').read()
        m = re.search(r'^\s*symbol_name_format:\s*(\S+)', text, re.M)
        prefix = m.group(1).replace('$VRAM', '') if m else ''
        files, on = [], False
        for line in text.splitlines():
            if re.match(r'\s*symbol_addrs_path:', line):
                on = True
                continue
            if on:
                mm = re.match(r'\s*-\s*(\S+)', line)
                if mm:
                    files.append(mm.group(1))
                elif line.strip():
                    on = False
        out.append((rel(y), prefix, files))
    return out


def symbol_files():
    pats = ['symbol_addrs*.txt', 'undefined_syms*.txt', 'stg/symbol_addrs_*.txt', 'abil/symbol_addrs_*.txt']
    return sorted({rel(p) for pat in pats for p in glob.glob(os.path.join(ROOT, pat))})


def address_name(addr, kind, file):
    """splat's name for addr in the image that owns it, as the file's own config would write it"""
    base = 'func' if kind == 'func' else 'D'
    stage = re.match(r'stg/symbol_addrs_(sc\d\d_\d\d\d)\.txt$', file)
    pkg = re.match(r'abil/symbol_addrs_(ovl[0-9a-f]{2})\.txt$', file)
    if stage and addr >= ENG_HI:
        return f'{base}_{stage.group(1)}_{addr:08X}'
    if pkg and PKG_LO <= addr < PKG_HI:
        return f'{base}_{pkg.group(1)}_{addr:08X}'
    return f'{base}_{addr:08X}'


def read_symbols():
    """hand names in the symbol files: {name: (addr, kind, [(file, line no)])}, and the PsyQ names"""
    psyq = set()
    hand = {}
    for f in symbol_files():
        for n, line in enumerate(open(os.path.join(ROOT, f), encoding='utf-8').read().split('\n'), 1):
            m = SYM_LINE_RE.match(line)
            if not m or line.lstrip().startswith('//'):
                continue
            name, addr, rest = m.group(2), int(m.group(4), 16), m.group(5)
            if f == 'symbol_addrs_psyq.txt':
                psyq.add(name)
                continue
            if AUTO_RE.match(name):
                continue
            if name in KEEP_LIBRARY or name in KEEP_GLOBALS:
                psyq.add(name)
                continue
            kind = 'func' if re.search(r'type:\s*func', rest) else 'data'
            if name in hand and (hand[name][0] != addr):
                sys.exit(f'{f}:{n}: {name} = {addr:#x}, but {hand[name][2][0]} gives {hand[name][0]:#x}')
            e = hand.setdefault(name, [addr, kind, []])
            if kind == 'func':
                e[1] = 'func'
            e[2].append((f, n))
    return hand, psyq


def load_sdk_names():
    """{'types': {name: set(fields)}, 'funcs': set, 'other': set} from tools/pristine_sdk_names.txt"""
    types, funcs = {}, set()
    if not os.path.exists(SDK_NAMES):
        return types, funcs
    for line in open(SDK_NAMES, encoding='utf-8'):
        line = line.split('#', 1)[0].strip()
        if not line:
            continue
        kind, name, *rest = line.split()
        if kind == 'type':
            types[name] = set(rest)
        elif kind == 'func':
            funcs.add(name)
    return types, funcs


# ---- preprocessing and parsing ---------------------------------------------------------------------------------------

ASM_RE = re.compile(r'__asm__\s*(?:volatile\s*)?\(')
TYPEOF_RE = re.compile(r'\btypeof\s*\(([^()]*)\)')


def preprocess(path):
    r = subprocess.run([CPP] + CPP_FLAGS + [path], cwd=ROOT, capture_output=True)
    if r.returncode:
        sys.exit(f'cpp {path} failed: {r.stderr.decode(errors="replace")}')
    return r.stdout.decode('latin-1')


def sanitize(t):
    """rewrite GCC extensions pycparser cannot read, keeping every line and column: an asm statement
    `__asm__ volatile ("tmpl" : "=r"(a) : "r"(b) : "clobber")` becomes the comma expression `(0 , (a) , (b) )`, its
    operand expressions left where they were (their names are resolved and renamed like any other); typeof(x) becomes
    `int` (only ever used to name the type of a cast whose result is assigned)"""
    res = list(t)
    pos = 0
    while True:
        m = ASM_RE.search(t, pos)
        if not m:
            break
        open_at = m.end() - 1
        j, depth = m.end(), 1
        keep = []                 # [start, end) of each operand expression with its parentheses
        in_str = set()            # cpp writes the templates' line breaks as real newlines: not source lines
        while depth:
            c = t[j]
            if c == '"':
                k = j + 1
                while t[k] != '"':
                    k += 2 if t[k] == '\\' else 1
                in_str.update(range(j, k + 1))
                j = k + 1
                continue
            if c == '(':
                if depth == 1:
                    keep.append([j, None])
                depth += 1
            elif c == ')':
                depth -= 1
                if depth == 1:
                    keep[-1][1] = j + 1
            j += 1
        close_at = j - 1
        inside = set()
        for a, b in keep:
            inside.update(range(a, b))
        for k in range(m.start(), close_at + 1):
            if k not in inside and (res[k] != '\n' or k in in_str):
                res[k] = ' '
        res[open_at], res[close_at] = '(', ')'
        if open_at + 1 in inside:
            raise ValueError(f'asm with no template at offset {open_at}')
        res[open_at + 1] = '0'
        for a, b in keep:
            # a comma in the blank just before each operand (its constraint string, "r" or "=r", was there)
            q = a - 1
            while q > open_at + 1 and (q in inside or res[q] in '\n,'):
                q -= 1
            if q <= open_at + 1:
                raise ValueError(f'asm operand without room for a separator at offset {a}')
            res[q] = ','
        pos = close_at + 1
    t = ''.join(res)
    return TYPEOF_RE.sub(lambda m: 'int' + ' ' * (len(m.group(0)) - 3), t)


# ---- types -----------------------------------------------------------------------------------------------------------

class StructInfo:
    __slots__ = ('kind', 'tag', 'key', 'file', 'line', 'col', 'fields', 'size', 'align', 'complete', 'typedefs',
                 'tu', 'node', 'scope_kind')

    def __init__(self, kind, tag, key, tu):
        self.kind, self.tag, self.key, self.tu = kind, tag, key, tu
        self.file, self.line, self.col = key if key else (None, 0, 0)
        self.fields = []          # [Field]
        self.size, self.align, self.complete = 0, 1, False
        self.typedefs = []        # typedef names that name exactly this struct
        self.node = None
        self.scope_kind = None


class Field:
    __slots__ = ('name', 'ty', 'off', 'bit', 'width', 'index', 'key', 'owner')

    def __init__(self, name, ty, off, bit, width, index, key, owner):
        self.name, self.ty, self.off, self.bit, self.width = name, ty, off, bit, width
        self.index, self.key, self.owner = index, key, owner


INT = ('b', 4, 4)
BASE_SIZES = {'char': 1, 'short': 2, 'int': 4, 'long': 4, 'float': 4, 'double': 8, 'void': 1}


def base_type(names):
    ns = [n for n in names if n not in ('signed', 'unsigned', 'const', 'volatile')]
    if not ns:
        return INT
    if ns.count('long') == 2:
        return ('b', 8, 8)
    for n in ('char', 'short', 'double', 'float', 'void'):
        if n in ns:
            s = BASE_SIZES[n]
            return ('void',) if n == 'void' else ('b', s, s)
    return INT


def sizeof(t):
    k = t[0]
    if k == 'b':
        return t[1], t[2]
    if k in ('p', 'f'):
        return 4, 4
    if k == 'void':
        return 1, 1
    if k == 'e':
        return 4, 4
    if k == 'a':
        s, a = sizeof(t[1])
        return s * (t[2] or 0), a
    if k == 's':
        return t[1].size, t[1].align
    raise ValueError(t)


def strip(t):
    return t


def deref(t):
    if t and t[0] in ('p', 'a'):
        return t[1]
    return None


class Entity:
    """something with a name that the rename may change"""
    __slots__ = ('kind', 'name', 'key', 'tu', 'obj', 'new', 'why', 'info')

    def __init__(self, kind, name, key=None, tu=None, obj=None):
        self.kind, self.name, self.key, self.tu, self.obj = kind, name, key, tu, obj
        self.new, self.why, self.info = None, None, ''


class Occ:
    __slots__ = ('file', 'line', 'col', 'name', 'cls', 'ent')

    def __init__(self, file, line, col, name, cls, ent):
        self.file, self.line, self.col, self.name, self.cls, self.ent = file, line, col, name, cls, ent


class Scope:
    def __init__(self, parent=None, kind='block'):
        self.parent, self.kind = parent, kind
        self.ords = {}    # name -> ('var', Entity|None, ty) | ('func', Entity|None, ty) | ('typedef', Entity, ty) | ('enumc', Entity, value)
        self.tags = {}    # name -> StructInfo | ('enum', Entity)

    def find(self, name, tags=False):
        s = self
        while s:
            d = s.tags if tags else s.ords
            if name in d:
                return d[name]
            s = s.parent
        return None


class Unresolved(Exception):
    pass


class TU:
    """one translation unit: walk its AST, resolve every identifier, collect the occurrences and the entities"""

    def __init__(self, path, an):
        self.path, self.an = path, an
        self.occ = []
        self.problems = []
        self.structs = []        # every StructInfo defined in this TU (headers included)
        self.typedefs = []       # Entity kind 'typedef'
        self.enums = []          # Entity kind 'enum'
        self.file_scope = Scope(kind='file')
        self.statics = {}        # file-scope static names: Entity kind 'static'
        self.cur_func = None
        self.funcs = []          # (line, Entity) of every function definition, in file order

    # -- helpers
    def key(self, node):
        c = node.coord
        return (c.file, c.line, c.column or 0) if c else None

    def note(self, coord, name, cls, ent):
        if coord is None or name is None:
            return
        self.occ.append(Occ(coord.file, coord.line, coord.column or 0, name, cls, ent))

    def problem(self, node, msg):
        c = node.coord if node is not None else None
        self.problems.append(f'{c.file}:{c.line}: {msg}' if c else msg)

    # -- constant expressions
    def const(self, node, scope):
        if node is None:
            return None
        if isinstance(node, c_ast.Constant):
            v = node.value.rstrip('uUlL')
            if node.type == 'char':
                s = node.value[1:-1]
                return ord(s.encode().decode('unicode_escape')) if s else 0
            if node.type in ('float', 'double'):
                return float(v)
            if v.lower().startswith('0x'):
                return int(v, 16)
            if v.startswith('0') and len(v) > 1:
                return int(v, 8)
            return int(v)
        if isinstance(node, c_ast.ID):
            e = scope.find(node.name)
            self.expr(node, scope)
            if e and e[0] == 'enumc':
                return e[2]
            raise Unresolved(f'constant {node.name}')
        if isinstance(node, c_ast.UnaryOp):
            if node.op == 'sizeof':
                if isinstance(node.expr, c_ast.Typename):
                    return sizeof(self.typename(node.expr, scope))[0]
                return sizeof(self.expr(node.expr, scope))[0]
            v = self.const(node.expr, scope)
            return {'-': lambda x: -x, '+': lambda x: x, '~': lambda x: ~x, '!': lambda x: int(not x)}[node.op](v)
        if isinstance(node, c_ast.BinaryOp):
            a, b = self.const(node.left, scope), self.const(node.right, scope)
            ops = {'+': lambda: a + b, '-': lambda: a - b, '*': lambda: a * b, '/': lambda: int(a / b),
                   '%': lambda: a % b, '<<': lambda: a << b, '>>': lambda: a >> b, '|': lambda: a | b,
                   '&': lambda: a & b, '^': lambda: a ^ b, '==': lambda: int(a == b), '!=': lambda: int(a != b),
                   '<': lambda: int(a < b), '>': lambda: int(a > b), '<=': lambda: int(a <= b),
                   '>=': lambda: int(a >= b), '&&': lambda: int(a and b), '||': lambda: int(a or b)}
            return ops[node.op]()
        if isinstance(node, c_ast.Cast):
            self.typename(node.to_type, scope)
            return self.const(node.expr, scope)
        if isinstance(node, c_ast.TernaryOp):
            c = self.const(node.cond, scope)
            return self.const(node.iftrue if c else node.iffalse, scope)
        raise Unresolved(f'constant {type(node).__name__}')

    # -- types
    def typename(self, tn, scope):
        return self.type_of(tn.type, scope)

    def type_of(self, t, scope, declname_cls=None):
        if isinstance(t, c_ast.TypeDecl):
            return self.type_of(t.type, scope)
        if isinstance(t, c_ast.IdentifierType):
            if len(t.names) == 1 and t.names[0] not in BASE_SIZES and t.names[0] not in ('signed', 'unsigned'):
                e = scope.find(t.names[0])
                if e and e[0] == 'typedef':
                    self.note(t.coord, t.names[0], 'o', e[1])
                    return e[2]
                self.problem(t, f'unknown type name {t.names[0]}')
                return INT
            return base_type(t.names)
        if isinstance(t, c_ast.PtrDecl):
            return ('p', self.type_of(t.type, scope))
        if isinstance(t, c_ast.ArrayDecl):
            inner = self.type_of(t.type, scope)
            n = None
            if t.dim is not None:
                try:
                    n = self.const(t.dim, scope)
                except Unresolved as e:
                    self.problem(t, f'array size: {e}')
                    n = 0
            return ('a', inner, n)
        if isinstance(t, c_ast.FuncDecl):
            ret = self.type_of(t.type, scope)
            if t.args:
                ps = Scope(scope, 'proto')
                for a in t.args.params:
                    if isinstance(a, c_ast.EllipsisParam):
                        continue
                    if isinstance(a, c_ast.ID):     # K&R identifier list
                        self.note(a.coord, a.name, 'o', None)
                        continue
                    at = self.type_of(a.type, ps)
                    if getattr(a, 'name', None):
                        self.note(self.decl_coord(a), a.name, 'o', None)
                        ps.ords[a.name] = ('var', None, at)
            return ('f', ret)
        if isinstance(t, (c_ast.Struct, c_ast.Union)):
            return ('s', self.struct(t, scope))
        if isinstance(t, c_ast.Enum):
            self.enum(t, scope)
            return ('e',)
        raise ValueError(type(t))

    def decl_coord(self, d):
        t = d.type
        while not isinstance(t, c_ast.TypeDecl) and hasattr(t, 'type'):
            t = t.type
        return t.coord if isinstance(t, c_ast.TypeDecl) and t.coord else d.coord

    def struct(self, t, scope):
        kind = 'union' if isinstance(t, c_ast.Union) else 'struct'
        if t.decls is None:
            if t.name is None:
                self.problem(t, 'anonymous struct reference')
                return StructInfo(kind, None, None, self)
            si = scope.find(t.name, tags=True)
            if si is None or not isinstance(si, StructInfo):
                si = StructInfo(kind, t.name, None, self)
                scope.tags[t.name] = si
                self.structs.append(si)
            self.note(t.coord, t.name, 'o', ('tag', si))
            return si
        si = None
        if t.name is not None:
            old = scope.tags.get(t.name)
            if isinstance(old, StructInfo) and not old.complete and old.key is None:
                si = old
                si.key = self.key(t)
                si.file, si.line, si.col = si.key
        if si is None:
            si = StructInfo(kind, t.name, self.key(t), self)
            self.structs.append(si)
            if t.name is not None:
                scope.tags[t.name] = si
        si.node = t
        si.scope_kind = scope.kind
        if t.name is not None:
            self.note(t.coord, t.name, 'o', ('tag', si))
        bitpos, align, size, idx = 0, 1, 0, 0
        for d in t.decls:
            if isinstance(d, c_ast.Pragma):
                continue
            ft = self.type_of(d.type, scope)
            fs, fa = sizeof(ft)
            width = None
            if d.bitsize is not None:
                width = self.const(d.bitsize, scope)
            if kind == 'union':
                off, bit = 0, None
                if width is not None:
                    bit = 0
                size = max(size, fs if width is None else fs)
                if width is None or d.name:
                    align = max(align, fa)
            elif width is not None:
                unit = fs * 8
                if width == 0:
                    bitpos = -(-bitpos // (fa * 8)) * (fa * 8)
                    continue
                if bitpos // unit != (bitpos + width - 1) // unit:
                    bitpos = -(-bitpos // unit) * unit
                off, bit = bitpos // 8, bitpos % 8
                bitpos += width
                if d.name:
                    align = max(align, fa)
            else:
                bitpos = -(-bitpos // (fa * 8)) * (fa * 8)
                off, bit = bitpos // 8, None
                bitpos += fs * 8
                align = max(align, fa)
            f = Field(d.name, ft, off, bit, width, idx, self.key(d), si)
            si.fields.append(f)
            if d.name:
                self.note(self.decl_coord(d), d.name, 'o', ('field', si, f))
            idx += 1
        if kind == 'struct':
            size = -(-bitpos // 8)
        si.size = -(-size // align) * align
        si.align = align
        si.complete = True
        return si

    def enum(self, t, scope):
        ent = None
        if t.values is None:
            if t.name:
                e = scope.find(t.name, tags=True)
                ent = e[1] if isinstance(e, tuple) else None
                self.note(t.coord, t.name, 'o', ('enumtag', ent))
            return
        ent = Entity('enum', t.name, self.key(t), self)
        ent.info = []
        self.enums.append(ent)
        if t.name:
            scope.tags[t.name] = ('enum', ent)
            self.note(t.coord, t.name, 'o', ('enumtag', ent))
        v = -1
        for en in t.values.enumerators:
            if en.value is not None:
                v = self.const(en.value, scope)
            else:
                v += 1
            ce = Entity('enumc', en.name, self.key(en), self, obj=(ent, v))
            ent.info.append(ce)
            scope.ords[en.name] = ('enumc', ce, v)
            self.note(en.coord, en.name, 'o', ce)

    # -- declarations
    def decl(self, d, scope):
        if isinstance(d, c_ast.Typedef):
            ty = self.type_of(d.type, scope)
            ent = Entity('typedef', d.name, self.key(d), self, obj=ty)
            self.typedefs.append(ent)
            if ty[0] == 's' and self.is_direct_struct(d.type):
                ty[1].typedefs.append(ent)
            scope.ords[d.name] = ('typedef', ent, ty)
            self.note(self.decl_coord(d), d.name, 'o', ent)
            return
        if not isinstance(d, c_ast.Decl):
            self.problem(d, f'unexpected declaration {type(d).__name__}')
            return
        ty = self.type_of(d.type, scope)
        if d.name is None:
            return
        glob_ = scope.kind == 'file' or 'extern' in (d.storage or [])
        if 'static' in (d.storage or []) and scope.kind != 'file':
            glob_ = False
        if glob_:
            ent = self.static_ent(d.name, d) if 'static' in (d.storage or []) else self.an.global_ent(d.name)
            if scope.kind != 'file' and 'extern' in d.storage:
                self.file_scope.ords.setdefault(d.name, ('func' if ty[0] == 'f' else 'var', ent, ty))
        else:
            ent = None
        scope.ords[d.name] = ('func' if ty[0] == 'f' else 'var', ent, ty)
        self.note(self.decl_coord(d), d.name, 'o', ent)
        if d.init is not None:
            self.init(d.init, ty, scope)

    def is_direct_struct(self, t):
        return isinstance(t, c_ast.TypeDecl) and isinstance(t.type, (c_ast.Struct, c_ast.Union))

    def init(self, init, ty, scope):
        if isinstance(init, c_ast.InitList):
            cur = 0
            for e in init.exprs:
                if isinstance(e, c_ast.NamedInitializer):
                    sub = ty
                    for nm in e.name:
                        if isinstance(nm, c_ast.ID):
                            if sub and sub[0] == 's':
                                f = self.field(sub[1], nm.name, nm)
                                self.note(nm.coord, nm.name, 'f', ('field', sub[1], f) if f else None)
                                sub = f.ty if f else None
                            else:
                                self.problem(nm, f'designator .{nm.name} on a non-struct')
                                self.note(nm.coord, nm.name, 'f', None)
                                sub = None
                        else:
                            self.expr(nm, scope)
                            sub = deref(sub)
                    self.init(e.expr, sub, scope)
                    continue
                sub = None
                if ty and ty[0] == 'a':
                    sub = ty[1]
                elif ty and ty[0] == 's':
                    flds = [f for f in ty[1].fields]
                    sub = flds[cur].ty if cur < len(flds) else None
                self.init(e, sub, scope)
                cur += 1
            return
        self.expr(init, scope)

    def field(self, si, name, node):
        for f in si.fields:
            if f.name == name:
                return f
        for f in si.fields:
            if f.name is None and f.ty[0] == 's':
                g = self.field(f.ty[1], name, node)
                if g:
                    return g
        self.problem(node, f'no field {name} in {si.kind} {si.tag or si.typedefs and si.typedefs[0].name}')
        return None

    # -- expressions
    def expr(self, n, scope):
        if n is None:
            return None
        if isinstance(n, c_ast.ID):
            e = scope.find(n.name)
            if e is None:
                g = self.an.global_ent(n.name)
                g.info['refs'] += 1
                self.note(n.coord, n.name, 'o', g)
                return ('f', INT)
            if isinstance(e[1], Entity) and e[1].kind == 'global':
                e[1].info['refs'] += 1
            self.note(n.coord, n.name, 'o', e[1])
            if isinstance(e[1], Entity) and e[1].kind == 'static':
                e[1].info['uses'] += 1
                if self.cur_func is not None and self.cur_func is not e[1]:
                    e[1].info['callers'].append(self.cur_func)
            if e[0] == 'enumc':
                return INT
            return e[2]
        if isinstance(n, c_ast.Constant):
            return ('p', ('b', 1, 1)) if n.type == 'string' else INT
        if isinstance(n, c_ast.StructRef):
            bt = self.expr(n.name, scope)
            if n.type == '->':
                bt = deref(bt)
            if not bt or bt[0] != 's':
                self.problem(n, f'cannot resolve the struct of {n.type}{n.field.name} (base {bt})')
                self.note(n.field.coord, n.field.name, 'f', ('unresolved',))
                return None
            f = self.field(bt[1], n.field.name, n.field)
            self.note(n.field.coord, n.field.name, 'f', ('field', bt[1], f) if f else ('unresolved',))
            return f.ty if f else None
        if isinstance(n, c_ast.ArrayRef):
            a = self.expr(n.name, scope)
            b = self.expr(n.subscript, scope)
            return deref(a) or deref(b) or INT
        if isinstance(n, c_ast.UnaryOp):
            if n.op == 'sizeof':
                if isinstance(n.expr, c_ast.Typename):
                    self.typename(n.expr, scope)
                else:
                    self.expr(n.expr, scope)
                return INT
            t = self.expr(n.expr, scope)
            if n.op == '*':
                if t and t[0] == 'f':
                    return t
                return deref(t)
            if n.op == '&':
                return ('p', t) if t else None
            if n.op == '!':
                return INT
            return t
        if isinstance(n, c_ast.Cast):
            t = self.typename(n.to_type, scope)
            self.expr(n.expr, scope)
            return t
        if isinstance(n, c_ast.BinaryOp):
            a = self.expr(n.left, scope)
            b = self.expr(n.right, scope)
            if n.op in ('+', '-'):
                if a and a[0] in ('p', 'a'):
                    if n.op == '-' and b and b[0] in ('p', 'a'):
                        return INT
                    return ('p', a[1])
                if b and b[0] in ('p', 'a'):
                    return ('p', b[1])
            if n.op in ('==', '!=', '<', '>', '<=', '>=', '&&', '||'):
                return INT
            return a or b
        if isinstance(n, c_ast.Assignment):
            a = self.expr(n.lvalue, scope)
            self.expr(n.rvalue, scope)
            return a
        if isinstance(n, c_ast.TernaryOp):
            self.expr(n.cond, scope)
            a = self.expr(n.iftrue, scope)
            b = self.expr(n.iffalse, scope)
            return a or b
        if isinstance(n, c_ast.FuncCall):
            t = self.expr(n.name, scope)
            if n.args:
                for a in n.args.exprs:
                    self.expr(a, scope)
            if t and t[0] == 'p':
                t = t[1]
            if t and t[0] == 'f':
                return t[1]
            return INT
        if isinstance(n, c_ast.ExprList):
            t = None
            for e in n.exprs:
                t = self.expr(e, scope)
            return t
        if isinstance(n, c_ast.CompoundLiteral):
            t = self.typename(n.type, scope)
            self.init(n.init, t, scope)
            return t
        if isinstance(n, c_ast.Typename):
            return self.typename(n, scope)
        if isinstance(n, c_ast.InitList):
            self.init(n, None, scope)
            return None
        self.problem(n, f'unhandled expression {type(n).__name__}')
        return None

    # -- statements
    def stmt(self, s, scope):
        if s is None:
            return
        if isinstance(s, c_ast.Compound):
            inner = Scope(scope)
            for b in s.block_items or []:
                self.stmt(b, inner)
        elif isinstance(s, (c_ast.Decl, c_ast.Typedef)):
            self.decl(s, scope)
        elif isinstance(s, c_ast.DeclList):
            for d in s.decls:
                self.decl(d, scope)
        elif isinstance(s, c_ast.If):
            self.expr(s.cond, scope)
            self.stmt(s.iftrue, scope)
            self.stmt(s.iffalse, scope)
        elif isinstance(s, c_ast.For):
            inner = Scope(scope)
            if isinstance(s.init, c_ast.DeclList):
                self.stmt(s.init, inner)
            else:
                self.expr(s.init, inner)
            self.expr(s.cond, inner)
            self.expr(s.next, inner)
            self.stmt(s.stmt, inner)
        elif isinstance(s, (c_ast.While, c_ast.DoWhile)):
            self.expr(s.cond, scope)
            self.stmt(s.stmt, scope)
        elif isinstance(s, c_ast.Switch):
            self.expr(s.cond, scope)
            self.stmt(s.stmt, scope)
        elif isinstance(s, c_ast.Case):
            self.expr(s.expr, scope)
            for b in s.stmts or []:
                self.stmt(b, scope)
        elif isinstance(s, c_ast.Default):
            for b in s.stmts or []:
                self.stmt(b, scope)
        elif isinstance(s, c_ast.Label):
            self.note(s.coord, s.name, 'o', None)
            self.stmt(s.stmt, scope)
        elif isinstance(s, c_ast.Goto):
            self.note(s.coord, s.name, 'o', None)
        elif isinstance(s, c_ast.Return):
            self.expr(s.expr, scope)
        elif isinstance(s, (c_ast.Break, c_ast.Continue, c_ast.EmptyStatement, c_ast.Pragma)):
            pass
        else:
            self.expr(s, scope)

    def static_ent(self, name, d):
        e = self.statics.get(name)
        if e is None:
            e = self.statics[name] = Entity('static', name, self.key(d), self)
            e.info = {'inline': False, 'func': False, 'callers': [], 'uses': 0}
        return e

    def funcdef(self, fd, scope):
        d = fd.decl
        ty = self.type_of(d.type, scope)
        if 'static' in (d.storage or []):
            ent = self.static_ent(d.name, d)
            ent.info['func'] = True
            ent.info['inline'] = 'inline' in (d.funcspec or [])
        else:
            ent = self.an.global_ent(d.name)
        scope.ords[d.name] = ('func', ent, ty)
        self.note(self.decl_coord(d), d.name, 'o', ent)
        if d.coord and d.coord.file == self.path:
            self.funcs.append((d.coord.line, ent))
        self.cur_func = ent
        fs = Scope(scope, 'func')
        ft = d.type
        if isinstance(ft, c_ast.FuncDecl) and ft.args:
            for a in ft.args.params:
                if isinstance(a, c_ast.Decl) and a.name:
                    fs.ords[a.name] = ('var', None, self._param_type(a, scope))
                elif isinstance(a, c_ast.ID):
                    fs.ords[a.name] = ('var', None, INT)
        for pd in fd.param_decls or []:     # K&R
            pt = self.type_of(pd.type, scope)
            self.note(self.decl_coord(pd), pd.name, 'o', None)
            fs.ords[pd.name] = ('var', None, pt)
        self.stmt(fd.body, fs)
        self.cur_func = None

    def _param_type(self, a, scope):
        # the parameter's type was walked (and its occurrences noted) with the FuncDecl; resolve it again quietly
        saved = len(self.occ), len(self.problems)
        t = self.type_of(a.type, scope)
        del self.occ[saved[0]:]
        del self.problems[saved[1]:]
        return t

    def run(self, text):
        ast = c_parser.CParser().parse(text, self.path)
        for ext in ast.ext:
            if isinstance(ext, c_ast.FuncDef):
                self.funcdef(ext, self.file_scope)
            elif isinstance(ext, c_ast.Pragma):
                pass
            else:
                self.decl(ext, self.file_scope)
        return self


# ---- the analysis over every unit ------------------------------------------------------------------------------------

class Analysis:
    def __init__(self):
        self.hand, self.psyq = read_symbols()
        self.sdk_types, self.sdk_funcs = load_sdk_names()
        self.globals = {}
        self.tus = []

    def global_ent(self, name):
        e = self.globals.get(name)
        if e is None:
            e = self.globals[name] = Entity('global', name)
            e.info = {'refs': 0}
        return e

    def run(self, files=None, verbose=True):
        files = files or sorted(rel(p) for p in glob.glob(os.path.join(ROOT, 'src', '**', '*.c'), recursive=True))
        for i, f in enumerate(files):
            tu = TU(f, self)
            try:
                tu.run(sanitize(preprocess(f)))
            except Exception as e:      # noqa: BLE001
                tu.problems.append(f'{f}: parse failed: {e}')
            self.tus.append(tu)
            if verbose and (i % 20 == 0):
                print(f'  analysed {i + 1} / {len(files)}: {f}', file=sys.stderr)
        return self


# ---- naming ----------------------------------------------------------------------------------------------------------

def skey(si):
    return si.key if si.key else ('<undefined>', si.tu.path, si.tag)


def is_header(path):
    return path.startswith('include/')


class Namer:
    """decides every new name; the reports and the rewrite read its tables"""

    def __init__(self, an):
        self.an = an
        self.structs = {}         # struct key -> representative StructInfo
        self.struct_new = {}      # struct key -> new name (absent: kept or nameless)
        self.struct_why = {}      # struct key -> reason it was kept
        self.field_new = {}       # (struct key, field index) -> new name
        self.field_kept = {}      # (struct key, field index) -> reason
        self.typedef_new = {}     # typedef key -> new name
        self.typedef_kept = {}    # typedef key -> reason
        self.typedef_rep = {}     # typedef key -> Entity
        self.problems = []

    # -- types
    def sdk_names(self, si):
        names = [si.tag] + [t.name for t in si.typedefs]
        return [n for n in names if n and n in self.an.sdk_types]

    def name_types(self):
        for tu in self.an.tus:
            for si in tu.structs:
                k = skey(si)
                if k not in self.structs or (not self.structs[k].complete and si.complete):
                    self.structs[k] = si
            for t in tu.typedefs:
                self.typedef_rep.setdefault(t.key, t)
        # header types first, all files together, then each unit's own
        header_taken = set()
        hdr = sorted((k for k, si in self.structs.items() if si.file and is_header(si.file)))
        self._name_struct_group(hdr, header_taken)
        hdr_td = sorted((k for k, t in self.typedef_rep.items() if is_header(k[0])))
        self._name_typedef_group(hdr_td, header_taken, start=1)
        n_hdr_td = sum(1 for k in hdr_td if self.typedef_new.get(k, '').startswith('type_'))
        by_tu = collections.defaultdict(list)
        for k, si in self.structs.items():
            if si.file and not is_header(si.file):
                by_tu[si.file].append(k)
            elif not si.file:
                by_tu[k[1]].append(k)
        td_by_tu = collections.defaultdict(list)
        for k, t in self.typedef_rep.items():
            if not is_header(k[0]):
                td_by_tu[k[0]].append(k)
        for f in sorted(set(by_tu) | set(td_by_tu)):
            taken = set(header_taken)
            self._name_struct_group(sorted(by_tu[f], key=lambda k: (k[1], k[2]) if isinstance(k[1], int) else (0, 0)),
                                    taken)
            self._name_typedef_group(sorted(td_by_tu[f], key=lambda k: (k[1], k[2])), taken, start=n_hdr_td + 1)
        for k, si in self.structs.items():
            self._name_fields(k, si)

    def _unique(self, base, taken):
        name, n = base, 1
        while name in taken:
            n += 1
            name = f'{base}_{n}'
        taken.add(name)
        return name

    def _name_struct_group(self, keys, taken):
        for k in keys:
            si = self.structs[k]
            if not si.tag and not si.typedefs:
                continue                      # an unnamed type: only its fields have names
            sdk = self.sdk_names(si)
            if sdk:
                self.struct_why[k] = f'SDK type {"/".join(sdk)} (Runtime Library 4.0 headers)'
                continue
            if not si.complete:
                self.struct_new[k] = self._unique(f'{si.kind}_incomplete', taken)
                continue
            self.struct_new[k] = self._unique(f'{si.kind}_{si.size:X}', taken)

    def _name_typedef_group(self, keys, taken, start):
        n = start
        for k in keys:
            t = self.typedef_rep[k]
            ty = t.obj
            if t.name in BASIC:
                self.typedef_kept[k] = 'basic type of include/common.h (the usual decomp spelling of the C types)'
                continue
            if t.name in self.an.sdk_types:
                self.typedef_kept[k] = 'SDK type name (Runtime Library 4.0 headers)'
                continue
            if ty[0] == 's':
                sk = skey(ty[1])
                if t in ty[1].typedefs or any(x.key == t.key for x in ty[1].typedefs):
                    first = ty[1].typedefs[0].key == t.key
                    base = self.struct_new.get(sk)
                    if base is None:
                        why = self.struct_why.get(sk)
                        if why:
                            self.typedef_kept[k] = why
                            continue
                        self.problems.append(f'{k}: typedef {t.name} of a nameless struct')
                        continue
                    self.typedef_new[k] = base if first else self._unique(base, taken)
                    continue
            while f'type_{n}' in taken:
                n += 1
            self.typedef_new[k] = f'type_{n}'
            taken.add(f'type_{n}')
            n += 1

    def _name_fields(self, k, si):
        sdk = self.sdk_names(si)
        keep = set()
        for n in sdk:
            keep |= self.an.sdk_types[n]
        used = set()
        for f in si.fields:
            if f.name is None:
                continue
            if sdk and f.name in keep:
                self.field_kept[(k, f.index)] = f'field of SDK type {"/".join(sdk)}'
                used.add(f.name)
                continue
            if si.kind == 'union':
                base = f'm{f.index}'
            elif f.width is not None:
                base = f'field_{f.off:X}_b{f.bit}'
            else:
                base = f'field_{f.off:X}'
            new = base
            n = 1
            while new in used:
                n += 1
                new = f'{base}_{n}'
            if new != base:
                self.problems.append(f'{k}: two fields at +0x{f.off:X} ({f.name} -> {new})')
            used.add(new)
            self.field_new[(k, f.index)] = new

    # -- functions and data
    def name_globals(self):
        an = self.an
        self.global_new, self.global_kept = {}, {}
        for name, e in an.globals.items():
            if AUTO_RE.match(name):
                continue
            if name in KEEP_GLOBALS:
                self.global_kept[name] = KEEP_GLOBALS[name]
            elif name in KEEP_LIBRARY:
                self.global_kept[name] = KEEP_LIBRARY[name]
            elif name in an.psyq:
                self.global_kept[name] = 'PsyQ library name (symbol_addrs_psyq.txt)'
            elif name in an.hand:
                addr, kind, where = an.hand[name]
                news = {address_name(addr, kind, f) for f, _ in where}
                if len(news) != 1:
                    self.problems.append(f'{name}: owners disagree {sorted(news)}')
                self.global_new[name] = sorted(news)[0]
            elif name in an.sdk_funcs:
                self.global_kept[name] = 'C / SDK library function (declared in the Runtime Library 4.0 headers)'
            else:
                self.problems.append(f'{name}: a global name with no address (not in any symbol file)')
        self.static_new, self.static_kept = {}, {}
        for tu in an.tus:
            declared = {o.name for o in tu.occ if isinstance(o.ent, Entity) and o.ent.kind in ('global', 'static')}
            for name, e in tu.statics.items():
                self._name_static(tu, e, declared)

    def unused_extern(self, name, tu):
        e = self.an.globals.get(name)
        return e is not None and e.info['refs'] == 0

    def _name_static(self, tu, e, declared):
        k = (tu.path, e.name)
        if k in self.static_new or k in self.static_kept:
            return self.static_new.get(k)
        if AUTO_RE.match(e.name):
            return None
        if not (e.info['func'] and e.info['inline']):
            self.problems.append(f'{tu.path}: static {e.name} is not an inline function')
            return None
        callers = e.info['callers']
        if callers:
            c = callers[0]
        else:
            # never called: named after the function defined next in the file
            line = e.key[1] if e.key and e.key[0] == tu.path else 0
            after = [ent for ln, ent in tu.funcs if ln > line and ent is not e]
            if not after:
                self.problems.append(f'{tu.path}: inline helper {e.name} is never called, and no function follows it')
                return None
            c = after[0]
            e.info['never_called'] = True
        seen = {id(e)}
        while c.kind == 'static' and id(c) not in seen:     # a helper of a helper: the function at the top
            seen.add(id(c))
            nxt = c.info['callers']
            if not nxt:
                break
            c = nxt[0]
        base = self.global_new.get(c.name, c.name)
        self.static_new[k] = None      # guard against cycles
        new = self._unique(f'{base}_inline', self._tu_taken(tu, declared))
        self.static_new[k] = new
        return new

    def _tu_taken(self, tu, declared):
        t = getattr(tu, '_taken', None)
        if t is None:
            t = tu._taken = set(declared) | {v for (p, _), v in self.static_new.items() if p == tu.path and v}
        return t

    # -- occurrences
    def new_for(self, o, tu):
        ent = o.ent
        if ent is None:
            return None
        if isinstance(ent, Entity):
            if ent.kind == 'global':
                return self.global_new.get(ent.name)
            if ent.kind == 'static':
                return self.static_new.get((ent.tu.path, ent.name))
            if ent.kind == 'typedef':
                return self.typedef_new.get(ent.key)
            return None
        if ent[0] == 'tag':
            return self.struct_new.get(skey(ent[1]))
        if ent[0] == 'field':
            return self.field_new.get((skey(ent[1]), ent[2].index))
        if ent[0] == 'unresolved':
            self.problems.append(f'{o.file}:{o.line}: unresolved {o.name}')
        return None

    def run(self):
        self.name_types()
        self.name_globals()
        self.unused_externs()
        return self

    def unused_externs(self):
        """an extern declared but never referenced, under a name with no address: the address-like ones lose their
        suffix where that name is free in the unit (D_80078DD2b -> D_80078DD2); the rest are kept and reported"""
        self.unused_kept = {}
        for p in list(self.problems):
            m = re.match(r'(\w+): a global name with no address', p)
            if not m:
                continue
            name = m.group(1)
            e = self.an.globals[name]
            if e.info['refs']:
                continue
            tus = [tu for tu in self.an.tus if any(o.name == name and o.ent is e for o in tu.occ)]
            base = re.match(r'^((?:D|func)_(?:(?:ovl[0-9a-f]{2}|sc\d\d_\d\d\d)_)?[0-9A-F]{8})[a-z]+$', name)
            clash = base and any(any(o.name == base.group(1) or (isinstance(o.ent, Entity) and o.ent.kind == 'global'
                                                                  and self.global_new.get(o.name) == base.group(1))
                                     for o in tu.occ) for tu in tus)
            self.problems.remove(p)
            if base and not clash:
                self.global_new[name] = base.group(1)
            else:
                why = ('the address name is already declared in that file with another type'
                       if base else 'no address: nothing refers to it')
                self.unused_kept[name] = f'unused extern declaration in {", ".join(t.path for t in tus)}; {why}'


# ---- rewriting the sources -------------------------------------------------------------------------------------------

class Tok:
    __slots__ = ('line', 'start', 'end', 'name', 'cls', 'pp', 'define')

    def __init__(self, line, start, end, name, cls, pp, define):
        self.line, self.start, self.end, self.name, self.cls, self.pp, self.define = \
            line, start, end, name, cls, pp, define


def tokenize(text):
    """identifiers of a C file outside comments, strings and character constants, with their line, offsets, class
    ('f' after . or ->, else 'o') and whether they sit in a preprocessor directive; also the comments"""
    toks, comments = [], []
    i, n, line = 0, len(text), 1
    prev = ''
    at_bol = True
    pp = False
    define = None
    while i < n:
        c = text[i]
        if c == '\n':
            if not (pp and i > 0 and text[i - 1] == '\\') and not (pp and text[i - 1] == '\r' and text[i - 2] == '\\'):
                pp = False
                define = None
            line += 1
            i += 1
            at_bol = True
            continue
        if c in ' \t\r\f\v':
            i += 1
            continue
        if c == '#' and at_bol:
            pp = True
            m = re.compile(r'#\s*define\s+(\w+)').match(text, i)
            define = m.group(1) if m else None
            at_bol = False
            prev = '#'
            i += 1
            continue
        at_bol = False
        if text.startswith('/*', i):
            j = text.find('*/', i + 2)
            j = n if j < 0 else j + 2
            comments.append((line, text[i:j]))
            line += text.count('\n', i, j)
            i = j
            continue
        if text.startswith('//', i):
            j = text.find('\n', i)
            j = n if j < 0 else j
            comments.append((line, text[i:j]))
            i = j
            continue
        if c in '"\'':
            j = i + 1
            while j < n and text[j] != c:
                if text[j] == '\\':
                    j += 1
                if text[j] == '\n':
                    line += 1
                j += 1
            i = j + 1
            prev = 'str'
            continue
        if c.isalpha() or c == '_':
            j = i + 1
            while j < n and (text[j].isalnum() or text[j] == '_'):
                j += 1
            name = text[i:j]
            if name not in C_KEYWORDS:
                toks.append(Tok(line, i, j, name, 'f' if prev in ('.', '->') else 'o', pp, define))
            prev = name
            i = j
            continue
        if c.isdigit() or (c == '.' and i + 1 < n and text[i + 1].isdigit()):
            j = i + 1
            while j < n and (text[j].isalnum() or text[j] in '._'):
                j += 1
            prev = 'num'
            i = j
            continue
        if text.startswith('->', i):
            prev = '->'
            i += 2
            continue
        prev = c
        i += 1
    return toks, comments


class Rewriter:
    def __init__(self, an, nm):
        self.an, self.nm = an, nm
        self.problems = []
        self.stats = collections.Counter()

    def plan_file(self, path, occs):
        """the edits for one source file: [(start, end, new)]"""
        text = open(os.path.join(ROOT, path), encoding='utf-8', newline='').read()
        toks, _ = tokenize(text)
        by_line = collections.defaultdict(list)
        for t in toks:
            if not t.pp:
                by_line[t.line].append(t)
        ast_by_line = collections.defaultdict(list)
        for (line, col, name, cls), (new, kind) in occs.items():
            ast_by_line[line].append((col, name, cls, new))
        edits = {}
        orphans = []
        unmatched = collections.defaultdict(list)
        for line, lst in ast_by_line.items():
            lst.sort()
            groups = collections.defaultdict(list)
            for col, name, cls, new in lst:
                groups[(name, cls)].append(new)
            src = collections.defaultdict(list)
            for t in by_line.get(line, []):
                src[(t.name, t.cls)].append(t)
            for g, news in groups.items():
                st = src.get(g, [])
                if not st:
                    orphans.extend((line, g[0], g[1], nw, False) for nw in news)
                    continue
                if len(st) == len(news):
                    for t, nw in zip(st, news):
                        if nw:
                            edits[t.start] = (t.end, nw, t)
                    continue
                vals = set(news)
                if len(vals) == 1:
                    nw = news[0]
                    if nw:
                        for t in st:
                            edits[t.start] = (t.end, nw, t)
                        self.stats['lines where a macro writes a renamed name more than once'] += 1
                    if len(news) > len(st):
                        orphans.append((line, g[0], g[1], nw, True))   # the extra ones may be a macro body's
                    continue
                self.problems.append(f'{path}:{line}: {g[0]} ({g[1]}): {len(st)} in the source, {len(news)} in the '
                                     f'parse, names {sorted(map(str, vals))}')
            for g, st in src.items():
                if g not in groups:
                    unmatched[line].extend(st)
        return text, toks, edits, orphans, unmatched

    def run(self):
        nm = self.nm
        per_file = collections.defaultdict(dict)
        for tu in self.an.tus:
            for o in tu.occ:
                f = o.file
                if not (f.startswith('src/') or f.startswith('include/')):
                    continue
                k = (o.line, o.col, o.name, o.cls)
                new = nm.new_for(o, tu)
                kind = occ_kind(o)
                d = per_file[f]
                if k in d and d[k][0] != new:
                    self.problems.append(f'{f}:{o.line}: {o.name} gets {d[k][0]} in one unit and {new} in another')
                d[k] = (new, kind)
        self.macros = macro_table()
        self.files = {}
        attributed = collections.defaultdict(set)      # (macro file, macro name, body field name) -> {new}
        for f in sorted(per_file):
            text, toks, edits, orphans, unmatched = self.plan_file(f, per_file[f])
            self.files[f] = [text, toks, edits]
            self.attribute(f, toks, edits, orphans, unmatched, attributed)
        self.macro_edits(per_file, attributed)
        return self

    def visible_macros(self, f):
        out = {}
        for (mf, name), m in self.macros.items():
            if mf == f or is_header(mf):
                out.setdefault(name, []).append(m)
        return out

    def attribute(self, f, toks, edits, orphans, unmatched, attributed):
        """an occurrence the parse saw on a line that does not spell it comes from a macro invoked on that line (its
        body, or the body of a macro it uses), or from the next lines of a macro call that spans several lines"""
        if not orphans:
            return
        vis = self.visible_macros(f)
        line_toks = collections.defaultdict(list)
        for t in toks:
            if not t.pp:
                line_toks[t.line].append(t)
        for line, name, cls, new, excess in orphans:
            cands, todo, seen = [], [t.name for t in line_toks.get(line, []) if t.name in vis], set()
            while todo:
                mname = todo.pop()
                if mname in seen:
                    continue
                seen.add(mname)
                for m in vis.get(mname, []):
                    if any(bt.name == name and bt.cls == cls and bt.name not in m['params'] for bt in m['body']):
                        cands.append(m)
                    todo.extend(bt.name for bt in m['body'] if bt.name in vis)
            if cands:
                # every macro of the expansion that spells it gets the meaning (a conflict shows up there)
                for m in cands:
                    attributed[(m['file'], m['name'], name, cls)].add(new)
                continue
            if excess:
                continue          # a macro argument written once and expanded more than once
            # a field name passed as a macro argument (TMD_TOP(t, vert_top) expands to (t)->vert_top)
            same = [t for t in unmatched.get(line, []) if t.name == name]
            if same:
                for t in same:
                    if t.start in edits and edits[t.start][1] != new:
                        self.problems.append(f'{f}:{line}: macro argument {name} gets {edits[t.start][1]} and {new}')
                    elif new:
                        edits[t.start] = (t.end, new, t)
                self.stats['field names passed as macro arguments'] += 1
                continue
            # a macro call over several lines: the argument sits on a following line
            for nxt in range(line + 1, line + 12):
                hit = [t for t in unmatched.get(nxt, []) if t.name == name and t.cls == cls]
                if hit:
                    t = hit[0]
                    unmatched[nxt].remove(t)
                    if new:
                        edits[t.start] = (t.end, new, t)
                    self.stats['names placed on the next lines of a multi-line call'] += 1
                    break
            else:
                if new:
                    self.problems.append(f'{f}:{line}: {name} ({cls}) -> {new}: not found in the source')

    def macro_edits(self, per_file, attributed):
        """names inside #define bodies: types and globals by their one meaning in the file (headers: in every unit);
        fields by the expansions attributed to that macro"""
        meaning = collections.defaultdict(set)      # (file, name) -> {new} for globals and types only
        for f, d in per_file.items():
            for (line, col, name, cls), (new, kind) in d.items():
                if kind in ('global', 'static', 'typedef', 'tag'):
                    meaning[(f, name)].add(new)
        hdr = collections.defaultdict(set)
        for (f, name), st in meaning.items():
            if is_header(f):
                hdr[name] |= st
        for (mf, mname), m in sorted(self.macros.items()):
            if mf not in self.files:
                text = open(os.path.join(ROOT, mf), encoding='utf-8', newline='').read()
                toks, _ = tokenize(text)
                self.files[mf] = [text, toks, {}]
            edits = self.files[mf][2]
            for t in m['body']:
                if t.name in m['params']:
                    continue
                if t.cls == 'o':
                    st = meaning.get((mf, t.name), set()) | hdr.get(t.name, set())
                    key = 'macro body names renamed'
                else:
                    st = attributed.get((mf, mname, t.name, 'f'), set())
                    key = 'macro body fields renamed'
                if not st or st == {None}:
                    continue
                if len(st) == 1:
                    edits[t.start] = (t.end, next(iter(st)), t)
                    self.stats[key] += 1
                else:
                    self.problems.append(f'{mf}:{t.line}: macro {mname}: {t.name} ({t.cls}) resolves to '
                                         f'{sorted(map(str, st))}')


    def write(self):
        changed = 0
        for f, (text, toks, edits) in sorted(self.files.items()):
            if not edits:
                continue
            out, last = [], 0
            for start in sorted(edits):
                end, new, t = edits[start]
                out.append(text[last:start])
                out.append(new)
                last = end
            out.append(text[last:])
            new_text = ''.join(out)
            if new_text != text:
                with open(os.path.join(ROOT, f), 'w', encoding='utf-8', newline='') as fh:
                    fh.write(new_text)
                changed += 1
        return changed


def occ_kind(o):
    e = o.ent
    if e is None:
        return 'local'
    if isinstance(e, Entity):
        return e.kind
    return e[0]


def macro_table():
    """{(file, name): {'file', 'name', 'params', 'body': [Tok]}} for every #define in src/ and include/"""
    out = {}
    files = sorted(rel(p) for p in glob.glob(os.path.join(ROOT, 'src', '**', '*.c'), recursive=True)) + \
        sorted(rel(p) for p in glob.glob(os.path.join(ROOT, 'include', '*.h')))
    for f in files:
        text = open(os.path.join(ROOT, f), encoding='utf-8', newline='').read()
        if '#' not in text:
            continue
        toks, _ = tokenize(text)
        for t in toks:
            if not t.pp or t.define is None:
                continue
            k = (f, t.define)
            if t.name == t.define and k not in out:
                m = re.compile(r'\(([^)]*)\)').match(text, t.end)
                params = set(re.findall(r'\w+', m.group(1))) if m else set()
                out[k] = {'file': f, 'name': t.define, 'params': params, 'body': [], 'start': t.start}
                continue
            if k in out and t.start > out[k]['start']:
                out[k]['body'].append(t)
    for m in out.values():
        m['body'] = [t for t in m['body'] if t.name not in m['params']]
    return out


def rewrite_symbol_files(nm, write):
    """hand-named lines of the symbol files get the address name; comment lines stay as they are"""
    rows, changed = [], 0
    for f in symbol_files():
        if f == 'symbol_addrs_psyq.txt':
            continue
        path = os.path.join(ROOT, f)
        lines = open(path, encoding='utf-8', newline='').read().split('\n')
        out = []
        for n, line in enumerate(lines, 1):
            m = SYM_LINE_RE.match(line)
            if m and not line.lstrip().startswith('//') and m.group(2) in nm.global_new:
                new = nm.global_new[m.group(2)]
                rows.append((f, n, m.group(2), new))
                line = m.group(1) + new + m.group(3) + m.group(4) + m.group(5)
            out.append(line)
        text = '\n'.join(out)
        if write and text != '\n'.join(lines):
            open(path, 'w', encoding='utf-8', newline='').write(text)
            changed += 1
    return rows, changed


# ---- reports ---------------------------------------------------------------------------------------------------------

def loc(k):
    return f'{k[0]}:{k[1]}' if k and isinstance(k[1], int) else str(k)


def count_occ(an, nm):
    """how many times each renamed thing is written in the sources (header lines counted once)"""
    seen = set()
    cnt = collections.Counter()
    for tu in an.tus:
        for o in tu.occ:
            k = (o.file, o.line, o.col, o.name, o.cls)
            if k in seen:
                continue
            seen.add(k)
            e = o.ent
            if isinstance(e, Entity):
                cnt[(e.kind, e.name if e.kind == 'global' else (e.tu.path, e.name) if e.kind == 'static' else e.key)] += 1
            elif isinstance(e, tuple) and e[0] == 'tag':
                cnt[('tag', skey(e[1]))] += 1
            elif isinstance(e, tuple) and e[0] == 'field':
                cnt[('field', skey(e[1]), e[2].index)] += 1
    return cnt


def write_reports(an, nm, rw, sym_rows, out):
    os.makedirs(out, exist_ok=True)
    cnt = count_occ(an, nm)
    rows = []
    for name, new in sorted(nm.global_new.items()):
        if name in an.hand:
            addr, kind, where = an.hand[name]
            rows.append(('function' if kind == 'func' else 'data', 'global', name, new, f'0x{addr:08X}',
                         '; '.join(f'{f}:{n}' for f, n in where), cnt[('global', name)]))
        else:
            rows.append(('data', 'global', name, new, 'unused extern', '', cnt[('global', name)]))
    for (path, name), new in sorted(nm.static_new.items()):
        if new:
            tu = next(t for t in an.tus if t.path == path)
            e = tu.statics[name]
            how = ('never called; named after the next function in the file' if e.info.get('never_called') else
                   'named after its first caller')
            rows.append(('inline helper', path, name, new, f'static inline, no address of its own; {how}',
                         loc(e.key), cnt[('static', (path, name))]))
    for k, new in sorted(nm.struct_new.items(), key=lambda kv: str(kv[0])):
        si = nm.structs[k]
        old = ' / '.join(x for x in [si.tag and f'struct tag {si.tag}'] + [f'typedef {t.name}' for t in si.typedefs] if x)
        rows.append((si.kind, 'global' if si.file and is_header(si.file) else k[0], old, new,
                     f'size 0x{si.size:X}', loc(k), cnt[('tag', k)] + sum(cnt[('typedef', t.key)] for t in si.typedefs)))
    for k, new in sorted(nm.typedef_new.items(), key=lambda kv: str(kv[0])):
        t = nm.typedef_rep[k]
        if t.obj[0] == 's' and nm.struct_new.get(skey(t.obj[1])) == new:
            continue        # listed with its struct
        rows.append(('typedef', 'global' if is_header(k[0]) else k[0], t.name, new, describe(t.obj), loc(k),
                     cnt[('typedef', k)]))
    for (k, idx), new in sorted(nm.field_new.items(), key=lambda kv: (str(kv[0][0]), kv[0][1])):
        si = nm.structs[k]
        f = si.fields[idx]
        owner = nm.struct_new.get(k) or ('/'.join(nm.sdk_names(si)) + ' (SDK type, kept)' if nm.sdk_names(si) else
                                          '(unnamed ' + si.kind + ')')
        where = f'+0x{f.off:X}' + (f' bit {f.bit}, {f.width} bits' if f.width is not None else '')
        rows.append(('field', 'global' if si.file and is_header(si.file) else (k[0] if isinstance(k[1], int) else k[1]),
                     f.name, new, f'{owner} {where}', loc(f.key), cnt[('field', k, idx)]))
    with open(os.path.join(out, 'renames.csv'), 'w', encoding='utf-8', newline='') as fh:
        w = csv.writer(fh, lineterminator='\n')
        w.writerow(['kind', 'scope', 'old', 'new', 'detail', 'defined at', 'occurrences'])
        w.writerows(rows)
    kept = kept_rows(an, nm, cnt)
    with open(os.path.join(out, 'kept.csv'), 'w', encoding='utf-8', newline='') as fh:
        w = csv.writer(fh, lineterminator='\n')
        w.writerow(['kind', 'name', 'reason', 'where', 'occurrences'])
        w.writerows(kept)
    with open(os.path.join(out, 'symbol_lines.csv'), 'w', encoding='utf-8', newline='') as fh:
        w = csv.writer(fh, lineterminator='\n')
        w.writerow(['file', 'line', 'old', 'new'])
        w.writerows(sym_rows)
    return rows, kept


def describe(ty):
    k = ty[0]
    if k == 'p' and ty[1][0] == 'f':
        return 'function pointer'
    if k == 'p':
        return 'pointer'
    if k == 'a':
        return 'array'
    if k == 'f':
        return 'function type'
    if k == 's':
        return f'{ty[1].kind} (another name for it)'
    return 'scalar'


def kept_rows(an, nm, cnt):
    rows = []
    for name, why in sorted(nm.global_kept.items()):
        rows.append(('global', name, why, '', cnt[('global', name)]))
    for name, why in sorted(nm.unused_kept.items()):
        rows.append(('global', name, why, '', cnt[('global', name)]))
    for k, why in sorted(nm.struct_why.items(), key=lambda kv: str(kv[0])):
        si = nm.structs[k]
        rows.append((si.kind, ' / '.join(x for x in [si.tag] + [t.name for t in si.typedefs] if x), why, loc(k),
                     cnt[('tag', k)]))
    seen = set()
    for k, why in sorted(nm.typedef_kept.items(), key=lambda kv: str(kv[0])):
        t = nm.typedef_rep[k]
        if (t.name, why) in seen and t.name in BASIC:
            continue
        seen.add((t.name, why))
        rows.append(('typedef', t.name, why, loc(k), cnt[('typedef', k)]))
    for (k, idx), why in sorted(nm.field_kept.items(), key=lambda kv: (str(kv[0][0]), kv[0][1])):
        si = nm.structs[k]
        f = si.fields[idx]
        rows.append(('field', f.name, why, loc(f.key), cnt[('field', k, idx)]))
    # macros, locals, parameters and labels
    macros = collections.Counter()
    for f in sorted(glob.glob(os.path.join(ROOT, 'src', '**', '*.c'), recursive=True) +
                    glob.glob(os.path.join(ROOT, 'include', '*.h'))):
        for m in re.finditer(r'^\s*#\s*define\s+(\w+)', open(f, encoding='utf-8').read(), re.M):
            macros[(m.group(1), rel(f))] += 1
    for (name, f), n in sorted(macros.items()):
        rows.append(('macro', name, 'a macro (macros are kept: the build needs them, and they have no address)', f, n))
    local = collections.Counter()
    seen = set()
    for tu in an.tus:
        for o in tu.occ:
            if o.ent is None and o.cls == 'o':
                k = (o.file, o.line, o.col, o.name)
                if k not in seen:
                    seen.add(k)
                    local[o.name] += 1
    for name, n in sorted(local.items()):
        rows.append(('local / parameter / label', name, 'a local variable, parameter or label: no address form exists',
                     '', n))
    return rows


def comment_census(out):
    """every comment in src/, include/ and the symbol files, by kind: MATCH-TRICK marks (kept by the card), offset
    marks (/* 0x1C */), and descriptive comments (the question for LuciDin); also which mention a project name"""
    rows, samples = [], []
    files = sorted(rel(p) for p in glob.glob(os.path.join(ROOT, 'src', '**', '*.c'), recursive=True)) + \
        sorted(rel(p) for p in glob.glob(os.path.join(ROOT, 'include', '*.h'))) + symbol_files()
    tot = collections.Counter()
    for f in files:
        text = open(os.path.join(ROOT, f), encoding='utf-8').read()
        if f.endswith('.txt'):
            comments = [(n, l[l.index('//'):] if '//' in l else l) for n, l in enumerate(text.split('\n'), 1)
                        if '//' in l or l.lstrip().startswith('/*')]
        else:
            _, comments = tokenize(text)
        c = collections.Counter()
        for line, body in comments:
            inner = body.strip('/* \t\r\n')
            if 'MATCH-TRICK' in body:
                c['match_trick'] += 1
            elif re.fullmatch(r'(?:0x[0-9A-Fa-f]+|[0-9A-Fa-f]{1,4}|size 0x[0-9A-Fa-f]+)', inner) or not inner:
                c['offset_or_empty'] += 1
            else:
                c['descriptive'] += 1
                if len(samples) < 400 and len(inner) > 12:
                    samples.append((f, line, ' '.join(inner.split())[:140]))
        for k, v in c.items():
            tot[k] += v
        rows.append((f, c['descriptive'], c['match_trick'], c['offset_or_empty']))
    with open(os.path.join(out, 'comments.csv'), 'w', encoding='utf-8', newline='') as fh:
        w = csv.writer(fh, lineterminator='\n')
        w.writerow(['file', 'descriptive', 'match_trick', 'offset_or_empty'])
        w.writerows(r for r in rows if any(r[1:]))
    return tot, rows, samples


# ---- checks ----------------------------------------------------------------------------------------------------------

def offset_checks(an, out):
    """after apply: compile, with the real cc1, the offset of every field_<OFF> / m<N> and the size of every
    struct_<SIZE> / union_<SIZE> visible at file scope, and compare with the names"""
    bad, checked, skipped = [], 0, 0
    os.makedirs(out, exist_ok=True)
    for tu in an.tus:
        exprs = []
        seen = set()
        for si in tu.structs:
            if not si.complete or si.scope_kind != 'file' or si.key in seen:
                continue
            seen.add(si.key)
            names = ([f'struct {si.tag}' if si.kind == 'struct' else f'union {si.tag}'] if si.tag else []) + \
                [t.name for t in si.typedefs]
            if not names:
                continue
            tn = names[0]
            m = re.match(r'^(?:struct |union )?(?:struct|union)_([0-9A-F]+)(?:_\d+)?$', tn.split()[-1])
            if m:
                exprs.append((f'sizeof({tn})', int(m.group(1), 16), f'{tn} size'))
            for path, off, label in walk_fields(si, ''):
                exprs.append((f'(int)&((({tn} *)0)->{path})', off, f'{tn}.{path}'))
        if not exprs:
            continue
        text = preprocess(tu.path)
        src = text + '\nint __pristine_chk[] = {\n' + ',\n'.join(e for e, _, _ in exprs) + '\n};\n'
        ipath = os.path.join(out, 'chk.i')
        open(ipath, 'w', encoding='latin-1', newline='').write(src)
        r = subprocess.run([CC1, '-quiet', '-O0', '-G0', '-mips1', '-mcpu=3000', '-fgnu-linker', '-mgas',
                            '-msoft-float', ipath, '-o', os.path.join(out, 'chk.s')], capture_output=True)
        if r.returncode:
            bad.append(f'{tu.path}: cc1 failed: {r.stderr.decode(errors="replace")[-600:]}')
            continue
        s = open(os.path.join(out, 'chk.s'), encoding='latin-1').read()
        i = s.index('__pristine_chk:')
        vals = []
        for line in s[i:].split('\n')[1:]:
            mm = re.match(r'\s*\.word\s+(-?\w+)', line)
            if mm:
                vals.append(int(mm.group(1), 0))
            elif re.match(r'\s*\.(?:size|end|section|text|data)\b|\S+:', line) and vals:
                break
        if len(vals) != len(exprs):
            bad.append(f'{tu.path}: {len(vals)} values for {len(exprs)} checks')
            continue
        for (e, want, label), got in zip(exprs, vals):
            checked += 1
            if got != want:
                bad.append(f'{tu.path}: {label}: the name says 0x{want:X}, the compiler 0x{got:X}')
    return checked, bad


def walk_fields(si, prefix, base=0):
    for f in si.fields:
        if f.name is None or f.width is not None:
            continue
        path = prefix + f.name
        off = base + f.off
        m = re.match(r'^field_([0-9A-F]+)$', f.name)
        if m:
            yield path, off, path
            if int(m.group(1), 16) != f.off:
                yield path, int(m.group(1), 16) + base, path
        elif re.match(r'^m\d+$', f.name):
            yield path, off, path
        t = f.ty
        if t[0] == 's' and t[1].tag is None and not t[1].typedefs:
            yield from walk_fields(t[1], path + '.', off)


def survivors(an, nm_old_names):
    """project names still written in the code after apply: globals, types and fields whose names are neither an
    address name, a neutral name, nor on the kept list"""
    sdk_t, sdk_f = an.sdk_types, an.sdk_funcs
    found = collections.Counter()
    unused = collections.Counter()
    for tu in an.tus:
        for o in tu.occ:
            e = o.ent
            name = o.name
            if AUTO_RE.match(name) or NEUTRAL_RE.match(name):
                continue
            if isinstance(e, Entity):
                if e.kind == 'global' and (name in an.psyq or name in sdk_f or name in KEEP_GLOBALS):
                    continue
                if e.kind == 'typedef' and (name in BASIC or name in sdk_t):
                    continue
                if e.kind == 'static' and INLINE_RE.match(name):
                    continue
                if e.kind == 'global' and e.info['refs'] == 0:
                    unused[(name, o.file)] += 1          # an extern nothing refers to: on the kept list
                    continue
                if e.kind in ('global', 'static', 'typedef'):
                    found[(e.kind, name, o.file)] += 1
            elif isinstance(e, tuple) and e[0] in ('tag', 'field'):
                si = e[1]
                sdk = [n for n in [si.tag] + [t.name for t in si.typedefs] if n and n in sdk_t]
                if e[0] == 'tag' and sdk:
                    continue
                if e[0] == 'field' and sdk and any(name in sdk_t[n] for n in sdk):
                    continue
                found[(e[0], name, o.file)] += 1
    return found, unused


def grep_old_names(names, files):
    """a plain token search for the old names, outside comments and inside them, as a check independent of the
    parse; returns {name: (code count, comment count)}"""
    want = set(names)
    code, com = collections.Counter(), collections.Counter()
    for f in files:
        text = open(os.path.join(ROOT, f), encoding='utf-8').read()
        if f.endswith(('.c', '.h')):
            toks, comments = tokenize(text)
            for t in toks:
                if t.name in want:
                    code[(t.name, f)] += 1
            for _, body in comments:
                for w in re.findall(r'[A-Za-z_]\w*', body):
                    if w in want:
                        com[(w, f)] += 1
        else:
            if f != 'Makefile':      # /* */ comments in the linker-script files; # comments in the Makefile
                text = re.sub(r'/\*.*?\*/', lambda m: '//' + m.group(0).replace('\n', ' '), text, flags=re.S)
            else:
                text = text.replace('#', '//')
            for line in text.split('\n'):
                body, _, comment = line.partition('//')
                for w in re.findall(r'[A-Za-z_]\w*', body):
                    if w in want:
                        code[(w, f)] += 1
                for w in re.findall(r'[A-Za-z_]\w*', comment):
                    if w in want:
                        com[(w, f)] += 1
    return code, com


# ---- the SDK name list -----------------------------------------------------------------------------------------------

def sdk_names_from(headers):
    """type names with their fields, and function names, from the Runtime Library headers (names only)"""
    types, funcs = {}, set()
    for h in sorted(os.listdir(headers)):
        if not h.upper().endswith('.H'):
            continue
        text = open(os.path.join(headers, h), encoding='latin-1').read().replace('\r', '')
        text = re.sub(r'/\*.*?\*/', ' ', text, flags=re.S)
        text = re.sub(r'//[^\n]*', ' ', text)
        text = re.sub(r'^\s*#[^\n]*(?:\\\n[^\n]*)*', ' ', text, flags=re.M)
        i = 0
        while True:
            m = re.compile(r'\b(struct|union)\s*(\w*)\s*\{').search(text, i)
            if not m:
                break
            j, depth = m.end(), 1
            while depth and j < len(text):
                depth += {'{': 1, '}': -1}.get(text[j], 0)
                j += 1
            body = text[m.end():j - 1]
            tail = re.match(r'\s*([^;{}]*);', text[j:])
            fields = set()
            flat = re.sub(r'\{[^{}]*\}', ' ', re.sub(r'\{[^{}]*\}', ' ', body))
            inner = set(re.findall(r'(\w+)\s*(?:\[[^\]]*\]\s*)*(?::\s*\d+\s*)?[;,]', body))
            for decl in flat.split(';'):
                for part in decl.split(','):
                    mm = re.search(r'(\w+)\s*(?:\[[^\]]*\]\s*)*(?::\s*\w+\s*)?$', part.strip())
                    if mm:
                        fields.add(mm.group(1))
            fields |= inner
            fields -= C_KEYWORDS
            names = []
            if m.group(2):
                names.append(m.group(2))
            before = text[max(0, m.start() - 40):m.start()]
            if tail and re.search(r'\btypedef\s*$', before):
                for nm_ in tail.group(1).split(','):
                    nm_ = nm_.strip().lstrip('*').strip()
                    if re.fullmatch(r'\w+', nm_):
                        names.append(nm_)
            for n in names:
                types.setdefault(n, set()).update(fields)
            i = m.end()
        for m in re.finditer(r'\btypedef\s+(?:struct|union)\s+(\w+)\s+\*?\s*(\w+)\s*;', text):
            types.setdefault(m.group(2), set()).update(types.get(m.group(1), set()))
        for m in re.finditer(r'\btypedef\s+[\w\s\*]+?\b(\w+)\s*;', text):
            types.setdefault(m.group(1), set())
        for m in re.finditer(r'\btypedef\s+[\w\s\*]*\(\s*\*\s*(\w+)\s*\)', text):
            types.setdefault(m.group(1), set())
        for m in re.finditer(r'(?:^|[;}])\s*(?:extern\s+)?[\w\s\*]*?\b(\w+)\s*\([^;{}]*\)\s*;', text, re.M):
            funcs.add(m.group(1))
    funcs -= C_KEYWORDS
    return types, funcs


def cmd_sdk_names(headers, used):
    types, funcs = sdk_names_from(headers)
    lines = ['# r503: SDK names kept by tools/pristine_names.py: the type names (with their field names) and the',
             '# function names that the PsyQ Runtime Library 4.0 headers (DTL-S2320, redump-verified; read-only, nothing',
             '# from the disc is in the repository) declare AND this source uses. Names only. Regenerate with',
             '# `python -I tools/pristine_names.py sdk-names <the headers folder>` from the tree before the rename.', '']
    for n in sorted(types):
        if n in used:
            fl = sorted(f for f in types[n] if f in used)
            lines.append(' '.join(['type', n] + fl))
    for n in sorted(funcs):
        if n in used:
            lines.append(f'func {n}')
    open(SDK_NAMES, 'w', encoding='utf-8', newline='\n').write('\n'.join(lines) + '\n')
    print(f'{SDK_NAMES}: {sum(1 for l in lines if l.startswith("type"))} types, '
          f'{sum(1 for l in lines if l.startswith("func"))} functions')


def used_identifiers():
    out = set()
    for f in glob.glob(os.path.join(ROOT, 'src', '**', '*.c'), recursive=True) + \
            glob.glob(os.path.join(ROOT, 'include', '*.h')):
        toks, _ = tokenize(open(f, encoding='utf-8').read())
        out |= {t.name for t in toks}
    return out


# ---- main ------------------------------------------------------------------------------------------------------------

def analyse():
    an = Analysis().run()
    probs = [p for tu in an.tus for p in tu.problems]
    nm = Namer(an).run()
    return an, nm, probs


def main():
    args = sys.argv[1:]
    if not args:
        sys.exit(__doc__)
    cmd = args[0]
    out = OUT_DEFAULT
    if '--out' in args:
        out = args[args.index('--out') + 1]
    if cmd == 'sdk-names':
        cmd_sdk_names(args[1], used_identifiers())
        return 0
    if cmd in ('plan', 'apply'):
        an, nm, probs = analyse()
        rw = Rewriter(an, nm).run()
        sym_rows, _ = rewrite_symbol_files(nm, write=False)
        rows, kept = write_reports(an, nm, rw, sym_rows, out)
        tot, crow, samples = comment_census(out)
        all_probs = probs + nm.problems + rw.problems
        with open(os.path.join(out, 'problems.txt'), 'w', encoding='utf-8') as fh:
            fh.write('\n'.join(all_probs) + '\n')
        kinds = collections.Counter(r[0] for r in rows)
        print(f'renames: {len(rows)} ({", ".join(f"{k} {v}" for k, v in sorted(kinds.items()))}); '
              f'symbol-file lines: {len(sym_rows)}; kept rows: {len(kept)}')
        print(f'source files with edits: {sum(1 for v in rw.files.values() if v[2])}; '
              f'edits: {sum(len(v[2]) for v in rw.files.values())}; {dict(rw.stats)}')
        print(f'comments: {dict(tot)}')
        print(f'problems: {len(all_probs)} (parse {len(probs)}, naming {len(nm.problems)}, rewrite {len(rw.problems)})'
              f' -> {os.path.join(out, "problems.txt")}')
        for p in all_probs[:40]:
            print('  ' + p)
        if cmd == 'apply':
            if all_probs:
                print('refused: fix the problems first (nothing written)')
                return 1
            n = rw.write()
            _, m = rewrite_symbol_files(nm, write=True)
            print(f'written: {n} source files, {m} symbol files')
        return 0
    if cmd == 'offsets':
        an = Analysis().run()
        checked, bad = offset_checks(an, out)
        print(f'offset and size checks compiled with cc1: {checked}, wrong: {len(bad)}')
        for b in bad[:40]:
            print('  ' + b)
        return 1 if bad else 0
    if cmd == 'survivors':
        an = Analysis().run()
        found, unused = survivors(an, None)
        print(f'project names left in the code (by the parse): {sum(found.values())} occurrences, '
              f'{len({k[1] for k in found})} names')
        for (kind, name, f), n in sorted(found.items())[:80]:
            print(f'  {kind:8} {name:30} {f} x{n}')
        print(f'unused extern declarations kept (on the kept list): {sorted(unused)}')
        # an independent check: a plain token search for every old function, data, helper and type name
        # (names unique to the whole tree: functions, data and the shared headers' types; a file's own type and
        # helper names such as `count` or `H` are also ordinary local names elsewhere, so the parse above checks them)
        old = set()
        for row in csv.DictReader(open(os.path.join(out, 'renames.csv'), encoding='utf-8')):
            if row['kind'] in ('function', 'data'):
                old.add(row['old'])
            elif row['kind'] in ('struct', 'union', 'typedef') and row['scope'] == 'global':
                old |= {x.split()[-1] for x in row['old'].split(' / ')}
        files = sorted(rel(p) for p in glob.glob(os.path.join(ROOT, 'src', '**', '*.c'), recursive=True)) +             sorted(rel(p) for p in glob.glob(os.path.join(ROOT, 'include', '*.h'))) + symbol_files() +             sorted(rel(p) for p in glob.glob(os.path.join(ROOT, '*.yaml')) + glob.glob(os.path.join(ROOT, 'stg', '*.yaml'))
                   + glob.glob(os.path.join(ROOT, 'abil', '*.yaml'))) + ['Makefile']
        code, com = grep_old_names(old, files)
        kept_names = set(KEEP_GLOBALS) | set(KEEP_LIBRARY) | {n for n, _ in unused}
        code = collections.Counter({k: v for k, v in code.items() if k[0] not in kept_names})
        print(f'token search over {len(files)} files for {len(old)} old names: {sum(code.values())} in code, '
              f'{sum(com.values())} in comments ({len({k[1] for k in com})} files)')
        for (name, f), n in sorted(code.items())[:40]:
            print(f'  CODE {name} {f} x{n}')
        return 1 if found or code else 0
    sys.exit(f'unknown command {cmd}')


if __name__ == '__main__':
    sys.exit(main())
