#ifdef ENABLE_TDD
//
//  AdmobTest.m
//	TDD Framework 
//
//
#include "AdmobTest.h"
#include "TDDHelper.h"
#include "AdmobHelper.h"

void AdmobTest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void AdmobTest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void AdmobTest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(AdmobTest::testShowAd);
	SUBTEST(AdmobTest::testHideAd);
}

#pragma mark -
#pragma mark Sub Test Definition
void AdmobTest::subTest(Ref *sender)
{
	log("this is a sample subTest");
}

void AdmobTest::testHideAd(Ref *sender)
{
	AdmobHelper::hideAd();
}


void AdmobTest::testShowAd(Ref *sender)
{
	AdmobHelper::showAd();
}


#endif
