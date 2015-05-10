/*
 * com_example_jnihelpertest_JNI.cpp
 *
 *  Created on: 2015-5-2
 *      Author: Administrator
 */

#include"com_example_jnihelpertest_JNI.h"
#include"./JniHelper/JniObject.h"
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_jnihelpertest_JNI
 * Method:    Test
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_jnihelpertest_JNI_Test
  (JNIEnv *env, jclass){
    char msg[100]={0};
    char* str1="eeeeeeeeeeeeeeeee";
    jstring jstr=env->NewStringUTF(str1);
    JniObject *JObj=new JniObject(env,"com.example.jnihelpertest.Test");
    JObj->getIntField("intPri")->set(1010101)\
    ->getIntField("intPub")\
    ->set(1010101)\
    ->getStringField("strPub")\
    ->set(jstr)\
    ->getStringField("strPub")\
    ->get(msg);
    LOGI("######getStringField %s",msg);
    JniMethod *methodPrint=JObj->getIntMethod("toString","()Ljava/lang/String;");
    env->CallObjectMethod(methodPrint->getObj(),methodPrint->getMid());
    return -1;
}

#ifdef __cplusplus
}
#endif
