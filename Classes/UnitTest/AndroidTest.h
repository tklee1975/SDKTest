#ifdef ENABLE_TDD
//
//  AndroidTest.h
//
//
#ifndef __TDD_AndroidTest__
#define __TDD_AndroidTest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class AndroidTest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void subTest(Ref *sender);
	void testStringMethod(Ref *sender);
}; 

#endif

#endif
