﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_haxe__Log
#define INC_haxe__Log
typedef struct _haxe__$Log *haxe__$Log;
typedef struct _haxe__Log *haxe__Log;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayDyn.h>


struct _haxe__$Log {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* formatOutput;
	vclosure* trace;
};
struct _haxe__Log {
	hl_type *$type;
};
#endif

