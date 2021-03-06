﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_components__ui__UIButton
#define INC_components__ui__UIButton
typedef struct _components__ui__$UIButton *components__ui__$UIButton;
typedef struct _components__ui__UIButton *components__ui__UIButton;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/Object.h>
#include <hl/types/ArrayObj.h>
#include <h2d/filter/Filter.h>
#include <h2d/BlendMode.h>
#include <h2d/Bitmap.h>
#include <h2d/Interactive.h>


struct _components__ui__$UIButton {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _components__ui__UIButton {
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
	vclosure* onClick;
	h2d__Bitmap btn_up;
	h2d__Bitmap btn_over;
	h2d__Bitmap btn_down;
	h2d__Bitmap btn_selected;
	h2d__Bitmap btn_icon;
	h2d__Interactive clicky;
	bool selected;
};
#endif

