package org.cocos2dx.cpp;

import android.content.Context;
import android.util.Log;
import android.view.Gravity;
import android.widget.Toast;

public class AndroidHelper {
	public static void testMethod() { 
		Context context = AppActivity.getAppContext();
		if(context == null) {
			return;
		}
		Log.d("DEBUG", "Testing testing !!");
				
//		CharSequence content = "Testing!!!";
//		Toast toast = Toast.makeText(context, content, 1000);		
//		toast.setGravity(Gravity.CENTER, 0, 0);
//		toast.show();
	}
	
	public static String testStringMethod(String input) {
		Log.d("DEBUG", "Testing testStringMethod !!");
		
		return "received:" + input;
	}
}
