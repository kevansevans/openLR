﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h2d__Text
#define INC_h2d__Text
typedef struct _h2d__$Text *h2d__$Text;
typedef struct _h2d__Text *h2d__Text;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/Drawable.h>
#include <h2d/Object.h>
#include <hl/types/ArrayObj.h>
#include <h2d/filter/Filter.h>
#include <h2d/BlendMode.h>
#include <h3d/Vector.h>
#include <hxsl/ShaderList.h>
#include <h2d/Font.h>
#include <h2d/Align.h>
#include <h2d/TileGroup.h>
#include <h3d/shader/SignedDistanceField.h>


struct _h2d__$Text {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h2d__Text {
	hl_type *$type;
	hl__types__ArrayObj children;
	h2d__Object parentContainer;
	h2d__Object parent;
	double x;
	double y;
	double scaleX;
	double scaleY;
	double rotation;
	bool visible;
	double alpha;
	h2d__filter__Filter filter;
	venum* blendMode;
	double matA;
	double matB;
	double matC;
	double matD;
	double absX;
	double absY;
	bool posChanged;
	bool allocated;
	int lastFrame;
	h3d__Vector color;
	vdynamic* smooth;
	bool tileWrap;
	hxsl__ShaderList shaders;
	h2d__Font font;
	String text;
	int textColor;
	vdynamic* maxWidth;
	vvirtual* dropShadow;
	double textWidth;
	double textHeight;
	venum* textAlign;
	double letterSpacing;
	double lineSpacing;
	h2d__TileGroup glyphs;
	bool needsRebuild;
	String currentText;
	bool textChanged;
	bool calcDone;
	double calcXMin;
	double calcYMin;
	double calcWidth;
	double calcHeight;
	double calcSizeHeight;
	double constraintWidth;
	double realMaxWidth;
	h3d__shader__SignedDistanceField sdfShader;
};
#endif
