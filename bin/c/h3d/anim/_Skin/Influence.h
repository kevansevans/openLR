﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h3d__anim___Skin__Influence
#define INC_h3d__anim___Skin__Influence
typedef struct _h3d__anim___Skin__$Influence *h3d__anim___Skin__$Influence;
typedef struct _h3d__anim___Skin__Influence *h3d__anim___Skin__Influence;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/anim/Joint.h>


struct _h3d__anim___Skin__$Influence {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__anim___Skin__Influence {
	hl_type *$type;
	h3d__anim__Joint j;
	double w;
};
#endif

