﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/File.h>
#include <haxe/Timer.h>
haxe__io__Bytes sys_io_File_getBytes(String);
extern hl_type t$ctx_dd63cbb;
extern hl_type t$fun_d59302b;
haxe__Timer haxe_Timer_delay(vclosure*,int);
#include <hl/Window.h>
extern hl_type t$vrt_9e5fd38;
bool hxd_System_get_allowTimeout(void);
bool hxd_System_set_allowTimeout(bool);
extern hl_type t$String;
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$vrt_9739cc8;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$vrt_854e7b3;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern hl_type t$vrt_261b88a;
extern hl_type t$vrt_588df85;
String hl_UI_loadFile(vvirtual*);
extern hl_type t$nul_bool;
String Sys_getCwd(void);
bool StringTools_startsWith(String,String);
String String_substr(String,int,vdynamic*);
extern hl_type t$vrt_a3337d3;
extern hl_type t$fun_85e683d;
extern hl_type t$fun_c987a64;
extern hl_type t$vrt_2aabe7d;
void sys_io_File_saveBytes(String,haxe__io__Bytes);

void hxd_File_browse__$2(venum* r0) {
	haxe__io__Bytes r3;
	vclosure *r2;
	r2 = ((Enumt$ctx_dd63cbb*)r0)->p0;
	if( r2 == NULL ) hl_null_access();
	r3 = ((Enumt$ctx_dd63cbb*)r0)->p1;
	r2->hasValue ? ((void (*)(vdynamic*,haxe__io__Bytes))r2->fun)((vdynamic*)r2->value,r3) : ((void (*)(haxe__io__Bytes))r2->fun)(r3);
	return;
}

void hxd_File_browse__$1(String r0,vclosure* r1) {
	venum *r6;
	haxe__io__Bytes r2;
	haxe__Timer r4;
	vclosure *r5;
	int r7;
	r2 = sys_io_File_getBytes(r0);
	r6 = hl_alloc_enum(&t$ctx_dd63cbb,0);
	((Enumt$ctx_dd63cbb*)r6)->p0 = (vclosure*)r1;
	((Enumt$ctx_dd63cbb*)r6)->p1 = (haxe__io__Bytes)r2;
	r5 = hl_alloc_closure_ptr(&t$fun_d59302b,hxd_File_browse__$2,r6);
	r7 = 0;
	r4 = haxe_Timer_delay(r5,r7);
	return;
}

