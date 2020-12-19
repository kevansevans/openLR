﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/lines/LineBase.h>
#include <hl/natives.h>
double Math_min(double,double);
void h2d_Graphics_clear(h2d__Graphics);
void h2d_Graphics_lineStyle(h2d__Graphics,double*,int*,double*);
void h2d_Graphics_flush(h2d__Graphics);
void h2d_Graphics_addVertex(h2d__Graphics,double,double,double,double,double,double,double*,double*);
#include <components/physics/RidePoint.h>
extern hl_type t$vrt_f776906;
extern hl_type t$_i32;
extern hl_type t$h2d_col_Point;
extern hl_type t$_bool;
#include <h2d/Object.h>
void h2d_col_Point_new(h2d__col__Point,double*,double*);
extern hl_type t$h2d_Graphics;
void h2d_Graphics_new(h2d__Graphics,h2d__Object);
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);

void components_lines_LineBase_calculateConstants(components__lines__LineBase r0) {
	bool r7;
	h2d__col__Point r2;
	double r1, r3, r4, r8;
	int r6;
	r2 = r0->end;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->x;
	r2 = r0->start;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->x;
	r1 = r1 - r3;
	r0->dx = r1;
	r2 = r0->end;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->y;
	r2 = r0->start;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->y;
	r1 = r1 - r3;
	r0->dy = r1;
	r1 = r0->dy;
	r2 = r0->start;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->x;
	r1 = r1 * r3;
	r3 = r0->dx;
	r2 = r0->start;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->y;
	r3 = r3 * r4;
	r1 = r1 - r3;
	r0->C = r1;
	r1 = r0->dx;
	r3 = 2.;
	r1 = hl_math_pow(r1,r3);
	r3 = r0->dy;
	r4 = 2.;
	r3 = hl_math_pow(r3,r4);
	r1 = r1 + r3;
	r3 = 1.;
	r3 = r3 / r1;
	r0->invSqrDistance = r3;
	r3 = hl_math_sqrt(r1);
	r0->distance = r3;
	r3 = 1.;
	r4 = r0->distance;
	r3 = r3 / r4;
	r0->invDistance = r3;
	r3 = r0->dy;
	r4 = r0->invDistance;
	r3 = r3 * r4;
	r7 = r0->shifted;
	if( !r7 ) goto label$eaddf6e_1_51;
	r6 = 1;
	goto label$eaddf6e_1_52;
	label$eaddf6e_1_51:
	r6 = -1;
	label$eaddf6e_1_52:
	r4 = (double)r6;
	r3 = r3 * r4;
	r0->nx = r3;
	r3 = r0->dx;
	r4 = r0->invDistance;
	r3 = r3 * r4;
	r7 = r0->shifted;
	if( !r7 ) goto label$eaddf6e_1_62;
	r6 = -1;
	goto label$eaddf6e_1_63;
	label$eaddf6e_1_62:
	r6 = 1;
	label$eaddf6e_1_63:
	r4 = (double)r6;
	r3 = r3 * r4;
	r0->ny = r3;
	r3 = 0.25;
	r6 = r0->zone;
	r4 = (double)r6;
	r8 = r0->distance;
	r4 = r4 / r8;
	r3 = Math_min(r3,r4);
	r0->limValue = r3;
	return;
}

void components_lines_LineBase_setLim(components__lines__LineBase r0,int r1) {
	double r3, r4;
	switch(r1) {
		default:
			goto label$eaddf6e_2_27;
		case 0:
			r3 = 0.;
			r0->limStart = r3;
			r3 = 1.;
			r0->limEnd = r3;
			goto label$eaddf6e_2_27;
		case 1:
			r3 = r0->limValue;
			r3 = -r3;
			r0->limStart = r3;
			r3 = 1.;
			r0->limEnd = r3;
			goto label$eaddf6e_2_27;
		case 2:
			r3 = 0.;
			r0->limStart = r3;
			r3 = 1.;
			r4 = r0->limValue;
			r3 = r3 + r4;
			r0->limEnd = r3;
			goto label$eaddf6e_2_27;
		case 3:
			r3 = r0->limValue;
			r3 = -r3;
			r0->limStart = r3;
			r3 = 1.;
			r4 = r0->limValue;
			r3 = r3 + r4;
			r0->limEnd = r3;
	}
	label$eaddf6e_2_27:
	r0->limType = r1;
	return;
}

