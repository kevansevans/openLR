﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hl/BaseType.h>
#include <hl/natives.h>

bool hl_BaseType_check(hl__BaseType r0,vdynamic* r1) {
	hl_type *r2, *r5, *r9;
	bool r8;
	vdynamic *r3;
	varray *r7;
	int r4, r6, r10;
	r2 = r1 ? ((vdynamic*)r1)->t : &hlt_void;
	r4 = r2->kind;
	r6 = 15;
	if( r4 != r6 ) goto label$75fa7c8_1_8;
	r3 = hl_get_virtual_value(r1);
	if( !r3 ) goto label$75fa7c8_1_8;
	r5 = r3 ? ((vdynamic*)r3)->t : &hlt_void;
	r2 = r5;
	label$75fa7c8_1_8:
	r7 = r0->__implementedBy__;
	if( r7 ) goto label$75fa7c8_1_17;
	r9 = r0->__type__;
	r8 = hl_type_safe_cast(r2,r9);
	if( !r8 ) goto label$75fa7c8_1_15;
	r8 = true;
	return r8;
	label$75fa7c8_1_15:
	r8 = false;
	return r8;
	label$75fa7c8_1_17:
	r4 = 0;
	r7 = r0->__implementedBy__;
	label$75fa7c8_1_19:
	r10 = r7->size;
	if( r4 >= r10 ) goto label$75fa7c8_1_29;
	r5 = ((hl_type**)(r7 + 1))[r4];
	++r4;
	r8 = hl_type_safe_cast(r2,r5);
	if( !r8 ) goto label$75fa7c8_1_28;
	r8 = true;
	return r8;
	label$75fa7c8_1_28:
	goto label$75fa7c8_1_19;
	label$75fa7c8_1_29:
	r8 = false;
	return r8;
}

