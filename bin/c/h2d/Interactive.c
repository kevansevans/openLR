﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/Interactive.h>
h2d__Scene h2d_Object_getScene(h2d__Object);
void h2d_Scene_addEventTarget(h2d__Scene,h2d__Interactive);
void h2d_Interactive_updateMask(h2d__Interactive);
void h2d_Object_onAdd(h2d__Object);
#include <h2d/RenderContext.h>
#include <h2d/Tile.h>
extern hl_type t$_i32;
extern hl_type t$_f64;
h2d__Tile h2d_Tile_fromColor(int,vdynamic*,vdynamic*,vdynamic*);
void h2d_Drawable_emitTile(h2d__Drawable,h2d__RenderContext,h2d__Tile);
#include <h2d/col/Bounds.h>
void h2d_Object_getBoundsRec(h2d__Object,h2d__Object,h2d__col__Bounds,bool);
void h2d_Object_addBounds(h2d__Object,h2d__Object,h2d__col__Bounds,double,double,double,double);
void h2d_Object_onHierarchyMoved(h2d__Object,bool);
void h2d_Scene_removeEventTarget(h2d__Scene,h2d__Interactive,bool*);
#include <h2d/Mask.h>
extern h2d__$Mask g$_h2d_Mask;
bool hl_BaseType_check(hl__BaseType,vdynamic*);
void h2d_Object_onRemove(h2d__Object);
#include <hxd/EventKind.h>
extern hl_type t$vrt_238393a;
extern hl_type t$h2d_col_Point;
void h2d_col_Point_new(h2d__col__Point,double*,double*);
h2d__col__Point h2d_Object_localToGlobal(h2d__Object,h2d__col__Point);
h2d__col__Point h2d_Object_globalToLocal(h2d__Object,h2d__col__Point);
void h2d_Object_calcAbsPos(h2d__Object);
extern hl_type t$vrt_c8e313e;
void hxd_SceneEvents_updateCursor(hxd__SceneEvents,vvirtual*);
void hxd_SceneEvents_focus(hxd__SceneEvents,vvirtual*);
bool h2d_Interactive_hasFocus(h2d__Interactive);
void hxd_SceneEvents_blur(hxd__SceneEvents);
extern hl_type t$fun_0305adc;
extern venum* g$hxd_Cursor_Button;
void h2d_Drawable_new(h2d__Drawable,h2d__Object);

void h2d_Interactive_onAdd(h2d__Interactive r0) {
	h2d__Scene r1;
	r1 = h2d_Object_getScene(((h2d__Object)r0));
	r0->scene = r1;
	r1 = r0->scene;
	if( !r1 ) goto label$1781ebc_1_7;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	h2d_Scene_addEventTarget(r1,r0);
	label$1781ebc_1_7:
	h2d_Interactive_updateMask(r0);
	h2d_Object_onAdd(((h2d__Object)r0));
	return;
}

void h2d_Interactive_draw(h2d__Interactive r0,h2d__RenderContext r1) {
	h2d__Tile r7;
	double r4, r6, r11, r15;
	vdynamic *r3, *r8, *r12, *r13, *r16;
	int r5, r9, r10, r14;
	r3 = r0->backgroundColor;
	if( !r3 ) goto label$1781ebc_2_20;
	r3 = r0->backgroundColor;
	r4 = r0->width;
	r5 = (int)r4;
	r6 = r0->height;
	r9 = r3 ? r3->v.i : 0;
	r8 = hl_alloc_dynamic(&t$_i32);
	r8->v.i = r5;
	r10 = (int)r6;
	r12 = hl_alloc_dynamic(&t$_i32);
	r12->v.i = r10;
	r13 = r0->backgroundColor;
	r10 = r13 ? r13->v.i : 0;
	r14 = 24;
	r10 = ((unsigned)r10) >> r14;
	r11 = (double)r10;
	r15 = 255.;
	r11 = r11 / r15;
	r16 = hl_alloc_dynamic(&t$_f64);
	r16->v.d = r11;
	r7 = h2d_Tile_fromColor(r9,r8,r12,r16);
	h2d_Drawable_emitTile(((h2d__Drawable)r0),r1,r7);
	label$1781ebc_2_20:
	return;
}

