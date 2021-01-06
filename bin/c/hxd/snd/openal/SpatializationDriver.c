﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/openal/SpatializationDriver.h>
void hxd_snd_EffectDriver_new(hxd__snd__EffectDriver);
#include <hxd/snd/effect/Spatialization.h>
extern hl_type t$hxd_snd_effect_Spatialization;
extern hl_type t$_dyn;
#include <hl/natives.h>
extern hxd__snd__effect__$Spatialization g$_hxd_snd_effect_Spatialization;
bool hl_BaseType_check(hl__BaseType,vdynamic*);

void hxd_snd_openal_SpatializationDriver_new(hxd__snd__openal__SpatializationDriver r0,vvirtual* r1) {
	hxd_snd_EffectDriver_new(((hxd__snd__EffectDriver)r0));
	r0->driver = r1;
	return;
}

void hxd_snd_openal_SpatializationDriver_bind(hxd__snd__openal__SpatializationDriver r0,vdynamic* r1,hxd__snd__openal__SourceHandle r2) {
	hxd__snd__effect__Spatialization r3;
	int r5, r6, r7;
	r3 = (hxd__snd__effect__Spatialization)hl_dyn_castp(&r1,&t$_dyn,&t$hxd_snd_effect_Spatialization);
	if( r2 == NULL ) hl_null_access();
	r5 = r2->inst;
	r6 = 514;
	r7 = 0;
	openal_al_sourcei(r5,r6,r7);
	return;
}

void hxd_snd_openal_SpatializationDriver_apply(hxd__snd__openal__SpatializationDriver r0,vdynamic* r1,hxd__snd__openal__SourceHandle r2) {
	bool r7;
	hxd__snd__effect__Spatialization r3, r6;
	h3d__Vector r11;
	float r12, r13, r14;
	double r10;
	vdynamic *r15;
	int r8, r9;
	hxd__snd__effect__$Spatialization r5;
	r3 = (hxd__snd__effect__Spatialization)hl_dyn_castp(&r1,&t$_dyn,&t$hxd_snd_effect_Spatialization);
	r5 = (hxd__snd__effect__$Spatialization)g$_hxd_snd_effect_Spatialization;
	r7 = hl_BaseType_check(((hl__BaseType)r5),((vdynamic*)r3));
	if( !r7 ) goto label$744562a_3_6;
	r6 = r3;
	goto label$744562a_3_7;
	label$744562a_3_6:
	r6 = NULL;
	label$744562a_3_7:
	if( r2 == NULL ) hl_null_access();
	r8 = r2->inst;
	r9 = 4100;
	if( r6 == NULL ) hl_null_access();
	r11 = r6->position;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->x;
	r10 = -r10;
	r12 = (float)r10;
	r11 = r6->position;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->y;
	r13 = (float)r10;
	r11 = r6->position;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->z;
	r14 = (float)r10;
	openal_al_source3f(r8,r9,r12,r13,r14);
	r8 = r2->inst;
	r9 = 4102;
	r11 = r6->velocity;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->x;
	r10 = -r10;
	r12 = (float)r10;
	r11 = r6->velocity;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->y;
	r13 = (float)r10;
	r11 = r6->velocity;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->z;
	r14 = (float)r10;
	openal_al_source3f(r8,r9,r12,r13,r14);
	r8 = r2->inst;
	r9 = 4101;
	r11 = r6->direction;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->x;
	r10 = -r10;
	r12 = (float)r10;
	r11 = r6->direction;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->y;
	r13 = (float)r10;
	r11 = r6->direction;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->z;
	r14 = (float)r10;
	openal_al_source3f(r8,r9,r12,r13,r14);
	r8 = r2->inst;
	r9 = 4128;
	r10 = r6->referenceDistance;
	r12 = (float)r10;
	openal_al_sourcef(r8,r9,r12);
	r8 = r2->inst;
	r9 = 4129;
	r10 = r6->rollOffFactor;
	r12 = (float)r10;
	openal_al_sourcef(r8,r9,r12);
	r15 = r6->maxDistance;
	if( r15 ) goto label$744562a_3_71;
	r10 = 3.4028234699999998e+038;
	goto label$744562a_3_73;
	label$744562a_3_71:
	r15 = r6->maxDistance;
	r10 = r15 ? r15->v.d : 0;
	label$744562a_3_73:
	r8 = r2->inst;
	r9 = 4131;
	r12 = (float)r10;
	openal_al_sourcef(r8,r9,r12);
	return;
}

void hxd_snd_openal_SpatializationDriver_unbind(hxd__snd__openal__SpatializationDriver r0,vdynamic* r1,hxd__snd__openal__SourceHandle r2) {
	hxd__snd__effect__Spatialization r3;
	float r8, r9, r10;
	int r5, r6, r7;
	r3 = (hxd__snd__effect__Spatialization)hl_dyn_castp(&r1,&t$_dyn,&t$hxd_snd_effect_Spatialization);
	if( r2 == NULL ) hl_null_access();
	r5 = r2->inst;
	r6 = 514;
	r7 = 1;
	openal_al_sourcei(r5,r6,r7);
	r5 = r2->inst;
	r6 = 4100;
	r7 = 0;
	r8 = (float)r7;
	r7 = 0;
	r9 = (float)r7;
	r7 = 0;
	r10 = (float)r7;
	openal_al_source3f(r5,r6,r8,r9,r10);
	r5 = r2->inst;
	r6 = 4102;
	r7 = 0;
	r8 = (float)r7;
	r7 = 0;
	r9 = (float)r7;
	r7 = 0;
	r10 = (float)r7;
	openal_al_source3f(r5,r6,r8,r9,r10);
	r5 = r2->inst;
	r6 = 4101;
	r7 = 0;
	r8 = (float)r7;
	r7 = 0;
	r9 = (float)r7;
	r7 = 0;
	r10 = (float)r7;
	openal_al_source3f(r5,r6,r8,r9,r10);
	return;
}

