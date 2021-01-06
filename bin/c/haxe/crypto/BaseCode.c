﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/crypto/BaseCode.h>
extern String s$786d1e9;
vdynamic* haxe_Exception_thrown(vdynamic*);
extern hl_type t$hl_types_ArrayBytes_Int;
void hl_types_ArrayBytes_Int_new(hl__types__ArrayBytes_Int);
void hl_types_ArrayBytes_Int___expand(hl__types__ArrayBytes_Int,int);
int haxe_io_Bytes_get(haxe__io__Bytes,int);
haxe__io__Bytes haxe_io_Bytes_alloc(int);
extern String s$BaseCode_invalid_encoded_char;
void haxe_io_Bytes_set(haxe__io__Bytes,int,int);

void haxe_crypto_BaseCode_new(haxe__crypto__BaseCode r0,haxe__io__Bytes r1) {
	String r7;
	vdynamic *r6;
	int r2, r4, r5;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->length;
	r4 = 1;
	label$adfabbb_1_3:
	r5 = 1;
	r5 = r5 << r4;
	if( r5 >= r2 ) goto label$adfabbb_1_9;
	++r4;
	goto label$adfabbb_1_3;
	label$adfabbb_1_9:
	r5 = 8;
	if( r5 < r4 ) goto label$adfabbb_1_14;
	r5 = 1;
	r5 = r5 << r4;
	if( r2 == r5 ) goto label$adfabbb_1_17;
	label$adfabbb_1_14:
	r7 = (String)s$786d1e9;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$adfabbb_1_17:
	r0->base = r1;
	r0->nbits = r4;
	return;
}

void haxe_crypto_BaseCode_initTable(haxe__crypto__BaseCode r0) {
	haxe__io__Bytes r9;
	hl__types__ArrayBytes_Int r1;
	vbyte *r8;
	int r3, r4, r5, r6, r7, r10;
	r1 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r1);
	r3 = 0;
	label$adfabbb_2_3:
	r5 = 256;
	if( r3 >= r5 ) goto label$adfabbb_2_18;
	r4 = r3;
	++r3;
	if( r1 == NULL ) hl_null_access();
	r6 = -1;
	r7 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$adfabbb_2_13;
	hl_types_ArrayBytes_Int___expand(r1,r4);
	label$adfabbb_2_13:
	r8 = r1->bytes;
	r7 = 2;
	r7 = r4 << r7;
	*(int*)(r8 + r7) = r6;
	goto label$adfabbb_2_3;
	label$adfabbb_2_18:
	r3 = 0;
	r9 = r0->base;
	if( r9 == NULL ) hl_null_access();
	r4 = r9->length;
	label$adfabbb_2_22:
	if( r3 >= r4 ) goto label$adfabbb_2_38;
	r5 = r3;
	++r3;
	if( r1 == NULL ) hl_null_access();
	r9 = r0->base;
	if( r9 == NULL ) hl_null_access();
	r6 = haxe_io_Bytes_get(r9,r5);
	r10 = r1->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$adfabbb_2_33;
	hl_types_ArrayBytes_Int___expand(r1,r6);
	label$adfabbb_2_33:
	r8 = r1->bytes;
	r10 = 2;
	r10 = r6 << r10;
	*(int*)(r8 + r10) = r5;
	goto label$adfabbb_2_22;
	label$adfabbb_2_38:
	r0->tbl = r1;
	return;
}

haxe__io__Bytes haxe_crypto_BaseCode_decodeBytes(haxe__crypto__BaseCode r0,haxe__io__Bytes r1) {
	String r17;
	haxe__io__Bytes r4, r7;
	hl__types__ArrayBytes_Int r5;
	vdynamic *r16;
	vbyte *r14;
	int r2, r6, r8, r9, r10, r11, r12, r13, r15;
	r2 = r0->nbits;
	r4 = r0->base;
	r5 = r0->tbl;
	if( r5 ) goto label$adfabbb_3_5;
	haxe_crypto_BaseCode_initTable(r0);
	label$adfabbb_3_5:
	r5 = r0->tbl;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	r6 = r6 * r2;
	r8 = 3;
	r6 = r6 >> r8;
	r7 = haxe_io_Bytes_alloc(r6);
	r8 = 0;
	r9 = 0;
	r10 = 0;
	r11 = 0;
	label$adfabbb_3_16:
	if( r11 >= r6 ) goto label$adfabbb_3_57;
	label$adfabbb_3_18:
	r13 = 8;
	if( r9 >= r13 ) goto label$adfabbb_3_46;
	r12 = r9 + r2;
	r9 = r12;
	r12 = r8 << r2;
	r8 = r12;
	if( r5 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r12 = r10;
	++r10;
	r12 = haxe_io_Bytes_get(r1,r12);
	r13 = r5->length;
	if( ((unsigned)r12) < ((unsigned)r13) ) goto label$adfabbb_3_34;
	r12 = 0;
	goto label$adfabbb_3_38;
	label$adfabbb_3_34:
	r14 = r5->bytes;
	r13 = 2;
	r13 = r12 << r13;
	r12 = *(int*)(r14 + r13);
	label$adfabbb_3_38:
	r15 = -1;
	if( r12 != r15 ) goto label$adfabbb_3_43;
	r17 = (String)s$BaseCode_invalid_encoded_char;
	r16 = haxe_Exception_thrown(((vdynamic*)r17));
	hl_throw((vdynamic*)r16);
	label$adfabbb_3_43:
	r13 = r8 | r12;
	r8 = r13;
	goto label$adfabbb_3_18;
	label$adfabbb_3_46:
	r13 = 8;
	r12 = r9 - r13;
	r9 = r12;
	if( r7 == NULL ) hl_null_access();
	r12 = r11;
	++r11;
	r13 = r8 >> r9;
	r15 = 255;
	r13 = r13 & r15;
	haxe_io_Bytes_set(r7,r12,r13);
	goto label$adfabbb_3_16;
	label$adfabbb_3_57:
	return r7;
}

