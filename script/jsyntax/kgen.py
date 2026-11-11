#!/usr/bin/env python3
"""kgen.py DIR ENTRY...: juliac --output-bc archive (DIR/jsyn.bc.a) -> one runtime-free LLVM module -> C.

For each @ccallable ENTRY, the Julia specialization it wraps (julia_ENTRY_N, Julia's native calling
convention: pgcstack first) is kept and renamed jsk_ENTRY; the jlcapi_ wrapper (runtime entry: thread
adoption, world age, GC state) and everything not reachable from the specializations is dropped.
Then the module is made independent of libjulia and of the system image:
  - noreturn functions (throw_boundserror, throw_inexacterror, ...: the exception paths) get the body
    `jsk_throw(); unreachable` (jsk_throw longjmps back to the C entry wrapper);
  - ccall PLT slots (jlplt_X_got, lazily bound through libjulia) point straight at jsk_X;
  - image globals (constgv: type objects, method-error messages, the empty-Memory instance) point at
    distinct zeroed dummy objects (their identity is all that is used on the reachable paths);
  - remaining runtime calls ijl_X/jl_X are renamed jsk_X (the shim, runtime.c).
  - safepoint polls (a load through the thread state, so a GC can stop the thread) are deleted: no GC;
  - atomic loads/stores become plain ones (every object is private to one call);
  - the C is made includable in another translation unit (scanner.c): own `bool`, macros undefined.
Writes DIR/kernel.ll (rewritten IR), DIR/kernel.c (llvm-cbe output) and a symbol report."""
import os, re, subprocess, sys

HERE = os.path.dirname(os.path.abspath(__file__))  # deasm.py, cbe_post.py
LL = os.environ['LLVM_BIN']   # LLVM 20 tools: llvm-dis, llvm-as, llvm-link, opt
CBE = os.environ['LLVM_CBE']  # llvm-cbe built against LLVM 20
D, entries = sys.argv[1], sys.argv[2:]
os.chdir(D)
run = lambda *a: subprocess.run(a, check=True)

def canonicalize(s, roots):
    """Deterministic output: juliac numbers specializations (julia_f_4459) and orders functions differently
    from run to run. Order functions and globals breadth-first from the entry points and renumber the
    numeric suffixes of Julia-generated names by that order."""
    lines = s.split('\n')
    blocks, i = [], 0
    while i < len(lines):  # (kind, name, text)
        l = lines[i]
        if l.startswith('define '):
            j = i
            while lines[j] != '}': j += 1
            name = re.match(r'define [^@]*@([\w.$]+)\(', l).group(1)
            blocks.append(('define', name, '\n'.join(lines[i:j + 1]))); i = j + 1; continue
        m = re.match(r'@([\w.$]+) = ', l)
        blocks.append(('global', m.group(1), l) if m else ('other', None, l)); i += 1
    defs = {n: t for k, n, t in blocks if k == 'define'}
    globs = {n: t for k, n, t in blocks if k == 'global'}
    order, seen, gorder = [], set(), []
    queue = [r for r in roots if r in defs]
    def visit_globals(text):
        for g in re.findall(r'@([\w.$]+)', text):
            if g in globs and g not in gorder:
                gorder.append(g); visit_globals(globs[g])
            elif g in defs and g not in seen:
                seen.add(g); queue.append(g)
    seen.update(queue)
    while queue:
        f = queue.pop(0); order.append(f)
        visit_globals(defs[f].split('\n', 1)[1])
    order += sorted(n for n in defs if n not in seen)
    gorder += sorted(n for n in globs if n not in gorder)
    pat = re.compile(r'^((?:julia|jfptr|japi1|jlplt|ccall|jl_global|SUM|_j_const|_j_str)[\w.$]*?)([._])(\d+)((?:DOT\.\d+)?)$')
    rename = {}
    for k, n in enumerate(order + gorder):
        m = pat.match(n)
        if m: rename[n] = f'{m.group(1)}{m.group(2)}{k}'
    for n in order + gorder:  # a ccall's PLT slot is named after its thunk: jlplt_f_N_got
        if n.endswith('_got') and n[:-4] in rename: rename[n] = rename[n[:-4]] + '_got'
    def sub(text):
        return re.sub(r'@([\w.$]+)', lambda m: '@' + rename.get(m.group(1), m.group(1)), text)
    head = [t for k, n, t in blocks if k == 'other' and not t.startswith('declare ')][:]
    decls = sorted(t for k, n, t in blocks if k == 'other' and t.startswith('declare '))
    # keep the module header (source_filename, datalayout, triple) first, attributes/metadata last
    pre = [t for t in head if not (t.startswith('attributes ') or t.startswith('!'))]
    post = [t for t in head if t.startswith('attributes ') or t.startswith('!')]
    out = pre + [globs[g] for g in gorder] + [defs[f] for f in order] + decls + post
    return sub('\n'.join(out)) + '\n'

