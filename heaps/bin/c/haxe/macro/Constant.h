﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_haxe__macro__Constant
#define INC_haxe__macro__Constant
typedef struct _haxe__macro__$Constant *haxe__macro__$Constant;
#include <hl/Enum.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <hl/types/ArrayObj.h>
#include <haxe/macro/Constant.h>
#include <haxe/macro/StringLiteralKind.h>


struct _haxe__macro__$Constant {
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
	String p0;
} haxe_macro_Constant_CInt;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} haxe_macro_Constant_CFloat;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	venum* p1;
} haxe_macro_Constant_CString;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} haxe_macro_Constant_CIdent;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	String p1;
} haxe_macro_Constant_CRegexp;
#endif

