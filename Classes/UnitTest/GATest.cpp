#ifdef ENABLE_TDD
//
//  GATest.m
//	TDD Framework 
//
//
#include "GATest.h"
#include "TDDHelper.h"
#include "PluginGoogleAnalytics/PluginGoogleAnalytics.h"

void GATest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void GATest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void GATest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(GATest::subTest);
}

#pragma mark -
#pragma mark Sub Test Definition
void GATest::subTest(Ref *sender)
{
	log("this is a sample subTest");
	//sdkbox::PluginGoogleAnalytics::logScreen("Testing");
	sdkbox::PluginGoogleAnalytics::logEvent("testing", "test1", "aaa", 1);
}


#endif
