LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := AppString
LOCAL_SRC_FILES := com_myapp_callyouself_AppString.c
LOCAL_SRC_FILES += char2utf.c

include $(BUILD_SHARED_LIBRARY)