run('ar', 'x', 'jsyn.bc.a')
shards = sorted(f for f in os.listdir('.') if re.match(r'text_opt#\d+\.bc$', f))
for f in shards:
    base = f.replace('#', '_')[:-3]
    run(f'{LL}/llvm-dis', f, '-o', base + '.ll')
    s = open(base + '.ll').read()
    # shard-specific module flag (multiversioning suffix) conflicts in llvm-link; fp16 helpers in
    # llvm.compiler.used would be kept alive
    s = re.sub(r'^(!\d+) = !\{i32 1, !"julia.mv.suffix", !"_\d+"\}\n', '', s, flags=re.M)
    mv = re.findall(r'^(!\d+) = !\{i32 1, !"julia.mv.suffix"', open(base + '.ll').read(), re.M)
    for m in mv:
        s = re.sub(r'(^!llvm.module.flags = !\{.*?)(, )?' + m + r'\b', r'\1', s, flags=re.M)
    s = re.sub(r'^@llvm.compiler.used = .*\n', '', s, flags=re.M)
    open(base + '.nf.ll', 'w').write(s)
    run(f'{LL}/llvm-as', base + '.nf.ll', '-o', base + '.nf.bc')
run(f'{LL}/llvm-link', *[f.replace('#', '_')[:-3] + '.nf.bc' for f in shards], '-o', 'all.bc')
run(f'{LL}/llvm-dis', 'all.bc', '-o', 'all.ll')
s = open('all.ll').read()
spec = {}
for e in entries:
    capi = re.search(r'^@' + e + r' = alias [^@]*@(\S+)$', s, re.M).group(1)
    body = re.search(r'^define [^@]*@' + re.escape(capi) + r'\(.*?^}', s, re.M | re.S).group(0)
    m = re.search(r'call swiftcc \S+ @(julia_' + e + r'_\d+)\(', body)
    if not m:  # called through jl_get_abi_converter(…, @jl_ext_N): the specialization is jl_ext_N[0]
        ext = re.search(r'@jl_get_abi_converter\(.*?(@jl_ext_\d+)\)', body).group(1)
        m = re.search(r'^' + ext + r' = [^\[]*\[\d+ x ptr\] \[ptr @(julia_' + e + r'_\d+)', s, re.M)
    spec[e] = m.group(1)
print('entries', spec)
run(f'{LL}/opt', '-passes=internalize,globaldce', '-internalize-public-api-list=' + ','.join(spec.values()),
    'all.bc', '-o', 'k0.bc')
run(f'{LL}/llvm-dis', 'k0.bc', '-o', 'k0.ll')
s = open('k0.ll').read()

for e, f in spec.items():
    s = re.sub(r'@' + f + r'\b', '@jsk_' + e, s)
    s = re.sub(r'^define hidden (swiftcc [^@]*@jsk_' + e + r'\()', r'define \1', s, flags=re.M)

s = canonicalize(s, ['jsk_' + e for e in entries])  # before anything is numbered from module order

