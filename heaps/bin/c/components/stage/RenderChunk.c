﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/stage/RenderChunk.h>
void h2d_Object_new(h2d__Object,h2d__Object);
extern hl_type t$h2d_Graphics;
void h2d_Graphics_new(h2d__Graphics,h2d__Object);
bool h2d_Object_set_visible(h2d__Object,bool);
void components_stage_RenderChunk_updateRender(components__stage__RenderChunk);
#include <h2d/col/Point.h>
#include <components/lines/LineBase.h>
void components_stage_RenderChunk_updateGridChunks(components__stage__RenderChunk);
void h2d_Graphics_clear(h2d__Graphics);
extern hl_type t$vrt_f6fd8f3;
extern hl_type t$hl_types_ArrayObj;
void components_stage_RenderChunk_drawLineGraphic(components__stage__RenderChunk,components__lines__LineBase);
void h2d_Graphics_lineStyle(h2d__Graphics,double*,int*,double*);
void h2d_Graphics_flush(h2d__Graphics);
void h2d_Graphics_addVertex(h2d__Graphics,double,double,double,double,double,double,double*,double*);
void h2d_Graphics_drawCircle(h2d__Graphics,double,double,double,int*);
#include <haxe/ds/StringMap.h>
#include <components/managers/Grid.h>
#include <_std/Main.h>
void hl_types_ArrayObj_new(hl__types__ArrayObj);
vvirtual* components_managers_Grid_registryPosition(double,double);
extern String s$x;
extern hl_type t$_i32;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$y;
extern $Main g$_Main;
vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap,String);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);

void components_stage_RenderChunk_new(components__stage__RenderChunk r0,int r1,int r2,h2d__Object r3) {
	h2d__Graphics r7;
	bool r5;
	double r6;
	h2d_Object_new(((h2d__Object)r0),r3);
	r5 = true;
	r0->posChanged = r5;
	r6 = (double)r1;
	r0->x = r6;
	r5 = true;
	r0->posChanged = r5;
	r6 = (double)r2;
	r0->y = r6;
	r7 = (h2d__Graphics)hl_alloc_obj(&t$h2d_Graphics);
	h2d_Graphics_new(r7,((h2d__Object)r0));
	r0->sceneColorLayer = r7;
	r7 = (h2d__Graphics)hl_alloc_obj(&t$h2d_Graphics);
	h2d_Graphics_new(r7,((h2d__Object)r0));
	r0->scenePlaybackLayer = r7;
	r7 = r0->scenePlaybackLayer;
	if( r7 == NULL ) hl_null_access();
	r5 = false;
	r5 = h2d_Object_set_visible(((h2d__Object)r7),r5);
	r7 = (h2d__Graphics)hl_alloc_obj(&t$h2d_Graphics);
	h2d_Graphics_new(r7,((h2d__Object)r0));
	r0->colorLayer = r7;
	r7 = (h2d__Graphics)hl_alloc_obj(&t$h2d_Graphics);
	h2d_Graphics_new(r7,((h2d__Object)r0));
	r0->rideLayer = r7;
	components_stage_RenderChunk_updateRender(r0);
	return;
}

