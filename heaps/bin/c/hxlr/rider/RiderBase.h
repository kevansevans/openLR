﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxlr__rider__RiderBase
#define INC_hxlr__rider__RiderBase
typedef struct _hxlr__rider__$RiderBase *hxlr__rider__$RiderBase;
typedef struct _hxlr__rider__RiderBase *hxlr__rider__RiderBase;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/col/Point.h>
#include <hl/types/ArrayObj.h>
#include <hxlr/rider/ContactPoint.h>


struct _hxlr__rider__$RiderBase {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxlr__rider__RiderBase {
	hl_type *$type;
	h2d__col__Point startPos;
	h2d__col__Point startVel;
	h2d__col__Point gravity;
	hl__types__ArrayObj contactPoints;
	hl__types__ArrayObj airPoints;
	hl__types__ArrayObj constraints;
	hl__types__ArrayObj scarves;
	vdynamic* crashed;
	bool invincible;
	vdynamic* enabledFrame;
	vdynamic* disableFrame;
	bool enabled;
	hxlr__rider__ContactPoint focusPoint;
	String name;
};
#endif