# 1. exception paths: noreturn function bodies -> jsk_throw()
noret = set(re.findall(r'^attributes (#\d+) = \{[^}]*\bnoreturn\b', s, re.M))
out, nthrow = [], 0
for chunk in re.split(r'(?=^define )', s, flags=re.M):
    m = re.match(r'define ([^\n]*?)@([\w.$]+)\((.*?)\)([^{\n]*)\{', chunk)
    if m and set(re.findall(r'#\d+', m.group(4))) & noret:
        end = chunk.index('\n}\n') + 3
        hdr = chunk[:chunk.index('{') + 1]
        chunk = hdr + '\n  call void @jsk_throw()\n  unreachable\n}\n' + chunk[end:]
        nthrow += 1
    out.append(chunk)
s = ''.join(out) + '\ndeclare void @jsk_throw() noreturn\n'
print('noreturn bodies replaced', nthrow)

# 2. ccall PLT slots -> direct shim functions
plts = re.findall(r'^@(jlplt_(\w+?)_\d+_got) = internal local_unnamed_addr global ptr @\S+', s, re.M)
for got, sym in plts:
    s = re.sub(r'^@' + got + r' = internal local_unnamed_addr global ptr @\S+',
               f'@{got} = internal unnamed_addr constant ptr @jsk_{sym}', s, flags=re.M)
    m = re.search(r'^define internal (\S+) @' + got[:-4] + r'\(([^)]*)\)', s, re.M)  # the lazy PLT thunk
    params = ', '.join(re.sub(r' %\d+$', '', a.strip()) for a in m.group(2).split(',') if a.strip())
    s += f'declare {m.group(1)} @jsk_{sym}({params})\n'
print('ccalls', sorted(set(x for _, x in plts)))

# 3. image globals -> distinct dummy objects (32 bytes each: tag word + 24 zero bytes)
cg = re.findall(r'^@([\w.$]+) = internal global ptr null, !julia.constgv', s, re.M)
for i, g in enumerate(cg):
    s = re.sub(r'^@' + re.escape(g) + r' = internal global ptr null, !julia.constgv !\d+',
               f'@{g} = internal global ptr getelementptr (i8, ptr @jsk_dummy_objs, i64 {32 * i + 8})', s, flags=re.M)
s += f'@jsk_dummy_objs = internal global [{32 * max(len(cg), 1)} x i8] zeroinitializer, align 16\n'
print('image globals -> dummies', len(cg))
# 4. safepoint polls (`load volatile (ptls->safepoint)` between fences, so a GC can stop the thread): no GC
# here, so drop them; the ptls loads feeding them become dead
s, nsp = re.subn(r'\n  %[\w.]+ = load atomic ptr, ptr %[\w.]+ monotonic, align 8[^\n]*\n  fence syncscope\("singlethread"\) seq_cst\n  %[\w.]+ = load volatile i64, ptr %[\w.]+, align 8\n'
                 r'  fence syncscope\("singlethread"\) seq_cst', '', s)
print('safepoint polls removed', nsp)
# 5. atomic loads and stores (type tags, GC-visible fields, lazy ccall slots): every object here is
# private to one call, so plain loads/stores (llvm-cbe would print __atomic_* library calls)
ORD = r'(?:unordered|monotonic|acquire|release|seq_cst)'
s, na1 = re.subn(r'= load atomic ((?:volatile )?\S+), ptr ([%@][\w.$]+) ' + ORD + ', align', r'= load \1, ptr \2, align', s)
s, na2 = re.subn(r'store atomic (.*?) ' + ORD + ', align', r'store \1, align', s)
print('atomic loads/stores made plain', na1, na2)
# 6. the code comes from 64-bit Julia: every pointer slot is 8 bytes (byte offsets are baked in). Pointer
# arrays on the stack (GC frames) become i64 arrays so they have that size on 32-bit targets (wasm32) too
s, nal = re.subn(r'= alloca \[(\d+) x ptr\]', r'= alloca [\1 x i64]', s)
print('pointer-array allocas -> i64', nal)
open('k1.ll', 'w').write(s)
run(f'{LL}/opt', '-passes=globalopt,instcombine,simplifycfg,globaldce,instcombine,simplifycfg,globaldce',
    'k1.ll', '-o', 'k2.bc')
