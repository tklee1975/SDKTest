#ifdef ENABLE_TDD
//
//  iOSTest.h
//
//
#ifndef __TDD_iOSTest__
#define __TDD_iOSTest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class iOSTest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void subTest(Ref *sender);
	void testProcessMethod(Ref *sender);
}; 

#endif

#endif
