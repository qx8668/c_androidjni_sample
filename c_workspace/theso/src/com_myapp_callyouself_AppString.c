/*
 * com_myapp_callyouself_AppString.c
 *
 *  Created on: 2011-6-8
 *      Author: liuquanxing
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "char2utf.h"
#include "com_myapp_callyouself_AppString.h"

/*
 * Class:     com_myapp_callyouself_AppString
 * Method:    userName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_myapp_callyouself_AppString_userName(
		JNIEnv* env, jobject thiz) {
	char userNameAdd[] = "oijklnkwszmnkjh";
	char userName[strlen(userNameAdd) - 10 + 1];
	memset(userName, 0, sizeof(userName));
	int i = 0;
	for (i = 5; i < 10; i++) {
		userName[i - 5] = (char) (userNameAdd[i] - 2);
	}
	return (*env)->NewStringUTF(env, userName);
}

/*
 * Class:     com_myapp_callyouself_AppString
 * Method:    passWord
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_myapp_callyouself_AppString_passWord(
		JNIEnv* env, jobject thiz) {
	char passWordAdd[] = "jkdii88@>ckkpp";
	char passWord[strlen(passWordAdd) - 10 + 1];
	memset(passWord, 0, sizeof(passWord));
	int i = 0;
	for (i = 5; i < 9; i++) {
		passWord[i - 5] = (char) (passWordAdd[i] - 8);
	}
	return (*env)->NewStringUTF(env, passWord);
}

/*
 * Class:     com_myapp_callyouself_AppString
 * Method:    action
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_myapp_callyouself_AppString_action(
		JNIEnv* env, jobject thiz) {
	char actionAdd[] = "bnmddkwvnmzmvkmrmban";
	char action[strlen(actionAdd) - 10 + 1];
	memset(action, 0, sizeof(action));
	int i = 0;
	for (i = 5; i < 15; i++) {
		action[i - 5] = (char) (actionAdd[i] - 8);
	}
	return (*env)->NewStringUTF(env, action);
}

/*
 * Class:     com_myapp_callyouself_AppString
 * Method:    url
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_myapp_callyouself_AppString_url(JNIEnv* env,
		jobject thiz) {
	char urlAdd[] = "ssdcdjvvr<11yyy0ckrko0ep<:2241Okffngyctgbnggf";
	char url[strlen(urlAdd) - 10 + 1];
	memset(url, 0, sizeof(url));
	int i = 0;
	for (i = 5; i < 40; i++) {
		url[i - 5] = (char) (urlAdd[i] - 2);
	}
	return (*env)->NewStringUTF(env, url);
}

/*
 * Class:     com_myapp_callyouself_AppString
 * Method:    from
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_myapp_callyouself_AppString_from(
		JNIEnv* env, jobject thiz) {
	char fromAdd[] = "rerd#rerdre#";
	char from[strlen(fromAdd) - 10 + 1];
	memset(from, 0, sizeof(from));
	int i = 0;
	for (i = 5; i < 7; i++) {
		from[i - 5] = (char) (fromAdd[i] - 2);
	}
	return (*env)->NewStringUTF(env, from);
}
