﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__res__BitmapFont
#define INC_hxd__res__BitmapFont
typedef struct _hxd__res__$BitmapFont *hxd__res__$BitmapFont;
typedef struct _hxd__res__BitmapFont *hxd__res__BitmapFont;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/res/Resource.h>
#include <hxd/fs/FileEntry.h>
#include <hxd/res/Loader.h>
#include <h2d/Font.h>


struct _hxd__res__$BitmapFont {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__res__BitmapFont {
	hl_type *$type;
	hxd__fs__FileEntry entry;
	hxd__res__Loader loader;
	h2d__Font font;
};
#endif

