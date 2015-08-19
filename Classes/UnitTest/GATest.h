#ifdef ENABLE_TDD
//
//  GATest.h
//
//
#ifndef __TDD_GATest__
#define __TDD_GATest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class GATest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void subTest(Ref *sender);
}; 

#endif

#endif
