﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_components__managers__LineCell
#define INC_components__managers__LineCell
typedef struct _components__managers__$LineCell *components__managers__$LineCell;
typedef struct _components__managers__LineCell *components__managers__LineCell;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/col/Point.h>
#include <hl/types/ArrayObj.h>


struct _components__managers__$LineCell {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _components__managers__LineCell {
	hl_type *$type;
	h2d__col__Point position;
	hl__types__ArrayObj allLines;
	hl__types__ArrayObj colliders;
	hl__types__ArrayObj nonColliders;
};
#endif

