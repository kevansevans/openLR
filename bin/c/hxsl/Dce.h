﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxsl__Dce
#define INC_hxsl__Dce
typedef struct _hxsl__$Dce *hxsl__$Dce;
typedef struct _hxsl__Dce *hxsl__Dce;
#include <hxsl/TExprDef.h>
#include <_std/String.h>
#include <hxsl/Type.h>
#include <hl/types/ArrayObj.h>
#include <hxsl/Dce.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <haxe/ds/IntMap.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	hl__types__ArrayObj p1;
	hl__types__ArrayObj p2;
} Enumt$ctx_837f6af;
struct _hxsl__$Dce {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxsl__Dce {
	hl_type *$type;
	haxe__ds__IntMap used;
	hl__types__ArrayObj channelVars;
	bool markAsKeep;
};
#endif

