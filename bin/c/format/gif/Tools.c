﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <format/gif/Tools.h>
#include <format/gif/DisposalMethod.h>
#include <haxe/ds/_List/ListNode.h>
#include <format/gif/Block.h>
#include <format/gif/Extension.h>
extern hl_type t$vrt_73ebc91;
extern hl_type t$_i32;
haxe__io__Bytes haxe_io_Bytes_alloc(int);
extern hl_type t$haxe_ds_List;
extern hl_type t$_bool;
extern hl_type t$haxe_io_Bytes;
extern String s$5c1a108;
vdynamic* haxe_Exception_thrown(vdynamic*);
extern hl_type t$format_gif_DisposalMethod;
extern venum* g$b009af1;
int haxe_io_Bytes_get(haxe__io__Bytes,int);
void haxe_io_Bytes_set(haxe__io__Bytes,int,int);

haxe__io__Bytes format_gif_Tools_extractFullBGRA(vvirtual* r0,int r1) {
	String r18;
	vvirtual *r2, *r7, *r14, *r19;
	venum *r13, *r23, *r30;
	bool r16;
	haxe__io__Bytes r5, r15, r17;
	haxe__ds__List r10;
	vdynamic *r12;
	haxe__ds___List__ListNode r9, r11;
	int r4, r6, r8, r20, r21, r22, r24, r25, r26, r27, r28, r29;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
	if( r7 == NULL ) hl_null_access();
	r6 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
	if( r7 == NULL ) hl_null_access();
	r8 = hl_vfields(r7)[4] ? (*(int*)(hl_vfields(r7)[4])) : (int)hl_dyn_geti(r7->value,38537191/*height*/,&t$_i32);
	r6 = r6 * r8;
	r8 = 4;
	r6 = r6 * r8;
	r5 = haxe_io_Bytes_alloc(r6);
	r10 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r10 == NULL ) hl_null_access();
	r9 = r10->h;
	label$66993a7_1_16:
	if( !r9 ) goto label$66993a7_1_173;
	if( r9 == NULL ) hl_null_access();
	r12 = r9->item;
	r13 = (venum*)r12;
	r11 = r9->next;
	r9 = r11;
	if( r13 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r13);
	switch(r6) {
		default:
			goto label$66993a7_1_172;
		case 0:
			r14 = ((format_gif_Block_BFrame*)r13)->p0;
			if( r14 == NULL ) hl_null_access();
			r16 = hl_vfields(r14)[3] ? (*(bool*)(hl_vfields(r14)[3])) : (bool)hl_dyn_geti(r14->value,-367153172/*localColorTable*/,&t$_bool);
			if( !r16 ) goto label$66993a7_1_33;
			r15 = hl_vfields(r14)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[0])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,256888880/*colorTable*/,&t$haxe_io_Bytes);
			goto label$66993a7_1_35;
			label$66993a7_1_33:
			if( r0 == NULL ) hl_null_access();
			r15 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&t$haxe_io_Bytes);
			label$66993a7_1_35:
			if( r15 ) goto label$66993a7_1_39;
			r18 = (String)s$5c1a108;
			r12 = haxe_Exception_thrown(((vdynamic*)r18));
			hl_throw((vdynamic*)r12);
			label$66993a7_1_39:
			if( !r2 ) goto label$66993a7_1_47;
			if( r2 == NULL ) hl_null_access();
			r16 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&t$_bool);
			if( !r16 ) goto label$66993a7_1_47;
			r6 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&t$_i32);
			r8 = 3;
			r6 = r6 * r8;
			goto label$66993a7_1_48;
			label$66993a7_1_47:
			r6 = -1;
			label$66993a7_1_48:
			r17 = hl_vfields(r14)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[5])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,-324407906/*pixels*/,&t$haxe_io_Bytes);
			r8 = 0;
			r20 = hl_vfields(r14)[9] ? (*(int*)(hl_vfields(r14)[9])) : (int)hl_dyn_geti(r14->value,121/*y*/,&t$_i32);
			if( r0 == NULL ) hl_null_access();
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
			r20 = r20 * r21;
			r21 = hl_vfields(r14)[8] ? (*(int*)(hl_vfields(r14)[8])) : (int)hl_dyn_geti(r14->value,120/*x*/,&t$_i32);
			r20 = r20 + r21;
			r21 = 4;
			r20 = r20 * r21;
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
			r22 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
			r21 = r21 - r22;
			r22 = 4;
			r21 = r21 * r22;
			r22 = 4;
			r21 = r21 + r22;
			if( r4 == r1 ) goto label$66993a7_1_74;
			if( !r2 ) goto label$66993a7_1_74;
			if( r2 == NULL ) hl_null_access();
			r23 = hl_vfields(r2)[1] ? (*(venum**)(hl_vfields(r2)[1])) : (venum*)hl_dyn_getp(r2->value,164371895/*disposalMethod*/,&t$format_gif_DisposalMethod);
			goto label$66993a7_1_75;
			label$66993a7_1_74:
			r23 = (venum*)g$b009af1;
			label$66993a7_1_75:
			if( r23 == NULL ) hl_null_access();
			r22 = HL__ENUM_INDEX__(r23);
			switch(r22) {
				default:
				case 0:
				case 1:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$66993a7_1_81:
					if( r22 >= r24 ) goto label$66993a7_1_123;
					r25 = r22;
					++r22;
					if( r17 == NULL ) hl_null_access();
					r26 = haxe_io_Bytes_get(r17,r25);
					r27 = 3;
					r26 = r26 * r27;
					if( r6 == r26 ) goto label$66993a7_1_110;
					if( r5 == NULL ) hl_null_access();
					if( r15 == NULL ) hl_null_access();
					r29 = 2;
					r28 = r26 + r29;
					r28 = haxe_io_Bytes_get(r15,r28);
					haxe_io_Bytes_set(r5,r20,r28);
					r28 = 1;
					r27 = r20 + r28;
					r29 = 1;
					r28 = r26 + r29;
					r28 = haxe_io_Bytes_get(r15,r28);
					haxe_io_Bytes_set(r5,r27,r28);
					r28 = 2;
					r27 = r20 + r28;
					r28 = haxe_io_Bytes_get(r15,r26);
					haxe_io_Bytes_set(r5,r27,r28);
					r28 = 3;
					r27 = r20 + r28;
					r28 = 255;
					haxe_io_Bytes_set(r5,r27,r28);
					label$66993a7_1_110:
					++r8;
					if( r14 == NULL ) hl_null_access();
					r27 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
					if( r8 != r27 ) goto label$66993a7_1_119;
					r27 = 0;
					r8 = r27;
					r27 = r20 + r21;
					r20 = r27;
					goto label$66993a7_1_122;
					label$66993a7_1_119:
					r28 = 4;
					r27 = r20 + r28;
					r20 = r27;
					label$66993a7_1_122:
					goto label$66993a7_1_81;
					label$66993a7_1_123:
					goto label$66993a7_1_159;
				case 2:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$66993a7_1_127:
					if( r22 >= r24 ) goto label$66993a7_1_158;
					++r22;
					if( r5 == NULL ) hl_null_access();
					r27 = 0;
					haxe_io_Bytes_set(r5,r20,r27);
					r27 = 1;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 2;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 3;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					++r8;
					if( r14 == NULL ) hl_null_access();
					r26 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
					if( r8 != r26 ) goto label$66993a7_1_154;
					r26 = 0;
					r8 = r26;
					r26 = r20 + r21;
					r20 = r26;
					goto label$66993a7_1_157;
					label$66993a7_1_154:
					r27 = 4;
					r26 = r20 + r27;
					r20 = r26;
					label$66993a7_1_157:
					goto label$66993a7_1_127;
					label$66993a7_1_158:
					goto label$66993a7_1_159;
				case 3:
					break;
			}
			label$66993a7_1_159:
			if( r4 != r1 ) goto label$66993a7_1_161;
			return r5;
			label$66993a7_1_161:
			++r4;
			r19 = NULL;
			r2 = r19;
			goto label$66993a7_1_172;
		case 1:
			r30 = ((format_gif_Block_BExtension*)r13)->p0;
			if( r30 == NULL ) hl_null_access();
			r6 = HL__ENUM_INDEX__(r30);
			r8 = 0;
			if( r6 != r8 ) goto label$66993a7_1_172;
			r19 = ((format_gif_Extension_EGraphicControl*)r30)->p0;
			r2 = r19;
	}
	label$66993a7_1_172:
	goto label$66993a7_1_16;
	label$66993a7_1_173:
	return r5;
}

