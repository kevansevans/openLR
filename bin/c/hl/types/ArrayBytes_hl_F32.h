﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hl__types__ArrayBytes_hl_F32
#define INC_hl__types__ArrayBytes_hl_F32
typedef struct _hl__types__$ArrayBytes_hl_F32 *hl__types__$ArrayBytes_hl_F32;
typedef struct _hl__types__ArrayBytes_hl_F32 *hl__types__ArrayBytes_hl_F32;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBase.h>
#include <hl/types/ArrayAccess.h>


struct _hl__types__$ArrayBytes_hl_F32 {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__types__ArrayBytes_hl_F32 {
	hl_type *$type;
	int length;
	vbyte* bytes;
	int size;
};
#endif

