#include <jni.h>
#include "react-native-crnl-nitro.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_crnlnitro_CrnlNitroModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return crnlnitro::multiply(a, b);
}
