﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/ArrayBytes_Int.h>
extern hl_type t$_i32;
extern hl_type t$hl_types_ArrayBytes_Int;
void hl_types_ArrayBytes_Int_new(hl__types__ArrayBytes_Int);
#include <hl/natives.h>
#include <_std/String.h>
#include <_std/StringBuf.h>
extern hl_type t$StringBuf;
void StringBuf_new(StringBuf);
void StringBuf_add(StringBuf,vdynamic*);
String StringBuf_toString(StringBuf);
void hl_types_ArrayBytes_Int___expand(hl__types__ArrayBytes_Int,int);
#include <haxe/io/Error.h>
extern hl_type t$hl_types_ArrayAccess;
extern venum* g$haxe_io_Error_OutsideBounds;
vdynamic* haxe_Exception_thrown(vdynamic*);
vbyte* hl__Bytes_Bytes_Impl__sub(vbyte*,int,int);
extern hl_type t$fun_0223e89;
void StringBuf_addChar(StringBuf,int);
int hl_types_ArrayBytes_Int_indexOf(hl__types__ArrayBytes_Int,int,vdynamic*);
#include <hl/types/BytesIterator_Int.h>
#include <haxe/iterators/ArrayIterator.h>
extern hl_type t$hl_types_BytesIterator_Int;
void hl_types_BytesIterator_Int_new(hl__types__BytesIterator_Int,hl__types__ArrayBytes_Int);
#include <hl/types/BytesKeyValueIterator_Int.h>
#include <haxe/iterators/ArrayKeyValueIterator.h>
extern hl_type t$hl_types_BytesKeyValueIterator_Int;
void hl_types_BytesKeyValueIterator_Int_new(hl__types__BytesKeyValueIterator_Int,hl__types__ArrayBytes_Int);
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayDyn.h>
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase,bool*);
extern hl_type t$_dyn;
extern hl_type t$fun_3a8cb27;
extern String s$Invalid_array_index_;
String String___alloc__(vbyte*,int);
String String___add__(String,String);

int hl_types_ArrayBytes_Int_sort__$1(vclosure* r0,double r1,double r2) {
	int r3, r4;
	r3 = (int)r1;
	r4 = (int)r2;
	r3 = r0->hasValue ? ((int (*)(vdynamic*,int,int))r0->fun)((vdynamic*)r0->value,r3,r4) : ((int (*)(int,int))r0->fun)(r3,r4);
	return r3;
}

int hl_types_ArrayBytes_Int_sortDyn__$1(vclosure* r0,int r1,int r2) {
	vdynamic *r3, *r4;
	r3 = hl_alloc_dynamic(&t$_i32);
	r3->v.i = r1;
	r4 = hl_alloc_dynamic(&t$_i32);
	r4->v.i = r2;
	r1 = r0->hasValue ? ((int (*)(vdynamic*,vdynamic*,vdynamic*))r0->fun)((vdynamic*)r0->value,r3,r4) : ((int (*)(vdynamic*,vdynamic*))r0->fun)(r3,r4);
	return r1;
}

hl__types__ArrayBytes_Int hl_types_ArrayBytes_Int_concat(hl__types__ArrayBytes_Int r0,hl__types__ArrayBytes_Int r1) {
	hl__types__ArrayBytes_Int r2;
	vbyte *r6, *r7, *r8, *r9, *r10, *r13;
	int r4, r5, r11, r12, r14;
	r2 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r2);
	r4 = r0->length;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r4 = r4 + r5;
	r2->size = r4;
	r2->length = r4;
	r6 = r0->bytes;
	r4 = r2->length;
	r5 = 2;
	r4 = r4 << r5;
	r7 = hl_alloc_bytes(r4);
	r2->bytes = r7;
	r8 = r0->bytes;
	r4 = r0->length;
	r5 = 2;
	r4 = r4 << r5;
	r9 = r2->bytes;
	r5 = 0;
	r10 = r0->bytes;
	r11 = 0;
	hl_bytes_blit(r9,r5,r10,r11,r4);
	r9 = r0->bytes;
	r10 = r2->bytes;
	r13 = r1->bytes;
	r11 = 0;
	r12 = r1->length;
	r14 = 2;
	r12 = r12 << r14;
	hl_bytes_blit(r10,r4,r13,r11,r12);
	return r2;
}

