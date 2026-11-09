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
        return Int32(!(k2 in JS.KSet"( = ["))
    elseif k == K"outer"
        return Int32(!(k2 in JS.KSet"= in ∈"))
    end
    return Int32(1)
end

Base.@ccallable function jsyn_contextual_keyword(p::Ptr{UInt8}, n::Csize_t)::Cint
    return contextual_keyword(p, n % Int)
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
