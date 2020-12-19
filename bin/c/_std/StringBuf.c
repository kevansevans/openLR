﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <_std/StringBuf.h>
#include <hl/natives.h>
#include <_std/String.h>
extern $String g$_String;
bool hl_BaseType_check(hl__BaseType,vdynamic*);
extern String s$Invalid_unicode_char_;
String String___alloc__(vbyte*,int);
String String___add__(String,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
String StringBuf_toString(StringBuf);
extern hl_type t$String;

void StringBuf_new(StringBuf r0) {
	vbyte *r2;
	int r1;
	r1 = 0;
	r0->pos = r1;
	r1 = 8;
	r0->size = r1;
	r1 = r0->size;
	r2 = hl_alloc_bytes(r1);
	r0->b = r2;
	return;
}

void StringBuf_add(StringBuf r0,vdynamic* r1) {
	String r5;
	$String r4;
	bool r6;
	int *r16;
	vbyte *r7, *r13, *r14;
	int r2, r8, r9, r10, r11, r12, r15;
	r2 = 0;
	r4 = ($String)g$_String;
	r6 = hl_BaseType_check(((hl__BaseType)r4),r1);
	if( !r6 ) goto label$d4ab3a5_2_6;
	r5 = (String)r1;
	goto label$d4ab3a5_2_7;
	label$d4ab3a5_2_6:
	r5 = NULL;
	label$d4ab3a5_2_7:
	if( !r5 ) goto label$d4ab3a5_2_42;
	if( r5 == NULL ) hl_null_access();
	r7 = r5->bytes;
	r8 = r5->length;
	r9 = 1;
	r8 = r8 << r9;
	r9 = r0->pos;
	r9 = r9 + r8;
	r10 = r0->size;
	if( r10 >= r9 ) goto label$d4ab3a5_2_34;
	r9 = r0->pos;
	r9 = r9 + r8;
	r10 = r0->size;
	r11 = 3;
	r10 = r10 * r11;
	r11 = 1;
	r10 = r10 >> r11;
	if( r10 >= r9 ) goto label$d4ab3a5_2_26;
	r10 = r9;
	label$d4ab3a5_2_26:
	r13 = hl_alloc_bytes(r10);
	r11 = 0;
	r14 = r0->b;
	r12 = 0;
	r15 = r0->pos;
	hl_bytes_blit(r13,r11,r14,r12,r15);
	r0->b = r13;
	r0->size = r10;
	label$d4ab3a5_2_34:
	r13 = r0->b;
	r9 = r0->pos;
	r10 = 0;
	hl_bytes_blit(r13,r9,r7,r10,r8);
	r9 = r0->pos;
	r9 = r9 + r8;
	r0->pos = r9;
	return;
	label$d4ab3a5_2_42:
	r16 = &r2;
	r7 = hl_value_to_string(r1,r16);
	r9 = 1;
	r8 = r2 << r9;
	r9 = r0->pos;
	r9 = r9 + r8;
	r10 = r0->size;
	if( r10 >= r9 ) goto label$d4ab3a5_2_67;
	r9 = r0->pos;
	r9 = r9 + r8;
	r10 = r0->size;
	r11 = 3;
	r10 = r10 * r11;
	r11 = 1;
	r10 = r10 >> r11;
	if( r10 >= r9 ) goto label$d4ab3a5_2_59;
	r10 = r9;
	label$d4ab3a5_2_59:
	r13 = hl_alloc_bytes(r10);
	r11 = 0;
	r14 = r0->b;
	r12 = 0;
	r15 = r0->pos;
	hl_bytes_blit(r13,r11,r14,r12,r15);
	r0->b = r13;
	r0->size = r10;
	label$d4ab3a5_2_67:
	r13 = r0->b;
	r9 = r0->pos;
	r10 = 0;
	hl_bytes_blit(r13,r9,r7,r10,r8);
	r9 = r0->pos;
	r9 = r9 + r8;
	r0->pos = r9;
	return;
}

void StringBuf_addSub(StringBuf r0,String r1,int r2,vdynamic* r3) {
	vbyte *r8, *r12, *r13;
	int r5, r6, r7, r9, r10, r11, r14;
	r6 = 0;
	if( r2 >= r6 ) goto label$d4ab3a5_3_4;
	r5 = 0;
	r2 = r5;
	label$d4ab3a5_3_4:
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	if( r2 < r6 ) goto label$d4ab3a5_3_8;
	return;
	label$d4ab3a5_3_8:
	if( r3 ) goto label$d4ab3a5_3_13;
	r6 = r1->length;
	r6 = r6 - r2;
	r5 = r6;
	goto label$d4ab3a5_3_24;
	label$d4ab3a5_3_13:
	r6 = r3 ? r3->v.i : 0;
	r5 = r6;
	r6 = r2 + r5;
	r7 = r1->length;
	if( r7 >= r6 ) goto label$d4ab3a5_3_21;
	r6 = r1->length;
	r6 = r6 - r2;
	r5 = r6;
	label$d4ab3a5_3_21:
	r7 = 0;
	if( r7 < r5 ) goto label$d4ab3a5_3_24;
	return;
	label$d4ab3a5_3_24:
	r8 = r1->bytes;
	r7 = 1;
	r6 = r5 << r7;
	r7 = r0->pos;
	r7 = r7 + r6;
	r9 = r0->size;
	if( r9 >= r7 ) goto label$d4ab3a5_3_48;
	r7 = r0->pos;
	r7 = r7 + r6;
	r9 = r0->size;
	r10 = 3;
	r9 = r9 * r10;
	r10 = 1;
	r9 = r9 >> r10;
	if( r9 >= r7 ) goto label$d4ab3a5_3_40;
	r9 = r7;
	label$d4ab3a5_3_40:
	r12 = hl_alloc_bytes(r9);
	r10 = 0;
	r13 = r0->b;
	r11 = 0;
	r14 = r0->pos;
	hl_bytes_blit(r12,r10,r13,r11,r14);
	r0->b = r12;
	r0->size = r9;
	label$d4ab3a5_3_48:
	r12 = r0->b;
	r7 = r0->pos;
	r10 = 1;
	r9 = r2 << r10;
	hl_bytes_blit(r12,r7,r8,r9,r6);
	r7 = r0->pos;
	r7 = r7 + r6;
	r0->pos = r7;
	return;
}

void StringBuf_addChar(StringBuf r0,int r1) {
	String r6, r9;
	int *r7;
	vdynamic *r5;
	vbyte *r8, *r11;
	int r3, r4, r10, r12;
	r4 = 0;
	if( r1 < r4 ) goto label$d4ab3a5_4_46;
	r4 = 65536;
	if( r1 >= r4 ) goto label$d4ab3a5_4_46;
	r4 = 55296;
	if( r1 < r4 ) goto label$d4ab3a5_4_16;
	r4 = 57343;
	if( r4 < r1 ) goto label$d4ab3a5_4_16;
	r6 = (String)s$Invalid_unicode_char_;
	r3 = r1;
	r7 = &r3;
	r8 = hl_itos(r3,r7);
	r9 = String___alloc__(r8,r3);
	r6 = String___add__(r6,r9);
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$d4ab3a5_4_16:
	r3 = r0->pos;
	r4 = 2;
	r3 = r3 + r4;
	r4 = r0->size;
	if( r4 >= r3 ) goto label$d4ab3a5_4_38;
	r3 = r0->size;
	r4 = 3;
	r3 = r3 * r4;
	r4 = 1;
	r3 = r3 >> r4;
	r4 = 0;
	if( r3 >= r4 ) goto label$d4ab3a5_4_30;
	r4 = 0;
	r3 = r4;
	label$d4ab3a5_4_30:
	r8 = hl_alloc_bytes(r3);
	r4 = 0;
	r11 = r0->b;
	r10 = 0;
	r12 = r0->pos;
	hl_bytes_blit(r8,r4,r11,r10,r12);
	r0->b = r8;
	r0->size = r3;
	label$d4ab3a5_4_38:
	r8 = r0->b;
	r3 = r0->pos;
	*(unsigned short*)(r8 + r3) = (unsigned short)r1;
	r3 = r0->pos;
	r4 = 2;
	r3 = r3 + r4;
	r0->pos = r3;
	goto label$d4ab3a5_4_102;
	label$d4ab3a5_4_46:
	r4 = 1114112;
	if( r1 >= r4 ) goto label$d4ab3a5_4_94;
	r3 = r0->pos;
	r4 = 4;
	r3 = r3 + r4;
	r4 = r0->size;
	if( r4 >= r3 ) goto label$d4ab3a5_4_70;
	r3 = r0->size;
	r4 = 3;
	r3 = r3 * r4;
	r4 = 1;
	r3 = r3 >> r4;
	r4 = 0;
	if( r3 >= r4 ) goto label$d4ab3a5_4_62;
	r4 = 0;
	r3 = r4;
	label$d4ab3a5_4_62:
	r8 = hl_alloc_bytes(r3);
	r4 = 0;
	r11 = r0->b;
	r10 = 0;
	r12 = r0->pos;
	hl_bytes_blit(r8,r4,r11,r10,r12);
	r0->b = r8;
	r0->size = r3;
	label$d4ab3a5_4_70:
	r4 = 65536;
	r3 = r1 - r4;
	r1 = r3;
	r8 = r0->b;
	r3 = r0->pos;
	r12 = 10;
	r10 = r1 >> r12;
	r12 = 55296;
	r10 = r10 + r12;
	*(unsigned short*)(r8 + r3) = (unsigned short)r10;
	r8 = r0->b;
	r3 = r0->pos;
	r4 = 2;
	r3 = r3 + r4;
	r12 = 1023;
	r10 = r1 & r12;
	r12 = 56320;
	r10 = r10 + r12;
	*(unsigned short*)(r8 + r3) = (unsigned short)r10;
	r3 = r0->pos;
	r4 = 4;
	r3 = r3 + r4;
	r0->pos = r3;
	goto label$d4ab3a5_4_102;
	label$d4ab3a5_4_94:
	r6 = (String)s$Invalid_unicode_char_;
	r3 = r1;
	r7 = &r3;
	r8 = hl_itos(r3,r7);
	r9 = String___alloc__(r8,r3);
	r6 = String___add__(r6,r9);
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$d4ab3a5_4_102:
	return;
}

vbyte* StringBuf___string(StringBuf r0) {
	String r2;
	vbyte *r1;
	r2 = StringBuf_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String StringBuf_toString(StringBuf r0) {
	String r8;
	vbyte *r5, *r6;
	int r2, r3, r4, r7;
	r2 = r0->pos;
	r3 = 2;
	r2 = r2 + r3;
	r3 = r0->size;
	if( r3 >= r2 ) goto label$d4ab3a5_6_22;
	r2 = r0->size;
	r3 = 3;
	r2 = r2 * r3;
	r3 = 1;
	r2 = r2 >> r3;
	r3 = 0;
	if( r2 >= r3 ) goto label$d4ab3a5_6_14;
	r3 = 0;
	r2 = r3;
	label$d4ab3a5_6_14:
	r5 = hl_alloc_bytes(r2);
	r3 = 0;
	r6 = r0->b;
	r4 = 0;
	r7 = r0->pos;
	hl_bytes_blit(r5,r3,r6,r4,r7);
	r0->b = r5;
	r0->size = r2;
	label$d4ab3a5_6_22:
	r5 = r0->b;
	r2 = r0->pos;
	r4 = 0;
	*(unsigned short*)(r5 + r2) = (unsigned short)r4;
	r5 = r0->b;
	r2 = r0->pos;
	r3 = 1;
	r2 = r2 >> r3;
	r8 = (String)hl_alloc_obj(&t$String);
	r8->bytes = r5;
	r8->length = r2;
	return r8;
}

