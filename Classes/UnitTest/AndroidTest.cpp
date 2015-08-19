#ifdef ENABLE_TDD
//
//  AndroidTest.m
//	TDD Framework 
//
//
#include "AndroidTest.h"
#include "TDDHelper.h"
#include "AndroidHelper.h"

void AndroidTest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void AndroidTest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void AndroidTest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(AndroidTest::subTest);
	SUBTEST(AndroidTest::testStringMethod);
}

#pragma mark -
#pragma mark Sub Test Definition
void AndroidTest::subTest(Ref *sender)
{
	log("this is a sample subTest");
	AndroidHelper::callVoidMethod();
}

void AndroidTest::testStringMethod(Ref *sender)
{
	log("this is a sample subTest");
	std::string result = AndroidHelper::getStringResult("Hello JNI");
	log("Testing %s", result.c_str());
}



#endif
