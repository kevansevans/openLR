﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_format__tools__BitsInput
#define INC_format__tools__BitsInput
typedef struct _format__tools__$BitsInput *format__tools__$BitsInput;
typedef struct _format__tools__BitsInput *format__tools__BitsInput;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Input.h>


struct _format__tools__$BitsInput {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _format__tools__BitsInput {
	hl_type *$type;
	haxe__io__Input i;
	int nbits;
	int bits;
};
#endif

