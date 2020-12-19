﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_hxd__fs__BytesFileEntry
#define INC_hxd__fs__BytesFileEntry
typedef struct _hxd__fs__$BytesFileEntry *hxd__fs__$BytesFileEntry;
typedef struct _hxd__fs__BytesFileEntry *hxd__fs__BytesFileEntry;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/fs/FileEntry.h>
#include <haxe/io/Bytes.h>


struct _hxd__fs__$BytesFileEntry {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fs__BytesFileEntry {
	hl_type *$type;
	String name;
	String fullPath;
	haxe__io__Bytes bytes;
	int pos;
};
#endif

