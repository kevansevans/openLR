﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hl/UI.h>
#include <hl/natives.h>

void hl_UI_dialog(String r0,String r1,int r2) {
	vbyte *r4, *r5;
	int r3;
	if( r0 == NULL ) hl_null_access();
	r4 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->bytes;
	r3 = ui_ui_dialog(r4,r5,r2);
	return;
}

