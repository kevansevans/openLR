﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__Res
#define INC_hxd__Res
typedef struct _hxd__$Res *hxd__$Res;
typedef struct _hxd__Res *hxd__Res;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/res/Loader.h>


struct _hxd__$Res {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* get_loader;
	vclosure* set_loader;
};
struct _hxd__Res {
	hl_type *$type;
};
#endif
