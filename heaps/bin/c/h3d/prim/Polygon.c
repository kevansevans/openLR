﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h3d/prim/Polygon.h>
void h3d_prim_MeshPrimitive_new(h3d__prim__MeshPrimitive);
#include <h3d/col/Bounds.h>
#include <h3d/col/Point.h>
extern hl_type t$h3d_col_Bounds;
void h3d_col_Bounds_new(h3d__col__Bounds);
#include <h3d/Engine.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayBytes_hl_F32.h>
#include <h3d/prim/UV.h>
#include <h3d/BufferFlag.h>
void h3d_prim_MeshPrimitive_dispose(h3d__prim__MeshPrimitive);
extern hl_type t$String;
#include <hl/natives.h>
extern String s$position;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
extern String s$normal;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
int hl_types_ArrayBytes_Int_push(hl__types__ArrayBytes_Int,int);
extern String s$tangent;
extern String s$uv;
extern String s$color;
extern hl_type t$hl_types_ArrayBytes_hl_F32;
void hl_types_ArrayBytes_hl_F32_new(hl__types__ArrayBytes_hl_F32);
void hl_types_ArrayBytes_hl_F32___expand(hl__types__ArrayBytes_hl_F32,int);
int hl_types_ArrayBytes_hl_F32_push(hl__types__ArrayBytes_hl_F32,float);
extern hl_type t$h3d_BufferFlag;
extern venum* g$h3d_BufferFlag_Triangles;
extern venum* g$h3d_BufferFlag_RawFormat;
h3d__Buffer h3d_Buffer_ofFloats(hl__types__ArrayBytes_hl_F32,int,hl__types__ArrayObj);
void h3d_prim_MeshPrimitive_addBuffer(h3d__prim__MeshPrimitive,String,h3d__Buffer,int*);
h3d__Indexes h3d_Indexes_alloc(hl__types__ArrayBytes_hl_UI16,int*,int*);
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
extern hl_type t$h3d_col_Point;
void h3d_col_Point_new(h3d__col__Point,double*,double*,double*);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
int h3d_prim_Polygon_triCount(h3d__prim__Polygon);
int h3d_prim_Primitive_triCount(h3d__prim__Primitive);
#include <h3d/impl/ManagedBuffer.h>
#include <h3d/BufferOffset.h>
#include <h3d/impl/MemoryManager.h>
h3d__BufferOffset h3d_prim_MeshPrimitive_getBuffers(h3d__prim__MeshPrimitive,h3d__Engine);
void h3d_Engine_renderMultiBuffers(h3d__Engine,h3d__BufferOffset,h3d__Indexes,int*,int*);

void h3d_prim_Polygon_new(h3d__prim__Polygon r0,hl__types__ArrayObj r1,hl__types__ArrayBytes_hl_UI16 r2) {
	h3d_prim_MeshPrimitive_new(((h3d__prim__MeshPrimitive)r0));
	r0->points = r1;
	r0->idx = r2;
	return;
}