void h2d_Interactive_getBoundsRec(h2d__Interactive r0,h2d__Object r1,h2d__col__Bounds r2,bool r3) {
	double r6, r8, r9, r10, r12, r13;
	vdynamic *r5;
	int r7, r11;
	h2d_Object_getBoundsRec(((h2d__Object)r0),r1,r2,r3);
	r5 = r0->backgroundColor;
	if( r5 ) goto label$1781ebc_3_4;
	if( !r3 ) goto label$1781ebc_3_13;
	label$1781ebc_3_4:
	r6 = r0->width;
	r7 = (int)r6;
	r8 = r0->height;
	r9 = 0.;
	r10 = 0.;
	r12 = (double)r7;
	r11 = (int)r8;
	r13 = (double)r11;
	h2d_Object_addBounds(((h2d__Object)r0),r1,r2,r9,r10,r12,r13);
	label$1781ebc_3_13:
	return;
}

void h2d_Interactive_onHierarchyMoved(h2d__Interactive r0,bool r1) {
	bool *r4;
	h2d__Scene r3;
	h2d_Object_onHierarchyMoved(((h2d__Object)r0),r1);
	r3 = r0->scene;
	if( !r3 ) goto label$1781ebc_4_14;
	r3 = r0->scene;
	if( r3 == NULL ) hl_null_access();
	r4 = NULL;
	h2d_Scene_removeEventTarget(r3,r0,r4);
	r3 = h2d_Object_getScene(((h2d__Object)r0));
	r0->scene = r3;
	r3 = r0->scene;
	if( !r3 ) goto label$1781ebc_4_14;
	r3 = r0->scene;
	if( r3 == NULL ) hl_null_access();
	h2d_Scene_addEventTarget(r3,r0);
	label$1781ebc_4_14:
	if( !r1 ) goto label$1781ebc_4_16;
	h2d_Interactive_updateMask(r0);
	label$1781ebc_4_16:
	return;
}

void h2d_Interactive_updateMask(h2d__Interactive r0) {
	bool r6;
	h2d__Object r2, r4;
	h2d__$Mask r5;
	h2d__Mask r1;
	r1 = NULL;
	r0->parentMask = r1;
	r2 = r0->parent;
	label$1781ebc_5_3:
	if( !r2 ) goto label$1781ebc_5_18;
	r5 = (h2d__$Mask)g$_h2d_Mask;
	r6 = hl_BaseType_check(((hl__BaseType)r5),((vdynamic*)r2));
	if( !r6 ) goto label$1781ebc_5_10;
	r1 = (h2d__Mask)r2;
	goto label$1781ebc_5_11;
	label$1781ebc_5_10:
	r1 = NULL;
	label$1781ebc_5_11:
	if( !r1 ) goto label$1781ebc_5_14;
	r0->parentMask = r1;
	goto label$1781ebc_5_18;
	label$1781ebc_5_14:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->parent;
	r2 = r4;
	goto label$1781ebc_5_3;
	label$1781ebc_5_18:
	return;
}

void h2d_Interactive_onRemove(h2d__Interactive r0) {
	bool *r4;
	bool r3;
	h2d__Scene r2;
	r2 = r0->scene;
	if( !r2 ) goto label$1781ebc_6_9;
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = true;
	r4 = &r3;
	h2d_Scene_removeEventTarget(r2,r0,r4);
	r2 = NULL;
	r0->scene = r2;
	label$1781ebc_6_9:
	h2d_Object_onRemove(((h2d__Object)r0));
	return;
}

bool h2d_Interactive_checkBounds(h2d__Interactive r0,hxd__Event r1) {
	venum *r3;
	bool r4;
	int r2;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->kind;
	if( r3 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r3);
	switch(r2) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 8:
		case 9:
			r4 = true;
			return r4;
		case 4:
		case 6:
		case 7:
		case 10:
			r4 = false;
			return r4;
	}
}

vvirtual* h2d_Interactive_getInteractiveScene(h2d__Interactive r0) {
	vvirtual *r2;
	h2d__Scene r1;
	r1 = r0->scene;
	if( r1 ) goto label$1781ebc_8_4;
	r2 = NULL;
	goto label$1781ebc_8_8;
	label$1781ebc_8_4:
	r2 = r1->f$44;
	if( r2 ) goto label$1781ebc_8_8;
	r2 = hl_to_virtual(&t$vrt_238393a,(vdynamic*)r1);
	r1->f$44 = r2;
	label$1781ebc_8_8:
	return r2;
}

