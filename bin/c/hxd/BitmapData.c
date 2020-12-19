﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/BitmapData.h>
extern hl_type t$hxd_BitmapInnerDataImpl;
void hxd_BitmapInnerDataImpl_new(hxd__BitmapInnerDataImpl);
#include <hl/natives.h>
#include <haxe/io/Bytes.h>
#include <hxd/Pixels.h>
#include <hxd/PixelFormat.h>
haxe__io__Bytes haxe_io_Bytes_alloc(int);
void haxe_io_Bytes_setInt32(haxe__io__Bytes,int,int);
extern hl_type t$hxd_Pixels;
extern venum* g$hxd_PixelFormat_BGRA;
void hxd_Pixels_new(hxd__Pixels,int,int,haxe__io__Bytes,venum*,int*);
extern String s$Invalid_pixels_size;
vdynamic* haxe_Exception_thrown(vdynamic*);
void hxd_Pixels_setFlip(hxd__Pixels,bool);
void hxd_Pixels_convert(hxd__Pixels,venum*);
int haxe_io_Bytes_getInt32(haxe__io__Bytes,int);

void hxd_BitmapData_new(hxd__BitmapData r0,int r1,int r2) {
	hxd__BitmapInnerDataImpl r6;
	vbyte *r7, *r8;
	int r4, r5, r9;
	r5 = -101;
	if( r1 != r5 ) goto label$c088fd5_1_4;
	r5 = -102;
	if( r2 == r5 ) goto label$c088fd5_1_29;
	label$c088fd5_1_4:
	r6 = (hxd__BitmapInnerDataImpl)hl_alloc_obj(&t$hxd_BitmapInnerDataImpl);
	hxd_BitmapInnerDataImpl_new(r6);
	r0->data = r6;
	r4 = r1 * r2;
	r5 = 4;
	r4 = r4 * r5;
	r7 = hl_alloc_bytes(r4);
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r6->pixels = r7;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->pixels;
	r4 = 0;
	r5 = r1 * r2;
	r9 = 4;
	r5 = r5 * r9;
	r9 = 0;
	hl_bytes_fill(r8,r4,r5,r9);
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r6->width = r1;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r6->height = r2;
	label$c088fd5_1_29:
	return;
}

hxd__Pixels hxd_BitmapData_getPixels(hxd__BitmapData r0) {
	hxd__Pixels r11;
	venum *r12;
	haxe__io__Bytes r1;
	hxd__BitmapInnerDataImpl r3;
	int *r13;
	vbyte *r8;
	int r2, r4, r6, r7, r9, r10;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->width;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->height;
	r2 = r2 * r4;
	r4 = 4;
	r2 = r2 * r4;
	r1 = haxe_io_Bytes_alloc(r2);
	r2 = 0;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->width;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->height;
	r4 = r4 * r6;
	label$c088fd5_2_18:
	if( r2 >= r4 ) goto label$c088fd5_2_33;
	r6 = r2;
	++r2;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->pixels;
	if( r1 == NULL ) hl_null_access();
	r9 = 2;
	r7 = r6 << r9;
	r10 = 2;
	r10 = r6 << r10;
	r9 = *(int*)(r8 + r10);
	haxe_io_Bytes_setInt32(r1,r7,r9);
	goto label$c088fd5_2_18;
	label$c088fd5_2_33:
	r11 = (hxd__Pixels)hl_alloc_obj(&t$hxd_Pixels);
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->width;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->height;
	r12 = (venum*)g$hxd_PixelFormat_BGRA;
	r13 = NULL;
	hxd_Pixels_new(r11,r2,r4,r1,r12,r13);
	return r11;
}

void hxd_BitmapData_setPixels(hxd__BitmapData r0,hxd__Pixels r1) {
	String r7;
	venum *r9;
	haxe__io__Bytes r10;
	bool r8;
	hxd__BitmapInnerDataImpl r5;
	vdynamic *r6;
	vbyte *r13;
	int r3, r4, r11, r12, r14, r15;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->width;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->width;
	if( r3 != r4 ) goto label$c088fd5_3_11;
	r3 = r1->height;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->height;
	if( r3 == r4 ) goto label$c088fd5_3_14;
	label$c088fd5_3_11:
	r7 = (String)s$Invalid_pixels_size;
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$c088fd5_3_14:
	r8 = false;
	hxd_Pixels_setFlip(r1,r8);
	r9 = (venum*)g$hxd_PixelFormat_BGRA;
	hxd_Pixels_convert(r1,r9);
	r10 = r1->bytes;
	r3 = 0;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->width;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r11 = r5->height;
	r4 = r4 * r11;
	label$c088fd5_3_27:
	if( r3 >= r4 ) goto label$c088fd5_3_42;
	r11 = r3;
	++r3;
	r5 = r0->data;
	if( r5 == NULL ) hl_null_access();
	r13 = r5->pixels;
	if( r10 == NULL ) hl_null_access();
	r14 = 2;
	r12 = r11 << r14;
	r12 = haxe_io_Bytes_getInt32(r10,r12);
	r15 = 2;
	r15 = r11 << r15;
	*(int*)(r13 + r15) = r12;
	goto label$c088fd5_3_27;
	label$c088fd5_3_42:
	return;
}

