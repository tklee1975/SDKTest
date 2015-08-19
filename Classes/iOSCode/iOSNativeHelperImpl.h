//
//  iOSNativeHelperImpl.h
//  SDKTest
//
//  Created by Ken Lee on 1/8/15.
//
//
#if(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)

#import <Foundation/Foundation.h>

@interface iOSNativeHelperImpl : NSObject

+ (void)doMethod:(const char *)methodName;		// this is for testing purpose
+ (std::string)processMethod:(const char *)methodName input:(const char *)input;
@end

#endif