﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/fwd/LightSystem.h>
#include <h3d/shader/AmbientLight.h>
extern h3d__shader__$AmbientLight g$_h3d_shader_AmbientLight;
bool hl_BaseType_check(hl__BaseType,vdynamic*);
void h3d_scene_LightSystem_initLights(h3d__scene__LightSystem,h3d__scene__RenderContext);
int h3d_scene_fwd_LightSystem_sortLight(h3d__scene__fwd__LightSystem,h3d__scene__Light,h3d__scene__Light);
extern hl_type t$fun_255f612;
#include <hxsl/Globals.h>
extern String s$global_ambientLight;
void hxsl_Globals_set(hxsl__Globals,String,vdynamic*);
extern String s$global_perPixelLighting;
#include <h3d/scene/Object.h>
#include <hxsl/ShaderList.h>
#include <h3d/Matrix.h>
#include <h3d/Camera.h>
hxsl__ShaderList h3d_scene_RenderContext_allocShaderList(h3d__scene__RenderContext,hxsl__Shader,hxsl__ShaderList);
void h3d_scene_LightSystem_new(h3d__scene__LightSystem);
extern hl_type t$h3d_shader_AmbientLight;
void h3d_shader_AmbientLight_new(h3d__shader__AmbientLight);

bool h3d_scene_fwd_LightSystem_set_additiveLighting(h3d__scene__fwd__LightSystem r0,bool r1) {
	bool r5;
	h3d__shader__AmbientLight r4;
	h3d__shader__$AmbientLight r3;
	hxsl__Shader r2;
	r2 = r0->ambientShader;
	r3 = (h3d__shader__$AmbientLight)g$_h3d_shader_AmbientLight;
	r5 = hl_BaseType_check(((hl__BaseType)r3),((vdynamic*)r2));
	if( !r5 ) goto label$3b7f60a_1_6;
	r4 = (h3d__shader__AmbientLight)r2;
	goto label$3b7f60a_1_7;
	label$3b7f60a_1_6:
	r4 = NULL;
	label$3b7f60a_1_7:
	if( r4 == NULL ) hl_null_access();
	r5 = true;
	r4->constModified = r5;
	r4->additive__ = r1;
	return r1;
}