h3d__col__Bounds h3d_prim_Polygon_getBounds(h3d__prim__Polygon r0) {
	hl__types__ArrayObj r4;
	h3d__col__Bounds r1;
	double r9, r10;
	h3d__col__Point r6;
	vdynamic *r7;
	varray *r8;
	int r3, r5;
	r1 = (h3d__col__Bounds)hl_alloc_obj(&t$h3d_col_Bounds);
	h3d_col_Bounds_new(r1);
	r3 = 0;
	r4 = r0->points;
	label$cf601d9_2_4:
	if( r4 == NULL ) hl_null_access();
	r5 = r4->length;
	if( r3 >= r5 ) goto label$cf601d9_2_49;
	r5 = r4->length;
	if( ((unsigned)r3) < ((unsigned)r5) ) goto label$cf601d9_2_12;
	r6 = NULL;
	goto label$cf601d9_2_15;
	label$cf601d9_2_12:
	r8 = r4->array;
	r7 = ((vdynamic**)(r8 + 1))[r3];
	r6 = (h3d__col__Point)r7;
	label$cf601d9_2_15:
	++r3;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->x;
	if( r1 == NULL ) hl_null_access();
	r10 = r1->xMin;
	if( !(r9 < r10) ) goto label$cf601d9_2_23;
	r9 = r6->x;
	r1->xMin = r9;
	label$cf601d9_2_23:
	r9 = r6->x;
	r10 = r1->xMax;
	if( !(r10 < r9) ) goto label$cf601d9_2_28;
	r9 = r6->x;
	r1->xMax = r9;
	label$cf601d9_2_28:
	r9 = r6->y;
	r10 = r1->yMin;
	if( !(r9 < r10) ) goto label$cf601d9_2_33;
	r9 = r6->y;
	r1->yMin = r9;
	label$cf601d9_2_33:
	r9 = r6->y;
	r10 = r1->yMax;
	if( !(r10 < r9) ) goto label$cf601d9_2_38;
	r9 = r6->y;
	r1->yMax = r9;
	label$cf601d9_2_38:
	r9 = r6->z;
	r10 = r1->zMin;
	if( !(r9 < r10) ) goto label$cf601d9_2_43;
	r9 = r6->z;
	r1->zMin = r9;
	label$cf601d9_2_43:
	r9 = r6->z;
	r10 = r1->zMax;
	if( !(r10 < r9) ) goto label$cf601d9_2_48;
	r9 = r6->z;
	r1->zMax = r9;
	label$cf601d9_2_48:
	goto label$cf601d9_2_4;
	label$cf601d9_2_49:
	return r1;
}

