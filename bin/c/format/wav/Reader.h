﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_format__wav__Reader
#define INC_format__wav__Reader
typedef struct _format__wav__$Reader *format__wav__$Reader;
typedef struct _format__wav__Reader *format__wav__Reader;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Input.h>


struct _format__wav__$Reader {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _format__wav__Reader {
	hl_type *$type;
	haxe__io__Input i;
};
#endif

