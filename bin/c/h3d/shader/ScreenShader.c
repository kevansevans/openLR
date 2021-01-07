﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/shader/ScreenShader.h>
#include <hxsl/Globals.h>
void hxsl_Shader_updateConstantsFinal(hxsl__Shader,hxsl__Globals);
extern hl_type t$_f64;
void hxsl_Shader_new(hxsl__Shader);

void h3d_shader_ScreenShader_updateConstants(h3d__shader__ScreenShader r0,hxsl__Globals r1) {
	int r2;
	r2 = 0;
	r0->constBits = r2;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_ScreenShader_getParamValue(h3d__shader__ScreenShader r0,int r1) {
	double r3;
	vdynamic *r4;
	int r2;
	r2 = 0;
	if( r1 != r2 ) goto label$4697d3c_2_5;
	r3 = r0->flipY__;
	r4 = hl_alloc_dynamic(&t$_f64);
	r4->v.d = r3;
	return r4;
	label$4697d3c_2_5:
	r4 = NULL;
	return r4;
}

double h3d_shader_ScreenShader_getParamFloatValue(h3d__shader__ScreenShader r0,int r1) {
	double r3;
	int r2;
	r2 = 0;
	if( r1 != r2 ) goto label$4697d3c_3_4;
	r3 = r0->flipY__;
	return r3;
	label$4697d3c_3_4:
	r3 = 0.;
	return r3;
}

void h3d_shader_ScreenShader_new(h3d__shader__ScreenShader r0) {
	double r1;
	r1 = 0.;
	r0->flipY__ = r1;
	hxsl_Shader_new(((hxsl__Shader)r0));
	return;
}