void components_stage_RenderChunk_updateRender(components__stage__RenderChunk r0) {
	vvirtual *r8;
	hl__types__ArrayObj r4, r7;
	h2d__Graphics r2;
	components__lines__LineBase r12;
	vdynamic *r9;
	varray *r10;
	int r3, r5, r6, r11;
	components_stage_RenderChunk_updateGridChunks(r0);
	r2 = r0->rideLayer;
	if( r2 == NULL ) hl_null_access();
	h2d_Graphics_clear(r2);
	r2 = r0->colorLayer;
	if( r2 == NULL ) hl_null_access();
	h2d_Graphics_clear(r2);
	r2 = r0->sceneColorLayer;
	if( r2 == NULL ) hl_null_access();
	h2d_Graphics_clear(r2);
	r2 = r0->scenePlaybackLayer;
	if( r2 == NULL ) hl_null_access();
	h2d_Graphics_clear(r2);
	r3 = 0;
	r4 = r0->gridChunks;
	label$7b35e61_2_15:
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	if( r3 >= r6 ) goto label$7b35e61_2_45;
	r6 = r4->length;
	if( ((unsigned)r3) < ((unsigned)r6) ) goto label$7b35e61_2_23;
	r8 = NULL;
	goto label$7b35e61_2_26;
	label$7b35e61_2_23:
	r10 = r4->array;
	r9 = ((vdynamic**)(r10 + 1))[r3];
	r8 = hl_to_virtual(&t$vrt_f6fd8f3,(vdynamic*)r9);
	label$7b35e61_2_26:
	++r3;
	r5 = 0;
	if( r8 == NULL ) hl_null_access();
	r7 = hl_vfields(r8)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r8)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r8->value,233152173/*allLines*/,&t$hl_types_ArrayObj);
	label$7b35e61_2_30:
	if( r7 == NULL ) hl_null_access();
	r11 = r7->length;
	if( r5 >= r11 ) goto label$7b35e61_2_44;
	r11 = r7->length;
	if( ((unsigned)r5) < ((unsigned)r11) ) goto label$7b35e61_2_38;
	r12 = NULL;
	goto label$7b35e61_2_41;
	label$7b35e61_2_38:
	r10 = r7->array;
	r9 = ((vdynamic**)(r10 + 1))[r5];
	r12 = (components__lines__LineBase)r9;
	label$7b35e61_2_41:
	++r5;
	components_stage_RenderChunk_drawLineGraphic(r0,r12);
	goto label$7b35e61_2_30;
	label$7b35e61_2_44:
	goto label$7b35e61_2_15;
	label$7b35e61_2_45:
	return;
}

