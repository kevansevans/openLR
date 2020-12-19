﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/physics/Stick.h>
#include <h2d/col/Point.h>
#include <hl/natives.h>

void components_physics_Stick_new(components__physics__Stick r0,components__physics__RidePoint r1,components__physics__RidePoint r2) {
	h2d__col__Point r5;
	components__physics__RidePoint r3;
	double r4, r6, r7;
	r0->a = r1;
	r0->b = r2;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->pos;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->x;
	r3 = r0->b;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->pos;
	if( r5 == NULL ) hl_null_access();
	r6 = r5->x;
	r4 = r4 - r6;
	r6 = 2.;
	r4 = hl_math_pow(r4,r6);
	r3 = r0->a;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->pos;
	if( r5 == NULL ) hl_null_access();
	r6 = r5->y;
	r3 = r0->b;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->pos;
	if( r5 == NULL ) hl_null_access();
	r7 = r5->y;
	r6 = r6 - r7;
	r7 = 2.;
	r6 = hl_math_pow(r6,r7);
	r4 = r4 + r6;
	r4 = hl_math_sqrt(r4);
	r0->restLength = r4;
	return;
}

bool components_physics_Stick_satisfy(components__physics__Stick r0,vdynamic* r1) {
	bool r11;
	h2d__col__Point r3;
	components__physics__RidePoint r4;
	double r2, r5, r6, r7, r8, r9, r10;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->x;
	r4 = r0->b;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->x;
	r2 = r2 - r5;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->y;
	r4 = r0->b;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->y;
	r5 = r5 - r6;
	r7 = 2.;
	r6 = hl_math_pow(r2,r7);
	r8 = 2.;
	r7 = hl_math_pow(r5,r8);
	r6 = r6 + r7;
	r6 = hl_math_sqrt(r6);
	r8 = 0.;
	if( r6 != r8 ) goto label$3c34fd1_2_32;
	r7 = 0.;
	goto label$3c34fd1_2_37;
	label$3c34fd1_2_32:
	r8 = r0->restLength;
	r7 = r6 - r8;
	r7 = r7 / r6;
	r8 = 0.5;
	r7 = r7 * r8;
	label$3c34fd1_2_37:
	r8 = r2 * r7;
	r9 = r5 * r7;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r10 = r3->x;
	r10 = r10 - r8;
	r3->x = r10;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r10 = r3->y;
	r10 = r10 - r9;
	r3->y = r10;
	r4 = r0->b;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r10 = r3->x;
	r10 = r10 + r8;
	r3->x = r10;
	r4 = r0->b;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r10 = r3->y;
	r10 = r10 + r9;
	r3->y = r10;
	r11 = r1 ? r1->v.b : 0;
	return r11;
}