String hl_types_ArrayBytes_Int_join(hl__types__ArrayBytes_Int r0,String r1) {
	String r9;
	StringBuf r2;
	vdynamic *r11;
	vbyte *r10;
	int r4, r5, r6, r7, r8;
	r2 = (StringBuf)hl_alloc_obj(&t$StringBuf);
	StringBuf_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$d0a53a9_4_4:
	if( r4 >= r5 ) goto label$d0a53a9_4_20;
	r6 = r4;
	++r4;
	r8 = 0;
	if( r8 >= r6 ) goto label$d0a53a9_4_12;
	if( r2 == NULL ) hl_null_access();
	StringBuf_add(r2,((vdynamic*)r1));
	label$d0a53a9_4_12:
	r10 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r8 = 2;
	r8 = r6 << r8;
	r7 = *(int*)(r10 + r8);
	r11 = hl_alloc_dynamic(&t$_i32);
	r11->v.i = r7;
	StringBuf_add(r2,((vdynamic*)r11));
	goto label$d0a53a9_4_4;
	label$d0a53a9_4_20:
	if( r2 == NULL ) hl_null_access();
	r9 = StringBuf_toString(r2);
	return r9;
}

vdynamic* hl_types_ArrayBytes_Int_pop(hl__types__ArrayBytes_Int r0) {
	vdynamic *r3;
	vbyte *r4;
	int r1, r2, r5;
	r1 = r0->length;
	r2 = 0;
	if( r1 != r2 ) goto label$d0a53a9_5_5;
	r3 = NULL;
	return r3;
	label$d0a53a9_5_5:
	r1 = r0->length;
	--r1;
	r0->length = r1;
	r4 = r0->bytes;
	r1 = r0->length;
	r5 = 2;
	r5 = r1 << r5;
	r2 = *(int*)(r4 + r5);
	r3 = hl_alloc_dynamic(&t$_i32);
	r3->v.i = r2;
	return r3;
}

int hl_types_ArrayBytes_Int_push(hl__types__ArrayBytes_Int r0,int r1) {
	vbyte *r5;
	int r2, r4, r6;
	r2 = r0->length;
	r4 = r0->size;
	if( r4 != r2 ) goto label$d0a53a9_6_5;
	hl_types_ArrayBytes_Int___expand(r0,r2);
	goto label$d0a53a9_6_8;
	label$d0a53a9_6_5:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$d0a53a9_6_8:
	r5 = r0->bytes;
	r6 = 2;
	r6 = r2 << r6;
	*(int*)(r5 + r6) = r1;
	r4 = r0->length;
	return r4;
}

void hl_types_ArrayBytes_Int_reverse(hl__types__ArrayBytes_Int r0) {
	vbyte *r7, *r8, *r10;
	int r1, r3, r4, r5, r6, r9, r11, r12, r13;
	r1 = 0;
	r3 = r0->length;
	r4 = 1;
	r3 = r3 >> r4;
	label$d0a53a9_7_4:
	if( r1 >= r3 ) goto label$d0a53a9_7_29;
	r4 = r1;
	++r1;
	r5 = r0->length;
	r6 = 1;
	r5 = r5 - r6;
	r5 = r5 - r4;
	r7 = r0->bytes;
	r9 = 2;
	r9 = r4 << r9;
	r6 = *(int*)(r7 + r9);
	r8 = r0->bytes;
	r10 = r0->bytes;
	r11 = 2;
	r11 = r5 << r11;
	r9 = *(int*)(r10 + r11);
	r13 = 2;
	r13 = r4 << r13;
	*(int*)(r8 + r13) = r9;
	r8 = r0->bytes;
	r12 = 2;
	r12 = r5 << r12;
	*(int*)(r8 + r12) = r6;
	goto label$d0a53a9_7_4;
	label$d0a53a9_7_29:
	return;
}

vdynamic* hl_types_ArrayBytes_Int_shift(hl__types__ArrayBytes_Int r0) {
	vdynamic *r4;
	vbyte *r5, *r6, *r8, *r9, *r10;
	int r2, r3, r7, r11, r12;
	r2 = r0->length;
	r3 = 0;
	if( r2 != r3 ) goto label$d0a53a9_8_5;
	r4 = NULL;
	return r4;
	label$d0a53a9_8_5:
	r5 = r0->bytes;
	r2 = 0;
	r3 = 2;
	r3 = r2 << r3;
	r2 = *(int*)(r5 + r3);
	r3 = r0->length;
	--r3;
	r0->length = r3;
	r6 = r0->bytes;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r3 = 1;
	r7 = 2;
	r3 = r3 << r7;
	r10 = r0->bytes;
	r7 = 0;
	r11 = r0->length;
	r12 = 2;
	r11 = r11 << r12;
	hl_bytes_blit(r6,r7,r8,r3,r11);
	r4 = hl_alloc_dynamic(&t$_i32);
	r4->v.i = r2;
	return r4;
}

