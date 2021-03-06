﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/managers/Simulation.h>
#include <components/managers/Riders.h>
#include <_std/Main.h>
#include <components/stage/LRConsole.h>
#include <components/managers/Musicplayer.h>
#include <components/stage/Camera.h>
extern $Main g$_Main;
extern String s$No_riders_in_current_track;
extern hl_type t$_i32;
#include <h2d/Console.h>
void h2d_Console_log(h2d__Console,String,vdynamic*);
void components_managers_Simulation_restoreState(components__managers__Simulation,int);
void components_managers_Musicplayer_stopMusic(components__managers__Musicplayer);
void components_managers_Musicplayer_playMusic(components__managers__Musicplayer,int);
void components_stage_Camera_start(components__stage__Camera);
void components_managers_Simulation_stepSim(components__managers__Simulation);
void components_stage_Camera_stop(components__stage__Camera);
double components_managers_Simulation_get_desiredSimSpeed(components__managers__Simulation);
void components_managers_Riders_stepRiders(components__managers__Riders);
void components_managers_Simulation_recordGlobalSimState(components__managers__Simulation);
extern String s$Set_flag_on_frame_;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern String s$Disabled_flag;
#include <haxe/ds/StringMap.h>
#include <hxlr/rider/RiderBase.h>
#include <hl/types/ArrayObj.h>
#include <hxlr/rider/ContactPoint.h>
#include <h2d/col/Point.h>
#include <hxlr/rider/AirPoint.h>
double Math_max(double,double);
vvirtual* haxe_ds_StringMap_iterator(haxe__ds__StringMap);
extern hl_type t$vrt_6dd9082;
extern hl_type t$fun_bf7849e;
extern hl_type t$fun_8ae12a9;
vdynamic* haxe_ds_ObjectMap_get(haxe__ds__ObjectMap,vdynamic*);
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$_dyn;
extern hl_type t$vrt_5caddc6;
void components_managers_Simulation_recordRiderState(components__managers__Simulation,hxlr__rider__RiderBase,int);
extern hl_type t$_bool;
bool hxlr_rider_RiderBase_set_crashed(hxlr__rider__RiderBase,bool);
extern hl_type t$vrt_6c2da0f;
void hxlr_rider_ContactPoint_deserialize(hxlr__rider__ContactPoint,vvirtual*);
extern hl_type t$vrt_e4dd42c;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
extern hl_type t$haxe_ds_ObjectMap;
void haxe_ds_ObjectMap_set(haxe__ds__ObjectMap,vdynamic*,vdynamic*);
extern hl_type t$vrt_b67f353;
extern hl_type t$nul_bool;
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
vvirtual* hxlr_rider_ContactPoint_serialize(hxlr__rider__ContactPoint);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
void haxe_ds_ObjectMap_new(haxe__ds__ObjectMap);

void components_managers_Simulation_startSim(components__managers__Simulation r0) {
	String r7;
	components__managers__Riders r3;
	bool r9;
	components__managers__Musicplayer r11;
	$Main r4;
	double r10;
	vdynamic *r8;
	components__stage__Camera r12;
	components__stage__LRConsole r6;
	int r2, r5;
	r4 = ($Main)g$_Main;
	r3 = r4->riders;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->riderCount;
	r5 = 0;
	if( r2 != r5 ) goto label$d8284df_1_14;
	r4 = ($Main)g$_Main;
	r6 = r4->console;
	if( r6 == NULL ) hl_null_access();
	r7 = (String)s$No_riders_in_current_track;
	r2 = 16711680;
	r8 = hl_alloc_dynamic(&t$_i32);
	r8->v.i = r2;
	h2d_Console_log(((h2d__Console)r6),r7,r8);
	return;
	label$d8284df_1_14:
	r9 = true;
	r0->playing = r9;
	r9 = false;
	r0->paused = r9;
	r10 = 0.;
	r0->timeDelta = r10;
	r9 = r0->flagged;
	if( !r9 ) goto label$d8284df_1_25;
	r2 = r0->flagframe;
	components_managers_Simulation_restoreState(r0,r2);
	goto label$d8284df_1_27;
	label$d8284df_1_25:
	r2 = 0;
	components_managers_Simulation_restoreState(r0,r2);
	label$d8284df_1_27:
	r4 = ($Main)g$_Main;
	r11 = r4->audio;
	if( r11 == NULL ) hl_null_access();
	components_managers_Musicplayer_stopMusic(r11);
	r4 = ($Main)g$_Main;
	r11 = r4->audio;
	if( r11 == NULL ) hl_null_access();
	r2 = r0->frames;
	components_managers_Musicplayer_playMusic(r11,r2);
	r4 = ($Main)g$_Main;
	r12 = r4->camera;
	if( r12 == NULL ) hl_null_access();
	components_stage_Camera_start(r12);
	return;
}

