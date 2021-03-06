﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/fs/EmbedFileSystem.h>
extern String s$R_;
extern hxd__fs__$EmbedFileSystem g$_hxd_fs_EmbedFileSystem;
extern String s$b14a7b8;
String EReg_replace(EReg,String,String);
String String___add__(String,String);
#include <hl/types/ArrayObj.h>
extern String s$5058f1a;
int String___compare(String,vdynamic*);
extern hl_type t$String;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern String s$6666cd7;
hl__types__ArrayObj String_split(String,String);
vdynamic* Reflect_field(vdynamic*,String);
#include <hxd/fs/NotFound.h>
#include <hxd/fs/_EmbedFileSystem/EmbedEntry.h>
extern hl_type t$hxd_fs_NotFound;
void hxd_fs_NotFound_new(hxd__fs__NotFound,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
extern hl_type t$hxd_fs__EmbedFileSystem_EmbedEntry;
vdynamic* hl_types_ArrayObj_pop(hl__types__ArrayObj);
void hxd_fs__EmbedFileSystem_EmbedEntry_new(hxd__fs___EmbedFileSystem__EmbedEntry,hxd__fs__EmbedFileSystem,String,String,String);

void hxd_fs_EmbedFileSystem_new(hxd__fs__EmbedFileSystem r0,vdynamic* r1) {
	r0->root = r1;
	return;
}

String hxd_fs_EmbedFileSystem_resolve(String r0) {
	String r1, r2, r5;
	hxd__fs__$EmbedFileSystem r4;
	EReg r3;
	r1 = (String)s$R_;
	r4 = (hxd__fs__$EmbedFileSystem)g$_hxd_fs_EmbedFileSystem;
	r3 = r4->invalidChars;
	if( r3 == NULL ) hl_null_access();
	r5 = (String)s$b14a7b8;
	r2 = EReg_replace(r3,r0,r5);
	r1 = String___add__(r1,r2);
	return r1;
}

hl__types__ArrayObj hxd_fs_EmbedFileSystem_splitPath(hxd__fs__EmbedFileSystem r0,String r1) {
	String r2;
	hl__types__ArrayObj r3;
	hl_type *r5;
	int r6;
	varray *r4;
	r2 = (String)s$5058f1a;
	if( r1 != r2 && (!r1 || !r2 || String___compare(r1,(vdynamic*)r2) != 0) ) goto label$1f0fdd4_3_7;
	r5 = &t$String;
	r6 = 0;
	r4 = hl_alloc_array(r5,r6);
	r3 = hl_types_ArrayObj_alloc(r4);
	return r3;
	label$1f0fdd4_3_7:
	if( r1 == NULL ) hl_null_access();
	r2 = (String)s$6666cd7;
	r3 = String_split(r1,r2);
	return r3;
}

bool hxd_fs_EmbedFileSystem_exists(hxd__fs__EmbedFileSystem r0,String r1) {
	String r5;
	hl__types__ArrayObj r4;
	bool r9;
	vdynamic *r2, *r7;
	varray *r8;
	int r3, r6;
	r2 = r0->root;
	r3 = 0;
	r4 = hxd_fs_EmbedFileSystem_splitPath(r0,r1);
	label$1f0fdd4_4_3:
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	if( r3 >= r6 ) goto label$1f0fdd4_4_21;
	r6 = r4->length;
	if( ((unsigned)r3) < ((unsigned)r6) ) goto label$1f0fdd4_4_11;
	r5 = NULL;
	goto label$1f0fdd4_4_14;
	label$1f0fdd4_4_11:
	r8 = r4->array;
	r7 = ((vdynamic**)(r8 + 1))[r3];
	r5 = (String)r7;
	label$1f0fdd4_4_14:
	++r3;
	r7 = Reflect_field(r2,r5);
	r2 = r7;
	if( r7 ) goto label$1f0fdd4_4_20;
	r9 = false;
	return r9;
	label$1f0fdd4_4_20:
	goto label$1f0fdd4_4_3;
	label$1f0fdd4_4_21:
	r9 = true;
	return r9;
}

hxd__fs___EmbedFileSystem__EmbedEntry hxd_fs_EmbedFileSystem_get(hxd__fs__EmbedFileSystem r0,String r1) {
	String r4, r9, r10;
	hl__types__ArrayObj r8;
	hxd__fs__NotFound r6;
	hxd__fs___EmbedFileSystem__EmbedEntry r7;
	bool r3;
	vdynamic *r5;
	r3 = hxd_fs_EmbedFileSystem_exists(r0,r1);
	if( r3 ) goto label$1f0fdd4_5_6;
	r6 = (hxd__fs__NotFound)hl_alloc_obj(&t$hxd_fs_NotFound);
	hxd_fs_NotFound_new(r6,r1);
	r5 = haxe_Exception_thrown(((vdynamic*)r6));
	hl_throw((vdynamic*)r5);
	label$1f0fdd4_5_6:
	r4 = hxd_fs_EmbedFileSystem_resolve(r1);
	r7 = (hxd__fs___EmbedFileSystem__EmbedEntry)hl_alloc_obj(&t$hxd_fs__EmbedFileSystem_EmbedEntry);
	if( r1 == NULL ) hl_null_access();
	r10 = (String)s$6666cd7;
	r8 = String_split(r1,r10);
	if( r8 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_pop(r8);
	r9 = (String)r5;
	hxd_fs__EmbedFileSystem_EmbedEntry_new(r7,r0,r9,r1,r4);
	return r7;
}

