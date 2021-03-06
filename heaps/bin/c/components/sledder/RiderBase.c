﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/sledder/RiderBase.h>
#include <h2d/Object.h>
#include <components/stage/Canvas.h>
#include <_std/Main.h>
#include <haxe/ds/StringMap.h>
#include <components/managers/Riders.h>
extern $Main g$_Main;
String components_sledder_RiderBase_get_name(components__sledder__RiderBase);
bool haxe_ds_StringMap_remove(haxe__ds__StringMap,String);
extern components__sledder__$RiderBase g$_components_sledder_RiderBase;
void h2d_Graphics_clear(h2d__Graphics);
void h2d_Graphics_lineStyle(h2d__Graphics,double*,int*,double*);
void h2d_Graphics_drawCircle(h2d__Graphics,double,double,double,int*);
#include <components/managers/Simulation.h>
void components_sledder_RiderBase_iterate(components__sledder__RiderBase);
void components_sledder_RiderBase_constrainBones(components__sledder__RiderBase);
void components_sledder_RiderBase_collision(components__sledder__RiderBase);
void components_sledder_RiderBase_constrainScarf(components__sledder__RiderBase);
#include <hxlr/rider/Stick.h>
void hxlr_rider_Stick_satisfy(hxlr__rider__Stick,vdynamic*);
void components_sledder_RiderScarf_setColor(components__sledder__RiderScarf,vdynamic*,vdynamic*);
#include <components/managers/Grid.h>
#include <hxlr/lines/LineBase.h>
vvirtual* components_managers_Grid_registryPosition(double,double);
extern String s$x;
extern hl_type t$_i32;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$y;
vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap,String);
extern hl_type t$vrt_f6fd8f3;
extern hl_type t$hl_types_ArrayObj;
String h2d_HtmlText_set_text(h2d__HtmlText,String);
#include <h2d/Font.h>
extern hl_type t$_f64;
extern String s$Bosh;
extern hl_type t$h2d_col_Point;
void h2d_col_Point_new(h2d__col__Point,double*,double*);
extern hl_type t$h2d_Graphics;
void h2d_Graphics_new(h2d__Graphics,h2d__Object);
extern hl_type t$h2d_HtmlText;
h2d__Font hxd_res_DefaultFont_get(void);
void h2d_HtmlText_new(h2d__HtmlText,h2d__Font,h2d__Object);
void hl_types_ArrayObj_new(hl__types__ArrayObj);

void components_sledder_RiderBase_init(components__sledder__RiderBase r0) {
	return;
}

void components_sledder_RiderBase_reset(components__sledder__RiderBase r0) {
	return;
}

void components_sledder_RiderBase_moveToStart(components__sledder__RiderBase r0) {
	hl__types__ArrayObj r3;
	h2d__col__Point r8, r11;
	hxlr__rider__ContactPoint r5;
	double r9, r10;
	vdynamic *r6;
	varray *r7;
	int r1, r4;
	r1 = 0;
	r3 = r0->ridePoints;
	label$2a8c663_3_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r1 >= r4 ) goto label$2a8c663_3_46;
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$2a8c663_3_10;
	r5 = NULL;
	goto label$2a8c663_3_13;
	label$2a8c663_3_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (hxlr__rider__ContactPoint)r6;
	label$2a8c663_3_13:
	++r1;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->pos;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->x;
	r11 = r0->startPos;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->x;
	r9 = r9 + r10;
	r8->x = r9;
	r8 = r5->pos;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->y;
	r11 = r0->startPos;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->y;
	r9 = r9 + r10;
	r8->y = r9;
	r8 = r5->vel;
	if( r8 == NULL ) hl_null_access();
	r11 = r5->pos;
	if( r11 == NULL ) hl_null_access();
	r9 = r11->x;
	r10 = 0.40000000000000002;
	r9 = r9 - r10;
	r8->x = r9;
	r8 = r5->vel;
	if( r8 == NULL ) hl_null_access();
	r11 = r5->pos;
	if( r11 == NULL ) hl_null_access();
	r9 = r11->y;
	r8->y = r9;
	goto label$2a8c663_3_2;
	label$2a8c663_3_46:
	r1 = 0;
	r3 = r0->scarfPoints;
	label$2a8c663_3_48:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r1 >= r4 ) goto label$2a8c663_3_92;
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$2a8c663_3_56;
	r5 = NULL;
	goto label$2a8c663_3_59;
	label$2a8c663_3_56:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (hxlr__rider__ContactPoint)r6;
	label$2a8c663_3_59:
	++r1;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->pos;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->x;
	r11 = r0->startPos;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->x;
	r9 = r9 + r10;
	r8->x = r9;
	r8 = r5->pos;
	if( r8 == NULL ) hl_null_access();
	r9 = r8->y;
	r11 = r0->startPos;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->y;
	r9 = r9 + r10;
	r8->y = r9;
	r8 = r5->vel;
	if( r8 == NULL ) hl_null_access();
	r11 = r5->pos;
	if( r11 == NULL ) hl_null_access();
	r9 = r11->x;
	r10 = 0.40000000000000002;
	r9 = r9 - r10;
	r8->x = r9;
	r8 = r5->vel;
	if( r8 == NULL ) hl_null_access();
	r11 = r5->pos;
	if( r11 == NULL ) hl_null_access();
	r9 = r11->y;
	r8->y = r9;
	goto label$2a8c663_3_48;
	label$2a8c663_3_92:
	return;
}

