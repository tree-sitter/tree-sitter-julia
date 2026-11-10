# cconform.py KERNEL.C: make llvm-cbe's C well defined without compiler flags.
#
# llvm-cbe prints LLVM loads and stores as typed pointer dereferences (`*(uint64_t*)p`, `*((uint32_t*)&x)
# = v`) of memory that is also accessed with other types (Julia objects in the arena, locals reused as raw
# bytes): undefined under C's aliasing rules, so it needed -fno-strict-aliasing (GCC only, by pragma).
# Every such access becomes a memcpy through a small inline helper (compilers turn it back into one load
# or store). Byte (uint8_t) accesses are allowed by the rules and stay. Shifts by the type's width or more
# (poison in LLVM, whose result the code never uses) are undefined in C: the shift helpers mask the count.
import re, sys

TYPES = {  # C type in the dereference -> helper suffix, value type
    'uint16_t': ('u16', 'uint16_t'), 'uint32_t': ('u32', 'uint32_t'), 'uint64_t': ('u64', 'uint64_t'),
    'void*': ('ptr', 'void*'), 'double': ('f64', 'double'), 'float': ('f32', 'float'),
}
HELPERS = ''.join(
    f'static JSK_ACCESS {t} jsk_ld_{n}(const void *p) {{ {t} v; memcpy(&v, p, sizeof v); return v; }}\n'
    f'static JSK_ACCESS void jsk_st_{n}(void *p, {t} v) {{ memcpy(p, &v, sizeof v); }}\n'
    for n, t in TYPES.values())
HELPERS = ('// typed loads and stores without aliasing assumptions (cconform.py); always inlined: they are\n'
           '// single loads and stores, and the generated functions are too large for the inliner\'s budget\n'
           '#if defined(_MSC_VER)\n#define JSK_ACCESS __forceinline\n#else\n'
           '#define JSK_ACCESS inline __attribute__((always_inline))\n#endif\n' + HELPERS +
           'static inline uint64_t jsk_ld_vu64(const volatile void *p) { const volatile unsigned char *b = p; '
           'uint64_t v = 0; for (int i = 0; i < 8; i++) ((unsigned char *)&v)[i] = b[i]; return v; }\n')

def operand(s, i):
    """The operand starting at s[i]: an identifier/number, or a balanced parenthesized group."""
    if s[i] == '(':
        d = 0
        for j in range(i, len(s)):
            d += s[j] == '('
            d -= s[j] == ')'
            if d == 0:
                return j + 1
        raise ValueError('unbalanced')
    m = re.compile(r'[&]?\w+').match(s, i)
    return m.end()

def value_end(s, i):
    """End of an assigned value starting at s[i]: the `;` at depth 0."""
    d = 0
    for j in range(i, len(s)):
        c = s[j]
        if c in '([': d += 1
        elif c in ')]': d -= 1
        elif c == ';' and d == 0: return j
    raise ValueError('no ;')

DEREF = re.compile(r'\*\((\(?)(volatile )?(uint16_t|uint32_t|uint64_t|void\*|double|float)\*\)')
UNAL = re.compile(r'__UNALIGNED_LOAD__\((\w+), \d+, ')

def rewrite(s):
    out, i, n = [], 0, 0
    while True:
        m1, m2 = DEREF.search(s, i), UNAL.search(s, i)
        m = min((x for x in (m1, m2) if x), key=lambda x: x.start(), default=None)
        if m is None:
            out.append(s[i:])
            return ''.join(out), n
        out.append(s[i:m.start()])
        if m is m2:  # __UNALIGNED_LOAD__(T, align, op): op up to the macro's closing paren
            t = m.group(1)
            j = m.end(); d = 1; k = j
            while d:
                d += s[k] == '('; d -= s[k] == ')'; k += 1
            op, end = s[j:k - 1], k
            vol = False
        else:
            wrapped, vol, t = m.group(1) == '(', bool(m.group(2)), m.group(3)
            j = m.end()
            if wrapped:  # *((T*)op): op up to the closing paren of the outer group
                d = 1; k = j
                while d:
                    d += s[k] == '('; d -= s[k] == ')'; k += 1
                op, end = s[j:k - 1], k
            else:
                k = operand(s, j)
                op, end = s[j:k], k
        name = TYPES[t][0]
        rest = s[end:]
        st = re.match(r'\s*=(?!=)\s*', rest)
        if st:
            assert not vol
            v0 = end + st.end()
            v1 = value_end(s, v0)
            out.append(f'jsk_st_{name}({op}, {s[v0:v1]})')
            i = v1
        else:
            out.append(f'jsk_ld_v{name}({op})' if vol else f'jsk_ld_{name}({op})')
            i = end
        n += 1

def guard_shifts(s):
    # static __forceinline uintN_t llvm_{shl,lshr,ashr}_uM(uintN_t a, uintN_t b) { uintN_t r = ... a OP b ...;
    pat = re.compile(r'(static __forceinline \S+ llvm_(?:shl|lshr|ashr)_\w+\(u?int(\d+)_t a, [^)]*\) \{\n  \S+ r = )([^;]*);')
    def fix(m):
        w = m.group(2)
        # mask the count: defined in C, free on hardware that masks shift counts (LLVM: poison, unused)
        e = re.sub(r'a (<<|>>) b', lambda x: f'a {x.group(1)} (b & {int(w) - 1})', m.group(3), count=1)
        return m.group(1) + e + ';'
    return pat.subn(fix, s)

if __name__ == '__main__':
    p = sys.argv[1]
    s = open(p).read()
    s, n = rewrite(s)
    s, k = guard_shifts(s)
    anchor = '#include <string.h>\n'
    assert anchor in s
    s = s.replace(anchor, anchor + HELPERS, 1)
    s += '#undef JSK_ACCESS\n'
    open(p, 'w').write(s)
    print(p, 'typed accesses', n, 'shift helpers', k)
