﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_haxe__ds___List__ListNode
#define INC_haxe__ds___List__ListNode
typedef struct _haxe__ds___List__$ListNode *haxe__ds___List__$ListNode;
typedef struct _haxe__ds___List__ListNode *haxe__ds___List__ListNode;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _haxe__ds___List__$ListNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _haxe__ds___List__ListNode {
	hl_type *$type;
	vdynamic* item;
	haxe__ds___List__ListNode next;
};
#endif

