﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/App.h>
extern hl_type t$h3d_Engine;
void h3d_Engine_new(h3d__Engine);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
void hxd_App_setup(hxd__App);
extern hl_type t$fun_5794eed;
void h3d_Engine_init(h3d__Engine);
#include <h3d/Engine.h>
#include <haxe/Timer.h>
#include <hl/natives.h>
extern h3d__$Engine g$_h3d_Engine;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
haxe__Timer haxe_Timer_delay(vclosure*,int);
extern hl_type t$ctx_9f59bf0;
extern hl_type t$fun_79a1890;
void hxd_System_start(vclosure*);
void h3d_scene_Scene_render(h3d__scene__Scene,h3d__Engine);
void h2d_Scene_render(h2d__Scene,h3d__Engine);
void h2d_Scene_checkResize(h2d__Scene);
extern hl_type t$_bool;
extern hl_type t$_dyn;
void hxd_Timer_skip(void);
void hxd_App_mainLoop(hxd__App);
void hxd_System_setLoop(vclosure*);
void hxd_Key_initialize(void);
#include <hxd/Window.h>
#include <hxd/Event.h>
#include <hxd/Cursor.h>
void hxd_App_staticHandler(void);
extern hl_type t$fun_7b48b4f;
extern hl_type t$h3d_scene_Scene;
void h3d_scene_Scene_new(h3d__scene__Scene,vdynamic*,vdynamic*);
extern hl_type t$h2d_Scene;
void h2d_Scene_new(h2d__Scene);
extern hl_type t$hxd_SceneEvents;
void hxd_SceneEvents_new(hxd__SceneEvents,hxd__Window);
extern hl_type t$vrt_238393a;
void hxd_SceneEvents_addScene(hxd__SceneEvents,vvirtual*,vdynamic*);
void hxd_App_loadAssets(hxd__App,vclosure*);
#include <hxd/Timer.h>
void hxd_Timer_update(void);
void hxd_SceneEvents_checkEvents(hxd__SceneEvents);
extern hxd__$Timer g$_hxd_Timer;
void h2d_Scene_setElapsedTime(h2d__Scene,double);
void h3d_scene_Scene_setElapsedTime(h3d__scene__Scene,double);
extern hl_type t$vrt_bb1eaef;
bool h3d_Engine_render(h3d__Engine,vvirtual*);

void hxd_App_new__$1(venum* r0) {
	hxd__App r1;
	hl__types__ArrayObj r2;
	h3d__Engine r4;
	vclosure *r9;
	vdynamic *r8;
	varray *r7;
	int r3, r6;
	r1 = ((Enumt$ctx_9f59bf0*)r0)->p1;
	if( r1 == NULL ) hl_null_access();
	r2 = ((Enumt$ctx_9f59bf0*)r0)->p0;
	if( r2 == NULL ) hl_null_access();
	r3 = 0;
	r4 = (h3d__Engine)hl_alloc_obj(&t$h3d_Engine);
	h3d_Engine_new(r4);
	r6 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r6) ) goto label$fffc6b7_1_10;
	hl_types_ArrayObj___expand(r2,r3);
	label$fffc6b7_1_10:
	r7 = r2->array;
	((h3d__Engine*)(r7 + 1))[r3] = r4;
	r1->engine = r4;
	r2 = ((Enumt$ctx_9f59bf0*)r0)->p0;
	if( r2 == NULL ) hl_null_access();
	r3 = 0;
	r6 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r6) ) goto label$fffc6b7_1_20;
	r4 = NULL;
	goto label$fffc6b7_1_23;
	label$fffc6b7_1_20:
	r7 = r2->array;
	r8 = ((vdynamic**)(r7 + 1))[r3];
	r4 = (h3d__Engine)r8;
	label$fffc6b7_1_23:
	if( r4 == NULL ) hl_null_access();
	r1 = ((Enumt$ctx_9f59bf0*)r0)->p1;
	if( r1 == NULL ) hl_null_access();
	r9 = hl_alloc_closure_ptr(&t$fun_5794eed,hxd_App_setup,r1);
	r4->onReady = r9;
	r2 = ((Enumt$ctx_9f59bf0*)r0)->p0;
	if( r2 == NULL ) hl_null_access();
	r3 = 0;
	r6 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r6) ) goto label$fffc6b7_1_35;
	r4 = NULL;
	goto label$fffc6b7_1_38;
	label$fffc6b7_1_35:
	r7 = r2->array;
	r8 = ((vdynamic**)(r7 + 1))[r3];
	r4 = (h3d__Engine)r8;
	label$fffc6b7_1_38:
	if( r4 == NULL ) hl_null_access();
	h3d_Engine_init(r4);
	return;
}

