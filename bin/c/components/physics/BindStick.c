﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/physics/BindStick.h>
void components_physics_Stick_new(components__physics__Stick,components__physics__RidePoint,components__physics__RidePoint);
#include <h2d/col/Point.h>
#include <hl/natives.h>

void components_physics_BindStick_new(components__physics__BindStick r0,components__physics__RidePoint r1,components__physics__RidePoint r2,double r3) {
	double r5, r6;
	components_physics_Stick_new(((components__physics__Stick)r0),r1,r2);
	r6 = r0->restLength;
	r5 = r3 * r6;
	r6 = 0.5;
	r5 = r5 * r6;
	r0->endurance = r5;
	return;
}

bool components_physics_BindStick_satisfy(components__physics__BindStick r0,vdynamic* r1) {
	bool r10;
	h2d__col__Point r3;
	components__physics__RidePoint r4;
	double r2, r5, r6, r7, r8, r9, r11;
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
	if( r6 != r8 ) goto label$f8f83e5_2_32;
	r7 = 0.;
	goto label$f8f83e5_2_37;
	label$f8f83e5_2_32:
	r8 = r0->restLength;
	r7 = r6 - r8;
	r7 = r7 / r6;
	r8 = 0.5;
	r7 = r7 * r8;
	label$f8f83e5_2_37:
	r9 = r0->endurance;
	if( r9 < r7 ) goto label$f8f83e5_2_41;
	r10 = r1 ? r1->v.b : 0;
	if( !r10 ) goto label$f8f83e5_2_43;
	label$f8f83e5_2_41:
	r10 = true;
	return r10;
	label$f8f83e5_2_43:
	r8 = r2 * r7;
	r9 = r5 * r7;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r11 = r3->x;
	r11 = r11 - r8;
	r3->x = r11;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r11 = r3->y;
	r11 = r11 - r9;
	r3->y = r11;
	r4 = r0->b;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r11 = r3->x;
	r11 = r11 + r8;
	r3->x = r11;
	r4 = r0->b;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r11 = r3->y;
	r11 = r11 + r9;
	r3->y = r11;
	r10 = r1 ? r1->v.b : 0;
	return r10;
}

