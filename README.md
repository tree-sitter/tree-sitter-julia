# tree-sitter-julia

[![CI][ci]](https://github.com/tree-sitter/tree-sitter-julia/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
[![crates][crates]](https://crates.io/crates/tree-sitter-julia)
[![npm][npm]](https://www.npmjs.com/package/tree-sitter-julia)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-julia/)

A [tree-sitter](https://github.com/tree-sitter/tree-sitter) parser for [Julia](https://julialang.org/).

## References

- [The Julia Parser](https://github.com/JuliaLang/julia/blob/master/src/julia-parser.scm)
- [Julia ASTs documentation](https://docs.julialang.org/en/v1/devdocs/ast/)
- [JuliaSyntax.jl](https://julialang.github.io/JuliaSyntax.jl/dev/)

## Guidelines for writing queries

- No highlighting is better than ambiguous highlighting.
  If syntax highlighting is excessive or _wrong,_ it loses its value.

- Only public names defined in `Core` should be highlighted as `builtin`.
  Julia `Base` is huge, and highlighting everything in it has diminishing returns.

- Captures mostly follow [Neovim's naming conventions](https://neovim.io/doc/user/treesitter.html#treesitter-highlight-groups),
  since they're well documented and widely used.
  Adapting the captures to work with other editors usually requires a few small changes.

[ci]: https://img.shields.io/github/actions/workflow/status/tree-sitter/tree-sitter-julia/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[npm]: https://img.shields.io/npm/v/tree-sitter-julia?logo=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-julia?logo=rust
[pypi]: https://img.shields.io/pypi/v/tree-sitter-julia?logo=pypi&logoColor=ffd242


