﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_format__png__Color
#define INC_format__png__Color
typedef struct _format__png__$Color *format__png__$Color;
#include <hl/Enum.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <hl/types/ArrayObj.h>
#include <format/png/Color.h>


struct _format__png__$Color {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __ename__;
	hl_bytes_map* __emap__;
	hl__types__ArrayObj __constructs__;
	varray* __evalues__;
};
typedef struct {
	HL__ENUM_CONSTRUCT__
	bool p0;
} format_png_Color_ColGrey;
typedef struct {
	HL__ENUM_CONSTRUCT__
	bool p0;
} format_png_Color_ColTrue;
#endif

