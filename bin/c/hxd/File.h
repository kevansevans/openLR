﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__File
#define INC_hxd__File
typedef struct _hxd__$File *hxd__$File;
typedef struct _hxd__File *hxd__File;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Bytes.h>


struct _hxd__$File {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* getBytes;
	vclosure* saveBytes;
};
struct _hxd__File {
	hl_type *$type;
};
#endif
