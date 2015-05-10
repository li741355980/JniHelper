#ifndef JNIOBJECT
#define JNIOBJECT
#include"jniutils.h"
#include<map>
#include<string>
#include"JniField.h"
#include"JniIntField.h"
#include"JniStringField.h"
#include"JniObjectField.h"
#include"JniMethod.h"
using namespace std;
class JniObject{
private:
    jclass mClass;
    jobject mObj;
    JNIEnv* mEnv;
    map<string,JniField*> mFieldMap;
    map<string,JniMethod*> mMethodMap;

    enum FIELDTYPE{
        IntField,StringField,ObjectField
    };
public:
    JniObject(JNIEnv* env,jobject obj);
    JniObject(JNIEnv* env,char* classname);//
    ~JniObject();
    jobject getObj();
    JniIntField* getIntField(const char* fieldName);
    //这里采用享元模式，保存所有获取过的JniField，析构的时候统一释放，多次获取使用JniField的同一个对象
    JniStringField* getStringField(const char* fieldName);
    JniObjectField* getObjectField(const char* fieldName,const char* fieldSig);
    JniMethod* getIntMethod(const char* MethodName,const char* Signal);

    void updateEnv(JNIEnv* env);
    JNIEnv* getEnv();
private:
    JniField* findAndStoreField(const char* fieldname,const char* sig,FIELDTYPE type);
    JniMethod* findAndStoreMehod(const char* methodName,const char* sig);
};

#endif // JNIOBJECT

