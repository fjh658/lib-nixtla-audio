/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nibsa_nixtla_demo_play_wav_DemoNativeInterface */

#ifndef _Included_com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface
#define _Included_com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface
 * Method:    nativeInit
 * Signature: (Landroid/content/res/AssetManager;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface_nativeInit
  (JNIEnv *, jclass);

JNIEXPORT jboolean JNICALL Java_com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface_nativeActionOnWav
  (JNIEnv *, jclass, jobject, jstring, jboolean, jfloat);

/*
 * Class:     com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface
 * Method:    nativeFinalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface_nativeFinalize
  (JNIEnv *, jclass);

/*
 * Class:     com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface
 * Method:    nativeTick
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface_nativeTick
  (JNIEnv *, jclass);

JNIEXPORT jstring JNICALL Java_com_nibsa_nixtla_android_demo_playwav_DemoNativeInterface_nativeGetStatusLog
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
