﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/stage/PolyCanvas.h>
#include <h3d/Camera.h>
#include <h3d/Vector.h>
#include <components/stage/PolyLine.h>
#include <h3d/col/Point.h>
#include <h3d/mat/Material.h>
#include <hxd/res/Loader.h>
#include <hxd/res/Resource.h>
#include <hxd/res/Image.h>
#include <hxsl/Shader.h>
#include <h3d/mat/Pass.h>
void h3d_scene_Object_new(h3d__scene__Object,h3d__scene__Object);
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
extern hl_type t$components_stage_PolyLine;
extern hl_type t$h3d_col_Point;
void h3d_col_Point_new(h3d__col__Point,double*,double*,double*);
void components_stage_PolyLine_new(components__stage__PolyLine,h3d__col__Point,h3d__col__Point);
#include <h3d/prim/Polygon.h>
void h3d_prim_Polygon_addNormals(h3d__prim__Polygon);
extern hl_type t$h3d_scene_Mesh;
#include <h3d/prim/Primitive.h>
void h3d_scene_Mesh_new(h3d__scene__Mesh,h3d__prim__Primitive,h3d__mat__Material,h3d__scene__Object);
hxd__res__Loader hxd_Res_get_loader(void);
extern String s$lines_lineBlue_png;
extern hxd__res__$Image g$_hxd_res_Image;
hxd__res__Resource hxd_res_Loader_loadCache(hxd__res__Loader,String,hl__Class);
h3d__mat__Texture hxd_res_Image_toTexture(hxd__res__Image);
h3d__mat__Texture h3d_mat_Material_set_texture(h3d__mat__Material,h3d__mat__Texture);
extern hl_type t$components_stage_LRCanvasShader;
void components_stage_LRCanvasShader_new(components__stage__LRCanvasShader);
extern components__stage__$PolyCanvas g$_components_stage_PolyCanvas;
hxsl__Shader h3d_mat_Pass_addShader(h3d__mat__Pass,hxsl__Shader);

void components_stage_PolyCanvas_update(components__stage__PolyCanvas r0,double r1) {
	double r2;
	r2 = r0->delta;
	r2 = r2 + r1;
	r0->delta = r2;
	return;
}

void components_stage_PolyCanvas_new(components__stage__PolyCanvas r0,h3d__scene__Scene r1) {
	String r30;
	hxd__res__Resource r29;
	h3d__mat__Material r26;
	h3d__scene__Scene r4;
	components__stage__$PolyCanvas r34;
	h3d__scene__Mesh r25;
	hxsl__Shader r35;
	h3d__Camera r5;
	hxd__res__Loader r27;
	components__stage__PolyLine r18;
	h3d__Vector r6;
	h3d__mat__Pass r36;
	components__stage__LRCanvasShader r33;
	hxd__res__$Image r31;
	h3d__col__Point r19, r22;
	double r2, r9, r11, r13, r15, r16, r17, r20, r21, r23, r24;
	hxd__res__Image r32;
	double *r8, *r10, *r12, *r14;
	h3d__mat__Texture r28;
	int r7;
	r2 = 0.;
	r0->delta = r2;
	h3d_scene_Object_new(((h3d__scene__Object)r0),((h3d__scene__Object)r1));
	r0->stage = r1;
	r4 = r0->stage;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->camera;
	if( r5 == NULL ) hl_null_access();
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r7 = 0;
	r2 = (double)r7;
	r8 = &r2;
	r7 = -1;
	r9 = (double)r7;
	r10 = &r9;
	r7 = 0;
	r11 = (double)r7;
	r12 = &r11;
	r7 = 0;
	r13 = (double)r7;
	r14 = &r13;
	h3d_Vector_new(r6,r8,r10,r12,r14);
	r5->up = r6;
	r4 = r0->stage;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->camera;
	if( r5 == NULL ) hl_null_access();
	r6 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r7 = 0;
	r15 = (double)r7;
	r8 = &r15;
	r7 = 0;
	r16 = (double)r7;
	r10 = &r16;
	r7 = -1;
	r17 = (double)r7;
	r12 = &r17;
	r14 = NULL;
	h3d_Vector_new(r6,r8,r10,r12,r14);
	r5->pos = r6;
	r18 = (components__stage__PolyLine)hl_alloc_obj(&t$components_stage_PolyLine);
	r19 = (h3d__col__Point)hl_alloc_obj(&t$h3d_col_Point);
	r20 = -0.5;
	r8 = &r20;
	r7 = 0;
	r21 = (double)r7;
	r10 = &r21;
	r12 = NULL;
	h3d_col_Point_new(r19,r8,r10,r12);
	r22 = (h3d__col__Point)hl_alloc_obj(&t$h3d_col_Point);
	r23 = 0.5;
	r8 = &r23;
	r7 = 0;
	r24 = (double)r7;
	r10 = &r24;
	r12 = NULL;
	h3d_col_Point_new(r22,r8,r10,r12);
	components_stage_PolyLine_new(r18,r19,r22);
	h3d_prim_Polygon_addNormals(((h3d__prim__Polygon)r18));
	r25 = (h3d__scene__Mesh)hl_alloc_obj(&t$h3d_scene_Mesh);
	r26 = NULL;
	h3d_scene_Mesh_new(r25,((h3d__prim__Primitive)r18),r26,((h3d__scene__Object)r0));
	r0->mesh = r25;
	r27 = hxd_Res_get_loader();
	if( r27 == NULL ) hl_null_access();
	r30 = (String)s$lines_lineBlue_png;
	r31 = (hxd__res__$Image)g$_hxd_res_Image;
	r29 = hxd_res_Loader_loadCache(r27,r30,((hl__Class)r31));
	r32 = (hxd__res__Image)r29;
	if( r32 == NULL ) hl_null_access();
	r28 = hxd_res_Image_toTexture(r32);
	r0->lineTexture = r28;
	r25 = r0->mesh;
	if( r25 == NULL ) hl_null_access();
	r26 = r25->material;
	if( r26 == NULL ) hl_null_access();
	r28 = r0->lineTexture;
	r28 = h3d_mat_Material_set_texture(r26,r28);
	r33 = (components__stage__LRCanvasShader)hl_alloc_obj(&t$components_stage_LRCanvasShader);
	components_stage_LRCanvasShader_new(r33);
	r34 = (components__stage__$PolyCanvas)g$_components_stage_PolyCanvas;
	r34->shader = r33;
	r34 = (components__stage__$PolyCanvas)g$_components_stage_PolyCanvas;
	r33 = r34->shader;
	if( r33 == NULL ) hl_null_access();
	r28 = r0->lineTexture;
	r33->texture__ = r28;
	r25 = r0->mesh;
	if( r25 == NULL ) hl_null_access();
	r26 = r25->material;
	if( r26 == NULL ) hl_null_access();
	r36 = r26->passes;
	if( r36 == NULL ) hl_null_access();
	r34 = (components__stage__$PolyCanvas)g$_components_stage_PolyCanvas;
	r33 = r34->shader;
	r35 = h3d_mat_Pass_addShader(r36,((hxsl__Shader)r33));
	r33 = (components__stage__LRCanvasShader)r35;
	return;
}