haxe__io__Bytes format_gif_Tools_extractFullRGBA(vvirtual* r0,int r1) {
	String r18;
	vvirtual *r2, *r7, *r14, *r19;
	venum *r13, *r23, *r30;
	bool r16;
	haxe__io__Bytes r5, r15, r17;
	haxe__ds__List r10;
	vdynamic *r12;
	haxe__ds___List__ListNode r9, r11;
	int r4, r6, r8, r20, r21, r22, r24, r25, r26, r27, r28, r29;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
	if( r7 == NULL ) hl_null_access();
	r6 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
	if( r7 == NULL ) hl_null_access();
	r8 = hl_vfields(r7)[4] ? (*(int*)(hl_vfields(r7)[4])) : (int)hl_dyn_geti(r7->value,38537191/*height*/,&t$_i32);
	r6 = r6 * r8;
	r8 = 4;
	r6 = r6 * r8;
	r5 = haxe_io_Bytes_alloc(r6);
	r10 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&t$haxe_ds_List);
	if( r10 == NULL ) hl_null_access();
	r9 = r10->h;
	label$66993a7_2_16:
	if( !r9 ) goto label$66993a7_2_173;
	if( r9 == NULL ) hl_null_access();
	r12 = r9->item;
	r13 = (venum*)r12;
	r11 = r9->next;
	r9 = r11;
	if( r13 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r13);
	switch(r6) {
		default:
			goto label$66993a7_2_172;
		case 0:
			r14 = ((format_gif_Block_BFrame*)r13)->p0;
			if( r14 == NULL ) hl_null_access();
			r16 = hl_vfields(r14)[3] ? (*(bool*)(hl_vfields(r14)[3])) : (bool)hl_dyn_geti(r14->value,-367153172/*localColorTable*/,&t$_bool);
			if( !r16 ) goto label$66993a7_2_33;
			r15 = hl_vfields(r14)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[0])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,256888880/*colorTable*/,&t$haxe_io_Bytes);
			goto label$66993a7_2_35;
			label$66993a7_2_33:
			if( r0 == NULL ) hl_null_access();
			r15 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&t$haxe_io_Bytes);
			label$66993a7_2_35:
			if( r15 ) goto label$66993a7_2_39;
			r18 = (String)s$5c1a108;
			r12 = haxe_Exception_thrown(((vdynamic*)r18));
			hl_throw((vdynamic*)r12);
			label$66993a7_2_39:
			if( !r2 ) goto label$66993a7_2_47;
			if( r2 == NULL ) hl_null_access();
			r16 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&t$_bool);
			if( !r16 ) goto label$66993a7_2_47;
			r6 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&t$_i32);
			r8 = 3;
			r6 = r6 * r8;
			goto label$66993a7_2_48;
			label$66993a7_2_47:
			r6 = -1;
			label$66993a7_2_48:
			r17 = hl_vfields(r14)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[5])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,-324407906/*pixels*/,&t$haxe_io_Bytes);
			r8 = 0;
			r20 = hl_vfields(r14)[9] ? (*(int*)(hl_vfields(r14)[9])) : (int)hl_dyn_geti(r14->value,121/*y*/,&t$_i32);
			if( r0 == NULL ) hl_null_access();
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
			r20 = r20 * r21;
			r21 = hl_vfields(r14)[8] ? (*(int*)(hl_vfields(r14)[8])) : (int)hl_dyn_geti(r14->value,120/*x*/,&t$_i32);
			r20 = r20 + r21;
			r21 = 4;
			r20 = r20 * r21;
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&t$vrt_73ebc91);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&t$_i32);
			r22 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
			r21 = r21 - r22;
			r22 = 4;
			r21 = r21 * r22;
			r22 = 4;
			r21 = r21 + r22;
			if( r4 == r1 ) goto label$66993a7_2_74;
			if( !r2 ) goto label$66993a7_2_74;
			if( r2 == NULL ) hl_null_access();
			r23 = hl_vfields(r2)[1] ? (*(venum**)(hl_vfields(r2)[1])) : (venum*)hl_dyn_getp(r2->value,164371895/*disposalMethod*/,&t$format_gif_DisposalMethod);
			goto label$66993a7_2_75;
			label$66993a7_2_74:
			r23 = (venum*)g$b009af1;
			label$66993a7_2_75:
			if( r23 == NULL ) hl_null_access();
			r22 = HL__ENUM_INDEX__(r23);
			switch(r22) {
				default:
				case 0:
				case 1:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$66993a7_2_81:
					if( r22 >= r24 ) goto label$66993a7_2_123;
					r25 = r22;
					++r22;
					if( r17 == NULL ) hl_null_access();
					r26 = haxe_io_Bytes_get(r17,r25);
					r27 = 3;
					r26 = r26 * r27;
					if( r6 == r26 ) goto label$66993a7_2_110;
					if( r5 == NULL ) hl_null_access();
					if( r15 == NULL ) hl_null_access();
					r28 = haxe_io_Bytes_get(r15,r26);
					haxe_io_Bytes_set(r5,r20,r28);
					r28 = 1;
					r27 = r20 + r28;
					r29 = 1;
					r28 = r26 + r29;
					r28 = haxe_io_Bytes_get(r15,r28);
					haxe_io_Bytes_set(r5,r27,r28);
					r28 = 2;
					r27 = r20 + r28;
					r29 = 2;
					r28 = r26 + r29;
					r28 = haxe_io_Bytes_get(r15,r28);
					haxe_io_Bytes_set(r5,r27,r28);
					r28 = 3;
					r27 = r20 + r28;
					r28 = 255;
					haxe_io_Bytes_set(r5,r27,r28);
					label$66993a7_2_110:
					++r8;
					if( r14 == NULL ) hl_null_access();
					r27 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
					if( r8 != r27 ) goto label$66993a7_2_119;
					r27 = 0;
					r8 = r27;
					r27 = r20 + r21;
					r20 = r27;
					goto label$66993a7_2_122;
					label$66993a7_2_119:
					r28 = 4;
					r27 = r20 + r28;
					r20 = r27;
					label$66993a7_2_122:
					goto label$66993a7_2_81;
					label$66993a7_2_123:
					goto label$66993a7_2_159;
				case 2:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$66993a7_2_127:
					if( r22 >= r24 ) goto label$66993a7_2_158;
					++r22;
					if( r5 == NULL ) hl_null_access();
					r27 = 0;
					haxe_io_Bytes_set(r5,r20,r27);
					r27 = 1;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 2;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 3;
					r26 = r20 + r27;
					r27 = 0;
					haxe_io_Bytes_set(r5,r26,r27);
					++r8;
					if( r14 == NULL ) hl_null_access();
					r26 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&t$_i32);
					if( r8 != r26 ) goto label$66993a7_2_154;
					r26 = 0;
					r8 = r26;
					r26 = r20 + r21;
					r20 = r26;
					goto label$66993a7_2_157;
					label$66993a7_2_154:
					r27 = 4;
					r26 = r20 + r27;
					r20 = r26;
					label$66993a7_2_157:
					goto label$66993a7_2_127;
					label$66993a7_2_158:
					goto label$66993a7_2_159;
				case 3:
					break;
			}
			label$66993a7_2_159:
			if( r4 != r1 ) goto label$66993a7_2_161;
			return r5;
			label$66993a7_2_161:
			++r4;
			r19 = NULL;
			r2 = r19;
			goto label$66993a7_2_172;
		case 1:
			r30 = ((format_gif_Block_BExtension*)r13)->p0;
			if( r30 == NULL ) hl_null_access();
			r6 = HL__ENUM_INDEX__(r30);
			r8 = 0;
			if( r6 != r8 ) goto label$66993a7_2_172;
			r19 = ((format_gif_Extension_EGraphicControl*)r30)->p0;
			r2 = r19;
	}
	label$66993a7_2_172:
	goto label$66993a7_2_16;
	label$66993a7_2_173:
	return r5;
}

