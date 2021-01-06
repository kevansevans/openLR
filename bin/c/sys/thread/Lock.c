﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <sys/thread/Lock.h>
#include <hl/natives.h>
hl_deque* sys_thread__Deque_Deque_Impl___new(void);
extern hl_type t$nul_bool;
extern hl_type t$_dyn;

void sys_thread_Lock_new(sys__thread__Lock r0) {
	hl_deque *r1;
	r1 = sys_thread__Deque_Deque_Impl___new();
	r0->deque = r1;
	return;
}

bool sys_thread_Lock_wait(sys__thread__Lock r0,vdynamic* r1) {
	bool r4;
	hl_deque *r3;
	double r6, r7;
	vdynamic *r2, *r5;
	if( r1 ) goto label$7cedd84_2_7;
	r3 = r0->deque;
	r4 = true;
	r2 = hl_deque_pop(r3,r4);
	r5 = (vdynamic*)hl_dyn_castp(&r2,&t$_dyn,&t$nul_bool);
	r4 = true;
	return r4;
	label$7cedd84_2_7:
	r6 = hl_sys_time();
	r7 = r1 ? r1->v.d : 0;
	r6 = r6 + r7;
	label$7cedd84_2_10:
	r4 = true;
	if( !r4 ) goto label$7cedd84_2_24;
	r3 = r0->deque;
	r4 = false;
	r2 = hl_deque_pop(r3,r4);
	r5 = (vdynamic*)hl_dyn_castp(&r2,&t$_dyn,&t$nul_bool);
	if( !r5 ) goto label$7cedd84_2_20;
	r4 = true;
	return r4;
	label$7cedd84_2_20:
	r7 = hl_sys_time();
	if( r7 < r6 ) goto label$7cedd84_2_23;
	goto label$7cedd84_2_24;
	label$7cedd84_2_23:
	goto label$7cedd84_2_10;
	label$7cedd84_2_24:
	r4 = false;
	return r4;
}