void h3d_prim_Polygon_alloc(h3d__prim__Polygon r0,h3d__Engine r1) {
	String r8;
	h3d__prim__UV r24;
	hl__types__ArrayObj r4, r13, r26;
	venum *r27;
	hl_type *r6;
	hl__types__ArrayBytes_hl_F32 r14, r15;
	hl__types__ArrayBytes_hl_UI16 r25;
	hl__types__ArrayBytes_Int r9;
	float r17;
	h3d__Buffer r28;
	h3d__col__Point r21, r23;
	double r16;
	int *r29, *r31;
	vdynamic *r22;
	h3d__Indexes r30;
	vbyte *r10;
	varray *r5;
	int r3, r7, r11, r12, r18, r19, r20;
	h3d_prim_MeshPrimitive_dispose(((h3d__prim__MeshPrimitive)r0));
	r3 = 3;
	r6 = &t$String;
	r7 = 1;
	r5 = hl_alloc_array(r6,r7);
	r8 = (String)s$position;
	r7 = 0;
	((String*)(r5 + 1))[r7] = r8;
	r4 = hl_types_ArrayObj_alloc(r5);
	r7 = 4;
	r10 = hl_alloc_bytes(r7);
	r7 = 0;
	r11 = 0;
	r12 = 2;
	r12 = r7 << r12;
	*(int*)(r10 + r12) = r11;
	++r7;
	r7 = 1;
	r9 = hl_types_ArrayBase_allocI32(r10,r7);
	r13 = r0->normals;
	if( !r13 ) goto label$cf601d9_3_29;
	if( r4 == NULL ) hl_null_access();
	r8 = (String)s$normal;
	r7 = hl_types_ArrayObj_push(r4,((vdynamic*)r8));
	if( r9 == NULL ) hl_null_access();
	r7 = hl_types_ArrayBytes_Int_push(r9,r3);
	r11 = 3;
	r7 = r3 + r11;
	r3 = r7;
	label$cf601d9_3_29:
	r13 = r0->tangents;
	if( !r13 ) goto label$cf601d9_3_39;
	if( r4 == NULL ) hl_null_access();
	r8 = (String)s$tangent;
	r7 = hl_types_ArrayObj_push(r4,((vdynamic*)r8));
	if( r9 == NULL ) hl_null_access();
	r7 = hl_types_ArrayBytes_Int_push(r9,r3);
	r11 = 3;
	r7 = r3 + r11;
	r3 = r7;
	label$cf601d9_3_39:
	r13 = r0->uvs;
	if( !r13 ) goto label$cf601d9_3_49;
	if( r4 == NULL ) hl_null_access();
	r8 = (String)s$uv;
	r7 = hl_types_ArrayObj_push(r4,((vdynamic*)r8));
	if( r9 == NULL ) hl_null_access();
	r7 = hl_types_ArrayBytes_Int_push(r9,r3);
	r11 = 2;
	r7 = r3 + r11;
	r3 = r7;
	label$cf601d9_3_49:
	r13 = r0->colors;
	if( !r13 ) goto label$cf601d9_3_59;
	if( r4 == NULL ) hl_null_access();
	r8 = (String)s$color;
	r7 = hl_types_ArrayObj_push(r4,((vdynamic*)r8));
	if( r9 == NULL ) hl_null_access();
	r7 = hl_types_ArrayBytes_Int_push(r9,r3);
	r11 = 3;
	r7 = r3 + r11;
	r3 = r7;
	label$cf601d9_3_59:
	r7 = 0;
	r14 = (hl__types__ArrayBytes_hl_F32)hl_alloc_obj(&t$hl_types_ArrayBytes_hl_F32);
	hl_types_ArrayBytes_hl_F32_new(r14);
	r12 = 0;
	if( r12 >= r7 ) goto label$cf601d9_3_77;
	r12 = r14->length;
	if( r12 >= r7 ) goto label$cf601d9_3_77;
	r12 = 1;
	r11 = r7 - r12;
	r16 = 0.;
	r17 = (float)r16;
	r12 = r14->length;
	if( ((unsigned)r11) < ((unsigned)r12) ) goto label$cf601d9_3_73;
	hl_types_ArrayBytes_hl_F32___expand(r14,r11);
	label$cf601d9_3_73:
	r10 = r14->bytes;
	r12 = 2;
	r12 = r11 << r12;
	*(float*)(r10 + r12) = r17;
	label$cf601d9_3_77:
	r15 = r14;
	r11 = 0;
	r13 = r0->points;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->length;
	label$cf601d9_3_82:
	if( r11 >= r12 ) goto label$cf601d9_3_188;
	r18 = r11;
	++r11;
	r13 = r0->points;
	if( r13 == NULL ) hl_null_access();
	r20 = r13->length;
	if( ((unsigned)r18) < ((unsigned)r20) ) goto label$cf601d9_3_92;
	r21 = NULL;
	goto label$cf601d9_3_95;
	label$cf601d9_3_92:
	r5 = r13->array;
	r22 = ((vdynamic**)(r5 + 1))[r18];
	r21 = (h3d__col__Point)r22;
	label$cf601d9_3_95:
	if( r15 == NULL ) hl_null_access();
	if( r21 == NULL ) hl_null_access();
	r16 = r21->x;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r16 = r21->y;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r16 = r21->z;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r13 = r0->normals;
	if( !r13 ) goto label$cf601d9_3_127;
	r13 = r0->normals;
	if( r13 == NULL ) hl_null_access();
	r20 = r13->length;
	if( ((unsigned)r18) < ((unsigned)r20) ) goto label$cf601d9_3_114;
	r23 = NULL;
	goto label$cf601d9_3_117;
	label$cf601d9_3_114:
	r5 = r13->array;
	r22 = ((vdynamic**)(r5 + 1))[r18];
	r23 = (h3d__col__Point)r22;
	label$cf601d9_3_117:
	if( r23 == NULL ) hl_null_access();
	r16 = r23->x;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r16 = r23->y;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r16 = r23->z;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	label$cf601d9_3_127:
	r13 = r0->tangents;
	if( !r13 ) goto label$cf601d9_3_148;
	r13 = r0->tangents;
	if( r13 == NULL ) hl_null_access();
	r20 = r13->length;
	if( ((unsigned)r18) < ((unsigned)r20) ) goto label$cf601d9_3_135;
	r23 = NULL;
	goto label$cf601d9_3_138;
	label$cf601d9_3_135:
	r5 = r13->array;
	r22 = ((vdynamic**)(r5 + 1))[r18];
	r23 = (h3d__col__Point)r22;
	label$cf601d9_3_138:
	if( r23 == NULL ) hl_null_access();
	r16 = r23->x;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r16 = r23->y;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r16 = r23->z;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	label$cf601d9_3_148:
	r13 = r0->uvs;
	if( !r13 ) goto label$cf601d9_3_166;
	r13 = r0->uvs;
	if( r13 == NULL ) hl_null_access();
	r20 = r13->length;
	if( ((unsigned)r18) < ((unsigned)r20) ) goto label$cf601d9_3_156;
	r24 = NULL;
	goto label$cf601d9_3_159;
	label$cf601d9_3_156:
	r5 = r13->array;
	r22 = ((vdynamic**)(r5 + 1))[r18];
	r24 = (h3d__prim__UV)r22;
	label$cf601d9_3_159:
	if( r24 == NULL ) hl_null_access();
	r16 = r24->u;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r16 = r24->v;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	label$cf601d9_3_166:
	r13 = r0->colors;
	if( !r13 ) goto label$cf601d9_3_187;
	r13 = r0->colors;
	if( r13 == NULL ) hl_null_access();
	r20 = r13->length;
	if( ((unsigned)r18) < ((unsigned)r20) ) goto label$cf601d9_3_174;
	r23 = NULL;
	goto label$cf601d9_3_177;
	label$cf601d9_3_174:
	r5 = r13->array;
	r22 = ((vdynamic**)(r5 + 1))[r18];
	r23 = (h3d__col__Point)r22;
	label$cf601d9_3_177:
	if( r23 == NULL ) hl_null_access();
	r16 = r23->x;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r16 = r23->y;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	r16 = r23->z;
	r17 = (float)r16;
	r19 = hl_types_ArrayBytes_hl_F32_push(r15,r17);
	label$cf601d9_3_187:
	goto label$cf601d9_3_82;
	label$cf601d9_3_188:
	r6 = &t$h3d_BufferFlag;
	r11 = 0;
	r5 = hl_alloc_array(r6,r11);
	r13 = hl_types_ArrayObj_alloc(r5);
	r25 = r0->idx;
	if( r25 ) goto label$cf601d9_3_197;
	if( r13 == NULL ) hl_null_access();
	r27 = (venum*)g$h3d_BufferFlag_Triangles;
	r11 = hl_types_ArrayObj_push(r13,((vdynamic*)r27));
	label$cf601d9_3_197:
	r26 = r0->normals;
	if( !r26 ) goto label$cf601d9_3_201;
	r26 = r0->tangents;
	if( !r26 ) goto label$cf601d9_3_204;
	label$cf601d9_3_201:
	if( r13 == NULL ) hl_null_access();
	r27 = (venum*)g$h3d_BufferFlag_RawFormat;
	r11 = hl_types_ArrayObj_push(r13,((vdynamic*)r27));
	label$cf601d9_3_204:
	r28 = h3d_Buffer_ofFloats(r15,r3,r13);
	r0->buffer = r28;
	r11 = 0;
	if( r4 == NULL ) hl_null_access();
	r12 = r4->length;
	label$cf601d9_3_209:
	if( r11 >= r12 ) goto label$cf601d9_3_234;
	r18 = r11;
	++r11;
	if( r4 == NULL ) hl_null_access();
	r20 = r4->length;
	if( ((unsigned)r18) < ((unsigned)r20) ) goto label$cf601d9_3_218;
	r8 = NULL;
	goto label$cf601d9_3_221;
	label$cf601d9_3_218:
	r5 = r4->array;
	r22 = ((vdynamic**)(r5 + 1))[r18];
	r8 = (String)r22;
	label$cf601d9_3_221:
	r28 = r0->buffer;
	if( r9 == NULL ) hl_null_access();
	r20 = r9->length;
	if( ((unsigned)r18) < ((unsigned)r20) ) goto label$cf601d9_3_227;
	r19 = 0;
	goto label$cf601d9_3_231;
	label$cf601d9_3_227:
	r10 = r9->bytes;
	r20 = 2;
	r20 = r18 << r20;
	r19 = *(int*)(r10 + r20);
	label$cf601d9_3_231:
	r29 = &r19;
	h3d_prim_MeshPrimitive_addBuffer(((h3d__prim__MeshPrimitive)r0),r8,r28,r29);
	goto label$cf601d9_3_209;
	label$cf601d9_3_234:
	r25 = r0->idx;
	if( !r25 ) goto label$cf601d9_3_241;
	r25 = r0->idx;
	r29 = NULL;
	r31 = NULL;
	r30 = h3d_Indexes_alloc(r25,r29,r31);
	r0->indexes = r30;
	label$cf601d9_3_241:
	return;
}

