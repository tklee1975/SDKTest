#ifdef ENABLE_TDD
//
//  iOSTest.m
//	TDD Framework 
//
//
#include "iOSTest.h"
#include "TDDHelper.h"

#include "iOSNativeHelper.h"

void iOSTest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void iOSTest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void iOSTest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(iOSTest::subTest);
	SUBTEST(iOSTest::testProcessMethod);
}

#pragma mark -
#pragma mark Sub Test Definition
void iOSTest::subTest(Ref *sender)
{
	log("this is a sample subTest");
	
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS) 
	iOSNativeHelper::doMethod("testNSLog");
#endif
}


void iOSTest::testProcessMethod(Ref *sender)
{
	log("testProcessMethod");
	
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	std::string result = iOSNativeHelper::processMethod("testXXX", "Hello");
	
	log("result=%s", result.c_str());
#endif
}



#endif