void hl_types_ArrayBytes_Int_blit(hl__types__ArrayBytes_Int r0,int r1,hl__types__ArrayAccess r2,int r3,int r4) {
	venum *r10;
	hl__types__ArrayBytes_Int r5;
	vdynamic *r9;
	vbyte *r11, *r12, *r13, *r14, *r16;
	int r7, r8, r15, r17, r18;
	r5 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r2,&t$hl_types_ArrayAccess,&t$hl_types_ArrayBytes_Int);
	r8 = 0;
	if( r1 < r8 ) goto label$d0a53a9_9_14;
	r8 = 0;
	if( r3 < r8 ) goto label$d0a53a9_9_14;
	r8 = 0;
	if( r4 < r8 ) goto label$d0a53a9_9_14;
	r7 = r1 + r4;
	r8 = r0->length;
	if( r8 < r7 ) goto label$d0a53a9_9_14;
	r7 = r3 + r4;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->length;
	if( r8 >= r7 ) goto label$d0a53a9_9_17;
	label$d0a53a9_9_14:
	r10 = (venum*)g$haxe_io_Error_OutsideBounds;
	r9 = haxe_Exception_thrown(((vdynamic*)r10));
	hl_throw((vdynamic*)r9);
	label$d0a53a9_9_17:
	r11 = r0->bytes;
	r12 = r0->bytes;
	r8 = 2;
	r7 = r1 << r8;
	r13 = r5->bytes;
	r14 = r0->bytes;
	r15 = 2;
	r8 = r3 << r15;
	r16 = r0->bytes;
	r18 = 2;
	r17 = r4 << r18;
	hl_bytes_blit(r11,r7,r13,r8,r17);
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_Int_slice(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	hl__types__ArrayBytes_Int r8;
	vbyte *r9, *r10, *r11, *r12;
	int r4, r5, r6, r7, r13, r14;
	r5 = 0;
	if( r1 >= r5 ) goto label$d0a53a9_10_9;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$d0a53a9_10_9;
	r4 = 0;
	r1 = r4;
	label$d0a53a9_10_9:
	if( r2 ) goto label$d0a53a9_10_12;
	r5 = r0->length;
	goto label$d0a53a9_10_20;
	label$d0a53a9_10_12:
	r5 = r2 ? r2->v.i : 0;
	r6 = 0;
	if( r5 >= r6 ) goto label$d0a53a9_10_17;
	r6 = r0->length;
	r5 = r5 + r6;
	label$d0a53a9_10_17:
	r6 = r0->length;
	if( r6 >= r5 ) goto label$d0a53a9_10_20;
	r5 = r0->length;
	label$d0a53a9_10_20:
	r5 = r5 - r1;
	r7 = 0;
	if( r5 >= r7 ) goto label$d0a53a9_10_26;
	r8 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r8);
	return ((hl__types__ArrayBase)r8);
	label$d0a53a9_10_26:
	r8 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r8);
	r8->size = r5;
	r8->length = r5;
	r9 = r0->bytes;
	r10 = r0->bytes;
	r7 = 2;
	r6 = r1 << r7;
	r11 = r0->bytes;
	r14 = 2;
	r13 = r5 << r14;
	r12 = hl__Bytes_Bytes_Impl__sub(r9,r6,r13);
	r8->bytes = r12;
	return ((hl__types__ArrayBase)r8);
}