void h3d_prim_Polygon_addNormals(h3d__prim__Polygon r0) {
	hl__types__ArrayObj r1;
	hl__types__ArrayBytes_hl_UI16 r13;
	unsigned short r19;
	double r23, r25, r26, r27, r28, r29, r30, r31, r32, r33;
	h3d__col__Point r7, r21, r22, r24;
	vdynamic *r20;
	double *r8, *r9, *r10;
	vbyte *r18;
	varray *r12;
	int r3, r4, r5, r6, r11, r14, r15, r16, r17;
	r1 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r1);
	r0->normals = r1;
	r3 = 0;
	r1 = r0->points;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->length;
	label$cf601d9_4_7:
	if( r3 >= r4 ) goto label$cf601d9_4_24;
	r5 = r3;
	++r3;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r7 = (h3d__col__Point)hl_alloc_obj(&t$h3d_col_Point);
	r8 = NULL;
	r9 = NULL;
	r10 = NULL;
	h3d_col_Point_new(r7,r8,r9,r10);
	r11 = r1->length;
	if( ((unsigned)r5) < ((unsigned)r11) ) goto label$cf601d9_4_21;
	hl_types_ArrayObj___expand(r1,r5);
	label$cf601d9_4_21:
	r12 = r1->array;
	((h3d__col__Point*)(r12 + 1))[r5] = r7;
	goto label$cf601d9_4_7;
	label$cf601d9_4_24:
	r3 = 0;
	r4 = 0;
	r5 = h3d_prim_Polygon_triCount(r0);
	label$cf601d9_4_27:
	if( r4 >= r5 ) goto label$cf601d9_4_265;
	++r4;
	r13 = r0->idx;
	if( r13 ) goto label$cf601d9_4_45;
	++r3;
	r15 = 1;
	r14 = r3 - r15;
	r11 = r14;
	++r3;
	r16 = 1;
	r15 = r3 - r16;
	r14 = r15;
	++r3;
	r17 = 1;
	r16 = r3 - r17;
	r15 = r16;
	goto label$cf601d9_4_90;
	label$cf601d9_4_45:
	r13 = r0->idx;
	if( r13 == NULL ) hl_null_access();
	r16 = r3;
	++r3;
	r17 = r13->length;
	if( ((unsigned)r16) < ((unsigned)r17) ) goto label$cf601d9_4_53;
	r16 = 0;
	goto label$cf601d9_4_57;
	label$cf601d9_4_53:
	r18 = r13->bytes;
	r17 = 1;
	r17 = r16 << r17;
	r16 = *(unsigned short*)(r18 + r17);
	label$cf601d9_4_57:
	r19 = (int)r16;
	r16 = (int)r19;
	r11 = r16;
	r13 = r0->idx;
	if( r13 == NULL ) hl_null_access();
	r16 = r3;
	++r3;
	r17 = r13->length;
	if( ((unsigned)r16) < ((unsigned)r17) ) goto label$cf601d9_4_68;
	r16 = 0;
	goto label$cf601d9_4_72;
	label$cf601d9_4_68:
	r18 = r13->bytes;
	r17 = 1;
	r17 = r16 << r17;
	r16 = *(unsigned short*)(r18 + r17);
	label$cf601d9_4_72:
	r19 = (int)r16;
	r16 = (int)r19;
	r14 = r16;
	r13 = r0->idx;
	if( r13 == NULL ) hl_null_access();
	r16 = r3;
	++r3;
	r17 = r13->length;
	if( ((unsigned)r16) < ((unsigned)r17) ) goto label$cf601d9_4_83;
	r16 = 0;
	goto label$cf601d9_4_87;
	label$cf601d9_4_83:
	r18 = r13->bytes;
	r17 = 1;
	r17 = r16 << r17;
	r16 = *(unsigned short*)(r18 + r17);
	label$cf601d9_4_87:
	r19 = (int)r16;
	r16 = (int)r19;
	r15 = r16;
	label$cf601d9_4_90:
	r1 = r0->points;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r11) < ((unsigned)r17) ) goto label$cf601d9_4_96;
	r7 = NULL;
	goto label$cf601d9_4_99;
	label$cf601d9_4_96:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r11];
	r7 = (h3d__col__Point)r20;
	label$cf601d9_4_99:
	r1 = r0->points;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r14) < ((unsigned)r17) ) goto label$cf601d9_4_105;
	r21 = NULL;
	goto label$cf601d9_4_108;
	label$cf601d9_4_105:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r14];
	r21 = (h3d__col__Point)r20;
	label$cf601d9_4_108:
	r1 = r0->points;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r15) < ((unsigned)r17) ) goto label$cf601d9_4_114;
	r22 = NULL;
	goto label$cf601d9_4_117;
	label$cf601d9_4_114:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r15];
	r22 = (h3d__col__Point)r20;
	label$cf601d9_4_117:
	if( r21 == NULL ) hl_null_access();
	r23 = r21->x;
	if( r7 == NULL ) hl_null_access();
	r25 = r7->x;
	r23 = r23 - r25;
	r25 = r21->y;
	r26 = r7->y;
	r25 = r25 - r26;
	r26 = r21->z;
	r27 = r7->z;
	r26 = r26 - r27;
	if( r22 == NULL ) hl_null_access();
	r27 = r22->x;
	r28 = r7->x;
	r27 = r27 - r28;
	r28 = r22->y;
	r29 = r7->y;
	r28 = r28 - r29;
	r29 = r22->z;
	r30 = r7->z;
	r29 = r29 - r30;
	r30 = r25 * r29;
	r31 = r26 * r28;
	r30 = r30 - r31;
	r31 = r26 * r27;
	r32 = r23 * r29;
	r31 = r31 - r32;
	r32 = r23 * r28;
	r33 = r25 * r27;
	r32 = r32 - r33;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r11) < ((unsigned)r17) ) goto label$cf601d9_4_153;
	r24 = NULL;
	goto label$cf601d9_4_156;
	label$cf601d9_4_153:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r11];
	r24 = (h3d__col__Point)r20;
	label$cf601d9_4_156:
	if( r24 == NULL ) hl_null_access();
	r33 = r24->x;
	r33 = r33 + r30;
	r24->x = r33;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r11) < ((unsigned)r17) ) goto label$cf601d9_4_166;
	r24 = NULL;
	goto label$cf601d9_4_169;
	label$cf601d9_4_166:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r11];
	r24 = (h3d__col__Point)r20;
	label$cf601d9_4_169:
	if( r24 == NULL ) hl_null_access();
	r33 = r24->y;
	r33 = r33 + r31;
	r24->y = r33;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r11) < ((unsigned)r17) ) goto label$cf601d9_4_179;
	r24 = NULL;
	goto label$cf601d9_4_182;
	label$cf601d9_4_179:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r11];
	r24 = (h3d__col__Point)r20;
	label$cf601d9_4_182:
	if( r24 == NULL ) hl_null_access();
	r33 = r24->z;
	r33 = r33 + r32;
	r24->z = r33;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r14) < ((unsigned)r17) ) goto label$cf601d9_4_192;
	r24 = NULL;
	goto label$cf601d9_4_195;
	label$cf601d9_4_192:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r14];
	r24 = (h3d__col__Point)r20;
	label$cf601d9_4_195:
	if( r24 == NULL ) hl_null_access();
	r33 = r24->x;
	r33 = r33 + r30;
	r24->x = r33;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r14) < ((unsigned)r17) ) goto label$cf601d9_4_205;
	r24 = NULL;
	goto label$cf601d9_4_208;
	label$cf601d9_4_205:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r14];
	r24 = (h3d__col__Point)r20;
	label$cf601d9_4_208:
	if( r24 == NULL ) hl_null_access();
	r33 = r24->y;
	r33 = r33 + r31;
	r24->y = r33;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r14) < ((unsigned)r17) ) goto label$cf601d9_4_218;
	r24 = NULL;
	goto label$cf601d9_4_221;
	label$cf601d9_4_218:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r14];
	r24 = (h3d__col__Point)r20;
	label$cf601d9_4_221:
	if( r24 == NULL ) hl_null_access();
	r33 = r24->z;
	r33 = r33 + r32;
	r24->z = r33;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r15) < ((unsigned)r17) ) goto label$cf601d9_4_231;
	r24 = NULL;
	goto label$cf601d9_4_234;
	label$cf601d9_4_231:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r15];
	r24 = (h3d__col__Point)r20;
	label$cf601d9_4_234:
	if( r24 == NULL ) hl_null_access();
	r33 = r24->x;
	r33 = r33 + r30;
	r24->x = r33;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r15) < ((unsigned)r17) ) goto label$cf601d9_4_244;
	r24 = NULL;
	goto label$cf601d9_4_247;
	label$cf601d9_4_244:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r15];
	r24 = (h3d__col__Point)r20;
	label$cf601d9_4_247:
	if( r24 == NULL ) hl_null_access();
	r33 = r24->y;
	r33 = r33 + r31;
	r24->y = r33;
	r1 = r0->normals;
	if( r1 == NULL ) hl_null_access();
	r17 = r1->length;
	if( ((unsigned)r15) < ((unsigned)r17) ) goto label$cf601d9_4_257;
	r24 = NULL;
	goto label$cf601d9_4_260;
	label$cf601d9_4_257:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r15];
	r24 = (h3d__col__Point)r20;
	label$cf601d9_4_260:
	if( r24 == NULL ) hl_null_access();
	r33 = r24->z;
	r33 = r33 + r32;
	r24->z = r33;
	goto label$cf601d9_4_27;
	label$cf601d9_4_265:
	r4 = 0;
	r1 = r0->normals;
	label$cf601d9_4_267:
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	if( r4 >= r6 ) goto label$cf601d9_4_310;
	r6 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r6) ) goto label$cf601d9_4_275;
	r7 = NULL;
	goto label$cf601d9_4_278;
	label$cf601d9_4_275:
	r12 = r1->array;
	r20 = ((vdynamic**)(r12 + 1))[r4];
	r7 = (h3d__col__Point)r20;
	label$cf601d9_4_278:
	++r4;
	if( r7 == NULL ) hl_null_access();
	r23 = r7->x;
	r25 = r7->x;
	r23 = r23 * r25;
	r25 = r7->y;
	r26 = r7->y;
	r25 = r25 * r26;
	r23 = r23 + r25;
	r25 = r7->z;
	r26 = r7->z;
	r25 = r25 * r26;
	r23 = r23 + r25;
	r26 = 1e-010;
	if( !(r23 < r26) ) goto label$cf601d9_4_296;
	r25 = 0.;
	r23 = r25;
	goto label$cf601d9_4_300;
	label$cf601d9_4_296:
	r25 = 1.;
	r26 = hl_math_sqrt(r23);
	r25 = r25 / r26;
	r23 = r25;
	label$cf601d9_4_300:
	r25 = r7->x;
	r25 = r25 * r23;
	r7->x = r25;
	r25 = r7->y;
	r25 = r25 * r23;
	r7->y = r25;
	r25 = r7->z;
	r25 = r25 * r23;
	r7->z = r25;
	goto label$cf601d9_4_267;
	label$cf601d9_4_310:
	return;
}

