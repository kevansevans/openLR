﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/Charset.h>
extern hl_type t$haxe_ds_IntMap;
void haxe_ds_IntMap_new(haxe__ds__IntMap);
extern hl_type t$_i32;
void haxe_ds_IntMap_set(haxe__ds__IntMap,int,vdynamic*);
vdynamic* haxe_ds_IntMap_get(haxe__ds__IntMap,int);
extern hxd__$Charset g$_hxd_Charset;
bool haxe_ds_IntMap_exists(haxe__ds__IntMap,int);
extern hl_type t$hxd_Charset;

void hxd_Charset_new(hxd__Charset r0) {
	hxd__Charset r1;
	haxe__ds__IntMap r3;
	vdynamic *r9;
	int r4, r5, r6, r7, r8;
	r1 = r0;
	r3 = (haxe__ds__IntMap)hl_alloc_obj(&t$haxe_ds_IntMap);
	haxe_ds_IntMap_new(r3);
	r0->map = r3;
	r4 = 0;
	label$687631b_1_5:
	r6 = 94;
	if( r4 >= r6 ) goto label$687631b_1_20;
	r5 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r6 = 65281;
	r6 = r6 + r5;
	r7 = 33;
	r7 = r7 + r5;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r7;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_5;
	label$687631b_1_20:
	r4 = 192;
	r5 = 199;
	label$687631b_1_22:
	if( r4 >= r5 ) goto label$687631b_1_33;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 65;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_22;
	label$687631b_1_33:
	r4 = 224;
	r5 = 231;
	label$687631b_1_35:
	if( r4 >= r5 ) goto label$687631b_1_46;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 97;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_35;
	label$687631b_1_46:
	r4 = 200;
	r5 = 204;
	label$687631b_1_48:
	if( r4 >= r5 ) goto label$687631b_1_59;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 69;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_48;
	label$687631b_1_59:
	r4 = 232;
	r5 = 236;
	label$687631b_1_61:
	if( r4 >= r5 ) goto label$687631b_1_72;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 101;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_61;
	label$687631b_1_72:
	r4 = 204;
	r5 = 208;
	label$687631b_1_74:
	if( r4 >= r5 ) goto label$687631b_1_85;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 73;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_74;
	label$687631b_1_85:
	r4 = 236;
	r5 = 240;
	label$687631b_1_87:
	if( r4 >= r5 ) goto label$687631b_1_98;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 105;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_87;
	label$687631b_1_98:
	r4 = 210;
	r5 = 215;
	label$687631b_1_100:
	if( r4 >= r5 ) goto label$687631b_1_111;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 79;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_100;
	label$687631b_1_111:
	r4 = 242;
	r5 = 247;
	label$687631b_1_113:
	if( r4 >= r5 ) goto label$687631b_1_124;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 111;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_113;
	label$687631b_1_124:
	r4 = 217;
	r5 = 221;
	label$687631b_1_126:
	if( r4 >= r5 ) goto label$687631b_1_137;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 85;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_126;
	label$687631b_1_137:
	r4 = 249;
	r5 = 253;
	label$687631b_1_139:
	if( r4 >= r5 ) goto label$687631b_1_150;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r8 = 117;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	haxe_ds_IntMap_set(r3,r6,((vdynamic*)r9));
	goto label$687631b_1_139;
	label$687631b_1_150:
	if( r1 == NULL ) hl_null_access();
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 199;
	r5 = 67;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 231;
	r5 = 67;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 208;
	r5 = 68;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 222;
	r5 = 100;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 209;
	r5 = 78;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 241;
	r5 = 110;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 221;
	r5 = 89;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 253;
	r5 = 121;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 255;
	r5 = 121;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8364;
	r5 = 69;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 12288;
	r5 = 32;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 160;
	r5 = 32;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 171;
	r5 = 34;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 187;
	r5 = 34;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8220;
	r5 = 34;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8221;
	r5 = 34;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8216;
	r5 = 39;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8217;
	r5 = 39;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 180;
	r5 = 39;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8216;
	r5 = 39;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8249;
	r5 = 60;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8250;
	r5 = 62;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	r3 = r1->map;
	if( r3 == NULL ) hl_null_access();
	r4 = 8211;
	r5 = 45;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r5;
	haxe_ds_IntMap_set(r3,r4,((vdynamic*)r9));
	return;
}

