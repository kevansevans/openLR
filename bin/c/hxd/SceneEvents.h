﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__SceneEvents
#define INC_hxd__SceneEvents
typedef struct _hxd__$SceneEvents *hxd__$SceneEvents;
typedef struct _hxd__SceneEvents *hxd__SceneEvents;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/Window.h>
#include <hl/types/ArrayObj.h>
#include <hxd/Event.h>
#include <hxd/Cursor.h>


struct _hxd__$SceneEvents {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hxd__SceneEvents {
	hl_type *$type;
	hxd__Window window;
	hl__types__ArrayObj scenes;
	hl__types__ArrayObj overList;
	hl__types__ArrayObj overCandidates;
	int overIndex;
	vvirtual* currentFocus;
	hl__types__ArrayObj pendingEvents;
	hl__types__ArrayObj pushList;
	vvirtual* currentDrag;
	double mouseX;
	double mouseY;
	int lastTouch;
	hxd__Event focusLost;
	hxd__Event checkPos;
	hxd__Event onOut;
	hxd__Event onOver;
	bool isOut;
	bool enablePhysicalMouse;
	bool mouseCheckMove;
	venum* defaultCursor;
};
#endif

