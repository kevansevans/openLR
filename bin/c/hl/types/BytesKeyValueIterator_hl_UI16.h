﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hl__types__BytesKeyValueIterator_hl_UI16
#define INC_hl__types__BytesKeyValueIterator_hl_UI16
typedef struct _hl__types__$BytesKeyValueIterator_hl_UI16 *hl__types__$BytesKeyValueIterator_hl_UI16;
typedef struct _hl__types__BytesKeyValueIterator_hl_UI16 *hl__types__BytesKeyValueIterator_hl_UI16;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/iterators/ArrayKeyValueIterator.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayBytes_hl_UI16.h>


struct _hl__types__$BytesKeyValueIterator_hl_UI16 {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__types__BytesKeyValueIterator_hl_UI16 {
	hl_type *$type;
	int current;
	hl__types__ArrayDyn array;
	hl__types__ArrayBytes_hl_UI16 a;
};
#endif

