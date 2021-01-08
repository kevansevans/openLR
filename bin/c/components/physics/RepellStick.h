﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_components__physics__RepellStick
#define INC_components__physics__RepellStick
typedef struct _components__physics__$RepellStick *components__physics__$RepellStick;
typedef struct _components__physics__RepellStick *components__physics__RepellStick;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <components/physics/Stick.h>
#include <components/physics/RidePoint.h>


struct _components__physics__$RepellStick {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _components__physics__RepellStick {
	hl_type *$type;
	components__physics__RidePoint a;
	components__physics__RidePoint b;
	double restLength;
};
#endif
