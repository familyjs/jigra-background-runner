#ifndef JIGRA_BACKGROUND_RUNNER_API_EVENTS_H
#define JIGRA_BACKGROUND_RUNNER_API_EVENTS_H

#include "../quickjs/quickjs.h"

JSValue api_add_event_listener(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv);

#endif //JIGRA_BACKGROUND_RUNNER_API_EVENTS_H
