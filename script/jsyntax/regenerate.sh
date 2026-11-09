#!/usr/bin/env bash
# Regenerate src/jsyntax/kernel.c, kinds.h and unicode_tables.h from JuliaSyntax: the single source of
# truth for the scanner's tokens and lexical decisions. See README.md.
#
# Needs (pinned; other versions change the generated code):
#   JULIA     Julia 1.13.2 (its base/JuliaSyntax is the JuliaSyntax used, plus tokenize.patch)
#   LLVM_BIN  LLVM 20 tools (llvm-dis, llvm-as, llvm-link, opt), e.g. the LLVM 20.1.8 release tarball
#   LLVM_CBE  llvm-cbe (github.com/JuliaHubOSS/llvm-cbe 83f1bea, the last LLVM-20 commit) built against it
#   cc, python3, curl, patch; network for JuliaC 0.3.12 and utf8proc.h 2.11.3
set -euo pipefail
HERE=$(cd "$(dirname "$0")" && pwd)
ROOT=$(cd "$HERE/../.." && pwd)
JULIA=${JULIA:-julia}
: "${LLVM_BIN:?set LLVM_BIN to an LLVM 20 bin directory}"
: "${LLVM_CBE:?set LLVM_CBE to an llvm-cbe built against LLVM 20}"
export LLVM_BIN LLVM_CBE
W=${WORK:-$(mktemp -d)}
mkdir -p "$W"
echo "work dir: $W"

$JULIA -e 'VERSION == v"1.13.2" || error("need Julia 1.13.2, have $VERSION")'

# 1. JuliaSyntax: Julia's own copy + the tokenizer patch (lookup tables as isbits tuples, no Dicts)
JS=$($JULIA -e 'print(joinpath(Sys.BINDIR, Base.DATAROOTDIR, "julia", "base", "JuliaSyntax"))')
rm -rf "$W/JuliaSyntax" && cp -r "$JS" "$W/JuliaSyntax" && chmod -R u+w "$W/JuliaSyntax"
patch -d "$W/JuliaSyntax" -p1 < "$HERE/tokenize.patch"
mkdir -p "$W/envk" "$W/envc"
cat > "$W/envk/Project.toml" <<TOML
[deps]
JuliaSyntax = "70703baa-626e-46a2-a12c-08ffd08c73b4"

[sources]
JuliaSyntax = {path = "$W/JuliaSyntax"}
TOML
$JULIA --project="$W/envk" -e 'using Pkg; Pkg.instantiate()'
$JULIA --project="$W/envc" -e 'using Pkg; Pkg.add(name="JuliaC", version="0.3.12")'

# 2. juliac --trim=safe --output-bc -> one runtime-free module -> C (llvm-cbe)
$JULIA --project="$W/envc" "$HERE/build_bc.jl" "$HERE/kernel.jl" "$W/envk" "$W/bc/jsyn.bc.a"
python3 "$HERE/kgen.py" "$W/bc" jsyn_space_prefix jsyn_token jsyn_contextual_keyword jsyn_string_token jsyn_char_literal jsyn_escape_len jsyn_var_identifier
cp "$W/bc/kernel.c" "$ROOT/src/jsyntax/kernel.c"
# Kind codes, each kind's grammar class (JuliaSyntax's kind predicates) and plain-character tables for
# the scanner; the scanner's token list for grammar.js (grammar-tokens.js) and scanner.c (externals.h)
$JULIA --project="$W/envk" "$HERE/gen_kinds.jl" "$HERE/kernel.jl" "$ROOT/grammar-tokens.js" \
    "$ROOT/src/jsyntax/externals.h" > "$ROOT/src/jsyntax/kinds.h"

# 3. Unicode tables from the utf8proc inside Julia (libjulia-internal), read with utf8proc.h 2.11.3
curl -fsSL https://raw.githubusercontent.com/JuliaStrings/utf8proc/v2.11.3/utf8proc.h -o "$W/utf8proc.h"
JL=$($JULIA -e 'print(abspath(Sys.BINDIR, Base.LIBDIR))')
cc -O2 -I"$W" "$HERE/gen_unicode.c" -L"$JL/julia" -L"$JL" -Wl,-rpath,"$JL/julia" -Wl,-rpath,"$JL" \
   -ljulia-internal -ljulia -o "$W/gen_unicode"
"$W/gen_unicode" > "$ROOT/src/jsyntax/unicode_tables.h"
echo "regenerated src/jsyntax/kernel.c, kinds.h and unicode_tables.h"
