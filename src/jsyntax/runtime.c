// Runtime support for kernel.c, the JuliaSyntax lexer rule compiled to C (see script/jsyntax/README.md).
// This replaces the few things the compiled Julia code still expects from libjulia; nothing else from
// Julia is needed. Hand-written; everything is static (this file is #included by jsyntax.c).
//
//   jsk_ijl_gc_small_alloc, jsk_jl_alloc_genericmemory_unchecked: the lexer, its IO object and its
//       string-state vector are heap objects in Julia. Here they live in a bump arena on the C caller's
//       stack and are dropped when the call returns (nothing outlives the call, so no GC is needed).
//   jsk_ijl_gc_queue_root: the GC write barrier's slow path; never taken (arena objects are "young").
//   jsk_throw, jsk_ijl_throw, jsk_ijl_bounds_error_int, jsk_jl_argument_error,
//   jsk_ijl_undefined_var_error: exception paths. They longjmp back to the entry point, which then
//       answers "no" (the grammar's default reading). Never taken on Julia's base + stdlib.
//   pgcstack: compiled Julia functions take the task's GC-stack pointer as their first argument and push
//       their GC frames on it; the entry passes a fake, zeroed task.
//   jsk_utf8proc_category, jsk_utf8proc_grapheme_break_stateful, jsk_jl_id_char, jsk_jl_id_start_char:
//       the Unicode functions Julia's Base calls in C (from utf8proc and Julia's
//       src/flisp/julia_extensions.c, both MIT), on tables generated from Julia's own utf8proc.
#if !defined(__wasm__)
#include <setjmp.h>
#endif
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "unicode_tables.h"

#define JSK_ARENA 4096

typedef struct {
#if !defined(__wasm__)
    jmp_buf jmp;
#endif
    size_t used;
    _Alignas(16) unsigned char arena[JSK_ARENA];
} jsk_ctx;

// Per-thread state, so that parsers on different threads do not share an arena. Chosen by compiler:
// __STDC_NO_THREADS__ only says <threads.h> is missing (Clang defines it on Darwin and for MSVC targets),
// not that thread-local storage is.
#if defined(__wasm__)
#define JSK_TLS // tree-sitter's Wasm runtime is single-threaded
#elif defined(_MSC_VER)
#define JSK_TLS __declspec(thread)
#elif defined(__GNUC__) || defined(__clang__)
#define JSK_TLS __thread
#else
#define JSK_TLS _Thread_local
#endif
static JSK_TLS jsk_ctx *jsk_cur;

#if defined(_MSC_VER)
#define JSK_NORETURN __declspec(noreturn)
#define JSK_UNUSED
#else
#define JSK_NORETURN __attribute__((noreturn))
#define JSK_UNUSED __attribute__((unused))
#endif

#if defined(__wasm__)
// tree-sitter's Wasm runtime has no setjmp/longjmp: there, an exception (never seen on Julia's base and
// stdlib) traps instead of answering "no".
JSK_NORETURN static void jsk_throw(void) { __builtin_trap(); }
#define JSK_SETJMP(env) 0
#else
JSK_NORETURN static void jsk_throw(void) { longjmp(jsk_cur->jmp, 1); }
#define JSK_SETJMP(env) setjmp(env)
#endif
JSK_NORETURN static void jsk_ijl_throw(void *e) { (void)e; jsk_throw(); }
JSK_NORETURN static void jsk_ijl_bounds_error_int(void *v, uint64_t i) { (void)v; (void)i; jsk_throw(); }
JSK_NORETURN static void jsk_jl_argument_error(void *msg) { (void)msg; jsk_throw(); }
JSK_NORETURN static void jsk_ijl_undefined_var_error(void *var, void *scope) { (void)var; (void)scope; jsk_throw(); }
static void jsk_ijl_gc_queue_root(void *root) { (void)root; }

