#ifndef JIGRA_BACKGROUND_RUNNER_API_FETCH_H
#define JIGRA_BACKGROUND_RUNNER_API_FETCH_H

#include "../quickjs/quickjs.h"
#include "api_js_response.h"

JSValue api_fetch(JSContext *ctx, JSValueConst this_val, int argc, JSValue *argv);

#endif  // JIGRA_BACKGROUND_RUNNER_API_FETCH_H
