﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxlr/lines/LineBase.h>
#include <hl/natives.h>
double Math_min(double,double);
#include <hxlr/rider/ContactPoint.h>
extern hl_type t$vrt_5f3dcc1;
extern hl_type t$_i32;
extern hl_type t$h2d_col_Point;
extern hl_type t$_bool;
extern hl_type t$nul_i32;
extern hl_type t$vrt_6946228;
void h2d_col_Point_new(h2d__col__Point,double*,double*);
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);

void hxlr_lines_LineBase_calculateConstants(hxlr__lines__LineBase r0) {
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
	if( !r7 ) goto label$bbc0197_1_51;
	r6 = 1;
	goto label$bbc0197_1_52;
	label$bbc0197_1_51:
	r6 = -1;
	label$bbc0197_1_52:
	r4 = (double)r6;
	r3 = r3 * r4;
	r0->nx = r3;
	r3 = r0->dx;
	r4 = r0->invDistance;
	r3 = r3 * r4;
	r7 = r0->shifted;
	if( !r7 ) goto label$bbc0197_1_62;
	r6 = -1;
	goto label$bbc0197_1_63;
	label$bbc0197_1_62:
	r6 = 1;
	label$bbc0197_1_63:
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

void hxlr_lines_LineBase_setLim(hxlr__lines__LineBase r0,int r1) {
	double r3, r4;
	switch(r1) {
		default:
			goto label$bbc0197_2_27;
		case 0:
			r3 = 0.;
			r0->limStart = r3;
			r3 = 1.;
			r0->limEnd = r3;
			goto label$bbc0197_2_27;
		case 1:
			r3 = r0->limValue;
			r3 = -r3;
			r0->limStart = r3;
			r3 = 1.;
			r0->limEnd = r3;
			goto label$bbc0197_2_27;
		case 2:
			r3 = 0.;
			r0->limStart = r3;
			r3 = 1.;
			r4 = r0->limValue;
			r3 = r3 + r4;
			r0->limEnd = r3;
			goto label$bbc0197_2_27;
		case 3:
			r3 = r0->limValue;
			r3 = -r3;
			r0->limStart = r3;
			r3 = 1.;
			r4 = r0->limValue;
			r3 = r3 + r4;
			r0->limEnd = r3;
	}
	label$bbc0197_2_27:
	r0->limType = r1;
	return;
}

void hxlr_lines_LineBase_collide(hxlr__lines__LineBase r0,hxlr__rider__ContactPoint r1) {
	return;
}

vvirtual* hxlr_lines_LineBase_toSaveObject(hxlr__lines__LineBase r0) {
	vvirtual *r1, *r6;
	bool r4;
	h2d__col__Point r3;
	vdynamic *r5;
	int r2;
	r1 = hl_alloc_virtual(&t$vrt_5f3dcc1);
	r2 = r0->type;
	if( hl_vfields(r1)[4] ) *(int*)(hl_vfields(r1)[4]) = (int)r2; else hl_dyn_seti(r1->value,-10939617/*linetype*/,&t$_i32,r2);
	r3 = r0->start;
	if( hl_vfields(r1)[5] ) *(h2d__col__Point*)(hl_vfields(r1)[5]) = (h2d__col__Point)r3; else hl_dyn_setp(r1->value,-492401522/*startPoint*/,&t$h2d_col_Point,r3);
	r3 = r0->end;
	if( hl_vfields(r1)[0] ) *(h2d__col__Point*)(hl_vfields(r1)[0]) = (h2d__col__Point)r3; else hl_dyn_setp(r1->value,-460503568/*endPoint*/,&t$h2d_col_Point,r3);
	r4 = r0->shifted;
	if( hl_vfields(r1)[1] ) *(bool*)(hl_vfields(r1)[1]) = (bool)r4; else hl_dyn_seti(r1->value,-181292811/*inverted*/,&t$_bool,r4);
	r2 = r0->limType;
	if( hl_vfields(r1)[2] ) *(int*)(hl_vfields(r1)[2]) = (int)r2; else hl_dyn_seti(r1->value,22730947/*limitMode*/,&t$_i32,r2);
	r5 = r0->id;
	if( hl_vfields(r1)[3] ) *(vdynamic**)(hl_vfields(r1)[3]) = (vdynamic*)r5; else hl_dyn_setp(r1->value,-325042993/*lineID*/,&t$nul_i32,r5);
	r6 = hl_to_virtual(&t$vrt_6946228,(vdynamic*)r1);
	return r6;
}

void hxlr_lines_LineBase_new(hxlr__lines__LineBase r0,h2d__col__Point r1,h2d__col__Point r2,bool r3,vdynamic* r4) {
	hl__types__ArrayObj r15;
	bool r7;
	h2d__col__Point r8, r9;
	double r6, r10, r12;
	double *r11, *r13;
	int r5;
	if( r4 ) goto label$bbc0197_5_3;
	r5 = 0;
	r4 = hl_alloc_dynamic(&t$_i32);
	r4->v.i = r5;
	label$bbc0197_5_3:
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
	r7 = false;
	r0->tangible = r7;
	r0->start = r1;
	r0->end = r2;
	r8 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r9 = r0->end;
	if( r9 == NULL ) hl_null_access();
	r6 = r9->x;
	r9 = r0->start;
	if( r9 == NULL ) hl_null_access();
	r10 = r9->x;
	r6 = r6 - r10;
	r11 = &r6;
	r9 = r0->end;
	if( r9 == NULL ) hl_null_access();
	r10 = r9->y;
	r9 = r0->start;
	if( r9 == NULL ) hl_null_access();
	r12 = r9->y;
	r10 = r10 - r12;
	r13 = &r10;
	h2d_col_Point_new(r8,r11,r13);
	r0->gfxEnd = r8;
	r0->shifted = r3;
	r15 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r15);
	r0->keyList = r15;
	((void (*)(hxlr__lines__LineBase))r0->$type->vobj_proto[0])(r0);
	r5 = r4 ? r4->v.i : 0;
	hxlr_lines_LineBase_setLim(r0,r5);
	return;
}

