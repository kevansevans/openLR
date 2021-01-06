﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__fs__Convert
#define INC_hxd__fs__Convert
typedef struct _hxd__fs__$Convert *hxd__fs__$Convert;
typedef struct _hxd__fs__Convert *hxd__fs__Convert;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/ds/StringMap.h>
#include <hl/types/ArrayObj.h>
#include <haxe/io/Bytes.h>


struct _hxd__fs__$Convert {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	haxe__ds__StringMap converts;
	vclosure* _register;
};
struct _hxd__fs__Convert {
	hl_type *$type;
	hl__types__ArrayObj sourceExts;
	String destExt;
	int version;
	vdynamic* params;
	String srcPath;
	String dstPath;
	String originalFilename;
	haxe__io__Bytes srcBytes;
};
#endif

