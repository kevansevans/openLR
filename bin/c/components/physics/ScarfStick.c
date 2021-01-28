﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/physics/ScarfStick.h>
extern venum* g$7bcd604;
void components_physics_Stick_new(components__physics__Stick,components__physics__RidePoint,components__physics__RidePoint,venum*,components__sledder__RiderBase);
bool components_physics_ScarfStick_scarf(components__physics__ScarfStick,vdynamic*);
extern hl_type t$fun_9c82c53;
bool wrapt$fun_a94e020(vclosure*,bool);
extern hl_type t$fun_a94e020;
#include <h2d/col/Point.h>
#include <hl/natives.h>
extern hl_type t$_f64;

void components_physics_ScarfStick_new(components__physics__ScarfStick r0,components__physics__RidePoint r1,components__physics__RidePoint r2,components__sledder__RiderBase r3) {
	venum *r5;
	vclosure *r6, *r7;
	r5 = (venum*)g$7bcd604;
	components_physics_Stick_new(((components__physics__Stick)r0),r1,r2,r5,r3);
	r6 = hl_alloc_closure_ptr(&t$fun_9c82c53,components_physics_ScarfStick_scarf,r0);
	if( r6 ) goto label$e5dd32e_1_6;
	r7 = NULL;
	goto label$e5dd32e_1_7;
	label$e5dd32e_1_6:
	r7 = hl_alloc_closure_ptr(&t$fun_a94e020,wrapt$fun_a94e020,r6);
	label$e5dd32e_1_7:
	r0->constrain = r7;
	return;
}

bool components_physics_ScarfStick_scarf(components__physics__ScarfStick r0,vdynamic* r1) {
	bool r13;
	h2d__col__Point r3;
	components__physics__RidePoint r4;
	double r2, r5, r6, r7, r8, r12;
	vdynamic *r9, *r11;
	int r10;
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
	r6 = r2 * r2;
	r7 = r5 * r5;
	r6 = r6 + r7;
	r6 = hl_math_sqrt(r6);
	r9 = NULL;
	r8 = 0.;
	if( r6 != r8 ) goto label$e5dd32e_2_33;
	r10 = 0;
	r7 = (double)r10;
	r11 = hl_alloc_dynamic(&t$_f64);
	r11->v.d = r7;
	goto label$e5dd32e_2_39;
	label$e5dd32e_2_33:
	r8 = r0->restLength;
	r7 = r6 - r8;
	r7 = r7 / r6;
	r8 = 0.5;
	r7 = r7 * r8;
	r11 = hl_alloc_dynamic(&t$_f64);
	r11->v.d = r7;
	label$e5dd32e_2_39:
	r8 = r11 ? r11->v.d : 0;
	r7 = r2 * r8;
	r12 = r11 ? r11->v.d : 0;
	r8 = r5 * r12;
	r4 = r0->b;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r12 = r3->x;
	r12 = r12 + r7;
	r3->x = r12;
	r4 = r0->b;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->pos;
	if( r3 == NULL ) hl_null_access();
	r12 = r3->y;
	r12 = r12 + r8;
	r3->y = r12;
	r13 = r1 ? r1->v.b : 0;
	return r13;
}

