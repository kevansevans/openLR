﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/fs/CompressIMG.h>
#include <haxe/io/Path.h>
extern String s$format;
vdynamic* hxd_fs_Convert_getParam(hxd__fs__Convert,String);
extern hl_type t$String;
extern hl_type t$_dyn;
extern String s$mips;
bool hxd_fs_Convert_hasParam(hxd__fs__Convert,String);
extern hxd__fs__$CompressIMG g$_hxd_fs_CompressIMG;
vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap,String);
extern hl_type t$haxe_io_Path;
void haxe_io_Path_new(haxe__io__Path,String);
extern String s$tmp_;
String String___add__(String,String);
String haxe_io_Path_toString(haxe__io__Path);
void sys_FileSystem_deleteFile(String);
void sys_io_File_copy(String,String);
#include <hl/natives.h>
extern String s$_f;
extern String s$_y;
extern String s$_nologo;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern String s$_m;
extern String s$1;
hl__types__ArrayObj hl_types_ArrayObj_concat(hl__types__ArrayObj,hl__types__ArrayObj);
extern String s$texconv;
void hxd_fs_Convert_command(hxd__fs__Convert,String,hl__types__ArrayObj);
extern String s$tmp_DDS;
void sys_FileSystem_rename(String,String);
extern String s$653db5a;
extern String s$_miplevels;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern String s$20;
extern String s$alpha;
extern String s$BC1;
int String___compare(String,vdynamic*);
extern String s$_DXT1UseAlpha;
extern String s$_AlphaThreshold;
extern String s$;
String Std_string(vdynamic*);
extern String s$_fd;
extern String s$CompressonatorCLI;
void hxd_fs_Convert_new(hxd__fs__Convert,vvirtual*,String);

