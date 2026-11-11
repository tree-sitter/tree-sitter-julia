# Runtime-free scanner kernel: JuliaSyntax's own lexer (Tokenize) + its own space-sensitive rule,
# compiled with juliac --trim=safe --output-bc -> llvm-cbe -> C, with no libjulia.
#
# The question tree-sitter-julia's scanner asks: in a space-sensitive context (matrix row, macro
# arguments), after whitespace, does the operator at `p` start a new element (`[x -y]`) or is it
# infix (`[x - y]`, `[x -= y]`, `[x +₁y]`)? JuliaSyntax answers it in parse_with_chains / parse_chain:
#     ps.space_sensitive && preceding_whitespace(t) && is_both_unary_and_binary(t, isdot) &&
#         !preceding_whitespace(peek_token(ps, 2))
# The context and the preceding whitespace are the scanner's; the rest is computed here by calling
# JuliaSyntax's lexer on the bytes and JuliaSyntax's predicates on its tokens.
module JSynKernel
import JuliaSyntax
using JuliaSyntax: @K_str, kind
const JS = JuliaSyntax
const TK = JuliaSyntax.Tokenize

# An IO over raw bytes that never throws: the lexer only reads after checking eof.
mutable struct PtrIO <: IO
    p::Ptr{UInt8}
    n::Int
    pos::Int
end
Base.eof(io::PtrIO) = io.pos >= io.n
Base.position(io::PtrIO) = io.pos
@inline Base.peek(io::PtrIO, ::Type{UInt8}) = io.pos < io.n ? unsafe_load(io.p, io.pos + 1) : 0x00
@inline function Base.read(io::PtrIO, ::Type{UInt8})
    b = peek(io, UInt8)
    io.pos += 1
    return b
end

# 1: prefix operator starting a new element; 0: not (infix, or not such an operator).
function space_prefix(p::Ptr{UInt8}, n::Int)
    l = TK.Lexer(PtrIO(p, n, 0))
    raw = TK.next_token(l)
    isdot = false
    if kind(raw) == K"."            # peek_dotted_op_token: `.` directly followed by an operator
        raw = TK.next_token(l)
        JS.is_operator(kind(raw)) || return Int32(0)
        isdot = true
    end
    # The token the parser tests is the operator itself: preceded by the scanner's whitespace, or by the
    # dot of a dotted operator (no whitespace: `[x .-y]` is infix in JuliaSyntax)
    t = JS.SyntaxToken(JS.SyntaxHead(kind(raw), raw.suffix ? JS.SUFFIXED_FLAG : JS.EMPTY_FLAGS),
                       kind(raw), !isdot, UInt32(0))
    t2 = TK.next_token(l)
    return Int32(JS.preceding_whitespace(t) && JS.is_both_unary_and_binary(t, isdot) && !JS.is_whitespace(kind(t2)))
end

Base.@ccallable function jsyn_space_prefix(p::Ptr{UInt8}, n::Csize_t)::Cint
    return space_prefix(p, n % Int)
end

# ---- Token API for the scanner -------------------------------------------------------------------
# The first token of p[0..n) as JuliaSyntax's lexer sees it (end of input after n), after a previous
# token of kind `last` (0: none; it matters for `->` after `.` and `..`/`.` after `@`).
# Returns the token's Kind (as its UInt16 code); out[1] = byte length, out[2] = 1 if an operator suffix
# (`+₁`) was lexed.
function token(p::Ptr{UInt8}, n::Int, last::Int32, out::Ptr{Int32})
    l = TK.Lexer(PtrIO(p, n, 0))
    last != 0 && (l.last_token = reinterpret(JS.Kind, UInt16(last)))
    t = TK.next_token(l)
    unsafe_store!(out, Int32(t.endbyte - t.startbyte + 1), 1)
    unsafe_store!(out, Int32(t.suffix), 2)
    return Int32(reinterpret(UInt16, kind(t)))
end

Base.@ccallable function jsyn_token(p::Ptr{UInt8}, n::Csize_t, last::Cint, out::Ptr{Cint})::Cint
    return token(p, n % Int, last, out)
end

# next token, skipping whitespace and comments but not newlines (JuliaSyntax: `(mutable\nstruct X end)`
# is an identifier then an error, test/parser.jl)
function next_nontrivia(l)
    while true
        k = kind(TK.next_token(l))
        (k == K"Whitespace" || k == K"Comment") || return k
    end
end

