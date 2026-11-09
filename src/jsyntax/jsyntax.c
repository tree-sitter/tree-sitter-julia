// JuliaSyntax's lexer rule for space-sensitive `+`/`-`, compiled from JuliaSyntax (Julia) to C without the
// Julia runtime. #included by ../scanner.c (one translation unit, so no binding needs extra sources).
//   kernel.c          generated from JuliaSyntax by script/jsyntax/regenerate.sh: do not edit
//   unicode_tables.h  generated from Julia's utf8proc by the same script: do not edit
//   runtime.c         hand-written support for kernel.c (allocation arena, exceptions, Unicode)
// API: static int jsyn_space_prefix(const uint8_t *p, size_t n);
#ifndef TREE_SITTER_JULIA_JSYNTAX_C
#define TREE_SITTER_JULIA_JSYNTAX_C
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-but-set-variable"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wparentheses-equality"
#pragma clang diagnostic ignored "-Wbitwise-instead-of-logical"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types-discards-qualifiers"
#pragma clang diagnostic ignored "-Wsometimes-uninitialized"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wold-style-declaration"
#pragma GCC diagnostic ignored "-Wdiscarded-qualifiers"
#pragma GCC diagnostic ignored "-Wbuiltin-declaration-mismatch"
#pragma GCC push_options
#pragma GCC optimize("no-strict-aliasing", "wrapv")  // llvm-cbe's C type-puns through pointer casts
#endif
#include "runtime.c"
#include "kernel.c"
#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC pop_options
#pragma GCC diagnostic pop
#endif
#endif