void components_lines_LineBase_render(components__lines__LineBase r0) {
	h2d__Graphics r2;
	h2d__col__Point r18;
	double r4, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r19, r20, r21, r22;
	int *r6;
	double *r5, *r7;
	int r3;
	r2 = r0->colorLayer;
	if( r2 == NULL ) hl_null_access();
	h2d_Graphics_clear(r2);
	r2 = r0->colorLayer;
	if( r2 == NULL ) hl_null_access();
	r3 = 1;
	r4 = (double)r3;
	r5 = &r4;
	r3 = 16711680;
	r6 = &r3;
	r7 = NULL;
	h2d_Graphics_lineStyle(r2,r5,r6,r7);
	r2 = r0->colorLayer;
	if( r2 == NULL ) hl_null_access();
	h2d_Graphics_flush(r2);
	r8 = 0.;
	r9 = 0.;
	r10 = r2->curR;
	r11 = r2->curG;
	r12 = r2->curB;
	r13 = r2->curA;
	r14 = 0.;
	r15 = r2->ma;
	r14 = r14 * r15;
	r15 = 0.;
	r16 = r2->mc;
	r15 = r15 * r16;
	r14 = r14 + r15;
	r15 = r2->mx;
	r14 = r14 + r15;
	r5 = &r14;
	r15 = 0.;
	r16 = r2->mb;
	r15 = r15 * r16;
	r16 = 0.;
	r17 = r2->md;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r2->my;
	r15 = r15 + r16;
	r7 = &r15;
	h2d_Graphics_addVertex(r2,r8,r9,r10,r11,r12,r13,r5,r7);
	r2 = r0->colorLayer;
	r18 = r0->gfxEnd;
	if( r18 == NULL ) hl_null_access();
	r8 = r18->x;
	r18 = r0->gfxEnd;
	if( r18 == NULL ) hl_null_access();
	r9 = r18->y;
	if( r2 == NULL ) hl_null_access();
	r12 = r2->curR;
	r13 = r2->curG;
	r16 = r2->curB;
	r17 = r2->curA;
	r20 = r2->ma;
	r19 = r8 * r20;
	r21 = r2->mc;
	r20 = r9 * r21;
	r19 = r19 + r20;
	r20 = r2->mx;
	r19 = r19 + r20;
	r5 = &r19;
	r21 = r2->mb;
	r20 = r8 * r21;
	r22 = r2->md;
	r21 = r9 * r22;
	r20 = r20 + r21;
	r21 = r2->my;
	r20 = r20 + r21;
	r7 = &r20;
	h2d_Graphics_addVertex(r2,r8,r9,r12,r13,r16,r17,r5,r7);
	return;
}

void components_lines_LineBase_collide(components__lines__LineBase r0,components__physics__RidePoint r1) {
	return;
}

vvirtual* components_lines_LineBase_toSaveObject(components__lines__LineBase r0) {
	vvirtual *r1;
	bool r4;
	h2d__col__Point r3;
	int r2;
	r1 = hl_alloc_virtual(&t$vrt_f776906);
	r2 = r0->type;
	if( hl_vfields(r1)[3] ) *(int*)(hl_vfields(r1)[3]) = (int)r2; else hl_dyn_seti(r1->value,-10939617/*linetype*/,&t$_i32,r2);
	r3 = r0->start;
	if( hl_vfields(r1)[4] ) *(h2d__col__Point*)(hl_vfields(r1)[4]) = (h2d__col__Point)r3; else hl_dyn_setp(r1->value,-492401522/*startPoint*/,&t$h2d_col_Point,r3);
	r3 = r0->end;
	if( hl_vfields(r1)[0] ) *(h2d__col__Point*)(hl_vfields(r1)[0]) = (h2d__col__Point)r3; else hl_dyn_setp(r1->value,-460503568/*endPoint*/,&t$h2d_col_Point,r3);
	r4 = r0->shifted;
	if( hl_vfields(r1)[1] ) *(bool*)(hl_vfields(r1)[1]) = (bool)r4; else hl_dyn_seti(r1->value,-181292811/*inverted*/,&t$_bool,r4);
	r2 = r0->limType;
	if( hl_vfields(r1)[2] ) *(int*)(hl_vfields(r1)[2]) = (int)r2; else hl_dyn_seti(r1->value,22730947/*limitMode*/,&t$_i32,r2);
	return r1;
}

void components_lines_LineBase_new(components__lines__LineBase r0,h2d__col__Point r1,h2d__col__Point r2,bool r3,vdynamic* r4) {
	hl__types__ArrayObj r16;
	h2d__Graphics r14;
	h2d__Object r15;
	h2d__col__Point r7, r8;
	double r6, r9, r11;
	double *r10, *r12;
	int r5;
	if( r4 ) goto label$eaddf6e_6_3;
	r5 = 0;
	r4 = hl_alloc_dynamic(&t$_i32);
	r4->v.i = r5;
	label$eaddf6e_6_3:
	r5 = 15;
	r0->lineCapSegment = r5;
	r6 = 0.0025000000000000001;
	r0->lineCapRadius = r6;
	r6 = 0.;
	r0->limValue = r6;
	r6 = 0.;
	r0->limEnd = r6;
	r6 = 0.;
	r0->limStart = r6;
	r5 = 0;
	r0->limType = r5;
	r5 = 10;
	r0->zone = r5;
	r0->start = r1;
	r0->end = r2;
	r7 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r8 = r0->end;
	if( r8 == NULL ) hl_null_access();
	r6 = r8->x;
	r8 = r0->start;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->x;
	r6 = r6 - r9;
	r10 = &r6;
	r8 = r0->end;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->y;
	r8 = r0->start;
	if( r8 == NULL ) hl_null_access();
	r11 = r8->y;
	r9 = r9 - r11;
	r12 = &r9;
	h2d_col_Point_new(r7,r10,r12);
	r0->gfxEnd = r7;
	r0->shifted = r3;
	r14 = (h2d__Graphics)hl_alloc_obj(&t$h2d_Graphics);
	r15 = NULL;
	h2d_Graphics_new(r14,r15);
	r0->rideLayer = r14;
	r14 = (h2d__Graphics)hl_alloc_obj(&t$h2d_Graphics);
	r15 = NULL;
	h2d_Graphics_new(r14,r15);
	r0->colorLayer = r14;
	r16 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r16);
	r0->keyList = r16;
	((void (*)(components__lines__LineBase))r0->$type->vobj_proto[0])(r0);
	r5 = r4 ? r4->v.i : 0;
	components_lines_LineBase_setLim(r0,r5);
	return;
}

