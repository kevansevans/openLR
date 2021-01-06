﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/Object.h>
extern hl_type t$h3d_Matrix;
void h3d_Matrix_new(h3d__Matrix);
void h3d_Matrix_identity(h3d__Matrix);
extern hl_type t$h3d_Quat;
void h3d_Quat_new(h3d__Quat,double*,double*,double*,double*);
extern hl_type t$h3d_scene_Object;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void h3d_scene_Object_addChild(h3d__scene__Object,h3d__scene__Object);
#include <h3d/col/Point.h>
void h3d_scene_Object_syncPos(h3d__scene__Object);
extern hl_type t$h3d_col_Point;
void h3d_col_Point_new(h3d__col__Point,double*,double*,double*);
void h3d_Matrix_inverse3x4(h3d__Matrix,h3d__Matrix);
void h3d_scene_Object_addChildAt(h3d__scene__Object,h3d__scene__Object,int);
extern String s$Recursive_addChild;
vdynamic* haxe_Exception_thrown(vdynamic*);
void h3d_scene_Object_removeChild(h3d__scene__Object,h3d__scene__Object);
void hl_types_ArrayObj_insert(hl__types__ArrayObj,int,vdynamic*);
void h3d_scene_Object_onParentChanged(h3d__scene__Object);
#include <h3d/scene/Mesh.h>
extern h3d__scene__$Mesh g$_h3d_scene_Mesh;
bool hl_BaseType_check(hl__BaseType,vdynamic*);
bool hl_types_ArrayObj_remove(hl__types__ArrayObj,vdynamic*);
#include <h3d/scene/Scene.h>
extern h3d__scene__$Scene g$_h3d_scene_Scene;
String Std_string(vdynamic*);
extern String s$_is_not_a_Mesh;
String String___add__(String,String);
#include <h3d/scene/RenderContext.h>
h3d__Matrix h3d_Quat_toMatrix(h3d__Quat,h3d__Matrix);
void h3d_Matrix_multiply3x4(h3d__Matrix,h3d__Matrix,h3d__Matrix);
double h3d_anim_Animation_update(h3d__anim__Animation,double);
String h3d_scene_Object_toString(h3d__scene__Object);
hl__Class Type_getClass(vdynamic*);
String Type_getClassName(hl__Class);
extern String s$5058f1a;
hl__types__ArrayObj String_split(String,String);
vdynamic* hl_types_ArrayObj_pop(hl__types__ArrayObj);
extern String s$;
extern String s$84c4047;
extern String s$9371d7a;

vvirtual* h3d_scene_Object_set_cullingCollider(h3d__scene__Object r0,vvirtual* r1) {
	int r2, r3, r4, r5;
	r0->cullingCollider = r1;
	r2 = 4096;
	r3 = r0->flags;
	r5 = -1;
	r4 = r2 ^ r5;
	r3 = r3 & r4;
	r0->flags = r3;
	return r1;
}

void h3d_scene_Object_new(h3d__scene__Object r0,h3d__scene__Object r1) {
	hl__types__ArrayObj r18;
	hl_type *r20;
	bool r7;
	h3d__Quat r11;
	double r6;
	double *r12, *r13, *r14, *r15;
	varray *r19;
	h3d__scene__Object r16, r17;
	h3d__Matrix r5;
	int r2, r4, r8, r9, r10;
	r2 = 0;
	r0->flags = r2;
	r5 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r5);
	r0->absPos = r5;
	r5 = r0->absPos;
	if( r5 == NULL ) hl_null_access();
	h3d_Matrix_identity(r5);
	r6 = 0.;
	r0->x = r6;
	r4 = 1;
	r7 = true;
	if( !r7 ) goto label$e3fc2e4_2_17;
	r8 = r0->flags;
	r8 = r8 | r4;
	r0->flags = r8;
	goto label$e3fc2e4_2_22;
	label$e3fc2e4_2_17:
	r8 = r0->flags;
	r10 = -1;
	r9 = r4 ^ r10;
	r8 = r8 & r9;
	r0->flags = r8;
	label$e3fc2e4_2_22:
	r6 = 0.;
	r0->y = r6;
	r4 = 1;
	r7 = true;
	if( !r7 ) goto label$e3fc2e4_2_31;
	r8 = r0->flags;
	r8 = r8 | r4;
	r0->flags = r8;
	goto label$e3fc2e4_2_36;
	label$e3fc2e4_2_31:
	r8 = r0->flags;
	r10 = -1;
	r9 = r4 ^ r10;
	r8 = r8 & r9;
	r0->flags = r8;
	label$e3fc2e4_2_36:
	r6 = 0.;
	r0->z = r6;
	r4 = 1;
	r7 = true;
	if( !r7 ) goto label$e3fc2e4_2_45;
	r8 = r0->flags;
	r8 = r8 | r4;
	r0->flags = r8;
	goto label$e3fc2e4_2_50;
	label$e3fc2e4_2_45:
	r8 = r0->flags;
	r10 = -1;
	r9 = r4 ^ r10;
	r8 = r8 & r9;
	r0->flags = r8;
	label$e3fc2e4_2_50:
	r6 = 1.;
	r0->scaleX = r6;
	r4 = 1;
	r7 = true;
	if( !r7 ) goto label$e3fc2e4_2_59;
	r8 = r0->flags;
	r8 = r8 | r4;
	r0->flags = r8;
	goto label$e3fc2e4_2_64;
	label$e3fc2e4_2_59:
	r8 = r0->flags;
	r10 = -1;
	r9 = r4 ^ r10;
	r8 = r8 & r9;
	r0->flags = r8;
	label$e3fc2e4_2_64:
	r6 = 1.;
	r0->scaleY = r6;
	r4 = 1;
	r7 = true;
	if( !r7 ) goto label$e3fc2e4_2_73;
	r8 = r0->flags;
	r8 = r8 | r4;
	r0->flags = r8;
	goto label$e3fc2e4_2_78;
	label$e3fc2e4_2_73:
	r8 = r0->flags;
	r10 = -1;
	r9 = r4 ^ r10;
	r8 = r8 & r9;
	r0->flags = r8;
	label$e3fc2e4_2_78:
	r6 = 1.;
	r0->scaleZ = r6;
	r4 = 1;
	r7 = true;
	if( !r7 ) goto label$e3fc2e4_2_87;
	r8 = r0->flags;
	r8 = r8 | r4;
	r0->flags = r8;
	goto label$e3fc2e4_2_92;
	label$e3fc2e4_2_87:
	r8 = r0->flags;
	r10 = -1;
	r9 = r4 ^ r10;
	r8 = r8 & r9;
	r0->flags = r8;
	label$e3fc2e4_2_92:
	r11 = (h3d__Quat)hl_alloc_obj(&t$h3d_Quat);
	r12 = NULL;
	r13 = NULL;
	r14 = NULL;
	r15 = NULL;
	h3d_Quat_new(r11,r12,r13,r14,r15);
	r0->qRot = r11;
	r4 = 1;
	r16 = r0->follow;
	r17 = NULL;
	if( r16 != r17 ) goto label$e3fc2e4_2_105;
	r7 = false;
	goto label$e3fc2e4_2_106;
	label$e3fc2e4_2_105:
	r7 = true;
	label$e3fc2e4_2_106:
	if( !r7 ) goto label$e3fc2e4_2_111;
	r8 = r0->flags;
	r8 = r8 | r4;
	r0->flags = r8;
	goto label$e3fc2e4_2_116;
	label$e3fc2e4_2_111:
	r8 = r0->flags;
	r10 = -1;
	r9 = r4 ^ r10;
	r8 = r8 & r9;
	r0->flags = r8;
	label$e3fc2e4_2_116:
	r4 = 2;
	r8 = r0->flags;
	r8 = r8 | r4;
	r0->flags = r8;
	r20 = &t$h3d_scene_Object;
	r4 = 0;
	r19 = hl_alloc_array(r20,r4);
	r18 = hl_types_ArrayObj_alloc(r19);
	r0->children = r18;
	if( !r1 ) goto label$e3fc2e4_2_128;
	if( r1 == NULL ) hl_null_access();
	h3d_scene_Object_addChild(r1,r0);
	label$e3fc2e4_2_128:
	return;
}

