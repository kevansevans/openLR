﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__res__ImageInfo
#define INC_hxd__res__ImageInfo
typedef struct _hxd__res__$ImageInfo *hxd__res__$ImageInfo;
typedef struct _hxd__res__ImageInfo *hxd__res__ImageInfo;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/PixelFormat.h>


struct _hxd__res__$ImageInfo {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__res__ImageInfo {
	hl_type *$type;
	int width;
	int height;
	int mipLevels;
	int flags;
	int dataFormat;
	venum* pixelFormat;
};
#endif

