#ifndef JIGRA_BACKGROUND_RUNNER_API_CONSOLE_H
#define JIGRA_BACKGROUND_RUNNER_API_CONSOLE_H

#include "../native.hpp"
#include "../quickjs/quickjs.h"

JSValue api_console_log(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv);
JSValue api_console_warn(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv);
JSValue api_console_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv);
JSValue api_console_debug(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv);

#endif //JIGRA_BACKGROUND_RUNNER_API_CONSOLE_H
