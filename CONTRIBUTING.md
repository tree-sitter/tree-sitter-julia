# Contributing guide

You can contribute to tree-sitter-julia by reporting or fixing bugs.


## Report bugs

To report a bug, you can file an [issue on GitHub](https://github.com/tree-sitter/tree-sitter-julia/issues).
Follow the bug report template to ensure the issue includes a brief explanation of the bug,
the expected behavior, and a minimal reproducible example.

If your text editor isn't highlighting code correctly, the error might be in the the parser or the queries.
If the syntax tree has `ERROR` nodes for valid Julia programs, the error is probably on the parser and
you should file an issue in this repository. Remember that we don't control the version of the parser used by editors,
so some issues might be due to your editor using an outdated parser.

Otherwise, if the syntax tree appears to be correct, the issue might be with the queries used by your editor.
We keep a minimal set of queries in this repository, but most editors include their own queries.
If there's an issue with queries you should _file an issue in your editor or plugin's corresponding issue tracker._

The easiest way to check if there's an error in the parser is to read the generated syntax tree of the erroneously highlighted code.
Some editors can display the syntax tree of a text file directly.
For example, Neovim has the [`:InspectTree`](https://neovim.io/doc/user/treesitter.html#vim.treesitter.inspect_tree()) command.


## Build and develop

tree-sitter-julia follows the usual structure of a tree-sitter project.
- To get started, you should read the [Creating Parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers) section of the tree-sitter docs.
- Every bug fix or new feature should include tests. This helps us document supported syntax, check edge cases, and avoid regressions.
- Note that the grammar is mostly done feature-wise, but optimizations in build size and compilation speed are very welcome.


## Guidelines for writing queries

The queries in this repository should follow the following rules:

- No highlighting is better than ambiguous highlighting.
  If syntax highlighting is excessive or _wrong,_ it loses its value.
- Only public names defined in `Core` should be highlighted as `builtin`.
  Julia `Base` is huge, and highlighting everything in it has diminishing returns.
- Captures mostly follow [Neovim's naming conventions](https://neovim.io/doc/user/treesitter.html#treesitter-highlight-groups),
  since they're well documented and widely used.
  Adapting the captures to work with other editors usually requires a few small changes.


# Editor specific details

## Neovim

The Julia queries used in Neovim are in the nvim-treesitter repository:
- [Queries](https://github.com/nvim-treesitter/nvim-treesitter/tree/master/queries/julia)
- [CONTRIBUTING.md](https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md)

If you want to use your locally built Julia parser in Neovim, you can copy the following snippet
to your configuration _before_ you call `require('nvim-treesitter.configs').setup`.

```lua
require("nvim-treesitter.parsers").get_parser_configs().julia = {
  install_info = {
    url = "~/path/to/your/fork/of/tree-sitter-julia/",
    files = { "src/parser.c", "src/scanner.c" },
  }
}
```

You'll have to modify the tree-sitter queries according to the changes you've made in the grammar,
otherwise you might get highlighting errors.
