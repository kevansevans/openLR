﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h3d__col__Sphere
#define INC_h3d__col__Sphere
typedef struct _h3d__col__$Sphere *h3d__col__$Sphere;
typedef struct _h3d__col__Sphere *h3d__col__Sphere;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/col/Ray.h>
#include <h3d/col/Frustum.h>
#include <h3d/Matrix.h>


struct _h3d__col__$Sphere {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__col__Sphere {
	hl_type *$type;
	double x;
	double y;
	double z;
	double r;
	vvirtual* f$4;
};
#endif

