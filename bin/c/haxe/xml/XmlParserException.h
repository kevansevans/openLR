﻿// Generated by HLC 4.1.4 (HL v5)
#ifndef INC_haxe__xml__XmlParserException
#define INC_haxe__xml__XmlParserException
typedef struct _haxe__xml__$XmlParserException *haxe__xml__$XmlParserException;
typedef struct _haxe__xml__XmlParserException *haxe__xml__XmlParserException;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _haxe__xml__$XmlParserException {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _haxe__xml__XmlParserException {
	hl_type *$type;
	String message;
	int lineNumber;
	int positionAtLine;
	int position;
	String xml;
};
#endif