vdynamic* hxd_Charset_resolveChar(hxd__Charset r0,int r1,haxe__ds__IntMap r2) {
	haxe__ds__IntMap r7;
	vdynamic *r4, *r5, *r6, *r8;
	int r3;
	r4 = hl_alloc_dynamic(&t$_i32);
	r4->v.i = r1;
	label$687631b_2_1:
	if( !r4 ) goto label$687631b_2_15;
	if( r2 == NULL ) hl_null_access();
	r3 = r4 ? r4->v.i : 0;
	r6 = haxe_ds_IntMap_get(r2,r3);
	if( !r6 ) goto label$687631b_2_8;
	return r6;
	label$687631b_2_8:
	r7 = r0->map;
	if( r7 == NULL ) hl_null_access();
	r3 = r4 ? r4->v.i : 0;
	r8 = haxe_ds_IntMap_get(r7,r3);
	r5 = (vdynamic*)r8;
	r4 = r5;
	goto label$687631b_2_1;
	label$687631b_2_15:
	r6 = NULL;
	return r6;
}

bool hxd_Charset_isCJK(hxd__Charset r0,int r1) {
	bool r3;
	int r2;
	r2 = 11904;
	if( r1 < r2 ) goto label$687631b_3_4;
	r2 = 42191;
	if( r2 >= r1 ) goto label$687631b_3_18;
	label$687631b_3_4:
	r2 = 63744;
	if( r1 < r2 ) goto label$687631b_3_8;
	r2 = 64255;
	if( r2 >= r1 ) goto label$687631b_3_18;
	label$687631b_3_8:
	r2 = 131072;
	if( r1 < r2 ) goto label$687631b_3_16;
	r2 = 262141;
	if( r1 <= r2 ) goto label$687631b_3_14;
	r3 = false;
	goto label$687631b_3_15;
	label$687631b_3_14:
	r3 = true;
	label$687631b_3_15:
	return r3;
	label$687631b_3_16:
	r3 = false;
	return r3;
	label$687631b_3_18:
	r3 = true;
	return r3;
}

bool hxd_Charset_isSpace(hxd__Charset r0,int r1) {
	bool r3;
	int r2;
	r2 = 32;
	if( r1 == r2 ) goto label$687631b_4_8;
	r2 = 12288;
	if( r1 == r2 ) goto label$687631b_4_6;
	r3 = false;
	goto label$687631b_4_7;
	label$687631b_4_6:
	r3 = true;
	label$687631b_4_7:
	return r3;
	label$687631b_4_8:
	r3 = true;
	return r3;
}

bool hxd_Charset_isBreakChar(hxd__Charset r0,int r1) {
	bool r2;
	r2 = hxd_Charset_isSpace(r0,r1);
	if( r2 ) goto label$687631b_5_4;
	r2 = hxd_Charset_isCJK(r0,r1);
	return r2;
	label$687631b_5_4:
	r2 = true;
	return r2;
}

bool hxd_Charset_isComplementChar(hxd__Charset r0,int r1) {
	bool r2;
	hxd__$Charset r4;
	haxe__ds__IntMap r3;
	r4 = (hxd__$Charset)g$_hxd_Charset;
	r3 = r4->complementChars;
	if( r3 == NULL ) hl_null_access();
	r2 = haxe_ds_IntMap_exists(r3,r1);
	return r2;
}

hxd__Charset hxd_Charset_getDefault() {
	hxd__Charset r1;
	hxd__$Charset r2;
	r2 = (hxd__$Charset)g$_hxd_Charset;
	r1 = r2->inst;
	if( r1 ) goto label$687631b_7_7;
	r1 = (hxd__Charset)hl_alloc_obj(&t$hxd_Charset);
	hxd_Charset_new(r1);
	r2 = (hxd__$Charset)g$_hxd_Charset;
	r2->inst = r1;
	label$687631b_7_7:
	r2 = (hxd__$Charset)g$_hxd_Charset;
	r1 = r2->inst;
	return r1;
}

