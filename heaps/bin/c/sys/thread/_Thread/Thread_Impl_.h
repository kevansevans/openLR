﻿// Generated by HLC 4.2.0 (HL v5)
#ifndef INC_sys__thread___Thread__Thread_Impl_
#define INC_sys__thread___Thread__Thread_Impl_
typedef struct _sys__thread___Thread__$Thread_Impl_ *sys__thread___Thread__$Thread_Impl_;
typedef struct _sys__thread___Thread__Thread_Impl_ *sys__thread___Thread__Thread_Impl_;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <sys/thread/_Thread/HaxeThread.h>
#include <sys/thread/EventLoop.h>


struct _sys__thread___Thread__$Thread_Impl_ {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* current;
	vclosure* get_events;
	vclosure* initEventLoop;
	vclosure* processEvents;
};
struct _sys__thread___Thread__Thread_Impl_ {
	hl_type *$type;
};
#endif

