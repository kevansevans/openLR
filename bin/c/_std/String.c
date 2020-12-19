﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <_std/String.h>
#include <hl/natives.h>
extern hl_type t$String;
extern String s$;
extern hl_type t$_i32;
int String___compare(String,vdynamic*);
#include <hl/types/ArrayObj.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
String String_substr(String,int,vdynamic*);
extern String s$Invalid_unicode_char_;
String String___alloc__(vbyte*,int);
String String___add__(String,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
extern $String g$_String;
bool hl_BaseType_check(hl__BaseType,vdynamic*);
extern hl_type t$_dyn;
extern String s$null;

void String_new(String r0,String r1) {
	int r3;
	vbyte *r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->bytes;
	r0->bytes = r2;
	r3 = r1->length;
	r0->length = r3;
	return;
}

String String_toUpperCase(String r0) {
	String r4;
	int r2, r3;
	vbyte *r1;
	r1 = r0->bytes;
	r2 = 0;
	r3 = r0->length;
	r1 = hl_ucs2_upper(r1,r2,r3);
	r2 = r0->length;
	r4 = (String)hl_alloc_obj(&t$String);
	r4->bytes = r1;
	r4->length = r2;
	return r4;
}

String String_toLowerCase(String r0) {
	String r4;
	int r2, r3;
	vbyte *r1;
	r1 = r0->bytes;
	r2 = 0;
	r3 = r0->length;
	r1 = hl_ucs2_lower(r1,r2,r3);
	r2 = r0->length;
	r4 = (String)hl_alloc_obj(&t$String);
	r4->bytes = r1;
	r4->length = r2;
	return r4;
}

String String_charAt(String r0,int r1) {
	String r4;
	vbyte *r5, *r6;
	int r2, r3;
	r3 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$306c77b_4_4;
	r4 = (String)s$;
	return r4;
	label$306c77b_4_4:
	r2 = 4;
	r5 = hl_alloc_bytes(r2);
	r6 = r0->bytes;
	r3 = 1;
	r2 = r1 << r3;
	r2 = *(unsigned short*)(r6 + r2);
	r3 = 0;
	*(unsigned short*)(r5 + r3) = (unsigned short)r2;
	r2 = 2;
	r3 = 0;
	*(unsigned short*)(r5 + r2) = (unsigned short)r3;
	r4 = (String)hl_alloc_obj(&t$String);
	r4->bytes = r5;
	r2 = 1;
	r4->length = r2;
	return r4;
}

vdynamic* String_charCodeAt(String r0,int r1) {
	vdynamic *r4;
	vbyte *r5;
	int r2, r3;
	r3 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r3) ) goto label$306c77b_5_4;
	r4 = NULL;
	return r4;
	label$306c77b_5_4:
	r5 = r0->bytes;
	r3 = 1;
	r2 = r1 << r3;
	r2 = *(unsigned short*)(r5 + r2);
	r4 = hl_alloc_dynamic(&t$_i32);
	r4->v.i = r2;
	return r4;
}

int String_findChar(String r0,int r1,int r2,vbyte* r3,int r4) {
	bool r6;
	vbyte *r8;
	int r5, r7, r9, r10;
	r5 = 0;
	label$306c77b_6_1:
	r6 = true;
	if( !r6 ) goto label$306c77b_6_20;
	r8 = r0->bytes;
	r9 = r2 - r1;
	r10 = 0;
	r7 = hl_bytes_find(r8,r1,r9,r3,r10,r4);
	r5 = r7;
	r9 = 0;
	if( r7 < r9 ) goto label$306c77b_6_15;
	r9 = 1;
	r7 = r7 & r9;
	r9 = 0;
	if( r7 != r9 ) goto label$306c77b_6_16;
	label$306c77b_6_15:
	goto label$306c77b_6_20;
	label$306c77b_6_16:
	r9 = 1;
	r7 = r5 + r9;
	r1 = r7;
	goto label$306c77b_6_1;
	label$306c77b_6_20:
	return r5;
}

