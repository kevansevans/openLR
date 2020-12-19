﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_h3d__scene__Interactive
#define INC_h3d__scene__Interactive
typedef struct _h3d__scene__$Interactive *h3d__scene__$Interactive;
typedef struct _h3d__scene__Interactive *h3d__scene__Interactive;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/scene/Object.h>
#include <hl/types/ArrayObj.h>
#include <h3d/Matrix.h>
#include <h3d/anim/Animation.h>
#include <h3d/col/Ray.h>
#include <h3d/col/Frustum.h>
#include <h3d/Quat.h>
#include <hxd/Cursor.h>
#include <h3d/scene/Scene.h>
#include <h3d/Vector.h>
#include <hxd/Event.h>
#include <hxd/SceneEvents.h>


struct _h3d__scene__$Interactive {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _h3d__scene__Interactive {
	hl_type *$type;
	int flags;
	hl__types__ArrayObj children;
	h3d__scene__Object parent;
	String name;
	double x;
	double y;
	double z;
	double scaleX;
	double scaleY;
	double scaleZ;
	h3d__scene__Object follow;
	h3d__Matrix defaultTransform;
	h3d__anim__Animation currentAnimation;
	vvirtual* cullingCollider;
	h3d__Matrix absPos;
	h3d__Matrix invPos;
	h3d__Quat qRot;
	int lastFrame;
	vvirtual* f$18;
	vvirtual* shape;
	vvirtual* preciseShape;
	int priority;
	venum* cursor;
	bool cancelEvents;
	bool propagateEvents;
	bool enableRightButton;
	bool bestMatch;
	h3d__scene__Scene scene;
	int mouseDownButton;
	h3d__Vector hitPoint;
	vclosure* onOver;
	vclosure* onOut;
	vclosure* onPush;
	vclosure* onRelease;
	vclosure* onReleaseOutside;
	vclosure* onClick;
	vclosure* onMove;
	vclosure* onWheel;
	vclosure* onFocus;
	vclosure* onFocusLost;
	vclosure* onKeyUp;
	vclosure* onKeyDown;
	vclosure* onCheck;
	vclosure* onTextInput;
	vvirtual* f$44;
};
#endif

