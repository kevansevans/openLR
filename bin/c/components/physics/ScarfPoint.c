﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/physics/ScarfPoint.h>
void components_physics_RidePoint_new(components__physics__RidePoint,double*,double*,double*);
extern hl_type t$h2d_col_Point;
void h2d_col_Point_new(h2d__col__Point,double*,double*);

void components_physics_ScarfPoint_new(components__physics__ScarfPoint r0,double* r1,double* r2,double* r3) {
	double r4, r5, r6, r8, r9;
	if( r1 ) goto label$8270b85_1_3;
	r4 = 0.;
	goto label$8270b85_1_4;
	label$8270b85_1_3:
	r4 = *r1;
	label$8270b85_1_4:
	if( r2 ) goto label$8270b85_1_7;
	r5 = 0.;
	goto label$8270b85_1_8;
	label$8270b85_1_7:
	r5 = *r2;
	label$8270b85_1_8:
	if( r3 ) goto label$8270b85_1_11;
	r6 = 0.90000000000000002;
	goto label$8270b85_1_12;
	label$8270b85_1_11:
	r6 = *r3;
	label$8270b85_1_12:
	r8 = r4;
	r1 = &r8;
	r9 = r5;
	r2 = &r9;
	r3 = NULL;
	components_physics_RidePoint_new(((components__physics__RidePoint)r0),r1,r2,r3);
	r0->airFriction = r6;
	return;
}

void components_physics_ScarfPoint_step(components__physics__ScarfPoint r0,h2d__col__Point r1) {
	h2d__col__Point r2, r4, r6, r8;
	double r5, r7, r10;
	double *r9, *r11;
	if( r1 ) goto label$8270b85_2_3;
	r2 = r0->grav;
	goto label$8270b85_2_4;
	label$8270b85_2_3:
	r2 = r1;
	label$8270b85_2_4:
	r4 = r0->dir;
	if( r4 == NULL ) hl_null_access();
	r6 = r0->pos;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->x;
	r6 = r0->vel;
	if( r6 == NULL ) hl_null_access();
	r7 = r6->x;
	r5 = r5 - r7;
	r7 = r0->airFriction;
	r5 = r5 * r7;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->x;
	r5 = r5 + r7;
	r4->x = r5;
	r4 = r0->dir;
	if( r4 == NULL ) hl_null_access();
	r6 = r0->pos;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->y;
	r6 = r0->vel;
	if( r6 == NULL ) hl_null_access();
	r7 = r6->y;
	r5 = r5 - r7;
	r7 = r0->airFriction;
	r5 = r5 * r7;
	r7 = r2->y;
	r5 = r5 + r7;
	r4->y = r5;
	r4 = r0->vel;
	if( r4 == NULL ) hl_null_access();
	r6 = r0->pos;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->x;
	r4->x = r5;
	r4 = r0->vel;
	if( r4 == NULL ) hl_null_access();
	r6 = r0->pos;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->y;
	r4->y = r5;
	r4 = r0->pos;
	r6 = r0->dir;
	r8 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	if( r4 == NULL ) hl_null_access();
	r5 = r4->x;
	if( r6 == NULL ) hl_null_access();
	r7 = r6->x;
	r5 = r5 + r7;
	r9 = &r5;
	r7 = r4->y;
	r10 = r6->y;
	r7 = r7 + r10;
	r11 = &r7;
	h2d_col_Point_new(r8,r9,r11);
	r0->pos = r8;
	return;
}