int String_indexOf(String r0,String r1,vdynamic* r2) {
	String r6;
	bool r10;
	vbyte *r8, *r12;
	int r3, r4, r5, r7, r9, r11, r13, r14;
	r3 = 0;
	if( !r2 ) goto label$306c77b_7_18;
	r4 = r2 ? r2->v.i : 0;
	r5 = 0;
	if( r5 >= r4 ) goto label$306c77b_7_18;
	r4 = r2 ? r2->v.i : 0;
	r5 = r0->length;
	if( r4 < r5 ) goto label$306c77b_7_14;
	r6 = (String)s$;
	if( r1 != r6 && (!r1 || !r6 || String___compare(r1,(vdynamic*)r6) != 0) ) goto label$306c77b_7_12;
	r4 = r0->length;
	return r4;
	label$306c77b_7_12:
	r4 = -1;
	return r4;
	label$306c77b_7_14:
	r4 = r2 ? r2->v.i : 0;
	r5 = 1;
	r4 = r4 << r5;
	r3 = r4;
	label$306c77b_7_18:
	r4 = r3;
	r5 = r0->length;
	r7 = 1;
	r5 = r5 << r7;
	if( r1 == NULL ) hl_null_access();
	r8 = r1->bytes;
	r7 = r1->length;
	r9 = 1;
	r7 = r7 << r9;
	r9 = 0;
	label$306c77b_7_28:
	r10 = true;
	if( !r10 ) goto label$306c77b_7_47;
	r12 = r0->bytes;
	r13 = r5 - r4;
	r14 = 0;
	r11 = hl_bytes_find(r12,r4,r13,r8,r14,r7);
	r9 = r11;
	r13 = 0;
	if( r11 < r13 ) goto label$306c77b_7_42;
	r13 = 1;
	r11 = r11 & r13;
	r13 = 0;
	if( r11 != r13 ) goto label$306c77b_7_43;
	label$306c77b_7_42:
	goto label$306c77b_7_47;
	label$306c77b_7_43:
	r13 = 1;
	r11 = r9 + r13;
	r4 = r11;
	goto label$306c77b_7_28;
	label$306c77b_7_47:
	r11 = r9;
	r14 = 0;
	if( r14 >= r9 ) goto label$306c77b_7_53;
	r14 = 1;
	r13 = r9 >> r14;
	r11 = r13;
	label$306c77b_7_53:
	return r11;
}

int String_lastIndexOf(String r0,String r1,vdynamic* r2) {
	vbyte *r8, *r9;
	int r3, r4, r5, r6, r7;
	r3 = r0->length;
	if( !r2 ) goto label$306c77b_8_15;
	r4 = r2 ? r2->v.i : 0;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r4 = r4 + r5;
	r3 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$306c77b_8_11;
	r4 = 0;
	r3 = r4;
	label$306c77b_8_11:
	r5 = r0->length;
	if( r5 >= r4 ) goto label$306c77b_8_15;
	r4 = r0->length;
	r3 = r4;
	label$306c77b_8_15:
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r4 = r3 - r5;
	r5 = r1->length;
	r6 = 1;
	r5 = r5 << r6;
	label$306c77b_8_21:
	r7 = 0;
	if( r4 < r7 ) goto label$306c77b_8_36;
	r8 = r0->bytes;
	r7 = 1;
	r6 = r4 << r7;
	if( r1 == NULL ) hl_null_access();
	r9 = r1->bytes;
	r7 = 0;
	r6 = hl_bytes_compare(r8,r6,r9,r7,r5);
	r7 = 0;
	if( r6 != r7 ) goto label$306c77b_8_34;
	return r4;
	label$306c77b_8_34:
	--r4;
	goto label$306c77b_8_21;
	label$306c77b_8_36:
	r6 = -1;
	return r6;
}