void h2d_Interactive_handleEvent(h2d__Interactive r0,hxd__Event r1) {
	vvirtual *r17;
	venum *r20;
	bool r4;
	h2d__Mask r3, r13;
	h2d__col__Point r5, r10;
	vclosure *r22;
	double r6, r8, r11, r12, r14, r15, r18, r19;
	double *r7, *r9;
	int r16, r21;
	r3 = r0->parentMask;
	if( !r3 ) goto label$1781ebc_9_44;
	r4 = h2d_Interactive_checkBounds(r0,r1);
	if( !r4 ) goto label$1781ebc_9_44;
	r3 = r0->parentMask;
	r5 = (h2d__col__Point)hl_alloc_obj(&t$h2d_col_Point);
	if( r1 == NULL ) hl_null_access();
	r6 = r1->relX;
	r7 = &r6;
	r8 = r1->relY;
	r9 = &r8;
	h2d_col_Point_new(r5,r7,r9);
	r10 = h2d_Object_localToGlobal(((h2d__Object)r0),r5);
	r11 = r5->x;
	r12 = r5->y;
	label$1781ebc_9_15:
	if( !r3 ) goto label$1781ebc_9_44;
	if( r5 == NULL ) hl_null_access();
	r5->x = r11;
	r5->y = r12;
	if( r3 == NULL ) hl_null_access();
	r10 = h2d_Object_globalToLocal(((h2d__Object)r3),r5);
	if( r10 == NULL ) hl_null_access();
	r14 = r10->x;
	r15 = 0.;
	if( r14 < r15 ) goto label$1781ebc_9_37;
	r14 = r10->y;
	r15 = 0.;
	if( r14 < r15 ) goto label$1781ebc_9_37;
	r14 = r10->x;
	r16 = r3->width;
	r15 = (double)r16;
	if( r15 < r14 ) goto label$1781ebc_9_37;
	r14 = r10->y;
	r16 = r3->height;
	r15 = (double)r16;
	if( !(r15 < r14) ) goto label$1781ebc_9_41;
	label$1781ebc_9_37:
	if( r1 == NULL ) hl_null_access();
	r4 = true;
	r1->cancel = r4;
	return;
	label$1781ebc_9_41:
	r13 = r3->parentMask;
	r3 = r13;
	goto label$1781ebc_9_15;
	label$1781ebc_9_44:
	r17 = r0->shape;
	if( r17 ) goto label$1781ebc_9_71;
	r4 = r0->isEllipse;
	if( !r4 ) goto label$1781ebc_9_71;
	r4 = h2d_Interactive_checkBounds(r0,r1);
	if( !r4 ) goto label$1781ebc_9_71;
	r11 = r0->width;
	r12 = 0.5;
	r11 = r11 * r12;
	r12 = r0->height;
	r14 = 0.5;
	r12 = r12 * r14;
	if( r1 == NULL ) hl_null_access();
	r14 = r1->relX;
	r14 = r14 - r11;
	r14 = r14 / r11;
	r15 = r1->relY;
	r15 = r15 - r12;
	r15 = r15 / r12;
	r18 = r14 * r14;
	r19 = r15 * r15;
	r18 = r18 + r19;
	r19 = 1.;
	if( !(r19 < r18) ) goto label$1781ebc_9_71;
	r4 = true;
	r1->cancel = r4;
	return;
	label$1781ebc_9_71:
	r4 = r0->propagateEvents;
	if( !r4 ) goto label$1781ebc_9_76;
	if( r1 == NULL ) hl_null_access();
	r4 = true;
	r1->propagate = r4;
	label$1781ebc_9_76:
	r4 = r0->cancelEvents;
	if( !r4 ) goto label$1781ebc_9_81;
	if( r1 == NULL ) hl_null_access();
	r4 = true;
	r1->cancel = r4;
	label$1781ebc_9_81:
	if( r1 == NULL ) hl_null_access();
	r20 = r1->kind;
	if( r20 == NULL ) hl_null_access();
	r16 = HL__ENUM_INDEX__(r20);
	switch(r16) {
		default:
			goto label$1781ebc_9_175;
		case 0:
			r4 = r0->enableRightButton;
			if( r4 ) goto label$1781ebc_9_92;
			r16 = r1->button;
			r21 = 0;
			if( r16 != r21 ) goto label$1781ebc_9_101;
			label$1781ebc_9_92:
			r16 = r1->button;
			r0->mouseDownButton = r16;
			r22 = r0->onPush;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			r4 = r1->cancel;
			if( !r4 ) goto label$1781ebc_9_101;
			r16 = -1;
			r0->mouseDownButton = r16;
			label$1781ebc_9_101:
			goto label$1781ebc_9_175;
		case 1:
			r4 = r0->enableRightButton;
			if( r4 ) goto label$1781ebc_9_107;
			r16 = r1->button;
			r21 = 0;
			if( r16 != r21 ) goto label$1781ebc_9_116;
			label$1781ebc_9_107:
			r22 = r0->onRelease;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			r16 = r0->mouseDownButton;
			r21 = r1->button;
			if( r16 != r21 ) goto label$1781ebc_9_116;
			r22 = r0->onClick;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			label$1781ebc_9_116:
			r16 = -1;
			r0->mouseDownButton = r16;
			goto label$1781ebc_9_175;
		case 2:
			r22 = r0->onMove;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			goto label$1781ebc_9_175;
		case 3:
			r22 = r0->onOver;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			goto label$1781ebc_9_175;
		case 4:
			r22 = r0->onOut;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			goto label$1781ebc_9_175;
		case 5:
			r22 = r0->onWheel;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			goto label$1781ebc_9_175;
		case 6:
			r22 = r0->onFocus;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			goto label$1781ebc_9_175;
		case 7:
			r22 = r0->onFocusLost;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			goto label$1781ebc_9_175;
		case 8:
			r22 = r0->onKeyDown;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			goto label$1781ebc_9_175;
		case 9:
			r22 = r0->onKeyUp;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			goto label$1781ebc_9_175;
		case 10:
			r4 = r0->enableRightButton;
			if( r4 ) goto label$1781ebc_9_156;
			r16 = r1->button;
			r21 = 0;
			if( r16 != r21 ) goto label$1781ebc_9_165;
			label$1781ebc_9_156:
			r22 = r0->onRelease;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			r16 = r0->mouseDownButton;
			r21 = r1->button;
			if( r16 != r21 ) goto label$1781ebc_9_165;
			r22 = r0->onReleaseOutside;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			label$1781ebc_9_165:
			r16 = -1;
			r0->mouseDownButton = r16;
			goto label$1781ebc_9_175;
		case 11:
			r22 = r0->onTextInput;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
			goto label$1781ebc_9_175;
		case 12:
			r22 = r0->onCheck;
			if( r22 == NULL ) hl_null_access();
			r22->hasValue ? ((void (*)(vdynamic*,hxd__Event))r22->fun)((vdynamic*)r22->value,r1) : ((void (*)(hxd__Event))r22->fun)(r1);
	}
	label$1781ebc_9_175:
	return;
}

