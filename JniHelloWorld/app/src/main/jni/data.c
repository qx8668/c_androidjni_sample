#include <stdlib.h>
#include <stdio.h>
#include <jni.h>
#include <android/log.h>
#define LOG_TAG "System.out"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

//jstring
//Java_com_example_hellojni_HelloJni_stringFromJNI( JNIEnv* env,
//                                                  jobject thiz )
//JNIEnv* env 是结构体JNINativeInterface 的二级指针
// JNIEnv 是结构体JNINativeInterface 的一级指针
// JNINativeInterface结构体中定义了大量的函数指针 这些函数指针在jni开发中很常用
// (*env)->
//jobject  调用本地函数的java对象 在这个例子中 就是MainActivity的实例
//c本地函数命名规则  Java_包名_类名_本地方法名
//jstring     (*NewStringUTF)(JNIEnv*, const char*);
JNIEXPORT jstring Java_com_myapp_jni_code_JNI_stringMethod(JNIEnv* env,jobject thiz){
	char* cstr = "hello from c!";
	return (*env)->NewStringUTF(env,cstr);
}
/**
 * 把一个jstring转换成一个c语言的char* 类型.
 */
char* _JString2CStr(JNIEnv* env, jstring jstr) {
	 char* rtn = NULL;
	 jclass clsstring = (*env)->FindClass(env, "java/lang/String");
	 jstring strencode = (*env)->NewStringUTF(env,"GB2312");
	 jmethodID mid = (*env)->GetMethodID(env, clsstring, "getBytes", "(Ljava/lang/String;)[B");
	 jbyteArray barr = (jbyteArray)(*env)->CallObjectMethod(env, jstr, mid, strencode); // String .getByte("GB2312");
	 jsize alen = (*env)->GetArrayLength(env, barr);
	 jbyte* ba = (*env)->GetByteArrayElements(env, barr, JNI_FALSE);
	 if(alen > 0) {
		rtn = (char*)malloc(alen+1); //"\0"
		memcpy(rtn, ba, alen);
		rtn[alen]=0;
	 }
	 (*env)->ReleaseByteArrayElements(env, barr, ba,0);
	 return rtn;
}
JNIEXPORT jint JNICALL Java_com_myapp_jni_code_JNI_add
  (JNIEnv * env, jobject clazz, jint x, jint y){
	return x+y;
}

/*
 * Class:     com_myapp_jni_code_JNI
 * Method:    sayHelloInC
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_myapp_jni_code_JNI_sayHelloInC
  (JNIEnv * env, jobject clazz, jstring jstr){
	//调用工具方法把 java中的string 类型 转换成 C 语言中的 char*
	char* cstr = _JString2CStr(env,jstr);
	//调用strlen 获取 cstr 字符串的长度
	int length = strlen(cstr);
	int i;
	for(i = 0;i<length;i++){
		*(cstr+i) += 1;
	}
	return (*env)->NewStringUTF(env,cstr);
}

/*
 * Class:     com_myapp_jni_code_JNI
 * Method:    arrElementsIncrease
 * Signature: ([I)[I
 */
JNIEXPORT jintArray JNICALL Java_com_myapp_jni_code_JNI_arrElementsIncrease
  (JNIEnv * env, jobject clazz, jintArray jArray){
	//jsize       (*GetArrayLength)(JNIEnv*, jarray);
	jsize length =(*env)->GetArrayLength(env,jArray);
	LOGD("length = %d",length);
	//jboolean iscopy;
	//jint*       (*GetIntArrayElements)(JNIEnv*, jintArray, jboolean*);
	int* arrayPointer =(*env)->GetIntArrayElements(env,jArray,NULL);
	int i;
	for(i = 0;i<length;i++){
		*(arrayPointer+i) += 10;
	}
	return jArray;
}


///////////////
JNIEXPORT void JNICALL Java_com_myapp_jni_code_JNI_callbackvoidmethod
  (JNIEnv * env, jobject clazz){
	//jclass      (*FindClass)(JNIEnv*, const char*);
	//① 获取字节码对象
	jclass claz = (*env)->FindClass(env,"com/myapp/jni/code/JNI");
	//②获取Method对象
	//jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
	jmethodID methodID =(*env)->GetMethodID(env,claz,"helloFromJava","()V");
	//③通过字节码对象创建一个Object
	//④通过对象调用方法
	//void        (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
	(*env)->CallVoidMethod(env,clazz,methodID);

}

JNIEXPORT void JNICALL Java_com_myapp_jni_code_JNI_callbackintmethod
  (JNIEnv * env, jobject clazz){
	//① 获取字节码对象
	jclass claz =(*env)->FindClass(env,"com/myapp/jni/code/JNI");
	//②获取Method对象
	jmethodID methodID = (*env)->GetMethodID(env,claz,"adda","(II)I");
	//jint        (*CallIntMethod)(JNIEnv*, jobject, jmethodID, ...);
	int result =(*env)->CallIntMethod(env,clazz,methodID,3,4);
	LOGD("result = %d",result);
}

JNIEXPORT void JNICALL Java_com_myapp_jni_code_JNI_callbackStringmethod
  (JNIEnv * env, jobject clazz){
	//① 获取字节码对象
		jclass claz =(*env)->FindClass(env,"com/myapp/jni/code/JNI");
	//② 获取Method对象
		jmethodID methodid =(*env)->GetMethodID(env,claz,"printString","(Ljava/lang/String;)V");
	//
		jstring result =(*env)->NewStringUTF(env,"hello from c");
		(*env)->CallVoidMethod(env,clazz,methodid,result);
}