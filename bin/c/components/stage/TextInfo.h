﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_components__stage__TextInfo
#define INC_components__stage__TextInfo
typedef struct _components__stage__$TextInfo *components__stage__$TextInfo;
typedef struct _components__stage__TextInfo *components__stage__TextInfo;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/Text.h>


struct _components__stage__$TextInfo {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _components__stage__TextInfo {
	hl_type *$type;
	h2d__Text info;
	double framerate;
};
#endif

