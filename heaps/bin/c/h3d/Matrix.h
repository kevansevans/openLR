﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h3d__Matrix
#define INC_h3d__Matrix
typedef struct _h3d__$Matrix *h3d__$Matrix;
typedef struct _h3d__Matrix *h3d__Matrix;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_Float.h>


struct _h3d__$Matrix {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	h3d__Matrix tmp;
	vclosure* I;
	vclosure* L;
};
struct _h3d__Matrix {
	hl_type *$type;
	double _11;
	double _12;
	double _13;
	double _14;
	double _21;
	double _22;
	double _23;
	double _24;
	double _31;
	double _32;
	double _33;
	double _34;
	double _41;
	double _42;
	double _43;
	double _44;
};
#endif