void h3d_scene_fwd_LightSystem_initLights(h3d__scene__fwd__LightSystem r0,h3d__scene__RenderContext r1) {
	bool r10;
	h3d__scene__Light r5, r7, r8, r11, r12, r15, r17, r18;
	vclosure *r6;
	int r3, r4, r9, r13, r14, r16;
	h3d_scene_LightSystem_initLights(((h3d__scene__LightSystem)r0),r1);
	r3 = r0->lightCount;
	r4 = r0->maxLightsPerObject;
	if( r4 < r3 ) goto label$3b7f60a_2_97;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->lights;
	r6 = hl_alloc_closure_ptr(&t$fun_255f612,h3d_scene_fwd_LightSystem_sortLight,r0);
	if( r5 ) goto label$3b7f60a_2_11;
	r8 = NULL;
	r7 = r8;
	goto label$3b7f60a_2_95;
	label$3b7f60a_2_11:
	r3 = 1;
	r4 = 0;
	r9 = 0;
	label$3b7f60a_2_14:
	r10 = true;
	if( !r10 ) goto label$3b7f60a_2_94;
	r8 = r5;
	r11 = NULL;
	r5 = r11;
	r12 = NULL;
	r11 = r12;
	r14 = 0;
	r13 = r14;
	label$3b7f60a_2_24:
	if( !r8 ) goto label$3b7f60a_2_84;
	++r13;
	r12 = r8;
	r14 = 0;
	r4 = r14;
	r14 = 0;
	r16 = r3;
	label$3b7f60a_2_32:
	if( r14 >= r16 ) goto label$3b7f60a_2_42;
	++r14;
	++r4;
	if( r12 == NULL ) hl_null_access();
	r15 = r12->next;
	r12 = r15;
	if( r15 ) goto label$3b7f60a_2_41;
	goto label$3b7f60a_2_42;
	label$3b7f60a_2_41:
	goto label$3b7f60a_2_32;
	label$3b7f60a_2_42:
	r9 = r3;
	label$3b7f60a_2_43:
	r16 = 0;
	if( r16 < r4 ) goto label$3b7f60a_2_49;
	r16 = 0;
	if( r16 >= r9 ) goto label$3b7f60a_2_82;
	if( !r12 ) goto label$3b7f60a_2_82;
	label$3b7f60a_2_49:
	r16 = 0;
	if( r4 != r16 ) goto label$3b7f60a_2_57;
	r15 = r12;
	if( r12 == NULL ) hl_null_access();
	r17 = r12->next;
	r12 = r17;
	--r9;
	goto label$3b7f60a_2_75;
	label$3b7f60a_2_57:
	r16 = 0;
	if( r9 == r16 ) goto label$3b7f60a_2_64;
	if( !r12 ) goto label$3b7f60a_2_64;
	if( r6 == NULL ) hl_null_access();
	r14 = r6->hasValue ? ((int (*)(vdynamic*,h3d__scene__Light,h3d__scene__Light))r6->fun)((vdynamic*)r6->value,r8,r12) : ((int (*)(h3d__scene__Light,h3d__scene__Light))r6->fun)(r8,r12);
	r16 = 0;
	if( r16 < r14 ) goto label$3b7f60a_2_70;
	label$3b7f60a_2_64:
	r15 = r8;
	if( r8 == NULL ) hl_null_access();
	r17 = r8->next;
	r8 = r17;
	--r4;
	goto label$3b7f60a_2_75;
	label$3b7f60a_2_70:
	r15 = r12;
	if( r12 == NULL ) hl_null_access();
	r17 = r12->next;
	r12 = r17;
	--r9;
	label$3b7f60a_2_75:
	if( !r11 ) goto label$3b7f60a_2_79;
	if( r11 == NULL ) hl_null_access();
	r11->next = r15;
	goto label$3b7f60a_2_80;
	label$3b7f60a_2_79:
	r5 = r15;
	label$3b7f60a_2_80:
	r11 = r15;
	goto label$3b7f60a_2_43;
	label$3b7f60a_2_82:
	r8 = r12;
	goto label$3b7f60a_2_24;
	label$3b7f60a_2_84:
	if( r11 == NULL ) hl_null_access();
	r18 = NULL;
	r11->next = r18;
	r16 = 1;
	if( r16 < r13 ) goto label$3b7f60a_2_90;
	goto label$3b7f60a_2_94;
	label$3b7f60a_2_90:
	r16 = 2;
	r14 = r3 * r16;
	r3 = r14;
	goto label$3b7f60a_2_14;
	label$3b7f60a_2_94:
	r7 = r5;
	label$3b7f60a_2_95:
	if( r1 == NULL ) hl_null_access();
	r1->lights = r7;
	label$3b7f60a_2_97:
	return;
}

void h3d_scene_fwd_LightSystem_initGlobals(h3d__scene__fwd__LightSystem r0,hxsl__Globals r1) {
	String r3;
	bool r5;
	h3d__Vector r4;
	vdynamic *r6;
	if( r1 == NULL ) hl_null_access();
	r3 = (String)s$global_ambientLight;
	r4 = r0->ambientLight;
	hxsl_Globals_set(r1,r3,((vdynamic*)r4));
	r3 = (String)s$global_perPixelLighting;
	r5 = r0->perPixelLighting;
	r6 = hl_alloc_dynbool(r5);
	hxsl_Globals_set(r1,r3,r6);
	return;
}

int h3d_scene_fwd_LightSystem_sortLight(h3d__scene__fwd__LightSystem r0,h3d__scene__Light r1,h3d__scene__Light r2) {
	double r6, r7;
	int r3, r4, r5;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->priority;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->priority;
	r3 = r3 - r4;
	r5 = 0;
	if( r3 == r5 ) goto label$3b7f60a_4_9;
	r4 = -r3;
	return r4;
	label$3b7f60a_4_9:
	r6 = r1->objectDistance;
	r7 = r2->objectDistance;
	if( !(r6 < r7) ) goto label$3b7f60a_4_14;
	r4 = -1;
	return r4;
	label$3b7f60a_4_14:
	r4 = 1;
	return r4;
}