hl__types__ArrayObj String_split(String r0,String r1) {
	String r7;
	hl__types__ArrayObj r2;
	hl_type *r4;
	bool r12;
	vdynamic *r11;
	vbyte *r13, *r16;
	int r5, r6, r8, r9, r10, r14, r15, r17, r18;
	varray *r3;
	r4 = &t$String;
	r5 = 0;
	r3 = hl_alloc_array(r4,r5);
	r2 = hl_types_ArrayObj_alloc(r3);
	r5 = r0->length;
	r6 = 0;
	if( r5 != r6 ) goto label$306c77b_9_11;
	if( r2 == NULL ) hl_null_access();
	r7 = (String)s$;
	r5 = hl_types_ArrayObj_push(r2,((vdynamic*)r7));
	return r2;
	label$306c77b_9_11:
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r6 = 0;
	if( r5 != r6 ) goto label$306c77b_9_28;
	r5 = 0;
	r6 = r0->length;
	label$306c77b_9_17:
	if( r5 >= r6 ) goto label$306c77b_9_27;
	r8 = r5;
	++r5;
	if( r2 == NULL ) hl_null_access();
	r10 = 1;
	r11 = hl_alloc_dynamic(&t$_i32);
	r11->v.i = r10;
	r7 = String_substr(r0,r8,r11);
	r9 = hl_types_ArrayObj_push(r2,((vdynamic*)r7));
	goto label$306c77b_9_17;
	label$306c77b_9_27:
	return r2;
	label$306c77b_9_28:
	r5 = 0;
	r6 = r1->length;
	label$306c77b_9_30:
	r12 = true;
	if( !r12 ) goto label$306c77b_9_82;
	r9 = 1;
	r8 = r5 << r9;
	r9 = r0->length;
	r10 = 1;
	r9 = r9 << r10;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->bytes;
	r14 = 1;
	r10 = r6 << r14;
	r14 = 0;
	label$306c77b_9_43:
	r12 = true;
	if( !r12 ) goto label$306c77b_9_62;
	r16 = r0->bytes;
	r17 = r9 - r8;
	r18 = 0;
	r15 = hl_bytes_find(r16,r8,r17,r13,r18,r10);
	r14 = r15;
	r17 = 0;
	if( r15 < r17 ) goto label$306c77b_9_57;
	r17 = 1;
	r15 = r15 & r17;
	r17 = 0;
	if( r15 != r17 ) goto label$306c77b_9_58;
	label$306c77b_9_57:
	goto label$306c77b_9_62;
	label$306c77b_9_58:
	r17 = 1;
	r15 = r14 + r17;
	r8 = r15;
	goto label$306c77b_9_43;
	label$306c77b_9_62:
	r18 = 0;
	if( r14 >= r18 ) goto label$306c77b_9_71;
	if( r2 == NULL ) hl_null_access();
	r18 = r0->length;
	r18 = r18 - r5;
	r11 = hl_alloc_dynamic(&t$_i32);
	r11->v.i = r18;
	r7 = String_substr(r0,r5,r11);
	r17 = hl_types_ArrayObj_push(r2,((vdynamic*)r7));
	goto label$306c77b_9_82;
	label$306c77b_9_71:
	r18 = 1;
	r17 = r14 >> r18;
	r15 = r17;
	if( r2 == NULL ) hl_null_access();
	r18 = r15 - r5;
	r11 = hl_alloc_dynamic(&t$_i32);
	r11->v.i = r18;
	r7 = String_substr(r0,r5,r11);
	r17 = hl_types_ArrayObj_push(r2,((vdynamic*)r7));
	r17 = r15 + r6;
	r5 = r17;
	goto label$306c77b_9_30;
	label$306c77b_9_82:
	return r2;
}