void hxd_fs_CompressIMG_convert(hxd__fs__CompressIMG r0) {
	String r2, r5, r9, r11, r14;
	hl__types__ArrayObj r15, r20, r21;
	haxe__ds__StringMap r7;
	hl_type *r17;
	haxe__io__Path r10, r12;
	bool r4, r19;
	hxd__fs__$CompressIMG r8;
	vdynamic *r1, *r6, *r13;
	int r18;
	varray *r16;
	hl_trap_ctx trap$0;
	r2 = (String)s$format;
	r1 = hxd_fs_Convert_getParam(((hxd__fs__Convert)r0),r2);
	r2 = (String)hl_dyn_castp(&r1,&t$_dyn,&t$String);
	r5 = (String)s$mips;
	r4 = hxd_fs_Convert_hasParam(((hxd__fs__Convert)r0),r5);
	if( !r4 ) goto label$02763ed_1_13;
	r5 = (String)s$mips;
	r1 = hxd_fs_Convert_getParam(((hxd__fs__Convert)r0),r5);
	r4 = true;
	r6 = hl_alloc_dynbool(r4);
	{ int i = hl_dyn_compare((vdynamic*)r1,(vdynamic*)r6); if( i != 0 ) goto label$02763ed_1_13; };
	r4 = true;
	goto label$02763ed_1_14;
	label$02763ed_1_13:
	r4 = false;
	label$02763ed_1_14:
	r8 = (hxd__fs__$CompressIMG)g$_hxd_fs_CompressIMG;
	r7 = r8->TEXCONV_FMT;
	if( r7 == NULL ) hl_null_access();
	r1 = haxe_ds_StringMap_get(r7,r2);
	r5 = (String)r1;
	if( !r5 ) goto label$02763ed_1_84;
	r10 = (haxe__io__Path)hl_alloc_obj(&t$haxe_io_Path);
	r9 = r0->dstPath;
	haxe_io_Path_new(r10,r9);
	r9 = (String)s$tmp_;
	r12 = (haxe__io__Path)hl_alloc_obj(&t$haxe_io_Path);
	r11 = r0->srcPath;
	haxe_io_Path_new(r12,r11);
	r11 = r12->ext;
	r9 = String___add__(r9,r11);
	r10->ext = r9;
	r9 = haxe_io_Path_toString(r10);
	hl_trap(trap$0,r1,label$02763ed_1_35);
	sys_FileSystem_deleteFile(r9);
	hl_endtrap(trap$0);
	goto label$02763ed_1_36;
	label$02763ed_1_35:
	r6 = NULL;
	label$02763ed_1_36:
	hl_trap(trap$0,r6,label$02763ed_1_41);
	r11 = r0->dstPath;
	sys_FileSystem_deleteFile(r11);
	hl_endtrap(trap$0);
	goto label$02763ed_1_42;
	label$02763ed_1_41:
	r13 = NULL;
	label$02763ed_1_42:
	r11 = r0->srcPath;
	sys_io_File_copy(r11,r9);
	r17 = &t$String;
	r18 = 5;
	r16 = hl_alloc_array(r17,r18);
	r11 = (String)s$_f;
	r18 = 0;
	((String*)(r16 + 1))[r18] = r11;
	r18 = 1;
	((String*)(r16 + 1))[r18] = r5;
	r11 = (String)s$_y;
	r18 = 2;
	((String*)(r16 + 1))[r18] = r11;
	r11 = (String)s$_nologo;
	r18 = 3;
	((String*)(r16 + 1))[r18] = r11;
	r18 = 4;
	((String*)(r16 + 1))[r18] = r9;
	r15 = hl_types_ArrayObj_alloc(r16);
	if( r4 ) goto label$02763ed_1_75;
	r17 = &t$String;
	r18 = 2;
	r16 = hl_alloc_array(r17,r18);
	r11 = (String)s$_m;
	r18 = 0;
	((String*)(r16 + 1))[r18] = r11;
	r11 = (String)s$1;
	r18 = 1;
	((String*)(r16 + 1))[r18] = r11;
	r20 = hl_types_ArrayObj_alloc(r16);
	if( r20 == NULL ) hl_null_access();
	r20 = hl_types_ArrayObj_concat(r20,r15);
	r15 = r20;
	label$02763ed_1_75:
	r11 = (String)s$texconv;
	hxd_fs_Convert_command(((hxd__fs__Convert)r0),r11,r15);
	sys_FileSystem_deleteFile(r9);
	r11 = (String)s$tmp_DDS;
	r10->ext = r11;
	r11 = haxe_io_Path_toString(r10);
	r14 = r0->dstPath;
	sys_FileSystem_rename(r11,r14);
	return;
	label$02763ed_1_84:
	r17 = &t$String;
	r18 = 1;
	r16 = hl_alloc_array(r17,r18);
	r9 = (String)s$653db5a;
	r18 = 0;
	((String*)(r16 + 1))[r18] = r9;
	r15 = hl_types_ArrayObj_alloc(r16);
	if( !r4 ) goto label$02763ed_1_97;
	if( r15 == NULL ) hl_null_access();
	r9 = (String)s$_miplevels;
	r18 = hl_types_ArrayObj_push(r15,((vdynamic*)r9));
	r9 = (String)s$20;
	r18 = hl_types_ArrayObj_push(r15,((vdynamic*)r9));
	label$02763ed_1_97:
	r9 = (String)s$alpha;
	r19 = hxd_fs_Convert_hasParam(((hxd__fs__Convert)r0),r9);
	if( !r19 ) goto label$02763ed_1_125;
	r11 = (String)s$BC1;
	if( r2 != r11 && (!r2 || !r11 || String___compare(r2,(vdynamic*)r11) != 0) ) goto label$02763ed_1_125;
	if( r15 == NULL ) hl_null_access();
	r17 = &t$String;
	r18 = 4;
	r16 = hl_alloc_array(r17,r18);
	r9 = (String)s$_DXT1UseAlpha;
	r18 = 0;
	((String*)(r16 + 1))[r18] = r9;
	r9 = (String)s$1;
	r18 = 1;
	((String*)(r16 + 1))[r18] = r9;
	r9 = (String)s$_AlphaThreshold;
	r18 = 2;
	((String*)(r16 + 1))[r18] = r9;
	r9 = (String)s$;
	r11 = (String)s$alpha;
	r1 = hxd_fs_Convert_getParam(((hxd__fs__Convert)r0),r11);
	r11 = Std_string(r1);
	r9 = String___add__(r9,r11);
	r18 = 3;
	((String*)(r16 + 1))[r18] = r9;
	r21 = hl_types_ArrayObj_alloc(r16);
	r20 = hl_types_ArrayObj_concat(r15,r21);
	r15 = r20;
	label$02763ed_1_125:
	if( r15 == NULL ) hl_null_access();
	r17 = &t$String;
	r18 = 4;
	r16 = hl_alloc_array(r17,r18);
	r9 = (String)s$_fd;
	r18 = 0;
	((String*)(r16 + 1))[r18] = r9;
	r9 = (String)s$;
	r11 = (String)s$format;
	r1 = hxd_fs_Convert_getParam(((hxd__fs__Convert)r0),r11);
	r11 = Std_string(r1);
	r9 = String___add__(r9,r11);
	r18 = 1;
	((String*)(r16 + 1))[r18] = r9;
	r9 = r0->srcPath;
	r18 = 2;
	((String*)(r16 + 1))[r18] = r9;
	r9 = r0->dstPath;
	r18 = 3;
	((String*)(r16 + 1))[r18] = r9;
	r21 = hl_types_ArrayObj_alloc(r16);
	r20 = hl_types_ArrayObj_concat(r15,r21);
	r9 = (String)s$CompressonatorCLI;
	hxd_fs_Convert_command(((hxd__fs__Convert)r0),r9,r20);
	return;
}

void hxd_fs_CompressIMG_new(hxd__fs__CompressIMG r0,vvirtual* r1,String r2) {
	hxd_fs_Convert_new(((hxd__fs__Convert)r0),r1,r2);
	return;
}

