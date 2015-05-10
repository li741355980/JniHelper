#include"JniIntField.h"
#include"JniObject.h"
JniIntField::JniIntField(JniObject* targetObj,jfieldID fieldId):JniField(targetObj,fieldId){

}

JniObject* JniIntField::get(JNI_OUT int* value){
    int* v=value;
    (*v)=mTargetObj->getEnv()->GetIntField(mTargetObj->getObj(),mFid);
    return mTargetObj;
}

JniObject* JniIntField::set(JNI_IN int value){
    mTargetObj->getEnv()->SetIntField(mTargetObj->getObj(),mFid,value);
    return mTargetObj;
}