int h3d_prim_Polygon_triCount(h3d__prim__Polygon r0) {
	hl__types__ArrayObj r6;
	hl__types__ArrayBytes_hl_UI16 r5;
	double r4, r7;
	int r1, r2, r3;
	r1 = h3d_prim_Primitive_triCount(((h3d__prim__Primitive)r0));
	r3 = 0;
	if( r1 == r3 ) goto label$cf601d9_5_4;
	return r1;
	label$cf601d9_5_4:
	r5 = r0->idx;
	if( r5 ) goto label$cf601d9_5_10;
	r6 = r0->points;
	if( r6 == NULL ) hl_null_access();
	r2 = r6->length;
	goto label$cf601d9_5_13;
	label$cf601d9_5_10:
	r5 = r0->idx;
	if( r5 == NULL ) hl_null_access();
	r2 = r5->length;
	label$cf601d9_5_13:
	r4 = (double)r2;
	r7 = 3.;
	r4 = r4 / r7;
	r2 = (int)r4;
	return r2;
}

void h3d_prim_Polygon_render(h3d__prim__Polygon r0,h3d__Engine r1) {
	vvirtual *r6;
	bool r4;
	h3d__impl__MemoryManager r13;
	h3d__BufferOffset r7;
	h3d__Buffer r3;
	int *r9, *r10;
	int r11, r12, r14, r15;
	h3d__Indexes r8;
	h3d__impl__ManagedBuffer r5;
	r3 = r0->buffer;
	if( !r3 ) goto label$cf601d9_6_14;
	r3 = r0->buffer;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->buffer;
	if( !r5 ) goto label$cf601d9_6_12;
	r5 = r3->buffer;
	if( r5 == NULL ) hl_null_access();
	r6 = r5->vbuf;
	if( !r6 ) goto label$cf601d9_6_12;
	r4 = false;
	goto label$cf601d9_6_13;
	label$cf601d9_6_12:
	r4 = true;
	label$cf601d9_6_13:
	goto label$cf601d9_6_15;
	label$cf601d9_6_14:
	r4 = true;
	label$cf601d9_6_15:
	if( !r4 ) goto label$cf601d9_6_17;
	h3d_prim_Polygon_alloc(r0,r1);
	label$cf601d9_6_17:
	r7 = h3d_prim_MeshPrimitive_getBuffers(((h3d__prim__MeshPrimitive)r0),r1);
	r8 = r0->indexes;
	if( !r8 ) goto label$cf601d9_6_26;
	if( r1 == NULL ) hl_null_access();
	r8 = r0->indexes;
	r9 = NULL;
	r10 = NULL;
	h3d_Engine_renderMultiBuffers(r1,r7,r8,r9,r10);
	goto label$cf601d9_6_52;
	label$cf601d9_6_26:
	r3 = r0->buffer;
	if( r3 == NULL ) hl_null_access();
	r11 = r3->flags;
	r12 = 4;
	r11 = r11 & r12;
	r12 = 0;
	if( r11 == r12 ) goto label$cf601d9_6_43;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->mem;
	if( r13 == NULL ) hl_null_access();
	r8 = r13->quadIndexes;
	r11 = 0;
	r9 = &r11;
	r12 = h3d_prim_Polygon_triCount(r0);
	r10 = &r12;
	h3d_Engine_renderMultiBuffers(r1,r7,r8,r9,r10);
	goto label$cf601d9_6_52;
	label$cf601d9_6_43:
	if( r1 == NULL ) hl_null_access();
	r13 = r1->mem;
	if( r13 == NULL ) hl_null_access();
	r8 = r13->triIndexes;
	r14 = 0;
	r9 = &r14;
	r15 = h3d_prim_Polygon_triCount(r0);
	r10 = &r15;
	h3d_Engine_renderMultiBuffers(r1,r7,r8,r9,r10);
	label$cf601d9_6_52:
	return;
}

