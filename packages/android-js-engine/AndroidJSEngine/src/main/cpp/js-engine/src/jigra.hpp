#ifndef JIGRA_BACKGROUND_JIGRA_H
#define JIGRA_BACKGROUND_JIGRA_H

#include "quickjs/quickjs.h"
#include <string>

class JigraInterface {
public:
    virtual ~JigraInterface() = default;
    JigraInterface(const JigraInterface&) = delete;
    JigraInterface(JigraInterface&&) = delete;
    JigraInterface& operator=(const JigraInterface&) = delete;

    virtual std::string device_api_getBatteryStatus() = 0;
    virtual std::string device_api_getNetworkStatus() = 0;

    virtual std::string geolocation_api_getCurrentPosition() = 0;

    virtual void kv_api_set(std::string key, std::string json_value) = 0;
    virtual std::string kv_api_get(std::string key) = 0;
    virtual void kv_api_remove(std::string key) = 0;

    virtual void notifications_api_schedule(std::string options_json) = 0;
protected:
    JigraInterface() = default;
};

#endif //JIGRA_BACKGROUND_JIGRA_H