// osize includes the 8-byte type tag in front of the object; returns the object pointer
static unsigned char *jsk_alloc(size_t osize) {
    size_t need = (osize + 15) & ~(size_t)15;
    if (jsk_cur->used + need > JSK_ARENA) jsk_throw();
    unsigned char *p = jsk_cur->arena + jsk_cur->used;
    jsk_cur->used += need;
    memset(p, 0, need);
    return p + 8;
}
static void *jsk_ijl_gc_small_alloc(void *ptls, uint32_t offset, uint32_t osize, uint64_t type) {
    (void)ptls; (void)offset; (void)type;  // the caller writes the type tag
    return jsk_alloc(osize);
}
// jl_genericmemory_t = {length, ptr} with the data inline at +16; the caller sets the length
static void *jsk_jl_alloc_genericmemory_unchecked(void *ptls, uint64_t nbytes, void *mtype) {
    (void)ptls;
    if (nbytes > JSK_ARENA) jsk_throw();
    unsigned char *m = jsk_alloc(8 + 16 + (size_t)nbytes);
    // byte offsets of 64-bit Julia (also on 32-bit targets): tag at -8, ptr at +8
    *(void **)(m - 8) = mtype;
    *(void **)(m + 8) = m + 16;
    return m;
}
// llvm.fshl.i64, which llvm-cbe cannot print
static uint64_t jsyn_cbe_fshl_i64(uint64_t a, uint64_t b, uint64_t sh) {
    sh &= 63;
    return sh ? (a << sh) | (b >> (64 - sh)) : a;
}

// ---- Unicode (utf8proc 2.11.3 semantics; the tables come from Julia's own utf8proc) ----
static unsigned jsk_uc(int32_t c) {
    if (c < 0 || c >= 0x110000) return JSK_UC_OOR;
    return jsk_uc_values[jsk_uc_stage2[(jsk_uc_stage1[c >> JSK_UC_SHIFT] << JSK_UC_SHIFT) | (c & ((1 << JSK_UC_SHIFT) - 1))]];
}
static uint32_t jsk_utf8proc_category(uint32_t c) { return jsk_uc((int32_t)c) & 31; }

// From utf8proc.c (MIT; Copyright (c) 2014-2021 Steven G. Johnson, Jiahao Chen, Tony Kelman, Jonas
// Fonseca, and other contributors; Copyright (c) 2009 Public Software Group e. V., Berlin, Germany)
enum { BC_START = 0, BC_OTHER, BC_CR, BC_LF, BC_CONTROL, BC_EXTEND, BC_L, BC_V, BC_T, BC_LV, BC_LVT,
       BC_RI, BC_SPACINGMARK, BC_PREPEND, BC_ZWJ, BC_E_BASE, BC_E_MODIFIER, BC_GLUE_AFTER_ZWJ,
       BC_E_BASE_GAZ, BC_EXTPICT, BC_E_ZWG };
