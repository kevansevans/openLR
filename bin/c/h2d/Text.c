﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <h2d/Text.h>
#include <h2d/FontType.h>
#include <hxsl/Shader.h>
#include <h2d/Tile.h>
bool h2d_Drawable_removeShader(h2d__Drawable,hxsl__Shader);
extern hl_type t$h3d_shader_SignedDistanceField;
void h3d_shader_SignedDistanceField_new(h3d__shader__SignedDistanceField);
hxsl__Shader h2d_Drawable_addShader(h2d__Drawable,hxsl__Shader);
extern hl_type t$h2d_TileGroup;
void h2d_TileGroup_new(h2d__TileGroup,h2d__Tile,h2d__Object);
bool h2d_Object_set_visible(h2d__Object,bool);
void h2d_Text_rebuild(h2d__Text);
void h2d_Object_onAdd(h2d__Object);
#include <h2d/RenderContext.h>
void h2d_Object_sync(h2d__Object,h2d__RenderContext);
int String___compare(String,vdynamic*);
extern hl_type t$_i32;
h2d__Tile h2d_Tile_fromColor(int,vdynamic*,vdynamic*,vdynamic*);
void h2d_Drawable_emitTile(h2d__Drawable,h2d__RenderContext,h2d__Tile);
void h2d_TileGroup_drawWith(h2d__TileGroup,h2d__RenderContext,h2d__Drawable);
extern String s$null;
void h2d_Object_contentChanged(h2d__Object,h2d__Object);
#include <hl/types/ArrayBytes_Float.h>
#include <_std/Math.h>
#include <haxe/ds/IntMap.h>
#include <h2d/FontChar.h>
#include <hxd/Charset.h>
extern $Math g$_Math;
extern hl_type t$String;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
vdynamic* String_charCodeAt(String,int);
vdynamic* haxe_ds_IntMap_get(haxe__ds__IntMap,int);
vdynamic* hxd_Charset_resolveChar(hxd__Charset,int,haxe__ds__IntMap);
double h2d_FontChar_getKerningOffset(h2d__FontChar,int);
bool hxd_Charset_isBreakChar(hxd__Charset,int);
bool hxd_Charset_isComplementChar(hxd__Charset,int);
extern String s$;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
int hl_types_ArrayBytes_Float_push(hl__types__ArrayBytes_Float,double);
bool hxd_Charset_isSpace(hxd__Charset,int);
String String_substr(String,int,vdynamic*);
extern String s$68b329d;
String hl_types_ArrayObj_join(hl__types__ArrayObj,String);
#include <h2d/TileLayerContent.h>
void h2d_TileGroup_clear(h2d__TileGroup);
extern hl_type t$hl_types_ArrayBytes_Float;
void hl_types_ArrayBytes_Float_new(hl__types__ArrayBytes_Float);
extern venum* g$h2d_Align_MultilineCenter;
extern venum* g$h2d_Align_MultilineRight;
extern venum* g$h2d_Align_Center;
void hl_types_ArrayBytes_Float___expand(hl__types__ArrayBytes_Float,int);
void h2d_TileLayerContent_add(h2d__TileLayerContent,double,double,double,double,double,double,h2d__Tile);
void h2d_Text_updateConstraint(h2d__Text);
#include <h2d/col/Bounds.h>
void h2d_Object_getBoundsRec(h2d__Object,h2d__Object,h2d__col__Bounds,bool);
void h2d_Object_addBounds(h2d__Object,h2d__Object,h2d__col__Bounds,double,double,double,double);
void h2d_Drawable_new(h2d__Drawable,h2d__Object);
extern venum* g$h2d_Align_Left;

h2d__Font h2d_Text_set_font(h2d__Text r0,h2d__Font r1) {
	venum *r4;
	bool r7;
	h2d__Object r12;
	h2d__Tile r13;
	hxsl__Shader r10;
	h2d__Font r3;
	h3d__shader__SignedDistanceField r6;
	h2d__TileGroup r11;
	double r8, r9;
	int r5;
	r3 = r0->font;
	if( r3 != r1 ) goto label$7164f24_1_3;
	return r1;
	label$7164f24_1_3:
	r0->font = r1;
	if( !r1 ) goto label$7164f24_1_40;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->type;
	if( r4 == NULL ) hl_null_access();
	r5 = HL__ENUM_INDEX__(r4);
	switch(r5) {
		default:
			goto label$7164f24_1_40;
		case 0:
			r6 = r0->sdfShader;
			if( !r6 ) goto label$7164f24_1_17;
			r6 = r0->sdfShader;
			r7 = h2d_Drawable_removeShader(((h2d__Drawable)r0),((hxsl__Shader)r6));
			r6 = NULL;
			r0->sdfShader = r6;
			label$7164f24_1_17:
			goto label$7164f24_1_40;
		case 1:
			r8 = ((h2d_FontType_SignedDistanceField*)r4)->p2;
			r9 = ((h2d_FontType_SignedDistanceField*)r4)->p1;
			r5 = ((h2d_FontType_SignedDistanceField*)r4)->p0;
			r6 = r0->sdfShader;
			if( r6 ) goto label$7164f24_1_29;
			r6 = (h3d__shader__SignedDistanceField)hl_alloc_obj(&t$h3d_shader_SignedDistanceField);
			h3d_shader_SignedDistanceField_new(r6);
			r0->sdfShader = r6;
			r6 = r0->sdfShader;
			r10 = h2d_Drawable_addShader(((h2d__Drawable)r0),((hxsl__Shader)r6));
			r6 = (h3d__shader__SignedDistanceField)r10;
			label$7164f24_1_29:
			r6 = r0->sdfShader;
			if( r6 == NULL ) hl_null_access();
			r6->alphaCutoff__ = r9;
			r6 = r0->sdfShader;
			if( r6 == NULL ) hl_null_access();
			r6->smoothing__ = r8;
			r6 = r0->sdfShader;
			if( r6 == NULL ) hl_null_access();
			r7 = true;
			r6->constModified = r7;
			r6->channel__ = r5;
	}
	label$7164f24_1_40:
	r11 = r0->glyphs;
	if( !r11 ) goto label$7164f24_1_50;
	r11 = r0->glyphs;
	if( !r11 ) goto label$7164f24_1_50;
	if( r11 == NULL ) hl_null_access();
	r12 = r11->parent;
	if( !r12 ) goto label$7164f24_1_50;
	r12 = r11->parent;
	if( r12 == NULL ) hl_null_access();
	((void (*)(h2d__Object,h2d__TileGroup))r12->$type->vobj_proto[6])(r12,r11);
	label$7164f24_1_50:
	r11 = (h2d__TileGroup)hl_alloc_obj(&t$h2d_TileGroup);
	if( r1 ) goto label$7164f24_1_54;
	r13 = NULL;
	goto label$7164f24_1_56;
	label$7164f24_1_54:
	if( r1 == NULL ) hl_null_access();
	r13 = r1->tile;
	label$7164f24_1_56:
	h2d_TileGroup_new(r11,r13,((h2d__Object)r0));
	r0->glyphs = r11;
	r11 = r0->glyphs;
	if( r11 == NULL ) hl_null_access();
	r7 = false;
	r7 = h2d_Object_set_visible(((h2d__Object)r11),r7);
	h2d_Text_rebuild(r0);
	return r1;
}

