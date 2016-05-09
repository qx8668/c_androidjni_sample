LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := cpp
LOCAL_SRC_FILES := cpp.cpp

LOCAL_LDLIBS += -llog

include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE    := data
LOCAL_SRC_FILES := data.c

LOCAL_LDLIBS += -llog

include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE    := cfork
LOCAL_SRC_FILES := cfork.c

LOCAL_LDLIBS += -llog

include $(BUILD_SHARED_LIBRARY)
