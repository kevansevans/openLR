﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxsl/Tools2.h>
String Type_enumConstructor(vdynamic*);
String String_charAt(String,int);
String String_toLowerCase(String);
String String_substr(String,int,vdynamic*);
String String___add__(String,String);

String hxsl_Tools2_toString(venum* r0) {
	String r1, r2, r4;
	vdynamic *r5;
	int r3;
	r1 = Type_enumConstructor(((vdynamic*)r0));
	if( r1 == NULL ) hl_null_access();
	r3 = 0;
	r2 = String_charAt(r1,r3);
	if( r2 == NULL ) hl_null_access();
	r2 = String_toLowerCase(r2);
	r3 = 1;
	r5 = NULL;
	r4 = String_substr(r1,r3,r5);
	r2 = String___add__(r2,r4);
	return r2;
}