venum* h2d_Text_set_textAlign(h2d__Text r0,venum* r1) {
	venum *r3;
	r3 = r0->textAlign;
	if( r3 != r1 ) goto label$7164f24_2_3;
	return r1;
	label$7164f24_2_3:
	r0->textAlign = r1;
	h2d_Text_rebuild(r0);
	return r1;
}

void h2d_Text_onAdd(h2d__Text r0) {
	h2d_Object_onAdd(((h2d__Object)r0));
	h2d_Text_rebuild(r0);
	return;
}

void h2d_Text_sync(h2d__Text r0,h2d__RenderContext r1) {
	bool *r6;
	String r4, r5;
	bool r3;
	h2d_Object_sync(((h2d__Object)r0),r1);
	r3 = r0->textChanged;
	if( !r3 ) goto label$7164f24_4_14;
	r4 = r0->text;
	r5 = r0->currentText;
	if( r4 == r5 || (r4 && r5 && String___compare(r4,(vdynamic*)r5) == 0) ) goto label$7164f24_4_14;
	r3 = false;
	r0->textChanged = r3;
	r4 = r0->text;
	r0->currentText = r4;
	r3 = false;
	r0->calcDone = r3;
	r3 = true;
	r0->needsRebuild = r3;
	label$7164f24_4_14:
	r3 = r0->needsRebuild;
	if( !r3 ) goto label$7164f24_4_19;
	r4 = r0->currentText;
	r6 = NULL;
	((void (*)(h2d__Text,String,bool*))r0->$type->vobj_proto[18])(r0,r4,r6);
	label$7164f24_4_19:
	return;
}

void h2d_Text_draw(h2d__Text r0,h2d__RenderContext r1) {
	bool *r13;
	String r11, r12;
	vvirtual *r14;
	bool r10;
	h2d__Tile r4;
	h3d__Vector r21;
	double r15, r16, r17, r18, r19, r20, r22, r24;
	h2d__TileGroup r3;
	vdynamic *r7, *r8, *r9;
	int r5, r6, r23;
	r3 = r0->glyphs;
	if( r3 ) goto label$7164f24_5_11;
	r5 = 16711935;
	r6 = 16;
	r7 = hl_alloc_dynamic(&t$_i32);
	r7->v.i = r6;
	r6 = 16;
	r8 = hl_alloc_dynamic(&t$_i32);
	r8->v.i = r6;
	r9 = NULL;
	r4 = h2d_Tile_fromColor(r5,r7,r8,r9);
	h2d_Drawable_emitTile(((h2d__Drawable)r0),r1,r4);
	return;
	label$7164f24_5_11:
	r10 = r0->textChanged;
	if( !r10 ) goto label$7164f24_5_24;
	r11 = r0->text;
	r12 = r0->currentText;
	if( r11 == r12 || (r11 && r12 && String___compare(r11,(vdynamic*)r12) == 0) ) goto label$7164f24_5_24;
	r10 = false;
	r0->textChanged = r10;
	r11 = r0->text;
	r0->currentText = r11;
	r10 = false;
	r0->calcDone = r10;
	r10 = true;
	r0->needsRebuild = r10;
	label$7164f24_5_24:
	r10 = r0->needsRebuild;
	if( !r10 ) goto label$7164f24_5_29;
	r11 = r0->currentText;
	r13 = NULL;
	((void (*)(h2d__Text,String,bool*))r0->$type->vobj_proto[18])(r0,r11,r13);
	label$7164f24_5_29:
	r14 = r0->dropShadow;
	if( !r14 ) goto label$7164f24_5_124;
	r15 = r0->absX;
	r16 = r0->absY;
	r17 = r0->absX;
	r14 = r0->dropShadow;
	if( r14 == NULL ) hl_null_access();
	r18 = hl_vfields(r14)[2] ? (*(double*)(hl_vfields(r14)[2])) : (double)hl_dyn_getd(r14->value,22420/*dx*/);
	r19 = r0->matA;
	r18 = r18 * r19;
	r14 = r0->dropShadow;
	if( r14 == NULL ) hl_null_access();
	r19 = hl_vfields(r14)[3] ? (*(double*)(hl_vfields(r14)[3])) : (double)hl_dyn_getd(r14->value,22421/*dy*/);
	r20 = r0->matC;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r17 = r17 + r18;
	r0->absX = r17;
	r17 = r0->absY;
	r14 = r0->dropShadow;
	if( r14 == NULL ) hl_null_access();
	r18 = hl_vfields(r14)[2] ? (*(double*)(hl_vfields(r14)[2])) : (double)hl_dyn_getd(r14->value,22420/*dx*/);
	r19 = r0->matB;
	r18 = r18 * r19;
	r14 = r0->dropShadow;
	if( r14 == NULL ) hl_null_access();
	r19 = hl_vfields(r14)[3] ? (*(double*)(hl_vfields(r14)[3])) : (double)hl_dyn_getd(r14->value,22421/*dy*/);
	r20 = r0->matD;
	r19 = r19 * r20;
	r18 = r18 + r19;
	r17 = r17 + r18;
	r0->absY = r17;
	r21 = r0->color;
	if( r21 == NULL ) hl_null_access();
	r17 = r21->x;
	r21 = r0->color;
	if( r21 == NULL ) hl_null_access();
	r18 = r21->y;
	r21 = r0->color;
	if( r21 == NULL ) hl_null_access();
	r19 = r21->z;
	r21 = r0->color;
	if( r21 == NULL ) hl_null_access();
	r20 = r21->w;
	r21 = r0->color;
	r14 = r0->dropShadow;
	if( r14 == NULL ) hl_null_access();
	r5 = hl_vfields(r14)[1] ? (*(int*)(hl_vfields(r14)[1])) : (int)hl_dyn_geti(r14->value,173830765/*color*/,&t$_i32);
	if( r21 == NULL ) hl_null_access();
	r23 = 16;
	r6 = r5 >> r23;
	r23 = 255;
	r6 = r6 & r23;
	r22 = (double)r6;
	r24 = 255.;
	r22 = r22 / r24;
	r21->x = r22;
	r23 = 8;
	r6 = r5 >> r23;
	r23 = 255;
	r6 = r6 & r23;
	r22 = (double)r6;
	r24 = 255.;
	r22 = r22 / r24;
	r21->y = r22;
	r23 = 255;
	r6 = r5 & r23;
	r22 = (double)r6;
	r24 = 255.;
	r22 = r22 / r24;
	r21->z = r22;
	r23 = 24;
	r6 = ((unsigned)r5) >> r23;
	r22 = (double)r6;
	r24 = 255.;
	r22 = r22 / r24;
	r21->w = r22;
	r21 = r0->color;
	if( r21 == NULL ) hl_null_access();
	r14 = r0->dropShadow;
	if( r14 == NULL ) hl_null_access();
	r22 = hl_vfields(r14)[0] ? (*(double*)(hl_vfields(r14)[0])) : (double)hl_dyn_getd(r14->value,26650595/*alpha*/);
	r22 = r22 * r20;
	r21->w = r22;
	r3 = r0->glyphs;
	if( r3 == NULL ) hl_null_access();
	h2d_TileGroup_drawWith(r3,r1,((h2d__Drawable)r0));
	r0->absX = r15;
	r0->absY = r16;
	r21 = r0->color;
	if( r21 == NULL ) hl_null_access();
	r21->x = r17;
	r21->y = r18;
	r21->z = r19;
	r21->w = r20;
	label$7164f24_5_124:
	r3 = r0->glyphs;
	if( r3 == NULL ) hl_null_access();
	h2d_TileGroup_drawWith(r3,r1,((h2d__Drawable)r0));
	return;
}

