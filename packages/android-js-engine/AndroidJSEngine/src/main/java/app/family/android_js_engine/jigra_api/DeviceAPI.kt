package app.family.android_js_engine.jigra_api

interface DeviceAPI {
    fun getBatteryStatus(): String

    fun getNetworkStatus(): String
}
