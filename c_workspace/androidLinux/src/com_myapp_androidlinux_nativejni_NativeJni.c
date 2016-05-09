#include <string.h>
#include <jni.h>

int add(){
	int x=100,y=200;
	return x+y;
}
JNIEXPORT jint JNICALL Java_com_myapp_androidlinux_nativejni_NativeJni_getLInt
  (JNIEnv *env, jobject thiz){
	return add();
}

JNIEXPORT jstring JNICALL Java_com_myapp_androidlinux_nativejni_NativeJni_getLString
  (JNIEnv *env, jobject thiz){
	return (*env)->NewStringUTF(env, "Hello LQX !");
}
