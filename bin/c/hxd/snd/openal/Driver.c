﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/openal/Driver.h>
#include <hl/natives.h>
haxe__io__Bytes haxe_io_Bytes_alloc(int);
haxe__io__Bytes hxd_snd_openal_Driver_getTmpBytes(hxd__snd__openal__Driver,int);
int haxe_io_Bytes_getInt32(haxe__io__Bytes,int);
extern String s$could_not_init_openAL_Driver;
vdynamic* haxe_Exception_thrown(vdynamic*);
void haxe_io_Bytes_setFloat(haxe__io__Bytes,int,double);
extern hl_type t$hxd_snd_openal_SourceHandle;
void hxd_snd_openal_SourceHandle_new(hxd__snd__openal__SourceHandle);
extern String s$could_not_create_source;
extern hl_type t$hxd_snd_openal_BufferHandle;
void hxd_snd_openal_BufferHandle_new(hxd__snd__openal__BufferHandle);
void haxe_io_Bytes_setInt32(haxe__io__Bytes,int,int);
extern String s$Failed_to_queue_buffers_;
String StringTools_hex(int,vdynamic*);
String String___add__(String,String);
extern String s$bbee82c;
String String___alloc__(vbyte*,int);
extern String s$9371d7a;
#include <hxd/snd/openal/LowPassDriver.h>
#include <hxd/snd/openal/PitchDriver.h>
#include <hxd/snd/openal/ReverbDriver.h>
#include <hxd/snd/openal/SpatializationDriver.h>
extern hl_type t$hxd_snd_EffectDriver;
void hxd_snd_EffectDriver_new(hxd__snd__EffectDriver);
extern hl_type t$hxd_snd_openal_LowPassDriver;
void hxd_snd_openal_LowPassDriver_new(hxd__snd__openal__LowPassDriver,hxd__snd__openal__Driver);
extern hl_type t$hxd_snd_openal_PitchDriver;
void hxd_snd_openal_PitchDriver_new(hxd__snd__openal__PitchDriver);
extern hl_type t$hxd_snd_openal_ReverbDriver;
void hxd_snd_openal_ReverbDriver_new(hxd__snd__openal__ReverbDriver,hxd__snd__openal__Driver);
extern hl_type t$hxd_snd_openal_SpatializationDriver;
extern hl_type t$vrt_9e76e40;
void hxd_snd_openal_SpatializationDriver_new(hxd__snd__openal__SpatializationDriver,vvirtual*);

void hxd_snd_openal_Driver_new(hxd__snd__openal__Driver r0) {
	String r10;
	bool r6;
	haxe__io__Bytes r1;
	alc_device *r3;
	alc_context *r5;
	vdynamic *r9;
	vbyte *r4;
	int r2, r8;
	r2 = 24;
	r1 = haxe_io_Bytes_alloc(r2);
	r0->tmpBytes = r1;
	r4 = NULL;
	r3 = openal_alc_open_device(r4);
	r0->device = r3;
	r3 = r0->device;
	r4 = NULL;
	r5 = openal_alc_create_context(r3,r4);
	r0->context = r5;
	r5 = r0->context;
	r6 = openal_alc_make_context_current(r5);
	r3 = r0->device;
	openal_alc_load_extensions(r3);
	openal_al_load_extensions();
	r2 = 4;
	r1 = hxd_snd_openal_Driver_getTmpBytes(r0,r2);
	r3 = r0->device;
	r2 = 131075;
	r8 = 1;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->b;
	openal_alc_get_integerv(r3,r2,r8,r4);
	r2 = 0;
	r2 = haxe_io_Bytes_getInt32(r1,r2);
	r0->maxAuxiliarySends = r2;
	r2 = openal_al_get_error();
	r8 = 0;
	if( r2 == r8 ) goto label$6103fff_1_32;
	r10 = (String)s$could_not_init_openAL_Driver;
	r9 = haxe_Exception_thrown(((vdynamic*)r10));
	hl_throw((vdynamic*)r9);
	label$6103fff_1_32:
	return;
}

bool hxd_snd_openal_Driver_hasFeature(hxd__snd__openal__Driver r0,venum* r1) {
	bool r2;
	r2 = true;
	return r2;
}

