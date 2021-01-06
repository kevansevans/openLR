﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/stage/Canvas.h>
#include <haxe/ds/StringMap.h>
#include <components/managers/Riders.h>
#include <_std/Main.h>
#include <components/sledder/RiderBase.h>
extern $Main g$_Main;
vvirtual* haxe_ds_StringMap_iterator(haxe__ds__StringMap);
extern hl_type t$vrt_91f9e97;
extern hl_type t$fun_bf7849e;
extern hl_type t$fun_6c7a217;
#include <components/stage/LRConsole.h>
extern String s$Set_canvas_position_to_;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$7215ee9;
extern hl_type t$_i32;
#include <h2d/Console.h>
void h2d_Console_log(h2d__Console,String,vdynamic*);
double h2d_Scene_get_mouseX(h2d__Scene);
double h2d_Scene_get_mouseY(h2d__Scene);
double Math_max(double,double);
double Math_min(double,double);
#include <components/managers/Grid.h>
#include <components/lines/LineBase.h>
vvirtual* components_managers_Grid_registryPosition(double,double);
extern String s$;
extern String s$x;
extern String s$y;
vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap,String);
extern hl_type t$vrt_f730762;
extern hl_type t$hl_types_ArrayObj;
void components_stage_Canvas_removeLine(components__stage__Canvas,components__lines__LineBase);
#include <components/lines/Floor.h>
#include <h2d/Graphics.h>
#include <components/lines/Accel.h>
#include <components/lines/Scenery.h>
extern String s$New_line_creation_error_;
extern hl_type t$components_lines_Floor;
extern hl_type t$h2d_col_Point;
void h2d_col_Point_new(h2d__col__Point,double*,double*);
void components_lines_Floor_new(components__lines__Floor,h2d__col__Point,h2d__col__Point,bool);
void components_lines_LineBase_setLim(components__lines__LineBase,int);
extern hl_type t$components_lines_Accel;
void components_lines_Accel_new(components__lines__Accel,h2d__col__Point,h2d__col__Point,bool);
extern hl_type t$components_lines_Scenery;
void components_lines_Scenery_new(components__lines__Scenery,h2d__col__Point,h2d__col__Point,bool);
void components_managers_Grid_register(components__managers__Grid,components__lines__LineBase);
void components_managers_Grid_unregister(components__managers__Grid,components__lines__LineBase);
bool h2d_Object_set_visible(h2d__Object,bool);
extern String s$Draw_mode_set_to_Edit;
extern String s$Draw_mode_set_to_Playback;
extern String s$Draw_mode_set_to_No_Scenery_Edit;
extern String s$cb653d7;
extern String s$2504e23;
extern String s$83a17f8;
extern venum* g$6537d82;
void h2d_Scene_new(h2d__Scene);
extern hl_type t$h2d_Object;
void h2d_Object_new(h2d__Object,h2d__Object);

void components_stage_Canvas_drawRiders(components__stage__Canvas r0) {
	components__managers__Riders r3;
	haxe__ds__StringMap r2;
	vvirtual *r1, *r5;
	bool r7;
	components__sledder__RiderBase r8;
	$Main r4;
	r4 = ($Main)g$_Main;
	r3 = r4->riders;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->riders;
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_ds_StringMap_iterator(r2);
	r5 = hl_to_virtual(&t$vrt_91f9e97,(vdynamic*)r1);
	label$ae2bdbd_1_7:
	if( r5 == NULL ) hl_null_access();
	if( hl_vfields(r5)[0] ) r7 = ((bool (*)(vdynamic*))hl_vfields(r5)[0])(r5->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r5->value,&t$fun_bf7849e,407283053/*hasNext*/,NULL,&ret);
		r7 = (bool)ret.v.i;
	}
	if( !r7 ) goto label$ae2bdbd_1_15;
	if( hl_vfields(r5)[1] ) r8 = ((components__sledder__RiderBase (*)(vdynamic*))hl_vfields(r5)[1])(r5->value); else {
		r8 = (components__sledder__RiderBase)hl_dyn_call_obj(r5->value,&t$fun_6c7a217,151160317/*next*/,NULL,NULL);
	}
	if( r8 == NULL ) hl_null_access();
	((void (*)(components__sledder__RiderBase))r8->$type->vobj_proto[2])(r8);
	goto label$ae2bdbd_1_7;
	label$ae2bdbd_1_15:
	return;
}