void components_sledder_RiderBase_delete(components__sledder__RiderBase r0) {
	String r10;
	components__managers__Riders r9;
	haxe__ds__StringMap r8;
	h2d__Graphics r5;
	bool r7;
	h2d__Object r2;
	h2d__HtmlText r6;
	$Main r4;
	components__stage__Canvas r3;
	int r11, r12;
	r4 = ($Main)g$_Main;
	r3 = r4->canvas;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->sledderLayer;
	if( r2 == NULL ) hl_null_access();
	r5 = r0->gfx;
	((void (*)(h2d__Object,h2d__Graphics))r2->$type->vobj_proto[6])(r2,r5);
	r4 = ($Main)g$_Main;
	r3 = r4->canvas;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->sledderLayer;
	if( r2 == NULL ) hl_null_access();
	r6 = r0->nameField;
	((void (*)(h2d__Object,h2d__HtmlText))r2->$type->vobj_proto[6])(r2,r6);
	r4 = ($Main)g$_Main;
	r9 = r4->riders;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->riders;
	if( r8 == NULL ) hl_null_access();
	r10 = components_sledder_RiderBase_get_name(r0);
	r7 = haxe_ds_StringMap_remove(r8,r10);
	r4 = ($Main)g$_Main;
	r9 = r4->riders;
	if( r9 == NULL ) hl_null_access();
	r11 = r9->riderCount;
	r12 = 1;
	r11 = r11 - r12;
	r9->riderCount = r11;
	return;
}