void hxd_App_new(hxd__App r0) {
	hl__types__ArrayObj r2;
	venum *r12;
	hl_type *r4;
	haxe__Timer r11;
	h3d__Engine r6;
	h3d__$Engine r7;
	vclosure *r10;
	vdynamic *r9;
	int r5, r8;
	varray *r3;
	r4 = &t$h3d_Engine;
	r5 = 1;
	r3 = hl_alloc_array(r4,r5);
	r7 = (h3d__$Engine)g$_h3d_Engine;
	r6 = r7->CURRENT;
	r5 = 0;
	((h3d__Engine*)(r3 + 1))[r5] = r6;
	r2 = hl_types_ArrayObj_alloc(r3);
	if( r2 == NULL ) hl_null_access();
	r5 = 0;
	r8 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r8) ) goto label$fffc6b7_2_14;
	r6 = NULL;
	goto label$fffc6b7_2_17;
	label$fffc6b7_2_14:
	r3 = r2->array;
	r9 = ((vdynamic**)(r3 + 1))[r5];
	r6 = (h3d__Engine)r9;
	label$fffc6b7_2_17:
	if( !r6 ) goto label$fffc6b7_2_42;
	r5 = 0;
	r8 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r8) ) goto label$fffc6b7_2_23;
	r6 = NULL;
	goto label$fffc6b7_2_26;
	label$fffc6b7_2_23:
	r3 = r2->array;
	r9 = ((vdynamic**)(r3 + 1))[r5];
	r6 = (h3d__Engine)r9;
	label$fffc6b7_2_26:
	r0->engine = r6;
	r5 = 0;
	r8 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r8) ) goto label$fffc6b7_2_32;
	r6 = NULL;
	goto label$fffc6b7_2_35;
	label$fffc6b7_2_32:
	r3 = r2->array;
	r9 = ((vdynamic**)(r3 + 1))[r5];
	r6 = (h3d__Engine)r9;
	label$fffc6b7_2_35:
	if( r6 == NULL ) hl_null_access();
	r10 = hl_alloc_closure_ptr(&t$fun_5794eed,hxd_App_setup,r0);
	r6->onReady = r10;
	r10 = hl_alloc_closure_ptr(&t$fun_5794eed,hxd_App_setup,r0);
	r5 = 0;
	r11 = haxe_Timer_delay(r10,r5);
	goto label$fffc6b7_2_47;
	label$fffc6b7_2_42:
	r12 = hl_alloc_enum(&t$ctx_9f59bf0,0);
	((Enumt$ctx_9f59bf0*)r12)->p0 = (hl__types__ArrayObj)r2;
	((Enumt$ctx_9f59bf0*)r12)->p1 = (hxd__App)r0;
	r10 = hl_alloc_closure_ptr(&t$fun_79a1890,hxd_App_new__$1,r12);
	hxd_System_start(r10);
	label$fffc6b7_2_47:
	return;
}

void hxd_App_onResize(hxd__App r0) {
	return;
}

void hxd_App_render(hxd__App r0,h3d__Engine r1) {
	h3d__scene__Scene r3;
	h2d__Scene r4;
	r3 = r0->s3d;
	if( r3 == NULL ) hl_null_access();
	h3d_scene_Scene_render(r3,r1);
	r4 = r0->s2d;
	if( r4 == NULL ) hl_null_access();
	h2d_Scene_render(r4,r1);
	return;
}

