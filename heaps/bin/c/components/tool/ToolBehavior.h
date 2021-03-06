﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_components__tool__ToolBehavior
#define INC_components__tool__ToolBehavior
typedef struct _components__tool__$ToolBehavior *components__tool__$ToolBehavior;
typedef struct _components__tool__ToolBehavior *components__tool__ToolBehavior;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <components/tool/ToolMode.h>
#include <hxd/BitmapData.h>
#include <hxd/Cursor.h>
#include <h2d/col/Point.h>
#include <hxlr/lines/LineBase.h>


struct _components__tool__$ToolBehavior {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _components__tool__ToolBehavior {
	hl_type *$type;
	venum* tool;
	int color;
	hxd__BitmapData bitmapPencilBlue;
	hxd__BitmapData bitmapPencilRed;
	hxd__BitmapData bitmapPencilGreen;
	venum* cursorPencilBlue;
	venum* cursorPencilRed;
	venum* cursorPencilGreen;
	hxd__BitmapData bitmapLineBlue;
	hxd__BitmapData bitmapLineRed;
	hxd__BitmapData bitmapLineGreen;
	venum* cursorLineBlue;
	venum* cursorLineRed;
	venum* cursorLineGreen;
	hxd__BitmapData bitmapEraser;
	hxd__BitmapData bitmapEraserBlue;
	hxd__BitmapData bitmapEraserRed;
	hxd__BitmapData bitmapEraserGreen;
	venum* cursorEraser;
	venum* cursorEraserBlue;
	venum* cursorEraserRed;
	venum* cursorEraserGreen;
	bool lineSnapping;
	bool gridSnapping;
	bool colorEraser;
	h2d__col__Point mouseStart;
	h2d__col__Point mouseEnd;
	bool leftIsDown;
	bool middleIsDown;
	bool rightIsDown;
	bool shifted;
	hxlr__lines__LineBase tempLine;
	h2d__col__Point lastViewedPosition;
};
#endif