void components_managers_Simulation_pauseSim(components__managers__Simulation r0) {
	bool r2;
	components__managers__Musicplayer r3;
	$Main r4;
	r2 = r0->playing;
	if( r2 ) goto label$d8284df_2_6;
	r2 = r0->paused;
	if( r2 ) goto label$d8284df_2_6;
	components_managers_Simulation_startSim(r0);
	return;
	label$d8284df_2_6:
	r4 = ($Main)g$_Main;
	r3 = r4->audio;
	if( r3 == NULL ) hl_null_access();
	components_managers_Musicplayer_stopMusic(r3);
	r2 = false;
	r0->playing = r2;
	r2 = true;
	r0->paused = r2;
	return;
}

void components_managers_Simulation_resumeSim(components__managers__Simulation r0) {
	bool r1;
	components__managers__Musicplayer r3;
	$Main r4;
	int r5;
	r1 = true;
	r0->playing = r1;
	r1 = false;
	r0->paused = r1;
	r4 = ($Main)g$_Main;
	r3 = r4->audio;
	if( r3 == NULL ) hl_null_access();
	r5 = r0->frames;
	components_managers_Musicplayer_playMusic(r3,r5);
	return;
}

void components_managers_Simulation_updateSim(components__managers__Simulation r0) {
	return;
}

void components_managers_Simulation_liveUpdateTick(components__managers__Simulation r0) {
	bool r5;
	int r1, r3, r4;
	r1 = 0;
	label$d8284df_5_1:
	r3 = 40;
	if( r1 >= r3 ) goto label$d8284df_5_13;
	++r1;
	r3 = r0->frames;
	r4 = r0->returnframe;
	if( r3 != r4 ) goto label$d8284df_5_11;
	r5 = false;
	r0->updating = r5;
	goto label$d8284df_5_13;
	label$d8284df_5_11:
	components_managers_Simulation_stepSim(r0);
	goto label$d8284df_5_1;
	label$d8284df_5_13:
	return;
}

void components_managers_Simulation_endSim(components__managers__Simulation r0) {
	bool r2;
	components__managers__Musicplayer r7;
	$Main r4;
	double r5;
	int r6;
	components__stage__Camera r3;
	r2 = r0->playing;
	if( !r2 ) goto label$d8284df_6_6;
	r4 = ($Main)g$_Main;
	r3 = r4->camera;
	if( r3 == NULL ) hl_null_access();
	components_stage_Camera_stop(r3);
	label$d8284df_6_6:
	r2 = false;
	r0->playing = r2;
	r2 = false;
	r0->paused = r2;
	r5 = 0.;
	r0->timeDelta = r5;
	r2 = r0->flagged;
	if( !r2 ) goto label$d8284df_6_17;
	r6 = r0->flagframe;
	components_managers_Simulation_restoreState(r0,r6);
	goto label$d8284df_6_19;
	label$d8284df_6_17:
	r6 = 0;
	components_managers_Simulation_restoreState(r0,r6);
	label$d8284df_6_19:
	r4 = ($Main)g$_Main;
	r7 = r4->audio;
	if( r7 == NULL ) hl_null_access();
	components_managers_Musicplayer_stopMusic(r7);
	return;
}

void components_managers_Simulation_playSim(components__managers__Simulation r0,double r1) {
	double r2, r3;
	r2 = r0->timeDelta;
	r2 = r2 + r1;
	r0->timeDelta = r2;
	label$d8284df_7_3:
	r2 = r0->timeDelta;
	r3 = components_managers_Simulation_get_desiredSimSpeed(r0);
	if( !(r2 >= r3) ) goto label$d8284df_7_13;
	components_managers_Simulation_stepSim(r0);
	r2 = r0->timeDelta;
	r3 = components_managers_Simulation_get_desiredSimSpeed(r0);
	r2 = r2 - r3;
	r0->timeDelta = r2;
	goto label$d8284df_7_3;
	label$d8284df_7_13:
	return;
}

