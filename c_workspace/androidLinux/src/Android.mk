LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := NativeJni
LOCAL_SRC_FILES := com_myapp_androidlinux_nativejni_NativeJni.c

include $(BUILD_SHARED_LIBRARY)