run(f'{LL}/llvm-dis', 'k2.bc', '-o', 'k2.ll')
s = open('k2.ll').read()

# jl_small_typeof (table of small type tags, read only on exception paths) -> internal zero table
s = re.sub(r'^@jl_small_typeof = external [^\n]*$', '@jl_small_typeof = internal constant [1024 x i8] zeroinitializer, align 16', s, flags=re.M)
# 7. remaining runtime references -> jsk_ shim names
rt = sorted(set(re.findall(r'^declare [^@]*@((?:ijl|jl)_\w+)\(', s, re.M)))
rtg = sorted(set(re.findall(r'^@((?:ijl|jl)_\w+) = external', s, re.M)))
for x in rt + rtg:
    s = re.sub(r'@' + x + r'\b', '@jsk_' + x, s)
print('runtime functions left', rt, 'runtime globals left', rtg)
# swiftcc/swiftself (Julia passes pgcstack as swiftself) mean nothing in C: plain C calls
s = s.replace('swiftcc ', '').replace(' swiftself', '')
s = canonicalize(s, ['jsk_' + e for e in entries])
open('kernel.pre.ll', 'w').write(s)
run(sys.executable, f'{HERE}/deasm.py', 'kernel.pre.ll', 'kernel.ll')
run(f'{LL}/llvm-as', 'kernel.ll', '-o', 'kernel.dbg.bc')
# no debug info: smaller C, no #line noise
run(f'{LL}/opt', '--strip-debug', 'kernel.dbg.bc', '-o', 'kernel.bc')
run(CBE, 'kernel.bc', '-o', 'kernel.c')
run(sys.executable, f'{HERE}/cbe_post.py', 'kernel.c')
# llvm-cbe prints extra non-static prototypes of some internal (static) functions: drop them
c = open('kernel.c').read()
static = set(re.findall(r'^static [^;(]*?\b(\w+)\(', c, re.M))
c = re.sub(r'^(?!static)(?=\S)[^\n(=]*[ *](\w+)\([^;{\n]*\);\n\n?',
           lambda m: '' if m.group(1) in static else m.group(0), c, flags=re.M)
# usable inside another translation unit (tree-sitter's scanner.c): no `bool` typedef clashing with
# <stdbool.h>/C23, and llvm-cbe's helper macros undefined at the end
c = re.sub(r'^void\* (memset|memcpy|memmove)\([^;]*\);\n', '', c, flags=re.M)  # use <string.h>'s
c = c.replace('#include <stdint.h>\n', '#include <stdint.h>\n#include <string.h>\n', 1)
assert 'typedef unsigned char bool;' in c
c = c.replace('typedef unsigned char bool;', 'typedef unsigned char jsk_bool;\n#define bool jsk_bool')
c = ('// GENERATED from JuliaSyntax (Julia) by script/jsyntax/regenerate.sh (juliac --trim --output-bc, llvm-cbe,\n'
     '// kgen.py, cconform.py): do not edit. Entry: jsk_' + ', jsk_'.join(entries) + '; support: runtime.c.\n' + c)
c += ''.join('#undef ' + m + '\n' for m in ['bool', '__noreturn', '__forceinline', '__ATTRIBUTELIST__',
                                            '__PREFIXALIGN__', '__POSTFIXALIGN__', '__HIDDEN__'])
open('kernel.c', 'w').write(c)
# well-defined C without -fno-strict-aliasing/-fwrapv: typed accesses through memcpy, guarded shifts
run(sys.executable, f'{HERE}/cconform.py', 'kernel.c')
print('functions', len(re.findall(r'^define ', s, re.M)), 'kernel.c bytes', os.path.getsize('kernel.c'))
