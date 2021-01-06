﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <sys/FileSystem.h>
vdynamic* String_charCodeAt(String,int);
extern hl_type t$_i32;
String haxe_io_Path_addTrailingSlash(String);
extern String s$6666cd7;
int String___compare(String,vdynamic*);
String haxe_io_Path_removeTrailingSlashes(String);
vbyte* Sys_getPath(String);
#include <hl/natives.h>
#include <_std/SysError.h>
extern hl_type t$SysError;
extern String s$Failed_to_rename_;
String String___add__(String,String);
extern String s$_to_;
void SysError_new(SysError,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
extern hl_type t$String;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
String haxe_io_Path_directory(String);
void hl_types_ArrayObj_unshift(hl__types__ArrayObj,vdynamic*);
extern String s$Failed_to_create_directory_;
extern String s$Can_t_delete_file_;
extern String s$Failed_to_read_directory_;
String Sys_makePath(vbyte*);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);

bool sys_FileSystem_exists(String r0) {
	String r3, r8;
	bool r1;
	vdynamic *r4, *r6;
	int r5, r7;
	vbyte *r2;
	if( r0 == NULL ) hl_null_access();
	r5 = 1;
	r4 = String_charCodeAt(r0,r5);
	r5 = 58;
	r6 = hl_alloc_dynamic(&t$_i32);
	r6->v.i = r5;
	if( r4 != r6 && (!r4 || !r6 || (r4->v.i != r6->v.i)) ) goto label$71a15a3_1_11;
	r5 = r0->length;
	r7 = 3;
	if( r7 < r5 ) goto label$71a15a3_1_11;
	r3 = haxe_io_Path_addTrailingSlash(r0);
	goto label$71a15a3_1_16;
	label$71a15a3_1_11:
	r8 = (String)s$6666cd7;
	if( r0 != r8 && (!r0 || !r8 || String___compare(r0,(vdynamic*)r8) != 0) ) goto label$71a15a3_1_15;
	r3 = (String)s$6666cd7;
	goto label$71a15a3_1_16;
	label$71a15a3_1_15:
	r3 = haxe_io_Path_removeTrailingSlashes(r0);
	label$71a15a3_1_16:
	r2 = Sys_getPath(r3);
	r1 = hl_sys_exists(r2);
	return r1;
}

void sys_FileSystem_rename(String r0,String r1) {
	String r5, r9;
	SysError r8;
	bool r3;
	vdynamic *r7;
	vbyte *r4, *r6;
	r4 = Sys_getPath(r0);
	r6 = Sys_getPath(r1);
	r3 = hl_sys_rename(r4,r6);
	if( r3 ) goto label$71a15a3_2_13;
	r8 = (SysError)hl_alloc_obj(&t$SysError);
	r5 = (String)s$Failed_to_rename_;
	r5 = String___add__(r5,r0);
	r9 = (String)s$_to_;
	r5 = String___add__(r5,r9);
	r5 = String___add__(r5,r1);
	SysError_new(r8,r5);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$71a15a3_2_13:
	return;
}

bool sys_FileSystem_isDirectory(String r0) {
	String r3, r8;
	bool r1;
	vdynamic *r4, *r6;
	int r5, r7;
	vbyte *r2;
	if( r0 == NULL ) hl_null_access();
	r5 = 1;
	r4 = String_charCodeAt(r0,r5);
	r5 = 58;
	r6 = hl_alloc_dynamic(&t$_i32);
	r6->v.i = r5;
	if( r4 != r6 && (!r4 || !r6 || (r4->v.i != r6->v.i)) ) goto label$71a15a3_3_11;
	r5 = r0->length;
	r7 = 3;
	if( r7 < r5 ) goto label$71a15a3_3_11;
	r3 = haxe_io_Path_addTrailingSlash(r0);
	goto label$71a15a3_3_16;
	label$71a15a3_3_11:
	r8 = (String)s$6666cd7;
	if( r0 != r8 && (!r0 || !r8 || String___compare(r0,(vdynamic*)r8) != 0) ) goto label$71a15a3_3_15;
	r3 = (String)s$6666cd7;
	goto label$71a15a3_3_16;
	label$71a15a3_3_15:
	r3 = haxe_io_Path_removeTrailingSlashes(r0);
	label$71a15a3_3_16:
	r2 = Sys_getPath(r3);
	r1 = hl_sys_is_dir(r2);
	return r1;
}

