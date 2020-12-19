﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/scene/MultiMaterial.h>
void h3d_scene_Mesh_new(h3d__scene__Mesh,h3d__prim__Primitive,h3d__mat__Material,h3d__scene__Object);
extern hl_type t$h3d_mat_Material;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
#include <h3d/scene/RenderContext.h>
#include <h3d/mat/Pass.h>
#include <h3d/pass/PassObject.h>
h3d__pass__PassObject h3d_scene_RenderContext_emitPass(h3d__scene__RenderContext,h3d__mat__Pass,h3d__scene__Object);
void h3d_prim_Primitive_selectMaterial(h3d__prim__Primitive,int);
void h3d_scene_Mesh_draw(h3d__scene__Mesh,h3d__scene__RenderContext);

void h3d_scene_MultiMaterial_new(h3d__scene__MultiMaterial r0,h3d__prim__Primitive r1,hl__types__ArrayObj r2,h3d__scene__Object r3) {
	hl__types__ArrayObj r6;
	hl_type *r11;
	h3d__mat__Material r5;
	vdynamic *r9;
	varray *r10;
	int r7, r8;
	if( r2 ) goto label$08e5958_1_3;
	r5 = NULL;
	goto label$08e5958_1_12;
	label$08e5958_1_3:
	if( r2 == NULL ) hl_null_access();
	r7 = 0;
	r8 = r2->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$08e5958_1_9;
	r5 = NULL;
	goto label$08e5958_1_12;
	label$08e5958_1_9:
	r10 = r2->array;
	r9 = ((vdynamic**)(r10 + 1))[r7];
	r5 = (h3d__mat__Material)r9;
	label$08e5958_1_12:
	h3d_scene_Mesh_new(((h3d__scene__Mesh)r0),r1,r5,r3);
	if( r2 ) goto label$08e5958_1_22;
	r11 = &t$h3d_mat_Material;
	r7 = 1;
	r10 = hl_alloc_array(r11,r7);
	r5 = r0->material;
	r7 = 0;
	((h3d__mat__Material*)(r10 + 1))[r7] = r5;
	r6 = hl_types_ArrayObj_alloc(r10);
	goto label$08e5958_1_23;
	label$08e5958_1_22:
	r6 = r2;
	label$08e5958_1_23:
	r0->materials = r6;
	return;
}

void h3d_scene_MultiMaterial_emit(h3d__scene__MultiMaterial r0,h3d__scene__RenderContext r1) {
	hl__types__ArrayObj r5;
	h3d__mat__Material r8;
	h3d__mat__Pass r11, r12;
	h3d__pass__PassObject r13;
	vdynamic *r9;
	varray *r10;
	int r2, r4, r6, r7;
	r2 = 0;
	r5 = r0->materials;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->length;
	label$08e5958_2_4:
	if( r2 >= r4 ) goto label$08e5958_2_31;
	r6 = r2;
	++r2;
	r5 = r0->materials;
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$08e5958_2_14;
	r8 = NULL;
	goto label$08e5958_2_17;
	label$08e5958_2_14:
	r10 = r5->array;
	r9 = ((vdynamic**)(r10 + 1))[r6];
	r8 = (h3d__mat__Material)r9;
	label$08e5958_2_17:
	if( !r8 ) goto label$08e5958_2_30;
	if( r8 == NULL ) hl_null_access();
	r11 = r8->passes;
	label$08e5958_2_20:
	if( !r11 ) goto label$08e5958_2_30;
	if( r1 == NULL ) hl_null_access();
	r13 = h3d_scene_RenderContext_emitPass(r1,r11,((h3d__scene__Object)r0));
	if( r13 == NULL ) hl_null_access();
	r13->index = r6;
	if( r11 == NULL ) hl_null_access();
	r12 = r11->nextPass;
	r11 = r12;
	goto label$08e5958_2_20;
	label$08e5958_2_30:
	goto label$08e5958_2_4;
	label$08e5958_2_31:
	return;
}

void h3d_scene_MultiMaterial_draw(h3d__scene__MultiMaterial r0,h3d__scene__RenderContext r1) {
	h3d__prim__Primitive r6;
	hl__types__ArrayObj r4;
	h3d__pass__PassObject r7;
	int r3, r5;
	r4 = r0->materials;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	r5 = 1;
	if( r5 >= r3 ) goto label$08e5958_3_12;
	r6 = r0->primitive;
	if( r6 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r7 = r1->drawPass;
	if( r7 == NULL ) hl_null_access();
	r3 = r7->index;
	h3d_prim_Primitive_selectMaterial(r6,r3);
	label$08e5958_3_12:
	h3d_scene_Mesh_draw(((h3d__scene__Mesh)r0),r1);
	return;
}

