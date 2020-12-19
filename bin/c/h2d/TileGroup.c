﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/TileGroup.h>
void h2d_Drawable_new(h2d__Drawable,h2d__Object);
extern hl_type t$h3d_Vector;
void h3d_Vector_new(h3d__Vector,double*,double*,double*,double*);
extern hl_type t$h2d_TileLayerContent;
void h2d_TileLayerContent_new(h2d__TileLayerContent);
#include <h2d/col/Bounds.h>
void h2d_Object_getBoundsRec(h2d__Object,h2d__Object,h2d__col__Bounds,bool);
void h2d_Object_addBounds(h2d__Object,h2d__Object,h2d__col__Bounds,double,double,double,double);
void h2d_TileLayerContent_clear(h2d__TileLayerContent);
void h2d_TileLayerContent_dispose(h2d__TileLayerContent);
void h2d_Object_onRemove(h2d__Object);
#include <h2d/RenderContext.h>
void h2d_TileGroup_drawWith(h2d__TileGroup,h2d__RenderContext,h2d__Drawable);
#include <h3d/Buffer.h>
#include <h3d/Engine.h>
void h2d_Object_sync(h2d__Object,h2d__RenderContext);
bool h3d_Buffer_isDisposed(h3d__Buffer);
extern h3d__$Engine g$_h3d_Engine;
void h2d_TileLayerContent_alloc(h2d__TileLayerContent,h3d__Engine);
#include <h2d/impl/BatchDrawState.h>
int h2d_TileLayerContent_triCount(h2d__TileLayerContent);
bool h2d_RenderContext_beginDrawBatchState(h2d__RenderContext,h2d__Drawable);
void h2d_impl_BatchDrawState_drawQuads(h2d__impl__BatchDrawState,h2d__RenderContext,h3d__Buffer,int*,int*);

void h2d_TileGroup_new(h2d__TileGroup r0,h2d__Tile r1,h2d__Object r2) {
	h2d__TileLayerContent r14;
	h3d__Vector r5;
	double r6, r8, r10, r12;
	double *r7, *r9, *r11, *r13;
	int r4;
	h2d_Drawable_new(((h2d__Drawable)r0),r2);
	r0->tile = r1;
	r4 = -1;
	r0->rangeMax = r4;
	r0->rangeMin = r4;
	r5 = (h3d__Vector)hl_alloc_obj(&t$h3d_Vector);
	r4 = 1;
	r6 = (double)r4;
	r7 = &r6;
	r4 = 1;
	r8 = (double)r4;
	r9 = &r8;
	r4 = 1;
	r10 = (double)r4;
	r11 = &r10;
	r4 = 1;
	r12 = (double)r4;
	r13 = &r12;
	h3d_Vector_new(r5,r7,r9,r11,r13);
	r0->curColor = r5;
	r14 = (h2d__TileLayerContent)hl_alloc_obj(&t$h2d_TileLayerContent);
	h2d_TileLayerContent_new(r14);
	r0->content = r14;
	return;
}

void h2d_TileGroup_getBoundsRec(h2d__TileGroup r0,h2d__Object r1,h2d__col__Bounds r2,bool r3) {
	h2d__TileLayerContent r6;
	double r5, r7, r8, r9, r10;
	h2d_Object_getBoundsRec(((h2d__Object)r0),r1,r2,r3);
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->xMin;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r7 = r6->yMin;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->xMax;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->xMin;
	r8 = r8 - r9;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->yMax;
	r6 = r0->content;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->yMin;
	r9 = r9 - r10;
	h2d_Object_addBounds(((h2d__Object)r0),r1,r2,r5,r7,r8,r9);
	return;
}

void h2d_TileGroup_clear(h2d__TileGroup r0) {
	h2d__TileLayerContent r2;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	h2d_TileLayerContent_clear(r2);
	return;
}

void h2d_TileGroup_onRemove(h2d__TileGroup r0) {
	h2d__TileLayerContent r2;
	r2 = r0->content;
	if( r2 == NULL ) hl_null_access();
	h2d_TileLayerContent_dispose(r2);
	h2d_Object_onRemove(((h2d__Object)r0));
	return;
}