h3d__col__Point h3d_scene_Object_localToGlobal(h3d__scene__Object r0,h3d__col__Point r1) {
	double r8, r9, r10, r11, r12;
	h3d__col__Point r3;
	double *r4, *r5, *r6;
	h3d__Matrix r7;
	h3d_scene_Object_syncPos(r0);
	if( r1 ) goto label$e3fc2e4_3_8;
	r3 = (h3d__col__Point)hl_alloc_obj(&t$h3d_col_Point);
	r4 = NULL;
	r5 = NULL;
	r6 = NULL;
	h3d_col_Point_new(r3,r4,r5,r6);
	r1 = r3;
	label$e3fc2e4_3_8:
	r7 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r8 = r1->x;
	if( r7 == NULL ) hl_null_access();
	r9 = r7->_11;
	r8 = r8 * r9;
	r9 = r1->y;
	r10 = r7->_21;
	r9 = r9 * r10;
	r8 = r8 + r9;
	r9 = r1->z;
	r10 = r7->_31;
	r9 = r9 * r10;
	r8 = r8 + r9;
	r9 = r7->_41;
	r8 = r8 + r9;
	r9 = r1->x;
	r10 = r7->_12;
	r9 = r9 * r10;
	r10 = r1->y;
	r11 = r7->_22;
	r10 = r10 * r11;
	r9 = r9 + r10;
	r10 = r1->z;
	r11 = r7->_32;
	r10 = r10 * r11;
	r9 = r9 + r10;
	r10 = r7->_42;
	r9 = r9 + r10;
	r10 = r1->x;
	r11 = r7->_13;
	r10 = r10 * r11;
	r11 = r1->y;
	r12 = r7->_23;
	r11 = r11 * r12;
	r10 = r10 + r11;
	r11 = r1->z;
	r12 = r7->_33;
	r11 = r11 * r12;
	r10 = r10 + r11;
	r11 = r7->_43;
	r10 = r10 + r11;
	r1->x = r8;
	r1->y = r9;
	r1->z = r10;
	return r1;
}

h3d__Matrix h3d_scene_Object_getInvPos(h3d__scene__Object r0) {
	double r3, r4;
	h3d__Matrix r2, r5;
	h3d_scene_Object_syncPos(r0);
	r2 = r0->invPos;
	if( r2 ) goto label$e3fc2e4_4_10;
	r2 = (h3d__Matrix)hl_alloc_obj(&t$h3d_Matrix);
	h3d_Matrix_new(r2);
	r0->invPos = r2;
	r2 = r0->invPos;
	if( r2 == NULL ) hl_null_access();
	r3 = 0.;
	r2->_44 = r3;
	label$e3fc2e4_4_10:
	r2 = r0->invPos;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->_44;
	r4 = 0.;
	if( r3 != r4 ) goto label$e3fc2e4_4_19;
	r2 = r0->invPos;
	if( r2 == NULL ) hl_null_access();
	r5 = r0->absPos;
	h3d_Matrix_inverse3x4(r2,r5);
	label$e3fc2e4_4_19:
	r2 = r0->invPos;
	return r2;
}

void h3d_scene_Object_addChild(h3d__scene__Object r0,h3d__scene__Object r1) {
	hl__types__ArrayObj r4;
	int r3;
	r4 = r0->children;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	h3d_scene_Object_addChildAt(r0,r1,r3);
	return;
}

void h3d_scene_Object_addChildAt(h3d__scene__Object r0,h3d__scene__Object r1,int r2) {
	String r10;
	hl__types__ArrayObj r6;
	bool r11;
	vdynamic *r9;
	h3d__scene__Object r7, r8;
	int r4, r5, r12, r13;
	r5 = 0;
	if( r2 >= r5 ) goto label$e3fc2e4_6_4;
	r4 = 0;
	r2 = r4;
	label$e3fc2e4_6_4:
	r6 = r0->children;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->length;
	if( r5 >= r2 ) goto label$e3fc2e4_6_12;
	r6 = r0->children;
	if( r6 == NULL ) hl_null_access();
	r4 = r6->length;
	r2 = r4;
	label$e3fc2e4_6_12:
	r7 = r0;
	label$e3fc2e4_6_13:
	if( !r7 ) goto label$e3fc2e4_6_23;
	if( r7 != r1 ) goto label$e3fc2e4_6_19;
	r10 = (String)s$Recursive_addChild;
	r9 = haxe_Exception_thrown(((vdynamic*)r10));
	hl_throw((vdynamic*)r9);
	label$e3fc2e4_6_19:
	if( r7 == NULL ) hl_null_access();
	r8 = r7->parent;
	r7 = r8;
	goto label$e3fc2e4_6_13;
	label$e3fc2e4_6_23:
	if( r1 == NULL ) hl_null_access();
	r8 = r1->parent;
	if( !r8 ) goto label$e3fc2e4_6_54;
	r4 = r1->flags;
	r5 = 32;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 != r5 ) goto label$e3fc2e4_6_33;
	r11 = false;
	goto label$e3fc2e4_6_34;
	label$e3fc2e4_6_33:
	r11 = true;
	label$e3fc2e4_6_34:
	r4 = 32;
	r5 = r1->flags;
	r13 = -1;
	r12 = r4 ^ r13;
	r5 = r5 & r12;
	r1->flags = r5;
	r8 = r1->parent;
	if( r8 == NULL ) hl_null_access();
	h3d_scene_Object_removeChild(r8,r1);
	r4 = 32;
	if( !r11 ) goto label$e3fc2e4_6_49;
	r5 = r1->flags;
	r5 = r5 | r4;
	r1->flags = r5;
	goto label$e3fc2e4_6_54;
	label$e3fc2e4_6_49:
	r5 = r1->flags;
	r13 = -1;
	r12 = r4 ^ r13;
	r5 = r5 & r12;
	r1->flags = r5;
	label$e3fc2e4_6_54:
	r6 = r0->children;
	if( r6 == NULL ) hl_null_access();
	hl_types_ArrayObj_insert(r6,r2,((vdynamic*)r1));
	r4 = r0->flags;
	r5 = 32;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 != r5 ) goto label$e3fc2e4_6_68;
	r4 = r1->flags;
	r5 = 32;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 == r5 ) goto label$e3fc2e4_6_68;
	((void (*)(h3d__scene__Object))r1->$type->vobj_proto[1])(r1);
	label$e3fc2e4_6_68:
	r1->parent = r0;
	r4 = 1;
	r11 = true;
	if( !r11 ) goto label$e3fc2e4_6_76;
	r5 = r1->flags;
	r5 = r5 | r4;
	r1->flags = r5;
	goto label$e3fc2e4_6_81;
	label$e3fc2e4_6_76:
	r5 = r1->flags;
	r13 = -1;
	r12 = r4 ^ r13;
	r5 = r5 & r12;
	r1->flags = r5;
	label$e3fc2e4_6_81:
	r4 = r0->flags;
	r5 = 32;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 == r5 ) goto label$e3fc2e4_6_94;
	r4 = r1->flags;
	r5 = 32;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 != r5 ) goto label$e3fc2e4_6_93;
	((void (*)(h3d__scene__Object))r1->$type->vobj_proto[0])(r1);
	goto label$e3fc2e4_6_94;
	label$e3fc2e4_6_93:
	h3d_scene_Object_onParentChanged(r1);
	label$e3fc2e4_6_94:
	return;
}

