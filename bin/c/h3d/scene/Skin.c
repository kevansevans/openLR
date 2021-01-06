﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/Skin.h>
void h3d_scene_MultiMaterial_new(h3d__scene__MultiMaterial,h3d__prim__Primitive,hl__types__ArrayObj,h3d__scene__Object);
void h3d_scene_Skin_setSkinData(h3d__scene__Skin,h3d__anim__Skin,bool*);
void h3d_scene_Object_calcAbsPos(h3d__scene__Object);
#include <h3d/mat/Texture.h>
#include <h3d/shader/SkinTangent.h>
#include <h3d/shader/Skin.h>
#include <hxsl/Shader.h>
#include <h3d/mat/Pass.h>
#include <h3d/shader/NormalMap.h>
#include <h3d/anim/Joint.h>
h3d__prim__Primitive h3d_scene_Mesh_set_primitive(h3d__scene__Mesh,h3d__prim__Primitive);
h3d__mat__Texture h3d_mat_Material_get_normalMap(h3d__mat__Material);
extern hl_type t$h3d_shader_SkinTangent;
void h3d_shader_SkinTangent_new(h3d__shader__SkinTangent);
extern hl_type t$h3d_shader_Skin;
void h3d_shader_Skin_new(h3d__shader__Skin);
extern hl_type t$vrt_97d249e;
extern hl_type t$hl_types_ArrayObj;
int h3d_mat_Pass_getShaderIndex(h3d__mat__Pass,hxsl__Shader);
hxsl__Shader h3d_mat_Pass_addShaderAtIndex(h3d__mat__Pass,hxsl__Shader,int);
hxsl__Shader h3d_mat_Pass_addShader(h3d__mat__Pass,hxsl__Shader);
bool h3d_mat_Pass_set_dynamicParameters(h3d__mat__Pass,bool);
extern hl_type t$h3d_Matrix;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
h3d__Matrix h3d_Matrix_I(void);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
#include <h3d/scene/RenderContext.h>
void h3d_scene_Skin_syncJoints(h3d__scene__Skin);
extern h3d__scene__$Skin g$_h3d_scene_Skin;
void h3d_Matrix_load(h3d__Matrix,h3d__Matrix);
#include <h3d/pass/PassObject.h>
#include <h3d/mat/Compare.h>
void h3d_scene_MultiMaterial_emit(h3d__scene__MultiMaterial,h3d__scene__RenderContext);
extern hl_type t$_i32;
h3d__pass__PassObject h3d_scene_RenderContext_emitPass(h3d__scene__RenderContext,h3d__mat__Pass,h3d__scene__Object);
extern hl_type t$h3d_scene_Graphics;
void h3d_scene_Graphics_new(h3d__scene__Graphics,h3d__scene__Object);
extern venum* g$h3d_mat_Compare_Always;
void h3d_mat_Pass_depth(h3d__mat__Pass,bool,venum*);
extern String s$add;
void h3d_mat_Pass_setPassName(h3d__mat__Pass,String);
h3d__scene__Object h3d_scene_Object_set_follow(h3d__scene__Object,h3d__scene__Object);
void h3d_scene_Graphics_clear(h3d__scene__Graphics);
void h3d_scene_Graphics_lineStyle(h3d__scene__Graphics,double*,int*,double*);
void h3d_scene_Graphics_moveTo(h3d__scene__Graphics,double,double,double);
void h3d_scene_Graphics_lineTo(h3d__scene__Graphics,double,double,double);
void h3d_scene_Object_removeChild(h3d__scene__Object,h3d__scene__Object);
#include <h3d/Engine.h>
void h3d_scene_MultiMaterial_draw(h3d__scene__MultiMaterial,h3d__scene__RenderContext);
extern hl_type t$_dyn;
void h3d_prim_Primitive_selectMaterial(h3d__prim__Primitive,int);
void h3d_scene_RenderContext_uploadParams(h3d__scene__RenderContext);

void h3d_scene_Skin_new(h3d__scene__Skin r0,h3d__anim__Skin r1,hl__types__ArrayObj r2,h3d__scene__Object r3) {
	bool *r6;
	h3d__prim__Primitive r5;
	r5 = NULL;
	h3d_scene_MultiMaterial_new(((h3d__scene__MultiMaterial)r0),r5,r2,r3);
	if( !r1 ) goto label$1bc97f3_1_5;
	r6 = NULL;
	h3d_scene_Skin_setSkinData(r0,r1,r6);
	label$1bc97f3_1_5:
	return;
}

void h3d_scene_Skin_calcAbsPos(h3d__scene__Skin r0) {
	bool r2;
	h3d_scene_Object_calcAbsPos(((h3d__scene__Object)r0));
	r2 = true;
	r0->jointsUpdated = r2;
	return;
}