void components_stage_Canvas_setCanvasPosition(components__stage__Canvas r0,double r1,double r2,vdynamic* r3) {
	String r8, r12;
	bool r4;
	$Main r7;
	vdynamic *r13;
	int *r10;
	vbyte *r11;
	int r9;
	components__stage__LRConsole r6;
	if( r3 ) goto label$ae2bdbd_2_3;
	r4 = true;
	r3 = hl_alloc_dynbool(r4);
	label$ae2bdbd_2_3:
	r4 = true;
	r0->posChanged = r4;
	r0->x = r1;
	r4 = true;
	r0->posChanged = r4;
	r0->y = r2;
	r4 = r3 ? r3->v.b : 0;
	if( !r4 ) goto label$ae2bdbd_2_28;
	r7 = ($Main)g$_Main;
	r6 = r7->console;
	if( r6 == NULL ) hl_null_access();
	r8 = (String)s$Set_canvas_position_to_;
	r10 = &r9;
	r11 = hl_ftos(r1,r10);
	r12 = String___alloc__(r11,r9);
	r8 = String___add__(r8,r12);
	r12 = (String)s$7215ee9;
	r8 = String___add__(r8,r12);
	r10 = &r9;
	r11 = hl_ftos(r2,r10);
	r12 = String___alloc__(r11,r9);
	r8 = String___add__(r8,r12);
	r9 = 187;
	r13 = hl_alloc_dynamic(&t$_i32);
	r13->v.i = r9;
	h2d_Console_log(((h2d__Console)r6),r8,r13);
	label$ae2bdbd_2_28:
	return;
}

void components_stage_Canvas_addCanvasPosition(components__stage__Canvas r0,double r1,double r2) {
	bool r4;
	double r5;
	if( r0 == NULL ) hl_null_access();
	r4 = true;
	r0->posChanged = r4;
	r5 = r0->x;
	r5 = r5 + r1;
	r0->x = r5;
	r4 = true;
	r0->posChanged = r4;
	r5 = r0->y;
	r5 = r5 + r2;
	r0->y = r5;
	return;
}

void components_stage_Canvas_zoomCanvas(components__stage__Canvas r0,int r1) {
	bool r9;
	double r2, r4, r5, r6, r7, r10, r11, r12;
	int r8;
	r2 = r0->scaleX;
	r4 = h2d_Scene_get_mouseX(((h2d__Scene)r0));
	r5 = h2d_Scene_get_mouseY(((h2d__Scene)r0));
	r6 = r0->scaleX;
	r8 = 0;
	if( r8 >= r1 ) goto label$ae2bdbd_4_8;
	r7 = 0.82499999999999996;
	goto label$ae2bdbd_4_9;
	label$ae2bdbd_4_8:
	r7 = 1.125;
	label$ae2bdbd_4_9:
	r6 = r6 * r7;
	r7 = 0.01;
	r6 = Math_max(r6,r7);
	r7 = 100.;
	r6 = Math_min(r6,r7);
	r9 = true;
	r0->posChanged = r9;
	r0->scaleX = r6;
	r9 = true;
	r0->posChanged = r9;
	r0->scaleY = r6;
	r7 = r0->scaleX;
	if( r0 == NULL ) hl_null_access();
	r9 = true;
	r0->posChanged = r9;
	r10 = r0->x;
	r12 = r7 - r2;
	r11 = r4 * r12;
	r11 = -r11;
	r10 = r10 + r11;
	r0->x = r10;
	r9 = true;
	r0->posChanged = r9;
	r10 = r0->y;
	r12 = r7 - r2;
	r11 = r5 * r12;
	r11 = -r11;
	r10 = r10 + r11;
	r0->y = r10;
	return;
}

