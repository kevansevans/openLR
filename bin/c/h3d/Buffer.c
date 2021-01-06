﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/Buffer.h>
#include <h3d/BufferFlag.h>
#include <h3d/impl/MemoryManager.h>
#include <h3d/Engine.h>
extern h3d__$Buffer g$_h3d_Buffer;
extern h3d__$Engine g$_h3d_Engine;
void h3d_impl_MemoryManager_allocBuffer(h3d__impl__MemoryManager,h3d__Buffer,int);
void h3d_impl_ManagedBuffer_freeBuffer(h3d__impl__ManagedBuffer,h3d__Buffer);
extern String s$Too_many_vertices;
vdynamic* haxe_Exception_thrown(vdynamic*);
void h3d_impl_ManagedBuffer_uploadVertexBuffer(h3d__impl__ManagedBuffer,int,int,hl__types__ArrayBytes_hl_F32,int*);
extern hl_type t$h3d_Buffer;

void h3d_Buffer_new(h3d__Buffer r0,int r1,int r2,hl__types__ArrayObj r3) {
	venum *r10;
	h3d__$Buffer r4;
	h3d__Engine r15;
	h3d__$Engine r16;
	h3d__impl__MemoryManager r14;
	vdynamic *r11;
	varray *r12;
	int r5, r6, r8, r9, r13;
	r4 = (h3d__$Buffer)g$_h3d_Buffer;
	r5 = r4->GUID;
	r6 = r5;
	++r5;
	r4->GUID = r5;
	r0->id = r6;
	r0->vertices = r1;
	r5 = 0;
	r0->flags = r5;
	if( !r3 ) goto label$e040f64_1_31;
	r6 = 0;
	label$e040f64_1_11:
	if( r3 == NULL ) hl_null_access();
	r9 = r3->length;
	if( r6 >= r9 ) goto label$e040f64_1_31;
	r9 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r9) ) goto label$e040f64_1_19;
	r10 = NULL;
	goto label$e040f64_1_22;
	label$e040f64_1_19:
	r12 = r3->array;
	r11 = ((vdynamic**)(r12 + 1))[r6];
	r10 = (venum*)r11;
	label$e040f64_1_22:
	++r6;
	r8 = r0->flags;
	r9 = 1;
	if( r10 == NULL ) hl_null_access();
	r13 = HL__ENUM_INDEX__(r10);
	r9 = r9 << r13;
	r8 = r8 | r9;
	r0->flags = r8;
	goto label$e040f64_1_11;
	label$e040f64_1_31:
	r6 = r0->flags;
	r8 = 32;
	r6 = r6 & r8;
	r8 = 0;
	if( r6 != r8 ) goto label$e040f64_1_42;
	r16 = (h3d__$Engine)g$_h3d_Engine;
	r15 = r16->CURRENT;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->mem;
	if( r14 == NULL ) hl_null_access();
	h3d_impl_MemoryManager_allocBuffer(r14,r0,r2);
	label$e040f64_1_42:
	return;
}

bool h3d_Buffer_isDisposed(h3d__Buffer r0) {
	vvirtual *r3, *r4;
	bool r2;
	h3d__impl__ManagedBuffer r1;
	r1 = r0->buffer;
	if( !r1 ) goto label$e040f64_2_11;
	r1 = r0->buffer;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->vbuf;
	r4 = NULL;
	if( r3 == r4 || (r3 && r4 && r3->value && r4->value && r3->value == r4->value) ) goto label$e040f64_2_9;
	r2 = false;
	goto label$e040f64_2_10;
	label$e040f64_2_9:
	r2 = true;
	label$e040f64_2_10:
	return r2;
	label$e040f64_2_11:
	r2 = true;
	return r2;
}

void h3d_Buffer_dispose(h3d__Buffer r0) {
	h3d__Buffer r3;
	h3d__impl__ManagedBuffer r2;
	r2 = r0->buffer;
	if( !r2 ) goto label$e040f64_3_12;
	r2 = r0->buffer;
	if( r2 == NULL ) hl_null_access();
	h3d_impl_ManagedBuffer_freeBuffer(r2,r0);
	r2 = NULL;
	r0->buffer = r2;
	r3 = r0->next;
	if( !r3 ) goto label$e040f64_3_12;
	r3 = r0->next;
	if( r3 == NULL ) hl_null_access();
	h3d_Buffer_dispose(r3);
	label$e040f64_3_12:
	return;
}