void hl_types_ArrayBytes_Int_sort(hl__types__ArrayBytes_Int r0,vclosure* r1) {
	hl_type *r3, *r4;
	vclosure *r8;
	int r6, r7;
	vbyte *r5;
	r3 = &t$_i32;
	r4 = &t$_i32;
	if( hl_same_type(r3,r4) != 0 ) {} else goto label$d0a53a9_11_8;
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	hl_bsort_i32(r5,r6,r7,r1);
	goto label$d0a53a9_11_16;
	label$d0a53a9_11_8:
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	if( r1 ) goto label$d0a53a9_11_14;
	r8 = NULL;
	goto label$d0a53a9_11_15;
	label$d0a53a9_11_14:
	r8 = hl_alloc_closure_ptr(&t$fun_0223e89,hl_types_ArrayBytes_Int_sort__$1,r1);
	label$d0a53a9_11_15:
	hl_bsort_f64(r5,r6,r7,r8);
	label$d0a53a9_11_16:
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_Int_splice(hl__types__ArrayBytes_Int r0,int r1,int r2) {
	hl__types__ArrayBytes_Int r6;
	vbyte *r7, *r8, *r9, *r10, *r13, *r14, *r15, *r17;
	int r4, r5, r11, r12, r16, r18, r19;
	r5 = 0;
	if( r2 >= r5 ) goto label$d0a53a9_12_5;
	r6 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$d0a53a9_12_5:
	r5 = 0;
	if( r1 >= r5 ) goto label$d0a53a9_12_14;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$d0a53a9_12_14;
	r4 = 0;
	r1 = r4;
	label$d0a53a9_12_14:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$d0a53a9_12_21;
	r4 = 0;
	r1 = r4;
	r4 = 0;
	r2 = r4;
	goto label$d0a53a9_12_31;
	label$d0a53a9_12_21:
	r4 = r1 + r2;
	r5 = r0->length;
	if( r5 >= r4 ) goto label$d0a53a9_12_31;
	r4 = r0->length;
	r4 = r4 - r1;
	r2 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$d0a53a9_12_31;
	r4 = 0;
	r2 = r4;
	label$d0a53a9_12_31:
	r5 = 0;
	if( r2 != r5 ) goto label$d0a53a9_12_36;
	r6 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$d0a53a9_12_36:
	r6 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r6);
	r7 = r0->bytes;
	r8 = r0->bytes;
	r5 = 2;
	r4 = r1 << r5;
	r9 = r0->bytes;
	r12 = 2;
	r11 = r2 << r12;
	r10 = hl__Bytes_Bytes_Impl__sub(r7,r4,r11);
	r6->bytes = r10;
	r6->length = r2;
	r6->size = r2;
	r5 = r1 + r2;
	r10 = r0->bytes;
	r13 = r0->bytes;
	r12 = 2;
	r11 = r1 << r12;
	r14 = r0->bytes;
	r15 = r0->bytes;
	r16 = 2;
	r12 = r5 << r16;
	r17 = r0->bytes;
	r18 = r0->length;
	r18 = r18 - r5;
	r19 = 2;
	r18 = r18 << r19;
	hl_bytes_blit(r10,r11,r14,r12,r18);
	r16 = r0->length;
	r16 = r16 - r2;
	r0->length = r16;
	return ((hl__types__ArrayBase)r6);
}

String hl_types_ArrayBytes_Int_toString(hl__types__ArrayBytes_Int r0) {
	String r10;
	StringBuf r1;
	vdynamic *r9;
	vbyte *r8;
	int r3, r4, r5, r6, r7;
	r1 = (StringBuf)hl_alloc_obj(&t$StringBuf);
	StringBuf_new(r1);
	r3 = 91;
	StringBuf_addChar(r1,r3);
	r3 = 0;
	r4 = r0->length;
	label$d0a53a9_13_6:
	if( r3 >= r4 ) goto label$d0a53a9_13_23;
	r5 = r3;
	++r3;
	r7 = 0;
	if( r7 >= r5 ) goto label$d0a53a9_13_15;
	if( r1 == NULL ) hl_null_access();
	r6 = 44;
	StringBuf_addChar(r1,r6);
	label$d0a53a9_13_15:
	r8 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r7 = 2;
	r7 = r5 << r7;
	r6 = *(int*)(r8 + r7);
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r6;
	StringBuf_add(r1,((vdynamic*)r9));
	goto label$d0a53a9_13_6;
	label$d0a53a9_13_23:
	if( r1 == NULL ) hl_null_access();
	r3 = 93;
	StringBuf_addChar(r1,r3);
	r10 = StringBuf_toString(r1);
	return r10;
}

