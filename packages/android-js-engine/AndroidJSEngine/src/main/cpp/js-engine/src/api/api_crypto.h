#ifndef JIGRA_BACKGROUND_RUNNER_API_CRYPTO_H
#define JIGRA_BACKGROUND_RUNNER_API_CRYPTO_H

#include "../quickjs/quickjs.h"

JSValue api_crypto_get_random_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv);
JSValue api_crypto_random_uuid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv);

#endif //JIGRA_BACKGROUND_RUNNER_API_CRYPTO_H
