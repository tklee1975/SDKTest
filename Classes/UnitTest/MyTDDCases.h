//
//  MyTDDCases.h
//  Cocos2dxTDDLib
//
//	This header should be included by TDDCases.h only
//  Created by Ken Lee on 25/5/14.
//
//


// Add the Header here!
#include "TDDSample.h"
#include "GATest.h"
#include "AdmobTest.h"
#include "iOSTest.h"
#include "AndroidTest.h"

//#include#
// NOTE!!! The above line is used to generate new unit test, must not be removed.

// Define
TDD_CASES
{
	TEST(AdmobTest),
	TEST(AndroidTest),
	TEST(TDDSample),
	TEST(GATest),
	TEST(iOSTest),
	
//#testcase#
// NOTE!!! The above line is used to generate new unit test, must not be removed.
};