void h3d_scene_Skin_setSkinData(h3d__scene__Skin r0,h3d__anim__Skin r1,bool* r2) {
	h3d__shader__SkinTangent r19;
	h3d__anim__Joint r28;
	vvirtual *r22;
	hl__types__ArrayObj r9, r12, r30, r31, r32;
	h3d__prim__Primitive r6;
	hl_type *r27;
	bool r3, r5, r17;
	h3d__shader__SkinBase r18;
	h3d__mat__Material r13;
	h3d__anim__Skin r4;
	h3d__shader__NormalMap r26;
	hxsl__Shader r23;
	h3d__mat__Pass r24, r25;
	h3d__shader__Skin r20;
	vdynamic *r14;
	h3d__Matrix r29;
	h3d__mat__Texture r16;
	varray *r15;
	int r8, r10, r11, r21;
	if( r2 ) goto label$1bc97f3_3_3;
	r3 = true;
	goto label$1bc97f3_3_4;
	label$1bc97f3_3_3:
	r3 = *r2;
	label$1bc97f3_3_4:
	r0->skinData = r1;
	r5 = true;
	r0->jointsUpdated = r5;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->primitive;
	r6 = h3d_scene_Mesh_set_primitive(((h3d__scene__Mesh)r0),r6);
	if( !r3 ) goto label$1bc97f3_3_134;
	r5 = false;
	r8 = 0;
	r9 = r0->materials;
	label$1bc97f3_3_14:
	if( r9 == NULL ) hl_null_access();
	r11 = r9->length;
	if( r8 >= r11 ) goto label$1bc97f3_3_34;
	r11 = r9->length;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$1bc97f3_3_22;
	r13 = NULL;
	goto label$1bc97f3_3_25;
	label$1bc97f3_3_22:
	r15 = r9->array;
	r14 = ((vdynamic**)(r15 + 1))[r8];
	r13 = (h3d__mat__Material)r14;
	label$1bc97f3_3_25:
	++r8;
	if( !r13 ) goto label$1bc97f3_3_33;
	if( r13 == NULL ) hl_null_access();
	r16 = h3d_mat_Material_get_normalMap(r13);
	if( !r16 ) goto label$1bc97f3_3_33;
	r17 = true;
	r5 = r17;
	goto label$1bc97f3_3_34;
	label$1bc97f3_3_33:
	goto label$1bc97f3_3_14;
	label$1bc97f3_3_34:
	if( !r5 ) goto label$1bc97f3_3_39;
	r19 = (h3d__shader__SkinTangent)hl_alloc_obj(&t$h3d_shader_SkinTangent);
	h3d_shader_SkinTangent_new(r19);
	r18 = ((h3d__shader__SkinBase)r19);
	goto label$1bc97f3_3_42;
	label$1bc97f3_3_39:
	r20 = (h3d__shader__Skin)hl_alloc_obj(&t$h3d_shader_Skin);
	h3d_shader_Skin_new(r20);
	r18 = ((h3d__shader__SkinBase)r20);
	label$1bc97f3_3_42:
	r0->skinShader = r18;
	r8 = 0;
	r4 = r0->skinData;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->splitJoints;
	if( !r9 ) goto label$1bc97f3_3_75;
	r10 = 0;
	r4 = r0->skinData;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->splitJoints;
	label$1bc97f3_3_52:
	if( r9 == NULL ) hl_null_access();
	r21 = r9->length;
	if( r10 >= r21 ) goto label$1bc97f3_3_74;
	r21 = r9->length;
	if( ((unsigned)r10) < ((unsigned)r21) ) goto label$1bc97f3_3_60;
	r22 = NULL;
	goto label$1bc97f3_3_63;
	label$1bc97f3_3_60:
	r15 = r9->array;
	r14 = ((vdynamic**)(r15 + 1))[r10];
	r22 = hl_to_virtual(&t$vrt_97d249e,(vdynamic*)r14);
	label$1bc97f3_3_63:
	++r10;
	if( r22 == NULL ) hl_null_access();
	r12 = hl_vfields(r22)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r22)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r22->value,-251009446/*joints*/,&t$hl_types_ArrayObj);
	if( r12 == NULL ) hl_null_access();
	r11 = r12->length;
	if( r8 >= r11 ) goto label$1bc97f3_3_73;
	r12 = hl_vfields(r22)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r22)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r22->value,-251009446/*joints*/,&t$hl_types_ArrayObj);
	if( r12 == NULL ) hl_null_access();
	r11 = r12->length;
	r8 = r11;
	label$1bc97f3_3_73:
	goto label$1bc97f3_3_52;
	label$1bc97f3_3_74:
	goto label$1bc97f3_3_81;
	label$1bc97f3_3_75:
	r4 = r0->skinData;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->boundJoints;
	if( r9 == NULL ) hl_null_access();
	r10 = r9->length;
	r8 = r10;
	label$1bc97f3_3_81:
	r18 = r0->skinShader;
	if( r18 == NULL ) hl_null_access();
	r10 = r18->MaxBones__;
	if( r10 >= r8 ) goto label$1bc97f3_3_90;
	r18 = r0->skinShader;
	if( r18 == NULL ) hl_null_access();
	r17 = true;
	r18->constModified = r17;
	r18->MaxBones__ = r8;
	label$1bc97f3_3_90:
	r10 = 0;
	r9 = r0->materials;
	label$1bc97f3_3_92:
	if( r9 == NULL ) hl_null_access();
	r21 = r9->length;
	if( r10 >= r21 ) goto label$1bc97f3_3_134;
	r21 = r9->length;
	if( ((unsigned)r10) < ((unsigned)r21) ) goto label$1bc97f3_3_100;
	r13 = NULL;
	goto label$1bc97f3_3_103;
	label$1bc97f3_3_100:
	r15 = r9->array;
	r14 = ((vdynamic**)(r15 + 1))[r10];
	r13 = (h3d__mat__Material)r14;
	label$1bc97f3_3_103:
	++r10;
	if( !r13 ) goto label$1bc97f3_3_133;
	if( r13 == NULL ) hl_null_access();
	r16 = h3d_mat_Material_get_normalMap(r13);
	if( !r16 ) goto label$1bc97f3_3_120;
	r24 = r13->passes;
	if( r24 == NULL ) hl_null_access();
	r18 = r0->skinShader;
	r25 = r13->passes;
	if( r25 == NULL ) hl_null_access();
	r26 = r13->normalShader;
	r11 = h3d_mat_Pass_getShaderIndex(r25,((hxsl__Shader)r26));
	r21 = 1;
	r11 = r11 + r21;
	r23 = h3d_mat_Pass_addShaderAtIndex(r24,((hxsl__Shader)r18),r11);
	r18 = (h3d__shader__SkinBase)r23;
	goto label$1bc97f3_3_125;
	label$1bc97f3_3_120:
	r24 = r13->passes;
	if( r24 == NULL ) hl_null_access();
	r18 = r0->skinShader;
	r23 = h3d_mat_Pass_addShader(r24,((hxsl__Shader)r18));
	r18 = (h3d__shader__SkinBase)r23;
	label$1bc97f3_3_125:
	r4 = r0->skinData;
	if( r4 == NULL ) hl_null_access();
	r12 = r4->splitJoints;
	if( !r12 ) goto label$1bc97f3_3_133;
	r24 = r13->passes;
	if( r24 == NULL ) hl_null_access();
	r17 = true;
	r17 = h3d_mat_Pass_set_dynamicParameters(r24,r17);
	label$1bc97f3_3_133:
	goto label$1bc97f3_3_92;
	label$1bc97f3_3_134:
	r27 = &t$h3d_Matrix;
	r8 = 0;
	r15 = hl_alloc_array(r27,r8);
	r9 = hl_types_ArrayObj_alloc(r15);
	r0->currentRelPose = r9;
	r27 = &t$h3d_Matrix;
	r8 = 0;
	r15 = hl_alloc_array(r27,r8);
	r9 = hl_types_ArrayObj_alloc(r15);
	r0->currentAbsPose = r9;
	r27 = &t$h3d_Matrix;
	r8 = 0;
	r15 = hl_alloc_array(r27,r8);
	r9 = hl_types_ArrayObj_alloc(r15);
	r0->currentPalette = r9;
	r5 = true;
	r0->paletteChanged = r5;
	r8 = 0;
	r4 = r0->skinData;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->allJoints;
	label$1bc97f3_3_155:
	if( r9 == NULL ) hl_null_access();
	r11 = r9->length;
	if( r8 >= r11 ) goto label$1bc97f3_3_172;
	r11 = r9->length;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$1bc97f3_3_163;
	r28 = NULL;
	goto label$1bc97f3_3_166;
	label$1bc97f3_3_163:
	r15 = r9->array;
	r14 = ((vdynamic**)(r15 + 1))[r8];
	r28 = (h3d__anim__Joint)r14;
	label$1bc97f3_3_166:
	++r8;
	r12 = r0->currentAbsPose;
	if( r12 == NULL ) hl_null_access();
	r29 = h3d_Matrix_I();
	r10 = hl_types_ArrayObj_push(r12,((vdynamic*)r29));
	goto label$1bc97f3_3_155;
	label$1bc97f3_3_172:
	r8 = 0;
	r4 = r0->skinData;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->boundJoints;
	if( r9 == NULL ) hl_null_access();
	r10 = r9->length;
	label$1bc97f3_3_178:
	if( r8 >= r10 ) goto label$1bc97f3_3_186;
	++r8;
	r9 = r0->currentPalette;
	if( r9 == NULL ) hl_null_access();
	r29 = h3d_Matrix_I();
	r21 = hl_types_ArrayObj_push(r9,((vdynamic*)r29));
	goto label$1bc97f3_3_178;
	label$1bc97f3_3_186:
	r4 = r0->skinData;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->splitJoints;
	if( !r9 ) goto label$1bc97f3_3_249;
	r27 = &t$hl_types_ArrayObj;
	r8 = 0;
	r15 = hl_alloc_array(r27,r8);
	r9 = hl_types_ArrayObj_alloc(r15);
	r0->splitPalette = r9;
	r8 = 0;
	r4 = r0->skinData;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->splitJoints;
	label$1bc97f3_3_199:
	if( r9 == NULL ) hl_null_access();
	r11 = r9->length;
	if( r8 >= r11 ) goto label$1bc97f3_3_248;
	r11 = r9->length;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$1bc97f3_3_207;
	r22 = NULL;
	goto label$1bc97f3_3_210;
	label$1bc97f3_3_207:
	r15 = r9->array;
	r14 = ((vdynamic**)(r15 + 1))[r8];
	r22 = hl_to_virtual(&t$vrt_97d249e,(vdynamic*)r14);
	label$1bc97f3_3_210:
	++r8;
	r12 = r0->splitPalette;
	r27 = &t$h3d_Matrix;
	r10 = 0;
	r15 = hl_alloc_array(r27,r10);
	r30 = hl_types_ArrayObj_alloc(r15);
	r10 = 0;
	if( r22 == NULL ) hl_null_access();
	r31 = hl_vfields(r22)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r22)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r22->value,-251009446/*joints*/,&t$hl_types_ArrayObj);
	label$1bc97f3_3_219:
	if( r31 == NULL ) hl_null_access();
	r21 = r31->length;
	if( r10 >= r21 ) goto label$1bc97f3_3_245;
	r21 = r31->length;
	if( ((unsigned)r10) < ((unsigned)r21) ) goto label$1bc97f3_3_227;
	r28 = NULL;
	goto label$1bc97f3_3_230;
	label$1bc97f3_3_227:
	r15 = r31->array;
	r14 = ((vdynamic**)(r15 + 1))[r10];
	r28 = (h3d__anim__Joint)r14;
	label$1bc97f3_3_230:
	++r10;
	if( r30 == NULL ) hl_null_access();
	r32 = r0->currentPalette;
	if( r32 == NULL ) hl_null_access();
	if( r28 == NULL ) hl_null_access();
	r11 = r28->bindIndex;
	r21 = r32->length;
	if( ((unsigned)r11) < ((unsigned)r21) ) goto label$1bc97f3_3_240;
	r29 = NULL;
	goto label$1bc97f3_3_243;
	label$1bc97f3_3_240:
	r15 = r32->array;
	r14 = ((vdynamic**)(r15 + 1))[r11];
	r29 = (h3d__Matrix)r14;
	label$1bc97f3_3_243:
	r11 = hl_types_ArrayObj_push(r30,((vdynamic*)r29));
	goto label$1bc97f3_3_219;
	label$1bc97f3_3_245:
	if( r12 == NULL ) hl_null_access();
	r10 = hl_types_ArrayObj_push(r12,((vdynamic*)r30));
	goto label$1bc97f3_3_199;
	label$1bc97f3_3_248:
	goto label$1bc97f3_3_251;
	label$1bc97f3_3_249:
	r9 = NULL;
	r0->splitPalette = r9;
	label$1bc97f3_3_251:
	return;
}

