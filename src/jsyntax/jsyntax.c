// JuliaSyntax's lexer and the parser rules the scanner asks about, compiled from JuliaSyntax (Julia) to C
// without the Julia runtime. #included by ../scanner.c (one translation unit, so no binding needs extra sources).
//   kernel.c          generated from JuliaSyntax by script/jsyntax/regenerate.sh: do not edit
//   unicode_tables.h  generated from Julia's utf8proc by the same script: do not edit
//   runtime.c         hand-written support for kernel.c (allocation arena, exceptions, Unicode)
// API: the jsyn_* functions at the end of runtime.c.
// Licenses of the code these files derive from (JuliaSyntax, Julia, utf8proc): ../../THIRD-PARTY-NOTICES.md
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
#if defined(__BYTE_ORDER__) && defined(__ORDER_BIG_ENDIAN__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#error "src/jsyntax/kernel.c was generated for little-endian targets (it builds characters from byte loads)"
#endif
#include "runtime.c"
#include "kernel.c"
#include "kinds.h"
#if defined(_MSC_VER)
#undef __attribute__ // defined away by kernel.c for MSVC; keep it out of the rest of the unit
#endif
#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC pop_options
#pragma GCC diagnostic pop
#endif
#endif
