﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__fmt__hmd__AnimationObject
#define INC_hxd__fmt__hmd__AnimationObject
typedef struct _hxd__fmt__hmd__$AnimationObject *hxd__fmt__hmd__$AnimationObject;
typedef struct _hxd__fmt__hmd__AnimationObject *hxd__fmt__hmd__AnimationObject;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>


struct _hxd__fmt__hmd__$AnimationObject {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__fmt__hmd__AnimationObject {
	hl_type *$type;
	String name;
	int flags;
	hl__types__ArrayObj props;
};
#endif

