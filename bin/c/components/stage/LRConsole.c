﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/stage/LRConsole.h>
#include <h2d/Font.h>
#include <h2d/Console.h>
void h2d_Console_new(h2d__Console,h2d__Font,h2d__Object);
extern h2d__$Console g$_h2d_Console;
int h2d_Text_set_textColor(h2d__Text,int);
#include <hxd/Event.h>
#include <hxd/EventKind.h>
void h2d_Console_show(h2d__Console);

void components_stage_LRConsole_new(components__stage__LRConsole r0,h2d__Font r1,h2d__Object r2) {
	h2d__$Console r5;
	double r4;
	h2d__TextInput r7;
	int r6;
	h2d_Console_new(((h2d__Console)r0),r1,r2);
	r4 = 5.;
	r5 = (h2d__$Console)g$_h2d_Console;
	r5->HIDE_LOG_TIMEOUT = r4;
	r7 = r0->tf;
	if( r7 == NULL ) hl_null_access();
	r6 = -15658735;
	r6 = h2d_Text_set_textColor(((h2d__Text)r7),r6);
	return;
}

void components_stage_LRConsole_onEvent(components__stage__LRConsole r0,hxd__Event r1) {
	venum *r4;
	bool r6;
	h2d__Bitmap r7;
	int r3, r5;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->kind;
	if( r4 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r4);
	r5 = 11;
	if( r3 != r5 ) goto label$a3ed764_2_14;
	r3 = r1->charCode;
	r5 = r0->shortKeyChar;
	if( r3 != r5 ) goto label$a3ed764_2_14;
	r7 = r0->bg;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->visible;
	if( r6 ) goto label$a3ed764_2_14;
	h2d_Console_show(((h2d__Console)r0));
	label$a3ed764_2_14:
	return;
}