# Is the contextual keyword at p a keyword here (1) or an identifier (0)? JuliaSyntax's parser decides
# with the next token (restated from src/julia/parser.jl: peek_initial_reserved_words for
# mutable/abstract/primitive, parse_public for public, parse_iteration_spec for outer).
function contextual_keyword(p::Ptr{UInt8}, n::Int)
    l = TK.Lexer(PtrIO(p, n, 0))
    k = kind(TK.next_token(l))
    k2 = next_nontrivia(l)
    if k == K"mutable"
        return Int32(k2 == K"struct")
    elseif k == K"abstract" || k == K"primitive"
        return Int32(k2 == K"type")
    elseif k == K"public"
        # parse_public: `public` followed by `(`, `=`, `[` is a name. JuliaSyntax only calls it at top level
        # and in module bodies, the only places the grammar has a public_statement.
        return Int32(!(k2 in JS.KSet"( = ["))
    elseif k == K"outer"
        return Int32(!(k2 in JS.KSet"= in ∈"))
    end
    return Int32(1)
end

Base.@ccallable function jsyn_contextual_keyword(p::Ptr{UInt8}, n::Csize_t)::Cint
    return contextual_keyword(p, n % Int)
end

# ---- Strings, characters --------------------------------------------------------------------------
# The first token of p[0..n) inside a string or command (JuliaSyntax's lex_string_chunk): a content
# chunk, `$`, the closing delimiter, an escaped newline (Whitespace), or an error kind. The string is
# delimited by `delim` (`"` or `` ` ``), triple-quoted or not, raw (string macro) or not; `last` is the
# previous token's kind (`$` before an interpolated identifier). out[1] = byte length.
function string_token(p::Ptr{UInt8}, n::Int, delim::Int32, triple::Bool, raw::Bool, last::Int32, out::Ptr{Int32})
    l = TK.Lexer(PtrIO(p, n, 0))
    push!(l.string_states, TK.StringState(triple, raw, Char(delim), 0))
    last != 0 && (l.last_token = reinterpret(JS.Kind, UInt16(last)))
    t = TK.next_token(l)
    unsafe_store!(out, Int32(t.endbyte - t.startbyte + 1), 1)
    return Int32(reinterpret(UInt16, kind(t)))
end

Base.@ccallable function jsyn_string_token(p::Ptr{UInt8}, n::Csize_t, delim::Cint, triple::Cint, raw::Cint,
                                           last::Cint, out::Ptr{Cint})::Cint
    return string_token(p, n % Int, delim, triple != 0, raw != 0, last, out)
end

# A character literal at p (`'a'`, `'\n'`, `'''`): its byte length, or 0 if JuliaSyntax's lexer does
# not read one there (an error kind, or no closing quote).
function char_literal(p::Ptr{UInt8}, n::Int)
    l = TK.Lexer(PtrIO(p, n, 0))
    t1 = TK.next_token(l)                       # `'`, opening (no previous token: not an adjoint)
    kind(t1) == K"'" || return Int32(0)
    t2 = TK.next_token(l)
    kind(t2) == K"Char" || return Int32(0)
    t3 = TK.next_token(l)
    kind(t3) == K"'" || return Int32(0)
    return Int32(t3.endbyte + 1)
end

Base.@ccallable function jsyn_char_literal(p::Ptr{UInt8}, n::Csize_t)::Cint
    return char_literal(p, n % Int)
end

# `var"..."` at p (JuliaSyntax: the `var` contextual keyword directly followed by a raw string is an
# identifier): its byte length, or 0.
function var_identifier(p::Ptr{UInt8}, n::Int)
    l = TK.Lexer(PtrIO(p, n, 0))
    t1 = TK.next_token(l)
    (kind(t1) == K"var" && t1.endbyte == 2) || return Int32(0)
    t2 = TK.next_token(l)
    (kind(t2) == K"\"" && t2.startbyte == 3) || return Int32(0)
    t3 = TK.next_token(l)
    if kind(t3) == K"String"
        t3 = TK.next_token(l)
    end
    kind(t3) == K"\"" || return Int32(0)
    return Int32(t3.endbyte + 1)
end

Base.@ccallable function jsyn_var_identifier(p::Ptr{UInt8}, n::Csize_t)::Cint
    return var_identifier(p, n % Int)
end

