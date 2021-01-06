﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h3d__scene__Mesh
#define INC_h3d__scene__Mesh
typedef struct _h3d__scene__$Mesh *h3d__scene__$Mesh;
typedef struct _h3d__scene__Mesh *h3d__scene__Mesh;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/scene/Object.h>
#include <hl/types/ArrayObj.h>
#include <h3d/Matrix.h>
#include <h3d/anim/Animation.h>
#include <h3d/col/Ray.h>
#include <h3d/col/Frustum.h>
#include <h3d/Quat.h>
#include <h3d/prim/Primitive.h>
#include <h3d/mat/Material.h>


struct _h3d__scene__$Mesh {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__scene__Mesh {
	hl_type *$type;
	int flags;
	hl__types__ArrayObj children;
	h3d__scene__Object parent;
	String name;
	double x;
	double y;
	double z;
	double scaleX;
	double scaleY;
	double scaleZ;
	h3d__scene__Object follow;
	h3d__Matrix defaultTransform;
	h3d__anim__Animation currentAnimation;
	vvirtual* cullingCollider;
	h3d__Matrix absPos;
	h3d__Matrix invPos;
	h3d__Quat qRot;
	int lastFrame;
	vvirtual* f$18;
	h3d__prim__Primitive primitive;
	h3d__mat__Material material;
};
#endif

