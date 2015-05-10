#include"JniObjectField.h"
#include"JniObject.h"
JniObjectField::JniObjectField(JniObject* targetObj,jfieldID fid):JniField(targetObj,fid){

}

JniObject* JniObjectField::get(JNI_OUT jobject* value){
    jobject *obj=(jobject *)value;
   (*obj)=mTargetObj->getEnv()->GetObjectField(mTargetObj->getObj(),mFid);
    return mTargetObj;
}

JniObject* JniObjectField::set(JNI_IN jobject value){
    mTargetObj->getEnv()->SetObjectField(mTargetObj->getObj(),mFid,value);
    return mTargetObj;
}
