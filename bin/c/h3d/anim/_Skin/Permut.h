﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h3d__anim___Skin__Permut
#define INC_h3d__anim___Skin__Permut
typedef struct _h3d__anim___Skin__$Permut *h3d__anim___Skin__$Permut;
typedef struct _h3d__anim___Skin__Permut *h3d__anim___Skin__Permut;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayBytes_Int.h>


struct _h3d__anim___Skin__$Permut {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__anim___Skin__Permut {
	hl_type *$type;
	hl__types__ArrayObj joints;
	hl__types__ArrayBytes_Int triangles;
	int material;
	hl__types__ArrayObj indexedJoints;
};
#endif

