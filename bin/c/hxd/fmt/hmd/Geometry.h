﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_hxd__fmt__hmd__Geometry
#define INC_hxd__fmt__hmd__Geometry
typedef struct _hxd__fmt__hmd__$Geometry *hxd__fmt__hmd__$Geometry;
typedef struct _hxd__fmt__hmd__Geometry *hxd__fmt__hmd__Geometry;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayBytes_Int.h>
#include <h3d/col/Bounds.h>


struct _hxd__fmt__hmd__$Geometry {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fmt__hmd__Geometry {
	hl_type *$type;
	hl__types__ArrayObj props;
	int vertexCount;
	int vertexStride;
	hl__types__ArrayObj vertexFormat;
	int vertexPosition;
	hl__types__ArrayBytes_Int indexCounts;
	int indexPosition;
	h3d__col__Bounds bounds;
};
#endif

