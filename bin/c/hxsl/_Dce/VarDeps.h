﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_hxsl___Dce__VarDeps
#define INC_hxsl___Dce__VarDeps
typedef struct _hxsl___Dce__$VarDeps *hxsl___Dce__$VarDeps;
typedef struct _hxsl___Dce__VarDeps *hxsl___Dce__VarDeps;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxsl/VarKind.h>
#include <hl/types/ArrayObj.h>
#include <hxsl/Type.h>
#include <haxe/ds/IntMap.h>


struct _hxsl___Dce__$VarDeps {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl___Dce__VarDeps {
	hl_type *$type;
	vvirtual* v;
	bool keep;
	bool used;
	haxe__ds__IntMap deps;
};
#endif

