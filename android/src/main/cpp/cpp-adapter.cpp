#include <jni.h>
#include "crnlnitroOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::crnlnitro::initialize(vm);
}
