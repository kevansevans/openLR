﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/shader/UVDelta.h>
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
void hxsl_Shader_new(hxsl__Shader);
#include <hxsl/Globals.h>
void hxsl_Shader_updateConstantsFinal(hxsl__Shader,hxsl__Globals);

void h3d_shader_UVDelta_new(h3d__shader__UVDelta r0,double* r1,double* r2,double* r3,double* r4) {
	h3d__Vector r9;
	double r5, r6, r7, r8, r11;
	if( r1 ) goto label$a53a0f7_1_3;
	r5 = 0.;
	goto label$a53a0f7_1_4;
	label$a53a0f7_1_3:
	r5 = *r1;
	label$a53a0f7_1_4:
	if( r2 ) goto label$a53a0f7_1_7;
	r6 = 0.;
	goto label$a53a0f7_1_8;
	label$a53a0f7_1_7:
	r6 = *r2;
	label$a53a0f7_1_8:
	if( r3 ) goto label$a53a0f7_1_11;
	r7 = 1.;
	goto label$a53a0f7_1_12;
	label$a53a0f7_1_11:
	r7 = *r3;
	label$a53a0f7_1_12:
	if( r4 ) goto label$a53a0f7_1_15;
	r8 = 1.;
	goto label$a53a0f7_1_16;
	label$a53a0f7_1_15:
	r8 = *r4;
	label$a53a0f7_1_16:
	r9 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r1 = NULL;
	r2 = NULL;
	r3 = NULL;
	r4 = NULL;
	h3d_Vector_new(r9,r1,r2,r3,r4);
	r0->uvScale__ = r9;
	r9 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r1 = NULL;
	r2 = NULL;
	r3 = NULL;
	r4 = NULL;
	h3d_Vector_new(r9,r1,r2,r3,r4);
	r0->uvDelta__ = r9;
	hxsl_Shader_new(((hxsl__Shader)r0));
	r9 = r0->uvDelta__;
	if( r9 == NULL ) hl_null_access();
	r9->x = r5;
	r9->y = r6;
	r11 = 0.;
	r9->z = r11;
	r11 = 1.;
	r9->w = r11;
	r9 = r0->uvScale__;
	if( r9 == NULL ) hl_null_access();
	r9->x = r7;
	r9->y = r8;
	r11 = 0.;
	r9->z = r11;
	r11 = 1.;
	r9->w = r11;
	return;
}

void h3d_shader_UVDelta_updateConstants(h3d__shader__UVDelta r0,hxsl__Globals r1) {
	int r2;
	r2 = 0;
	r0->constBits = r2;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_UVDelta_getParamValue(h3d__shader__UVDelta r0,int r1) {
	h3d__Vector r2;
	vdynamic *r3;
	switch(r1) {
		default:
			goto label$a53a0f7_3_6;
		case 0:
			r2 = r0->uvDelta__;
			return ((vdynamic*)r2);
		case 1:
			r2 = r0->uvScale__;
			return ((vdynamic*)r2);
	}
	label$a53a0f7_3_6:
	r3 = NULL;
	return r3;
}

double h3d_shader_UVDelta_getParamFloatValue(h3d__shader__UVDelta r0,int r1) {
	double r2;
	r2 = 0.;
	return r2;
}

