﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/col/Bounds.h>
extern String s$Not_implemented;
vdynamic* haxe_Exception_thrown(vdynamic*);
bool h3d_col_Frustum_hasBounds(h3d__col__Frustum,h3d__col__Bounds);

void h3d_col_Bounds_new(h3d__col__Bounds r0) {
	double r1;
	r1 = 1e+020;
	r0->xMin = r1;
	r1 = -1e+020;
	r0->xMax = r1;
	r1 = 1e+020;
	r0->yMin = r1;
	r1 = -1e+020;
	r0->yMax = r1;
	r1 = 1e+020;
	r0->zMin = r1;
	r1 = -1e+020;
	r0->zMax = r1;
	return;
}

bool h3d_col_Bounds_inFrustum(h3d__col__Bounds r0,h3d__col__Frustum r1,h3d__Matrix r2) {
	String r4;
	bool r5;
	vdynamic *r3;
	if( !r2 ) goto label$11f23b9_2_4;
	r4 = (String)s$Not_implemented;
	r3 = haxe_Exception_thrown(((vdynamic*)r4));
	hl_throw((vdynamic*)r3);
	label$11f23b9_2_4:
	if( r1 == NULL ) hl_null_access();
	r5 = h3d_col_Frustum_hasBounds(r1,r0);
	return r5;
}

double h3d_col_Bounds_rayIntersection(h3d__col__Bounds r0,h3d__col__Ray r1,bool r2) {
	double r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19;
	r3 = r0->xMin;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->px;
	r3 = r3 - r4;
	r4 = r1->lx;
	r3 = r3 / r4;
	r4 = r0->yMin;
	r5 = r1->py;
	r4 = r4 - r5;
	r5 = r1->ly;
	r4 = r4 / r5;
	r5 = r0->zMin;
	r6 = r1->pz;
	r5 = r5 - r6;
	r6 = r1->lz;
	r5 = r5 / r6;
	r6 = r0->xMax;
	r7 = r1->px;
	r6 = r6 - r7;
	r7 = r1->lx;
	r6 = r6 / r7;
	r7 = r0->yMax;
	r8 = r1->py;
	r7 = r7 - r8;
	r8 = r1->ly;
	r7 = r7 / r8;
	r8 = r0->zMax;
	r9 = r1->pz;
	r8 = r8 - r9;
	r9 = r1->lz;
	r8 = r8 / r9;
	if( !(r6 < r3) ) goto label$11f23b9_3_34;
	r9 = r6;
	goto label$11f23b9_3_35;
	label$11f23b9_3_34:
	r9 = r3;
	label$11f23b9_3_35:
	if( !(r7 < r4) ) goto label$11f23b9_3_38;
	r10 = r7;
	goto label$11f23b9_3_39;
	label$11f23b9_3_38:
	r10 = r4;
	label$11f23b9_3_39:
	if( !(r8 < r5) ) goto label$11f23b9_3_42;
	r11 = r8;
	goto label$11f23b9_3_43;
	label$11f23b9_3_42:
	r11 = r5;
	label$11f23b9_3_43:
	if( !(r3 < r6) ) goto label$11f23b9_3_46;
	r12 = r6;
	goto label$11f23b9_3_47;
	label$11f23b9_3_46:
	r12 = r3;
	label$11f23b9_3_47:
	if( !(r4 < r7) ) goto label$11f23b9_3_50;
	r13 = r7;
	goto label$11f23b9_3_51;
	label$11f23b9_3_50:
	r13 = r4;
	label$11f23b9_3_51:
	if( !(r5 < r8) ) goto label$11f23b9_3_54;
	r14 = r8;
	goto label$11f23b9_3_55;
	label$11f23b9_3_54:
	r14 = r5;
	label$11f23b9_3_55:
	if( !(r13 < r12) ) goto label$11f23b9_3_58;
	r15 = r13;
	goto label$11f23b9_3_59;
	label$11f23b9_3_58:
	r15 = r12;
	label$11f23b9_3_59:
	if( !(r14 < r15) ) goto label$11f23b9_3_62;
	r16 = r14;
	goto label$11f23b9_3_63;
	label$11f23b9_3_62:
	r16 = r15;
	label$11f23b9_3_63:
	if( !(r9 < r10) ) goto label$11f23b9_3_66;
	r17 = r10;
	goto label$11f23b9_3_67;
	label$11f23b9_3_66:
	r17 = r9;
	label$11f23b9_3_67:
	if( !(r17 < r11) ) goto label$11f23b9_3_70;
	r18 = r11;
	goto label$11f23b9_3_71;
	label$11f23b9_3_70:
	r18 = r17;
	label$11f23b9_3_71:
	if( !(r16 < r18) ) goto label$11f23b9_3_74;
	r19 = -1.;
	return r19;
	label$11f23b9_3_74:
	return r18;
}

