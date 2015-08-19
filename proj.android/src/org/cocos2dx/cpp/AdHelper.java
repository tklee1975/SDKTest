package org.cocos2dx.cpp;

import com.google.android.gms.ads.AdRequest;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.ads.AdView;

import android.app.Activity;
import android.graphics.Color;
import android.view.View;
import android.view.ViewGroup.LayoutParams;
import android.widget.LinearLayout;

public class AdHelper {
	public static final String AD_UNIT_ID = "ca-app-pub-5142527836794674/3064634945";
	
	public static AdView createAdView(Activity activity) {
		if(activity == null) {
			return null;
		}
		
		AdView adView = new AdView(activity);
		adView.setAdSize(AdSize.BANNER);
		adView.setAdUnitId(AD_UNIT_ID);


		AdRequest adRequest = new AdRequest.Builder()
		   						.addTestDevice(AdRequest.DEVICE_ID_EMULATOR)
		   						.addTestDevice("HASH_DEVICE_ID")
		   						.build();

		adView.loadAd(adRequest);
		adView.setBackgroundColor(Color.BLACK);
		
		LinearLayout.LayoutParams adParams = new LinearLayout.LayoutParams(
				   					LayoutParams.MATCH_PARENT, LayoutParams.WRAP_CONTENT);
		   //adParams.addRule(RelativeLayout.CENTER_HORIZONTAL);
		activity.addContentView(adView, adParams);

		return adView;
	}
	
	public static void showAdView(AdView view) {
		if(view == null) {
			return;
		}
		
		if(view.isEnabled() == false) {
			view.setEnabled(true);
		}
		
		if(view.getVisibility() != View.VISIBLE) {
			view.setVisibility(View.VISIBLE);
		}
	}
	
	public static void hideAdView(AdView view) {
		if(view == null) {
			return;
		}
		
		// Make the Ad disable
		if(view.isEnabled()) {
			view.setEnabled(false);
		}
		
		if(view.getVisibility() == View.VISIBLE) {
			view.setVisibility(View.GONE);	
		}
	}
}
