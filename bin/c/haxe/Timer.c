﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/Timer.h>
void haxe_Timer_run(haxe__Timer);
extern hl_type t$fun_66d087d;
extern hl_type t$ctx_1d76b3f;
extern hl_type t$fun_04cc309;
haxe__MainEvent haxe_MainLoop_add(vclosure*,int*);
extern hl_type t$_f64;
void haxe_MainEvent_delay(haxe__MainEvent,vdynamic*);
void haxe_MainEvent_stop(haxe__MainEvent);
extern hl_type t$haxe_Timer;
extern hl_type t$ctx_fec7ba4;
extern hl_type t$fun_2322471;

void haxe_Timer_new__$1(venum* r0) {
	haxe__Timer r2;
	haxe__MainEvent r1;
	vclosure *r6;
	double r3, r4;
	r2 = ((Enumt$ctx_1d76b3f*)r0)->p1;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->event;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->nextRun;
	r4 = ((Enumt$ctx_1d76b3f*)r0)->p0;
	r3 = r3 + r4;
	r1->nextRun = r3;
	r2 = ((Enumt$ctx_1d76b3f*)r0)->p1;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->run;
	if( r6 == NULL ) hl_null_access();
	r6->hasValue ? ((void (*)(vdynamic*))r6->fun)((vdynamic*)r6->value) : ((void (*)(void))r6->fun)();
	return;
}

void haxe_Timer_new(haxe__Timer r0,int r1) {
	venum *r7;
	haxe__MainEvent r6;
	double r4, r5;
	vclosure *r2;
	vdynamic *r9;
	int *r8;
	r2 = r0->run;
	if( r2 ) goto label$dcfb79f_2_4;
	r2 = hl_alloc_closure_ptr(&t$fun_66d087d,haxe_Timer_run,r0);
	r0->run = r2;
	label$dcfb79f_2_4:
	r4 = (double)r1;
	r5 = 1000.;
	r4 = r4 / r5;
	r7 = hl_alloc_enum(&t$ctx_1d76b3f,0);
	((Enumt$ctx_1d76b3f*)r7)->p0 = (double)r4;
	((Enumt$ctx_1d76b3f*)r7)->p1 = (haxe__Timer)r0;
	r2 = hl_alloc_closure_ptr(&t$fun_04cc309,haxe_Timer_new__$1,r7);
	r8 = NULL;
	r6 = haxe_MainLoop_add(r2,r8);
	r0->event = r6;
	r6 = r0->event;
	if( r6 == NULL ) hl_null_access();
	r9 = hl_alloc_dynamic(&t$_f64);
	r9->v.d = r4;
	haxe_MainEvent_delay(r6,r9);
	return;
}

void haxe_Timer_stop(haxe__Timer r0) {
	haxe__MainEvent r2;
	r2 = r0->event;
	if( !r2 ) goto label$dcfb79f_3_7;
	r2 = r0->event;
	if( r2 == NULL ) hl_null_access();
	haxe_MainEvent_stop(r2);
	r2 = NULL;
	r0->event = r2;
	label$dcfb79f_3_7:
	return;
}

void haxe_Timer_run(haxe__Timer r0) {
	return;
}

void haxe_Timer_delay__$1(venum* r0) {
	haxe__Timer r2;
	vclosure *r3;
	r2 = ((Enumt$ctx_fec7ba4*)r0)->p1;
	if( r2 == NULL ) hl_null_access();
	haxe_Timer_stop(r2);
	r3 = ((Enumt$ctx_fec7ba4*)r0)->p0;
	if( r3 == NULL ) hl_null_access();
	r3->hasValue ? ((void (*)(vdynamic*))r3->fun)((vdynamic*)r3->value) : ((void (*)(void))r3->fun)();
	return;
}

haxe__Timer haxe_Timer_delay(vclosure* r0,int r1) {
	venum *r5;
	haxe__Timer r2;
	vclosure *r4;
	r2 = (haxe__Timer)hl_alloc_obj(&t$haxe_Timer);
	haxe_Timer_new(r2,r1);
	r5 = hl_alloc_enum(&t$ctx_fec7ba4,0);
	((Enumt$ctx_fec7ba4*)r5)->p0 = (vclosure*)r0;
	((Enumt$ctx_fec7ba4*)r5)->p1 = (haxe__Timer)r2;
	r4 = hl_alloc_closure_ptr(&t$fun_2322471,haxe_Timer_delay__$1,r5);
	r2->run = r4;
	return r2;
}