void h2d_TileGroup_setDefaultColor(h2d__TileGroup r0,int r1,double* r2) {
	h3d__Vector r4;
	double r3, r5, r8;
	int r6, r7;
	if( r2 ) goto label$daf1523_5_3;
	r3 = 1.;
	goto label$daf1523_5_4;
	label$daf1523_5_3:
	r3 = *r2;
	label$daf1523_5_4:
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r7 = 16;
	r6 = r1 >> r7;
	r7 = 255;
	r6 = r6 & r7;
	r5 = (double)r6;
	r8 = 255.;
	r5 = r5 / r8;
	r4->x = r5;
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r7 = 8;
	r6 = r1 >> r7;
	r7 = 255;
	r6 = r6 & r7;
	r5 = (double)r6;
	r8 = 255.;
	r5 = r5 / r8;
	r4->y = r5;
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r7 = 255;
	r6 = r1 & r7;
	r5 = (double)r6;
	r8 = 255.;
	r5 = r5 / r8;
	r4->z = r5;
	r4 = r0->curColor;
	if( r4 == NULL ) hl_null_access();
	r4->w = r3;
	return;
}

void h2d_TileGroup_draw(h2d__TileGroup r0,h2d__RenderContext r1) {
	h2d_TileGroup_drawWith(r0,r1,((h2d__Drawable)r0));
	return;
}

void h2d_TileGroup_sync(h2d__TileGroup r0,h2d__RenderContext r1) {
	h2d__TileLayerContent r4;
	bool r3;
	h3d__Engine r6;
	h3d__$Engine r7;
	h3d__Buffer r5;
	h2d_Object_sync(((h2d__Object)r0),r1);
	r3 = r0->visible;
	if( !r3 ) goto label$daf1523_7_14;
	r4 = r0->content;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->buffer;
	if( !r5 ) goto label$daf1523_7_11;
	r5 = r4->buffer;
	if( r5 == NULL ) hl_null_access();
	r3 = h3d_Buffer_isDisposed(r5);
	if( !r3 ) goto label$daf1523_7_14;
	label$daf1523_7_11:
	r7 = (h3d__$Engine)g$_h3d_Engine;
	r6 = r7->CURRENT;
	h2d_TileLayerContent_alloc(r4,r6);
	label$daf1523_7_14:
	return;
}

void h2d_TileGroup_drawWith(h2d__TileGroup r0,h2d__RenderContext r1,h2d__Drawable r2) {
	h2d__impl__BatchDrawState r14;
	h2d__TileLayerContent r4;
	bool r8;
	h3d__Engine r12;
	h3d__$Engine r13;
	h3d__Buffer r11;
	int *r15, *r16;
	int r3, r6, r7, r9, r10;
	r4 = r0->content;
	if( r4 == NULL ) hl_null_access();
	r3 = h2d_TileLayerContent_triCount(r4);
	r7 = 0;
	if( r3 != r7 ) goto label$daf1523_8_6;
	return;
	label$daf1523_8_6:
	if( r1 == NULL ) hl_null_access();
	r8 = h2d_RenderContext_beginDrawBatchState(r1,r2);
	if( r8 ) goto label$daf1523_8_10;
	return;
	label$daf1523_8_10:
	r6 = r0->rangeMin;
	r7 = 0;
	if( r6 >= r7 ) goto label$daf1523_8_15;
	r6 = 0;
	goto label$daf1523_8_18;
	label$daf1523_8_15:
	r6 = r0->rangeMin;
	r7 = 2;
	r6 = r6 * r7;
	label$daf1523_8_18:
	r7 = r0->rangeMax;
	r9 = 0;
	if( r9 >= r7 ) goto label$daf1523_8_29;
	r7 = r0->rangeMax;
	r10 = 2;
	r9 = r3 * r10;
	if( r7 >= r9 ) goto label$daf1523_8_29;
	r7 = r0->rangeMax;
	r9 = 2;
	r7 = r7 * r9;
	r3 = r7;
	label$daf1523_8_29:
	r4 = r0->content;
	if( r4 == NULL ) hl_null_access();
	r11 = r4->buffer;
	if( !r11 ) goto label$daf1523_8_37;
	r11 = r4->buffer;
	if( r11 == NULL ) hl_null_access();
	r8 = h3d_Buffer_isDisposed(r11);
	if( !r8 ) goto label$daf1523_8_40;
	label$daf1523_8_37:
	r13 = (h3d__$Engine)g$_h3d_Engine;
	r12 = r13->CURRENT;
	h2d_TileLayerContent_alloc(r4,r12);
	label$daf1523_8_40:
	r14 = r4->state;
	if( r14 == NULL ) hl_null_access();
	r11 = r4->buffer;
	r7 = r6;
	r15 = &r7;
	r9 = r3 - r6;
	r16 = &r9;
	h2d_impl_BatchDrawState_drawQuads(r14,r1,r11,r15,r16);
	return;
}

