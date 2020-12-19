﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_h3d__pass__ScreenFx
#define INC_h3d__pass__ScreenFx
typedef struct _h3d__pass__$ScreenFx *h3d__pass__$ScreenFx;
typedef struct _h3d__pass__ScreenFx *h3d__pass__ScreenFx;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/shader/ScreenShader.h>
#include <h3d/mat/Pass.h>
#include <h3d/prim/Primitive.h>
#include <h3d/pass/ShaderManager.h>
#include <h3d/Engine.h>
#include <hxsl/ShaderList.h>
#include <h3d/shader/Buffers.h>


struct _h3d__pass__$ScreenFx {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__pass__ScreenFx {
	hl_type *$type;
	h3d__shader__ScreenShader shader;
	h3d__mat__Pass pass;
	h3d__prim__Primitive primitive;
	h3d__pass__ShaderManager manager;
	h3d__Engine _engine;
	hxsl__ShaderList shaders;
	h3d__shader__Buffers buffers;
};
#endif

