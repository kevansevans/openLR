﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_h3d__BufferOffset
#define INC_h3d__BufferOffset
typedef struct _h3d__$BufferOffset *h3d__$BufferOffset;
typedef struct _h3d__BufferOffset *h3d__BufferOffset;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/Buffer.h>


struct _h3d__$BufferOffset {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__BufferOffset {
	hl_type *$type;
	h3d__Buffer buffer;
	int offset;
	h3d__BufferOffset next;
};
#endif