void components_stage_RenderChunk_drawLineGraphic(components__stage__RenderChunk r0,components__lines__LineBase r1) {
	h2d__Graphics r6;
	h2d__col__Point r12;
	double r2, r7, r11, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r27, r28, r29, r30, r31, r35, r36, r37, r38, r39, r41, r42, r43, r44, r45, r49, r50, r51, r52, r53, r54, r55, r56, r57, r59, r60, r61, r62, r63, r67, r68, r69, r70, r71;
	int *r9;
	double *r8, *r10;
	int r4, r5, r26, r32, r33, r34, r40, r46, r47, r48, r58, r64, r65, r66, r72, r73;
	r2 = 0.0025000000000000001;
	r4 = 15;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->type;
	switch(r5) {
		default:
			r6 = r0->rideLayer;
			if( r6 == NULL ) hl_null_access();
			r5 = 1;
			r7 = (double)r5;
			r8 = &r7;
			r5 = 16711680;
			r9 = &r5;
			r10 = NULL;
			h2d_Graphics_lineStyle(r6,r8,r9,r10);
			r6 = r0->rideLayer;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r11 = r12->x;
			r13 = r0->x;
			r11 = r11 - r13;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r13 = r12->y;
			r14 = r0->y;
			r13 = r13 - r14;
			if( r6 == NULL ) hl_null_access();
			h2d_Graphics_flush(r6);
			r16 = r6->curR;
			r17 = r6->curG;
			r18 = r6->curB;
			r19 = r6->curA;
			r21 = r6->ma;
			r20 = r11 * r21;
			r22 = r6->mc;
			r21 = r13 * r22;
			r20 = r20 + r21;
			r21 = r6->mx;
			r20 = r20 + r21;
			r8 = &r20;
			r22 = r6->mb;
			r21 = r11 * r22;
			r23 = r6->md;
			r22 = r13 * r23;
			r21 = r21 + r22;
			r22 = r6->my;
			r21 = r21 + r22;
			r10 = &r21;
			h2d_Graphics_addVertex(r6,r11,r13,r16,r17,r18,r19,r8,r10);
			r6 = r0->rideLayer;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r11 = r12->x;
			r13 = r0->x;
			r11 = r11 - r13;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r13 = r12->y;
			r14 = r0->y;
			r13 = r13 - r14;
			if( r6 == NULL ) hl_null_access();
			r16 = r6->curR;
			r17 = r6->curG;
			r18 = r6->curB;
			r19 = r6->curA;
			r23 = r6->ma;
			r22 = r11 * r23;
			r24 = r6->mc;
			r23 = r13 * r24;
			r22 = r22 + r23;
			r23 = r6->mx;
			r22 = r22 + r23;
			r8 = &r22;
			r24 = r6->mb;
			r23 = r11 * r24;
			r25 = r6->md;
			r24 = r13 * r25;
			r23 = r23 + r24;
			r24 = r6->my;
			r23 = r23 + r24;
			r10 = &r23;
			h2d_Graphics_addVertex(r6,r11,r13,r16,r17,r18,r19,r8,r10);
			goto label$7b35e61_3_774;
		case 0:
			r6 = r0->rideLayer;
			if( r6 == NULL ) hl_null_access();
			r26 = 2;
			r11 = (double)r26;
			r8 = &r11;
			r26 = 0;
			r9 = &r26;
			r10 = NULL;
			h2d_Graphics_lineStyle(r6,r8,r9,r10);
			r6 = r0->rideLayer;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r13 = r12->x;
			r14 = r0->x;
			r13 = r13 - r14;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r14 = r12->y;
			r15 = r0->y;
			r14 = r14 - r15;
			if( r6 == NULL ) hl_null_access();
			h2d_Graphics_flush(r6);
			r17 = r6->curR;
			r18 = r6->curG;
			r19 = r6->curB;
			r24 = r6->curA;
			r27 = r6->ma;
			r25 = r13 * r27;
			r28 = r6->mc;
			r27 = r14 * r28;
			r25 = r25 + r27;
			r27 = r6->mx;
			r25 = r25 + r27;
			r8 = &r25;
			r28 = r6->mb;
			r27 = r13 * r28;
			r29 = r6->md;
			r28 = r14 * r29;
			r27 = r27 + r28;
			r28 = r6->my;
			r27 = r27 + r28;
			r10 = &r27;
			h2d_Graphics_addVertex(r6,r13,r14,r17,r18,r19,r24,r8,r10);
			r6 = r0->rideLayer;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r13 = r12->x;
			r14 = r0->x;
			r13 = r13 - r14;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r14 = r12->y;
			r15 = r0->y;
			r14 = r14 - r15;
			if( r6 == NULL ) hl_null_access();
			r17 = r6->curR;
			r18 = r6->curG;
			r19 = r6->curB;
			r24 = r6->curA;
			r29 = r6->ma;
			r28 = r13 * r29;
			r30 = r6->mc;
			r29 = r14 * r30;
			r28 = r28 + r29;
			r29 = r6->mx;
			r28 = r28 + r29;
			r8 = &r28;
			r30 = r6->mb;
			r29 = r13 * r30;
			r31 = r6->md;
			r30 = r14 * r31;
			r29 = r29 + r30;
			r30 = r6->my;
			r29 = r29 + r30;
			r10 = &r29;
			h2d_Graphics_addVertex(r6,r13,r14,r17,r18,r19,r24,r8,r10);
			r6 = r0->rideLayer;
			if( r6 == NULL ) hl_null_access();
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r13 = r12->x;
			r14 = r0->x;
			r13 = r13 - r14;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r14 = r12->y;
			r15 = r0->y;
			r14 = r14 - r15;
			r32 = r4;
			r9 = &r32;
			h2d_Graphics_drawCircle(r6,r13,r14,r2,r9);
			r6 = r0->rideLayer;
			if( r6 == NULL ) hl_null_access();
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r13 = r12->x;
			r14 = r0->x;
			r13 = r13 - r14;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r14 = r12->y;
			r15 = r0->y;
			r14 = r14 - r15;
			r33 = r4;
			r9 = &r33;
			h2d_Graphics_drawCircle(r6,r13,r14,r2,r9);
			r6 = r0->colorLayer;
			if( r6 == NULL ) hl_null_access();
			r34 = 2;
			r13 = (double)r34;
			r8 = &r13;
			r34 = 26367;
			r9 = &r34;
			r10 = NULL;
			h2d_Graphics_lineStyle(r6,r8,r9,r10);
			r6 = r0->colorLayer;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r14 = r12->x;
			r15 = r0->x;
			r14 = r14 - r15;
			r15 = r1->nx;
			r14 = r14 + r15;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r15 = r12->y;
			r16 = r0->y;
			r15 = r15 - r16;
			r16 = r1->ny;
			r15 = r15 + r16;
			if( r6 == NULL ) hl_null_access();
			h2d_Graphics_flush(r6);
			r18 = r6->curR;
			r19 = r6->curG;
			r24 = r6->curB;
			r30 = r6->curA;
			r35 = r6->ma;
			r31 = r14 * r35;
			r36 = r6->mc;
			r35 = r15 * r36;
			r31 = r31 + r35;
			r35 = r6->mx;
			r31 = r31 + r35;
			r8 = &r31;
			r36 = r6->mb;
			r35 = r14 * r36;
			r37 = r6->md;
			r36 = r15 * r37;
			r35 = r35 + r36;
			r36 = r6->my;
			r35 = r35 + r36;
			r10 = &r35;
			h2d_Graphics_addVertex(r6,r14,r15,r18,r19,r24,r30,r8,r10);
			r6 = r0->colorLayer;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r14 = r12->x;
			r15 = r0->x;
			r14 = r14 - r15;
			r15 = r1->nx;
			r14 = r14 + r15;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r15 = r12->y;
			r16 = r0->y;
			r15 = r15 - r16;
			r16 = r1->ny;
			r15 = r15 + r16;
			if( r6 == NULL ) hl_null_access();
			r18 = r6->curR;
			r19 = r6->curG;
			r24 = r6->curB;
			r30 = r6->curA;
			r37 = r6->ma;
			r36 = r14 * r37;
			r38 = r6->mc;
			r37 = r15 * r38;
			r36 = r36 + r37;
			r37 = r6->mx;
			r36 = r36 + r37;
			r8 = &r36;
			r38 = r6->mb;
			r37 = r14 * r38;
			r39 = r6->md;
			r38 = r15 * r39;
			r37 = r37 + r38;
			r38 = r6->my;
			r37 = r37 + r38;
			r10 = &r37;
			h2d_Graphics_addVertex(r6,r14,r15,r18,r19,r24,r30,r8,r10);
			goto label$7b35e61_3_774;
		case 1:
			r6 = r0->rideLayer;
			if( r6 == NULL ) hl_null_access();
			r40 = 2;
			r14 = (double)r40;
			r8 = &r14;
			r40 = 0;
			r9 = &r40;
			r10 = NULL;
			h2d_Graphics_lineStyle(r6,r8,r9,r10);
			r6 = r0->rideLayer;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r15 = r12->x;
			r16 = r0->x;
			r15 = r15 - r16;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r16 = r12->y;
			r17 = r0->y;
			r16 = r16 - r17;
			if( r6 == NULL ) hl_null_access();
			h2d_Graphics_flush(r6);
			r19 = r6->curR;
			r24 = r6->curG;
			r30 = r6->curB;
			r38 = r6->curA;
			r41 = r6->ma;
			r39 = r15 * r41;
			r42 = r6->mc;
			r41 = r16 * r42;
			r39 = r39 + r41;
			r41 = r6->mx;
			r39 = r39 + r41;
			r8 = &r39;
			r42 = r6->mb;
			r41 = r15 * r42;
			r43 = r6->md;
			r42 = r16 * r43;
			r41 = r41 + r42;
			r42 = r6->my;
			r41 = r41 + r42;
			r10 = &r41;
			h2d_Graphics_addVertex(r6,r15,r16,r19,r24,r30,r38,r8,r10);
			r6 = r0->rideLayer;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r15 = r12->x;
			r16 = r0->x;
			r15 = r15 - r16;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r16 = r12->y;
			r17 = r0->y;
			r16 = r16 - r17;
			if( r6 == NULL ) hl_null_access();
			r19 = r6->curR;
			r24 = r6->curG;
			r30 = r6->curB;
			r38 = r6->curA;
			r43 = r6->ma;
			r42 = r15 * r43;
			r44 = r6->mc;
			r43 = r16 * r44;
			r42 = r42 + r43;
			r43 = r6->mx;
			r42 = r42 + r43;
			r8 = &r42;
			r44 = r6->mb;
			r43 = r15 * r44;
			r45 = r6->md;
			r44 = r16 * r45;
			r43 = r43 + r44;
			r44 = r6->my;
			r43 = r43 + r44;
			r10 = &r43;
			h2d_Graphics_addVertex(r6,r15,r16,r19,r24,r30,r38,r8,r10);
			r6 = r0->rideLayer;
			if( r6 == NULL ) hl_null_access();
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r15 = r12->x;
			r16 = r0->x;
			r15 = r15 - r16;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r16 = r12->y;
			r17 = r0->y;
			r16 = r16 - r17;
			r46 = r4;
			r9 = &r46;
			h2d_Graphics_drawCircle(r6,r15,r16,r2,r9);
			r6 = r0->rideLayer;
			if( r6 == NULL ) hl_null_access();
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r15 = r12->x;
			r16 = r0->x;
			r15 = r15 - r16;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r16 = r12->y;
			r17 = r0->y;
			r16 = r16 - r17;
			r47 = r4;
			r9 = &r47;
			h2d_Graphics_drawCircle(r6,r15,r16,r2,r9);
			r6 = r0->colorLayer;
			if( r6 == NULL ) hl_null_access();
			r48 = 2;
			r15 = (double)r48;
			r8 = &r15;
			r48 = 13369344;
			r9 = &r48;
			r10 = NULL;
			h2d_Graphics_lineStyle(r6,r8,r9,r10);
			r6 = r0->colorLayer;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r16 = r12->x;
			r17 = r0->x;
			r16 = r16 - r17;
			r17 = r1->nx;
			r16 = r16 + r17;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r17 = r12->y;
			r18 = r0->y;
			r17 = r17 - r18;
			r18 = r1->ny;
			r17 = r17 + r18;
			if( r6 == NULL ) hl_null_access();
			h2d_Graphics_flush(r6);
			r24 = r6->curR;
			r30 = r6->curG;
			r38 = r6->curB;
			r44 = r6->curA;
			r49 = r6->ma;
			r45 = r16 * r49;
			r50 = r6->mc;
			r49 = r17 * r50;
			r45 = r45 + r49;
			r49 = r6->mx;
			r45 = r45 + r49;
			r8 = &r45;
			r50 = r6->mb;
			r49 = r16 * r50;
			r51 = r6->md;
			r50 = r17 * r51;
			r49 = r49 + r50;
			r50 = r6->my;
			r49 = r49 + r50;
			r10 = &r49;
			h2d_Graphics_addVertex(r6,r16,r17,r24,r30,r38,r44,r8,r10);
			r6 = r0->colorLayer;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r16 = r12->x;
			r17 = r0->x;
			r16 = r16 - r17;
			r17 = r1->nx;
			r16 = r16 + r17;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r17 = r12->y;
			r18 = r0->y;
			r17 = r17 - r18;
			r18 = r1->ny;
			r17 = r17 + r18;
			if( r6 == NULL ) hl_null_access();
			r24 = r6->curR;
			r30 = r6->curG;
			r38 = r6->curB;
			r44 = r6->curA;
			r51 = r6->ma;
			r50 = r16 * r51;
			r52 = r6->mc;
			r51 = r17 * r52;
			r50 = r50 + r51;
			r51 = r6->mx;
			r50 = r50 + r51;
			r8 = &r50;
			r52 = r6->mb;
			r51 = r16 * r52;
			r53 = r6->md;
			r52 = r17 * r53;
			r51 = r51 + r52;
			r52 = r6->my;
			r51 = r51 + r52;
			r10 = &r51;
			h2d_Graphics_addVertex(r6,r16,r17,r24,r30,r38,r44,r8,r10);
			r6 = r0->colorLayer;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r16 = r12->x;
			r17 = r0->x;
			r16 = r16 - r17;
			r17 = r1->nx;
			r18 = 4.;
			r17 = r17 * r18;
			r18 = r1->dx;
			r19 = r1->invDistance;
			r18 = r18 * r19;
			r19 = 5.;
			r18 = r18 * r19;
			r17 = r17 - r18;
			r16 = r16 + r17;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r17 = r12->y;
			r18 = r0->y;
			r17 = r17 - r18;
			r18 = r1->ny;
			r19 = 4.;
			r18 = r18 * r19;
			r19 = r1->dy;
			r24 = r1->invDistance;
			r19 = r19 * r24;
			r24 = 5.;
			r19 = r19 * r24;
			r18 = r18 - r19;
			r17 = r17 + r18;
			if( r6 == NULL ) hl_null_access();
			r24 = r6->curR;
			r30 = r6->curG;
			r38 = r6->curB;
			r44 = r6->curA;
			r53 = r6->ma;
			r52 = r16 * r53;
			r54 = r6->mc;
			r53 = r17 * r54;
			r52 = r52 + r53;
			r53 = r6->mx;
			r52 = r52 + r53;
			r8 = &r52;
			r54 = r6->mb;
			r53 = r16 * r54;
			r55 = r6->md;
			r54 = r17 * r55;
			r53 = r53 + r54;
			r54 = r6->my;
			r53 = r53 + r54;
			r10 = &r53;
			h2d_Graphics_addVertex(r6,r16,r17,r24,r30,r38,r44,r8,r10);
			r6 = r0->colorLayer;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r16 = r12->x;
			r17 = r0->x;
			r16 = r16 - r17;
			r17 = r1->dx;
			r18 = r1->invDistance;
			r17 = r17 * r18;
			r18 = 5.;
			r17 = r17 * r18;
			r16 = r16 - r17;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r17 = r12->y;
			r18 = r0->y;
			r17 = r17 - r18;
			r18 = r1->dy;
			r19 = r1->invDistance;
			r18 = r18 * r19;
			r19 = 5.;
			r18 = r18 * r19;
			r17 = r17 - r18;
			if( r6 == NULL ) hl_null_access();
			r24 = r6->curR;
			r30 = r6->curG;
			r38 = r6->curB;
			r44 = r6->curA;
			r55 = r6->ma;
			r54 = r16 * r55;
			r56 = r6->mc;
			r55 = r17 * r56;
			r54 = r54 + r55;
			r55 = r6->mx;
			r54 = r54 + r55;
			r8 = &r54;
			r56 = r6->mb;
			r55 = r16 * r56;
			r57 = r6->md;
			r56 = r17 * r57;
			r55 = r55 + r56;
			r56 = r6->my;
			r55 = r55 + r56;
			r10 = &r55;
			h2d_Graphics_addVertex(r6,r16,r17,r24,r30,r38,r44,r8,r10);
			goto label$7b35e61_3_774;
		case 2:
			r6 = r0->sceneColorLayer;
			if( r6 == NULL ) hl_null_access();
			r58 = 2;
			r16 = (double)r58;
			r8 = &r16;
			r58 = 52224;
			r9 = &r58;
			r10 = NULL;
			h2d_Graphics_lineStyle(r6,r8,r9,r10);
			r6 = r0->sceneColorLayer;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r17 = r12->x;
			r18 = r0->x;
			r17 = r17 - r18;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r18 = r12->y;
			r19 = r0->y;
			r18 = r18 - r19;
			if( r6 == NULL ) hl_null_access();
			h2d_Graphics_flush(r6);
			r30 = r6->curR;
			r38 = r6->curG;
			r44 = r6->curB;
			r56 = r6->curA;
			r59 = r6->ma;
			r57 = r17 * r59;
			r60 = r6->mc;
			r59 = r18 * r60;
			r57 = r57 + r59;
			r59 = r6->mx;
			r57 = r57 + r59;
			r8 = &r57;
			r60 = r6->mb;
			r59 = r17 * r60;
			r61 = r6->md;
			r60 = r18 * r61;
			r59 = r59 + r60;
			r60 = r6->my;
			r59 = r59 + r60;
			r10 = &r59;
			h2d_Graphics_addVertex(r6,r17,r18,r30,r38,r44,r56,r8,r10);
			r6 = r0->sceneColorLayer;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r17 = r12->x;
			r18 = r0->x;
			r17 = r17 - r18;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r18 = r12->y;
			r19 = r0->y;
			r18 = r18 - r19;
			if( r6 == NULL ) hl_null_access();
			r30 = r6->curR;
			r38 = r6->curG;
			r44 = r6->curB;
			r56 = r6->curA;
			r61 = r6->ma;
			r60 = r17 * r61;
			r62 = r6->mc;
			r61 = r18 * r62;
			r60 = r60 + r61;
			r61 = r6->mx;
			r60 = r60 + r61;
			r8 = &r60;
			r62 = r6->mb;
			r61 = r17 * r62;
			r63 = r6->md;
			r62 = r18 * r63;
			r61 = r61 + r62;
			r62 = r6->my;
			r61 = r61 + r62;
			r10 = &r61;
			h2d_Graphics_addVertex(r6,r17,r18,r30,r38,r44,r56,r8,r10);
			r6 = r0->sceneColorLayer;
			if( r6 == NULL ) hl_null_access();
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r17 = r12->x;
			r18 = r0->x;
			r17 = r17 - r18;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r18 = r12->y;
			r19 = r0->y;
			r18 = r18 - r19;
			r64 = r4;
			r9 = &r64;
			h2d_Graphics_drawCircle(r6,r17,r18,r2,r9);
			r6 = r0->sceneColorLayer;
			if( r6 == NULL ) hl_null_access();
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r17 = r12->x;
			r18 = r0->x;
			r17 = r17 - r18;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r18 = r12->y;
			r19 = r0->y;
			r18 = r18 - r19;
			r65 = r4;
			r9 = &r65;
			h2d_Graphics_drawCircle(r6,r17,r18,r2,r9);
			r6 = r0->scenePlaybackLayer;
			if( r6 == NULL ) hl_null_access();
			r66 = 2;
			r17 = (double)r66;
			r8 = &r17;
			r66 = 0;
			r9 = &r66;
			r10 = NULL;
			h2d_Graphics_lineStyle(r6,r8,r9,r10);
			r6 = r0->scenePlaybackLayer;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r18 = r12->x;
			r19 = r0->x;
			r18 = r18 - r19;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r19 = r12->y;
			r24 = r0->y;
			r19 = r19 - r24;
			if( r6 == NULL ) hl_null_access();
			h2d_Graphics_flush(r6);
			r38 = r6->curR;
			r44 = r6->curG;
			r56 = r6->curB;
			r62 = r6->curA;
			r67 = r6->ma;
			r63 = r18 * r67;
			r68 = r6->mc;
			r67 = r19 * r68;
			r63 = r63 + r67;
			r67 = r6->mx;
			r63 = r63 + r67;
			r8 = &r63;
			r68 = r6->mb;
			r67 = r18 * r68;
			r69 = r6->md;
			r68 = r19 * r69;
			r67 = r67 + r68;
			r68 = r6->my;
			r67 = r67 + r68;
			r10 = &r67;
			h2d_Graphics_addVertex(r6,r18,r19,r38,r44,r56,r62,r8,r10);
			r6 = r0->scenePlaybackLayer;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r18 = r12->x;
			r19 = r0->x;
			r18 = r18 - r19;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r19 = r12->y;
			r24 = r0->y;
			r19 = r19 - r24;
			if( r6 == NULL ) hl_null_access();
			r38 = r6->curR;
			r44 = r6->curG;
			r56 = r6->curB;
			r62 = r6->curA;
			r69 = r6->ma;
			r68 = r18 * r69;
			r70 = r6->mc;
			r69 = r19 * r70;
			r68 = r68 + r69;
			r69 = r6->mx;
			r68 = r68 + r69;
			r8 = &r68;
			r70 = r6->mb;
			r69 = r18 * r70;
			r71 = r6->md;
			r70 = r19 * r71;
			r69 = r69 + r70;
			r70 = r6->my;
			r69 = r69 + r70;
			r10 = &r69;
			h2d_Graphics_addVertex(r6,r18,r19,r38,r44,r56,r62,r8,r10);
			r6 = r0->scenePlaybackLayer;
			if( r6 == NULL ) hl_null_access();
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r18 = r12->x;
			r19 = r0->x;
			r18 = r18 - r19;
			r12 = r1->start;
			if( r12 == NULL ) hl_null_access();
			r19 = r12->y;
			r24 = r0->y;
			r19 = r19 - r24;
			r72 = r4;
			r9 = &r72;
			h2d_Graphics_drawCircle(r6,r18,r19,r2,r9);
			r6 = r0->scenePlaybackLayer;
			if( r6 == NULL ) hl_null_access();
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r18 = r12->x;
			r19 = r0->x;
			r18 = r18 - r19;
			r12 = r1->end;
			if( r12 == NULL ) hl_null_access();
			r19 = r12->y;
			r24 = r0->y;
			r19 = r19 - r24;
			r73 = r4;
			r9 = &r73;
			h2d_Graphics_drawCircle(r6,r18,r19,r2,r9);
	}
	label$7b35e61_3_774:
	return;
}

