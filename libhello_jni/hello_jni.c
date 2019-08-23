#include "hello_jni.h"
#include "hello.h"

JNIEXPORT jstring JNICALL Java_Hello_hello(JNIEnv *env, jobject obj, jstring name) {
  const char * nameBuffer = (*env)->GetStringUTFChars(env, name, NULL);

  const char * helloBuffer = hello(nameBuffer);

  (*env)->ReleaseStringUTFChars(env, name, nameBuffer);
  jstring greeting = (*env)->NewStringUTF(env, helloBuffer);

  return greeting;
}