#ifndef JIGRA_BACKGROUND_RUNNER_CONTEXT_H
#define JIGRA_BACKGROUND_RUNNER_CONTEXT_H
#include <string>
#include <unordered_map>

#include "./quickjs/quickjs.h"
#include "api/api_blob.h"
#include "api/api_console.h"
#include "api/api_crypto.h"
#include "api/api_events.h"
#include "api/api_fetch.h"
#include "api/api_js_response.h"
#include "api/api_text.h"
#include "api/api_timeout.h"
#include "native.hpp"
#include "jigra.hpp"

class Context {
 public:
  std::string name;

  JSContext *qjs_context;

  NativeInterface *native_interface;
  JigraInterface *jigra_interface;

  std::unordered_map<std::string, JSValue> event_listeners;
  std::unordered_map<int, Timer> timers;

  Context(const std::string &name, JSRuntime *parent_rt, NativeInterface *native, JigraInterface *jig);
  ~Context();

  void run_timers();
  bool has_timers();

  void register_function(const std::string &func_name, std::any func);
  JSValue evaluate(const std::string &code, bool ret_val) const;
  JSValue dispatch_event(const std::string &event, JSValue details);

 private:
  void init_callbacks(JSValue callbacks) const;

  void execute_timer(JSValue timerFunc) const;

  void init_api_console() const;
  void init_api_event_listeners() const;
  void init_api_timeout() const;
  void init_api_crypto() const;
  void init_api_text() const;
  void init_api_fetch() const;
  // void init_api_blob() const;

  void init_jigra_api();
  void init_jigra_device_api() const;
  void init_jigra_geolocation_api() const;
  void init_jigra_kv_api() const;
  void init_jigra_notifications_api() const;
};

#endif  // JIGRA_BACKGROUND_RUNNER_CONTEXT_H