int h3d_Buffer_totalVertices(h3d__Buffer r0) {
	h3d__Buffer r2, r3;
	int r1, r4, r5;
	r1 = 0;
	r2 = r0;
	label$e040f64_4_2:
	if( !r2 ) goto label$e040f64_4_11;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->vertices;
	r4 = r1 + r5;
	r1 = r4;
	r3 = r2->next;
	r2 = r3;
	goto label$e040f64_4_2;
	label$e040f64_4_11:
	return r1;
}

void h3d_Buffer_uploadVector(h3d__Buffer r0,hl__types__ArrayBytes_hl_F32 r1,int r2,int r3,int* r4) {
	String r12;
	h3d__Buffer r6, r8;
	vdynamic *r11;
	h3d__impl__ManagedBuffer r13;
	int r5, r9, r10, r14, r15, r16;
	if( r4 ) goto label$e040f64_5_3;
	r5 = 0;
	goto label$e040f64_5_4;
	label$e040f64_5_3:
	r5 = *r4;
	label$e040f64_5_4:
	r6 = r0;
	label$e040f64_5_5:
	if( !r6 ) goto label$e040f64_5_16;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->vertices;
	if( r5 < r10 ) goto label$e040f64_5_16;
	r10 = r6->vertices;
	r9 = r5 - r10;
	r5 = r9;
	r8 = r6->next;
	r6 = r8;
	goto label$e040f64_5_5;
	label$e040f64_5_16:
	r10 = 0;
	if( r10 >= r3 ) goto label$e040f64_5_51;
	if( r6 ) goto label$e040f64_5_23;
	r12 = (String)s$Too_many_vertices;
	r11 = haxe_Exception_thrown(((vdynamic*)r12));
	hl_throw((vdynamic*)r11);
	label$e040f64_5_23:
	r9 = r3 + r5;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->vertices;
	if( r10 >= r9 ) goto label$e040f64_5_30;
	r9 = r6->vertices;
	r9 = r9 - r5;
	goto label$e040f64_5_31;
	label$e040f64_5_30:
	r9 = r3;
	label$e040f64_5_31:
	r13 = r6->buffer;
	if( r13 == NULL ) hl_null_access();
	r10 = r6->position;
	r10 = r10 + r5;
	r15 = r2;
	r4 = &r15;
	h3d_impl_ManagedBuffer_uploadVertexBuffer(r13,r10,r9,r1,r4);
	r10 = 0;
	r5 = r10;
	r13 = r0->buffer;
	if( r13 == NULL ) hl_null_access();
	r16 = r13->stride;
	r14 = r9 * r16;
	r10 = r2 + r14;
	r2 = r10;
	r10 = r3 - r9;
	r3 = r10;
	r8 = r6->next;
	r6 = r8;
	goto label$e040f64_5_16;
	label$e040f64_5_51:
	return;
}

h3d__Buffer h3d_Buffer_ofFloats(hl__types__ArrayBytes_hl_F32 r0,int r1,hl__types__ArrayObj r2) {
	h3d__Buffer r7;
	double r3, r5;
	int *r9;
	int r4, r8;
	if( r0 == NULL ) hl_null_access();
	r4 = r0->length;
	r3 = (double)r4;
	r5 = (double)r1;
	r3 = r3 / r5;
	r4 = (int)r3;
	r7 = (h3d__Buffer)hl_alloc_obj(&t$h3d_Buffer);
	h3d_Buffer_new(r7,r4,r1,r2);
	r8 = 0;
	r9 = NULL;
	h3d_Buffer_uploadVector(r7,r0,r8,r4,r9);
	return r7;
}

h3d__Buffer h3d_Buffer_ofSubFloats(hl__types__ArrayBytes_hl_F32 r0,int r1,int r2,hl__types__ArrayObj r3) {
	h3d__Buffer r4;
	int *r7;
	int r5;
	r4 = (h3d__Buffer)hl_alloc_obj(&t$h3d_Buffer);
	h3d_Buffer_new(r4,r2,r1,r3);
	r5 = 0;
	r7 = NULL;
	h3d_Buffer_uploadVector(r4,r0,r5,r2,r7);
	return r4;
}

