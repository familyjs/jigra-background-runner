#ifndef JIGRA_BACKGROUND_RUNNER_API_JS_RESPONSE_H
#define JIGRA_BACKGROUND_RUNNER_API_JS_RESPONSE_H

#include "../native.hpp"
#include "../quickjs/quickjs.h"
#include "api_blob.h"

void init_response_class(JSContext *ctx);
JSValue new_js_response(JSContext *ctx, NativeResponse native_response);

#endif  // JIGRA_BACKGROUND_RUNNER_API_JS_RESPONSE_H
