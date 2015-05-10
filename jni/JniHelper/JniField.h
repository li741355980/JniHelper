#ifndef JNIFIELD
#define JNIFIELD
#include<jni.h>
#include"JniGlobalDef.h"
class JniObject;
class JniField{
public:
   JniField(JniObject* targetObj,jfieldID fid){
       mTargetObj=targetObj;
       mFid=fid;
   }
   virtual ~JniField(){}
protected:
   JniObject* mTargetObj;
   jfieldID mFid;
};

#endif // JNIFIELD

