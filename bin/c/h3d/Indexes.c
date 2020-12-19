﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/Indexes.h>
#include <h3d/Engine.h>
extern h3d__$Engine g$_h3d_Engine;
void h3d_impl_MemoryManager_allocIndexes(h3d__impl__MemoryManager,h3d__Indexes);
#include <h3d/impl/Driver.h>
void h3d_impl_MemoryManager_deleteIndexes(h3d__impl__MemoryManager,h3d__Indexes);
extern hl_type t$h3d_Indexes;

void h3d_Indexes_new(h3d__Indexes r0,int r1,bool* r2) {
	bool r3;
	h3d__Engine r5;
	h3d__$Engine r6;
	h3d__impl__MemoryManager r4;
	if( r2 ) goto label$366cc49_1_3;
	r3 = false;
	goto label$366cc49_1_4;
	label$366cc49_1_3:
	r3 = *r2;
	label$366cc49_1_4:
	r6 = (h3d__$Engine)g$_h3d_Engine;
	r5 = r6->CURRENT;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->mem;
	r0->mem = r4;
	r0->count = r1;
	r0->is32 = r3;
	r4 = r0->mem;
	if( r4 == NULL ) hl_null_access();
	h3d_impl_MemoryManager_allocIndexes(r4,r0);
	return;
}

bool h3d_Indexes_isDisposed(h3d__Indexes r0) {
	vvirtual *r2, *r3;
	bool r1;
	r2 = r0->ibuf;
	r3 = NULL;
	if( r2 == r3 || (r2 && r3 && r2->value && r3->value && r2->value == r3->value) ) goto label$366cc49_2_5;
	r1 = false;
	goto label$366cc49_2_6;
	label$366cc49_2_5:
	r1 = true;
	label$366cc49_2_6:
	return r1;
}

void h3d_Indexes_upload(h3d__Indexes r0,hl__types__ArrayBytes_hl_UI16 r1,int r2,int r3,int* r4) {
	vvirtual *r9;
	h3d__impl__MemoryManager r8;
	h3d__impl__Driver r7;
	int r5;
	if( r4 ) goto label$366cc49_3_3;
	r5 = 0;
	goto label$366cc49_3_4;
	label$366cc49_3_3:
	r5 = *r4;
	label$366cc49_3_4:
	r8 = r0->mem;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->driver;
	if( r7 == NULL ) hl_null_access();
	r9 = r0->ibuf;
	((void (*)(h3d__impl__Driver,vvirtual*,int,int,hl__types__ArrayBytes_hl_UI16,int))r7->$type->vobj_proto[29])(r7,r9,r2,r3,r1,r5);
	return;
}

void h3d_Indexes_dispose(h3d__Indexes r0) {
	vvirtual *r2;
	h3d__impl__MemoryManager r3;
	r2 = r0->ibuf;
	if( !r2 ) goto label$366cc49_4_5;
	r3 = r0->mem;
	if( r3 == NULL ) hl_null_access();
	h3d_impl_MemoryManager_deleteIndexes(r3,r0);
	label$366cc49_4_5:
	return;
}

h3d__Indexes h3d_Indexes_alloc(hl__types__ArrayBytes_hl_UI16 r0,int* r1,int* r2) {
	bool *r9;
	h3d__Indexes r8;
	int r3, r4, r6, r7;
	if( r1 ) goto label$366cc49_5_3;
	r3 = 0;
	goto label$366cc49_5_4;
	label$366cc49_5_3:
	r3 = *r1;
	label$366cc49_5_4:
	if( r2 ) goto label$366cc49_5_7;
	r4 = -1;
	goto label$366cc49_5_8;
	label$366cc49_5_7:
	r4 = *r2;
	label$366cc49_5_8:
	r7 = 0;
	if( r4 >= r7 ) goto label$366cc49_5_13;
	if( r0 == NULL ) hl_null_access();
	r6 = r0->length;
	r4 = r6;
	label$366cc49_5_13:
	r8 = (h3d__Indexes)hl_alloc_obj(&t$h3d_Indexes);
	r9 = NULL;
	h3d_Indexes_new(r8,r4,r9);
	r6 = 0;
	r1 = NULL;
	h3d_Indexes_upload(r8,r0,r6,r4,r1);
	return r8;
}

