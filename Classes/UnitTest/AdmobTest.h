#ifdef ENABLE_TDD
//
//  AdmobTest.h
//
//
#ifndef __TDD_AdmobTest__
#define __TDD_AdmobTest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class AdmobTest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void subTest(Ref *sender);
	void testHideAd(Ref *sender);
	void testShowAd(Ref *sender);
}; 

#endif

#endif
