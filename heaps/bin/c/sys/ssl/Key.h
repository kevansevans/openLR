﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_sys__ssl__Key
#define INC_sys__ssl__Key
typedef struct _sys__ssl__$Key *sys__ssl__$Key;
typedef struct _sys__ssl__Key *sys__ssl__Key;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>


struct _sys__ssl__$Key {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _sys__ssl__Key {
	hl_type *$type;
	hl_ssl_pkey* __k;
};
#endif

