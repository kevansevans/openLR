﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_components__sledder__Bosh
#define INC_components__sledder__Bosh
typedef struct _components__sledder__$Bosh *components__sledder__$Bosh;
typedef struct _components__sledder__Bosh *components__sledder__Bosh;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/Vector.h>
#include <hxlr/rider/RiderBase.h>
#include <h2d/col/Point.h>
#include <hl/types/ArrayObj.h>
#include <hxlr/rider/ContactPoint.h>
#include <components/sledder/RiderScarf.h>
#include <h2d/Graphics.h>
#include <h2d/HtmlText.h>
#include <components/sledder/RiderPart.h>


struct _components__sledder__$Bosh {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	h3d__Vector WHITE;
	h3d__Vector RED;
};
struct _components__sledder__Bosh {
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
	int colorA;
	int colorB;
	components__sledder__RiderScarf neckscarf;
	h2d__Graphics gfx;
	h2d__HtmlText nameField;
	bool undead;
	components__sledder__RiderPart leftArm;
	components__sledder__RiderPart rightArm;
	components__sledder__RiderPart leftLeg;
	components__sledder__RiderPart rightLeg;
	components__sledder__RiderPart sled;
	components__sledder__RiderPart eye;
	components__sledder__RiderPart body;
	double blinkRate;
	int prevFrame;
};
#endif
