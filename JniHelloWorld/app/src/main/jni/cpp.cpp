#include <jni.h>   //如果用"" 来导入头文件 系统会先到 源代码所在的文件夹去找头文件 如果找不到再到系统指定的incude文件夹下找
#include "com_myapp_jni_code_JNI.h" //用<> 直接到系统指定的include目录下去找

JNIEXPORT jstring JNICALL Java_com_myapp_jni_code_JNI_helloFromCPP
  (JNIEnv * env, jobject obj){
	return env->NewStringUTF("hello from cpp");
}
