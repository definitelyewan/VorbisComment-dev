#ifndef VC_DETECT_CODEC
#define VC_DETECT_CODEC

#ifdef __cplusplus
extern "C"{
#endif

#include "vcDefines.h"
#include "vcTypes.h"

int vcDetectCodec(int option, const char *fileName, int (*cmp)(const void* first, const void* second));

#ifdef __cplusplus
} //extern c end
#endif

#endif