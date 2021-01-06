﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_h2d__Scene
#define INC_h2d__Scene
typedef struct _h2d__$Scene *h2d__$Scene;
typedef struct _h2d__Scene *h2d__Scene;
#include <hxd/Event.h>
#include <h2d/Scene.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h2d/Layers.h>
#include <h2d/Object.h>
#include <hl/types/ArrayObj.h>
#include <h2d/filter/Filter.h>
#include <h2d/BlendMode.h>
#include <hl/types/ArrayBytes_Int.h>
#include <h2d/ScaleMode.h>
#include <h2d/Camera.h>
#include <h2d/RenderContext.h>
#include <hxd/Window.h>
#include <hxd/SceneEvents.h>
#include <h2d/col/Point.h>
#include <hxd/Cursor.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	h2d__Scene p1;
} Enumt$ctx_c40a634;
struct _h2d__$Scene {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h2d__Scene {
	hl_type *$type;
	hl__types__ArrayObj children;
	h2d__Object parentContainer;
	h2d__Object parent;
	double x;
	double y;
	double scaleX;
	double scaleY;
	double rotation;
	bool visible;
	double alpha;
	h2d__filter__Filter filter;
	venum* blendMode;
	double matA;
	double matB;
	double matC;
	double matD;
	double absX;
	double absY;
	bool posChanged;
	bool allocated;
	int lastFrame;
	hl__types__ArrayBytes_Int layersIndexes;
	int layerCount;
	int width;
	int height;
	double viewportA;
	double viewportD;
	double viewportX;
	double viewportY;
	double offsetX;
	double offsetY;
	double viewportScaleX;
	double viewportScaleY;
	double mouseX;
	double mouseY;
	venum* scaleMode;
	hl__types__ArrayObj _cameras;
	h2d__Camera interactiveCamera;
	hl__types__ArrayObj interactive;
	hl__types__ArrayObj eventListeners;
	h2d__RenderContext ctx;
	hxd__Window window;
	hxd__SceneEvents events;
	h2d__col__Point shapePoint;
	vvirtual* f$44;
	vvirtual* f$45;
};
#endif