void components_managers_Simulation_rewindSim(components__managers__Simulation r0,double r1) {
	double r2, r3;
	int r5, r6;
	r2 = r0->timeDelta;
	r2 = r2 + r1;
	r0->timeDelta = r2;
	label$d8284df_8_3:
	r2 = r0->timeDelta;
	r3 = components_managers_Simulation_get_desiredSimSpeed(r0);
	if( !(r2 >= r3) ) goto label$d8284df_8_18;
	if( r0 == NULL ) hl_null_access();
	r5 = r0->frames;
	r6 = 1;
	r5 = r5 - r6;
	r0->frames = r5;
	components_managers_Simulation_restoreState(r0,r5);
	r2 = r0->timeDelta;
	r3 = components_managers_Simulation_get_desiredSimSpeed(r0);
	r2 = r2 - r3;
	r0->timeDelta = r2;
	goto label$d8284df_8_3;
	label$d8284df_8_18:
	return;
}

void components_managers_Simulation_stepSim(components__managers__Simulation r0) {
	components__managers__Riders r3;
	$Main r4;
	int r1;
	r1 = r0->frames;
	++r1;
	r0->frames = r1;
	r4 = ($Main)g$_Main;
	r3 = r4->riders;
	if( r3 == NULL ) hl_null_access();
	components_managers_Riders_stepRiders(r3);
	components_managers_Simulation_recordGlobalSimState(r0);
	return;
}

void components_managers_Simulation_backSim(components__managers__Simulation r0) {
	int r2, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->frames;
	r3 = 1;
	r2 = r2 - r3;
	r0->frames = r2;
	components_managers_Simulation_restoreState(r0,r2);
	return;
}

void components_managers_Simulation_setFlagState(components__managers__Simulation r0) {
	String r7, r10;
	bool r1, r2;
	$Main r6;
	vdynamic *r11;
	int *r8;
	vbyte *r9;
	components__stage__LRConsole r5;
	int r4;
	r1 = r0->playing;
	r2 = true;
	if( r1 == r2 ) goto label$d8284df_11_6;
	r1 = r0->paused;
	r2 = true;
	if( r1 != r2 ) goto label$d8284df_11_8;
	label$d8284df_11_6:
	r1 = true;
	goto label$d8284df_11_10;
	label$d8284df_11_8:
	r1 = r0->flagged;
	r1 = !r1;
	label$d8284df_11_10:
	r0->flagged = r1;
	r1 = r0->flagged;
	if( !r1 ) goto label$d8284df_11_19;
	r1 = r0->playing;
	if( r1 ) goto label$d8284df_11_17;
	r1 = r0->paused;
	if( !r1 ) goto label$d8284df_11_19;
	label$d8284df_11_17:
	r4 = r0->frames;
	r0->flagframe = r4;
	label$d8284df_11_19:
	r6 = ($Main)g$_Main;
	r5 = r6->console;
	if( r5 == NULL ) hl_null_access();
	r1 = r0->flagged;
	r2 = true;
	if( r1 != r2 ) goto label$d8284df_11_32;
	r7 = (String)s$Set_flag_on_frame_;
	r4 = r0->frames;
	r8 = &r4;
	r9 = hl_itos(r4,r8);
	r10 = String___alloc__(r9,r4);
	r7 = String___add__(r7,r10);
	goto label$d8284df_11_33;
	label$d8284df_11_32:
	r7 = (String)s$Disabled_flag;
	label$d8284df_11_33:
	r11 = NULL;
	h2d_Console_log(((h2d__Console)r5),r7,r11);
	return;
}

