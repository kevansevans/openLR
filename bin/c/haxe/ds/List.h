﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_haxe__ds__List
#define INC_haxe__ds__List
typedef struct _haxe__ds__$List *haxe__ds__$List;
typedef struct _haxe__ds__List *haxe__ds__List;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/ds/_List/ListNode.h>


struct _haxe__ds__$List {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _haxe__ds__List {
	hl_type *$type;
	haxe__ds___List__ListNode h;
	haxe__ds___List__ListNode q;
	int length;
};
#endif

