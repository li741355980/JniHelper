#ifndef JNIOBJECTFIELD
#define JNIOBJECTFIELD
#include"JniField.h"
class JniObjectField:public JniField{
public:
    JniObjectField(JniObject* targetObj,jfieldID fid);
    JniObject* get(JNI_OUT jobject* value);
    JniObject* set(JNI_IN jobject value);//jobject*
};

#endif // JNIOBJECTFIELD

