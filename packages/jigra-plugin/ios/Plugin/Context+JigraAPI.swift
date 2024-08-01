import Foundation

extension Context {
    public func setupJigraAPI() {
        jsContext.setObject(JigraKVStore.self, forKeyedSubscript: "JigraKV" as NSString)
        jsContext.setObject(JigraGeolocation(context: self), forKeyedSubscript: "JigraGeolocation" as NSString)
        jsContext.setObject(JigraWatch(), forKeyedSubscript: "JigraWatch" as NSString)
        jsContext.setObject(JigraNotifications.self, forKeyedSubscript: "JigraNotifications" as NSString)
        jsContext.setObject(JigraDevice(), forKeyedSubscript: "JigraDevice" as NSString)
    }
}