# The byte length of the escape sequence starting with a backslash at p[0] in string content: restated
# from JuliaSyntax's unescape_julia_string (src/julia/literal_parsing.jl), which consumes `\x` + up to 2
# hex digits, `\u` + up to 4, `\U` + up to 8, `\` + up to 3 octal digits, else `\` + one character. In
# raw strings (string macros) only two backslashes or backslash + delimiter are escapes (2 bytes), else 0.
# An invalid escape (JuliaSyntax reports "invalid escape sequence") gives minus its length.
function escape_len(p::Ptr{UInt8}, n::Int, raw::Bool, delim::UInt8)
    (n >= 1 && unsafe_load(p, 1) == UInt8('\\')) || return Int32(0)
    n >= 2 || return Int32(1)
    c = unsafe_load(p, 2)
    if raw
        return Int32(c == UInt8('\\') || c == delim ? 2 : 0)
    end
    i = 2
    valid = true
    if c == UInt8('x') || c == UInt8('u') || c == UInt8('U')
        m = c == UInt8('x') ? 2 : c == UInt8('u') ? 4 : 8
        k = 0
        v = UInt32(0)
        while (k += 1) <= m && i + 1 <= n
            nc = unsafe_load(p, i + 1)
            d = UInt8('0') <= nc <= UInt8('9') ? nc - UInt8('0') : UInt8('a') <= nc <= UInt8('f') ? nc - UInt8('a') + 0x0a :
                UInt8('A') <= nc <= UInt8('F') ? nc - UInt8('A') + 0x0a : 0xff
            d == 0xff && break
            v = v << 4 + d
            i += 1
        end
        valid = k > 1 && v <= 0x10ffff
    elseif UInt8('0') <= c <= UInt8('7')
        k = 1
        v = UInt32(c - UInt8('0'))
        while (k += 1) <= 3 && i + 1 <= n
            nc = unsafe_load(p, i + 1)
            UInt8('0') <= nc <= UInt8('7') || break
            v = v << 3 + (nc - UInt8('0'))
            i += 1
        end
        valid = v <= 255
    elseif c == UInt8('\r') && i + 1 <= n && unsafe_load(p, i + 1) == UInt8('\n')
        i += 1          # escaped \r\n: one line continuation
    elseif !(c in (UInt8('n'), UInt8('t'), UInt8('r'), UInt8('e'), UInt8('b'), UInt8('f'), UInt8('v'), UInt8('a'),
                   UInt8('\\'), UInt8('\''), UInt8('"'), UInt8('$'), UInt8('`'), UInt8('\n')))
        valid = false   # JuliaSyntax: "invalid escape sequence"
        while i + 1 <= n && (unsafe_load(p, i + 1) & 0xc0) == 0x80   # the whole (non-ASCII) character
            i += 1
        end
    end
    return Int32(valid ? i : -i)
end

Base.@ccallable function jsyn_escape_len(p::Ptr{UInt8}, n::Csize_t, raw::Cint, delim::Cint)::Cint
    return escape_len(p, n % Int, raw != 0, delim % UInt8)
end

# The grammar's terminal class of a JuliaSyntax token kind, from JuliaSyntax's kind predicates. Not
# compiled into the kernel: regenerate.sh evaluates it for every kind and writes a C table (kinds.h).
const CLASSES = [:NONE, :IDENTIFIER, :KEYWORD, :INTEGER, :FLOAT, :BOOL, :DOT, :WHITESPACE, :NEWLINE,
    :COMMENT, :ASSIGNMENT, :PAIR, :ARROW, :LAZY_OR, :LAZY_AND, :COMPARISON, :PIPE_LEFT, :PIPE_RIGHT,
    :ELLIPSIS, :PLUS, :UNARY_PLUS, :TIMES, :RATIONAL, :BITSHIFT, :POWER, :TILDE, :TYPE_ORDER, :UNARY]
function kind_class(k::JS.Kind)
    k == K"Identifier" && return :IDENTIFIER
    (JS.is_keyword(k) || JS.is_word_operator(k)) && return :KEYWORD   # word operators: in isa where
    k == K"Bool" && return :BOOL
    k in JS.KSet"Integer BinInt OctInt HexInt" && return :INTEGER
    k in JS.KSet"Float Float32" && return :FLOAT
    k == K"." && return :DOT
    k == K"Whitespace" && return :WHITESPACE
    k == K"NewlineWs" && return :NEWLINE
    k == K"Comment" && return :COMMENT
    # operators the grammar treats specially (unary, or unary and binary)
    k in JS.KSet"+ - ± ∓" && return :UNARY_PLUS
    (k == K"!" || JS.is_prec_unicode_ops(k)) && return :UNARY          # ! ¬ √ ∛ ∜
    k == K"~" && return :TILDE
    k in JS.KSet"<: >:" && return :TYPE_ORDER
    # by precedence level; `=`, `:`, `::`, `?`, `->`, `$`, `'`, `...` are punctuation in the grammar
    (k == K"op=" || k in JS.KSet":= ≔ ⩴ ≕") && return :ASSIGNMENT
    JS.is_prec_pair(k) && return :PAIR
    JS.is_prec_arrow(k) && return :ARROW
    JS.is_prec_lazy_or(k) && return :LAZY_OR
    JS.is_prec_lazy_and(k) && return :LAZY_AND
    JS.is_prec_comparison(k) && return :COMPARISON
    JS.is_prec_pipe_lt(k) && return :PIPE_LEFT
    JS.is_prec_pipe_gt(k) && return :PIPE_RIGHT
    (JS.is_prec_colon(k) && k != K":") && return :ELLIPSIS
    (JS.is_prec_plus(k) && k != K"$") && return :PLUS
    JS.is_prec_times(k) && return :TIMES
    JS.is_prec_rational(k) && return :RATIONAL
    JS.is_prec_bitshift(k) && return :BITSHIFT
    JS.is_prec_power(k) && return :POWER
    return :NONE
end
end
