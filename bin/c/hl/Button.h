﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_hl__Button
#define INC_hl__Button
typedef struct _hl__$Button *hl__$Button;
typedef struct _hl__Button *hl__Button;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/Window.h>
#include <hl/natives.h>


struct _hl__$Button {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__Button {
	hl_type *$type;
	ui_window* h;
	vclosure* onClick;
};
#endif

