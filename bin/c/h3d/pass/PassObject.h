﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h3d__pass__PassObject
#define INC_h3d__pass__PassObject
typedef struct _h3d__pass__$PassObject *h3d__pass__$PassObject;
typedef struct _h3d__pass__PassObject *h3d__pass__PassObject;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/mat/Pass.h>
#include <h3d/scene/Object.h>
#include <hxsl/ShaderList.h>
#include <hxsl/RuntimeShader.h>


struct _h3d__pass__$PassObject {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__pass__PassObject {
	hl_type *$type;
	h3d__pass__PassObject next;
	h3d__pass__PassObject nextAlloc;
	h3d__mat__Pass pass;
	h3d__scene__Object obj;
	int index;
	hxsl__ShaderList shaders;
	hxsl__RuntimeShader shader;
	double depth;
	int texture;
};
#endif