void components_managers_Simulation_restoreState(components__managers__Simulation r0,int r1) {
	components__managers__Riders r9;
	haxe__ds__ObjectMap r15;
	hl__types__ArrayObj r16;
	haxe__ds__StringMap r8;
	vvirtual *r7, *r12, *r18, *r24;
	bool r13;
	hxlr__rider__AirPoint r25;
	hxlr__rider__RiderBase r14;
	$Main r10;
	hxlr__rider__ContactPoint r23;
	double r2, r4;
	vdynamic *r11, *r20;
	varray *r19;
	int r3, r6, r17, r21, r22;
	r2 = (double)r1;
	r4 = 0.;
	r2 = Math_max(r2,r4);
	r3 = (int)r2;
	r0->frames = r3;
	r10 = ($Main)g$_Main;
	r9 = r10->riders;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->riders;
	if( r8 == NULL ) hl_null_access();
	r7 = haxe_ds_StringMap_iterator(r8);
	r12 = hl_to_virtual(&t$vrt_6dd9082,(vdynamic*)r7);
	label$d8284df_12_12:
	if( r12 == NULL ) hl_null_access();
	if( hl_vfields(r12)[0] ) r13 = ((bool (*)(vdynamic*))hl_vfields(r12)[0])(r12->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r12->value,&t$fun_bf7849e,407283053/*hasNext*/,NULL,&ret);
		r13 = (bool)ret.v.i;
	}
	if( !r13 ) goto label$d8284df_12_102;
	if( hl_vfields(r12)[1] ) r14 = ((hxlr__rider__RiderBase (*)(vdynamic*))hl_vfields(r12)[1])(r12->value); else {
		r14 = (hxlr__rider__RiderBase)hl_dyn_call_obj(r12->value,&t$fun_8ae12a9,151160317/*next*/,NULL,NULL);
	}
	r15 = r0->frameStates;
	if( r15 == NULL ) hl_null_access();
	r11 = haxe_ds_ObjectMap_get(r15,((vdynamic*)r14));
	r16 = (hl__types__ArrayObj)hl_dyn_castp(&r11,&t$_dyn,&t$hl_types_ArrayObj);
	if( r16 == NULL ) hl_null_access();
	r17 = r16->length;
	if( ((unsigned)r3) < ((unsigned)r17) ) goto label$d8284df_12_26;
	r18 = NULL;
	goto label$d8284df_12_29;
	label$d8284df_12_26:
	r19 = r16->array;
	r11 = ((vdynamic**)(r19 + 1))[r3];
	r18 = hl_to_virtual(&t$vrt_5caddc6,(vdynamic*)r11);
	label$d8284df_12_29:
	if( r18 ) goto label$d8284df_12_33;
	r6 = r0->frames;
	components_managers_Simulation_recordRiderState(r0,r14,r6);
	goto label$d8284df_12_12;
	label$d8284df_12_33:
	if( r14 == NULL ) hl_null_access();
	if( r18 == NULL ) hl_null_access();
	r13 = hl_vfields(r18)[0] ? (*(bool*)(hl_vfields(r18)[0])) : (bool)hl_dyn_geti(r18->value,-273866879/*crashed*/,&t$_bool);
	r13 = hxlr_rider_RiderBase_set_crashed(r14,r13);
	r20 = hl_alloc_dynbool(r13);
	r6 = 0;
	r16 = r14->contactPoints;
	if( r16 == NULL ) hl_null_access();
	r17 = r16->length;
	label$d8284df_12_42:
	if( r6 >= r17 ) goto label$d8284df_12_69;
	r21 = r6;
	++r6;
	if( r14 == NULL ) hl_null_access();
	r16 = r14->contactPoints;
	if( r16 == NULL ) hl_null_access();
	r22 = r16->length;
	if( ((unsigned)r21) < ((unsigned)r22) ) goto label$d8284df_12_53;
	r23 = NULL;
	goto label$d8284df_12_56;
	label$d8284df_12_53:
	r19 = r16->array;
	r11 = ((vdynamic**)(r19 + 1))[r21];
	r23 = (hxlr__rider__ContactPoint)r11;
	label$d8284df_12_56:
	if( r23 == NULL ) hl_null_access();
	if( r18 == NULL ) hl_null_access();
	r16 = hl_vfields(r18)[1] ? (*(hl__types__ArrayObj*)(hl_vfields(r18)[1])) : (hl__types__ArrayObj)hl_dyn_getp(r18->value,-147975645/*points*/,&t$hl_types_ArrayObj);
	if( r16 == NULL ) hl_null_access();
	r22 = r16->length;
	if( ((unsigned)r21) < ((unsigned)r22) ) goto label$d8284df_12_64;
	r24 = NULL;
	goto label$d8284df_12_67;
	label$d8284df_12_64:
	r19 = r16->array;
	r11 = ((vdynamic**)(r19 + 1))[r21];
	r24 = hl_to_virtual(&t$vrt_6c2da0f,(vdynamic*)r11);
	label$d8284df_12_67:
	hxlr_rider_ContactPoint_deserialize(r23,r24);
	goto label$d8284df_12_42;
	label$d8284df_12_69:
	r6 = 0;
	if( r14 == NULL ) hl_null_access();
	r16 = r14->airPoints;
	if( r16 == NULL ) hl_null_access();
	r17 = r16->length;
	label$d8284df_12_74:
	if( r6 >= r17 ) goto label$d8284df_12_101;
	r21 = r6;
	++r6;
	if( r14 == NULL ) hl_null_access();
	r16 = r14->airPoints;
	if( r16 == NULL ) hl_null_access();
	r22 = r16->length;
	if( ((unsigned)r21) < ((unsigned)r22) ) goto label$d8284df_12_85;
	r25 = NULL;
	goto label$d8284df_12_88;
	label$d8284df_12_85:
	r19 = r16->array;
	r11 = ((vdynamic**)(r19 + 1))[r21];
	r25 = (hxlr__rider__AirPoint)r11;
	label$d8284df_12_88:
	if( r25 == NULL ) hl_null_access();
	if( r18 == NULL ) hl_null_access();
	r16 = hl_vfields(r18)[2] ? (*(hl__types__ArrayObj*)(hl_vfields(r18)[2])) : (hl__types__ArrayObj)hl_dyn_getp(r18->value,151751954/*scarves*/,&t$hl_types_ArrayObj);
	if( r16 == NULL ) hl_null_access();
	r22 = r16->length;
	if( ((unsigned)r21) < ((unsigned)r22) ) goto label$d8284df_12_96;
	r24 = NULL;
	goto label$d8284df_12_99;
	label$d8284df_12_96:
	r19 = r16->array;
	r11 = ((vdynamic**)(r19 + 1))[r21];
	r24 = hl_to_virtual(&t$vrt_6c2da0f,(vdynamic*)r11);
	label$d8284df_12_99:
	hxlr_rider_ContactPoint_deserialize(((hxlr__rider__ContactPoint)r25),r24);
	goto label$d8284df_12_74;
	label$d8284df_12_101:
	goto label$d8284df_12_12;
	label$d8284df_12_102:
	return;
}

