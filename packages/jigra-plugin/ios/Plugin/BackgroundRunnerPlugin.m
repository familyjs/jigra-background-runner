#import <Foundation/Foundation.h>
#import <Jigra/Jigra.h>

// Define the plugin using the JIG_PLUGIN Macro, and
// each method the plugin supports using the JIG_PLUGIN_METHOD macro.
JIG_PLUGIN(BackgroundRunnerPlugin, "BackgroundRunner",
    JIG_PLUGIN_METHOD(dispatchEvent, JIGPluginReturnPromise);
    JIG_PLUGIN_METHOD(registerBackgroundTask, JIGPluginReturnPromise);
    JIG_PLUGIN_METHOD(checkPermissions, JIGPluginReturnPromise);
    JIG_PLUGIN_METHOD(requestPermissions, JIGPluginReturnPromise);
)
