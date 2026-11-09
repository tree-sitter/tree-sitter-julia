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
end
