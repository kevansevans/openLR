﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_haxe__MainLoop
#define INC_haxe__MainLoop
typedef struct _haxe__$MainLoop *haxe__$MainLoop;
typedef struct _haxe__MainLoop *haxe__MainLoop;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/MainEvent.h>


struct _haxe__$MainLoop {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	haxe__MainEvent pending;
	vclosure* hasEvents;
	vclosure* add;
	vclosure* sortEvents;
	vclosure* tick;
};
struct _haxe__MainLoop {
	hl_type *$type;
};
#endif

