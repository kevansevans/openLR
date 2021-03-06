﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_components__sledder__RiderBase
#define INC_components__sledder__RiderBase
typedef struct _components__sledder__$RiderBase *components__sledder__$RiderBase;
typedef struct _components__sledder__RiderBase *components__sledder__RiderBase;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/Vector.h>
#include <hl/types/ArrayObj.h>
#include <components/sledder/RiderScarf.h>
#include <h2d/Graphics.h>
#include <h2d/HtmlText.h>
#include <h2d/col/Point.h>
#include <hxlr/rider/ContactPoint.h>


struct _components__sledder__$RiderBase {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	h3d__Vector WHITE;
	h3d__Vector RED;
};
struct _components__sledder__RiderBase {
	hl_type *$type;
	hl__types__ArrayObj ridePoints;
	hl__types__ArrayObj scarfPoints;
	int colorA;
	int colorB;
	components__sledder__RiderScarf neckscarf;
	hl__types__ArrayObj bones;
	hl__types__ArrayObj scarves;
	h2d__Graphics gfx;
	h2d__HtmlText nameField;
	h2d__col__Point gravity;
	bool invincible;
	vdynamic* crashed;
	bool undead;
	h2d__col__Point startPos;
	String name;
	bool drawContactPoints;
	vdynamic* enabledFrame;
	vdynamic* disableFrame;
	bool enabled;
	hxlr__rider__ContactPoint cameraPoint;
};
#endif

