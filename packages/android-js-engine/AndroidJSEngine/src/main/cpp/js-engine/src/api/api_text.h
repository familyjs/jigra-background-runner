#ifndef JIGRA_BACKGROUND_RUNNER_API_TEXT_H
#define JIGRA_BACKGROUND_RUNNER_API_TEXT_H

#include "../quickjs/quickjs.h"

void init_text_encoder_class(JSContext *ctx);
void init_text_decoder_class(JSContext *ctx);

#endif  // JIGRA_BACKGROUND_RUNNER_API_TEXT_H