void h3d_scene_Skin_sync(h3d__scene__Skin r0,h3d__scene__RenderContext r1) {
	bool r3;
	int r4, r5;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->visibleFlag;
	if( r3 ) goto label$1bc97f3_4_9;
	r4 = r0->flags;
	r5 = 64;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 != r5 ) goto label$1bc97f3_4_9;
	return;
	label$1bc97f3_4_9:
	h3d_scene_Skin_syncJoints(r0);
	return;
}

void h3d_scene_Skin_syncJoints(h3d__scene__Skin r0) {
	h3d__anim__Joint r12, r14;
	hl__types__ArrayObj r7, r11;
	bool r2;
	h3d__shader__SkinBase r47;
	h3d__anim__Skin r8;
	h3d__scene__$Skin r5;
	double r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41, r42, r43, r44, r45;
	vdynamic *r3;
	varray *r13;
	int r6, r9, r10, r15, r46;
	h3d__Matrix r4, r16, r17, r18, r19;
	r2 = r0->jointsUpdated;
	if( r2 ) goto label$1bc97f3_5_3;
	return;
	label$1bc97f3_5_3:
	r5 = (h3d__scene__$Skin)g$_h3d_scene_Skin;
	r4 = r5->TMP_MAT;
	r6 = 0;
	r8 = r0->skinData;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->allJoints;
	label$1bc97f3_5_9:
	if( r7 == NULL ) hl_null_access();
	r10 = r7->length;
	if( r6 >= r10 ) goto label$1bc97f3_5_421;
	r10 = r7->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$1bc97f3_5_17;
	r12 = NULL;
	goto label$1bc97f3_5_20;
	label$1bc97f3_5_17:
	r13 = r7->array;
	r3 = ((vdynamic**)(r13 + 1))[r6];
	r12 = (h3d__anim__Joint)r3;
	label$1bc97f3_5_20:
	++r6;
	if( r12 == NULL ) hl_null_access();
	r9 = r12->index;
	r11 = r0->currentAbsPose;
	if( r11 == NULL ) hl_null_access();
	r15 = r11->length;
	if( ((unsigned)r9) < ((unsigned)r15) ) goto label$1bc97f3_5_29;
	r16 = NULL;
	goto label$1bc97f3_5_32;
	label$1bc97f3_5_29:
	r13 = r11->array;
	r3 = ((vdynamic**)(r13 + 1))[r9];
	r16 = (h3d__Matrix)r3;
	label$1bc97f3_5_32:
	r11 = r0->currentRelPose;
	if( r11 == NULL ) hl_null_access();
	r15 = r11->length;
	if( ((unsigned)r9) < ((unsigned)r15) ) goto label$1bc97f3_5_38;
	r17 = NULL;
	goto label$1bc97f3_5_41;
	label$1bc97f3_5_38:
	r13 = r11->array;
	r3 = ((vdynamic**)(r13 + 1))[r9];
	r17 = (h3d__Matrix)r3;
	label$1bc97f3_5_41:
	r10 = r12->bindIndex;
	if( r17 ) goto label$1bc97f3_5_46;
	r18 = r12->defMat;
	r17 = r18;
	goto label$1bc97f3_5_63;
	label$1bc97f3_5_46:
	r2 = r12->retargetAnim;
	if( !r2 ) goto label$1bc97f3_5_63;
	if( r4 == NULL ) hl_null_access();
	h3d_Matrix_load(r4,r17);
	r17 = r4;
	r19 = r12->defMat;
	if( r19 == NULL ) hl_null_access();
	r20 = r19->_41;
	r4->_41 = r20;
	r19 = r12->defMat;
	if( r19 == NULL ) hl_null_access();
	r20 = r19->_42;
	r4->_42 = r20;
	r19 = r12->defMat;
	if( r19 == NULL ) hl_null_access();
	r20 = r19->_43;
	r4->_43 = r20;
	label$1bc97f3_5_63:
	r14 = r12->parent;
	if( r14 ) goto label$1bc97f3_5_177;
	r18 = r0->absPos;
	if( r17 == NULL ) hl_null_access();
	r20 = r17->_11;
	r21 = r17->_12;
	r22 = r17->_13;
	r23 = r17->_21;
	r24 = r17->_22;
	r25 = r17->_23;
	r26 = r17->_31;
	r27 = r17->_32;
	r28 = r17->_33;
	r29 = r17->_41;
	r30 = r17->_42;
	r31 = r17->_43;
	if( r18 == NULL ) hl_null_access();
	r32 = r18->_11;
	r33 = r18->_12;
	r34 = r18->_13;
	r35 = r18->_21;
	r36 = r18->_22;
	r37 = r18->_23;
	r38 = r18->_31;
	r39 = r18->_32;
	r40 = r18->_33;
	r41 = r18->_41;
	r42 = r18->_42;
	r43 = r18->_43;
	if( r16 == NULL ) hl_null_access();
	r44 = r20 * r32;
	r45 = r21 * r35;
	r44 = r44 + r45;
	r45 = r22 * r38;
	r44 = r44 + r45;
	r16->_11 = r44;
	r44 = r20 * r33;
	r45 = r21 * r36;
	r44 = r44 + r45;
	r45 = r22 * r39;
	r44 = r44 + r45;
	r16->_12 = r44;
	r44 = r20 * r34;
	r45 = r21 * r37;
	r44 = r44 + r45;
	r45 = r22 * r40;
	r44 = r44 + r45;
	r16->_13 = r44;
	r44 = 0.;
	r16->_14 = r44;
	r44 = r23 * r32;
	r45 = r24 * r35;
	r44 = r44 + r45;
	r45 = r25 * r38;
	r44 = r44 + r45;
	r16->_21 = r44;
	r44 = r23 * r33;
	r45 = r24 * r36;
	r44 = r44 + r45;
	r45 = r25 * r39;
	r44 = r44 + r45;
	r16->_22 = r44;
	r44 = r23 * r34;
	r45 = r24 * r37;
	r44 = r44 + r45;
	r45 = r25 * r40;
	r44 = r44 + r45;
	r16->_23 = r44;
	r44 = 0.;
	r16->_24 = r44;
	r44 = r26 * r32;
	r45 = r27 * r35;
	r44 = r44 + r45;
	r45 = r28 * r38;
	r44 = r44 + r45;
	r16->_31 = r44;
	r44 = r26 * r33;
	r45 = r27 * r36;
	r44 = r44 + r45;
	r45 = r28 * r39;
	r44 = r44 + r45;
	r16->_32 = r44;
	r44 = r26 * r34;
	r45 = r27 * r37;
	r44 = r44 + r45;
	r45 = r28 * r40;
	r44 = r44 + r45;
	r16->_33 = r44;
	r44 = 0.;
	r16->_34 = r44;
	r44 = r29 * r32;
	r45 = r30 * r35;
	r44 = r44 + r45;
	r45 = r31 * r38;
	r44 = r44 + r45;
	r44 = r44 + r41;
	r16->_41 = r44;
	r44 = r29 * r33;
	r45 = r30 * r36;
	r44 = r44 + r45;
	r45 = r31 * r39;
	r44 = r44 + r45;
	r44 = r44 + r42;
	r16->_42 = r44;
	r44 = r29 * r34;
	r45 = r30 * r37;
	r44 = r44 + r45;
	r45 = r31 * r40;
	r44 = r44 + r45;
	r44 = r44 + r43;
	r16->_43 = r44;
	r44 = 1.;
	r16->_44 = r44;
	goto label$1bc97f3_5_299;
	label$1bc97f3_5_177:
	r11 = r0->currentAbsPose;
	if( r11 == NULL ) hl_null_access();
	r14 = r12->parent;
	if( r14 == NULL ) hl_null_access();
	r15 = r14->index;
	r46 = r11->length;
	if( ((unsigned)r15) < ((unsigned)r46) ) goto label$1bc97f3_5_186;
	r18 = NULL;
	goto label$1bc97f3_5_189;
	label$1bc97f3_5_186:
	r13 = r11->array;
	r3 = ((vdynamic**)(r13 + 1))[r15];
	r18 = (h3d__Matrix)r3;
	label$1bc97f3_5_189:
	if( r17 == NULL ) hl_null_access();
	r20 = r17->_11;
	r21 = r17->_12;
	r22 = r17->_13;
	r23 = r17->_21;
	r24 = r17->_22;
	r25 = r17->_23;
	r26 = r17->_31;
	r27 = r17->_32;
	r28 = r17->_33;
	r29 = r17->_41;
	r30 = r17->_42;
	r31 = r17->_43;
	if( r18 == NULL ) hl_null_access();
	r32 = r18->_11;
	r33 = r18->_12;
	r34 = r18->_13;
	r35 = r18->_21;
	r36 = r18->_22;
	r37 = r18->_23;
	r38 = r18->_31;
	r39 = r18->_32;
	r40 = r18->_33;
	r41 = r18->_41;
	r42 = r18->_42;
	r43 = r18->_43;
	if( r16 == NULL ) hl_null_access();
	r44 = r20 * r32;
	r45 = r21 * r35;
	r44 = r44 + r45;
	r45 = r22 * r38;
	r44 = r44 + r45;
	r16->_11 = r44;
	r44 = r20 * r33;
	r45 = r21 * r36;
	r44 = r44 + r45;
	r45 = r22 * r39;
	r44 = r44 + r45;
	r16->_12 = r44;
	r44 = r20 * r34;
	r45 = r21 * r37;
	r44 = r44 + r45;
	r45 = r22 * r40;
	r44 = r44 + r45;
	r16->_13 = r44;
	r44 = 0.;
	r16->_14 = r44;
	r44 = r23 * r32;
	r45 = r24 * r35;
	r44 = r44 + r45;
	r45 = r25 * r38;
	r44 = r44 + r45;
	r16->_21 = r44;
	r44 = r23 * r33;
	r45 = r24 * r36;
	r44 = r44 + r45;
	r45 = r25 * r39;
	r44 = r44 + r45;
	r16->_22 = r44;
	r44 = r23 * r34;
	r45 = r24 * r37;
	r44 = r44 + r45;
	r45 = r25 * r40;
	r44 = r44 + r45;
	r16->_23 = r44;
	r44 = 0.;
	r16->_24 = r44;
	r44 = r26 * r32;
	r45 = r27 * r35;
	r44 = r44 + r45;
	r45 = r28 * r38;
	r44 = r44 + r45;
	r16->_31 = r44;
	r44 = r26 * r33;
	r45 = r27 * r36;
	r44 = r44 + r45;
	r45 = r28 * r39;
	r44 = r44 + r45;
	r16->_32 = r44;
	r44 = r26 * r34;
	r45 = r27 * r37;
	r44 = r44 + r45;
	r45 = r28 * r40;
	r44 = r44 + r45;
	r16->_33 = r44;
	r44 = 0.;
	r16->_34 = r44;
	r44 = r29 * r32;
	r45 = r30 * r35;
	r44 = r44 + r45;
	r45 = r31 * r38;
	r44 = r44 + r45;
	r44 = r44 + r41;
	r16->_41 = r44;
	r44 = r29 * r33;
	r45 = r30 * r36;
	r44 = r44 + r45;
	r45 = r31 * r39;
	r44 = r44 + r45;
	r44 = r44 + r42;
	r16->_42 = r44;
	r44 = r29 * r34;
	r45 = r30 * r37;
	r44 = r44 + r45;
	r45 = r31 * r40;
	r44 = r44 + r45;
	r44 = r44 + r43;
	r16->_43 = r44;
	r44 = 1.;
	r16->_44 = r44;
	label$1bc97f3_5_299:
	r46 = 0;
	if( r10 < r46 ) goto label$1bc97f3_5_420;
	r11 = r0->currentPalette;
	if( r11 == NULL ) hl_null_access();
	r46 = r11->length;
	if( ((unsigned)r10) < ((unsigned)r46) ) goto label$1bc97f3_5_307;
	r18 = NULL;
	goto label$1bc97f3_5_310;
	label$1bc97f3_5_307:
	r13 = r11->array;
	r3 = ((vdynamic**)(r13 + 1))[r10];
	r18 = (h3d__Matrix)r3;
	label$1bc97f3_5_310:
	r19 = r12->transPos;
	if( r19 == NULL ) hl_null_access();
	r20 = r19->_11;
	r21 = r19->_12;
	r22 = r19->_13;
	r23 = r19->_21;
	r24 = r19->_22;
	r25 = r19->_23;
	r26 = r19->_31;
	r27 = r19->_32;
	r28 = r19->_33;
	r29 = r19->_41;
	r30 = r19->_42;
	r31 = r19->_43;
	r32 = r16->_11;
	r33 = r16->_12;
	r34 = r16->_13;
	r35 = r16->_21;
	r36 = r16->_22;
	r37 = r16->_23;
	r38 = r16->_31;
	r39 = r16->_32;
	r40 = r16->_33;
	r41 = r16->_41;
	r42 = r16->_42;
	r43 = r16->_43;
	if( r18 == NULL ) hl_null_access();
	r44 = r20 * r32;
	r45 = r21 * r35;
	r44 = r44 + r45;
	r45 = r22 * r38;
	r44 = r44 + r45;
	r18->_11 = r44;
	r44 = r20 * r33;
	r45 = r21 * r36;
	r44 = r44 + r45;
	r45 = r22 * r39;
	r44 = r44 + r45;
	r18->_12 = r44;
	r44 = r20 * r34;
	r45 = r21 * r37;
	r44 = r44 + r45;
	r45 = r22 * r40;
	r44 = r44 + r45;
	r18->_13 = r44;
	r44 = 0.;
	r18->_14 = r44;
	r44 = r23 * r32;
	r45 = r24 * r35;
	r44 = r44 + r45;
	r45 = r25 * r38;
	r44 = r44 + r45;
	r18->_21 = r44;
	r44 = r23 * r33;
	r45 = r24 * r36;
	r44 = r44 + r45;
	r45 = r25 * r39;
	r44 = r44 + r45;
	r18->_22 = r44;
	r44 = r23 * r34;
	r45 = r24 * r37;
	r44 = r44 + r45;
	r45 = r25 * r40;
	r44 = r44 + r45;
	r18->_23 = r44;
	r44 = 0.;
	r18->_24 = r44;
	r44 = r26 * r32;
	r45 = r27 * r35;
	r44 = r44 + r45;
	r45 = r28 * r38;
	r44 = r44 + r45;
	r18->_31 = r44;
	r44 = r26 * r33;
	r45 = r27 * r36;
	r44 = r44 + r45;
	r45 = r28 * r39;
	r44 = r44 + r45;
	r18->_32 = r44;
	r44 = r26 * r34;
	r45 = r27 * r37;
	r44 = r44 + r45;
	r45 = r28 * r40;
	r44 = r44 + r45;
	r18->_33 = r44;
	r44 = 0.;
	r18->_34 = r44;
	r44 = r29 * r32;
	r45 = r30 * r35;
	r44 = r44 + r45;
	r45 = r31 * r38;
	r44 = r44 + r45;
	r44 = r44 + r41;
	r18->_41 = r44;
	r44 = r29 * r33;
	r45 = r30 * r36;
	r44 = r44 + r45;
	r45 = r31 * r39;
	r44 = r44 + r45;
	r44 = r44 + r42;
	r18->_42 = r44;
	r44 = r29 * r34;
	r45 = r30 * r37;
	r44 = r44 + r45;
	r45 = r31 * r40;
	r44 = r44 + r45;
	r44 = r44 + r43;
	r18->_43 = r44;
	r44 = 1.;
	r18->_44 = r44;
	label$1bc97f3_5_420:
	goto label$1bc97f3_5_9;
	label$1bc97f3_5_421:
	r47 = r0->skinShader;
	if( r47 == NULL ) hl_null_access();
	r7 = r0->currentPalette;
	r47->bonesMatrixes__ = r7;
	r16 = r0->jointsAbsPosInv;
	if( !r16 ) goto label$1bc97f3_5_431;
	r16 = r0->jointsAbsPosInv;
	if( r16 == NULL ) hl_null_access();
	r20 = 0.;
	r16->_44 = r20;
	label$1bc97f3_5_431:
	r2 = false;
	r0->jointsUpdated = r2;
	return;
}