haxe__io__Bytes hxd_snd_openal_Driver_getTmpBytes(hxd__snd__openal__Driver r0,int r1) {
	haxe__io__Bytes r3;
	int r2;
	r3 = r0->tmpBytes;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	if( r2 >= r1 ) goto label$6103fff_3_6;
	r3 = haxe_io_Bytes_alloc(r1);
	r0->tmpBytes = r3;
	label$6103fff_3_6:
	r3 = r0->tmpBytes;
	return r3;
}

void hxd_snd_openal_Driver_setMasterVolume(hxd__snd__openal__Driver r0,double r1) {
	float r4;
	int r3;
	r3 = 4106;
	r4 = (float)r1;
	openal_al_listenerf(r3,r4);
	return;
}

void hxd_snd_openal_Driver_setListenerParams(hxd__snd__openal__Driver r0,h3d__Vector r1,h3d__Vector r2,h3d__Vector r3,h3d__Vector r4) {
	haxe__io__Bytes r11, r12;
	float r8, r9, r10;
	double r7, r13, r14;
	vbyte *r15;
	int r6;
	r6 = 4100;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->x;
	r7 = -r7;
	r8 = (float)r7;
	r7 = r1->y;
	r9 = (float)r7;
	r7 = r1->z;
	r10 = (float)r7;
	openal_al_listener3f(r6,r8,r9,r10);
	r6 = 24;
	r11 = hxd_snd_openal_Driver_getTmpBytes(r0,r6);
	if( r11 == NULL ) hl_null_access();
	r6 = 0;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->x;
	r7 = -r7;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 4;
	r7 = r2->y;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 8;
	r7 = r2->z;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	if( r3 == NULL ) hl_null_access();
	r7 = r3->x;
	r13 = r3->x;
	r7 = r7 * r13;
	r13 = r3->y;
	r14 = r3->y;
	r13 = r13 * r14;
	r7 = r7 + r13;
	r13 = r3->z;
	r14 = r3->z;
	r13 = r13 * r14;
	r7 = r7 + r13;
	r14 = 1e-010;
	if( !(r7 < r14) ) goto label$6103fff_5_41;
	r13 = 0.;
	r7 = r13;
	goto label$6103fff_5_45;
	label$6103fff_5_41:
	r13 = 1.;
	r14 = hl_math_sqrt(r7);
	r13 = r13 / r14;
	r7 = r13;
	label$6103fff_5_45:
	r13 = r3->x;
	r13 = r13 * r7;
	r3->x = r13;
	r13 = r3->y;
	r13 = r13 * r7;
	r3->y = r13;
	r13 = r3->z;
	r13 = r13 * r7;
	r3->z = r13;
	r6 = 12;
	r7 = r3->x;
	r7 = -r7;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 16;
	r7 = r3->y;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 20;
	r7 = r3->z;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 4111;
	r12 = r0->tmpBytes;
	if( r12 == NULL ) hl_null_access();
	r15 = r12->b;
	openal_al_listenerfv(r6,r15);
	if( !r4 ) goto label$6103fff_5_80;
	r6 = 4102;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->x;
	r7 = -r7;
	r8 = (float)r7;
	r7 = r4->y;
	r9 = (float)r7;
	r7 = r4->z;
	r10 = (float)r7;
	openal_al_listener3f(r6,r8,r9,r10);
	label$6103fff_5_80:
	return;
}

hxd__snd__openal__SourceHandle hxd_snd_openal_Driver_createSource(hxd__snd__openal__Driver r0) {
	String r8;
	hxd__snd__openal__SourceHandle r1;
	haxe__io__Bytes r3;
	vdynamic *r7;
	vbyte *r5;
	int r4, r6, r9;
	r1 = (hxd__snd__openal__SourceHandle)hl_alloc_obj(&t$hxd_snd_openal_SourceHandle);
	hxd_snd_openal_SourceHandle_new(r1);
	r4 = 4;
	r3 = hxd_snd_openal_Driver_getTmpBytes(r0,r4);
	r4 = 1;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->b;
	openal_al_gen_sources(r4,r5);
	r4 = openal_al_get_error();
	r6 = 0;
	if( r4 == r6 ) goto label$6103fff_6_14;
	r8 = (String)s$could_not_create_source;
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$6103fff_6_14:
	r4 = 0;
	r4 = haxe_io_Bytes_getInt32(r3,r4);
	r1->inst = r4;
	r4 = r1->inst;
	r6 = 514;
	r9 = 1;
	openal_al_sourcei(r4,r6,r9);
	return r1;
}

