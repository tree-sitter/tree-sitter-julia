# Post-process llvm-cbe output: function aliases (how Julia exports @ccallable entry points) come out as
# function-pointer *variables*; make them real ELF aliases. Also fix llvm-cbe's `UINT0` typo (usub.sat).
import sys, re
p = sys.argv[1]
s = open(p).read()
s, na = re.subn(r'^(l_fptr_\d+) \*(\w+) = \(l_fptr_\d+\*\)\(\(void\*\)&(\w+)\);$',
                r'extern __typeof__(\3) \2 __attribute__((alias("\3"), visibility("default")));', s, flags=re.M)
s = s.replace('? UINT0 :', '? 0 :')
open(p, 'w').write(s)
print(p, "aliases", na)
