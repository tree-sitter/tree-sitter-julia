# julia --project=<env with JuliaC> build_bc.jl KERNEL.jl PROJECT OUT.bc.a
# juliac --trim=safe --output-bc through JuliaC's library API (the CLI's --output-bc is broken in JuliaC
# 0.3.12: it calls link_products and errors; see JuliaLang/JuliaC.jl#72). -O1: at -O2 Julia's SLP
# vectorizer emits vector code that llvm-cbe expands into megabytes of C.
using JuliaC
kernel, project, out = ARGS
mkpath(dirname(abspath(out)))
img = ImageRecipe(output_type = "--output-bc", file = abspath(kernel), project = abspath(project),
                  trim_mode = "safe", add_ccallables = true, cpu_target = "generic", julia_args = ["-O1"],
                  img_path = abspath(out))
compile_products(img)
