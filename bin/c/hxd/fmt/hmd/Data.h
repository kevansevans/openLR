﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__fmt__hmd__Data
#define INC_hxd__fmt__hmd__Data
typedef struct _hxd__fmt__hmd__$Data *hxd__fmt__hmd__$Data;
typedef struct _hxd__fmt__hmd__Data *hxd__fmt__hmd__Data;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <haxe/io/Bytes.h>


struct _hxd__fmt__hmd__$Data {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fmt__hmd__Data {
	hl_type *$type;
	int version;
	hl__types__ArrayObj props;
	hl__types__ArrayObj geometries;
	hl__types__ArrayObj materials;
	hl__types__ArrayObj models;
	hl__types__ArrayObj animations;
	haxe__io__Bytes data;
};
#endif