void components_managers_Simulation_recordGlobalSimState(components__managers__Simulation r0) {
	components__managers__Riders r3;
	haxe__ds__StringMap r2;
	vvirtual *r1, *r5;
	bool r7;
	hxlr__rider__RiderBase r8;
	$Main r4;
	int r9;
	r4 = ($Main)g$_Main;
	r3 = r4->riders;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->riders;
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_ds_StringMap_iterator(r2);
	r5 = hl_to_virtual(&t$vrt_6dd9082,(vdynamic*)r1);
	label$d8284df_13_7:
	if( r5 == NULL ) hl_null_access();
	if( hl_vfields(r5)[0] ) r7 = ((bool (*)(vdynamic*))hl_vfields(r5)[0])(r5->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r5->value,&t$fun_bf7849e,407283053/*hasNext*/,NULL,&ret);
		r7 = (bool)ret.v.i;
	}
	if( !r7 ) goto label$d8284df_13_15;
	if( hl_vfields(r5)[1] ) r8 = ((hxlr__rider__RiderBase (*)(vdynamic*))hl_vfields(r5)[1])(r5->value); else {
		r8 = (hxlr__rider__RiderBase)hl_dyn_call_obj(r5->value,&t$fun_8ae12a9,151160317/*next*/,NULL,NULL);
	}
	r9 = r0->frames;
	components_managers_Simulation_recordRiderState(r0,r8,r9);
	goto label$d8284df_13_7;
	label$d8284df_13_15:
	return;
}