void hxd_snd_openal_Driver_playSource(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1) {
	bool r4;
	int r3;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->inst;
	openal_al_source_play(r3);
	r3 = 0;
	r1->sampleOffset = r3;
	r4 = true;
	r1->playing = r4;
	return;
}

void hxd_snd_openal_Driver_stopSource(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1) {
	bool r4;
	int r3;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->inst;
	openal_al_source_stop(r3);
	r4 = false;
	r1->playing = r4;
	return;
}

void hxd_snd_openal_Driver_setSourceVolume(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1,double r2) {
	float r6;
	int r4, r5;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->inst;
	r5 = 4106;
	r6 = (float)r2;
	openal_al_sourcef(r4,r5,r6);
	return;
}

hxd__snd__openal__BufferHandle hxd_snd_openal_Driver_createBuffer(hxd__snd__openal__Driver r0) {
	hxd__snd__openal__BufferHandle r1;
	haxe__io__Bytes r3;
	vbyte *r5;
	int r4;
	r1 = (hxd__snd__openal__BufferHandle)hl_alloc_obj(&t$hxd_snd_openal_BufferHandle);
	hxd_snd_openal_BufferHandle_new(r1);
	r4 = 4;
	r3 = hxd_snd_openal_Driver_getTmpBytes(r0,r4);
	r4 = 1;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->b;
	openal_al_gen_buffers(r4,r5);
	r4 = 0;
	r4 = haxe_io_Bytes_getInt32(r3,r4);
	r1->inst = r4;
	return r1;
}

void hxd_snd_openal_Driver_destroyBuffer(hxd__snd__openal__Driver r0,hxd__snd__openal__BufferHandle r1) {
	haxe__io__Bytes r2;
	vbyte *r6;
	int r3, r5;
	r3 = 4;
	r2 = hxd_snd_openal_Driver_getTmpBytes(r0,r3);
	if( r2 == NULL ) hl_null_access();
	r3 = 0;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->inst;
	haxe_io_Bytes_setInt32(r2,r3,r5);
	r3 = 1;
	r6 = r2->b;
	openal_al_delete_buffers(r3,r6);
	return;
}

void hxd_snd_openal_Driver_setBufferData(hxd__snd__openal__Driver r0,hxd__snd__openal__BufferHandle r1,haxe__io__Bytes r2,int r3,venum* r4,int r5,int r6) {
	vbyte *r11;
	int r8, r9, r10;
	if( r4 == NULL ) hl_null_access();
	r8 = HL__ENUM_INDEX__(r4);
	switch(r8) {
		default:
			goto label$6103fff_12_24;
		case 0:
			r10 = 1;
			if( r5 != r10 ) goto label$6103fff_12_8;
			r9 = 4352;
			goto label$6103fff_12_9;
			label$6103fff_12_8:
			r9 = 4354;
			label$6103fff_12_9:
			r8 = r9;
			goto label$6103fff_12_24;
		case 1:
			r10 = 1;
			if( r5 != r10 ) goto label$6103fff_12_15;
			r9 = 4353;
			goto label$6103fff_12_16;
			label$6103fff_12_15:
			r9 = 4355;
			label$6103fff_12_16:
			r8 = r9;
			goto label$6103fff_12_24;
		case 2:
			r10 = 1;
			if( r5 != r10 ) goto label$6103fff_12_22;
			r9 = 4353;
			goto label$6103fff_12_23;
			label$6103fff_12_22:
			r9 = 4355;
			label$6103fff_12_23:
			r8 = r9;
	}
	label$6103fff_12_24:
	if( r1 == NULL ) hl_null_access();
	r9 = r1->inst;
	if( r2 == NULL ) hl_null_access();
	r11 = r2->b;
	openal_al_buffer_data(r9,r8,r11,r3,r6);
	return;
}

