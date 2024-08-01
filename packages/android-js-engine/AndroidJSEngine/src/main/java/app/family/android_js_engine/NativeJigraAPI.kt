package app.family.android_js_engine

import app.family.android_js_engine.jigra_api.DeviceAPI
import app.family.android_js_engine.jigra_api.GeolocationAPI
import app.family.android_js_engine.jigra_api.KVAPI
import app.family.android_js_engine.jigra_api.NotificationsAPI

class NativeJigraAPI {
    private var kv: KVAPI? = null
    private var device: DeviceAPI? = null
    private var notifications: NotificationsAPI? = null
    private var geolocation: GeolocationAPI? = null

    fun initNotificationsAPI(api: NotificationsAPI) {
        this.notifications = api
    }

    fun initDeviceAPI(api: DeviceAPI) {
        this.device = api
    }

    fun initGeolocationAPI(api: GeolocationAPI) {
        this.geolocation = api
    }

    fun initKVAPI(api: KVAPI) {
        this.kv = api
    }
}