void h2d_Interactive_calcAbsPos(h2d__Interactive r0) {
	double r2, r3, r4, r5;
	h2d_Object_calcAbsPos(((h2d__Object)r0));
	r2 = 1.;
	r3 = r0->matA;
	r4 = r0->matD;
	r3 = r3 * r4;
	r4 = r0->matB;
	r5 = r0->matC;
	r4 = r4 * r5;
	r3 = r3 - r4;
	r2 = r2 / r3;
	r0->invDet = r2;
	return;
}

venum* h2d_Interactive_set_cursor(h2d__Interactive r0,venum* r1) {
	vvirtual *r5;
	hxd__SceneEvents r4;
	h2d__Scene r3;
	r0->cursor = r1;
	r3 = r0->scene;
	if( !r3 ) goto label$1781ebc_11_16;
	r3 = r0->scene;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->events;
	if( !r4 ) goto label$1781ebc_11_16;
	r3 = r0->scene;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->events;
	if( r4 == NULL ) hl_null_access();
	r5 = r0->f$54;
	if( r5 ) goto label$1781ebc_11_15;
	r5 = hl_to_virtual(&t$vrt_c8e313e,(vdynamic*)r0);
	r0->f$54 = r5;
	label$1781ebc_11_15:
	hxd_SceneEvents_updateCursor(r4,r5);
	label$1781ebc_11_16:
	return r1;
}

void h2d_Interactive_focus(h2d__Interactive r0) {
	vvirtual *r4;
	hxd__SceneEvents r3;
	h2d__Scene r2;
	r2 = r0->scene;
	if( !r2 ) goto label$1781ebc_12_6;
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->events;
	if( r3 ) goto label$1781ebc_12_7;
	label$1781ebc_12_6:
	return;
	label$1781ebc_12_7:
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->events;
	if( r3 == NULL ) hl_null_access();
	r4 = r0->f$54;
	if( r4 ) goto label$1781ebc_12_15;
	r4 = hl_to_virtual(&t$vrt_c8e313e,(vdynamic*)r0);
	r0->f$54 = r4;
	label$1781ebc_12_15:
	hxd_SceneEvents_focus(r3,r4);
	return;
}

void h2d_Interactive_blur(h2d__Interactive r0) {
	bool r2;
	hxd__SceneEvents r3;
	h2d__Scene r4;
	r2 = h2d_Interactive_hasFocus(r0);
	if( !r2 ) goto label$1781ebc_13_7;
	r4 = r0->scene;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->events;
	if( r3 == NULL ) hl_null_access();
	hxd_SceneEvents_blur(r3);
	label$1781ebc_13_7:
	return;
}

