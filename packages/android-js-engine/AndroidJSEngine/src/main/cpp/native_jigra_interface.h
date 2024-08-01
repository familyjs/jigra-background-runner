#ifndef ANDROID_JS_ENGINE_NATIVE_JIGRA_INTERFACE_H
#define ANDROID_JS_ENGINE_NATIVE_JIGRA_INTERFACE_H

#include <string>

#include "./js-engine/src/jigra.hpp"
#include "java.h"

class NativeJigraInterface : public JigraInterface {
 public:
  NativeJigraInterface(JNIEnv *env, jobject api);
  ~NativeJigraInterface();

  jobject api;
  Java *java;

  virtual std::string device_api_getBatteryStatus();
  virtual std::string device_api_getNetworkStatus();

  virtual std::string geolocation_api_getCurrentPosition();

  virtual void kv_api_set(std::string key, std::string json_value);
  virtual std::string kv_api_get(std::string key);
  virtual void kv_api_remove(std::string key);

  virtual void notifications_api_schedule(std::string options_json);
};

#endif  // ANDROID_JS_ENGINE_NATIVE_JIGRA_INTERFACE_H