void components_sledder_RiderBase_renderRider(components__sledder__RiderBase r0) {
	hl__types__ArrayObj r10;
	h2d__Graphics r19;
	bool r4;
	h2d__HtmlText r1, r3;
	$Main r8;
	h2d__col__Point r9;
	h3d__Vector r17;
	hxlr__rider__ContactPoint r13;
	components__sledder__$RiderBase r18;
	components__stage__Canvas r7;
	double r5, r6, r25, r26;
	int *r21;
	double *r20, *r22;
	vdynamic *r14, *r16;
	varray *r15;
	int r11, r12, r23, r24;
	r1 = r0->nameField;
	r3 = r0->nameField;
	if( r3 == NULL ) hl_null_access();
	r4 = true;
	r3->posChanged = r4;
	if( r1 == NULL ) hl_null_access();
	r4 = true;
	r1->posChanged = r4;
	r5 = 1.;
	r8 = ($Main)g$_Main;
	r7 = r8->canvas;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->scaleX;
	r5 = r5 / r6;
	r3->scaleY = r5;
	r1->scaleX = r5;
	r1 = r0->nameField;
	r10 = r0->ridePoints;
	if( r10 == NULL ) hl_null_access();
	r11 = 5;
	r12 = r10->length;
	if( ((unsigned)r11) < ((unsigned)r12) ) goto label$2a8c663_5_24;
	r13 = NULL;
	goto label$2a8c663_5_27;
	label$2a8c663_5_24:
	r15 = r10->array;
	r14 = ((vdynamic**)(r15 + 1))[r11];
	r13 = (hxlr__rider__ContactPoint)r14;
	label$2a8c663_5_27:
	if( r13 == NULL ) hl_null_access();
	r9 = r13->pos;
	if( r9 == NULL ) hl_null_access();
	r5 = r9->x;
	if( r1 == NULL ) hl_null_access();
	r4 = true;
	r1->posChanged = r4;
	r1->x = r5;
	r1 = r0->nameField;
	r10 = r0->ridePoints;
	if( r10 == NULL ) hl_null_access();
	r11 = 5;
	r12 = r10->length;
	if( ((unsigned)r11) < ((unsigned)r12) ) goto label$2a8c663_5_43;
	r13 = NULL;
	goto label$2a8c663_5_46;
	label$2a8c663_5_43:
	r15 = r10->array;
	r14 = ((vdynamic**)(r15 + 1))[r11];
	r13 = (hxlr__rider__ContactPoint)r14;
	label$2a8c663_5_46:
	if( r13 == NULL ) hl_null_access();
	r9 = r13->pos;
	if( r9 == NULL ) hl_null_access();
	r5 = r9->y;
	if( r1 == NULL ) hl_null_access();
	r4 = true;
	r1->posChanged = r4;
	r1->y = r5;
	r16 = r0->crashed;
	r4 = r16 ? r16->v.b : 0;
	if( !r4 ) goto label$2a8c663_5_63;
	r1 = r0->nameField;
	if( r1 == NULL ) hl_null_access();
	r18 = (components__sledder__$RiderBase)g$_components_sledder_RiderBase;
	r17 = r18->RED;
	r1->color = r17;
	goto label$2a8c663_5_68;
	label$2a8c663_5_63:
	r1 = r0->nameField;
	if( r1 == NULL ) hl_null_access();
	r18 = (components__sledder__$RiderBase)g$_components_sledder_RiderBase;
	r17 = r18->WHITE;
	r1->color = r17;
	label$2a8c663_5_68:
	r4 = r0->drawContactPoints;
	if( r4 ) goto label$2a8c663_5_71;
	return;
	label$2a8c663_5_71:
	r19 = r0->gfx;
	if( r19 == NULL ) hl_null_access();
	h2d_Graphics_clear(r19);
	r19 = r0->gfx;
	if( r19 == NULL ) hl_null_access();
	r11 = 1;
	r5 = (double)r11;
	r20 = &r5;
	r11 = 13369548;
	r21 = &r11;
	r22 = NULL;
	h2d_Graphics_lineStyle(r19,r20,r21,r22);
	r12 = 0;
	r10 = r0->ridePoints;
	label$2a8c663_5_85:
	if( r10 == NULL ) hl_null_access();
	r24 = r10->length;
	if( r12 >= r24 ) goto label$2a8c663_5_111;
	r24 = r10->length;
	if( ((unsigned)r12) < ((unsigned)r24) ) goto label$2a8c663_5_93;
	r13 = NULL;
	goto label$2a8c663_5_96;
	label$2a8c663_5_93:
	r15 = r10->array;
	r14 = ((vdynamic**)(r15 + 1))[r12];
	r13 = (hxlr__rider__ContactPoint)r14;
	label$2a8c663_5_96:
	++r12;
	r19 = r0->gfx;
	if( r19 == NULL ) hl_null_access();
	if( r13 == NULL ) hl_null_access();
	r9 = r13->pos;
	if( r9 == NULL ) hl_null_access();
	r6 = r9->x;
	r9 = r13->pos;
	if( r9 == NULL ) hl_null_access();
	r25 = r9->y;
	r26 = 0.10000000000000001;
	r23 = 5;
	r21 = &r23;
	h2d_Graphics_drawCircle(r19,r6,r25,r26,r21);
	goto label$2a8c663_5_85;
	label$2a8c663_5_111:
	return;
}