String h2d_Text_set_text(h2d__Text r0,String r1) {
	String r2, r4;
	bool r5;
	h2d__Object r6;
	if( r1 ) goto label$7164f24_6_3;
	r2 = (String)s$null;
	goto label$7164f24_6_4;
	label$7164f24_6_3:
	r2 = r1;
	label$7164f24_6_4:
	r4 = r0->text;
	if( r2 != r4 && (!r2 || !r4 || String___compare(r2,(vdynamic*)r4) != 0) ) goto label$7164f24_6_7;
	return r2;
	label$7164f24_6_7:
	r0->text = r2;
	r5 = true;
	r0->textChanged = r5;
	((void (*)(h2d__Text))r0->$type->vobj_proto[17])(r0);
	r6 = r0->parentContainer;
	if( !r6 ) goto label$7164f24_6_16;
	r6 = r0->parentContainer;
	if( r6 == NULL ) hl_null_access();
	h2d_Object_contentChanged(r6,((h2d__Object)r0));
	label$7164f24_6_16:
	return r2;
}

void h2d_Text_validateText(h2d__Text r0) {
	return;
}

void h2d_Text_rebuild(h2d__Text r0) {
	bool r1;
	h2d__Object r3;
	r1 = false;
	r0->calcDone = r1;
	r1 = true;
	r0->needsRebuild = r1;
	r3 = r0->parentContainer;
	if( !r3 ) goto label$7164f24_8_9;
	r3 = r0->parentContainer;
	if( r3 == NULL ) hl_null_access();
	h2d_Object_contentChanged(r3,((h2d__Object)r0));
	label$7164f24_8_9:
	return;
}

double h2d_Text_calcTextWidth(h2d__Text r0,String r1) {
	bool *r9;
	bool r3, r11, r12;
	double r4, r5, r6, r7, r8, r10;
	r3 = r0->calcDone;
	if( !r3 ) goto label$7164f24_9_17;
	r4 = r0->calcWidth;
	r5 = r0->calcHeight;
	r6 = r0->calcSizeHeight;
	r7 = r0->calcXMin;
	r8 = r0->calcYMin;
	r3 = false;
	r9 = &r3;
	((void (*)(h2d__Text,String,bool*))r0->$type->vobj_proto[18])(r0,r1,r9);
	r10 = r0->calcWidth;
	r0->calcWidth = r4;
	r0->calcHeight = r5;
	r0->calcSizeHeight = r6;
	r0->calcXMin = r7;
	r0->calcYMin = r8;
	return r10;
	label$7164f24_9_17:
	r11 = false;
	r9 = &r11;
	((void (*)(h2d__Text,String,bool*))r0->$type->vobj_proto[18])(r0,r1,r9);
	r12 = false;
	r0->calcDone = r12;
	r4 = r0->calcWidth;
	return r4;
}

