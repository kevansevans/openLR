﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h3d__anim__LinearFrame
#define INC_h3d__anim__LinearFrame
typedef struct _h3d__anim__$LinearFrame *h3d__anim__$LinearFrame;
typedef struct _h3d__anim__LinearFrame *h3d__anim__LinearFrame;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _h3d__anim__$LinearFrame {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__anim__LinearFrame {
	hl_type *$type;
	double tx;
	double ty;
	double tz;
	double qx;
	double qy;
	double qz;
	double qw;
	double sx;
	double sy;
	double sz;
};
#endif