void h3d_scene_Object_iterVisibleMeshes(h3d__scene__Object r0,vclosure* r1) {
	hl__types__ArrayObj r9;
	bool r8;
	h3d__scene__Mesh r7;
	h3d__scene__$Mesh r6;
	vdynamic *r5;
	varray *r12;
	h3d__scene__Object r11;
	int r3, r4, r10;
	r3 = r0->flags;
	r4 = 2;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 == r4 ) goto label$e3fc2e4_7_15;
	r3 = r0->flags;
	r4 = 4;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 == r4 ) goto label$e3fc2e4_7_16;
	r3 = r0->flags;
	r4 = 128;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 == r4 ) goto label$e3fc2e4_7_16;
	label$e3fc2e4_7_15:
	return;
	label$e3fc2e4_7_16:
	r3 = r0->flags;
	r4 = 4;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 != r4 ) goto label$e3fc2e4_7_30;
	r6 = (h3d__scene__$Mesh)g$_h3d_scene_Mesh;
	r8 = hl_BaseType_check(((hl__BaseType)r6),((vdynamic*)r0));
	if( !r8 ) goto label$e3fc2e4_7_26;
	r7 = (h3d__scene__Mesh)r0;
	goto label$e3fc2e4_7_27;
	label$e3fc2e4_7_26:
	r7 = NULL;
	label$e3fc2e4_7_27:
	if( !r7 ) goto label$e3fc2e4_7_30;
	if( r1 == NULL ) hl_null_access();
	r1->hasValue ? ((void (*)(vdynamic*,h3d__scene__Mesh))r1->fun)((vdynamic*)r1->value,r7) : ((void (*)(h3d__scene__Mesh))r1->fun)(r7);
	label$e3fc2e4_7_30:
	r3 = 0;
	r9 = r0->children;
	label$e3fc2e4_7_32:
	if( r9 == NULL ) hl_null_access();
	r10 = r9->length;
	if( r3 >= r10 ) goto label$e3fc2e4_7_47;
	r10 = r9->length;
	if( ((unsigned)r3) < ((unsigned)r10) ) goto label$e3fc2e4_7_40;
	r11 = NULL;
	goto label$e3fc2e4_7_43;
	label$e3fc2e4_7_40:
	r12 = r9->array;
	r5 = ((vdynamic**)(r12 + 1))[r3];
	r11 = (h3d__scene__Object)r5;
	label$e3fc2e4_7_43:
	++r3;
	if( r11 == NULL ) hl_null_access();
	h3d_scene_Object_iterVisibleMeshes(r11,r1);
	goto label$e3fc2e4_7_32;
	label$e3fc2e4_7_47:
	return;
}

void h3d_scene_Object_onParentChanged(h3d__scene__Object r0) {
	hl__types__ArrayObj r3;
	vdynamic *r6;
	varray *r7;
	h3d__scene__Object r5;
	int r1, r4;
	r1 = 0;
	r3 = r0->children;
	label$e3fc2e4_8_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r1 >= r4 ) goto label$e3fc2e4_8_17;
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$e3fc2e4_8_10;
	r5 = NULL;
	goto label$e3fc2e4_8_13;
	label$e3fc2e4_8_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (h3d__scene__Object)r6;
	label$e3fc2e4_8_13:
	++r1;
	if( r5 == NULL ) hl_null_access();
	h3d_scene_Object_onParentChanged(r5);
	goto label$e3fc2e4_8_2;
	label$e3fc2e4_8_17:
	return;
}

void h3d_scene_Object_onAdd(h3d__scene__Object r0) {
	hl__types__ArrayObj r5;
	vdynamic *r7;
	varray *r8;
	h3d__scene__Object r6;
	int r1, r3, r4;
	r1 = 32;
	r3 = r0->flags;
	r3 = r3 | r1;
	r0->flags = r3;
	r1 = 0;
	r5 = r0->children;
	label$e3fc2e4_9_6:
	if( r5 == NULL ) hl_null_access();
	r4 = r5->length;
	if( r1 >= r4 ) goto label$e3fc2e4_9_21;
	r4 = r5->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$e3fc2e4_9_14;
	r6 = NULL;
	goto label$e3fc2e4_9_17;
	label$e3fc2e4_9_14:
	r8 = r5->array;
	r7 = ((vdynamic**)(r8 + 1))[r1];
	r6 = (h3d__scene__Object)r7;
	label$e3fc2e4_9_17:
	++r1;
	if( r6 == NULL ) hl_null_access();
	((void (*)(h3d__scene__Object))r6->$type->vobj_proto[0])(r6);
	goto label$e3fc2e4_9_6;
	label$e3fc2e4_9_21:
	return;
}

void h3d_scene_Object_onRemove(h3d__scene__Object r0) {
	hl__types__ArrayObj r6;
	vdynamic *r8;
	varray *r9;
	h3d__scene__Object r7;
	int r1, r3, r4, r5;
	r1 = 32;
	r3 = r0->flags;
	r5 = -1;
	r4 = r1 ^ r5;
	r3 = r3 & r4;
	r0->flags = r3;
	r1 = 0;
	r6 = r0->children;
	label$e3fc2e4_10_8:
	if( r6 == NULL ) hl_null_access();
	r4 = r6->length;
	if( r1 >= r4 ) goto label$e3fc2e4_10_23;
	r4 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$e3fc2e4_10_16;
	r7 = NULL;
	goto label$e3fc2e4_10_19;
	label$e3fc2e4_10_16:
	r9 = r6->array;
	r8 = ((vdynamic**)(r9 + 1))[r1];
	r7 = (h3d__scene__Object)r8;
	label$e3fc2e4_10_19:
	++r1;
	if( r7 == NULL ) hl_null_access();
	((void (*)(h3d__scene__Object))r7->$type->vobj_proto[1])(r7);
	goto label$e3fc2e4_10_8;
	label$e3fc2e4_10_23:
	return;
}