int hxd_snd_openal_Driver_getPlayedSampleCount(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1) {
	int r2, r3, r4;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->sampleOffset;
	r3 = r1->inst;
	r4 = 4133;
	r3 = openal_al_get_sourcei(r3,r4);
	r2 = r2 + r3;
	r4 = 0;
	if( r2 >= r4 ) goto label$6103fff_13_10;
	r3 = 0;
	r2 = r3;
	label$6103fff_13_10:
	return r2;
}

int hxd_snd_openal_Driver_getProcessedBuffers(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1) {
	int r2, r3;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->inst;
	r3 = 4118;
	r2 = openal_al_get_sourcei(r2,r3);
	return r2;
}

void hxd_snd_openal_Driver_queueBuffer(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1,hxd__snd__openal__BufferHandle r2,int r3,bool r4) {
	String r12, r13;
	bool r17;
	haxe__io__Bytes r5;
	int *r15;
	vdynamic *r11, *r14;
	vbyte *r9;
	int r6, r8, r10, r16;
	r6 = 4;
	r5 = hxd_snd_openal_Driver_getTmpBytes(r0,r6);
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->inst;
	haxe_io_Bytes_setInt32(r5,r6,r8);
	if( r1 == NULL ) hl_null_access();
	r6 = r1->inst;
	r8 = 1;
	r9 = r5->b;
	openal_al_source_queue_buffers(r6,r8,r9);
	r6 = openal_al_get_error();
	r10 = 0;
	if( r6 == r10 ) goto label$6103fff_15_30;
	r12 = (String)s$Failed_to_queue_buffers_;
	r14 = NULL;
	r13 = StringTools_hex(r6,r14);
	r12 = String___add__(r12,r13);
	r13 = (String)s$bbee82c;
	r12 = String___add__(r12,r13);
	r8 = r2->inst;
	r15 = &r8;
	r9 = hl_itos(r8,r15);
	r13 = String___alloc__(r9,r8);
	r12 = String___add__(r12,r13);
	r13 = (String)s$9371d7a;
	r12 = String___add__(r12,r13);
	r11 = haxe_Exception_thrown(((vdynamic*)r12));
	hl_throw((vdynamic*)r11);
	label$6103fff_15_30:
	r8 = r1->inst;
	r10 = 4112;
	r8 = openal_al_get_sourcei(r8,r10);
	r10 = 4116;
	if( r8 != r10 ) goto label$6103fff_15_49;
	r10 = 0;
	if( r10 >= r3 ) goto label$6103fff_15_41;
	r8 = r1->inst;
	r10 = 4133;
	openal_al_sourcei(r8,r10,r3);
	goto label$6103fff_15_45;
	label$6103fff_15_41:
	r8 = r1->inst;
	r10 = 4133;
	r16 = 0;
	openal_al_sourcei(r8,r10,r16);
	label$6103fff_15_45:
	r17 = r1->playing;
	if( !r17 ) goto label$6103fff_15_49;
	r8 = r1->inst;
	openal_al_source_play(r8);
	label$6103fff_15_49:
	r2->isEnd = r4;
	return;
}

void hxd_snd_openal_Driver_unqueueBuffer(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1,hxd__snd__openal__BufferHandle r2) {
	bool r12;
	haxe__io__Bytes r3;
	double r8, r11;
	vbyte *r7;
	int r4, r6, r9, r10;
	r4 = 4;
	r3 = hxd_snd_openal_Driver_getTmpBytes(r0,r4);
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->inst;
	haxe_io_Bytes_setInt32(r3,r4,r6);
	if( r1 == NULL ) hl_null_access();
	r4 = r1->inst;
	r6 = 1;
	r7 = r3->b;
	openal_al_source_unqueue_buffers(r4,r6,r7);
	r4 = r2->inst;
	r6 = 8196;
	r4 = openal_al_get_bufferi(r4,r6);
	r6 = r2->inst;
	r9 = 8194;
	r6 = openal_al_get_bufferi(r6,r9);
	r9 = r2->inst;
	r10 = 8195;
	r9 = openal_al_get_bufferi(r9,r10);
	r6 = r6 * r9;
	r8 = (double)r6;
	r11 = 8.;
	r8 = r8 / r11;
	r11 = (double)r4;
	r11 = r11 / r8;
	r6 = (int)r11;
	r12 = r2->isEnd;
	if( !r12 ) goto label$6103fff_16_33;
	r9 = 0;
	r1->sampleOffset = r9;
	goto label$6103fff_16_36;
	label$6103fff_16_33:
	r9 = r1->sampleOffset;
	r9 = r9 + r6;
	r1->sampleOffset = r9;
	label$6103fff_16_36:
	return;
}

