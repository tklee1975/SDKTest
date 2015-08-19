//
//  AndroidHelper.cpp
//  SDKTest
//
//  Created by Ken Lee on 17/8/15.
//
//

#include "AndroidHelper.h"

#include "cocos2d.h"

USING_NS_CC;

#pragma mark - Android
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)


#include "platform/android/jni/JniHelper.h"
#include <jni.h>

const char * kHelperClassName = "org/cocos2dx/cpp/AndroidHelper";

void AndroidHelper::callVoidMethod()
{
	cocos2d::JniMethodInfo t;
	if (cocos2d::JniHelper::getStaticMethodInfo(t, kHelperClassName, "testMethod", "()V"))
	{
		
		t.env->CallStaticVoidMethod(t.classID, t.methodID);
		t.env->DeleteLocalRef(t.classID);
	}
}


// http://stackoverflow.com/questions/14036004/how-to-convert-jobject-to-jstring
// See: android/jni/Java_org_cocos2dx_lib_Cocos2dxHelper.cpp
std::string AndroidHelper::getStringResult(const char *input)
{
	cocos2d::JniMethodInfo t;
	if (cocos2d::JniHelper::getStaticMethodInfo(t, kHelperClassName, "testStringMethod",
							"(Ljava/lang/String;)Ljava/lang/String;"))
	{
		
		
		jstring stringArg1 = t.env->NewStringUTF(input);
		
		jstring str = (jstring) t.env->CallStaticObjectMethod(t.classID, t.methodID, stringArg1);
		
		t.env->DeleteLocalRef(t.classID);

		std::string ret = "";
		ret =JniHelper::jstring2string(str);
		t.env->DeleteLocalRef(str);
		
		return ret;
	}  else {
		return "";
	}
}

#else

void AndroidHelper::callVoidMethod()
{
	log("AndroidHelper::callVoidMethod: not supporting");
}

std::string AndroidHelper::getStringResult(const char *input)
{
	return "";
}

#endif
