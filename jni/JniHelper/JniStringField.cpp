#include"JniStringField.h"
#include"JniObject.h"
JniStringField::JniStringField(JniObject* targetObj,jfieldID fid):JniField(targetObj,fid){

}

JniObject* JniStringField::get(JNI_OUT char* value){
   jstring jstr=(jstring)mTargetObj->getEnv()->GetObjectField(mTargetObj->getObj(),mFid);
   const char *cStr= mTargetObj->getEnv()->GetStringUTFChars(jstr,NULL);
   strcpy(value,cStr);
   mTargetObj->getEnv()->ReleaseStringUTFChars(jstr,cStr);
   return mTargetObj;
}
JniObject*  JniStringField::get(JNI_OUT jstring* value){
    (*value)=(jstring)mTargetObj->getEnv()->GetObjectField(mTargetObj->getObj(),mFid);
    return mTargetObj;
}
JniObject* JniStringField::set(JNI_IN jstring value){
    mTargetObj->getEnv()->SetObjectField(mTargetObj->getObj(),mFid,value);
    return mTargetObj;
}

JniObject* JniStringField::set(JNI_IN char* value){
    char* v=value;
    jstring jstr=mTargetObj->getEnv()->NewStringUTF(v);
    mTargetObj->getEnv()->SetObjectField(mTargetObj->getObj(),mFid,jstr);
    mTargetObj->getEnv()->DeleteLocalRef(jstr);
    return mTargetObj;
}
