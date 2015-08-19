//
//  iOSNativeHelper.h
//  SDKTest
//
//  Created by Ken Lee on 1/8/15.
//
//
#if(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)

#ifndef SDKTest_iOSNativeHelper_h
#define SDKTest_iOSNativeHelper_h

#include "cocos2d.h"
#include <string>

// Implementation at somewhere else
class iOSNativeHelper
{
public :
	iOSNativeHelper();
	~iOSNativeHelper();
	
	// These are for testing
	static void doMethod(const std::string &methodName);
	static std::string processMethod(const std::string &methodName, const std::string &input);
};

#endif

#endif