void components_sledder_RiderBase_stepRider(components__sledder__RiderBase r0) {
	bool r2;
	$Main r6;
	components__managers__Simulation r5;
	vdynamic *r3;
	int r4, r7;
	r2 = r0->enabled;
	if( !r2 ) goto label$2a8c663_6_34;
	r3 = r0->enabledFrame;
	if( !r3 ) goto label$2a8c663_6_11;
	r6 = ($Main)g$_Main;
	r5 = r6->simulation;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->frames;
	r3 = r0->enabledFrame;
	r7 = r3 ? r3->v.i : 0;
	if( r4 < r7 ) goto label$2a8c663_6_34;
	label$2a8c663_6_11:
	r3 = r0->disableFrame;
	if( !r3 ) goto label$2a8c663_6_20;
	r6 = ($Main)g$_Main;
	r5 = r6->simulation;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->frames;
	r3 = r0->disableFrame;
	r7 = r3 ? r3->v.i : 0;
	if( r4 >= r7 ) goto label$2a8c663_6_34;
	label$2a8c663_6_20:
	components_sledder_RiderBase_iterate(r0);
	components_sledder_RiderBase_constrainBones(r0);
	components_sledder_RiderBase_collision(r0);
	components_sledder_RiderBase_constrainBones(r0);
	components_sledder_RiderBase_collision(r0);
	components_sledder_RiderBase_constrainBones(r0);
	components_sledder_RiderBase_collision(r0);
	components_sledder_RiderBase_constrainBones(r0);
	components_sledder_RiderBase_collision(r0);
	components_sledder_RiderBase_constrainBones(r0);
	components_sledder_RiderBase_collision(r0);
	components_sledder_RiderBase_constrainBones(r0);
	components_sledder_RiderBase_collision(r0);
	components_sledder_RiderBase_constrainScarf(r0);
	label$2a8c663_6_34:
	return;
}

void components_sledder_RiderBase_constrainScarf(components__sledder__RiderBase r0) {
	hxlr__rider__Stick r5;
	hl__types__ArrayObj r3;
	vdynamic *r6, *r8;
	varray *r7;
	int r1, r4;
	r1 = 0;
	r3 = r0->scarves;
	label$2a8c663_7_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r1 >= r4 ) goto label$2a8c663_7_18;
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$2a8c663_7_10;
	r5 = NULL;
	goto label$2a8c663_7_13;
	label$2a8c663_7_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (hxlr__rider__Stick)r6;
	label$2a8c663_7_13:
	++r1;
	if( r5 == NULL ) hl_null_access();
	r8 = r0->crashed;
	hxlr_rider_Stick_satisfy(r5,r8);
	goto label$2a8c663_7_2;
	label$2a8c663_7_18:
	return;
}

void components_sledder_RiderBase_iterate(components__sledder__RiderBase r0) {
	hl__types__ArrayObj r3;
	h2d__col__Point r8;
	hxlr__rider__ContactPoint r5;
	vdynamic *r6;
	varray *r7;
	int r1, r4;
	r1 = 0;
	r3 = r0->ridePoints;
	label$2a8c663_8_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r1 >= r4 ) goto label$2a8c663_8_18;
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$2a8c663_8_10;
	r5 = NULL;
	goto label$2a8c663_8_13;
	label$2a8c663_8_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (hxlr__rider__ContactPoint)r6;
	label$2a8c663_8_13:
	++r1;
	if( r5 == NULL ) hl_null_access();
	r8 = r0->gravity;
	((void (*)(hxlr__rider__ContactPoint,h2d__col__Point))r5->$type->vobj_proto[0])(r5,r8);
	goto label$2a8c663_8_2;
	label$2a8c663_8_18:
	r1 = 0;
	r3 = r0->scarfPoints;
	label$2a8c663_8_20:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r1 >= r4 ) goto label$2a8c663_8_36;
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$2a8c663_8_28;
	r5 = NULL;
	goto label$2a8c663_8_31;
	label$2a8c663_8_28:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (hxlr__rider__ContactPoint)r6;
	label$2a8c663_8_31:
	++r1;
	if( r5 == NULL ) hl_null_access();
	r8 = r0->gravity;
	((void (*)(hxlr__rider__ContactPoint,h2d__col__Point))r5->$type->vobj_proto[0])(r5,r8);
	goto label$2a8c663_8_20;
	label$2a8c663_8_36:
	return;
}

