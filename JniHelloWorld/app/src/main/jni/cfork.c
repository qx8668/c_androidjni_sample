#include <jni.h>
#include <stdlib.h>
#include <stdio.h>

#include <android/log.h>
	#define LOG_TAG "System.out"
	#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
int ppid;
JNIEXPORT void JNICALL Java_com_myapp_jni_code_JNI_cfork
  (JNIEnv * env, jobject obj){
	int pid = fork();
	//fork成功的分叉出一个子进程 会返回当前进程的id 但是只能在主进程中fork成功
	//在子进程中运行fork 会返回0 但是不能再分叉出新的进程
	//fork的返回值可能三种  >0  == 0 <0
	FILE* file;
	if(pid>0){
		LOGD("pid = %d",pid);

	}else if(pid == 0){
		//拿到父进程的进程编号

		LOGD("pid == 0");
		while(1){
			ppid = getppid();
			//如果父进程的进程编号为1 说明父进程被杀死了
			if(ppid == 1){
				LOGD("ppid =%d",ppid);
				file = fopen("/data/data/com.myapp.jni.code","r");
				if(file == NULL){
					//打开网页 调用am命令
					execlp("am", "am", "start", "--user","0","-a", "android.intent.action.VIEW", "-d", "http://www.baidu.com", (char *) NULL);
				}else{
					execlp("am", "am", "start", "--user","0", "-n" , "com.myapp.jni.code/com.myapp.jni.code.MainActivity",(char *) NULL);

				}
				break;
			}
					LOGD("sub process is running");
					sleep(2);
		}
	}else{
		LOGD("pid<0 ");
	}

}