void h3d_scene_Skin_emit(h3d__scene__Skin r0,h3d__scene__RenderContext r1) {
	String r21;
	h3d__scene__Graphics r19;
	h3d__anim__Joint r24, r25;
	vvirtual *r11;
	hl__types__ArrayObj r3, r8;
	venum *r20;
	bool r18;
	h3d__mat__Material r14;
	h3d__anim__Skin r9;
	h3d__mat__Pass r15, r16;
	double r28, r32, r33, r34;
	h3d__pass__PassObject r17;
	int *r30;
	double *r29, *r31;
	vdynamic *r12;
	h3d__Matrix r26, r27;
	h3d__scene__Object r22, r23;
	varray *r13;
	int r4, r5, r6, r7, r10;
	r3 = r0->splitPalette;
	if( r3 ) goto label$1bc97f3_6_4;
	h3d_scene_MultiMaterial_emit(((h3d__scene__MultiMaterial)r0),r1);
	goto label$1bc97f3_6_48;
	label$1bc97f3_6_4:
	r4 = 0;
	r3 = r0->splitPalette;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$1bc97f3_6_8:
	if( r4 >= r5 ) goto label$1bc97f3_6_48;
	r6 = r4;
	++r4;
	r3 = r0->materials;
	if( r3 == NULL ) hl_null_access();
	r9 = r0->skinData;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->splitJoints;
	if( r8 == NULL ) hl_null_access();
	r10 = r8->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$1bc97f3_6_22;
	r11 = NULL;
	goto label$1bc97f3_6_25;
	label$1bc97f3_6_22:
	r13 = r8->array;
	r12 = ((vdynamic**)(r13 + 1))[r6];
	r11 = hl_to_virtual(&t$vrt_97d249e,(vdynamic*)r12);
	label$1bc97f3_6_25:
	if( r11 == NULL ) hl_null_access();
	r7 = hl_vfields(r11)[1] ? (*(int*)(hl_vfields(r11)[1])) : (int)hl_dyn_geti(r11->value,-257598297/*material*/,&t$_i32);
	r10 = r3->length;
	if( ((unsigned)r7) < ((unsigned)r10) ) goto label$1bc97f3_6_31;
	r14 = NULL;
	goto label$1bc97f3_6_34;
	label$1bc97f3_6_31:
	r13 = r3->array;
	r12 = ((vdynamic**)(r13 + 1))[r7];
	r14 = (h3d__mat__Material)r12;
	label$1bc97f3_6_34:
	if( !r14 ) goto label$1bc97f3_6_47;
	if( r14 == NULL ) hl_null_access();
	r15 = r14->passes;
	label$1bc97f3_6_37:
	if( !r15 ) goto label$1bc97f3_6_47;
	if( r1 == NULL ) hl_null_access();
	r17 = h3d_scene_RenderContext_emitPass(r1,r15,((h3d__scene__Object)r0));
	if( r17 == NULL ) hl_null_access();
	r17->index = r6;
	if( r15 == NULL ) hl_null_access();
	r16 = r15->nextPass;
	r15 = r16;
	goto label$1bc97f3_6_37;
	label$1bc97f3_6_47:
	goto label$1bc97f3_6_8;
	label$1bc97f3_6_48:
	r18 = r0->showJoints;
	if( !r18 ) goto label$1bc97f3_6_153;
	r19 = r0->jointsGraphics;
	if( r19 ) goto label$1bc97f3_6_72;
	r19 = (h3d__scene__Graphics)hl_alloc_obj(&t$h3d_scene_Graphics);
	h3d_scene_Graphics_new(r19,((h3d__scene__Object)r0));
	r0->jointsGraphics = r19;
	r19 = r0->jointsGraphics;
	if( r19 == NULL ) hl_null_access();
	r14 = r19->material;
	if( r14 == NULL ) hl_null_access();
	r15 = r14->passes;
	if( r15 == NULL ) hl_null_access();
	r18 = false;
	r20 = (venum*)g$h3d_mat_Compare_Always;
	h3d_mat_Pass_depth(r15,r18,r20);
	r19 = r0->jointsGraphics;
	if( r19 == NULL ) hl_null_access();
	r14 = r19->material;
	if( r14 == NULL ) hl_null_access();
	r15 = r14->passes;
	if( r15 == NULL ) hl_null_access();
	r21 = (String)s$add;
	h3d_mat_Pass_setPassName(r15,r21);
	label$1bc97f3_6_72:
	r22 = ((h3d__scene__Object)r0);
	label$1bc97f3_6_73:
	if( r22 == NULL ) hl_null_access();
	r23 = r22->parent;
	if( !r23 ) goto label$1bc97f3_6_80;
	r23 = r22->parent;
	r22 = r23;
	goto label$1bc97f3_6_73;
	label$1bc97f3_6_80:
	r19 = r0->jointsGraphics;
	if( r19 == NULL ) hl_null_access();
	r23 = h3d_scene_Object_set_follow(((h3d__scene__Object)r19),r22);
	r19 = r0->jointsGraphics;
	if( r19 == NULL ) hl_null_access();
	h3d_scene_Graphics_clear(r19);
	r4 = 0;
	r9 = r0->skinData;
	if( r9 == NULL ) hl_null_access();
	r3 = r9->allJoints;
	label$1bc97f3_6_90:
	if( r3 == NULL ) hl_null_access();
	r6 = r3->length;
	if( r4 >= r6 ) goto label$1bc97f3_6_152;
	r6 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r6) ) goto label$1bc97f3_6_98;
	r24 = NULL;
	goto label$1bc97f3_6_101;
	label$1bc97f3_6_98:
	r13 = r3->array;
	r12 = ((vdynamic**)(r13 + 1))[r4];
	r24 = (h3d__anim__Joint)r12;
	label$1bc97f3_6_101:
	++r4;
	r8 = r0->currentAbsPose;
	if( r8 == NULL ) hl_null_access();
	if( r24 == NULL ) hl_null_access();
	r5 = r24->index;
	r6 = r8->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$1bc97f3_6_110;
	r26 = NULL;
	goto label$1bc97f3_6_113;
	label$1bc97f3_6_110:
	r13 = r8->array;
	r12 = ((vdynamic**)(r13 + 1))[r5];
	r26 = (h3d__Matrix)r12;
	label$1bc97f3_6_113:
	r25 = r24->parent;
	if( r25 ) goto label$1bc97f3_6_117;
	r27 = r0->absPos;
	goto label$1bc97f3_6_129;
	label$1bc97f3_6_117:
	r8 = r0->currentAbsPose;
	if( r8 == NULL ) hl_null_access();
	r25 = r24->parent;
	if( r25 == NULL ) hl_null_access();
	r5 = r25->index;
	r6 = r8->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$1bc97f3_6_126;
	r27 = NULL;
	goto label$1bc97f3_6_129;
	label$1bc97f3_6_126:
	r13 = r8->array;
	r12 = ((vdynamic**)(r13 + 1))[r5];
	r27 = (h3d__Matrix)r12;
	label$1bc97f3_6_129:
	if( r19 == NULL ) hl_null_access();
	r5 = 1;
	r28 = (double)r5;
	r29 = &r28;
	r25 = r24->parent;
	if( r25 ) goto label$1bc97f3_6_137;
	r5 = -16776961;
	goto label$1bc97f3_6_138;
	label$1bc97f3_6_137:
	r5 = -256;
	label$1bc97f3_6_138:
	r30 = &r5;
	r31 = NULL;
	h3d_scene_Graphics_lineStyle(r19,r29,r30,r31);
	if( r27 == NULL ) hl_null_access();
	r32 = r27->_41;
	r33 = r27->_42;
	r34 = r27->_43;
	h3d_scene_Graphics_moveTo(r19,r32,r33,r34);
	if( r26 == NULL ) hl_null_access();
	r32 = r26->_41;
	r33 = r26->_42;
	r34 = r26->_43;
	h3d_scene_Graphics_lineTo(r19,r32,r33,r34);
	goto label$1bc97f3_6_90;
	label$1bc97f3_6_152:
	goto label$1bc97f3_6_165;
	label$1bc97f3_6_153:
	r19 = r0->jointsGraphics;
	if( !r19 ) goto label$1bc97f3_6_165;
	r19 = r0->jointsGraphics;
	if( !r19 ) goto label$1bc97f3_6_163;
	if( r19 == NULL ) hl_null_access();
	r22 = r19->parent;
	if( !r22 ) goto label$1bc97f3_6_163;
	r22 = r19->parent;
	if( r22 == NULL ) hl_null_access();
	h3d_scene_Object_removeChild(r22,((h3d__scene__Object)r19));
	label$1bc97f3_6_163:
	r19 = NULL;
	r0->jointsGraphics = r19;
	label$1bc97f3_6_165:
	return;
}

