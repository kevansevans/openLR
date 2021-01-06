﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <sdl/GameController.h>
#include <hl/natives.h>

void sdl_GameController_new(sdl__GameController r0,int r1) {
	sdl_gamecontroller *r2;
	r2 = sdl_gctrl_open(r1);
	r0->ptr = r2;
	return;
}

void sdl_GameController_close(sdl__GameController r0) {
	sdl_gamecontroller *r3;
	sdl_haptic *r2;
	r2 = r0->haptic;
	if( !r2 ) goto label$54f5c01_2_4;
	r2 = r0->haptic;
	sdl_haptic_close(r2);
	label$54f5c01_2_4:
	r2 = NULL;
	r0->haptic = r2;
	r3 = r0->ptr;
	sdl_gctrl_close(r3);
	r3 = NULL;
	r0->ptr = r3;
	return;
}