void h3d_col_Bounds_intersection(h3d__col__Bounds r0,h3d__col__Bounds r1,h3d__col__Bounds r2) {
	double r3, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->xMin;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->xMin;
	if( !(r3 < r5) ) goto label$11f23b9_4_7;
	r6 = r5;
	goto label$11f23b9_4_8;
	label$11f23b9_4_7:
	r6 = r3;
	label$11f23b9_4_8:
	r7 = r1->yMin;
	r8 = r2->yMin;
	if( !(r7 < r8) ) goto label$11f23b9_4_13;
	r9 = r8;
	goto label$11f23b9_4_14;
	label$11f23b9_4_13:
	r9 = r7;
	label$11f23b9_4_14:
	r10 = r1->zMin;
	r11 = r2->zMin;
	if( !(r10 < r11) ) goto label$11f23b9_4_19;
	r12 = r11;
	goto label$11f23b9_4_20;
	label$11f23b9_4_19:
	r12 = r10;
	label$11f23b9_4_20:
	r13 = r1->xMax;
	r14 = r2->xMax;
	if( !(r14 < r13) ) goto label$11f23b9_4_25;
	r15 = r14;
	goto label$11f23b9_4_26;
	label$11f23b9_4_25:
	r15 = r13;
	label$11f23b9_4_26:
	r16 = r1->yMax;
	r17 = r2->yMax;
	if( !(r17 < r16) ) goto label$11f23b9_4_31;
	r18 = r17;
	goto label$11f23b9_4_32;
	label$11f23b9_4_31:
	r18 = r16;
	label$11f23b9_4_32:
	r19 = r1->zMax;
	r20 = r2->zMax;
	if( !(r20 < r19) ) goto label$11f23b9_4_37;
	r21 = r20;
	goto label$11f23b9_4_38;
	label$11f23b9_4_37:
	r21 = r19;
	label$11f23b9_4_38:
	r0->xMin = r6;
	r0->xMax = r15;
	r0->yMin = r9;
	r0->yMax = r18;
	r0->zMin = r12;
	r0->zMax = r21;
	return;
}

void h3d_col_Bounds_load(h3d__col__Bounds r0,h3d__col__Bounds r1) {
	double r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->xMin;
	r0->xMin = r2;
	r2 = r1->xMax;
	r0->xMax = r2;
	r2 = r1->yMin;
	r0->yMin = r2;
	r2 = r1->yMax;
	r0->yMax = r2;
	r2 = r1->zMin;
	r0->zMin = r2;
	r2 = r1->zMax;
	r0->zMax = r2;
	return;
}

void h3d_col_Bounds_scaleCenter(h3d__col__Bounds r0,double r1) {
	double r2, r3, r5, r6, r7, r8, r9;
	r2 = r0->xMax;
	r3 = r0->xMin;
	r2 = r2 - r3;
	r3 = 0.5;
	r2 = r2 * r3;
	r2 = r2 * r1;
	r3 = r0->yMax;
	r5 = r0->yMin;
	r3 = r3 - r5;
	r5 = 0.5;
	r3 = r3 * r5;
	r3 = r3 * r1;
	r5 = r0->zMax;
	r6 = r0->zMin;
	r5 = r5 - r6;
	r6 = 0.5;
	r5 = r5 * r6;
	r5 = r5 * r1;
	r6 = r0->xMax;
	r7 = r0->xMin;
	r6 = r6 + r7;
	r7 = 0.5;
	r6 = r6 * r7;
	r7 = r0->yMax;
	r8 = r0->yMin;
	r7 = r7 + r8;
	r8 = 0.5;
	r7 = r7 * r8;
	r8 = r0->zMax;
	r9 = r0->zMin;
	r8 = r8 + r9;
	r9 = 0.5;
	r8 = r8 * r9;
	r9 = r6 - r2;
	r0->xMin = r9;
	r9 = r7 - r3;
	r0->yMin = r9;
	r9 = r8 - r5;
	r0->zMin = r9;
	r9 = r6 + r2;
	r0->xMax = r9;
	r9 = r7 + r3;
	r0->yMax = r9;
	r9 = r8 + r5;
	r0->zMax = r9;
	return;
}