void h3d_scene_Skin_draw(h3d__scene__Skin r0,h3d__scene__RenderContext r1) {
	h3d__prim__Primitive r10;
	hl__types__ArrayObj r3;
	h3d__shader__SkinBase r6;
	h3d__Engine r11;
	h3d__pass__PassObject r5;
	vdynamic *r8;
	varray *r9;
	int r4, r7;
	r3 = r0->splitPalette;
	if( r3 ) goto label$1bc97f3_7_4;
	h3d_scene_MultiMaterial_draw(((h3d__scene__MultiMaterial)r0),r1);
	goto label$1bc97f3_7_28;
	label$1bc97f3_7_4:
	if( r1 == NULL ) hl_null_access();
	r5 = r1->drawPass;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->index;
	r6 = r0->skinShader;
	if( r6 == NULL ) hl_null_access();
	r3 = r0->splitPalette;
	if( r3 == NULL ) hl_null_access();
	r7 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$1bc97f3_7_16;
	r3 = NULL;
	goto label$1bc97f3_7_19;
	label$1bc97f3_7_16:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r4];
	r3 = (hl__types__ArrayObj)hl_dyn_castp(&r8,&t$_dyn,&t$hl_types_ArrayObj);
	label$1bc97f3_7_19:
	r6->bonesMatrixes__ = r3;
	r10 = r0->primitive;
	if( r10 == NULL ) hl_null_access();
	h3d_prim_Primitive_selectMaterial(r10,r4);
	h3d_scene_RenderContext_uploadParams(r1);
	r10 = r0->primitive;
	if( r10 == NULL ) hl_null_access();
	r11 = r1->engine;
	((void (*)(h3d__prim__Primitive,h3d__Engine))r10->$type->vobj_proto[2])(r10,r11);
	label$1bc97f3_7_28:
	return;
}