void components_managers_Simulation_recordRiderState(components__managers__Simulation r0,hxlr__rider__RiderBase r1,int r2) {
	haxe__ds__ObjectMap r5;
	vvirtual *r7, *r9, *r11, *r13, *r19;
	hl__types__ArrayObj r6, r8, r16;
	hxlr__rider__AirPoint r20;
	hxlr__rider__ContactPoint r18;
	vdynamic *r4, *r10;
	varray *r15;
	int r12, r14, r17;
	r5 = r0->frameStates;
	if( r5 == NULL ) hl_null_access();
	r4 = haxe_ds_ObjectMap_get(r5,((vdynamic*)r1));
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r4,&t$_dyn,&t$hl_types_ArrayObj);
	if( r6 ) goto label$d8284df_14_18;
	r5 = r0->frameStates;
	if( r5 ) goto label$d8284df_14_9;
	r7 = NULL;
	goto label$d8284df_14_13;
	label$d8284df_14_9:
	r7 = r5->f$1;
	if( r7 ) goto label$d8284df_14_13;
	r7 = hl_to_virtual(&t$vrt_e4dd42c,(vdynamic*)r5);
	r5->f$1 = r7;
	label$d8284df_14_13:
	r6 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r6);
	r5 = (haxe__ds__ObjectMap)hl_dyn_castp(&r7,&t$vrt_e4dd42c,&t$haxe_ds_ObjectMap);
	if( r5 == NULL ) hl_null_access();
	haxe_ds_ObjectMap_set(r5,((vdynamic*)r1),((vdynamic*)r6));
	label$d8284df_14_18:
	r9 = hl_alloc_virtual(&t$vrt_b67f353);
	if( r1 == NULL ) hl_null_access();
	r10 = r1->crashed;
	if( hl_vfields(r9)[0] ) *(vdynamic**)(hl_vfields(r9)[0]) = (vdynamic*)r10; else hl_dyn_setp(r9->value,-273866879/*crashed*/,&t$nul_bool,r10);
	r6 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r6);
	if( hl_vfields(r9)[1] ) *(hl__types__ArrayObj*)(hl_vfields(r9)[1]) = (hl__types__ArrayObj)r6; else hl_dyn_setp(r9->value,-147975645/*points*/,&t$hl_types_ArrayObj,r6);
	r6 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r6);
	if( hl_vfields(r9)[2] ) *(hl__types__ArrayObj*)(hl_vfields(r9)[2]) = (hl__types__ArrayObj)r6; else hl_dyn_setp(r9->value,151751954/*scarves*/,&t$hl_types_ArrayObj,r6);
	r11 = hl_to_virtual(&t$vrt_5caddc6,(vdynamic*)r9);
	r5 = r0->frameStates;
	if( r5 == NULL ) hl_null_access();
	r4 = haxe_ds_ObjectMap_get(r5,((vdynamic*)r1));
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r4,&t$_dyn,&t$hl_types_ArrayObj);
	if( r6 == NULL ) hl_null_access();
	r14 = r6->length;
	if( ((unsigned)r2) < ((unsigned)r14) ) goto label$d8284df_14_37;
	hl_types_ArrayObj___expand(r6,r2);
	label$d8284df_14_37:
	r15 = r6->array;
	((vvirtual**)(r15 + 1))[r2] = r11;
	r6 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r6);
	r8 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r8);
	r12 = 0;
	r16 = r1->contactPoints;
	label$d8284df_14_45:
	if( r16 == NULL ) hl_null_access();
	r17 = r16->length;
	if( r12 >= r17 ) goto label$d8284df_14_62;
	r17 = r16->length;
	if( ((unsigned)r12) < ((unsigned)r17) ) goto label$d8284df_14_53;
	r18 = NULL;
	goto label$d8284df_14_56;
	label$d8284df_14_53:
	r15 = r16->array;
	r4 = ((vdynamic**)(r15 + 1))[r12];
	r18 = (hxlr__rider__ContactPoint)r4;
	label$d8284df_14_56:
	++r12;
	if( r6 == NULL ) hl_null_access();
	if( r18 == NULL ) hl_null_access();
	r19 = hxlr_rider_ContactPoint_serialize(r18);
	r14 = hl_types_ArrayObj_push(r6,((vdynamic*)r19));
	goto label$d8284df_14_45;
	label$d8284df_14_62:
	r12 = 0;
	if( r1 == NULL ) hl_null_access();
	r16 = r1->airPoints;
	label$d8284df_14_65:
	if( r16 == NULL ) hl_null_access();
	r17 = r16->length;
	if( r12 >= r17 ) goto label$d8284df_14_82;
	r17 = r16->length;
	if( ((unsigned)r12) < ((unsigned)r17) ) goto label$d8284df_14_73;
	r20 = NULL;
	goto label$d8284df_14_76;
	label$d8284df_14_73:
	r15 = r16->array;
	r4 = ((vdynamic**)(r15 + 1))[r12];
	r20 = (hxlr__rider__AirPoint)r4;
	label$d8284df_14_76:
	++r12;
	if( r8 == NULL ) hl_null_access();
	if( r20 == NULL ) hl_null_access();
	r19 = hxlr_rider_ContactPoint_serialize(((hxlr__rider__ContactPoint)r20));
	r14 = hl_types_ArrayObj_push(r8,((vdynamic*)r19));
	goto label$d8284df_14_65;
	label$d8284df_14_82:
	r5 = r0->frameStates;
	if( r5 == NULL ) hl_null_access();
	r4 = haxe_ds_ObjectMap_get(r5,((vdynamic*)r1));
	r16 = (hl__types__ArrayObj)hl_dyn_castp(&r4,&t$_dyn,&t$hl_types_ArrayObj);
	if( r16 == NULL ) hl_null_access();
	r14 = r16->length;
	if( ((unsigned)r2) < ((unsigned)r14) ) goto label$d8284df_14_91;
	r13 = NULL;
	goto label$d8284df_14_94;
	label$d8284df_14_91:
	r15 = r16->array;
	r4 = ((vdynamic**)(r15 + 1))[r2];
	r13 = hl_to_virtual(&t$vrt_5caddc6,(vdynamic*)r4);
	label$d8284df_14_94:
	if( r13 == NULL ) hl_null_access();
	if( hl_vfields(r13)[1] ) *(hl__types__ArrayObj*)(hl_vfields(r13)[1]) = (hl__types__ArrayObj)r6; else hl_dyn_setp(r13->value,-147975645/*points*/,&t$hl_types_ArrayObj,r6);
	r5 = r0->frameStates;
	if( r5 == NULL ) hl_null_access();
	r4 = haxe_ds_ObjectMap_get(r5,((vdynamic*)r1));
	r16 = (hl__types__ArrayObj)hl_dyn_castp(&r4,&t$_dyn,&t$hl_types_ArrayObj);
	if( r16 == NULL ) hl_null_access();
	r14 = r16->length;
	if( ((unsigned)r2) < ((unsigned)r14) ) goto label$d8284df_14_105;
	r13 = NULL;
	goto label$d8284df_14_108;
	label$d8284df_14_105:
	r15 = r16->array;
	r4 = ((vdynamic**)(r15 + 1))[r2];
	r13 = hl_to_virtual(&t$vrt_5caddc6,(vdynamic*)r4);
	label$d8284df_14_108:
	if( r13 == NULL ) hl_null_access();
	if( hl_vfields(r13)[2] ) *(hl__types__ArrayObj*)(hl_vfields(r13)[2]) = (hl__types__ArrayObj)r8; else hl_dyn_setp(r13->value,151751954/*scarves*/,&t$hl_types_ArrayObj,r8);
	return;
}