enum { ICB_NONE = 0, ICB_LINKER, ICB_CONSONANT, ICB_EXTEND };
static int jsk_grapheme_break_simple(int lbc, int tbc) {
    return (lbc == BC_START) ? 1 :
           (lbc == BC_CR && tbc == BC_LF) ? 0 :
           (lbc >= BC_CR && lbc <= BC_CONTROL) ? 1 :
           (tbc >= BC_CR && tbc <= BC_CONTROL) ? 1 :
           (lbc == BC_L && (tbc == BC_L || tbc == BC_V || tbc == BC_LV || tbc == BC_LVT)) ? 0 :
           ((lbc == BC_LV || lbc == BC_V) && (tbc == BC_V || tbc == BC_T)) ? 0 :
           ((lbc == BC_LVT || lbc == BC_T) && tbc == BC_T) ? 0 :
           (tbc == BC_EXTEND || tbc == BC_ZWJ || tbc == BC_SPACINGMARK || lbc == BC_PREPEND) ? 0 :
           (lbc == BC_E_ZWG && tbc == BC_EXTPICT) ? 0 :
           (lbc == BC_RI && tbc == BC_RI) ? 0 : 1;
}
static int jsk_grapheme_break_extended(int lbc, int tbc, int licb, int ticb, int32_t *state) {
    if (!state) return jsk_grapheme_break_simple(lbc, tbc);
    int state_bc, state_icb;
    if (*state == 0) { state_bc = lbc; state_icb = licb == ICB_CONSONANT ? licb : ICB_NONE; }
    else { state_bc = *state & 0xff; state_icb = *state >> 8; }
    int break_permitted = jsk_grapheme_break_simple(state_bc, tbc) && !(state_icb == ICB_LINKER && ticb == ICB_CONSONANT);
    if (ticb == ICB_CONSONANT || state_icb == ICB_CONSONANT || state_icb == ICB_EXTEND) state_icb = ticb;
    else if (state_icb == ICB_LINKER) state_icb = ticb == ICB_EXTEND ? ICB_LINKER : ticb;
    if (state_bc == tbc && tbc == BC_RI) state_bc = BC_OTHER;
    else if (state_bc == BC_EXTPICT) {
        if (tbc == BC_EXTEND) state_bc = BC_EXTPICT;
        else if (tbc == BC_ZWJ) state_bc = BC_E_ZWG;
        else state_bc = tbc;
    } else state_bc = tbc;
    *state = state_bc + (state_icb << 8);
    return break_permitted;
}
static uint8_t jsk_utf8proc_grapheme_break_stateful(uint32_t c1, uint32_t c2, void *state) {
    unsigned p1 = jsk_uc((int32_t)c1), p2 = jsk_uc((int32_t)c2);
    return (uint8_t)jsk_grapheme_break_extended((p1 >> 5) & 31, (p2 >> 5) & 31, (p1 >> 10) & 3, (p2 >> 10) & 3, (int32_t *)state);
}

// From Julia v1.13.2 src/flisp/julia_extensions.c (MIT; Copyright (c) 2009-2024: Jeff Bezanson, Stefan
// Karpinski, Viral B. Shah, and other contributors: https://github.com/JuliaLang/julia/contributors)
enum { CAT_CN = 0, CAT_LU, CAT_LL, CAT_LT, CAT_LM, CAT_LO, CAT_MN, CAT_MC, CAT_ME, CAT_ND, CAT_NL, CAT_NO,
       CAT_PC, CAT_PD, CAT_PS, CAT_PE, CAT_PI, CAT_PF, CAT_PO, CAT_SM, CAT_SC, CAT_SK, CAT_SO };
