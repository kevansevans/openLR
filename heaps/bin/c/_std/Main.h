﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC__std__Main
#define INC__std__Main
typedef struct _$Main *$Main;
typedef struct _Main *Main;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <h3d/Engine.h>
#include <components/stage/Canvas.h>
#include <h2d/Interactive.h>
#include <components/stage/LRConsole.h>
#include <components/tool/ToolBehavior.h>
#include <components/ui/Toolbar.h>
#include <hxlr/engine/Grid.h>
#include <components/managers/Riders.h>
#include <components/managers/Simulation.h>
#include <file/SaveLoad.h>
#include <components/stage/TextInfo.h>
#include <components/managers/Musicplayer.h>
#include <utils/TableRNG.h>
#include <components/stage/Camera.h>
#include <hxd/App.h>
#include <h3d/scene/Scene.h>
#include <h2d/Scene.h>
#include <hxd/SceneEvents.h>
#include <h2d/Graphics.h>
#include <h2d/Mask.h>


struct _$Main {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	h3d__Engine locengine;
	components__stage__Canvas canvas;
	int viewGridSize;
	h2d__Interactive canvas_interaction;
	components__stage__LRConsole console;
	components__tool__ToolBehavior toolControl;
	components__ui__Toolbar toolbar;
	String build;
	hxlr__engine__Grid grid;
	components__managers__Riders riders;
	components__managers__Simulation simulation;
	file__SaveLoad saveload;
	String trackName;
	String authorName;
	String songName;
	components__stage__TextInfo textinfo;
	components__managers__Musicplayer audio;
	utils__TableRNG rng;
	components__stage__Camera camera;
	vclosure* main;
};
struct _Main {
	hl_type *$type;
	h3d__Engine engine;
	h3d__scene__Scene s3d;
	h2d__Scene s2d;
	hxd__SceneEvents sevents;
	bool isDisposed;
	vvirtual* f$5;
	h2d__Graphics ruler;
	h2d__Mask mask;
};
#endif