void h3d_scene_Object_removeChild(h3d__scene__Object r0,h3d__scene__Object r1) {
	hl__types__ArrayObj r4;
	bool r3;
	h3d__scene__Object r7;
	int r5, r6, r8, r9;
	r4 = r0->children;
	if( r4 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_remove(r4,((vdynamic*)r1));
	if( !r3 ) goto label$e3fc2e4_11_25;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->flags;
	r6 = 32;
	r5 = r5 & r6;
	r6 = 0;
	if( r5 == r6 ) goto label$e3fc2e4_11_11;
	((void (*)(h3d__scene__Object))r1->$type->vobj_proto[1])(r1);
	label$e3fc2e4_11_11:
	r7 = NULL;
	r1->parent = r7;
	r5 = 1;
	r3 = true;
	if( !r3 ) goto label$e3fc2e4_11_20;
	r6 = r1->flags;
	r6 = r6 | r5;
	r1->flags = r6;
	goto label$e3fc2e4_11_25;
	label$e3fc2e4_11_20:
	r6 = r1->flags;
	r9 = -1;
	r8 = r5 ^ r9;
	r6 = r6 & r8;
	r1->flags = r6;
	label$e3fc2e4_11_25:
	return;
}

h3d__scene__Scene h3d_scene_Object_getScene(h3d__scene__Object r0) {
	h3d__scene__$Scene r3;
	bool r5;
	h3d__scene__Scene r4;
	h3d__scene__Object r1, r2;
	r1 = r0;
	label$e3fc2e4_12_1:
	if( r1 == NULL ) hl_null_access();
	r2 = r1->parent;
	if( !r2 ) goto label$e3fc2e4_12_8;
	r2 = r1->parent;
	r1 = r2;
	goto label$e3fc2e4_12_1;
	label$e3fc2e4_12_8:
	r3 = (h3d__scene__$Scene)g$_h3d_scene_Scene;
	r5 = hl_BaseType_check(((hl__BaseType)r3),((vdynamic*)r1));
	if( !r5 ) goto label$e3fc2e4_12_13;
	r4 = (h3d__scene__Scene)r1;
	goto label$e3fc2e4_12_14;
	label$e3fc2e4_12_13:
	r4 = NULL;
	label$e3fc2e4_12_14:
	return r4;
}

h3d__Matrix h3d_scene_Object_getAbsPos(h3d__scene__Object r0) {
	h3d__Matrix r2;
	h3d_scene_Object_syncPos(r0);
	r2 = r0->absPos;
	return r2;
}

h3d__scene__Mesh h3d_scene_Object_toMesh(h3d__scene__Object r0) {
	String r5, r6;
	bool r3;
	h3d__scene__Mesh r2;
	h3d__scene__$Mesh r1;
	vdynamic *r4;
	r1 = (h3d__scene__$Mesh)g$_h3d_scene_Mesh;
	r3 = hl_BaseType_check(((hl__BaseType)r1),((vdynamic*)r0));
	if( !r3 ) goto label$e3fc2e4_14_5;
	r2 = (h3d__scene__Mesh)r0;
	goto label$e3fc2e4_14_6;
	label$e3fc2e4_14_5:
	r2 = NULL;
	label$e3fc2e4_14_6:
	if( !r2 ) goto label$e3fc2e4_14_8;
	return r2;
	label$e3fc2e4_14_8:
	r5 = Std_string(((vdynamic*)r0));
	r6 = (String)s$_is_not_a_Mesh;
	r5 = String___add__(r5,r6);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
}

void h3d_scene_Object_draw(h3d__scene__Object r0,h3d__scene__RenderContext r1) {
	return;
}

h3d__scene__Object h3d_scene_Object_set_follow(h3d__scene__Object r0,h3d__scene__Object r1) {
	bool r3;
	int r2, r4, r5, r6;
	r2 = 1;
	r3 = true;
	if( !r3 ) goto label$e3fc2e4_16_7;
	r4 = r0->flags;
	r4 = r4 | r2;
	r0->flags = r4;
	goto label$e3fc2e4_16_12;
	label$e3fc2e4_16_7:
	r4 = r0->flags;
	r6 = -1;
	r5 = r2 ^ r6;
	r4 = r4 & r5;
	r0->flags = r4;
	label$e3fc2e4_16_12:
	r0->follow = r1;
	return r1;
}

void h3d_scene_Object_calcAbsPos(h3d__scene__Object r0) {
	double r3, r4, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34;
	h3d__Quat r2;
	int r7, r8;
	h3d__scene__Object r6;
	h3d__Matrix r1, r9, r10;
	r2 = r0->qRot;
	if( r2 == NULL ) hl_null_access();
	r1 = r0->absPos;
	r1 = h3d_Quat_toMatrix(r2,r1);
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_11;
	r4 = r0->scaleX;
	r3 = r3 * r4;
	r1->_11 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_12;
	r4 = r0->scaleX;
	r3 = r3 * r4;
	r1->_12 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_13;
	r4 = r0->scaleX;
	r3 = r3 * r4;
	r1->_13 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_21;
	r4 = r0->scaleY;
	r3 = r3 * r4;
	r1->_21 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_22;
	r4 = r0->scaleY;
	r3 = r3 * r4;
	r1->_22 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_23;
	r4 = r0->scaleY;
	r3 = r3 * r4;
	r1->_23 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_31;
	r4 = r0->scaleZ;
	r3 = r3 * r4;
	r1->_31 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_32;
	r4 = r0->scaleZ;
	r3 = r3 * r4;
	r1->_32 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_33;
	r4 = r0->scaleZ;
	r3 = r3 * r4;
	r1->_33 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r0->x;
	r1->_41 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r0->y;
	r1->_42 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r0->z;
	r1->_43 = r3;
	r6 = r0->follow;
	if( !r6 ) goto label$e3fc2e4_17_234;
	r6 = r0->follow;
	if( r6 == NULL ) hl_null_access();
	h3d_scene_Object_syncPos(r6);
	r7 = r0->flags;
	r8 = 8;
	r7 = r7 & r8;
	r8 = 0;
	if( r7 == r8 ) goto label$e3fc2e4_17_226;
	r1 = r0->absPos;
	r9 = r0->absPos;
	r6 = r0->parent;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->absPos;
	if( r9 == NULL ) hl_null_access();
	r3 = r9->_11;
	r4 = r9->_12;
	r11 = r9->_13;
	r12 = r9->_21;
	r13 = r9->_22;
	r14 = r9->_23;
	r15 = r9->_31;
	r16 = r9->_32;
	r17 = r9->_33;
	r18 = r9->_41;
	r19 = r9->_42;
	r20 = r9->_43;
	if( r10 == NULL ) hl_null_access();
	r21 = r10->_11;
	r22 = r10->_12;
	r23 = r10->_13;
	r24 = r10->_21;
	r25 = r10->_22;
	r26 = r10->_23;
	r27 = r10->_31;
	r28 = r10->_32;
	r29 = r10->_33;
	r30 = r10->_41;
	r31 = r10->_42;
	r32 = r10->_43;
	if( r1 == NULL ) hl_null_access();
	r33 = r3 * r21;
	r34 = r4 * r24;
	r33 = r33 + r34;
	r34 = r11 * r27;
	r33 = r33 + r34;
	r1->_11 = r33;
	r33 = r3 * r22;
	r34 = r4 * r25;
	r33 = r33 + r34;
	r34 = r11 * r28;
	r33 = r33 + r34;
	r1->_12 = r33;
	r33 = r3 * r23;
	r34 = r4 * r26;
	r33 = r33 + r34;
	r34 = r11 * r29;
	r33 = r33 + r34;
	r1->_13 = r33;
	r33 = 0.;
	r1->_14 = r33;
	r33 = r12 * r21;
	r34 = r13 * r24;
	r33 = r33 + r34;
	r34 = r14 * r27;
	r33 = r33 + r34;
	r1->_21 = r33;
	r33 = r12 * r22;
	r34 = r13 * r25;
	r33 = r33 + r34;
	r34 = r14 * r28;
	r33 = r33 + r34;
	r1->_22 = r33;
	r33 = r12 * r23;
	r34 = r13 * r26;
	r33 = r33 + r34;
	r34 = r14 * r29;
	r33 = r33 + r34;
	r1->_23 = r33;
	r33 = 0.;
	r1->_24 = r33;
	r33 = r15 * r21;
	r34 = r16 * r24;
	r33 = r33 + r34;
	r34 = r17 * r27;
	r33 = r33 + r34;
	r1->_31 = r33;
	r33 = r15 * r22;
	r34 = r16 * r25;
	r33 = r33 + r34;
	r34 = r17 * r28;
	r33 = r33 + r34;
	r1->_32 = r33;
	r33 = r15 * r23;
	r34 = r16 * r26;
	r33 = r33 + r34;
	r34 = r17 * r29;
	r33 = r33 + r34;
	r1->_33 = r33;
	r33 = 0.;
	r1->_34 = r33;
	r33 = r18 * r21;
	r34 = r19 * r24;
	r33 = r33 + r34;
	r34 = r20 * r27;
	r33 = r33 + r34;
	r33 = r33 + r30;
	r1->_41 = r33;
	r33 = r18 * r22;
	r34 = r19 * r25;
	r33 = r33 + r34;
	r34 = r20 * r28;
	r33 = r33 + r34;
	r33 = r33 + r31;
	r1->_42 = r33;
	r33 = r18 * r23;
	r34 = r19 * r26;
	r33 = r33 + r34;
	r34 = r20 * r29;
	r33 = r33 + r34;
	r33 = r33 + r32;
	r1->_43 = r33;
	r33 = 1.;
	r1->_44 = r33;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r0->x;
	r6 = r0->follow;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->absPos;
	if( r9 == NULL ) hl_null_access();
	r4 = r9->_41;
	r3 = r3 + r4;
	r1->_41 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r0->y;
	r6 = r0->follow;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->absPos;
	if( r9 == NULL ) hl_null_access();
	r4 = r9->_42;
	r3 = r3 + r4;
	r1->_42 = r3;
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r3 = r0->z;
	r6 = r0->follow;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->absPos;
	if( r9 == NULL ) hl_null_access();
	r4 = r9->_43;
	r3 = r3 + r4;
	r1->_43 = r3;
	goto label$e3fc2e4_17_233;
	label$e3fc2e4_17_226:
	r1 = r0->absPos;
	if( r1 == NULL ) hl_null_access();
	r9 = r0->absPos;
	r6 = r0->follow;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->absPos;
	h3d_Matrix_multiply3x4(r1,r9,r10);
	label$e3fc2e4_17_233:
	goto label$e3fc2e4_17_356;
	label$e3fc2e4_17_234:
	r6 = r0->parent;
	if( !r6 ) goto label$e3fc2e4_17_356;
	r7 = r0->flags;
	r8 = 2048;
	r7 = r7 & r8;
	r8 = 0;
	if( r7 != r8 ) goto label$e3fc2e4_17_356;
	r1 = r0->absPos;
	r9 = r0->absPos;
	r6 = r0->parent;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->absPos;
	if( r9 == NULL ) hl_null_access();
	r3 = r9->_11;
	r4 = r9->_12;
	r11 = r9->_13;
	r12 = r9->_21;
	r13 = r9->_22;
	r14 = r9->_23;
	r15 = r9->_31;
	r16 = r9->_32;
	r17 = r9->_33;
	r18 = r9->_41;
	r19 = r9->_42;
	r20 = r9->_43;
	if( r10 == NULL ) hl_null_access();
	r21 = r10->_11;
	r22 = r10->_12;
	r23 = r10->_13;
	r24 = r10->_21;
	r25 = r10->_22;
	r26 = r10->_23;
	r27 = r10->_31;
	r28 = r10->_32;
	r29 = r10->_33;
	r30 = r10->_41;
	r31 = r10->_42;
	r32 = r10->_43;
	if( r1 == NULL ) hl_null_access();
	r33 = r3 * r21;
	r34 = r4 * r24;
	r33 = r33 + r34;
	r34 = r11 * r27;
	r33 = r33 + r34;
	r1->_11 = r33;
	r33 = r3 * r22;
	r34 = r4 * r25;
	r33 = r33 + r34;
	r34 = r11 * r28;
	r33 = r33 + r34;
	r1->_12 = r33;
	r33 = r3 * r23;
	r34 = r4 * r26;
	r33 = r33 + r34;
	r34 = r11 * r29;
	r33 = r33 + r34;
	r1->_13 = r33;
	r33 = 0.;
	r1->_14 = r33;
	r33 = r12 * r21;
	r34 = r13 * r24;
	r33 = r33 + r34;
	r34 = r14 * r27;
	r33 = r33 + r34;
	r1->_21 = r33;
	r33 = r12 * r22;
	r34 = r13 * r25;
	r33 = r33 + r34;
	r34 = r14 * r28;
	r33 = r33 + r34;
	r1->_22 = r33;
	r33 = r12 * r23;
	r34 = r13 * r26;
	r33 = r33 + r34;
	r34 = r14 * r29;
	r33 = r33 + r34;
	r1->_23 = r33;
	r33 = 0.;
	r1->_24 = r33;
	r33 = r15 * r21;
	r34 = r16 * r24;
	r33 = r33 + r34;
	r34 = r17 * r27;
	r33 = r33 + r34;
	r1->_31 = r33;
	r33 = r15 * r22;
	r34 = r16 * r25;
	r33 = r33 + r34;
	r34 = r17 * r28;
	r33 = r33 + r34;
	r1->_32 = r33;
	r33 = r15 * r23;
	r34 = r16 * r26;
	r33 = r33 + r34;
	r34 = r17 * r29;
	r33 = r33 + r34;
	r1->_33 = r33;
	r33 = 0.;
	r1->_34 = r33;
	r33 = r18 * r21;
	r34 = r19 * r24;
	r33 = r33 + r34;
	r34 = r20 * r27;
	r33 = r33 + r34;
	r33 = r33 + r30;
	r1->_41 = r33;
	r33 = r18 * r22;
	r34 = r19 * r25;
	r33 = r33 + r34;
	r34 = r20 * r28;
	r33 = r33 + r34;
	r33 = r33 + r31;
	r1->_42 = r33;
	r33 = r18 * r23;
	r34 = r19 * r26;
	r33 = r33 + r34;
	r34 = r20 * r29;
	r33 = r33 + r34;
	r33 = r33 + r32;
	r1->_43 = r33;
	r33 = 1.;
	r1->_44 = r33;
	label$e3fc2e4_17_356:
	r1 = r0->defaultTransform;
	if( !r1 ) goto label$e3fc2e4_17_471;
	r1 = r0->absPos;
	r9 = r0->defaultTransform;
	r10 = r0->absPos;
	if( r9 == NULL ) hl_null_access();
	r3 = r9->_11;
	r4 = r9->_12;
	r11 = r9->_13;
	r12 = r9->_21;
	r13 = r9->_22;
	r14 = r9->_23;
	r15 = r9->_31;
	r16 = r9->_32;
	r17 = r9->_33;
	r18 = r9->_41;
	r19 = r9->_42;
	r20 = r9->_43;
	if( r10 == NULL ) hl_null_access();
	r21 = r10->_11;
	r22 = r10->_12;
	r23 = r10->_13;
	r24 = r10->_21;
	r25 = r10->_22;
	r26 = r10->_23;
	r27 = r10->_31;
	r28 = r10->_32;
	r29 = r10->_33;
	r30 = r10->_41;
	r31 = r10->_42;
	r32 = r10->_43;
	if( r1 == NULL ) hl_null_access();
	r33 = r3 * r21;
	r34 = r4 * r24;
	r33 = r33 + r34;
	r34 = r11 * r27;
	r33 = r33 + r34;
	r1->_11 = r33;
	r33 = r3 * r22;
	r34 = r4 * r25;
	r33 = r33 + r34;
	r34 = r11 * r28;
	r33 = r33 + r34;
	r1->_12 = r33;
	r33 = r3 * r23;
	r34 = r4 * r26;
	r33 = r33 + r34;
	r34 = r11 * r29;
	r33 = r33 + r34;
	r1->_13 = r33;
	r33 = 0.;
	r1->_14 = r33;
	r33 = r12 * r21;
	r34 = r13 * r24;
	r33 = r33 + r34;
	r34 = r14 * r27;
	r33 = r33 + r34;
	r1->_21 = r33;
	r33 = r12 * r22;
	r34 = r13 * r25;
	r33 = r33 + r34;
	r34 = r14 * r28;
	r33 = r33 + r34;
	r1->_22 = r33;
	r33 = r12 * r23;
	r34 = r13 * r26;
	r33 = r33 + r34;
	r34 = r14 * r29;
	r33 = r33 + r34;
	r1->_23 = r33;
	r33 = 0.;
	r1->_24 = r33;
	r33 = r15 * r21;
	r34 = r16 * r24;
	r33 = r33 + r34;
	r34 = r17 * r27;
	r33 = r33 + r34;
	r1->_31 = r33;
	r33 = r15 * r22;
	r34 = r16 * r25;
	r33 = r33 + r34;
	r34 = r17 * r28;
	r33 = r33 + r34;
	r1->_32 = r33;
	r33 = r15 * r23;
	r34 = r16 * r26;
	r33 = r33 + r34;
	r34 = r17 * r29;
	r33 = r33 + r34;
	r1->_33 = r33;
	r33 = 0.;
	r1->_34 = r33;
	r33 = r18 * r21;
	r34 = r19 * r24;
	r33 = r33 + r34;
	r34 = r20 * r27;
	r33 = r33 + r34;
	r33 = r33 + r30;
	r1->_41 = r33;
	r33 = r18 * r22;
	r34 = r19 * r25;
	r33 = r33 + r34;
	r34 = r20 * r28;
	r33 = r33 + r34;
	r33 = r33 + r31;
	r1->_42 = r33;
	r33 = r18 * r23;
	r34 = r19 * r26;
	r33 = r33 + r34;
	r34 = r20 * r29;
	r33 = r33 + r34;
	r33 = r33 + r32;
	r1->_43 = r33;
	r33 = 1.;
	r1->_44 = r33;
	label$e3fc2e4_17_471:
	r1 = r0->invPos;
	if( !r1 ) goto label$e3fc2e4_17_477;
	r1 = r0->invPos;
	if( r1 == NULL ) hl_null_access();
	r3 = 0.;
	r1->_44 = r3;
	label$e3fc2e4_17_477:
	return;
}

void h3d_scene_Object_sync(h3d__scene__Object r0,h3d__scene__RenderContext r1) {
	return;
}

void h3d_scene_Object_syncRec(h3d__scene__Object r0,h3d__scene__RenderContext r1) {
	bool *r11;
	hl__types__ArrayObj r20;
	vvirtual *r15, *r17;
	bool r8, r14, r18;
	double r5, r6, r7;
	vdynamic *r13;
	h3d__anim__Animation r3;
	varray *r21;
	int r9, r10, r16, r19, r22, r23;
	h3d__scene__Object r4, r12;
	r3 = r0->currentAnimation;
	if( !r3 ) goto label$e3fc2e4_19_43;
	r4 = r0->parent;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->elapsedTime;
	label$e3fc2e4_19_5:
	r7 = 0.;
	if( !(r7 < r5) ) goto label$e3fc2e4_19_15;
	r3 = r0->currentAnimation;
	if( !r3 ) goto label$e3fc2e4_19_15;
	r3 = r0->currentAnimation;
	if( r3 == NULL ) hl_null_access();
	r6 = h3d_anim_Animation_update(r3,r5);
	r5 = r6;
	goto label$e3fc2e4_19_5;
	label$e3fc2e4_19_15:
	r3 = r0->currentAnimation;
	if( !r3 ) goto label$e3fc2e4_19_39;
	if( r1 == NULL ) hl_null_access();
	r8 = r1->visibleFlag;
	if( !r8 ) goto label$e3fc2e4_19_30;
	r9 = r0->flags;
	r10 = 2;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 == r10 ) goto label$e3fc2e4_19_30;
	r9 = r0->flags;
	r10 = 4;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 == r10 ) goto label$e3fc2e4_19_35;
	label$e3fc2e4_19_30:
	r9 = r0->flags;
	r10 = 64;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 == r10 ) goto label$e3fc2e4_19_39;
	label$e3fc2e4_19_35:
	r3 = r0->currentAnimation;
	if( r3 == NULL ) hl_null_access();
	r11 = NULL;
	((void (*)(h3d__anim__Animation,bool*))r3->$type->vobj_proto[1])(r3,r11);
	label$e3fc2e4_19_39:
	r12 = r0->parent;
	if( r12 ) goto label$e3fc2e4_19_43;
	if( !r4 ) goto label$e3fc2e4_19_43;
	return;
	label$e3fc2e4_19_43:
	if( r1 == NULL ) hl_null_access();
	r8 = r1->visibleFlag;
	r9 = r0->flags;
	r10 = 2;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 == r10 ) goto label$e3fc2e4_19_60;
	r9 = r0->flags;
	r10 = 4;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 == r10 ) goto label$e3fc2e4_19_62;
	r9 = r0->flags;
	r10 = 128;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 == r10 ) goto label$e3fc2e4_19_62;
	label$e3fc2e4_19_60:
	r14 = false;
	r1->visibleFlag = r14;
	label$e3fc2e4_19_62:
	r15 = r1->cullingCollider;
	if( !r15 ) goto label$e3fc2e4_19_78;
	r15 = r0->cullingCollider;
	if( !r15 ) goto label$e3fc2e4_19_71;
	r9 = r0->flags;
	r10 = 4096;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 == r10 ) goto label$e3fc2e4_19_78;
	label$e3fc2e4_19_71:
	r15 = r1->cullingCollider;
	r15 = h3d_scene_Object_set_cullingCollider(r0,r15);
	r9 = 4096;
	r10 = r0->flags;
	r10 = r10 | r9;
	r0->flags = r10;
	goto label$e3fc2e4_19_85;
	label$e3fc2e4_19_78:
	r9 = r0->flags;
	r10 = 4096;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 == r10 ) goto label$e3fc2e4_19_85;
	r15 = NULL;
	r15 = h3d_scene_Object_set_cullingCollider(r0,r15);
	label$e3fc2e4_19_85:
	r15 = r1->cullingCollider;
	r9 = r0->flags;
	r10 = 128;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 == r10 ) goto label$e3fc2e4_19_93;
	r17 = r0->cullingCollider;
	r1->cullingCollider = r17;
	label$e3fc2e4_19_93:
	r9 = r0->flags;
	r10 = 1;
	r9 = r9 & r10;
	r10 = 0;
	if( r9 != r10 ) goto label$e3fc2e4_19_100;
	r14 = false;
	goto label$e3fc2e4_19_101;
	label$e3fc2e4_19_100:
	r14 = true;
	label$e3fc2e4_19_101:
	if( !r14 ) goto label$e3fc2e4_19_103;
	((void (*)(h3d__scene__Object))r0->$type->vobj_proto[3])(r0);
	label$e3fc2e4_19_103:
	((void (*)(h3d__scene__Object,h3d__scene__RenderContext))r0->$type->vobj_proto[4])(r0,r1);
	r9 = 1;
	r4 = r0->follow;
	r12 = NULL;
	if( r4 != r12 ) goto label$e3fc2e4_19_110;
	r18 = false;
	goto label$e3fc2e4_19_111;
	label$e3fc2e4_19_110:
	r18 = true;
	label$e3fc2e4_19_111:
	if( !r18 ) goto label$e3fc2e4_19_116;
	r10 = r0->flags;
	r10 = r10 | r9;
	r0->flags = r10;
	goto label$e3fc2e4_19_121;
	label$e3fc2e4_19_116:
	r10 = r0->flags;
	r19 = -1;
	r16 = r9 ^ r19;
	r10 = r10 & r16;
	r0->flags = r10;
	label$e3fc2e4_19_121:
	r9 = r1->frame;
	r0->lastFrame = r9;
	r9 = 0;
	r20 = r0->children;
	if( r20 == NULL ) hl_null_access();
	r10 = r20->length;
	label$e3fc2e4_19_127:
	if( r9 >= r10 ) goto label$e3fc2e4_19_178;
	r20 = r0->children;
	if( r20 == NULL ) hl_null_access();
	r19 = r20->length;
	if( ((unsigned)r9) < ((unsigned)r19) ) goto label$e3fc2e4_19_135;
	r4 = NULL;
	goto label$e3fc2e4_19_138;
	label$e3fc2e4_19_135:
	r21 = r20->array;
	r13 = ((vdynamic**)(r21 + 1))[r9];
	r4 = (h3d__scene__Object)r13;
	label$e3fc2e4_19_138:
	if( r4 ) goto label$e3fc2e4_19_140;
	goto label$e3fc2e4_19_178;
	label$e3fc2e4_19_140:
	if( r4 == NULL ) hl_null_access();
	r16 = r4->lastFrame;
	if( r1 == NULL ) hl_null_access();
	r19 = r1->frame;
	if( r16 == r19 ) goto label$e3fc2e4_19_159;
	if( !r14 ) goto label$e3fc2e4_19_158;
	r16 = 1;
	r18 = true;
	if( !r18 ) goto label$e3fc2e4_19_153;
	r19 = r4->flags;
	r19 = r19 | r16;
	r4->flags = r19;
	goto label$e3fc2e4_19_158;
	label$e3fc2e4_19_153:
	r19 = r4->flags;
	r23 = -1;
	r22 = r16 ^ r23;
	r19 = r19 & r22;
	r4->flags = r19;
	label$e3fc2e4_19_158:
	h3d_scene_Object_syncRec(r4,r1);
	label$e3fc2e4_19_159:
	r20 = r0->children;
	if( r20 == NULL ) hl_null_access();
	r19 = r20->length;
	if( ((unsigned)r9) < ((unsigned)r19) ) goto label$e3fc2e4_19_165;
	r12 = NULL;
	goto label$e3fc2e4_19_168;
	label$e3fc2e4_19_165:
	r21 = r20->array;
	r13 = ((vdynamic**)(r21 + 1))[r9];
	r12 = (h3d__scene__Object)r13;
	label$e3fc2e4_19_168:
	if( r12 == r4 ) goto label$e3fc2e4_19_176;
	r16 = 0;
	r9 = r16;
	r20 = r0->children;
	if( r20 == NULL ) hl_null_access();
	r16 = r20->length;
	r10 = r16;
	goto label$e3fc2e4_19_177;
	label$e3fc2e4_19_176:
	++r9;
	label$e3fc2e4_19_177:
	goto label$e3fc2e4_19_127;
	label$e3fc2e4_19_178:
	if( r1 == NULL ) hl_null_access();
	r1->visibleFlag = r8;
	r1->cullingCollider = r15;
	return;
}

