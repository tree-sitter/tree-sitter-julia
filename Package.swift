// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterJulia",
    products: [
        .library(name: "TreeSitterJulia", targets: ["TreeSitterJulia"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterJulia",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterJuliaTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterJulia",
            ],
            path: "bindings/swift/TreeSitterJuliaTests"
        )
    ],
    cLanguageStandard: .c11
)
