// swift-tools-version:5.3

import Foundation
import PackageDescription

let package = Package(
    name: "TreeSitterJulia",
    products: [
        .library(name: "TreeSitterJulia", targets: ["TreeSitterJulia"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterJulia",
            dependencies: [],
            path: ".",
            sources:["src/parser.c", "src/scanner.c"],
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