String h2d_Text_splitRawText(h2d__Text r0,String r1,double* r2,double* r3,h2d__Font r4,hl__types__ArrayBytes_Float r5,vdynamic* r6) {
	String r13;
	hxd__Charset r30;
	hl__types__ArrayObj r17;
	hl_type *r19;
	bool r32, r36, r42;
	haxe__ds__IntMap r26;
	h2d__Font r16;
	$Math r15;
	h2d__FontChar r28, r29, r34, r45;
	double r7, r8, r10, r11, r12, r35, r37, r38, r47;
	vdynamic *r14, *r24, *r25, *r33, *r41, *r43, *r44;
	varray *r18;
	int r9, r20, r21, r22, r23, r27, r31, r39, r40, r46;
	if( r2 ) goto label$7164f24_10_3;
	r7 = 0.;
	goto label$7164f24_10_4;
	label$7164f24_10_3:
	r7 = *r2;
	label$7164f24_10_4:
	if( r3 ) goto label$7164f24_10_7;
	r8 = 0.;
	goto label$7164f24_10_8;
	label$7164f24_10_7:
	r8 = *r3;
	label$7164f24_10_8:
	if( r6 ) goto label$7164f24_10_11;
	r9 = -1;
	r6 = hl_alloc_dynamic(&t$_i32);
	r6->v.i = r9;
	label$7164f24_10_11:
	r10 = r0->realMaxWidth;
	r12 = 0.;
	if( !(r10 < r12) ) goto label$7164f24_10_19;
	if( r5 ) goto label$7164f24_10_16;
	return r1;
	label$7164f24_10_16:
	r15 = ($Math)g$_Math;
	r11 = r15->POSITIVE_INFINITY;
	r10 = r11;
	label$7164f24_10_19:
	if( r4 ) goto label$7164f24_10_22;
	r16 = r0->font;
	r4 = r16;
	label$7164f24_10_22:
	r19 = &t$String;
	r9 = 0;
	r18 = hl_alloc_array(r19,r9);
	r17 = hl_types_ArrayObj_alloc(r18);
	r9 = 0;
	r11 = r7;
	r20 = 0;
	if( r1 == NULL ) hl_null_access();
	r21 = r1->length;
	label$7164f24_10_31:
	if( r20 >= r21 ) goto label$7164f24_10_225;
	r22 = r20;
	++r20;
	if( r1 == NULL ) hl_null_access();
	r24 = String_charCodeAt(r1,r22);
	r23 = r24 ? r24->v.i : 0;
	if( r4 == NULL ) hl_null_access();
	r26 = r4->glyphs;
	if( r26 == NULL ) hl_null_access();
	r14 = haxe_ds_IntMap_get(r26,r23);
	r28 = (h2d__FontChar)r14;
	if( r28 ) goto label$7164f24_10_59;
	r30 = r4->charset;
	if( r30 == NULL ) hl_null_access();
	r26 = r4->glyphs;
	r14 = hxd_Charset_resolveChar(r30,r23,r26);
	r29 = (h2d__FontChar)r14;
	r28 = r29;
	if( r29 ) goto label$7164f24_10_59;
	r31 = 13;
	if( r23 == r31 ) goto label$7164f24_10_55;
	r31 = 10;
	if( r23 != r31 ) goto label$7164f24_10_57;
	label$7164f24_10_55:
	r29 = r4->nullChar;
	goto label$7164f24_10_58;
	label$7164f24_10_57:
	r29 = r4->defaultChar;
	label$7164f24_10_58:
	r28 = r29;
	label$7164f24_10_59:
	r29 = r28;
	r27 = 10;
	r33 = hl_alloc_dynamic(&t$_i32);
	r33->v.i = r27;
	if( r24 == r33 || (r24 && r33 && (r24->v.i == r33->v.i)) ) goto label$7164f24_10_65;
	r32 = false;
	goto label$7164f24_10_66;
	label$7164f24_10_65:
	r32 = true;
	label$7164f24_10_66:
	if( r28 == NULL ) hl_null_access();
	r12 = r28->width;
	r27 = r6 ? r6->v.i : 0;
	r35 = h2d_FontChar_getKerningOffset(r28,r27);
	r12 = r12 + r35;
	r31 = 1;
	r27 = r22 + r31;
	r25 = String_charCodeAt(r1,r27);
	r30 = r4->charset;
	if( r30 == NULL ) hl_null_access();
	r27 = r24 ? r24->v.i : 0;
	r36 = hxd_Charset_isBreakChar(r30,r27);
	if( !r36 ) goto label$7164f24_10_205;
	if( !r25 ) goto label$7164f24_10_85;
	r30 = r4->charset;
	if( r30 == NULL ) hl_null_access();
	r27 = r25 ? r25->v.i : 0;
	r36 = hxd_Charset_isComplementChar(r30,r27);
	if( r36 ) goto label$7164f24_10_205;
	label$7164f24_10_85:
	if( r17 == NULL ) hl_null_access();
	r27 = r17->length;
	r31 = 0;
	if( r27 != r31 ) goto label$7164f24_10_99;
	r37 = 0.;
	if( !(r37 < r7) ) goto label$7164f24_10_99;
	if( !(r10 < r11) ) goto label$7164f24_10_99;
	r13 = (String)s$;
	r27 = hl_types_ArrayObj_push(r17,((vdynamic*)r13));
	if( !r5 ) goto label$7164f24_10_97;
	if( r5 == NULL ) hl_null_access();
	r27 = hl_types_ArrayBytes_Float_push(r5,r7);
	label$7164f24_10_97:
	r35 = r11 - r7;
	r11 = r35;
	label$7164f24_10_99:
	r35 = r11 + r12;
	r37 = r0->letterSpacing;
	r35 = r35 + r37;
	r31 = 1;
	r27 = r22 + r31;
	r31 = r1->length;
	r33 = r6;
	r36 = false;
	label$7164f24_10_107:
	if( !(r10 >= r35) ) goto label$7164f24_10_173;
	if( r27 >= r31 ) goto label$7164f24_10_173;
	if( r1 == NULL ) hl_null_access();
	r39 = r27;
	++r27;
	r41 = String_charCodeAt(r1,r39);
	if( r4 == NULL ) hl_null_access();
	r30 = r4->charset;
	if( r30 == NULL ) hl_null_access();
	r39 = r41 ? r41->v.i : 0;
	r42 = hxd_Charset_isSpace(r30,r39);
	if( r42 ) goto label$7164f24_10_123;
	r39 = 10;
	r44 = hl_alloc_dynamic(&t$_i32);
	r44->v.i = r39;
	if( r41 != r44 && (!r41 || !r44 || (r41->v.i != r44->v.i)) ) goto label$7164f24_10_126;
	label$7164f24_10_123:
	r42 = true;
	r36 = r42;
	goto label$7164f24_10_173;
	label$7164f24_10_126:
	r39 = r41 ? r41->v.i : 0;
	r26 = r4->glyphs;
	if( r26 == NULL ) hl_null_access();
	r14 = haxe_ds_IntMap_get(r26,r39);
	r34 = (h2d__FontChar)r14;
	if( r34 ) goto label$7164f24_10_147;
	r30 = r4->charset;
	if( r30 == NULL ) hl_null_access();
	r26 = r4->glyphs;
	r14 = hxd_Charset_resolveChar(r30,r39,r26);
	r45 = (h2d__FontChar)r14;
	r34 = r45;
	if( r45 ) goto label$7164f24_10_147;
	r46 = 13;
	if( r39 == r46 ) goto label$7164f24_10_143;
	r46 = 10;
	if( r39 != r46 ) goto label$7164f24_10_145;
	label$7164f24_10_143:
	r45 = r4->nullChar;
	goto label$7164f24_10_146;
	label$7164f24_10_145:
	r45 = r4->defaultChar;
	label$7164f24_10_146:
	r34 = r45;
	label$7164f24_10_147:
	if( r34 == NULL ) hl_null_access();
	r38 = r34->width;
	r47 = r0->letterSpacing;
	r38 = r38 + r47;
	r40 = r33 ? r33->v.i : 0;
	r47 = h2d_FontChar_getKerningOffset(r34,r40);
	r38 = r38 + r47;
	r37 = r35 + r38;
	r35 = r37;
	r33 = r41;
	r46 = 1;
	r40 = r27 + r46;
	r43 = String_charCodeAt(r1,r40);
	r30 = r4->charset;
	if( r30 == NULL ) hl_null_access();
	r40 = r41 ? r41->v.i : 0;
	r42 = hxd_Charset_isBreakChar(r30,r40);
	if( !r42 ) goto label$7164f24_10_172;
	if( !r43 ) goto label$7164f24_10_171;
	r30 = r4->charset;
	if( r30 == NULL ) hl_null_access();
	r40 = r43 ? r43->v.i : 0;
	r42 = hxd_Charset_isComplementChar(r30,r40);
	if( r42 ) goto label$7164f24_10_172;
	label$7164f24_10_171:
	goto label$7164f24_10_173;
	label$7164f24_10_172:
	goto label$7164f24_10_107;
	label$7164f24_10_173:
	if( r10 < r35 ) goto label$7164f24_10_177;
	if( r36 ) goto label$7164f24_10_205;
	r37 = r35 + r8;
	if( !(r10 < r37) ) goto label$7164f24_10_205;
	label$7164f24_10_177:
	r42 = true;
	r32 = r42;
	if( r4 == NULL ) hl_null_access();
	r30 = r4->charset;
	if( r30 == NULL ) hl_null_access();
	r39 = r24 ? r24->v.i : 0;
	r42 = hxd_Charset_isSpace(r30,r39);
	if( !r42 ) goto label$7164f24_10_194;
	if( r17 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r40 = r22 - r9;
	r41 = hl_alloc_dynamic(&t$_i32);
	r41->v.i = r40;
	r13 = String_substr(r1,r9,r41);
	r39 = hl_types_ArrayObj_push(r17,((vdynamic*)r13));
	r34 = NULL;
	r29 = r34;
	goto label$7164f24_10_202;
	label$7164f24_10_194:
	if( r17 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r46 = 1;
	r40 = r22 + r46;
	r40 = r40 - r9;
	r41 = hl_alloc_dynamic(&t$_i32);
	r41->v.i = r40;
	r13 = String_substr(r1,r9,r41);
	r39 = hl_types_ArrayObj_push(r17,((vdynamic*)r13));
	label$7164f24_10_202:
	r40 = 1;
	r39 = r22 + r40;
	r9 = r39;
	label$7164f24_10_205:
	if( !r29 ) goto label$7164f24_10_213;
	r27 = 10;
	r41 = hl_alloc_dynamic(&t$_i32);
	r41->v.i = r27;
	if( r24 == r41 || (r24 && r41 && (r24->v.i == r41->v.i)) ) goto label$7164f24_10_213;
	r38 = r0->letterSpacing;
	r37 = r12 + r38;
	r35 = r11 + r37;
	r11 = r35;
	label$7164f24_10_213:
	if( !r32 ) goto label$7164f24_10_223;
	if( !r5 ) goto label$7164f24_10_217;
	if( r5 == NULL ) hl_null_access();
	r27 = hl_types_ArrayBytes_Float_push(r5,r11);
	label$7164f24_10_217:
	r35 = 0.;
	r11 = r35;
	r27 = -1;
	r33 = hl_alloc_dynamic(&t$_i32);
	r33->v.i = r27;
	r6 = r33;
	goto label$7164f24_10_224;
	label$7164f24_10_223:
	r6 = r24;
	label$7164f24_10_224:
	goto label$7164f24_10_31;
	label$7164f24_10_225:
	if( r1 == NULL ) hl_null_access();
	r21 = r1->length;
	if( r9 >= r21 ) goto label$7164f24_10_253;
	if( r17 == NULL ) hl_null_access();
	r20 = r17->length;
	r21 = 0;
	if( r20 != r21 ) goto label$7164f24_10_245;
	r35 = 0.;
	if( !(r35 < r7) ) goto label$7164f24_10_245;
	r12 = r11 + r8;
	r35 = r0->letterSpacing;
	r12 = r12 - r35;
	if( !(r10 < r12) ) goto label$7164f24_10_245;
	r13 = (String)s$;
	r20 = hl_types_ArrayObj_push(r17,((vdynamic*)r13));
	if( !r5 ) goto label$7164f24_10_243;
	if( r5 == NULL ) hl_null_access();
	r20 = hl_types_ArrayBytes_Float_push(r5,r7);
	label$7164f24_10_243:
	r12 = r11 - r7;
	r11 = r12;
	label$7164f24_10_245:
	r21 = r1->length;
	r21 = r21 - r9;
	r24 = hl_alloc_dynamic(&t$_i32);
	r24->v.i = r21;
	r13 = String_substr(r1,r9,r24);
	r20 = hl_types_ArrayObj_push(r17,((vdynamic*)r13));
	if( !r5 ) goto label$7164f24_10_253;
	if( r5 == NULL ) hl_null_access();
	r20 = hl_types_ArrayBytes_Float_push(r5,r11);
	label$7164f24_10_253:
	if( r17 == NULL ) hl_null_access();
	r13 = (String)s$68b329d;
	r13 = hl_types_ArrayObj_join(r17,r13);
	return r13;
}

void h2d_Text_initGlyphs(h2d__Text r0,String r1,bool* r2) {
	String r19;
	hxd__Charset r40;
	h2d__TileLayerContent r43;
	venum *r14, *r31;
	bool r3, r5;
	haxe__ds__IntMap r37;
	h2d__Tile r49;
	h2d__Font r17;
	h3d__Vector r45;
	h2d__FontChar r38, r39;
	hl__types__ArrayBytes_Float r15;
	double r7, r8, r9, r10, r11, r16, r18, r22, r27, r29, r30, r42, r44, r46, r47, r48;
	h2d__TileGroup r6;
	vdynamic *r24, *r36, *r41;
	double *r21, *r23;
	vbyte *r28;
	int r12, r13, r20, r25, r26, r32, r33, r34, r35;
	if( r2 ) goto label$7164f24_11_3;
	r3 = true;
	goto label$7164f24_11_4;
	label$7164f24_11_3:
	r3 = *r2;
	label$7164f24_11_4:
	if( !r3 ) goto label$7164f24_11_8;
	r6 = r0->glyphs;
	if( r6 == NULL ) hl_null_access();
	h2d_TileGroup_clear(r6);
	label$7164f24_11_8:
	r7 = 0.;
	r8 = 0.;
	r9 = 0.;
	r10 = 0.;
	r11 = 0.;
	r12 = -1;
	r13 = 0;
	r14 = r0->textAlign;
	r15 = (hl__types__ArrayBytes_Float)hl_alloc_obj(&t$hl_types_ArrayBytes_Float);
	hl_types_ArrayBytes_Float_new(r15);
	r17 = r0->font;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->lineHeight;
	r18 = r0->lineSpacing;
	r16 = r16 + r18;
	r20 = 0;
	r18 = (double)r20;
	r21 = &r18;
	r20 = 0;
	r22 = (double)r20;
	r23 = &r22;
	r17 = NULL;
	r24 = NULL;
	r19 = h2d_Text_splitRawText(r0,r1,r21,r23,r17,r15,r24);
	r20 = 0;
	label$7164f24_11_33:
	if( r15 == NULL ) hl_null_access();
	r26 = r15->length;
	if( r20 >= r26 ) goto label$7164f24_11_49;
	r26 = r15->length;
	if( ((unsigned)r20) < ((unsigned)r26) ) goto label$7164f24_11_41;
	r27 = 0.;
	goto label$7164f24_11_45;
	label$7164f24_11_41:
	r28 = r15->bytes;
	r26 = 3;
	r26 = r20 << r26;
	r27 = *(double*)(r28 + r26);
	label$7164f24_11_45:
	++r20;
	if( !(r7 < r27) ) goto label$7164f24_11_48;
	r7 = r27;
	label$7164f24_11_48:
	goto label$7164f24_11_33;
	label$7164f24_11_49:
	r0->calcWidth = r7;
	if( r14 == NULL ) hl_null_access();
	r20 = HL__ENUM_INDEX__(r14);
	switch(r20) {
		default:
			goto label$7164f24_11_117;
		case 0:
			r27 = 0.;
			r7 = r27;
			goto label$7164f24_11_117;
		case 1:
		case 2:
		case 3:
		case 4:
			r31 = (venum*)g$h2d_Align_MultilineCenter;
			if( r14 == r31 ) goto label$7164f24_11_61;
			r31 = (venum*)g$h2d_Align_MultilineRight;
			if( r14 != r31 ) goto label$7164f24_11_64;
			label$7164f24_11_61:
			r27 = r0->calcWidth;
			r20 = hl_math_ceil(r27);
			goto label$7164f24_11_71;
			label$7164f24_11_64:
			r27 = r0->realMaxWidth;
			r29 = 0.;
			if( !(r27 < r29) ) goto label$7164f24_11_69;
			r20 = 0;
			goto label$7164f24_11_71;
			label$7164f24_11_69:
			r27 = r0->realMaxWidth;
			r20 = hl_math_ceil(r27);
			label$7164f24_11_71:
			r31 = (venum*)g$h2d_Align_Center;
			if( r14 == r31 ) goto label$7164f24_11_75;
			r31 = (venum*)g$h2d_Align_MultilineCenter;
			if( r14 != r31 ) goto label$7164f24_11_77;
			label$7164f24_11_75:
			r27 = 0.5;
			goto label$7164f24_11_78;
			label$7164f24_11_77:
			r27 = 1.;
			label$7164f24_11_78:
			r25 = 0;
			r26 = r15->length;
			label$7164f24_11_80:
			if( r25 >= r26 ) goto label$7164f24_11_105;
			r32 = r25;
			++r25;
			if( r15 == NULL ) hl_null_access();
			r29 = (double)r20;
			r35 = r15->length;
			if( ((unsigned)r32) < ((unsigned)r35) ) goto label$7164f24_11_90;
			r30 = 0.;
			goto label$7164f24_11_94;
			label$7164f24_11_90:
			r28 = r15->bytes;
			r35 = 3;
			r35 = r32 << r35;
			r30 = *(double*)(r28 + r35);
			label$7164f24_11_94:
			r29 = r29 - r30;
			r29 = r29 * r27;
			r29 = hl_math_ffloor(r29);
			r34 = r15->length;
			if( ((unsigned)r32) < ((unsigned)r34) ) goto label$7164f24_11_100;
			hl_types_ArrayBytes_Float___expand(r15,r32);
			label$7164f24_11_100:
			r28 = r15->bytes;
			r34 = 3;
			r34 = r32 << r34;
			*(double*)(r28 + r34) = r29;
			goto label$7164f24_11_80;
			label$7164f24_11_105:
			if( r15 == NULL ) hl_null_access();
			r25 = 0;
			r26 = r15->length;
			if( ((unsigned)r25) < ((unsigned)r26) ) goto label$7164f24_11_111;
			r29 = 0.;
			goto label$7164f24_11_115;
			label$7164f24_11_111:
			r28 = r15->bytes;
			r26 = 3;
			r26 = r25 << r26;
			r29 = *(double*)(r28 + r26);
			label$7164f24_11_115:
			r7 = r29;
			r10 = r29;
	}
	label$7164f24_11_117:
	r20 = 0;
	if( r19 == NULL ) hl_null_access();
	r25 = r19->length;
	label$7164f24_11_120:
	if( r20 >= r25 ) goto label$7164f24_11_221;
	r26 = r20;
	++r20;
	if( r19 == NULL ) hl_null_access();
	r24 = String_charCodeAt(r19,r26);
	r17 = r0->font;
	r32 = r24 ? r24->v.i : 0;
	if( r17 == NULL ) hl_null_access();
	r37 = r17->glyphs;
	if( r37 == NULL ) hl_null_access();
	r36 = haxe_ds_IntMap_get(r37,r32);
	r38 = (h2d__FontChar)r36;
	if( r38 ) goto label$7164f24_11_149;
	r40 = r17->charset;
	if( r40 == NULL ) hl_null_access();
	r37 = r17->glyphs;
	r36 = hxd_Charset_resolveChar(r40,r32,r37);
	r39 = (h2d__FontChar)r36;
	r38 = r39;
	if( r39 ) goto label$7164f24_11_149;
	r34 = 13;
	if( r32 == r34 ) goto label$7164f24_11_145;
	r34 = 10;
	if( r32 != r34 ) goto label$7164f24_11_147;
	label$7164f24_11_145:
	r39 = r17->nullChar;
	goto label$7164f24_11_148;
	label$7164f24_11_147:
	r39 = r17->defaultChar;
	label$7164f24_11_148:
	r38 = r39;
	label$7164f24_11_149:
	if( r38 == NULL ) hl_null_access();
	r27 = h2d_FontChar_getKerningOffset(r38,r12);
	r29 = r38->width;
	r29 = r29 + r27;
	r33 = 10;
	r41 = hl_alloc_dynamic(&t$_i32);
	r41->v.i = r33;
	if( r24 != r41 && (!r24 || !r41 || (r24->v.i != r41->v.i)) ) goto label$7164f24_11_183;
	if( !(r9 < r7) ) goto label$7164f24_11_158;
	r9 = r7;
	label$7164f24_11_158:
	if( r14 == NULL ) hl_null_access();
	r33 = HL__ENUM_INDEX__(r14);
	switch(r33) {
		default:
			goto label$7164f24_11_178;
		case 0:
			r30 = 0.;
			r7 = r30;
			goto label$7164f24_11_178;
		case 1:
		case 2:
		case 3:
		case 4:
			if( r15 == NULL ) hl_null_access();
			++r13;
			r33 = r15->length;
			if( ((unsigned)r13) < ((unsigned)r33) ) goto label$7164f24_11_171;
			r30 = 0.;
			goto label$7164f24_11_175;
			label$7164f24_11_171:
			r28 = r15->bytes;
			r33 = 3;
			r33 = r13 << r33;
			r30 = *(double*)(r28 + r33);
			label$7164f24_11_175:
			r7 = r30;
			if( !(r30 < r10) ) goto label$7164f24_11_178;
			r10 = r30;
	}
	label$7164f24_11_178:
	r30 = r8 + r16;
	r8 = r30;
	r33 = -1;
	r12 = r33;
	goto label$7164f24_11_220;
	label$7164f24_11_183:
	if( !r38 ) goto label$7164f24_11_218;
	if( !r3 ) goto label$7164f24_11_204;
	r6 = r0->glyphs;
	if( r6 == NULL ) hl_null_access();
	r43 = r6->content;
	if( r43 == NULL ) hl_null_access();
	r30 = r7 + r27;
	r45 = r6->curColor;
	if( r45 == NULL ) hl_null_access();
	r44 = r45->x;
	r45 = r6->curColor;
	if( r45 == NULL ) hl_null_access();
	r46 = r45->y;
	r45 = r6->curColor;
	if( r45 == NULL ) hl_null_access();
	r47 = r45->z;
	r45 = r6->curColor;
	if( r45 == NULL ) hl_null_access();
	r48 = r45->w;
	r49 = r38->_t;
	h2d_TileLayerContent_add(r43,r30,r8,r44,r46,r47,r48,r49);
	label$7164f24_11_204:
	r42 = 0.;
	if( r8 != r42 ) goto label$7164f24_11_214;
	r49 = r38->_t;
	if( r49 == NULL ) hl_null_access();
	r30 = r49->dy;
	if( !(r30 < r11) ) goto label$7164f24_11_214;
	r49 = r38->_t;
	if( r49 == NULL ) hl_null_access();
	r30 = r49->dy;
	r11 = r30;
	label$7164f24_11_214:
	r44 = r0->letterSpacing;
	r42 = r29 + r44;
	r30 = r7 + r42;
	r7 = r30;
	label$7164f24_11_218:
	r33 = r24 ? r24->v.i : 0;
	r12 = r33;
	label$7164f24_11_220:
	goto label$7164f24_11_120;
	label$7164f24_11_221:
	if( !(r9 < r7) ) goto label$7164f24_11_223;
	r9 = r7;
	label$7164f24_11_223:
	r0->calcXMin = r10;
	r0->calcYMin = r11;
	r27 = r9 - r10;
	r0->calcWidth = r27;
	r17 = r0->font;
	if( r17 == NULL ) hl_null_access();
	r29 = r17->lineHeight;
	r27 = r8 + r29;
	r0->calcHeight = r27;
	r17 = r0->font;
	if( r17 == NULL ) hl_null_access();
	r29 = r17->baseLine;
	r30 = 0.;
	if( !(r30 < r29) ) goto label$7164f24_11_241;
	r17 = r0->font;
	if( r17 == NULL ) hl_null_access();
	r29 = r17->baseLine;
	goto label$7164f24_11_244;
	label$7164f24_11_241:
	r17 = r0->font;
	if( r17 == NULL ) hl_null_access();
	r29 = r17->lineHeight;
	label$7164f24_11_244:
	r27 = r8 + r29;
	r0->calcSizeHeight = r27;
	r5 = true;
	r0->calcDone = r5;
	if( !r3 ) goto label$7164f24_11_251;
	r5 = false;
	r0->needsRebuild = r5;
	label$7164f24_11_251:
	return;
}

double h2d_Text_get_textHeight(h2d__Text r0) {
	bool *r5;
	String r3, r4;
	bool r2;
	double r6;
	r2 = r0->textChanged;
	if( !r2 ) goto label$7164f24_12_13;
	r3 = r0->text;
	r4 = r0->currentText;
	if( r3 == r4 || (r3 && r4 && String___compare(r3,(vdynamic*)r4) == 0) ) goto label$7164f24_12_13;
	r2 = false;
	r0->textChanged = r2;
	r3 = r0->text;
	r0->currentText = r3;
	r2 = false;
	r0->calcDone = r2;
	r2 = true;
	r0->needsRebuild = r2;
	label$7164f24_12_13:
	r2 = r0->calcDone;
	if( r2 ) goto label$7164f24_12_19;
	r3 = r0->text;
	r2 = r0->needsRebuild;
	r5 = &r2;
	((void (*)(h2d__Text,String,bool*))r0->$type->vobj_proto[18])(r0,r3,r5);
	label$7164f24_12_19:
	r6 = r0->calcHeight;
	return r6;
}

double h2d_Text_get_textWidth(h2d__Text r0) {
	bool *r5;
	String r3, r4;
	bool r2;
	double r6;
	r2 = r0->textChanged;
	if( !r2 ) goto label$7164f24_13_13;
	r3 = r0->text;
	r4 = r0->currentText;
	if( r3 == r4 || (r3 && r4 && String___compare(r3,(vdynamic*)r4) == 0) ) goto label$7164f24_13_13;
	r2 = false;
	r0->textChanged = r2;
	r3 = r0->text;
	r0->currentText = r3;
	r2 = false;
	r0->calcDone = r2;
	r2 = true;
	r0->needsRebuild = r2;
	label$7164f24_13_13:
	r2 = r0->calcDone;
	if( r2 ) goto label$7164f24_13_19;
	r3 = r0->text;
	r2 = r0->needsRebuild;
	r5 = &r2;
	((void (*)(h2d__Text,String,bool*))r0->$type->vobj_proto[18])(r0,r3,r5);
	label$7164f24_13_19:
	r6 = r0->calcWidth;
	return r6;
}

vdynamic* h2d_Text_set_maxWidth(h2d__Text r0,vdynamic* r1) {
	vdynamic *r3;
	r3 = r0->maxWidth;
	if( r3 != r1 && (!r3 || !r1 || (r3->v.d != r1->v.d)) ) goto label$7164f24_14_3;
	return r1;
	label$7164f24_14_3:
	r0->maxWidth = r1;
	h2d_Text_updateConstraint(r0);
	return r1;
}

void h2d_Text_updateConstraint(h2d__Text r0) {
	double r1, r4, r5, r6;
	vdynamic *r3;
	r1 = r0->realMaxWidth;
	r3 = r0->maxWidth;
	if( r3 ) goto label$7164f24_15_6;
	r4 = r0->constraintWidth;
	r0->realMaxWidth = r4;
	goto label$7164f24_15_21;
	label$7164f24_15_6:
	r4 = r0->constraintWidth;
	r5 = 0.;
	if( !(r4 < r5) ) goto label$7164f24_15_13;
	r3 = r0->maxWidth;
	r4 = r3 ? r3->v.d : 0;
	r0->realMaxWidth = r4;
	goto label$7164f24_15_21;
	label$7164f24_15_13:
	r3 = r0->maxWidth;
	r4 = r3 ? r3->v.d : 0;
	r5 = r0->constraintWidth;
	if( !(r5 < r4) ) goto label$7164f24_15_19;
	r6 = r5;
	goto label$7164f24_15_20;
	label$7164f24_15_19:
	r6 = r4;
	label$7164f24_15_20:
	r0->realMaxWidth = r6;
	label$7164f24_15_21:
	r4 = r0->realMaxWidth;
	if( r4 == r1 ) goto label$7164f24_15_24;
	h2d_Text_rebuild(r0);
	label$7164f24_15_24:
	return;
}

int h2d_Text_set_textColor(h2d__Text r0,int r1) {
	h3d__Vector r5;
	double r4, r6, r7;
	int r2, r3;
	r2 = r0->textColor;
	if( r2 != r1 ) goto label$7164f24_16_3;
	return r1;
	label$7164f24_16_3:
	r0->textColor = r1;
	r5 = r0->color;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->w;
	r5 = r0->color;
	if( r5 == NULL ) hl_null_access();
	r3 = 16;
	r2 = r1 >> r3;
	r3 = 255;
	r2 = r2 & r3;
	r6 = (double)r2;
	r7 = 255.;
	r6 = r6 / r7;
	r5->x = r6;
	r3 = 8;
	r2 = r1 >> r3;
	r3 = 255;
	r2 = r2 & r3;
	r6 = (double)r2;
	r7 = 255.;
	r6 = r6 / r7;
	r5->y = r6;
	r3 = 255;
	r2 = r1 & r3;
	r6 = (double)r2;
	r7 = 255.;
	r6 = r6 / r7;
	r5->z = r6;
	r3 = 24;
	r2 = ((unsigned)r1) >> r3;
	r6 = (double)r2;
	r7 = 255.;
	r6 = r6 / r7;
	r5->w = r6;
	r5 = r0->color;
	if( r5 == NULL ) hl_null_access();
	r5->w = r4;
	return r1;
}

void h2d_Text_getBoundsRec(h2d__Text r0,h2d__Object r1,h2d__col__Bounds r2,bool r3) {
	bool *r8;
	String r6, r7;
	bool r5;
	double r9, r10, r11, r12, r13, r14;
	h2d_Object_getBoundsRec(((h2d__Object)r0),r1,r2,r3);
	r5 = r0->textChanged;
	if( !r5 ) goto label$7164f24_17_14;
	r6 = r0->text;
	r7 = r0->currentText;
	if( r6 == r7 || (r6 && r7 && String___compare(r6,(vdynamic*)r7) == 0) ) goto label$7164f24_17_14;
	r5 = false;
	r0->textChanged = r5;
	r6 = r0->text;
	r0->currentText = r6;
	r5 = false;
	r0->calcDone = r5;
	r5 = true;
	r0->needsRebuild = r5;
	label$7164f24_17_14:
	r5 = r0->calcDone;
	if( r5 ) goto label$7164f24_17_20;
	r6 = r0->text;
	r5 = r0->needsRebuild;
	r8 = &r5;
	((void (*)(h2d__Text,String,bool*))r0->$type->vobj_proto[18])(r0,r6,r8);
	label$7164f24_17_20:
	if( !r3 ) goto label$7164f24_17_30;
	r10 = r0->calcXMin;
	r9 = r10;
	r11 = 0.;
	r10 = r11;
	r12 = r0->calcWidth;
	r11 = r12;
	r13 = r0->calcSizeHeight;
	r12 = r13;
	goto label$7164f24_17_40;
	label$7164f24_17_30:
	r13 = r0->calcXMin;
	r9 = r13;
	r13 = r0->calcYMin;
	r10 = r13;
	r13 = r0->calcWidth;
	r11 = r13;
	r13 = r0->calcHeight;
	r14 = r0->calcYMin;
	r13 = r13 - r14;
	r12 = r13;
	label$7164f24_17_40:
	h2d_Object_addBounds(((h2d__Object)r0),r1,r2,r9,r10,r11,r12);
	return;
}

void h2d_Text_new(h2d__Text r0,h2d__Font r1,h2d__Object r2) {
	String r7;
	venum *r6;
	h2d__Font r5;
	double r3;
	int r8;
	r3 = -1.;
	r0->realMaxWidth = r3;
	r3 = -1.;
	r0->constraintWidth = r3;
	r3 = 0.;
	r0->lineSpacing = r3;
	r3 = 0.;
	r0->letterSpacing = r3;
	h2d_Drawable_new(((h2d__Drawable)r0),r2);
	r5 = ((h2d__Font (*)(h2d__Text,h2d__Font))r0->$type->vobj_proto[15])(r0,r1);
	r6 = (venum*)g$h2d_Align_Left;
	r6 = h2d_Text_set_textAlign(r0,r6);
	r7 = (String)s$;
	r7 = ((String (*)(h2d__Text,String))r0->$type->vobj_proto[16])(r0,r7);
	r7 = (String)s$;
	r0->currentText = r7;
	r8 = 16777215;
	r8 = ((int (*)(h2d__Text,int))r0->$type->vobj_proto[19])(r0,r8);
	return;
}

