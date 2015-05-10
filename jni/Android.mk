LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := testsdk

LOCAL_CPPFLAGS +=-frtti -std=c++11 

LOCAL_SRC_FILES := com_example_jnihelpertest_JNI.cpp\
                   ./JniHelper/JniIntField.cpp\
                   ./JniHelper/JniMethod.cpp\
		 ./JniHelper/JniObject.cpp\
		./JniHelper/JniObjectField.cpp\
		./JniHelper/JniStringField.cpp\
		./JniHelper/jniutils.cpp
			
LOCAL_LDLIBS := -llog 

include $(BUILD_SHARED_LIBRARY)
