import XCTest
@testable import Plugin

class BackgroundRunnerTests: XCTestCase {
    func testKeyValueAPI() throws {
        let runner = Runner()
        let context = try runner.createContext(name: "io.backgroundrunner.testkv")
        context.setupJigraAPI()

        _ = try context.execute(code: "JigraKV.set('test', 'hello world');")

        let value = try context.execute(code: "JigraKV.get('test');")

        XCTAssertEqual(value?.toString(), "hello world")

        _ = try context.execute(code: "JigraKV.remove('test');")

        let nullValue = try context.execute(code: "JigraKV.get('test');")

        XCTAssertTrue(nullValue?.isUndefined ?? false)

    }
}