bool h2d_Interactive_hasFocus(h2d__Interactive r0) {
	vvirtual *r4;
	bool r3;
	hxd__SceneEvents r2;
	h2d__Scene r1;
	r1 = r0->scene;
	if( !r1 ) goto label$1781ebc_14_16;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( !r2 ) goto label$1781ebc_14_16;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->currentFocus;
	if( r4 ? (r0 && r4->value == (vdynamic*)r0) : (r0 == NULL) ) goto label$1781ebc_14_14;
	r3 = false;
	goto label$1781ebc_14_15;
	label$1781ebc_14_14:
	r3 = true;
	label$1781ebc_14_15:
	return r3;
	label$1781ebc_14_16:
	r3 = false;
	return r3;
}

void h2d_Interactive_onOver(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onOut(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onPush(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onRelease(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onReleaseOutside(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onClick(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onMove(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onWheel(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onFocus(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onFocusLost(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onKeyUp(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onKeyDown(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onCheck(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onTextInput(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_new(h2d__Interactive r0,double r1,double r2,h2d__Object r3,vvirtual* r4) {
	venum *r9;
	bool r8;
	double r6;
	vclosure *r5;
	int r7;
	r5 = r0->onOver;
	if( r5 ) goto label$1781ebc_29_4;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onOver,r0);
	r0->onOver = r5;
	label$1781ebc_29_4:
	r5 = r0->onOut;
	if( r5 ) goto label$1781ebc_29_8;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onOut,r0);
	r0->onOut = r5;
	label$1781ebc_29_8:
	r5 = r0->onPush;
	if( r5 ) goto label$1781ebc_29_12;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onPush,r0);
	r0->onPush = r5;
	label$1781ebc_29_12:
	r5 = r0->onRelease;
	if( r5 ) goto label$1781ebc_29_16;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onRelease,r0);
	r0->onRelease = r5;
	label$1781ebc_29_16:
	r5 = r0->onReleaseOutside;
	if( r5 ) goto label$1781ebc_29_20;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onReleaseOutside,r0);
	r0->onReleaseOutside = r5;
	label$1781ebc_29_20:
	r5 = r0->onClick;
	if( r5 ) goto label$1781ebc_29_24;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onClick,r0);
	r0->onClick = r5;
	label$1781ebc_29_24:
	r5 = r0->onMove;
	if( r5 ) goto label$1781ebc_29_28;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onMove,r0);
	r0->onMove = r5;
	label$1781ebc_29_28:
	r5 = r0->onWheel;
	if( r5 ) goto label$1781ebc_29_32;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onWheel,r0);
	r0->onWheel = r5;
	label$1781ebc_29_32:
	r5 = r0->onFocus;
	if( r5 ) goto label$1781ebc_29_36;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onFocus,r0);
	r0->onFocus = r5;
	label$1781ebc_29_36:
	r5 = r0->onFocusLost;
	if( r5 ) goto label$1781ebc_29_40;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onFocusLost,r0);
	r0->onFocusLost = r5;
	label$1781ebc_29_40:
	r5 = r0->onKeyUp;
	if( r5 ) goto label$1781ebc_29_44;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onKeyUp,r0);
	r0->onKeyUp = r5;
	label$1781ebc_29_44:
	r5 = r0->onKeyDown;
	if( r5 ) goto label$1781ebc_29_48;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onKeyDown,r0);
	r0->onKeyDown = r5;
	label$1781ebc_29_48:
	r5 = r0->onCheck;
	if( r5 ) goto label$1781ebc_29_52;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onCheck,r0);
	r0->onCheck = r5;
	label$1781ebc_29_52:
	r5 = r0->onTextInput;
	if( r5 ) goto label$1781ebc_29_56;
	r5 = hl_alloc_closure_ptr(&t$fun_0305adc,h2d_Interactive_onTextInput,r0);
	r0->onTextInput = r5;
	label$1781ebc_29_56:
	r6 = 0.;
	r0->shapeY = r6;
	r6 = 0.;
	r0->shapeX = r6;
	r7 = -1;
	r0->mouseDownButton = r7;
	r8 = false;
	r0->enableRightButton = r8;
	r8 = false;
	r0->propagateEvents = r8;
	r8 = false;
	r0->cancelEvents = r8;
	r9 = (venum*)g$hxd_Cursor_Button;
	r0->cursor = r9;
	h2d_Drawable_new(((h2d__Drawable)r0),r3);
	r0->width = r1;
	r0->height = r2;
	r0->shape = r4;
	return;
}