void hxd_snd_openal_Driver_update(hxd__snd__openal__Driver r0) {
	return;
}

hxd__snd__EffectDriver hxd_snd_openal_Driver_getEffectDriver(hxd__snd__openal__Driver r0,String r1) {
	vvirtual *r12;
	hxd__snd__EffectDriver r7;
	hxd__snd__openal__ReverbDriver r10;
	hxd__snd__openal__PitchDriver r9;
	hxd__snd__openal__LowPassDriver r8;
	hxd__snd__openal__SpatializationDriver r11;
	vbyte *r5, *r6;
	int r3, r4;
	if( !r1 ) goto label$6103fff_18_9;
	r3 = r1->length;
	r4 = 7;
	if( r3 != r4 ) goto label$6103fff_18_9;
	r5 = r1->bytes;
	r6 = (vbyte*)USTR("lowpass");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$6103fff_18_39;
	label$6103fff_18_9:
	if( !r1 ) goto label$6103fff_18_18;
	r3 = r1->length;
	r4 = 5;
	if( r3 != r4 ) goto label$6103fff_18_18;
	r5 = r1->bytes;
	r6 = (vbyte*)USTR("pitch");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$6103fff_18_42;
	label$6103fff_18_18:
	if( !r1 ) goto label$6103fff_18_27;
	r3 = r1->length;
	r4 = 6;
	if( r3 != r4 ) goto label$6103fff_18_27;
	r5 = r1->bytes;
	r6 = (vbyte*)USTR("reverb");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$6103fff_18_45;
	label$6103fff_18_27:
	if( !r1 ) goto label$6103fff_18_36;
	r3 = r1->length;
	r4 = 14;
	if( r3 != r4 ) goto label$6103fff_18_36;
	r5 = r1->bytes;
	r6 = (vbyte*)USTR("spatialization");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$6103fff_18_48;
	label$6103fff_18_36:
	r7 = (hxd__snd__EffectDriver)hl_alloc_obj(&t$hxd_snd_EffectDriver);
	hxd_snd_EffectDriver_new(r7);
	return r7;
	label$6103fff_18_39:
	r8 = (hxd__snd__openal__LowPassDriver)hl_alloc_obj(&t$hxd_snd_openal_LowPassDriver);
	hxd_snd_openal_LowPassDriver_new(r8,r0);
	return ((hxd__snd__EffectDriver)r8);
	label$6103fff_18_42:
	r9 = (hxd__snd__openal__PitchDriver)hl_alloc_obj(&t$hxd_snd_openal_PitchDriver);
	hxd_snd_openal_PitchDriver_new(r9);
	return ((hxd__snd__EffectDriver)r9);
	label$6103fff_18_45:
	r10 = (hxd__snd__openal__ReverbDriver)hl_alloc_obj(&t$hxd_snd_openal_ReverbDriver);
	hxd_snd_openal_ReverbDriver_new(r10,r0);
	return ((hxd__snd__EffectDriver)r10);
	label$6103fff_18_48:
	r11 = (hxd__snd__openal__SpatializationDriver)hl_alloc_obj(&t$hxd_snd_openal_SpatializationDriver);
	r12 = r0->f$4;
	if( r12 ) goto label$6103fff_18_53;
	r12 = hl_to_virtual(&t$vrt_9e76e40,(vdynamic*)r0);
	r0->f$4 = r12;
	label$6103fff_18_53:
	hxd_snd_openal_SpatializationDriver_new(r11,r12);
	return ((hxd__snd__EffectDriver)r11);
}

