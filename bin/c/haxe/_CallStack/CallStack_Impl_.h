﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_haxe___CallStack__CallStack_Impl_
#define INC_haxe___CallStack__CallStack_Impl_
typedef struct _haxe___CallStack__$CallStack_Impl_ *haxe___CallStack__$CallStack_Impl_;
typedef struct _haxe___CallStack__CallStack_Impl_ *haxe___CallStack__CallStack_Impl_;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <haxe/StackItem.h>
#include <_std/StringBuf.h>


struct _haxe___CallStack__$CallStack_Impl_ {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* callStack;
	vclosure* exceptionStack;
	vclosure* toString;
	vclosure* subtract;
	vclosure* equalItems;
	vclosure* itemToString;
};
struct _haxe___CallStack__CallStack_Impl_ {
	hl_type *$type;
};
#endif

