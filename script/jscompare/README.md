# Comparing trees with JuliaSyntax

How closely tree-sitter-julia's trees match JuliaSyntax's (the parser of Julia 1.13), node by node, on
real code.

## The corpus

`corpus/`: the 1000 most-requested packages of the General registry. `select.py` ranks packages by unique
client addresses in the public package-server logs (`package_requests.csv.gz` from julialang-logs), drops
JLL binary wrappers (generated code), and takes each package's latest non-yanked version and its tree hash
from the registry (`top1000.tsv`). `fetch.py` downloads each release tag's tarball; `fetch2.py` exports the
registered tree from a bare clone for the packages without a usable tag. Of the 1000, 999 were available:
33,395 `.jl` files, 295 MB.

## The comparison

- `jsdump.mjs WASM FILES OUT`: runs JuliaSyntax (`juliasyntax.wasm`: Julia 1.13's parser compiled to
  WebAssembly GC, from the `test/juliasyntax` harness of PR #1) on each file and writes every node of its
  green tree except whitespace and comment tokens, with its byte span trimmed of those (`OUT`, plus the
  kind names in `OUT.kinds`). Deeply nested files need `node --stack-size=60000` (and `ulimit -s unlimited`).
- `jscompare.c`: links against one build of this grammar (`parser.c`, `scanner.c`) and the tree-sitter
  runtime; `jscompare FILES OUT OUT.kinds PREFIX` parses every file and checks each JuliaSyntax node against
  the tree-sitter tree. It writes `PREFIX.kinds.tsv` (per kind: nodes, reproduced raw, reproduced
  normalized), `PREFIX.files.tsv` (per file: errors on each side, nodes, bytes in ERROR nodes) and a summary.
  `SHOWKIND=<kind> [SHOWLEAF=1] [SHOWN=n]` prints unmatched examples.

A JuliaSyntax node is **reproduced** when a tree-sitter node has exactly its span (not an ERROR node or a
node inside one). Both sides' spans leave out whitespace and comments at either end (tree-sitter's blocks
end with newline terminators and can begin or end with comments; a token keeps its own span, so string
content may be or end in spaces). Punctuation and keywords that JuliaSyntax marks as trivia are not
counted.

**Raw** is that comparison and nothing else. **Normalized** adds mappings for conventions where both trees
have a node for the same thing but draw its boundary differently. Each is counted separately, and none
accepts a different structure:

| rule | JuliaSyntax | tree-sitter |
|---|---|---|
| `char` | `Char`: the character | `character_literal`: with its quotes |
| `string` | `String` pieces: one per line of a triple-quoted string (the indentation it strips lies between them), escapes inside | `content` split at each `escape_sequence`, lines together. A run of pieces with only whitespace between them counts when the same text, trimmed of whitespace, is a run of adjacent `content`/`escape_sequence` nodes |
| `dotop` | the operator name alone (`.` and `=` are separate tokens in `.*`, `+=`) | `operator` with the leading `.` and/or trailing `=` |
| `interp` | `(x)` after `$` | `string_interpolation` (`$(x)`) |
| `iter` | `iteration`: `i in xs, j in ys` | the comprehension's `for_clause`, with `for` |
| `sep` | a block or matrix row with its `;` separators (`if a; b; end`, `[1 2;\n 3 4]`) | `block`/`matrix_row` without them |
| `var` | the name inside `var"…"` | `identifier` with `var"` and `"` |
| `tomb` | `TOMBSTONE` (placeholder nodes) | not counted |

**Core** leaves out a fixed list of kinds whose boundaries no grammar version shares with JuliaSyntax
(`CORE_OUT` in `jscompare.c`: string pieces, characters, `parameters`, `doc`, `parens`, `elseif`,
`generator`, `iteration`, `toplevel`, …; 8% of the nodes).

What stays unmatched after normalization is structure: nodes that only JuliaSyntax has (`parameters`
after `;`, `doc`, the quoted part of a prefixed string, `generator` inside brackets, a `for` loop's
iteration list, a `do` block's argument tuple), or different nesting (JuliaSyntax's `elseif` contains the
rest of the chain; `@doc str` takes the documented expression from the next line).
