package app.family.android_js_engine.jigra_api

interface KVAPI {
    fun set(
        key: String,
        value: String,
    )

    fun get(key: String): String?

    fun remove(key: String)
}
