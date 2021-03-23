﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/Buffer.h>
#include <hxd/snd/openal/SourceHandle.h>
#include <h3d/Vector.h>
#include <haxe/io/Bytes.h>
#include <hxd/snd/SampleFormat.h>
#include <hxd/snd/DriverFeature.h>
#include <hxd/snd/EffectDriver.h>
extern hl_type t$fun_58fe8a6;
#include <hl/natives.h>
#include <hxd/snd/Manager.h>
hxd__snd__Manager hxd_snd_Manager_get(void);
extern hl_type t$fun_f83e957;

void hxd_snd_Buffer_new(hxd__snd__Buffer r0,vvirtual* r1) {
	hxd__snd__openal__BufferHandle r2;
	double r4;
	int r3;
	if( r1 == NULL ) hl_null_access();
	if( hl_vfields(r1)[15] ) r2 = ((hxd__snd__openal__BufferHandle (*)(vdynamic*))hl_vfields(r1)[15])(r1->value); else {
		r2 = (hxd__snd__openal__BufferHandle)hl_dyn_call_obj(r1->value,&t$fun_58fe8a6,-219546340/*createBuffer*/,NULL,NULL);
	}
	r0->handle = r2;
	r3 = 0;
	r0->refs = r3;
	r4 = hl_sys_time();
	r0->lastStop = r4;
	return;
}

void hxd_snd_Buffer_dispose(hxd__snd__Buffer r0) {
	hxd__snd__openal__BufferHandle r4;
	vvirtual *r2;
	hxd__snd__Manager r3;
	r3 = hxd_snd_Manager_get();
	if( r3 == NULL ) hl_null_access();
	r2 = r3->driver;
	if( r2 == NULL ) hl_null_access();
	r4 = r0->handle;
	if( hl_vfields(r2)[13] ) ((void (*)(vdynamic*,hxd__snd__openal__BufferHandle))hl_vfields(r2)[13])(r2->value,r4); else {
		void *args[] = {r4};
		hl_dyn_call_obj(r2->value,&t$fun_f83e957,-24226805/*destroyBuffer*/,args,NULL);
	}
	return;
}