void h3d_scene_Object_syncPos(h3d__scene__Object r0) {
	hl__types__ArrayObj r9;
	bool r5;
	vdynamic *r10;
	varray *r11;
	int r3, r4, r7, r8, r12;
	h3d__scene__Object r2, r6;
	r2 = r0->parent;
	if( !r2 ) goto label$e3fc2e4_20_5;
	r2 = r0->parent;
	if( r2 == NULL ) hl_null_access();
	h3d_scene_Object_syncPos(r2);
	label$e3fc2e4_20_5:
	r3 = r0->flags;
	r4 = 1;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 == r4 ) goto label$e3fc2e4_20_57;
	r3 = 1;
	r2 = r0->follow;
	r6 = NULL;
	if( r2 != r6 ) goto label$e3fc2e4_20_16;
	r5 = false;
	goto label$e3fc2e4_20_17;
	label$e3fc2e4_20_16:
	r5 = true;
	label$e3fc2e4_20_17:
	if( !r5 ) goto label$e3fc2e4_20_22;
	r4 = r0->flags;
	r4 = r4 | r3;
	r0->flags = r4;
	goto label$e3fc2e4_20_27;
	label$e3fc2e4_20_22:
	r4 = r0->flags;
	r8 = -1;
	r7 = r3 ^ r8;
	r4 = r4 & r7;
	r0->flags = r4;
	label$e3fc2e4_20_27:
	((void (*)(h3d__scene__Object))r0->$type->vobj_proto[3])(r0);
	r3 = 0;
	r9 = r0->children;
	label$e3fc2e4_20_30:
	if( r9 == NULL ) hl_null_access();
	r7 = r9->length;
	if( r3 >= r7 ) goto label$e3fc2e4_20_57;
	r7 = r9->length;
	if( ((unsigned)r3) < ((unsigned)r7) ) goto label$e3fc2e4_20_38;
	r2 = NULL;
	goto label$e3fc2e4_20_41;
	label$e3fc2e4_20_38:
	r11 = r9->array;
	r10 = ((vdynamic**)(r11 + 1))[r3];
	r2 = (h3d__scene__Object)r10;
	label$e3fc2e4_20_41:
	++r3;
	r4 = 1;
	r5 = true;
	if( !r5 ) goto label$e3fc2e4_20_50;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->flags;
	r7 = r7 | r4;
	r2->flags = r7;
	goto label$e3fc2e4_20_56;
	label$e3fc2e4_20_50:
	if( r2 == NULL ) hl_null_access();
	r7 = r2->flags;
	r12 = -1;
	r8 = r4 ^ r12;
	r7 = r7 & r8;
	r2->flags = r7;
	label$e3fc2e4_20_56:
	goto label$e3fc2e4_20_30;
	label$e3fc2e4_20_57:
	return;
}

