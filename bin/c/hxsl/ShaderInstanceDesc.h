﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxsl__ShaderInstanceDesc
#define INC_hxsl__ShaderInstanceDesc
typedef struct _hxsl__$ShaderInstanceDesc *hxsl__$ShaderInstanceDesc;
typedef struct _hxsl__ShaderInstanceDesc *hxsl__ShaderInstanceDesc;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/SharedShader.h>


struct _hxsl__$ShaderInstanceDesc {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl__ShaderInstanceDesc {
	hl_type *$type;
	hxsl__SharedShader shader;
	int bits;
	int index;
};
#endif

