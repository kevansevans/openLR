﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_haxe__iterators__ArrayKeyValueIterator
#define INC_haxe__iterators__ArrayKeyValueIterator
typedef struct _haxe__iterators__$ArrayKeyValueIterator *haxe__iterators__$ArrayKeyValueIterator;
typedef struct _haxe__iterators__ArrayKeyValueIterator *haxe__iterators__ArrayKeyValueIterator;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayDyn.h>


struct _haxe__iterators__$ArrayKeyValueIterator {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _haxe__iterators__ArrayKeyValueIterator {
	hl_type *$type;
	int current;
	hl__types__ArrayDyn array;
};
#endif

