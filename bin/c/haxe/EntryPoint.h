﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_haxe__EntryPoint
#define INC_haxe__EntryPoint
typedef struct _haxe__$EntryPoint *haxe__$EntryPoint;
typedef struct _haxe__EntryPoint *haxe__EntryPoint;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <sys/thread/Lock.h>
#include <hl/natives.h>
#include <hl/types/ArrayObj.h>


struct _haxe__$EntryPoint {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	sys__thread__Lock sleepLock;
	hl_mutex* mutex;
	hl__types__ArrayObj pending;
	int threadCount;
	vclosure* processEvents;
	vclosure* run;
};
struct _haxe__EntryPoint {
	hl_type *$type;
};
#endif

