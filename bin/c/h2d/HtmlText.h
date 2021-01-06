﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h2d__HtmlText
#define INC_h2d__HtmlText
typedef struct _h2d__$HtmlText *h2d__$HtmlText;
typedef struct _h2d__HtmlText *h2d__HtmlText;
#include <_std/String.h>
#include <h2d/HtmlText.h>
#include <hl/types/ArrayObj.h>
#include <h2d/Font.h>
#include <_std/Xml.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <h2d/Tile.h>
#include <_std/EReg.h>
#include <h2d/Text.h>
#include <h2d/Drawable.h>
#include <h2d/Object.h>
#include <h2d/filter/Filter.h>
#include <h2d/BlendMode.h>
#include <h3d/Vector.h>
#include <hxsl/ShaderList.h>
#include <h2d/Align.h>
#include <h2d/TileGroup.h>
#include <h3d/shader/SignedDistanceField.h>
#include <h2d/LineHeightMode.h>
#include <h2d/ImageVerticalAlign.h>
#include <h3d/shader/ColorMatrix.h>
#include <h2d/Interactive.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	h2d__HtmlText p0;
	String p1;
} Enumt$ctx_d68f9c9;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayObj p0;
	vvirtual* p1;
	h2d__HtmlText p2;
} Enumt$ctx_42364b3;
struct _h2d__$HtmlText {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* defaultLoadImage;
	vclosure* defaultLoadFont;
	vclosure* defaultFormatText;
	EReg REG_SPACES;
};
struct _h2d__HtmlText {
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
	bool condenseWhite;
	double imageSpacing;
	venum* lineHeightMode;
	venum* imageVerticalAlign;
	hl__types__ArrayObj elements;
	double xPos;
	double yPos;
	double xMax;
	double xMin;
	Xml textXml;
	int sizePos;
	h3d__shader__ColorMatrix dropMatrix;
	int prevChar;
	bool newLine;
	hl__types__ArrayObj aHrefs;
	h2d__Interactive aInteractive;
	vclosure* loadImage;
	vclosure* loadFont;
	vclosure* onHyperlink;
	vclosure* formatText;
};
#endif