void components_sledder_RiderBase_constrainBones(components__sledder__RiderBase r0) {
	hxlr__rider__Stick r5;
	hl__types__ArrayObj r3;
	vdynamic *r6, *r8;
	varray *r7;
	int r1, r4;
	r1 = 0;
	r3 = r0->bones;
	label$2a8c663_9_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r1 >= r4 ) goto label$2a8c663_9_18;
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$2a8c663_9_10;
	r5 = NULL;
	goto label$2a8c663_9_13;
	label$2a8c663_9_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (hxlr__rider__Stick)r6;
	label$2a8c663_9_13:
	++r1;
	if( r5 == NULL ) hl_null_access();
	r8 = r0->crashed;
	hxlr_rider_Stick_satisfy(r5,r8);
	goto label$2a8c663_9_2;
	label$2a8c663_9_18:
	return;
}

void components_sledder_RiderBase_setColor(components__sledder__RiderBase r0,vdynamic* r1,vdynamic* r2) {
	components__sledder__RiderScarf r4;
	r4 = r0->neckscarf;
	if( r4 == NULL ) hl_null_access();
	components_sledder_RiderScarf_setColor(r4,r1,r2);
	return;
}

void components_sledder_RiderBase_collision(components__sledder__RiderBase r0) {
	components__managers__Grid r23;
	String r17, r21;
	haxe__ds__StringMap r22;
	vvirtual *r10, *r25;
	hl__types__ArrayObj r3, r6;
	$Main r24;
	h2d__col__Point r12;
	hxlr__lines__LineBase r27;
	hxlr__rider__ContactPoint r7;
	double r11, r13;
	int *r19;
	vdynamic *r8;
	vbyte *r20;
	varray *r9;
	int r1, r4, r5, r14, r15, r16, r18, r26;
	r1 = 0;
	r3 = r0->ridePoints;
	label$2a8c663_11_2:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r1 >= r5 ) goto label$2a8c663_11_89;
	r5 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r5) ) goto label$2a8c663_11_10;
	r7 = NULL;
	goto label$2a8c663_11_13;
	label$2a8c663_11_10:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r1];
	r7 = (hxlr__rider__ContactPoint)r8;
	label$2a8c663_11_13:
	++r1;
	if( r7 == NULL ) hl_null_access();
	r12 = r7->pos;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->x;
	r12 = r7->pos;
	if( r12 == NULL ) hl_null_access();
	r13 = r12->y;
	r10 = components_managers_Grid_registryPosition(r11,r13);
	r4 = -1;
	label$2a8c663_11_23:
	r14 = 2;
	if( r4 >= r14 ) goto label$2a8c663_11_88;
	r5 = r4;
	++r4;
	r14 = -1;
	label$2a8c663_11_29:
	r16 = 2;
	if( r14 >= r16 ) goto label$2a8c663_11_87;
	r15 = r14;
	++r14;
	r17 = (String)s$x;
	if( r10 == NULL ) hl_null_access();
	r18 = hl_vfields(r10)[2] ? (*(int*)(hl_vfields(r10)[2])) : (int)hl_dyn_geti(r10->value,120/*x*/,&t$_i32);
	r16 = r5 + r18;
	r19 = &r16;
	r20 = hl_itos(r16,r19);
	r21 = String___alloc__(r20,r16);
	r17 = String___add__(r17,r21);
	r21 = (String)s$y;
	r17 = String___add__(r17,r21);
	r18 = hl_vfields(r10)[3] ? (*(int*)(hl_vfields(r10)[3])) : (int)hl_dyn_geti(r10->value,121/*y*/,&t$_i32);
	r16 = r15 + r18;
	r19 = &r16;
	r20 = hl_itos(r16,r19);
	r21 = String___alloc__(r20,r16);
	r17 = String___add__(r17,r21);
	r24 = ($Main)g$_Main;
	r23 = r24->grid;
	if( r23 == NULL ) hl_null_access();
	r22 = r23->registry;
	if( r22 == NULL ) hl_null_access();
	r8 = haxe_ds_StringMap_get(r22,r17);
	r25 = hl_to_virtual(&t$vrt_f6fd8f3,(vdynamic*)r8);
	if( r25 ) goto label$2a8c663_11_59;
	goto label$2a8c663_11_29;
	label$2a8c663_11_59:
	r24 = ($Main)g$_Main;
	r23 = r24->grid;
	if( r23 == NULL ) hl_null_access();
	r22 = r23->registry;
	if( r22 == NULL ) hl_null_access();
	r8 = haxe_ds_StringMap_get(r22,r17);
	r25 = hl_to_virtual(&t$vrt_f6fd8f3,(vdynamic*)r8);
	r16 = 0;
	if( r25 == NULL ) hl_null_access();
	r6 = hl_vfields(r25)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r25)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r25->value,233152173/*allLines*/,&t$hl_types_ArrayObj);
	label$2a8c663_11_69:
	if( r6 == NULL ) hl_null_access();
	r26 = r6->length;
	if( r16 >= r26 ) goto label$2a8c663_11_86;
	r26 = r6->length;
	if( ((unsigned)r16) < ((unsigned)r26) ) goto label$2a8c663_11_77;
	r27 = NULL;
	goto label$2a8c663_11_80;
	label$2a8c663_11_77:
	r9 = r6->array;
	r8 = ((vdynamic**)(r9 + 1))[r16];
	r27 = (hxlr__lines__LineBase)r8;
	label$2a8c663_11_80:
	++r16;
	if( r27 ) goto label$2a8c663_11_83;
	goto label$2a8c663_11_69;
	label$2a8c663_11_83:
	if( r27 == NULL ) hl_null_access();
	((void (*)(hxlr__lines__LineBase,hxlr__rider__ContactPoint))r27->$type->vobj_proto[1])(r27,r7);
	goto label$2a8c663_11_69;
	label$2a8c663_11_86:
	goto label$2a8c663_11_29;
	label$2a8c663_11_87:
	goto label$2a8c663_11_23;
	label$2a8c663_11_88:
	goto label$2a8c663_11_2;
	label$2a8c663_11_89:
	return;
}