void hxd_File_browse(vclosure* r0,vvirtual* r1) {
	String r7, r19, r23, r25;
	vdynobj *r4;
	hl__types__ArrayObj r8, r9, r13, r20;
	vvirtual *r3, *r16, *r18, *r21, *r22, *r27, *r29;
	hl_type *r11;
	bool r5, r6;
	vclosure *r28;
	vdynamic *r17, *r24, *r26;
	int r12, r14, r15;
	varray *r10;
	if( r1 ) goto label$d1f956c_3_4;
	r4 = hl_alloc_dynobj();
	r3 = hl_to_virtual(&t$vrt_9e5fd38,(vdynamic*)r4);
	r1 = r3;
	label$d1f956c_3_4:
	r5 = hxd_System_get_allowTimeout();
	r6 = false;
	r6 = hxd_System_set_allowTimeout(r6);
	if( r1 == NULL ) hl_null_access();
	r7 = hl_vfields(r1)[0] ? (*(String*)(hl_vfields(r1)[0])) : (String)hl_dyn_getp(r1->value,470867718/*defaultPath*/,&t$String);
	r8 = hl_vfields(r1)[1] ? (*(hl__types__ArrayObj*)(hl_vfields(r1)[1])) : (hl__types__ArrayObj)hl_dyn_getp(r1->value,485691485/*fileTypes*/,&t$hl_types_ArrayObj);
	if( r8 ) goto label$d1f956c_3_13;
	r9 = NULL;
	goto label$d1f956c_3_40;
	label$d1f956c_3_13:
	r11 = &t$vrt_9739cc8;
	r12 = 0;
	r10 = hl_alloc_array(r11,r12);
	r9 = hl_types_ArrayObj_alloc(r10);
	r12 = 0;
	r13 = hl_vfields(r1)[1] ? (*(hl__types__ArrayObj*)(hl_vfields(r1)[1])) : (hl__types__ArrayObj)hl_dyn_getp(r1->value,485691485/*fileTypes*/,&t$hl_types_ArrayObj);
	label$d1f956c_3_19:
	if( r13 == NULL ) hl_null_access();
	r15 = r13->length;
	if( r12 >= r15 ) goto label$d1f956c_3_40;
	r15 = r13->length;
	if( ((unsigned)r12) < ((unsigned)r15) ) goto label$d1f956c_3_27;
	r16 = NULL;
	goto label$d1f956c_3_30;
	label$d1f956c_3_27:
	r10 = r13->array;
	r17 = ((vdynamic**)(r10 + 1))[r12];
	r16 = hl_to_virtual(&t$vrt_854e7b3,(vdynamic*)r17);
	label$d1f956c_3_30:
	++r12;
	if( r9 == NULL ) hl_null_access();
	r18 = hl_alloc_virtual(&t$vrt_9739cc8);
	if( r16 == NULL ) hl_null_access();
	r19 = hl_vfields(r16)[1] ? (*(String*)(hl_vfields(r16)[1])) : (String)hl_dyn_getp(r16->value,150958933/*name*/,&t$String);
	if( hl_vfields(r18)[1] ) *(String*)(hl_vfields(r18)[1]) = (String)r19; else hl_dyn_setp(r18->value,150958933/*name*/,&t$String,r19);
	r20 = hl_vfields(r16)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r16)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r16->value,-378504571/*extensions*/,&t$hl_types_ArrayObj);
	if( hl_vfields(r18)[0] ) *(hl__types__ArrayObj*)(hl_vfields(r18)[0]) = (hl__types__ArrayObj)r20; else hl_dyn_setp(r18->value,52298172/*exts*/,&t$hl_types_ArrayObj,r20);
	r14 = hl_types_ArrayObj_push(r9,((vdynamic*)r18));
	goto label$d1f956c_3_19;
	label$d1f956c_3_40:
	r21 = hl_alloc_virtual(&t$vrt_261b88a);
	if( hl_vfields(r21)[0] ) *(String*)(hl_vfields(r21)[0]) = (String)r7; else hl_dyn_setp(r21->value,37969014/*fileName*/,&t$String,r7);
	if( hl_vfields(r21)[1] ) *(hl__types__ArrayObj*)(hl_vfields(r21)[1]) = (hl__types__ArrayObj)r9; else hl_dyn_setp(r21->value,155623867/*filters*/,&t$hl_types_ArrayObj,r9);
	if( r1 == NULL ) hl_null_access();
	r19 = hl_vfields(r1)[4] ? (*(String*)(hl_vfields(r1)[4])) : (String)hl_dyn_getp(r1->value,272307608/*title*/,&t$String);
	if( hl_vfields(r21)[2] ) *(String*)(hl_vfields(r21)[2]) = (String)r19; else hl_dyn_setp(r21->value,272307608/*title*/,&t$String,r19);
	r22 = hl_to_virtual(&t$vrt_588df85,(vdynamic*)r21);
	r19 = hl_UI_loadFile(r22);
	r6 = hxd_System_set_allowTimeout(r5);
	if( r19 ) goto label$d1f956c_3_51;
	return;
	label$d1f956c_3_51:
	r24 = hl_vfields(r1)[2] ? (*(vdynamic**)(hl_vfields(r1)[2])) : (vdynamic*)hl_dyn_getp(r1->value,-271834233/*relativePath*/,&t$nul_bool);
	r6 = r24 ? r24->v.b : 0;
	if( !r6 ) goto label$d1f956c_3_63;
	r23 = Sys_getCwd();
	r6 = StringTools_startsWith(r19,r23);
	if( !r6 ) goto label$d1f956c_3_63;
	if( r19 == NULL ) hl_null_access();
	if( r23 == NULL ) hl_null_access();
	r12 = r23->length;
	r26 = NULL;
	r25 = String_substr(r19,r12,r26);
	r19 = r25;
	label$d1f956c_3_63:
	r27 = hl_alloc_virtual(&t$vrt_a3337d3);
	if( hl_vfields(r27)[0] ) *(String*)(hl_vfields(r27)[0]) = (String)r19; else hl_dyn_setp(r27->value,37969014/*fileName*/,&t$String,r19);
	r28 = hl_alloc_closure_ptr(&t$fun_85e683d,hxd_File_browse__$1,r19);
	if( hl_vfields(r27)[1] ) *(vclosure**)(hl_vfields(r27)[1]) = (vclosure*)r28; else hl_dyn_setp(r27->value,129473328/*load*/,&t$fun_c987a64,r28);
	r29 = hl_to_virtual(&t$vrt_2aabe7d,(vdynamic*)r27);
	if( r0 == NULL ) hl_null_access();
	r0->hasValue ? ((void (*)(vdynamic*,vvirtual*))r0->fun)((vdynamic*)r0->value,r29) : ((void (*)(vvirtual*))r0->fun)(r29);
	return;
}

haxe__io__Bytes hxd_File_getBytes(String r0) {
	haxe__io__Bytes r1;
	r1 = sys_io_File_getBytes(r0);
	return r1;
}

void hxd_File_saveBytes(String r0,haxe__io__Bytes r1) {
	sys_io_File_saveBytes(r0,r1);
	return;
}