void components_stage_Canvas_erase(components__stage__Canvas r0) {
	components__managers__Grid r18;
	String r5, r11, r15;
	hl__types__ArrayObj r22;
	haxe__ds__StringMap r17;
	vvirtual *r1, *r20;
	$Main r19;
	h2d__col__Point r28;
	components__lines__LineBase r24;
	double r2, r3, r21, r26, r27, r29, r30, r31, r32, r33, r34;
	vdynamic *r16;
	int *r13;
	varray *r25;
	vbyte *r14;
	int r6, r7, r8, r9, r10, r12, r23;
	r2 = h2d_Scene_get_mouseX(((h2d__Scene)r0));
	r3 = h2d_Scene_get_mouseY(((h2d__Scene)r0));
	r1 = components_managers_Grid_registryPosition(r2,r3);
	r5 = (String)s$;
	r2 = 1.;
	r3 = r0->scaleX;
	r2 = r2 / r3;
	r6 = -1;
	label$ae2bdbd_5_8:
	r8 = 2;
	if( r6 >= r8 ) goto label$ae2bdbd_5_215;
	r7 = r6;
	++r6;
	r8 = -1;
	label$ae2bdbd_5_14:
	r10 = 2;
	if( r8 >= r10 ) goto label$ae2bdbd_5_214;
	r9 = r8;
	++r8;
	r11 = (String)s$x;
	if( r1 == NULL ) hl_null_access();
	r12 = hl_vfields(r1)[2] ? (*(int*)(hl_vfields(r1)[2])) : (int)hl_dyn_geti(r1->value,120/*x*/,&t$_i32);
	r10 = r7 + r12;
	r13 = &r10;
	r14 = hl_itos(r10,r13);
	r15 = String___alloc__(r14,r10);
	r11 = String___add__(r11,r15);
	r15 = (String)s$y;
	r11 = String___add__(r11,r15);
	r12 = hl_vfields(r1)[3] ? (*(int*)(hl_vfields(r1)[3])) : (int)hl_dyn_geti(r1->value,121/*y*/,&t$_i32);
	r10 = r9 + r12;
	r13 = &r10;
	r14 = hl_itos(r10,r13);
	r15 = String___alloc__(r14,r10);
	r11 = String___add__(r11,r15);
	r19 = ($Main)g$_Main;
	r18 = r19->grid;
	if( r18 == NULL ) hl_null_access();
	r17 = r18->registry;
	if( r17 == NULL ) hl_null_access();
	r16 = haxe_ds_StringMap_get(r17,r11);
	r20 = hl_to_virtual(&t$vrt_f730762,(vdynamic*)r16);
	if( r20 ) goto label$ae2bdbd_5_44;
	goto label$ae2bdbd_5_14;
	label$ae2bdbd_5_44:
	r19 = ($Main)g$_Main;
	r18 = r19->grid;
	if( r18 == NULL ) hl_null_access();
	r17 = r18->registry;
	if( r17 == NULL ) hl_null_access();
	r16 = haxe_ds_StringMap_get(r17,r11);
	r20 = hl_to_virtual(&t$vrt_f730762,(vdynamic*)r16);
	r3 = h2d_Scene_get_mouseX(((h2d__Scene)r0));
	r21 = h2d_Scene_get_mouseY(((h2d__Scene)r0));
	r10 = 0;
	if( r20 == NULL ) hl_null_access();
	r22 = hl_vfields(r20)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r20)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r20->value,-246583750/*colliders*/,&t$hl_types_ArrayObj);
	label$ae2bdbd_5_56:
	if( r22 == NULL ) hl_null_access();
	r23 = r22->length;
	if( r10 >= r23 ) goto label$ae2bdbd_5_133;
	r23 = r22->length;
	if( ((unsigned)r10) < ((unsigned)r23) ) goto label$ae2bdbd_5_64;
	r24 = NULL;
	goto label$ae2bdbd_5_67;
	label$ae2bdbd_5_64:
	r25 = r22->array;
	r16 = ((vdynamic**)(r25 + 1))[r10];
	r24 = (components__lines__LineBase)r16;
	label$ae2bdbd_5_67:
	++r10;
	r26 = h2d_Scene_get_mouseX(((h2d__Scene)r0));
	if( r24 == NULL ) hl_null_access();
	r28 = r24->start;
	if( r28 == NULL ) hl_null_access();
	r27 = r28->x;
	r26 = r26 - r27;
	r27 = h2d_Scene_get_mouseY(((h2d__Scene)r0));
	r28 = r24->start;
	if( r28 == NULL ) hl_null_access();
	r29 = r28->y;
	r27 = r27 - r29;
	r30 = 2.;
	r29 = hl_math_pow(r26,r30);
	r31 = 2.;
	r30 = hl_math_pow(r27,r31);
	r29 = r29 + r30;
	r29 = hl_math_sqrt(r29);
	r30 = h2d_Scene_get_mouseX(((h2d__Scene)r0));
	r28 = r24->end;
	if( r28 == NULL ) hl_null_access();
	r31 = r28->x;
	r30 = r30 - r31;
	r31 = 2.;
	r30 = hl_math_pow(r30,r31);
	r31 = h2d_Scene_get_mouseY(((h2d__Scene)r0));
	r28 = r24->end;
	if( r28 == NULL ) hl_null_access();
	r32 = r28->y;
	r31 = r31 - r32;
	r32 = 2.;
	r31 = hl_math_pow(r31,r32);
	r30 = r30 + r31;
	r30 = hl_math_sqrt(r30);
	r31 = r24->nx;
	r31 = r31 * r26;
	r32 = r24->ny;
	r32 = r32 * r27;
	r31 = r31 + r32;
	r31 = hl_math_abs(r31);
	r33 = r24->dx;
	r32 = r26 * r33;
	r34 = r24->dy;
	r33 = r27 * r34;
	r32 = r32 + r33;
	r33 = r24->invSqrDistance;
	r32 = r32 * r33;
	r12 = r0->eraserSize;
	r34 = (double)r12;
	r34 = r34 * r2;
	if( r29 < r34 ) goto label$ae2bdbd_5_130;
	r12 = r0->eraserSize;
	r34 = (double)r12;
	r34 = r34 * r2;
	if( r30 < r34 ) goto label$ae2bdbd_5_130;
	r12 = r0->eraserSize;
	r34 = (double)r12;
	r34 = r34 * r2;
	if( !(r31 < r34) ) goto label$ae2bdbd_5_132;
	r34 = 0.;
	if( !(r32 >= r34) ) goto label$ae2bdbd_5_132;
	r34 = 1.;
	if( !(r34 >= r32) ) goto label$ae2bdbd_5_132;
	label$ae2bdbd_5_130:
	components_stage_Canvas_removeLine(r0,r24);
	goto label$ae2bdbd_5_56;
	label$ae2bdbd_5_132:
	goto label$ae2bdbd_5_56;
	label$ae2bdbd_5_133:
	r10 = 0;
	if( r20 == NULL ) hl_null_access();
	r22 = hl_vfields(r20)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r20)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r20->value,332491895/*nonColliders*/,&t$hl_types_ArrayObj);
	label$ae2bdbd_5_136:
	if( r22 == NULL ) hl_null_access();
	r23 = r22->length;
	if( r10 >= r23 ) goto label$ae2bdbd_5_213;
	r23 = r22->length;
	if( ((unsigned)r10) < ((unsigned)r23) ) goto label$ae2bdbd_5_144;
	r24 = NULL;
	goto label$ae2bdbd_5_147;
	label$ae2bdbd_5_144:
	r25 = r22->array;
	r16 = ((vdynamic**)(r25 + 1))[r10];
	r24 = (components__lines__LineBase)r16;
	label$ae2bdbd_5_147:
	++r10;
	r26 = h2d_Scene_get_mouseX(((h2d__Scene)r0));
	if( r24 == NULL ) hl_null_access();
	r28 = r24->start;
	if( r28 == NULL ) hl_null_access();
	r27 = r28->x;
	r26 = r26 - r27;
	r27 = h2d_Scene_get_mouseY(((h2d__Scene)r0));
	r28 = r24->start;
	if( r28 == NULL ) hl_null_access();
	r29 = r28->y;
	r27 = r27 - r29;
	r30 = 2.;
	r29 = hl_math_pow(r26,r30);
	r31 = 2.;
	r30 = hl_math_pow(r27,r31);
	r29 = r29 + r30;
	r29 = hl_math_sqrt(r29);
	r30 = h2d_Scene_get_mouseX(((h2d__Scene)r0));
	r28 = r24->end;
	if( r28 == NULL ) hl_null_access();
	r31 = r28->x;
	r30 = r30 - r31;
	r31 = 2.;
	r30 = hl_math_pow(r30,r31);
	r31 = h2d_Scene_get_mouseY(((h2d__Scene)r0));
	r28 = r24->end;
	if( r28 == NULL ) hl_null_access();
	r32 = r28->y;
	r31 = r31 - r32;
	r32 = 2.;
	r31 = hl_math_pow(r31,r32);
	r30 = r30 + r31;
	r30 = hl_math_sqrt(r30);
	r31 = r24->nx;
	r31 = r31 * r26;
	r32 = r24->ny;
	r32 = r32 * r27;
	r31 = r31 + r32;
	r31 = hl_math_abs(r31);
	r33 = r24->dx;
	r32 = r26 * r33;
	r34 = r24->dy;
	r33 = r27 * r34;
	r32 = r32 + r33;
	r33 = r24->invSqrDistance;
	r32 = r32 * r33;
	r12 = r0->eraserSize;
	r34 = (double)r12;
	r34 = r34 * r2;
	if( r29 < r34 ) goto label$ae2bdbd_5_210;
	r12 = r0->eraserSize;
	r34 = (double)r12;
	r34 = r34 * r2;
	if( r30 < r34 ) goto label$ae2bdbd_5_210;
	r12 = r0->eraserSize;
	r34 = (double)r12;
	r34 = r34 * r2;
	if( !(r31 < r34) ) goto label$ae2bdbd_5_212;
	r34 = 0.;
	if( !(r32 >= r34) ) goto label$ae2bdbd_5_212;
	r34 = 1.;
	if( !(r34 >= r32) ) goto label$ae2bdbd_5_212;
	label$ae2bdbd_5_210:
	components_stage_Canvas_removeLine(r0,r24);
	goto label$ae2bdbd_5_136;
	label$ae2bdbd_5_212:
	goto label$ae2bdbd_5_136;
	label$ae2bdbd_5_213:
	goto label$ae2bdbd_5_14;
	label$ae2bdbd_5_214:
	goto label$ae2bdbd_5_8;
	label$ae2bdbd_5_215:
	return;
}