String components_sledder_RiderBase_get_name(components__sledder__RiderBase r0) {
	String r1;
	r1 = r0->name;
	return r1;
}

int components_sledder_RiderBase_get_colorA(components__sledder__RiderBase r0) {
	vdynamic *r1;
	int r3;
	components__sledder__RiderScarf r2;
	r2 = r0->neckscarf;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->colorA;
	r3 = r1 ? r1->v.i : 0;
	return r3;
}

int components_sledder_RiderBase_get_colorB(components__sledder__RiderBase r0) {
	vdynamic *r1;
	int r3;
	components__sledder__RiderScarf r2;
	r2 = r0->neckscarf;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->colorB;
	r3 = r1 ? r1->v.i : 0;
	return r3;
}

String components_sledder_RiderBase_set_name(components__sledder__RiderBase r0,String r1) {
	String r2;
	h2d__HtmlText r3;
	r3 = r0->nameField;
	if( r3 == NULL ) hl_null_access();
	r2 = h2d_HtmlText_set_text(r3,r1);
	r0->name = r1;
	return r1;
}

bool components_sledder_RiderBase_set_crashed(components__sledder__RiderBase r0,bool r1) {
	bool r2;
	vdynamic *r3;
	r2 = r0->invincible;
	if( !r2 ) goto label$2a8c663_16_6;
	r3 = NULL;
	r0->crashed = r3;
	r2 = r3 ? r3->v.b : 0;
	return r2;
	label$2a8c663_16_6:
	r3 = hl_alloc_dynbool(r1);
	r0->crashed = r3;
	r2 = r3 ? r3->v.b : 0;
	return r2;
}

