﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__fs__ConvertFNT2BFNT
#define INC_hxd__fs__ConvertFNT2BFNT
typedef struct _hxd__fs__$ConvertFNT2BFNT *hxd__fs__$ConvertFNT2BFNT;
typedef struct _hxd__fs__ConvertFNT2BFNT *hxd__fs__ConvertFNT2BFNT;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/fs/Convert.h>
#include <hl/types/ArrayObj.h>
#include <haxe/io/Bytes.h>
#include <h2d/Tile.h>


struct _hxd__fs__$ConvertFNT2BFNT {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int _;
};
struct _hxd__fs__ConvertFNT2BFNT {
	hl_type *$type;
	hl__types__ArrayObj sourceExts;
	String destExt;
	int version;
	vdynamic* params;
	String srcPath;
	String dstPath;
	String originalFilename;
	haxe__io__Bytes srcBytes;
	h2d__Tile emptyTile;
};
#endif

