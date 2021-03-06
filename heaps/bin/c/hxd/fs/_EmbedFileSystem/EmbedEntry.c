﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/fs/_EmbedFileSystem/EmbedEntry.h>
void hxd_fs__EmbedFileSystem_EmbedEntry_open(hxd__fs___EmbedFileSystem__EmbedEntry);
haxe__io__Bytes haxe_Resource_getBytes(String);
extern String s$Missing_resource_;
String String___add__(String,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
int haxe_io_Bytes_get(haxe__io__Bytes,int);
void haxe_io_Bytes_blit(haxe__io__Bytes,int,haxe__io__Bytes,int,int);
#include <hxd/BitmapData.h>
extern String s$TODO;
extern String s$5058f1a;
int String___compare(String,vdynamic*);
extern String s$_root_;

void hxd_fs__EmbedFileSystem_EmbedEntry_new(hxd__fs___EmbedFileSystem__EmbedEntry r0,hxd__fs__EmbedFileSystem r1,String r2,String r3,String r4) {
	r0->fs = r1;
	r0->name = r2;
	r0->relPath = r3;
	r0->data = r4;
	return;
}

haxe__io__Bytes hxd_fs__EmbedFileSystem_EmbedEntry_getBytes(hxd__fs___EmbedFileSystem__EmbedEntry r0) {
	haxe__io__Bytes r2;
	r2 = r0->bytes;
	if( r2 ) goto label$e1cd9d1_2_3;
	hxd_fs__EmbedFileSystem_EmbedEntry_open(r0);
	label$e1cd9d1_2_3:
	r2 = r0->bytes;
	return r2;
}

void hxd_fs__EmbedFileSystem_EmbedEntry_open(hxd__fs___EmbedFileSystem__EmbedEntry r0) {
	String r3, r5;
	haxe__io__Bytes r2;
	vdynamic *r4;
	int r6;
	r2 = r0->bytes;
	if( r2 ) goto label$e1cd9d1_3_12;
	r3 = r0->data;
	r2 = haxe_Resource_getBytes(r3);
	r0->bytes = r2;
	r2 = r0->bytes;
	if( r2 ) goto label$e1cd9d1_3_12;
	r3 = (String)s$Missing_resource_;
	r5 = r0->data;
	r3 = String___add__(r3,r5);
	r4 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r4);
	label$e1cd9d1_3_12:
	r6 = 0;
	r0->readPos = r6;
	return;
}

void hxd_fs__EmbedFileSystem_EmbedEntry_skip(hxd__fs___EmbedFileSystem__EmbedEntry r0,int r1) {
	int r2;
	r2 = r0->readPos;
	r2 = r2 + r1;
	r0->readPos = r2;
	return;
}

int hxd_fs__EmbedFileSystem_EmbedEntry_readByte(hxd__fs___EmbedFileSystem__EmbedEntry r0) {
	haxe__io__Bytes r2;
	int r1, r3;
	r2 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r1 = r0->readPos;
	r3 = r1;
	++r1;
	r0->readPos = r1;
	r1 = haxe_io_Bytes_get(r2,r3);
	return r1;
}

void hxd_fs__EmbedFileSystem_EmbedEntry_read(hxd__fs___EmbedFileSystem__EmbedEntry r0,haxe__io__Bytes r1,int r2,int r3) {
	haxe__io__Bytes r6;
	int r5, r7;
	if( r1 == NULL ) hl_null_access();
	r6 = r0->bytes;
	r7 = r0->readPos;
	haxe_io_Bytes_blit(r1,r2,r6,r7,r3);
	r5 = r0->readPos;
	r5 = r5 + r3;
	r0->readPos = r5;
	return;
}

void hxd_fs__EmbedFileSystem_EmbedEntry_close(hxd__fs___EmbedFileSystem__EmbedEntry r0) {
	haxe__io__Bytes r1;
	int r2;
	r1 = NULL;
	r0->bytes = r1;
	r2 = 0;
	r0->readPos = r2;
	return;
}

void hxd_fs__EmbedFileSystem_EmbedEntry_load(hxd__fs___EmbedFileSystem__EmbedEntry r0,vclosure* r1) {
	return;
}

void hxd_fs__EmbedFileSystem_EmbedEntry_loadBitmap(hxd__fs___EmbedFileSystem__EmbedEntry r0,vclosure* r1) {
	String r3;
	vdynamic *r2;
	r3 = (String)s$TODO;
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

String hxd_fs__EmbedFileSystem_EmbedEntry_get_path(hxd__fs___EmbedFileSystem__EmbedEntry r0) {
	String r1, r2;
	r1 = r0->relPath;
	r2 = (String)s$5058f1a;
	if( r1 != r2 && (!r1 || !r2 || String___compare(r1,(vdynamic*)r2) != 0) ) goto label$e1cd9d1_10_5;
	r1 = (String)s$_root_;
	return r1;
	label$e1cd9d1_10_5:
	r1 = r0->relPath;
	return r1;
}

int hxd_fs__EmbedFileSystem_EmbedEntry_get_size(hxd__fs___EmbedFileSystem__EmbedEntry r0) {
	haxe__io__Bytes r3;
	int r2;
	hxd_fs__EmbedFileSystem_EmbedEntry_open(r0);
	r3 = r0->bytes;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	return r2;
}

