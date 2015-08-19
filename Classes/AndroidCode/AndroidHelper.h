//
//  AndroidHelper.h
//  SDKTest
//
//  Created by Ken Lee on 17/8/15.
//
//

#ifndef __SDKTest__AndroidHelper__
#define __SDKTest__AndroidHelper__

#include <stdio.h>
#include <string>

class AndroidHelper
{
public:
	static void callVoidMethod();
	static std::string getStringResult(const char *input);
};

#endif /* defined(__SDKTest__AndroidHelper__) */
