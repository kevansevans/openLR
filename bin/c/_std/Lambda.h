﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC__std__Lambda
#define INC__std__Lambda
typedef struct _$Lambda *$Lambda;
typedef struct _Lambda *Lambda;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayDyn.h>


struct _$Lambda {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* array;
};
struct _Lambda {
	hl_type *$type;
};
#endif

