package com.example.jnihelpertest;

import android.util.Log;

public class Test {
	private String strPri;
	private int intPri;
	public String strPub;
	public int intPub;
	
	private  int retIntPriFunc(){
		return 10001;
	}
	public int retIntPubFunc(){
		return 10002;
	}
	
	@Override
	public String toString() {
		Log.i("test", "Test [strPri=" + strPri + ", intPri=" + intPri + ", strPub="
				+ strPub + ", intPub=" + intPub + "]");
		return "Test [strPri=" + strPri + ", intPri=" + intPri + ", strPub="
				+ strPub + ", intPub=" + intPub + "]";
	}
	public String retStrPubFunc(String str1,String str2){
		return str1+str2;
	}
}
