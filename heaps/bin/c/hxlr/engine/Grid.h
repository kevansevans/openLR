﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxlr__engine__Grid
#define INC_hxlr__engine__Grid
typedef struct _hxlr__engine__$Grid *hxlr__engine__$Grid;
typedef struct _hxlr__engine__Grid *hxlr__engine__Grid;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_Int.h>
#include <haxe/ds/StringMap.h>
#include <hl/types/ArrayObj.h>


struct _hxlr__engine__$Grid {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxlr__engine__Grid {
	hl_type *$type;
	int lineCount;
	int lineIDCount;
	hl__types__ArrayBytes_Int subTypeCount;
	haxe__ds__StringMap registry;
	hl__types__ArrayObj lines;
};
#endif