void hxd_App_setup__$1(venum* r0) {
	hxd__App r3;
	hl__types__ArrayObj r5;
	bool r8;
	vdynamic *r4;
	h2d__Scene r2;
	varray *r9;
	int r6, r7;
	r3 = ((Enumt$ctx_9f59bf0*)r0)->p1;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->s2d;
	if( r2 ) goto label$fffc6b7_5_5;
	return;
	label$fffc6b7_5_5:
	r3 = ((Enumt$ctx_9f59bf0*)r0)->p1;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->s2d;
	if( r2 == NULL ) hl_null_access();
	h2d_Scene_checkResize(r2);
	r5 = ((Enumt$ctx_9f59bf0*)r0)->p0;
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	r7 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$fffc6b7_5_17;
	r8 = false;
	goto label$fffc6b7_5_20;
	label$fffc6b7_5_17:
	r9 = r5->array;
	r4 = ((vdynamic**)(r9 + 1))[r6];
	r8 = (bool)hl_dyn_casti(&r4,&t$_dyn,&t$_bool);
	label$fffc6b7_5_20:
	if( !r8 ) goto label$fffc6b7_5_24;
	r3 = ((Enumt$ctx_9f59bf0*)r0)->p1;
	if( r3 == NULL ) hl_null_access();
	((void (*)(hxd__App))r3->$type->vobj_proto[0])(r3);
	label$fffc6b7_5_24:
	return;
}

void hxd_App_setup__$2(venum* r0) {
	hxd__App r8;
	hl__types__ArrayObj r1;
	bool r3;
	vclosure *r9;
	vdynamic *r7;
	varray *r6;
	int r2, r4;
	r1 = ((Enumt$ctx_9f59bf0*)r0)->p0;
	if( r1 == NULL ) hl_null_access();
	r2 = 0;
	r3 = true;
	r4 = r1->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$fffc6b7_6_7;
	hl_types_ArrayObj___expand(r1,r2);
	label$fffc6b7_6_7:
	r6 = r1->array;
	r7 = hl_alloc_dynbool(r3);
	((vdynamic**)(r6 + 1))[r2] = r7;
	r8 = ((Enumt$ctx_9f59bf0*)r0)->p1;
	if( r8 == NULL ) hl_null_access();
	((void (*)(hxd__App))r8->$type->vobj_proto[1])(r8);
	hxd_Timer_skip();
	r8 = ((Enumt$ctx_9f59bf0*)r0)->p1;
	if( r8 == NULL ) hl_null_access();
	hxd_App_mainLoop(r8);
	r8 = ((Enumt$ctx_9f59bf0*)r0)->p1;
	if( r8 == NULL ) hl_null_access();
	r9 = hl_alloc_closure_ptr(&t$fun_5794eed,hxd_App_mainLoop,r8);
	hxd_System_setLoop(r9);
	hxd_Key_initialize();
	return;
}

