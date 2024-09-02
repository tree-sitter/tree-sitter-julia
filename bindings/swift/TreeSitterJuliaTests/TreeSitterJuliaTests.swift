import XCTest
import SwiftTreeSitter
import TreeSitterJulia

final class TreeSitterJuliaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_julia())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Julia grammar")
    }
}