void hl_types_ArrayBytes_Int_unshift(hl__types__ArrayBytes_Int r0,int r1) {
	vbyte *r5, *r6, *r7, *r8, *r9;
	int r3, r4, r10, r11, r12;
	r3 = r0->length;
	r4 = r0->size;
	if( r3 != r4 ) goto label$d0a53a9_14_6;
	r3 = r0->length;
	hl_types_ArrayBytes_Int___expand(r0,r3);
	goto label$d0a53a9_14_9;
	label$d0a53a9_14_6:
	r3 = r0->length;
	++r3;
	r0->length = r3;
	label$d0a53a9_14_9:
	r5 = r0->bytes;
	r6 = r0->bytes;
	r3 = 1;
	r4 = 2;
	r3 = r3 << r4;
	r7 = r0->bytes;
	r9 = r0->bytes;
	r10 = 0;
	r11 = r0->length;
	r12 = 1;
	r11 = r11 - r12;
	r12 = 2;
	r11 = r11 << r12;
	hl_bytes_blit(r5,r3,r9,r10,r11);
	r8 = r0->bytes;
	r4 = 0;
	r11 = 2;
	r11 = r4 << r11;
	*(int*)(r8 + r11) = r1;
	return;
}

void hl_types_ArrayBytes_Int_insert(hl__types__ArrayBytes_Int r0,int r1,int r2) {
	vbyte *r6, *r7, *r8, *r9, *r11, *r12;
	int r4, r5, r10, r13, r14;
	r5 = 0;
	if( r1 >= r5 ) goto label$d0a53a9_15_10;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$d0a53a9_15_9;
	r4 = 0;
	r1 = r4;
	label$d0a53a9_15_9:
	goto label$d0a53a9_15_14;
	label$d0a53a9_15_10:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$d0a53a9_15_14;
	r4 = r0->length;
	r1 = r4;
	label$d0a53a9_15_14:
	r4 = r0->length;
	r5 = r0->size;
	if( r4 != r5 ) goto label$d0a53a9_15_20;
	r4 = r0->length;
	hl_types_ArrayBytes_Int___expand(r0,r4);
	goto label$d0a53a9_15_23;
	label$d0a53a9_15_20:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$d0a53a9_15_23:
	r6 = r0->bytes;
	r7 = r0->bytes;
	r5 = 1;
	r4 = r1 + r5;
	r5 = 2;
	r4 = r4 << r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r10 = 2;
	r5 = r1 << r10;
	r11 = r0->bytes;
	r13 = r0->length;
	r13 = r13 - r1;
	r14 = 1;
	r13 = r13 - r14;
	r14 = 2;
	r13 = r13 << r14;
	hl_bytes_blit(r6,r4,r8,r5,r13);
	r12 = r0->bytes;
	r13 = 2;
	r13 = r1 << r13;
	*(int*)(r12 + r13) = r2;
	return;
}

bool hl_types_ArrayBytes_Int_contains(hl__types__ArrayBytes_Int r0,int r1) {
	bool r2;
	vdynamic *r4;
	int r3, r5;
	r4 = NULL;
	r3 = hl_types_ArrayBytes_Int_indexOf(r0,r1,r4);
	r5 = -1;
	if( r3 != r5 ) goto label$d0a53a9_16_6;
	r2 = false;
	goto label$d0a53a9_16_7;
	label$d0a53a9_16_6:
	r2 = true;
	label$d0a53a9_16_7:
	return r2;
}

bool hl_types_ArrayBytes_Int_remove(hl__types__ArrayBytes_Int r0,int r1) {
	bool r7;
	vdynamic *r3;
	vbyte *r8, *r9, *r10, *r11, *r13;
	int r2, r5, r6, r12, r14, r15;
	r3 = NULL;
	r2 = hl_types_ArrayBytes_Int_indexOf(r0,r1,r3);
	r6 = 0;
	if( r2 >= r6 ) goto label$d0a53a9_17_6;
	r7 = false;
	return r7;
	label$d0a53a9_17_6:
	r5 = r0->length;
	--r5;
	r0->length = r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r6 = 2;
	r5 = r2 << r6;
	r10 = r0->bytes;
	r11 = r0->bytes;
	r12 = 1;
	r6 = r2 + r12;
	r12 = 2;
	r6 = r6 << r12;
	r13 = r0->bytes;
	r14 = r0->length;
	r14 = r14 - r2;
	r15 = 2;
	r14 = r14 << r15;
	hl_bytes_blit(r8,r5,r10,r6,r14);
	r7 = true;
	return r7;
}