static int jsk_is_wc_cat_id_start(uint32_t wc, uint32_t cat) {
    return (cat == CAT_LU || cat == CAT_LL || cat == CAT_LT || cat == CAT_LM || cat == CAT_LO || cat == CAT_NL || cat == CAT_SC ||
            (cat == CAT_SO && !(wc >= 0x2190 && wc <= 0x21FF) && wc != 0xfffc && wc != 0xfffd && wc != 0x233f && wc != 0x00a6) ||
            (wc >= 0x2140 && wc <= 0x2a1c &&
             ((wc >= 0x2140 && wc <= 0x2144) || wc == 0x223f || wc == 0x22be || wc == 0x22bf || wc == 0x22a4 || wc == 0x22a5 ||
              (wc >= 0x2200 && wc <= 0x2233 &&
               (wc == 0x2202 || wc == 0x2205 || wc == 0x2206 || wc == 0x2207 || wc == 0x220e || wc == 0x220f ||
                wc == 0x2200 || wc == 0x2203 || wc == 0x2204 || wc == 0x2210 || wc == 0x2211 || wc == 0x221e ||
                wc == 0x221f || wc >= 0x222b)) ||
              (wc >= 0x22c0 && wc <= 0x22c3) || (wc >= 0x25F8 && wc <= 0x25ff) ||
              (wc >= 0x266f &&
               (wc == 0x266f || wc == 0x27d8 || wc == 0x27d9 || (wc >= 0x27c0 && wc <= 0x27c1) ||
                (wc >= 0x29b0 && wc <= 0x29b4) || (wc >= 0x2a00 && wc <= 0x2a06) || (wc >= 0x2a09 && wc <= 0x2a16) ||
                wc == 0x2a1b || wc == 0x2a1c)))) ||
            (wc >= 0x1d6c1 && (wc == 0x1d6c1 || wc == 0x1d6db || wc == 0x1d6fb || wc == 0x1d715 || wc == 0x1d735 ||
                               wc == 0x1d74f || wc == 0x1d76f || wc == 0x1d789 || wc == 0x1d7a9 || wc == 0x1d7c3)) ||
            (wc >= 0x207a && wc <= 0x207e) || (wc >= 0x208a && wc <= 0x208e) ||
            (wc >= 0x2220 && wc <= 0x2222) || (wc >= 0x299b && wc <= 0x29af) ||
            wc == 0x2118 || wc == 0x212E || (wc >= 0x309B && wc <= 0x309C) ||
            (wc >= 0x1D7CE && wc <= 0x1D7E1));
}
static uint32_t jsk_jl_id_start_char(uint32_t wc) {
    if ((wc >= 'A' && wc <= 'Z') || (wc >= 'a' && wc <= 'z') || wc == '_') return 1;
    if (wc < 0xA1 || wc > 0x10ffff) return 0;
    if (wc == 0x1f8b2) return 1;
    return jsk_is_wc_cat_id_start(wc, jsk_utf8proc_category(wc));
}
static uint32_t jsk_jl_id_char(uint32_t wc) {
    if ((wc >= 'A' && wc <= 'Z') || (wc >= 'a' && wc <= 'z') || wc == '_' || (wc >= '0' && wc <= '9') || wc == '!') return 1;
    if (wc < 0xA1 || wc > 0x10ffff) return 0;
    uint32_t cat = jsk_utf8proc_category(wc);
    if (jsk_is_wc_cat_id_start(wc, cat)) return 1;
    return cat == CAT_MN || cat == CAT_MC || cat == CAT_ND || cat == CAT_PC || cat == CAT_SK || cat == CAT_ME ||
           cat == CAT_NO || (wc >= 0x2032 && wc <= 0x2037) || wc == 0x2057 || wc == 0x1f8b2;
}

// ---- entries ----
static uint32_t jsk_jsyn_space_prefix(void *pgcstack, void *p, uint64_t n);                    // kernel.c
static uint32_t jsk_jsyn_token(void *pgcstack, void *p, uint64_t n, int32_t last, void *out);   // kernel.c
static uint32_t jsk_jsyn_contextual_keyword(void *pgcstack, void *p, uint64_t n);              // kernel.c
static uint32_t jsk_jsyn_string_token(void *pgcstack, void *p, uint64_t n, int32_t delim, int32_t triple,
                                      int32_t raw, int32_t last, void *out);                     // kernel.c
static uint32_t jsk_jsyn_char_literal(void *pgcstack, void *p, uint64_t n);                    // kernel.c
static uint32_t jsk_jsyn_escape_len(void *pgcstack, void *p, uint64_t n, int32_t raw, int32_t delim); // kernel.c
static uint32_t jsk_jsyn_var_identifier(void *pgcstack, void *p, uint64_t n);                  // kernel.c

// Runs CALL (a kernel function, with `&jsk_fake.task[32]` as its GC-stack argument) with a fresh arena and a
// fake task; evaluates to its result, or to -1 if the Julia code threw.
// The fake task and thread state are the same for every call on a thread: set them up once.
static JSK_TLS struct { void *task[64]; void *ptls[64]; void *zero[8]; int ready; } jsk_fake;

