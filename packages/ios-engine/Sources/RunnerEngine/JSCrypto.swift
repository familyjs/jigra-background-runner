import Foundation
import JavaScriptCore

@objc protocol JSCryptoExports: JSExport {
    static func getRandomValues(_ arr: JSValue) -> JSValue
    static func randomUUID() -> String
}

class JSCrypto: NSObject, JSCryptoExports {
    static func getRandomValues(_ arr: JSValue) -> JSValue {
        let size = arr.toArray().count

        var rnd = [UInt8](repeating: 0, count: size)
        _ = SecRandomCopyBytes(kSecRandomDefault, size, &rnd)

        if arr.toArray() as? [UInt8] != nil {
            for i in 0...(size - 1) { // swiftlint:disable:this identifier_name
                arr.setObject(rnd[i], atIndexedSubscript: i)
            }
        }
        if arr.toArray() as? [UInt16] != nil {
            for i in 0...(size - 1) { // swiftlint:disable:this identifier_name
                arr.setObject(UInt16(rnd[i]), atIndexedSubscript: i)
            }
        }
        if arr.toArray() as? [UInt32] != nil {
            for i in 0...(size - 1) { // swiftlint:disable:this identifier_name
                arr.setObject(UInt32(rnd[i]), forKeyedSubscript: i)
            }
        }

        return arr
    }

    static func randomUUID() -> String {
        return UUID().uuidString
    }
}
