﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_hxsl__ShaderConst
#define INC_hxsl__ShaderConst
typedef struct _hxsl__$ShaderConst *hxsl__$ShaderConst;
typedef struct _hxsl__ShaderConst *hxsl__ShaderConst;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/VarKind.h>
#include <hl/types/ArrayObj.h>
#include <hxsl/Type.h>


struct _hxsl__$ShaderConst {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl__ShaderConst {
	hl_type *$type;
	vvirtual* v;
	int pos;
	int bits;
	int globalId;
	hxsl__ShaderConst next;
};
#endif