// Runs CALL (a kernel function, with `jsk_fake.task + 32` as its GC-stack argument) with a fresh arena;
// sets r to its result, or leaves it at -1 if the Julia code threw.
#define JSK_RUN(CALL)                                                                          \
    do {                                                                                       \
        if (!jsk_fake.ready) {                                                                 \
            for (int i = 0; i < 64; i++) { jsk_fake.ptls[i] = jsk_fake.zero; jsk_fake.task[i] = jsk_fake.ptls; } \
            jsk_fake.ready = 1;                                                                \
        }                                                                                      \
        jsk_fake.task[32] = NULL; /* the GC frame list head (stale after a longjmp) */         \
        jsk_ctx ctx;                                                                           \
        ctx.used = 0;                                                                          \
        jsk_ctx *prev = jsk_cur;                                                               \
        jsk_cur = &ctx;                                                                        \
        if (!JSK_SETJMP(ctx.jmp)) r = (int)(CALL);                                             \
        jsk_cur = prev;                                                                        \
    } while (0)

// JuliaSyntax's space-sensitive rule (parser.jl, parse_with_chains / parse_chain), token part: the bytes
// p[0..n) start with an operator that is preceded by whitespace in a space-sensitive context. Returns 1
// if it is a prefix operator starting a new element (`[x -y]`), 0 if not, -1 if the Julia code threw.
JSK_UNUSED static int jsyn_space_prefix(const uint8_t *p, size_t n) {
    volatile int r = -1;
    JSK_RUN(jsk_jsyn_space_prefix(&jsk_fake.task[32], (void *)p, n));
    return r;
}

// The first token of p[0..n) per JuliaSyntax's lexer (end of input after n), after a token of kind
// `last` (0: none). Returns its Kind code (kinds.h), or -1; out[0] = byte length, out[1] = suffixed.
JSK_UNUSED static int jsyn_token(const uint8_t *p, size_t n, int last, int32_t out[2]) {
    volatile int r = -1;
    JSK_RUN(jsk_jsyn_token(&jsk_fake.task[32], (void *)p, n, last, out));
    return r;
}

// For a contextual keyword at p (abstract, mutable, primitive, public, outer, ...): 1 if JuliaSyntax's
// parser reads it as a keyword here (it looks at the next token), 0 if as an identifier, -1 on error.
JSK_UNUSED static int jsyn_contextual_keyword(const uint8_t *p, size_t n) {
    volatile int r = -1;
    JSK_RUN(jsk_jsyn_contextual_keyword(&jsk_fake.task[32], (void *)p, n));
    return r;
}

// The first token of p[0..n) inside a string delimited by `delim` (triple-quoted, raw: 0/1), per
// JuliaSyntax's lex_string_chunk. Returns its Kind (kinds.h) or -1; out[0] = byte length.
JSK_UNUSED static int jsyn_string_token(const uint8_t *p, size_t n, int delim, int triple, int raw, int last, int32_t out[2]) {
    volatile int r = -1;
    JSK_RUN(jsk_jsyn_string_token(&jsk_fake.task[32], (void *)p, n, delim, triple, raw, last, out));
    return r;
}

// A character literal at p: its byte length, 0 if there is none (JuliaSyntax's lexer), -1 on error.
JSK_UNUSED static int jsyn_char_literal(const uint8_t *p, size_t n) {
    volatile int r = -1;
    JSK_RUN(jsk_jsyn_char_literal(&jsk_fake.task[32], (void *)p, n));
    return r;
}

// The byte length of the escape sequence at p (a backslash) in string content, 0 if none (raw strings).
JSK_UNUSED static int jsyn_escape_len(const uint8_t *p, size_t n, int raw, int delim) {
    volatile int r = -1;
    JSK_RUN(jsk_jsyn_escape_len(&jsk_fake.task[32], (void *)p, n, raw, delim));
    return r; // -1: error; below -1: an invalid escape of that (negated) length
}

// `var"..."` at p: its byte length, 0 if there is none (JuliaSyntax's lexer), -1 on error.
JSK_UNUSED static int jsyn_var_identifier(const uint8_t *p, size_t n) {
    volatile int r = -1;
    JSK_RUN(jsk_jsyn_var_identifier(&jsk_fake.task[32], (void *)p, n));
    return r;
}
