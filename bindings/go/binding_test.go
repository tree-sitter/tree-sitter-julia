package tree_sitter_julia_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_julia "github.com/tree-sitter/tree-sitter-julia/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_julia.Language())
	if language == nil {
		t.Errorf("Error loading Julia grammar")
	}
}
