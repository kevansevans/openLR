﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_h3d__mat__Texture
#define INC_h3d__mat__Texture
typedef struct _h3d__mat__$Texture *h3d__mat__$Texture;
typedef struct _h3d__mat__Texture *h3d__mat__Texture;
#include <h3d/mat/Texture.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/PixelFormat.h>
#include <h3d/impl/MemoryManager.h>
#include <hl/types/ArrayObj.h>
#include <h3d/mat/MipMap.h>
#include <h3d/mat/Filter.h>
#include <h3d/mat/Wrap.h>
#include <h3d/mat/DepthBuffer.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	int p0;
	vdynamic* p1;
	h3d__mat__Texture p2;
} Enumt$ctx_25196c1;
struct _h3d__mat__$Texture {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int UID;
	int PREVENT_AUTO_DISPOSE;
	venum* nativeFormat;
	vclosure* fromColor;
	vclosure* defaultCubeTexture;
};
struct _h3d__mat__Texture {
	hl_type *$type;
	vvirtual* _t;
	h3d__impl__MemoryManager mem;
	int id;
	String name;
	int width;
	int height;
	int flags;
	venum* format;
	int bits;
	hl__types__ArrayObj waitLoads;
	venum* mipMap;
	venum* filter;
	venum* wrap;
	double lodBias;
	vclosure* realloc;
	h3d__mat__DepthBuffer depthBuffer;
	int _lastFrame;
};
#endif

