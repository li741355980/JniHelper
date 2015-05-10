#ifndef JNIINTFIELD
#define JNIINTFIELD
#include"JniField.h"
class JniIntField:public JniField{
public:
    JniIntField(JniObject* targetObj,jfieldID fieldId);
    JniObject* get(JNI_OUT int* value);
    JniObject* set(JNI_IN int value);


};

#endif // JNIINTFIELD

