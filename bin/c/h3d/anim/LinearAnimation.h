﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_h3d__anim__LinearAnimation
#define INC_h3d__anim__LinearAnimation
typedef struct _h3d__anim__$LinearAnimation *h3d__anim__$LinearAnimation;
typedef struct _h3d__anim__LinearAnimation *h3d__anim__LinearAnimation;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/anim/Animation.h>
#include <hl/types/ArrayObj.h>


struct _h3d__anim__$LinearAnimation {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__anim__LinearAnimation {
	hl_type *$type;
	String name;
	int frameCount;
	double sampling;
	double frame;
	double speed;
	vclosure* onAnimEnd;
	vclosure* onEvent;
	bool pause;
	bool loop;
	hl__types__ArrayObj events;
	bool isInstance;
	hl__types__ArrayObj objects;
	bool isSync;
	int lastEvent;
	vvirtual* f$14;
	double syncFrame;
};
#endif

