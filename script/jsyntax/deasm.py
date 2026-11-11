# Replace Julia's AArch64 inline asm (thread pointer read, sev/wfe) by calls to C helpers, so llvm-cbe can translate the module.
import sys, re
src, dst = sys.argv[1], sys.argv[2]
s = open(src).read()
n1 = s.count('call ptr asm "mrs $0, tpidr_el0", "=r"()')
s = s.replace('call ptr asm "mrs $0, tpidr_el0", "=r"()', 'call ptr @jsyn_cbe_thread_pointer()')
s = s.replace('call void asm sideeffect "sev", "~{memory}"()', 'call void @jsyn_cbe_sev()')
s = s.replace('call void asm sideeffect "wfe", "~{memory}"()', 'call void @jsyn_cbe_wfe()')
# llvm-cbe has no `freeze`: C has no poison, so `freeze x` is `x` (a same-type bitcast)
s, nf = re.subn(r'= freeze (<\d+ x [^>]+>|[^ ,<]+) ([^ ,\n]+)', r'= bitcast \1 \2 to \1', s)
print("freeze", nf)
# intrinsics llvm-cbe can't print -> C helpers (jsyn_cbe_rt.c)
s = s.replace('@llvm.fshl.i64', '@jsyn_cbe_fshl_i64')
# Self-relative 32-bit offset tables (jl_gvar_offsets_N[i] = &g - &table) are link-time relocations, not C
# constants: keep the table writable, zero the entries, and fill them from a constructor at load time.
ctors = []
def fix_table(m):
    name, n, body = m.group(1), int(m.group(2)), m.group(3)
    pat = r'i32 trunc \(i64 sub \(i64 ptrtoint \(ptr (@"[^"]+"|@[^ ,()]+) to i64\), i64 ptrtoint \(ptr ' + re.escape(name) + r' to i64\)\) to i32\)'
    syms = re.findall(pat, body)
    first = re.match(r'i32 (-?\d+)', body).group(1)
    assert len(syms) == n - 1, (name, len(syms), n)
    fn = name.replace('@', '@jsyn_fix_') 
    lines = [f"define internal void {fn}() {{"]
    for i, g in enumerate(syms, start=1):
        lines += [f"  %a{i} = ptrtoint ptr {g} to i64", f"  %b{i} = ptrtoint ptr {name} to i64",
                  f"  %d{i} = sub i64 %a{i}, %b{i}", f"  %t{i} = trunc i64 %d{i} to i32",
                  f"  %p{i} = getelementptr inbounds [{n} x i32], ptr {name}, i64 0, i64 {i}",
                  f"  store i32 %t{i}, ptr %p{i}"]
    lines += ["  ret void", "}"]
    ctors.append((fn, "\n".join(lines)))
    init = ", ".join([f"i32 {first}"] + ["i32 0"] * (n - 1))
    return f"{name} = hidden global [{n} x i32] [{init}]"
s, nt = re.subn(r'^(@jl_gvar_offsets_\d+) = hidden constant \[(\d+) x i32\] \[(.*)\]$', fix_table, s, flags=re.M)
print("offset tables", nt)
if ctors:
    assert 'llvm.global_ctors' not in s
    s += "\n" + "\n".join(c for _, c in ctors) + "\n"
    s += "@llvm.global_ctors = appending global [%d x { i32, ptr, ptr }] [%s]\n" % (
        len(ctors), ", ".join("{ i32, ptr, ptr } { i32 101, ptr %s, ptr null }" % fn for fn, _ in ctors))
# sret: llvm-cbe turns an sret parameter into a struct return value, and declarations/definitions of one
# function in the two shards disagree; without the attribute it's a plain pointer argument (C defines both sides).
s, ns = re.subn(r' sret\(([^()]|\([^()]*\))*\)', '', s)
print("sret", ns)
assert ' asm ' not in s.replace('module asm', ''), "asm left"
s += '\ndeclare ptr @jsyn_cbe_thread_pointer()\ndeclare void @jsyn_cbe_sev()\ndeclare void @jsyn_cbe_wfe()\n'
open(dst, 'w').write(s)
print(src, "tp", n1)