double components_managers_Simulation_get_desiredSimSpeed(components__managers__Simulation r0) {
	double r1;
	r1 = r0->desiredSimSpeed;
	return r1;
}

double components_managers_Simulation_set_desiredSimSpeed(components__managers__Simulation r0,double r1) {
	double r2;
	r2 = 1.;
	r2 = r2 / r1;
	r0->desiredSimSpeed = r2;
	return r2;
}

void components_managers_Simulation_new(components__managers__Simulation r0) {
	haxe__ds__ObjectMap r4;
	bool r1;
	double r3;
	int r2;
	r1 = false;
	r0->updating = r1;
	r2 = 0;
	r0->returnframe = r2;
	r3 = 0.;
	r0->timeDelta = r3;
	r2 = 0;
	r0->flagframe = r2;
	r1 = false;
	r0->flagged = r1;
	r1 = false;
	r0->rewinding = r1;
	r1 = false;
	r0->paused = r1;
	r1 = false;
	r0->playing = r1;
	r2 = 0;
	r0->frames = r2;
	r4 = (haxe__ds__ObjectMap)hl_alloc_obj(&t$haxe_ds_ObjectMap);
	haxe_ds_ObjectMap_new(r4);
	r0->frameStates = r4;
	r3 = 40.;
	r3 = components_managers_Simulation_set_desiredSimSpeed(r0,r3);
	components_managers_Simulation_recordGlobalSimState(r0);
	r2 = 0;
	components_managers_Simulation_restoreState(r0,r2);
	return;
}

