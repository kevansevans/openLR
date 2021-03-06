﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_components__sledder__RiderScarf
#define INC_components__sledder__RiderScarf
typedef struct _components__sledder__$RiderScarf *components__sledder__$RiderScarf;
typedef struct _components__sledder__RiderScarf *components__sledder__RiderScarf;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/Object.h>
#include <hl/types/ArrayObj.h>
#include <h2d/filter/Filter.h>
#include <h2d/BlendMode.h>
#include <h2d/Bitmap.h>
#include <hxd/Pixels.h>


struct _components__sledder__$RiderScarf {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _components__sledder__RiderScarf {
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
	vdynamic* colorA;
	vdynamic* colorB;
	h2d__Bitmap bitmap;
	hxd__Pixels pixels;
};
#endif