void sys_FileSystem_createDirectory(String r0) {
	String r1, r3, r9, r10;
	SysError r17;
	hl__types__ArrayObj r4;
	hl_type *r6;
	bool r8;
	vdynamic *r13, *r14, *r15;
	vbyte *r16;
	int r7, r11, r12;
	varray *r5;
	r1 = haxe_io_Path_addTrailingSlash(r0);
	r3 = NULL;
	r6 = &t$String;
	r7 = 0;
	r5 = hl_alloc_array(r6,r7);
	r4 = hl_types_ArrayObj_alloc(r5);
	label$71a15a3_4_6:
	r8 = true;
	if( !r8 ) goto label$71a15a3_4_17;
	r9 = haxe_io_Path_directory(r1);
	r3 = r9;
	if( r1 != r3 && (!r1 || !r3 || String___compare(r1,(vdynamic*)r3) != 0) ) goto label$71a15a3_4_13;
	goto label$71a15a3_4_17;
	label$71a15a3_4_13:
	if( r4 == NULL ) hl_null_access();
	hl_types_ArrayObj_unshift(r4,((vdynamic*)r1));
	r1 = r3;
	goto label$71a15a3_4_6;
	label$71a15a3_4_17:
	r7 = 0;
	label$71a15a3_4_18:
	if( r4 == NULL ) hl_null_access();
	r12 = r4->length;
	if( r7 >= r12 ) goto label$71a15a3_4_51;
	r12 = r4->length;
	if( ((unsigned)r7) < ((unsigned)r12) ) goto label$71a15a3_4_26;
	r9 = NULL;
	goto label$71a15a3_4_29;
	label$71a15a3_4_26:
	r5 = r4->array;
	r13 = ((vdynamic**)(r5 + 1))[r7];
	r9 = (String)r13;
	label$71a15a3_4_29:
	++r7;
	if( r9 == NULL ) hl_null_access();
	r11 = r9->length;
	r12 = 1;
	r11 = r11 - r12;
	r14 = String_charCodeAt(r9,r11);
	r11 = 58;
	r15 = hl_alloc_dynamic(&t$_i32);
	r15->v.i = r11;
	if( r14 == r15 || (r14 && r15 && (r14->v.i == r15->v.i)) ) goto label$71a15a3_4_50;
	r8 = sys_FileSystem_exists(r9);
	if( r8 ) goto label$71a15a3_4_50;
	r16 = Sys_getPath(r9);
	r11 = 493;
	r8 = hl_sys_create_dir(r16,r11);
	if( r8 ) goto label$71a15a3_4_50;
	r17 = (SysError)hl_alloc_obj(&t$SysError);
	r10 = (String)s$Failed_to_create_directory_;
	r10 = String___add__(r10,r9);
	SysError_new(r17,r10);
	r13 = haxe_Exception_thrown(((vdynamic*)r17));
	hl_throw((vdynamic*)r13);
	label$71a15a3_4_50:
	goto label$71a15a3_4_18;
	label$71a15a3_4_51:
	return;
}

void sys_FileSystem_deleteFile(String r0) {
	String r4;
	SysError r6;
	bool r2;
	vdynamic *r5;
	vbyte *r3;
	r3 = Sys_getPath(r0);
	r2 = hl_sys_delete(r3);
	if( r2 ) goto label$71a15a3_5_9;
	r6 = (SysError)hl_alloc_obj(&t$SysError);
	r4 = (String)s$Can_t_delete_file_;
	r4 = String___add__(r4,r0);
	SysError_new(r6,r4);
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$71a15a3_5_9:
	return;
}

hl__types__ArrayObj sys_FileSystem_readDirectory(String r0) {
	String r3;
	hl__types__ArrayObj r8;
	SysError r7;
	hl_type *r9;
	vdynamic *r6;
	int r10, r11, r12;
	vbyte *r2;
	varray *r1, *r5;
	r2 = Sys_getPath(r0);
	r1 = hl_sys_read_dir(r2);
	if( r1 ) goto label$71a15a3_6_9;
	r7 = (SysError)hl_alloc_obj(&t$SysError);
	r3 = (String)s$Failed_to_read_directory_;
	r3 = String___add__(r3,r0);
	SysError_new(r7,r3);
	r6 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r6);
	label$71a15a3_6_9:
	r9 = &t$String;
	r10 = 0;
	r5 = hl_alloc_array(r9,r10);
	r8 = hl_types_ArrayObj_alloc(r5);
	r10 = 0;
	label$71a15a3_6_14:
	r12 = r1->size;
	if( r10 >= r12 ) goto label$71a15a3_6_23;
	r2 = ((vbyte**)(r1 + 1))[r10];
	++r10;
	if( r8 == NULL ) hl_null_access();
	r3 = Sys_makePath(r2);
	r11 = hl_types_ArrayObj_push(r8,((vdynamic*)r3));
	goto label$71a15a3_6_14;
	label$71a15a3_6_23:
	return r8;
}