void hxd_App_setup(hxd__App r0) {
	vvirtual *r17;
	hl__types__ArrayObj r2;
	venum *r10;
	hl_type *r4;
	bool r6;
	h3d__scene__Scene r11;
	hxd__Window r16;
	h3d__Engine r8;
	hxd__SceneEvents r15;
	vclosure *r9;
	h2d__Scene r14;
	vdynamic *r7, *r12, *r13, *r18;
	int r5;
	varray *r3;
	static vclosure cl$0 = { &t$fun_7b48b4f, hxd_App_staticHandler, 0 };
	r4 = &t$_dyn;
	r5 = 1;
	r3 = hl_alloc_array(r4,r5);
	r6 = false;
	r7 = hl_alloc_dynbool(r6);
	r5 = 0;
	((vdynamic**)(r3 + 1))[r5] = r7;
	r2 = hl_types_ArrayObj_alloc(r3);
	r8 = r0->engine;
	if( r8 == NULL ) hl_null_access();
	r9 = &cl$0;
	r8->onReady = r9;
	r8 = r0->engine;
	if( r8 == NULL ) hl_null_access();
	r10 = hl_alloc_enum(&t$ctx_9f59bf0,0);
	((Enumt$ctx_9f59bf0*)r10)->p0 = (hl__types__ArrayObj)r2;
	((Enumt$ctx_9f59bf0*)r10)->p1 = (hxd__App)r0;
	r9 = hl_alloc_closure_ptr(&t$fun_79a1890,hxd_App_setup__$1,r10);
	r8->onResized = r9;
	r11 = (h3d__scene__Scene)hl_alloc_obj(&t$h3d_scene_Scene);
	r12 = NULL;
	r13 = NULL;
	h3d_scene_Scene_new(r11,r12,r13);
	r0->s3d = r11;
	r14 = (h2d__Scene)hl_alloc_obj(&t$h2d_Scene);
	h2d_Scene_new(r14);
	r0->s2d = r14;
	r15 = (hxd__SceneEvents)hl_alloc_obj(&t$hxd_SceneEvents);
	r16 = NULL;
	hxd_SceneEvents_new(r15,r16);
	r0->sevents = r15;
	r15 = r0->sevents;
	if( r15 == NULL ) hl_null_access();
	r14 = r0->s2d;
	if( r14 ) goto label$fffc6b7_7_37;
	r17 = NULL;
	goto label$fffc6b7_7_41;
	label$fffc6b7_7_37:
	r17 = r14->f$44;
	if( r17 ) goto label$fffc6b7_7_41;
	r17 = hl_to_virtual(&t$vrt_238393a,(vdynamic*)r14);
	r14->f$44 = r17;
	label$fffc6b7_7_41:
	r18 = NULL;
	hxd_SceneEvents_addScene(r15,r17,r18);
	r15 = r0->sevents;
	if( r15 == NULL ) hl_null_access();
	r11 = r0->s3d;
	if( r11 ) goto label$fffc6b7_7_49;
	r17 = NULL;
	goto label$fffc6b7_7_53;
	label$fffc6b7_7_49:
	r17 = r11->f$28;
	if( r17 ) goto label$fffc6b7_7_53;
	r17 = hl_to_virtual(&t$vrt_238393a,(vdynamic*)r11);
	r11->f$28 = r17;
	label$fffc6b7_7_53:
	r18 = NULL;
	hxd_SceneEvents_addScene(r15,r17,r18);
	r10 = hl_alloc_enum(&t$ctx_9f59bf0,0);
	((Enumt$ctx_9f59bf0*)r10)->p0 = (hl__types__ArrayObj)r2;
	((Enumt$ctx_9f59bf0*)r10)->p1 = (hxd__App)r0;
	r9 = hl_alloc_closure_ptr(&t$fun_79a1890,hxd_App_setup__$2,r10);
	hxd_App_loadAssets(r0,r9);
	return;
}

void hxd_App_loadAssets(hxd__App r0,vclosure* r1) {
	if( r1 == NULL ) hl_null_access();
	r1->hasValue ? ((void (*)(vdynamic*))r1->fun)((vdynamic*)r1->value) : ((void (*)(void))r1->fun)();
	return;
}

void hxd_App_init(hxd__App r0) {
	return;
}

void hxd_App_mainLoop(hxd__App r0) {
	vvirtual *r9;
	bool r3;
	h3d__scene__Scene r7;
	h3d__Engine r8;
	hxd__$Timer r5;
	double r4;
	hxd__SceneEvents r2;
	h2d__Scene r6;
	hxd_Timer_update();
	r2 = r0->sevents;
	if( r2 == NULL ) hl_null_access();
	hxd_SceneEvents_checkEvents(r2);
	r3 = r0->isDisposed;
	if( !r3 ) goto label$fffc6b7_10_7;
	return;
	label$fffc6b7_10_7:
	r5 = (hxd__$Timer)g$_hxd_Timer;
	r4 = r5->dt;
	((void (*)(hxd__App,double))r0->$type->vobj_proto[2])(r0,r4);
	r3 = r0->isDisposed;
	if( !r3 ) goto label$fffc6b7_10_13;
	return;
	label$fffc6b7_10_13:
	r5 = (hxd__$Timer)g$_hxd_Timer;
	r4 = r5->dt;
	r6 = r0->s2d;
	if( !r6 ) goto label$fffc6b7_10_20;
	r6 = r0->s2d;
	if( r6 == NULL ) hl_null_access();
	h2d_Scene_setElapsedTime(r6,r4);
	label$fffc6b7_10_20:
	r7 = r0->s3d;
	if( !r7 ) goto label$fffc6b7_10_25;
	r7 = r0->s3d;
	if( r7 == NULL ) hl_null_access();
	h3d_scene_Scene_setElapsedTime(r7,r4);
	label$fffc6b7_10_25:
	r8 = r0->engine;
	if( r8 == NULL ) hl_null_access();
	r9 = hl_to_virtual(&t$vrt_bb1eaef,(vdynamic*)r0);
	r3 = h3d_Engine_render(r8,r9);
	return;
}

void hxd_App_update(hxd__App r0,double r1) {
	return;
}

void hxd_App_staticHandler() {
	return;
}