void components_stage_RenderChunk_updateGridChunks(components__stage__RenderChunk r0) {
	components__managers__Grid r18;
	String r11, r15;
	haxe__ds__StringMap r17;
	vvirtual *r3, *r20;
	hl__types__ArrayObj r1;
	$Main r19;
	double r4, r5;
	vdynamic *r16;
	int *r13;
	vbyte *r14;
	int r6, r7, r8, r9, r10, r12;
	r1 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r1);
	r0->gridChunks = r1;
	r4 = r0->x;
	r5 = r0->y;
	r3 = components_managers_Grid_registryPosition(r4,r5);
	r6 = 0;
	label$7b35e61_4_7:
	r8 = 75;
	if( r6 >= r8 ) goto label$7b35e61_4_61;
	r7 = r6;
	++r6;
	r8 = 0;
	label$7b35e61_4_13:
	r10 = 75;
	if( r8 >= r10 ) goto label$7b35e61_4_60;
	r9 = r8;
	++r8;
	r11 = (String)s$x;
	if( r3 == NULL ) hl_null_access();
	r12 = hl_vfields(r3)[2] ? (*(int*)(hl_vfields(r3)[2])) : (int)hl_dyn_geti(r3->value,120/*x*/,&t$_i32);
	r10 = r7 + r12;
	r4 = (double)r10;
	r5 = r0->x;
	r4 = r4 - r5;
	r13 = &r10;
	r14 = hl_ftos(r4,r13);
	r15 = String___alloc__(r14,r10);
	r11 = String___add__(r11,r15);
	r15 = (String)s$y;
	r11 = String___add__(r11,r15);
	r12 = hl_vfields(r3)[3] ? (*(int*)(hl_vfields(r3)[3])) : (int)hl_dyn_geti(r3->value,121/*y*/,&t$_i32);
	r10 = r9 + r12;
	r4 = (double)r10;
	r5 = r0->y;
	r4 = r4 - r5;
	r13 = &r10;
	r14 = hl_ftos(r4,r13);
	r15 = String___alloc__(r14,r10);
	r11 = String___add__(r11,r15);
	r19 = ($Main)g$_Main;
	r18 = r19->grid;
	if( r18 == NULL ) hl_null_access();
	r17 = r18->registry;
	if( r17 == NULL ) hl_null_access();
	r16 = haxe_ds_StringMap_get(r17,r11);
	r20 = hl_to_virtual(&t$vrt_f6fd8f3,(vdynamic*)r16);
	if( r20 ) goto label$7b35e61_4_49;
	goto label$7b35e61_4_13;
	label$7b35e61_4_49:
	r1 = r0->gridChunks;
	if( r1 == NULL ) hl_null_access();
	r19 = ($Main)g$_Main;
	r18 = r19->grid;
	if( r18 == NULL ) hl_null_access();
	r17 = r18->registry;
	if( r17 == NULL ) hl_null_access();
	r16 = haxe_ds_StringMap_get(r17,r11);
	r20 = hl_to_virtual(&t$vrt_f6fd8f3,(vdynamic*)r16);
	r10 = hl_types_ArrayObj_push(r1,((vdynamic*)r20));
	goto label$7b35e61_4_13;
	label$7b35e61_4_60:
	goto label$7b35e61_4_7;
	label$7b35e61_4_61:
	return;
}

