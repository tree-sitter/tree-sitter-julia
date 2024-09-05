# Guidelines for writing queries

- No highlighting is better than ambiguous highlighting.
  If syntax highlighting is excessive or _wrong,_ it loses its value.

- Only public names defined in `Core` should be highlighted as `builtin`.
  Julia `Base` is huge, and highlighting everything in it has diminishing returns.

- Captures mostly follow [Neovim's naming conventions](https://neovim.io/doc/user/treesitter.html#treesitter-highlight-groups),
  since they're well documented and widely used.
  Adapting the captures to work with other editors usually requires a few small changes.