int hl_types_ArrayBytes_Int_indexOf(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	vbyte *r8;
	int r3, r4, r5, r6, r7, r9;
	if( r2 ) goto label$d0a53a9_18_3;
	r3 = 0;
	goto label$d0a53a9_18_4;
	label$d0a53a9_18_3:
	r3 = r2 ? r2->v.i : 0;
	label$d0a53a9_18_4:
	r5 = 0;
	if( r3 >= r5 ) goto label$d0a53a9_18_13;
	r5 = r0->length;
	r4 = r3 + r5;
	r3 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$d0a53a9_18_13;
	r4 = 0;
	r3 = r4;
	label$d0a53a9_18_13:
	r4 = r3;
	r5 = r0->length;
	label$d0a53a9_18_15:
	if( r4 >= r5 ) goto label$d0a53a9_18_26;
	r6 = r4;
	++r4;
	r8 = r0->bytes;
	r9 = 2;
	r9 = r6 << r9;
	r7 = *(int*)(r8 + r9);
	if( r7 != r1 ) goto label$d0a53a9_18_25;
	return r6;
	label$d0a53a9_18_25:
	goto label$d0a53a9_18_15;
	label$d0a53a9_18_26:
	r4 = -1;
	return r4;
}

int hl_types_ArrayBytes_Int_lastIndexOf(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	vbyte *r7;
	int r3, r4, r5, r6;
	r3 = r0->length;
	if( !r2 ) goto label$d0a53a9_19_4;
	r4 = r2 ? r2->v.i : 0;
	goto label$d0a53a9_19_6;
	label$d0a53a9_19_4:
	r5 = 1;
	r4 = r3 - r5;
	label$d0a53a9_19_6:
	if( r4 < r3 ) goto label$d0a53a9_19_11;
	r6 = 1;
	r5 = r3 - r6;
	r4 = r5;
	goto label$d0a53a9_19_15;
	label$d0a53a9_19_11:
	r6 = 0;
	if( r4 >= r6 ) goto label$d0a53a9_19_15;
	r5 = r4 + r3;
	r4 = r5;
	label$d0a53a9_19_15:
	r6 = 0;
	if( r4 < r6 ) goto label$d0a53a9_19_26;
	r7 = r0->bytes;
	r6 = 2;
	r6 = r4 << r6;
	r5 = *(int*)(r7 + r6);
	if( r5 != r1 ) goto label$d0a53a9_19_24;
	return r4;
	label$d0a53a9_19_24:
	--r4;
	goto label$d0a53a9_19_15;
	label$d0a53a9_19_26:
	r5 = -1;
	return r5;
}

hl__types__ArrayBytes_Int hl_types_ArrayBytes_Int_copy(hl__types__ArrayBytes_Int r0) {
	hl__types__ArrayBytes_Int r1;
	vbyte *r4, *r5, *r7, *r8, *r9;
	int r3, r6, r10, r11;
	r1 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r1);
	r3 = r0->length;
	r1->size = r3;
	r1->length = r3;
	r4 = r0->bytes;
	r3 = r0->length;
	r6 = 2;
	r3 = r3 << r6;
	r5 = hl_alloc_bytes(r3);
	r1->bytes = r5;
	r7 = r0->bytes;
	r8 = r1->bytes;
	r3 = 0;
	r9 = r0->bytes;
	r6 = 0;
	r10 = r0->length;
	r11 = 2;
	r10 = r10 << r11;
	hl_bytes_blit(r8,r3,r9,r6,r10);
	return r1;
}

haxe__iterators__ArrayIterator hl_types_ArrayBytes_Int_iterator(hl__types__ArrayBytes_Int r0) {
	hl__types__BytesIterator_Int r1;
	r1 = (hl__types__BytesIterator_Int)hl_alloc_obj(&t$hl_types_BytesIterator_Int);
	hl_types_BytesIterator_Int_new(r1,r0);
	return ((haxe__iterators__ArrayIterator)r1);
}

haxe__iterators__ArrayKeyValueIterator hl_types_ArrayBytes_Int_keyValueIterator(hl__types__ArrayBytes_Int r0) {
	hl__types__BytesKeyValueIterator_Int r1;
	r1 = (hl__types__BytesKeyValueIterator_Int)hl_alloc_obj(&t$hl_types_BytesKeyValueIterator_Int);
	hl_types_BytesKeyValueIterator_Int_new(r1,r0);
	return ((haxe__iterators__ArrayKeyValueIterator)r1);
}

