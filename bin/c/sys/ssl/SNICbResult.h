﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_sys__ssl__SNICbResult
#define INC_sys__ssl__SNICbResult
typedef struct _sys__ssl__$SNICbResult *sys__ssl__$SNICbResult;
typedef struct _sys__ssl__SNICbResult *sys__ssl__SNICbResult;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>


struct _sys__ssl__$SNICbResult {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _sys__ssl__SNICbResult {
	hl_type *$type;
	hl_ssl_cert* cert;
	hl_ssl_pkey* key;
};
#endif