void components_stage_Canvas_addLine(components__stage__Canvas r0,int r1,double r2,double r3,double r4,double r5,vdynamic* r6,vdynamic* r7) {
	components__managers__Grid r38;
	String r14;
	h2d__Graphics r27;
	bool r8;
	h2d__Object r26;
	components__lines__Floor r16;
	$Main r13;
	h2d__col__Point r17, r22;
	components__lines__LineBase r10;
	double r18, r20, r23, r24, r29, r30, r31, r32, r34, r35, r36, r37;
	components__lines__Scenery r33;
	double *r19, *r21;
	vdynamic *r15, *r25;
	components__lines__Accel r28;
	components__stage__LRConsole r12;
	int r9;
	if( r6 ) goto label$ae2bdbd_6_3;
	r8 = false;
	r6 = hl_alloc_dynbool(r8);
	label$ae2bdbd_6_3:
	if( r7 ) goto label$ae2bdbd_6_6;
	r9 = -1;
	r7 = hl_alloc_dynamic(&t$_i32);
	r7->v.i = r9;
	label$ae2bdbd_6_6:
	r10 = NULL;
	switch(r1) {
		default:
			r13 = ($Main)g$_Main;
			r12 = r13->console;
			if( r12 == NULL ) hl_null_access();
			r14 = (String)s$New_line_creation_error_;
			r9 = 16711680;
			r15 = hl_alloc_dynamic(&t$_i32);
			r15->v.i = r9;
			h2d_Console_log(((h2d__Console)r12),r14,r15);
			return;
		case 0:
			r16 = (components__lines__Floor)hl_alloc_obj(&t$components_lines_Floor);
			r17 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
			r18 = r2;
			r19 = &r18;
			r20 = r3;
			r21 = &r20;
			h2d_col_Point_new(r17,r19,r21);
			r22 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
			r23 = r4;
			r19 = &r23;
			r24 = r5;
			r21 = &r24;
			h2d_col_Point_new(r22,r19,r21);
			r8 = r6 ? r6->v.b : 0;
			components_lines_Floor_new(r16,r17,r22,r8);
			r10 = ((components__lines__LineBase)r16);
			r9 = -1;
			r25 = hl_alloc_dynamic(&t$_i32);
			r25->v.i = r9;
			if( r7 == r25 || (r7 && r25 && (r7->v.i == r25->v.i)) ) goto label$ae2bdbd_6_37;
			r9 = r7 ? r7->v.i : 0;
			components_lines_LineBase_setLim(((components__lines__LineBase)r16),r9);
			label$ae2bdbd_6_37:
			r26 = r0->colorLayer;
			if( r26 == NULL ) hl_null_access();
			r27 = r16->colorLayer;
			((void (*)(h2d__Object,h2d__Graphics))r26->$type->vobj_proto[1])(r26,r27);
			r26 = r0->rideLayer;
			if( r26 == NULL ) hl_null_access();
			r27 = r16->rideLayer;
			((void (*)(h2d__Object,h2d__Graphics))r26->$type->vobj_proto[1])(r26,r27);
			goto label$ae2bdbd_6_100;
		case 1:
			r28 = (components__lines__Accel)hl_alloc_obj(&t$components_lines_Accel);
			r17 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
			r29 = r2;
			r19 = &r29;
			r30 = r3;
			r21 = &r30;
			h2d_col_Point_new(r17,r19,r21);
			r22 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
			r31 = r4;
			r19 = &r31;
			r32 = r5;
			r21 = &r32;
			h2d_col_Point_new(r22,r19,r21);
			r8 = r6 ? r6->v.b : 0;
			components_lines_Accel_new(r28,r17,r22,r8);
			r10 = ((components__lines__LineBase)r28);
			r9 = -1;
			r25 = hl_alloc_dynamic(&t$_i32);
			r25->v.i = r9;
			if( r7 == r25 || (r7 && r25 && (r7->v.i == r25->v.i)) ) goto label$ae2bdbd_6_67;
			r9 = r7 ? r7->v.i : 0;
			components_lines_LineBase_setLim(((components__lines__LineBase)r28),r9);
			label$ae2bdbd_6_67:
			r26 = r0->colorLayer;
			if( r26 == NULL ) hl_null_access();
			r27 = r28->colorLayer;
			((void (*)(h2d__Object,h2d__Graphics))r26->$type->vobj_proto[1])(r26,r27);
			r26 = r0->rideLayer;
			if( r26 == NULL ) hl_null_access();
			r27 = r28->rideLayer;
			((void (*)(h2d__Object,h2d__Graphics))r26->$type->vobj_proto[1])(r26,r27);
			goto label$ae2bdbd_6_100;
		case 2:
			r33 = (components__lines__Scenery)hl_alloc_obj(&t$components_lines_Scenery);
			r17 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
			r34 = r2;
			r19 = &r34;
			r35 = r3;
			r21 = &r35;
			h2d_col_Point_new(r17,r19,r21);
			r22 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
			r36 = r4;
			r19 = &r36;
			r37 = r5;
			r21 = &r37;
			h2d_col_Point_new(r22,r19,r21);
			r8 = r6 ? r6->v.b : 0;
			components_lines_Scenery_new(r33,r17,r22,r8);
			r10 = ((components__lines__LineBase)r33);
			r26 = r0->sceneColorLayer;
			if( r26 == NULL ) hl_null_access();
			r27 = r33->colorLayer;
			((void (*)(h2d__Object,h2d__Graphics))r26->$type->vobj_proto[1])(r26,r27);
			r26 = r0->scenePlaybackLayer;
			if( r26 == NULL ) hl_null_access();
			r27 = r33->rideLayer;
			((void (*)(h2d__Object,h2d__Graphics))r26->$type->vobj_proto[1])(r26,r27);
	}
	label$ae2bdbd_6_100:
	((void (*)(components__lines__LineBase))r10->$type->vobj_proto[1])(r10);
	r13 = ($Main)g$_Main;
	r38 = r13->grid;
	if( r38 == NULL ) hl_null_access();
	components_managers_Grid_register(r38,r10);
	return;
}