String String_substr(String r0,int r1,vdynamic* r2) {
	String r8;
	vbyte *r9, *r10;
	int r3, r5, r6, r7, r11, r12;
	r3 = r0->length;
	if( r2 ) goto label$306c77b_10_4;
	r5 = r3;
	goto label$306c77b_10_5;
	label$306c77b_10_4:
	r5 = r2 ? r2->v.i : 0;
	label$306c77b_10_5:
	r7 = 0;
	if( r5 != r7 ) goto label$306c77b_10_9;
	r8 = (String)s$;
	return r8;
	label$306c77b_10_9:
	r7 = 0;
	if( r1 == r7 ) goto label$306c77b_10_15;
	r7 = 0;
	if( r5 >= r7 ) goto label$306c77b_10_15;
	r8 = (String)s$;
	return r8;
	label$306c77b_10_15:
	r7 = 0;
	if( r1 >= r7 ) goto label$306c77b_10_24;
	r6 = r3 + r1;
	r1 = r6;
	r7 = 0;
	if( r6 >= r7 ) goto label$306c77b_10_23;
	r6 = 0;
	r1 = r6;
	label$306c77b_10_23:
	goto label$306c77b_10_33;
	label$306c77b_10_24:
	r7 = 0;
	if( r5 >= r7 ) goto label$306c77b_10_33;
	r6 = r3 + r5;
	r6 = r6 - r1;
	r5 = r6;
	r7 = 0;
	if( r6 >= r7 ) goto label$306c77b_10_33;
	r8 = (String)s$;
	return r8;
	label$306c77b_10_33:
	r6 = r1 + r5;
	if( ((unsigned)r3) >= ((unsigned)r6) ) goto label$306c77b_10_37;
	r6 = r3 - r1;
	r5 = r6;
	label$306c77b_10_37:
	r7 = 0;
	if( r1 < r7 ) goto label$306c77b_10_41;
	r7 = 0;
	if( r7 < r5 ) goto label$306c77b_10_43;
	label$306c77b_10_41:
	r8 = (String)s$;
	return r8;
	label$306c77b_10_43:
	r7 = 1;
	r6 = r5 + r7;
	r7 = 1;
	r6 = r6 << r7;
	r9 = hl_alloc_bytes(r6);
	r6 = 0;
	r10 = r0->bytes;
	r11 = 1;
	r7 = r1 << r11;
	r12 = 1;
	r11 = r5 << r12;
	hl_bytes_blit(r9,r6,r10,r7,r11);
	r7 = 1;
	r6 = r5 << r7;
	r7 = 0;
	*(unsigned short*)(r9 + r6) = (unsigned short)r7;
	r8 = (String)hl_alloc_obj(&t$String);
	r8->bytes = r9;
	r8->length = r5;
	return r8;
}

String String_substring(String r0,int r1,vdynamic* r2) {
	String r7;
	vdynamic *r3;
	int r4, r5, r6;
	if( r2 ) goto label$306c77b_11_4;
	r5 = r0->length;
	r4 = r5;
	goto label$306c77b_11_15;
	label$306c77b_11_4:
	r5 = r2 ? r2->v.i : 0;
	r4 = r5;
	r6 = 0;
	if( r5 >= r6 ) goto label$306c77b_11_11;
	r5 = 0;
	r4 = r5;
	goto label$306c77b_11_15;
	label$306c77b_11_11:
	r6 = r0->length;
	if( r6 >= r5 ) goto label$306c77b_11_15;
	r5 = r0->length;
	r4 = r5;
	label$306c77b_11_15:
	r6 = 0;
	if( r1 >= r6 ) goto label$306c77b_11_20;
	r5 = 0;
	r1 = r5;
	goto label$306c77b_11_24;
	label$306c77b_11_20:
	r6 = r0->length;
	if( r6 >= r1 ) goto label$306c77b_11_24;
	r5 = r0->length;
	r1 = r5;
	label$306c77b_11_24:
	if( r4 >= r1 ) goto label$306c77b_11_28;
	r5 = r1;
	r1 = r4;
	r4 = r5;
	label$306c77b_11_28:
	r6 = r4 - r1;
	r3 = hl_alloc_dynamic(&t$_i32);
	r3->v.i = r6;
	r7 = String_substr(r0,r1,r3);
	return r7;
}

