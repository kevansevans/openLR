﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC__std__EReg
#define INC__std__EReg
typedef struct _$EReg *$EReg;
typedef struct _EReg *EReg;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>


struct _$EReg {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _EReg {
	hl_type *$type;
	ereg* r;
	String last;
	bool global;
};
#endif