void h3d_scene_Object_emit(h3d__scene__Object r0,h3d__scene__RenderContext r1) {
	return;
}

void h3d_scene_Object_emitRec(h3d__scene__Object r0,h3d__scene__RenderContext r1) {
	bool *r8;
	hl__types__ArrayObj r13;
	bool r5;
	h3d__anim__Animation r7;
	vdynamic *r6;
	varray *r14;
	h3d__scene__Object r9, r10;
	int r3, r4, r11, r12, r15;
	r3 = r0->flags;
	r4 = 2;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 == r4 ) goto label$e3fc2e4_22_18;
	r3 = r0->flags;
	r4 = 4;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 == r4 ) goto label$e3fc2e4_22_19;
	r3 = r0->flags;
	r4 = 128;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 == r4 ) goto label$e3fc2e4_22_19;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->computingStatic;
	if( r5 ) goto label$e3fc2e4_22_19;
	label$e3fc2e4_22_18:
	return;
	label$e3fc2e4_22_19:
	r3 = r0->flags;
	r4 = 1;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 == r4 ) goto label$e3fc2e4_22_77;
	r7 = r0->currentAnimation;
	if( !r7 ) goto label$e3fc2e4_22_30;
	r7 = r0->currentAnimation;
	if( r7 == NULL ) hl_null_access();
	r8 = NULL;
	((void (*)(h3d__anim__Animation,bool*))r7->$type->vobj_proto[1])(r7,r8);
	label$e3fc2e4_22_30:
	r3 = 1;
	r9 = r0->follow;
	r10 = NULL;
	if( r9 != r10 ) goto label$e3fc2e4_22_36;
	r5 = false;
	goto label$e3fc2e4_22_37;
	label$e3fc2e4_22_36:
	r5 = true;
	label$e3fc2e4_22_37:
	if( !r5 ) goto label$e3fc2e4_22_42;
	r4 = r0->flags;
	r4 = r4 | r3;
	r0->flags = r4;
	goto label$e3fc2e4_22_47;
	label$e3fc2e4_22_42:
	r4 = r0->flags;
	r12 = -1;
	r11 = r3 ^ r12;
	r4 = r4 & r11;
	r0->flags = r4;
	label$e3fc2e4_22_47:
	((void (*)(h3d__scene__Object))r0->$type->vobj_proto[3])(r0);
	r3 = 0;
	r13 = r0->children;
	label$e3fc2e4_22_50:
	if( r13 == NULL ) hl_null_access();
	r11 = r13->length;
	if( r3 >= r11 ) goto label$e3fc2e4_22_77;
	r11 = r13->length;
	if( ((unsigned)r3) < ((unsigned)r11) ) goto label$e3fc2e4_22_58;
	r9 = NULL;
	goto label$e3fc2e4_22_61;
	label$e3fc2e4_22_58:
	r14 = r13->array;
	r6 = ((vdynamic**)(r14 + 1))[r3];
	r9 = (h3d__scene__Object)r6;
	label$e3fc2e4_22_61:
	++r3;
	r4 = 1;
	r5 = true;
	if( !r5 ) goto label$e3fc2e4_22_70;
	if( r9 == NULL ) hl_null_access();
	r11 = r9->flags;
	r11 = r11 | r4;
	r9->flags = r11;
	goto label$e3fc2e4_22_76;
	label$e3fc2e4_22_70:
	if( r9 == NULL ) hl_null_access();
	r11 = r9->flags;
	r15 = -1;
	r12 = r4 ^ r15;
	r11 = r11 & r12;
	r9->flags = r11;
	label$e3fc2e4_22_76:
	goto label$e3fc2e4_22_50;
	label$e3fc2e4_22_77:
	r3 = r0->flags;
	r4 = 4;
	r3 = r3 & r4;
	r4 = 0;
	if( r3 == r4 ) goto label$e3fc2e4_22_85;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->computingStatic;
	if( !r5 ) goto label$e3fc2e4_22_86;
	label$e3fc2e4_22_85:
	((void (*)(h3d__scene__Object,h3d__scene__RenderContext))r0->$type->vobj_proto[5])(r0,r1);
	label$e3fc2e4_22_86:
	r3 = 0;
	r13 = r0->children;
	label$e3fc2e4_22_88:
	if( r13 == NULL ) hl_null_access();
	r11 = r13->length;
	if( r3 >= r11 ) goto label$e3fc2e4_22_103;
	r11 = r13->length;
	if( ((unsigned)r3) < ((unsigned)r11) ) goto label$e3fc2e4_22_96;
	r9 = NULL;
	goto label$e3fc2e4_22_99;
	label$e3fc2e4_22_96:
	r14 = r13->array;
	r6 = ((vdynamic**)(r14 + 1))[r3];
	r9 = (h3d__scene__Object)r6;
	label$e3fc2e4_22_99:
	++r3;
	if( r9 == NULL ) hl_null_access();
	h3d_scene_Object_emitRec(r9,r1);
	goto label$e3fc2e4_22_88;
	label$e3fc2e4_22_103:
	return;
}

vbyte* h3d_scene_Object___string(h3d__scene__Object r0) {
	String r2;
	vbyte *r1;
	r2 = h3d_scene_Object_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String h3d_scene_Object_toString(h3d__scene__Object r0) {
	String r1, r5, r6;
	hl__Class r4;
	hl__types__ArrayObj r3;
	vdynamic *r2;
	r4 = Type_getClass(((vdynamic*)r0));
	r1 = Type_getClassName(r4);
	if( r1 == NULL ) hl_null_access();
	r5 = (String)s$5058f1a;
	r3 = String_split(r1,r5);
	if( r3 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_pop(r3);
	r1 = (String)r2;
	r5 = r0->name;
	if( r5 ) goto label$e3fc2e4_24_12;
	r5 = (String)s$;
	goto label$e3fc2e4_24_17;
	label$e3fc2e4_24_12:
	r5 = (String)s$84c4047;
	r6 = r0->name;
	r5 = String___add__(r5,r6);
	r6 = (String)s$9371d7a;
	r5 = String___add__(r5,r6);
	label$e3fc2e4_24_17:
	r1 = String___add__(r1,r5);
	return r1;
}