void components_stage_Canvas_clear(components__stage__Canvas r0) {
	components__managers__Grid r4;
	hl__types__ArrayObj r3;
	$Main r5;
	components__lines__LineBase r7;
	vdynamic *r8;
	varray *r9;
	int r1, r6;
	r1 = 0;
	r5 = ($Main)g$_Main;
	r4 = r5->grid;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->lines;
	label$ae2bdbd_7_5:
	if( r3 == NULL ) hl_null_access();
	r6 = r3->length;
	if( r1 >= r6 ) goto label$ae2bdbd_7_19;
	r6 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r6) ) goto label$ae2bdbd_7_13;
	r7 = NULL;
	goto label$ae2bdbd_7_16;
	label$ae2bdbd_7_13:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r1];
	r7 = (components__lines__LineBase)r8;
	label$ae2bdbd_7_16:
	++r1;
	components_stage_Canvas_removeLine(r0,r7);
	goto label$ae2bdbd_7_5;
	label$ae2bdbd_7_19:
	return;
}

void components_stage_Canvas_removeLine(components__stage__Canvas r0,components__lines__LineBase r1) {
	components__managers__Grid r3;
	h2d__Graphics r6;
	h2d__Object r5;
	$Main r4;
	r4 = ($Main)g$_Main;
	r3 = r4->grid;
	if( r3 == NULL ) hl_null_access();
	components_managers_Grid_unregister(r3,r1);
	r5 = r0->colorLayer;
	if( r5 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r6 = r1->colorLayer;
	((void (*)(h2d__Object,h2d__Graphics))r5->$type->vobj_proto[6])(r5,r6);
	r5 = r0->sceneColorLayer;
	if( r5 == NULL ) hl_null_access();
	r6 = r1->colorLayer;
	((void (*)(h2d__Object,h2d__Graphics))r5->$type->vobj_proto[6])(r5,r6);
	r5 = r0->scenePlaybackLayer;
	if( r5 == NULL ) hl_null_access();
	r6 = r1->rideLayer;
	((void (*)(h2d__Object,h2d__Graphics))r5->$type->vobj_proto[6])(r5,r6);
	r5 = r0->rideLayer;
	if( r5 == NULL ) hl_null_access();
	r6 = r1->rideLayer;
	((void (*)(h2d__Object,h2d__Graphics))r5->$type->vobj_proto[6])(r5,r6);
	return;
}

venum* components_stage_Canvas_get_drawMode(components__stage__Canvas r0) {
	venum *r1;
	r1 = r0->drawMode;
	return r1;
}

venum* components_stage_Canvas_set_drawMode(components__stage__Canvas r0,venum* r1) {
	String r8;
	bool r4;
	h2d__Object r5;
	$Main r7;
	vdynamic *r9;
	components__stage__LRConsole r6;
	int r3;
	if( r1 == NULL ) hl_null_access();
	r3 = HL__ENUM_INDEX__(r1);
	switch(r3) {
		default:
			goto label$ae2bdbd_10_141;
		case 0:
			r5 = r0->colorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->sceneColorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->scenePlaybackLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->rideLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r7 = ($Main)g$_Main;
			r6 = r7->console;
			if( r6 == NULL ) hl_null_access();
			r8 = (String)s$Draw_mode_set_to_Edit;
			r9 = NULL;
			h2d_Console_log(((h2d__Console)r6),r8,r9);
			goto label$ae2bdbd_10_141;
		case 1:
			r5 = r0->colorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->sceneColorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->scenePlaybackLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->rideLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r7 = ($Main)g$_Main;
			r6 = r7->console;
			if( r6 == NULL ) hl_null_access();
			r8 = (String)s$Draw_mode_set_to_Playback;
			r9 = NULL;
			h2d_Console_log(((h2d__Console)r6),r8,r9);
			goto label$ae2bdbd_10_141;
		case 2:
			r5 = r0->colorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->sceneColorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->scenePlaybackLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->rideLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r7 = ($Main)g$_Main;
			r6 = r7->console;
			if( r6 == NULL ) hl_null_access();
			r8 = (String)s$Draw_mode_set_to_No_Scenery_Edit;
			r9 = NULL;
			h2d_Console_log(((h2d__Console)r6),r8,r9);
			goto label$ae2bdbd_10_141;
		case 3:
			r5 = r0->colorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->sceneColorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->scenePlaybackLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->rideLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r7 = ($Main)g$_Main;
			r6 = r7->console;
			if( r6 == NULL ) hl_null_access();
			r8 = (String)s$cb653d7;
			r9 = NULL;
			h2d_Console_log(((h2d__Console)r6),r8,r9);
			goto label$ae2bdbd_10_141;
		case 4:
			r5 = r0->colorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->sceneColorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->scenePlaybackLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->rideLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r7 = ($Main)g$_Main;
			r6 = r7->console;
			if( r6 == NULL ) hl_null_access();
			r8 = (String)s$2504e23;
			r9 = NULL;
			h2d_Console_log(((h2d__Console)r6),r8,r9);
			goto label$ae2bdbd_10_141;
		case 5:
			r5 = r0->colorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->sceneColorLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->scenePlaybackLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = true;
			r4 = h2d_Object_set_visible(r5,r4);
			r5 = r0->rideLayer;
			if( r5 == NULL ) hl_null_access();
			r4 = false;
			r4 = h2d_Object_set_visible(r5,r4);
			r7 = ($Main)g$_Main;
			r6 = r7->console;
			if( r6 == NULL ) hl_null_access();
			r8 = (String)s$83a17f8;
			r9 = NULL;
			h2d_Console_log(((h2d__Console)r6),r8,r9);
	}
	label$ae2bdbd_10_141:
	r0->drawMode = r1;
	return r1;
}

void components_stage_Canvas_new(components__stage__Canvas r0,h2d__Object r1) {
	venum *r2;
	bool r6;
	h2d__Object r5;
	int r3;
	r2 = (venum*)g$6537d82;
	r0->drawMode = r2;
	r3 = 5;
	r0->eraserSize = r3;
	h2d_Scene_new(((h2d__Scene)r0));
	if( r1 == NULL ) hl_null_access();
	((void (*)(h2d__Object,components__stage__Canvas))r1->$type->vobj_proto[1])(r1,r0);
	r5 = (h2d__Object)hl_alloc_obj(&t$h2d_Object);
	h2d_Object_new(r5,((h2d__Object)r0));
	r0->sceneColorLayer = r5;
	r5 = (h2d__Object)hl_alloc_obj(&t$h2d_Object);
	h2d_Object_new(r5,((h2d__Object)r0));
	r0->scenePlaybackLayer = r5;
	r5 = r0->scenePlaybackLayer;
	if( r5 == NULL ) hl_null_access();
	r6 = false;
	r6 = h2d_Object_set_visible(r5,r6);
	r5 = (h2d__Object)hl_alloc_obj(&t$h2d_Object);
	h2d_Object_new(r5,((h2d__Object)r0));
	r0->colorLayer = r5;
	r5 = (h2d__Object)hl_alloc_obj(&t$h2d_Object);
	h2d_Object_new(r5,((h2d__Object)r0));
	r0->rideLayer = r5;
	r5 = (h2d__Object)hl_alloc_obj(&t$h2d_Object);
	h2d_Object_new(r5,((h2d__Object)r0));
	r0->sledderLayer = r5;
	r5 = (h2d__Object)hl_alloc_obj(&t$h2d_Object);
	h2d_Object_new(r5,((h2d__Object)r0));
	r0->preview = r5;
	return;
}