void components_sledder_RiderBase_new(components__sledder__RiderBase r0,vdynamic* r1,vdynamic* r2,String r3,vdynamic* r4,vdynamic* r5) {
	String r7;
	hl__types__ArrayObj r24;
	h2d__Graphics r18;
	bool r8;
	h2d__Object r19;
	h2d__HtmlText r22;
	h2d__Font r23;
	$Main r21;
	h2d__col__Point r9;
	components__stage__Canvas r20;
	double r6, r15, r16, r17;
	vdynamic *r13;
	double *r10, *r11;
	int r14;
	if( r1 ) goto label$2a8c663_17_3;
	r6 = 0.;
	r1 = hl_alloc_dynamic(&t$_f64);
	r1->v.d = r6;
	label$2a8c663_17_3:
	if( r2 ) goto label$2a8c663_17_6;
	r6 = 0.;
	r2 = hl_alloc_dynamic(&t$_f64);
	r2->v.d = r6;
	label$2a8c663_17_6:
	if( r3 ) goto label$2a8c663_17_9;
	r7 = (String)s$Bosh;
	r3 = r7;
	label$2a8c663_17_9:
	r8 = true;
	r0->enabled = r8;
	r8 = true;
	r0->drawContactPoints = r8;
	r9 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r10 = NULL;
	r11 = NULL;
	h2d_col_Point_new(r9,r10,r11);
	r0->startPos = r9;
	r8 = false;
	r0->undead = r8;
	r8 = false;
	r13 = hl_alloc_dynbool(r8);
	r0->crashed = r13;
	r8 = false;
	r0->invincible = r8;
	r9 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	r14 = 0;
	r6 = (double)r14;
	r10 = &r6;
	r15 = 0.17499999999999999;
	r11 = &r15;
	h2d_col_Point_new(r9,r10,r11);
	r0->gravity = r9;
	r9 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	if( r1 ) goto label$2a8c663_17_37;
	r10 = NULL;
	goto label$2a8c663_17_39;
	label$2a8c663_17_37:
	r16 = r1 ? r1->v.d : 0;
	r10 = &r16;
	label$2a8c663_17_39:
	if( r2 ) goto label$2a8c663_17_42;
	r11 = NULL;
	goto label$2a8c663_17_44;
	label$2a8c663_17_42:
	r17 = r2 ? r2->v.d : 0;
	r11 = &r17;
	label$2a8c663_17_44:
	h2d_col_Point_new(r9,r10,r11);
	r0->startPos = r9;
	r18 = (h2d__Graphics)hl_alloc_obj(&t$h2d_Graphics);
	r19 = NULL;
	h2d_Graphics_new(r18,r19);
	r0->gfx = r18;
	r21 = ($Main)g$_Main;
	r20 = r21->canvas;
	if( r20 == NULL ) hl_null_access();
	r19 = r20->sledderLayer;
	if( r19 == NULL ) hl_null_access();
	r18 = r0->gfx;
	((void (*)(h2d__Object,h2d__Graphics))r19->$type->vobj_proto[1])(r19,r18);
	r22 = (h2d__HtmlText)hl_alloc_obj(&t$h2d_HtmlText);
	r23 = hxd_res_DefaultFont_get();
	r19 = NULL;
	h2d_HtmlText_new(r22,r23,r19);
	r0->nameField = r22;
	r21 = ($Main)g$_Main;
	r20 = r21->canvas;
	if( r20 == NULL ) hl_null_access();
	r19 = r20->sledderLayer;
	if( r19 == NULL ) hl_null_access();
	r22 = r0->nameField;
	((void (*)(h2d__Object,h2d__HtmlText))r19->$type->vobj_proto[1])(r19,r22);
	r7 = components_sledder_RiderBase_set_name(r0,r3);
	r24 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r24);
	r0->ridePoints = r24;
	r24 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r24);
	r0->bones = r24;
	r24 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r24);
	r0->scarves = r24;
	r0->enabledFrame = r4;
	r0->disableFrame = r5;
	return;
}

