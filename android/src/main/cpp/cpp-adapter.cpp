#include <jni.h>
#include "CrnlNitroOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::CrnlNitro::initialize(vm);
}
