//
//  iOSNativeHelperImpl.m
//  SDKTest
//
//  Created by Ken Lee on 1/8/15.
//
//
#include <string.h>
#include "iOSNativeHelper.h"

#pragma mark - C Code 


#if(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#import "iOSNativeHelperImpl.h"

void iOSNativeHelper::doMethod(const std::string &methodName)
{
	[iOSNativeHelperImpl doMethod:methodName.c_str()];
}


std::string iOSNativeHelper::processMethod(const std::string &methodName, const std::string &input)
{
	return [iOSNativeHelperImpl processMethod:methodName.c_str() input:input.c_str()];
}

#pragma mark - Objective-C Code
@implementation iOSNativeHelperImpl


+ (void)doMethod:(const char *)methodName		// this is for testing purpose
{
	NSLog(@"Try to do method with name '%s'", methodName);
	NSString *name = [NSString stringWithUTF8String:methodName];
}

+ (std::string)processMethod:(const char *)methodName input:(const char *)input
{
	std::string result = "";
	
	result.append("ECHO: ");
	result.append(input);
	
	return result;
}

@end

#else
void iOSNativeHelper::doMethod(const std::string &methodName)
{
	log("iOSNativeHelper::doMethod: only support in iOS Platform");
}

std::string iOSNativeHelper::processMethod(const std::string &methodName, const std::string &input)
{
	return "";
}

#endif