hxsl__ShaderList h3d_scene_fwd_LightSystem_computeLight(h3d__scene__fwd__LightSystem r0,h3d__scene__Object r1,hxsl__ShaderList r2) {
	bool r21;
	hxsl__Shader r31;
	h3d__Camera r13;
	h3d__Vector r12;
	hxsl__ShaderList r30;
	h3d__scene__Light r6, r8, r18, r19, r22, r23, r26, r28, r29;
	vclosure *r17;
	double r9, r11, r14, r15, r16;
	h3d__scene__RenderContext r7;
	h3d__Matrix r10;
	int r4, r5, r20, r24, r25, r27;
	h3d__scene__fwd__LightSystem r3;
	r3 = r0;
	r4 = r0->lightCount;
	r5 = r0->maxLightsPerObject;
	if( r5 >= r4 ) goto label$3b7f60a_5_182;
	r7 = r0->ctx;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->lights;
	label$3b7f60a_5_7:
	if( !r6 ) goto label$3b7f60a_5_87;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->flags;
	r5 = 16;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 == r5 ) goto label$3b7f60a_5_56;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->absPos;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->_41;
	r7 = r0->ctx;
	if( r7 == NULL ) hl_null_access();
	r13 = r7->camera;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->target;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->x;
	r9 = r9 - r11;
	r10 = r6->absPos;
	if( r10 == NULL ) hl_null_access();
	r11 = r10->_42;
	r7 = r0->ctx;
	if( r7 == NULL ) hl_null_access();
	r13 = r7->camera;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->target;
	if( r12 == NULL ) hl_null_access();
	r14 = r12->y;
	r11 = r11 - r14;
	r10 = r6->absPos;
	if( r10 == NULL ) hl_null_access();
	r14 = r10->_43;
	r7 = r0->ctx;
	if( r7 == NULL ) hl_null_access();
	r13 = r7->camera;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->target;
	if( r12 == NULL ) hl_null_access();
	r15 = r12->z;
	r14 = r14 - r15;
	r15 = r9 * r9;
	r16 = r11 * r11;
	r15 = r15 + r16;
	r16 = r14 * r14;
	r15 = r15 + r16;
	r6->objectDistance = r15;
	goto label$3b7f60a_5_84;
	label$3b7f60a_5_56:
	if( r6 == NULL ) hl_null_access();
	r10 = r6->absPos;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->_41;
	r10 = r1->absPos;
	if( r10 == NULL ) hl_null_access();
	r11 = r10->_41;
	r9 = r9 - r11;
	r10 = r6->absPos;
	if( r10 == NULL ) hl_null_access();
	r11 = r10->_42;
	r10 = r1->absPos;
	if( r10 == NULL ) hl_null_access();
	r14 = r10->_42;
	r11 = r11 - r14;
	r10 = r6->absPos;
	if( r10 == NULL ) hl_null_access();
	r14 = r10->_43;
	r10 = r1->absPos;
	if( r10 == NULL ) hl_null_access();
	r15 = r10->_43;
	r14 = r14 - r15;
	r15 = r9 * r9;
	r16 = r11 * r11;
	r15 = r15 + r16;
	r16 = r14 * r14;
	r15 = r15 + r16;
	r6->objectDistance = r15;
	label$3b7f60a_5_84:
	r8 = r6->next;
	r6 = r8;
	goto label$3b7f60a_5_7;
	label$3b7f60a_5_87:
	r7 = r0->ctx;
	if( r7 == NULL ) hl_null_access();
	r8 = r7->lights;
	r17 = hl_alloc_closure_ptr(&t$fun_255f612,h3d_scene_fwd_LightSystem_sortLight,r0);
	if( r8 ) goto label$3b7f60a_5_95;
	r19 = NULL;
	r18 = r19;
	goto label$3b7f60a_5_179;
	label$3b7f60a_5_95:
	r4 = 1;
	r5 = 0;
	r20 = 0;
	label$3b7f60a_5_98:
	r21 = true;
	if( !r21 ) goto label$3b7f60a_5_178;
	r19 = r8;
	r22 = NULL;
	r8 = r22;
	r23 = NULL;
	r22 = r23;
	r25 = 0;
	r24 = r25;
	label$3b7f60a_5_108:
	if( !r19 ) goto label$3b7f60a_5_168;
	++r24;
	r23 = r19;
	r25 = 0;
	r5 = r25;
	r25 = 0;
	r27 = r4;
	label$3b7f60a_5_116:
	if( r25 >= r27 ) goto label$3b7f60a_5_126;
	++r25;
	++r5;
	if( r23 == NULL ) hl_null_access();
	r26 = r23->next;
	r23 = r26;
	if( r26 ) goto label$3b7f60a_5_125;
	goto label$3b7f60a_5_126;
	label$3b7f60a_5_125:
	goto label$3b7f60a_5_116;
	label$3b7f60a_5_126:
	r20 = r4;
	label$3b7f60a_5_127:
	r27 = 0;
	if( r27 < r5 ) goto label$3b7f60a_5_133;
	r27 = 0;
	if( r27 >= r20 ) goto label$3b7f60a_5_166;
	if( !r23 ) goto label$3b7f60a_5_166;
	label$3b7f60a_5_133:
	r27 = 0;
	if( r5 != r27 ) goto label$3b7f60a_5_141;
	r26 = r23;
	if( r23 == NULL ) hl_null_access();
	r28 = r23->next;
	r23 = r28;
	--r20;
	goto label$3b7f60a_5_159;
	label$3b7f60a_5_141:
	r27 = 0;
	if( r20 == r27 ) goto label$3b7f60a_5_148;
	if( !r23 ) goto label$3b7f60a_5_148;
	if( r17 == NULL ) hl_null_access();
	r25 = r17->hasValue ? ((int (*)(vdynamic*,h3d__scene__Light,h3d__scene__Light))r17->fun)((vdynamic*)r17->value,r19,r23) : ((int (*)(h3d__scene__Light,h3d__scene__Light))r17->fun)(r19,r23);
	r27 = 0;
	if( r27 < r25 ) goto label$3b7f60a_5_154;
	label$3b7f60a_5_148:
	r26 = r19;
	if( r19 == NULL ) hl_null_access();
	r28 = r19->next;
	r19 = r28;
	--r5;
	goto label$3b7f60a_5_159;
	label$3b7f60a_5_154:
	r26 = r23;
	if( r23 == NULL ) hl_null_access();
	r28 = r23->next;
	r23 = r28;
	--r20;
	label$3b7f60a_5_159:
	if( !r22 ) goto label$3b7f60a_5_163;
	if( r22 == NULL ) hl_null_access();
	r22->next = r26;
	goto label$3b7f60a_5_164;
	label$3b7f60a_5_163:
	r8 = r26;
	label$3b7f60a_5_164:
	r22 = r26;
	goto label$3b7f60a_5_127;
	label$3b7f60a_5_166:
	r19 = r23;
	goto label$3b7f60a_5_108;
	label$3b7f60a_5_168:
	if( r22 == NULL ) hl_null_access();
	r29 = NULL;
	r22->next = r29;
	r27 = 1;
	if( r27 < r24 ) goto label$3b7f60a_5_174;
	goto label$3b7f60a_5_178;
	label$3b7f60a_5_174:
	r27 = 2;
	r25 = r4 * r27;
	r4 = r25;
	goto label$3b7f60a_5_98;
	label$3b7f60a_5_178:
	r18 = r8;
	label$3b7f60a_5_179:
	r7 = r0->ctx;
	if( r7 == NULL ) hl_null_access();
	r7->lights = r18;
	label$3b7f60a_5_182:
	if( r3 == NULL ) hl_null_access();
	r7 = r3->ctx;
	if( r7 == NULL ) hl_null_access();
	r31 = r0->ambientShader;
	r30 = h3d_scene_RenderContext_allocShaderList(r7,r31,r2);
	r2 = r30;
	r7 = r0->ctx;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->lights;
	r4 = 0;
	label$3b7f60a_5_192:
	if( !r6 ) goto label$3b7f60a_5_209;
	r5 = r4;
	++r4;
	r20 = r0->maxLightsPerObject;
	if( r5 != r20 ) goto label$3b7f60a_5_199;
	goto label$3b7f60a_5_209;
	label$3b7f60a_5_199:
	if( r3 == NULL ) hl_null_access();
	r7 = r3->ctx;
	if( r7 == NULL ) hl_null_access();
	if( r6 == NULL ) hl_null_access();
	r31 = r6->shader;
	r30 = h3d_scene_RenderContext_allocShaderList(r7,r31,r2);
	r2 = r30;
	r8 = r6->next;
	r6 = r8;
	goto label$3b7f60a_5_192;
	label$3b7f60a_5_209:
	return r2;
}

void h3d_scene_fwd_LightSystem_new(h3d__scene__fwd__LightSystem r0) {
	bool r1;
	h3d__shader__AmbientLight r6;
	h3d__Vector r4;
	double r5;
	int r2;
	r1 = true;
	r0->perPixelLighting = r1;
	r2 = 6;
	r0->maxLightsPerObject = r2;
	h3d_scene_LightSystem_new(((h3d__scene__LightSystem)r0));
	r4 = r0->ambientLight;
	if( r4 == NULL ) hl_null_access();
	r5 = 0.5;
	r4->x = r5;
	r5 = 0.5;
	r4->y = r5;
	r5 = 0.5;
	r4->z = r5;
	r5 = 1.;
	r4->w = r5;
	r6 = (h3d__shader__AmbientLight)hl_alloc_obj(&t$h3d_shader_AmbientLight);
	h3d_shader_AmbientLight_new(r6);
	r0->ambientShader = ((hxsl__Shader)r6);
	r1 = true;
	r1 = h3d_scene_fwd_LightSystem_set_additiveLighting(r0,r1);
	return;
}