String String_toString(String r0) {
	return r0;
}

String String_fromCharCode(int r0) {
	String r4, r7;
	int *r5;
	vdynamic *r3;
	vbyte *r6;
	int r1, r2, r8;
	r2 = 0;
	if( r0 < r2 ) goto label$306c77b_13_28;
	r2 = 65536;
	if( r0 >= r2 ) goto label$306c77b_13_28;
	r2 = 55296;
	if( r0 < r2 ) goto label$306c77b_13_16;
	r2 = 57343;
	if( r2 < r0 ) goto label$306c77b_13_16;
	r4 = (String)s$Invalid_unicode_char_;
	r1 = r0;
	r5 = &r1;
	r6 = hl_itos(r1,r5);
	r7 = String___alloc__(r6,r1);
	r4 = String___add__(r4,r7);
	r3 = haxe_Exception_thrown(((vdynamic*)r4));
	hl_throw((vdynamic*)r3);
	label$306c77b_13_16:
	r1 = 4;
	r6 = hl_alloc_bytes(r1);
	r1 = 0;
	*(unsigned short*)(r6 + r1) = (unsigned short)r0;
	r1 = 2;
	r2 = 0;
	*(unsigned short*)(r6 + r1) = (unsigned short)r2;
	r4 = (String)hl_alloc_obj(&t$String);
	r4->bytes = r6;
	r1 = 1;
	r4->length = r1;
	return r4;
	label$306c77b_13_28:
	r2 = 1114112;
	if( r0 >= r2 ) goto label$306c77b_13_55;
	r1 = 6;
	r6 = hl_alloc_bytes(r1);
	r2 = 65536;
	r1 = r0 - r2;
	r0 = r1;
	r1 = 0;
	r8 = 10;
	r2 = r0 >> r8;
	r8 = 55296;
	r2 = r2 + r8;
	*(unsigned short*)(r6 + r1) = (unsigned short)r2;
	r1 = 2;
	r8 = 1023;
	r2 = r0 & r8;
	r8 = 56320;
	r2 = r2 + r8;
	*(unsigned short*)(r6 + r1) = (unsigned short)r2;
	r1 = 4;
	r2 = 0;
	*(unsigned short*)(r6 + r1) = (unsigned short)r2;
	r4 = (String)hl_alloc_obj(&t$String);
	r4->bytes = r6;
	r1 = 2;
	r4->length = r1;
	return r4;
	label$306c77b_13_55:
	r4 = (String)s$Invalid_unicode_char_;
	r1 = r0;
	r5 = &r1;
	r6 = hl_itos(r1,r5);
	r7 = String___alloc__(r6,r1);
	r4 = String___add__(r4,r7);
	r3 = haxe_Exception_thrown(((vdynamic*)r4));
	hl_throw((vdynamic*)r3);
}

vbyte* String_toUtf8(String r0) {
	int *r3;
	int r2;
	vbyte *r1;
	r1 = r0->bytes;
	r2 = 0;
	r3 = NULL;
	r1 = hl_utf16_to_utf8(r1,r2,r3);
	return r1;
}

vbyte* String___string(String r0) {
	vbyte *r1;
	r1 = r0->bytes;
	return r1;
}

