﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxsl__ShaderInstance
#define INC_hxsl__ShaderInstance
typedef struct _hxsl__$ShaderInstance *hxsl__$ShaderInstance;
typedef struct _hxsl__ShaderInstance *hxsl__ShaderInstance;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/IntMap.h>


struct _hxsl__$ShaderInstance {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl__ShaderInstance {
	hl_type *$type;
	int id;
	vvirtual* shader;
	haxe__ds__IntMap params;
};
#endif