hl__types__ArrayDyn hl_types_ArrayBytes_Int_map(hl__types__ArrayBytes_Int r0,vclosure* r1) {
	bool *r14;
	hl__types__ArrayObj r2;
	bool r13;
	hl__types__ArrayDyn r12;
	vdynamic *r10;
	vbyte *r9;
	varray *r8;
	int r4, r5, r6, r7, r11;
	r2 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r2);
	r4 = r0->length;
	r5 = 0;
	if( r5 >= r4 ) goto label$d0a53a9_23_9;
	r4 = r0->length;
	r5 = 1;
	r4 = r4 - r5;
	hl_types_ArrayObj___expand(r2,r4);
	label$d0a53a9_23_9:
	r4 = 0;
	r5 = r0->length;
	label$d0a53a9_23_11:
	if( r4 >= r5 ) goto label$d0a53a9_23_25;
	r6 = r4;
	++r4;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->array;
	r9 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r11 = 2;
	r11 = r6 << r11;
	r7 = *(int*)(r9 + r11);
	r10 = r1->hasValue ? ((vdynamic* (*)(vdynamic*,int))r1->fun)((vdynamic*)r1->value,r7) : ((vdynamic* (*)(int))r1->fun)(r7);
	((vdynamic**)(r8 + 1))[r6] = r10;
	goto label$d0a53a9_23_11;
	label$d0a53a9_23_25:
	r13 = true;
	r14 = &r13;
	r12 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r2),r14);
	return r12;
}

hl__types__ArrayBytes_Int hl_types_ArrayBytes_Int_filter(hl__types__ArrayBytes_Int r0,vclosure* r1) {
	bool r10;
	hl__types__ArrayBytes_Int r2;
	vbyte *r8;
	int r4, r5, r6, r7, r9;
	r2 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$d0a53a9_24_4:
	if( r4 >= r5 ) goto label$d0a53a9_24_18;
	r6 = r4;
	++r4;
	r8 = r0->bytes;
	r9 = 2;
	r9 = r6 << r9;
	r7 = *(int*)(r8 + r9);
	if( r1 == NULL ) hl_null_access();
	r10 = r1->hasValue ? ((bool (*)(vdynamic*,int))r1->fun)((vdynamic*)r1->value,r7) : ((bool (*)(int))r1->fun)(r7);
	if( !r10 ) goto label$d0a53a9_24_17;
	if( r2 == NULL ) hl_null_access();
	r9 = hl_types_ArrayBytes_Int_push(r2,r7);
	label$d0a53a9_24_17:
	goto label$d0a53a9_24_4;
	label$d0a53a9_24_18:
	return r2;
}

void hl_types_ArrayBytes_Int_resize(hl__types__ArrayBytes_Int r0,int r1) {
	vbyte *r5, *r6, *r7;
	int r3, r4, r8, r9;
	r3 = r0->length;
	if( r3 >= r1 ) goto label$d0a53a9_25_6;
	r4 = 1;
	r3 = r1 - r4;
	hl_types_ArrayBytes_Int___expand(r0,r3);
	goto label$d0a53a9_25_20;
	label$d0a53a9_25_6:
	r3 = r0->length;
	if( r1 >= r3 ) goto label$d0a53a9_25_20;
	r5 = r0->bytes;
	r6 = r0->bytes;
	r4 = 2;
	r3 = r1 << r4;
	r7 = r0->bytes;
	r8 = r0->length;
	r8 = r8 - r1;
	r9 = 2;
	r8 = r8 << r9;
	r9 = 0;
	hl_bytes_fill(r5,r3,r8,r9);
	r0->length = r1;
	label$d0a53a9_25_20:
	return;
}

vdynamic* hl_types_ArrayBytes_Int_getDyn(hl__types__ArrayBytes_Int r0,int r1) {
	vdynamic *r5;
	vbyte *r4;
	int r2, r3;
	r3 = r0->length;
	if( r1 < r3 ) goto label$d0a53a9_26_6;
	r4 = r0->bytes;
	r2 = 0;
	r5 = hl_alloc_dynamic(&t$_i32);
	r5->v.i = r2;
	return r5;
	label$d0a53a9_26_6:
	r4 = r0->bytes;
	r3 = 2;
	r3 = r1 << r3;
	r2 = *(int*)(r4 + r3);
	r5 = hl_alloc_dynamic(&t$_i32);
	r5->v.i = r2;
	return r5;
}

void hl_types_ArrayBytes_Int_setDyn(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	vbyte *r6;
	int r4, r5, r7;
	r5 = r0->length;
	if( r1 < r5 ) goto label$d0a53a9_27_3;
	hl_types_ArrayBytes_Int___expand(r0,r1);
	label$d0a53a9_27_3:
	r6 = r0->bytes;
	r4 = (int)hl_dyn_casti(&r2,&t$_dyn,&t$_i32);
	r7 = 2;
	r7 = r1 << r7;
	*(int*)(r6 + r7) = r4;
	return;
}

