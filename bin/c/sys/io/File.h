﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_sys__io__File
#define INC_sys__io__File
typedef struct _sys__io__$File *sys__io__$File;
typedef struct _sys__io__File *sys__io__File;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Bytes.h>
#include <sys/io/FileInput.h>
#include <sys/io/FileOutput.h>


struct _sys__io__$File {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* getContent;
	vclosure* getBytes;
	vclosure* saveContent;
	vclosure* saveBytes;
	vclosure* read;
	vclosure* write;
	vclosure* copy;
};
struct _sys__io__File {
	hl_type *$type;
};
#endif

