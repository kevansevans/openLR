﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/prim/Primitive.h>
#include <h3d/col/Bounds.h>
extern String s$not_implemented_for_;
String Std_string(vdynamic*);
String String___add__(String,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <h3d/Engine.h>
extern String s$not_implemented;
#include <h3d/impl/MemoryManager.h>
bool h3d_Buffer_isDisposed(h3d__Buffer);
void h3d_Engine_renderBuffer(h3d__Engine,h3d__Buffer,h3d__Indexes,int,int*,int*);
void h3d_Engine_renderIndexed(h3d__Engine,h3d__Buffer,h3d__Indexes,int*,int*);
void h3d_Buffer_dispose(h3d__Buffer);
void h3d_Indexes_dispose(h3d__Indexes);
String h3d_prim_Primitive_toString(h3d__prim__Primitive);
#include <hl/types/ArrayObj.h>
hl__Class Type_getClass(vdynamic*);
String Type_getClassName(hl__Class);
extern String s$5058f1a;
hl__types__ArrayObj String_split(String,String);
vdynamic* hl_types_ArrayObj_pop(hl__types__ArrayObj);

void h3d_prim_Primitive_new(h3d__prim__Primitive r0) {
	int r1;
	r1 = 0;
	r0->refCount = r1;
	return;
}

h3d__col__Bounds h3d_prim_Primitive_getBounds(h3d__prim__Primitive r0) {
	String r2, r3;
	vdynamic *r1;
	r2 = (String)s$not_implemented_for_;
	r3 = Std_string(((vdynamic*)r0));
	r2 = String___add__(r2,r3);
	r1 = haxe_Exception_thrown(((vdynamic*)r2));
	hl_throw((vdynamic*)r1);
}

void h3d_prim_Primitive_incref(h3d__prim__Primitive r0) {
	int r1;
	r1 = r0->refCount;
	++r1;
	r0->refCount = r1;
	return;
}

void h3d_prim_Primitive_decref(h3d__prim__Primitive r0) {
	int r1, r2;
	r1 = r0->refCount;
	--r1;
	r0->refCount = r1;
	r1 = r0->refCount;
	r2 = 0;
	if( r2 < r1 ) goto label$324c01e_4_9;
	r1 = 0;
	r0->refCount = r1;
	((void (*)(h3d__prim__Primitive))r0->$type->vobj_proto[3])(r0);
	label$324c01e_4_9:
	return;
}

void h3d_prim_Primitive_alloc(h3d__prim__Primitive r0,h3d__Engine r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$not_implemented;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

void h3d_prim_Primitive_selectMaterial(h3d__prim__Primitive r0,int r1) {
	return;
}

void h3d_prim_Primitive_render(h3d__prim__Primitive r0,h3d__Engine r1) {
	bool r4;
	h3d__impl__MemoryManager r8;
	h3d__Buffer r3;
	int *r9, *r11;
	int r6, r7, r10, r12, r13;
	h3d__Indexes r5;
	r3 = r0->buffer;
	if( !r3 ) goto label$324c01e_7_6;
	r3 = r0->buffer;
	if( r3 == NULL ) hl_null_access();
	r4 = h3d_Buffer_isDisposed(r3);
	if( !r4 ) goto label$324c01e_7_7;
	label$324c01e_7_6:
	((void (*)(h3d__prim__Primitive,h3d__Engine))r0->$type->vobj_proto[1])(r0,r1);
	label$324c01e_7_7:
	r5 = r0->indexes;
	if( r5 ) goto label$324c01e_7_40;
	r3 = r0->buffer;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->flags;
	r7 = 4;
	r6 = r6 & r7;
	r7 = 0;
	if( r6 == r7 ) goto label$324c01e_7_28;
	if( r1 == NULL ) hl_null_access();
	r3 = r0->buffer;
	r8 = r1->mem;
	if( r8 == NULL ) hl_null_access();
	r5 = r8->quadIndexes;
	r6 = 2;
	r7 = 0;
	r9 = &r7;
	r10 = -1;
	r11 = &r10;
	h3d_Engine_renderBuffer(r1,r3,r5,r6,r9,r11);
	goto label$324c01e_7_39;
	label$324c01e_7_28:
	if( r1 == NULL ) hl_null_access();
	r3 = r0->buffer;
	r8 = r1->mem;
	if( r8 == NULL ) hl_null_access();
	r5 = r8->triIndexes;
	r6 = 3;
	r12 = 0;
	r9 = &r12;
	r13 = -1;
	r11 = &r13;
	h3d_Engine_renderBuffer(r1,r3,r5,r6,r9,r11);
	label$324c01e_7_39:
	goto label$324c01e_7_46;
	label$324c01e_7_40:
	if( r1 == NULL ) hl_null_access();
	r3 = r0->buffer;
	r5 = r0->indexes;
	r9 = NULL;
	r11 = NULL;
	h3d_Engine_renderIndexed(r1,r3,r5,r9,r11);
	label$324c01e_7_46:
	return;
}

void h3d_prim_Primitive_dispose(h3d__prim__Primitive r0) {
	h3d__Buffer r2;
	h3d__Indexes r3;
	r2 = r0->buffer;
	if( !r2 ) goto label$324c01e_8_7;
	r2 = r0->buffer;
	if( r2 == NULL ) hl_null_access();
	h3d_Buffer_dispose(r2);
	r2 = NULL;
	r0->buffer = r2;
	label$324c01e_8_7:
	r3 = r0->indexes;
	if( !r3 ) goto label$324c01e_8_14;
	r3 = r0->indexes;
	if( r3 == NULL ) hl_null_access();
	h3d_Indexes_dispose(r3);
	r3 = NULL;
	r0->indexes = r3;
	label$324c01e_8_14:
	return;
}

vbyte* h3d_prim_Primitive___string(h3d__prim__Primitive r0) {
	String r2;
	vbyte *r1;
	r2 = h3d_prim_Primitive_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String h3d_prim_Primitive_toString(h3d__prim__Primitive r0) {
	String r3, r5;
	hl__Class r4;
	hl__types__ArrayObj r2;
	vdynamic *r1;
	r4 = Type_getClass(((vdynamic*)r0));
	r3 = Type_getClassName(r4);
	if( r3 == NULL ) hl_null_access();
	r5 = (String)s$5058f1a;
	r2 = String_split(r3,r5);
	if( r2 == NULL ) hl_null_access();
	r1 = hl_types_ArrayObj_pop(r2);
	r3 = (String)r1;
	return r3;
}