int hl_types_ArrayBytes_Int_pushDyn(hl__types__ArrayBytes_Int r0,vdynamic* r1) {
	int r2;
	r2 = (int)hl_dyn_casti(&r1,&t$_dyn,&t$_i32);
	r2 = hl_types_ArrayBytes_Int_push(r0,r2);
	return r2;
}

vdynamic* hl_types_ArrayBytes_Int_popDyn(hl__types__ArrayBytes_Int r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_Int_pop(r0);
	return ((vdynamic*)r1);
}

vdynamic* hl_types_ArrayBytes_Int_shiftDyn(hl__types__ArrayBytes_Int r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_Int_shift(r0);
	return ((vdynamic*)r1);
}

void hl_types_ArrayBytes_Int_unshiftDyn(hl__types__ArrayBytes_Int r0,vdynamic* r1) {
	int r3;
	r3 = (int)hl_dyn_casti(&r1,&t$_dyn,&t$_i32);
	hl_types_ArrayBytes_Int_unshift(r0,r3);
	return;
}

void hl_types_ArrayBytes_Int_insertDyn(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	int r4;
	r4 = (int)hl_dyn_casti(&r2,&t$_dyn,&t$_i32);
	hl_types_ArrayBytes_Int_insert(r0,r1,r4);
	return;
}

bool hl_types_ArrayBytes_Int_containsDyn(hl__types__ArrayBytes_Int r0,vdynamic* r1) {
	bool r2;
	int r3;
	r3 = (int)hl_dyn_casti(&r1,&t$_dyn,&t$_i32);
	r2 = hl_types_ArrayBytes_Int_contains(r0,r3);
	return r2;
}

bool hl_types_ArrayBytes_Int_removeDyn(hl__types__ArrayBytes_Int r0,vdynamic* r1) {
	bool r2;
	int r3;
	r3 = (int)hl_dyn_casti(&r1,&t$_dyn,&t$_i32);
	r2 = hl_types_ArrayBytes_Int_remove(r0,r3);
	return r2;
}

void hl_types_ArrayBytes_Int_sortDyn(hl__types__ArrayBytes_Int r0,vclosure* r1) {
	vclosure *r3;
	if( r1 ) goto label$d0a53a9_35_3;
	r3 = NULL;
	goto label$d0a53a9_35_4;
	label$d0a53a9_35_3:
	r3 = hl_alloc_closure_ptr(&t$fun_3a8cb27,hl_types_ArrayBytes_Int_sortDyn__$1,r1);
	label$d0a53a9_35_4:
	hl_types_ArrayBytes_Int_sort(r0,r3);
	return;
}

void hl_types_ArrayBytes_Int___expand(hl__types__ArrayBytes_Int r0,int r1) {
	String r6, r9;
	int *r7;
	vdynamic *r5;
	vbyte *r8, *r12, *r13, *r14, *r15;
	int r3, r4, r10, r11, r16, r17;
	r4 = 0;
	if( r1 >= r4 ) goto label$d0a53a9_36_10;
	r6 = (String)s$Invalid_array_index_;
	r3 = r1;
	r7 = &r3;
	r8 = hl_itos(r3,r7);
	r9 = String___alloc__(r8,r3);
	r6 = String___add__(r6,r9);
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$d0a53a9_36_10:
	r4 = 1;
	r3 = r1 + r4;
	r10 = r0->size;
	if( r10 >= r3 ) goto label$d0a53a9_36_41;
	r4 = r0->size;
	r10 = 3;
	r4 = r4 * r10;
	r10 = 1;
	r4 = r4 >> r10;
	if( r4 >= r3 ) goto label$d0a53a9_36_21;
	r4 = r3;
	label$d0a53a9_36_21:
	r8 = r0->bytes;
	r11 = 2;
	r10 = r4 << r11;
	r12 = hl_alloc_bytes(r10);
	r13 = r0->bytes;
	r10 = r0->length;
	r11 = 2;
	r10 = r10 << r11;
	r11 = 0;
	r15 = r0->bytes;
	r16 = 0;
	hl_bytes_blit(r12,r11,r15,r16,r10);
	r14 = r0->bytes;
	r17 = 2;
	r16 = r4 << r17;
	r16 = r16 - r10;
	r17 = 0;
	hl_bytes_fill(r12,r10,r16,r17);
	r0->bytes = r12;
	r0->size = r4;
	label$d0a53a9_36_41:
	r0->length = r3;
	return;
}