int String___compare(String r0,vdynamic* r1) {
	String r3;
	$String r2;
	bool r4;
	vbyte *r6, *r7;
	int r5, r8, r9;
	r2 = ($String)g$_String;
	r4 = hl_BaseType_check(((hl__BaseType)r2),r1);
	if( !r4 ) goto label$306c77b_16_5;
	r3 = (String)r1;
	goto label$306c77b_16_6;
	label$306c77b_16_5:
	r3 = NULL;
	label$306c77b_16_6:
	if( r3 ) goto label$306c77b_16_9;
	r5 = hl_ptr_compare(((vdynamic*)r0),r1);
	return r5;
	label$306c77b_16_9:
	r6 = r0->bytes;
	if( r3 == NULL ) hl_null_access();
	r7 = r3->bytes;
	r5 = r0->length;
	r8 = r3->length;
	if( r5 >= r8 ) goto label$306c77b_16_17;
	r5 = r0->length;
	goto label$306c77b_16_18;
	label$306c77b_16_17:
	r5 = r3->length;
	label$306c77b_16_18:
	r5 = hl_bytes_compare16(r6,r7,r5);
	r9 = 0;
	if( r5 != r9 ) goto label$306c77b_16_25;
	r8 = r0->length;
	r9 = r3->length;
	r8 = r8 - r9;
	return r8;
	label$306c77b_16_25:
	return r5;
}

String String___alloc__(vbyte* r0,int r1) {
	String r2;
	r2 = (String)hl_alloc_obj(&t$String);
	r2->bytes = r0;
	r2->length = r1;
	return r2;
}

vbyte* String_call_toString(vdynamic* r0) {
	String r2;
	vdynamic *r1;
	vbyte *r3;
	if( r0 == NULL ) hl_null_access();
	r1 = (vdynamic*)hl_dyn_getp((vdynamic*)r0,409915697/*toString*/,&t$_dyn);
	if( r1 == NULL ) hl_null_access();
	{
		r1 = (vdynamic*)hl_dyn_call((vclosure*)r1,NULL,0);
	}
	r2 = (String)hl_dyn_castp(&r1,&t$_dyn,&t$String);
	if( r2 == NULL ) hl_null_access();
	r3 = r2->bytes;
	return r3;
}

String String_fromUCS2(vbyte* r0) {
	String r1;
	int r2;
	r1 = (String)hl_alloc_obj(&t$String);
	r1->bytes = r0;
	r2 = 0;
	r2 = hl_ucs2length(r0,r2);
	r1->length = r2;
	return r1;
}

String String_fromUTF8(vbyte* r0) {
	String r5;
	int *r2;
	vbyte *r3;
	int r1, r4, r6;
	r1 = 0;
	r2 = &r1;
	r4 = 0;
	r3 = hl_utf8_to_utf16(r0,r4,r2);
	r5 = (String)hl_alloc_obj(&t$String);
	r5->bytes = r3;
	r6 = 1;
	r4 = r1 >> r6;
	r5->length = r4;
	return r5;
}

String String___add__(String r0,String r1) {
	String r3;
	vbyte *r8, *r10;
	int r4, r5, r6, r7, r9;
	if( r0 ) goto label$306c77b_21_3;
	r3 = (String)s$null;
	r0 = r3;
	label$306c77b_21_3:
	if( r1 ) goto label$306c77b_21_6;
	r3 = (String)s$null;
	r1 = r3;
	label$306c77b_21_6:
	if( r0 == NULL ) hl_null_access();
	r4 = r0->length;
	r5 = 1;
	r4 = r4 << r5;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r6 = 1;
	r5 = r5 << r6;
	r6 = r4 + r5;
	r9 = 2;
	r7 = r6 + r9;
	r8 = hl_alloc_bytes(r7);
	r7 = 0;
	r10 = r0->bytes;
	r9 = 0;
	hl_bytes_blit(r8,r7,r10,r9,r4);
	r10 = r1->bytes;
	r9 = 0;
	hl_bytes_blit(r8,r4,r10,r9,r5);
	r9 = 0;
	*(unsigned short*)(r8 + r6) = (unsigned short)r9;
	r3 = (String)hl_alloc_obj(&t$String);
	r3->bytes = r8;
	r9 = 1;
	r7 = r6 >> r9;
	r3->length = r7;
	return r3;
}

