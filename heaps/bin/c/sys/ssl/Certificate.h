﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_sys__ssl__Certificate
#define INC_sys__ssl__Certificate
typedef struct _sys__ssl__$Certificate *sys__ssl__$Certificate;
typedef struct _sys__ssl__Certificate *sys__ssl__Certificate;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>


struct _sys__ssl__$Certificate {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _sys__ssl__Certificate {
	hl_type *$type;
	sys__ssl__Certificate __h;
	hl_ssl_cert* __x;
};
#endif

