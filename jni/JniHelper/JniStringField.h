#ifndef JNISTRINGFIELD
#define JNISTRINGFIELD
#include"JniField.h"
class JniStringField:public JniField{
public:
    JniStringField(JniObject* targetObj,jfieldID fid);
    JniObject* get(JNI_OUT jstring* value);
    JniObject*get(JNI_OUT char* value);
    JniObject* set(JNI_IN char* value);//char*
    JniObject*set(JNI_IN jstring value);

};

#endif // JNISTRINGFIELD

