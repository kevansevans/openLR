﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__fmt__bfnt__FontParser
#define INC_hxd__fmt__bfnt__FontParser
typedef struct _hxd__fmt__bfnt__$FontParser *hxd__fmt__bfnt__$FontParser;
typedef struct _hxd__fmt__bfnt__FontParser *hxd__fmt__bfnt__FontParser;
#include <_std/String.h>
#include <h2d/Tile.h>
#include <hl/types/ArrayObj.h>
#include <h2d/Font.h>
#include <hxd/fmt/bfnt/FontParser.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <haxe/io/Bytes.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
	hl__types__ArrayObj p2;
	h2d__Font p3;
} Enumt$ctx_f36062d;
struct _hxd__fmt__bfnt__$FontParser {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* parse;
};
struct _hxd__fmt__bfnt__FontParser {
	hl_type *$type;
};
#endif
