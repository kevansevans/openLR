﻿// Generated by HLC 4.1.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/Mp3Data.h>
#include <hl/types/ArrayObj.h>
#include <format/mp3/Reader.h>
#include <haxe/io/BytesInput.h>
#include <format/mp3/Bitrate.h>
#include <format/mp3/ChannelMode.h>
#include <format/mp3/Emphasis.h>
#include <format/mp3/Layer.h>
#include <format/mp3/SamplingRate.h>
#include <format/mp3/MPEGVersion.h>
#include <format/mp3/FrameType.h>
#include <hl/natives.h>
extern hl_type t$format_mp3_Reader;
extern hl_type t$haxe_io_BytesInput;
void haxe_io_BytesInput_new(haxe__io__BytesInput,haxe__io__Bytes,vdynamic*,vdynamic*);
#include <haxe/io/Input.h>
void format_mp3_Reader_new(format__mp3__Reader,haxe__io__Input);
vvirtual* format_mp3_Reader_read(format__mp3__Reader);
extern hl_type t$_i32;
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$vrt_225d039;
extern hl_type t$haxe_io_Bytes;
int haxe_io_Bytes_get(haxe__io__Bytes,int);
extern hl_type t$vrt_ce9d2f0;
extern venum* g$hxd_snd_SampleFormat_F32;
extern hl_type t$format_mp3_SamplingRate;
int format_mp3_MPEG_srEnum2Num(venum*);
extern hl_type t$format_mp3_ChannelMode;
extern venum* g$format_mp3_ChannelMode_Mono;
extern hl_type t$hl_types_ArrayBytes_Int;
void hl_types_ArrayBytes_Int_new(hl__types__ArrayBytes_Int);
int format_mp3_Tools_getSampleCountHdr(vvirtual*);
venum* format_mp3_Reader_seekFrame(format__mp3__Reader);
extern venum* g$format_mp3_FrameType_FT_MP3;
vvirtual* format_mp3_Reader_readFrameHeader(format__mp3__Reader);
bool format_mp3_Tools_isInvalidFrameHeader(vvirtual*);
int format_mp3_Tools_getSampleDataSizeHdr(vvirtual*);
int hl_types_ArrayBytes_Int_push(hl__types__ArrayBytes_Int,int);
int haxe_io_BytesInput_set_position(haxe__io__BytesInput,int);
haxe__io__Bytes haxe_io_Bytes_alloc(int);
void haxe_io_Bytes_blit(haxe__io__Bytes,int,haxe__io__Bytes,int,int);

void hxd_snd_Mp3Data_new(hxd__snd__Mp3Data r0,haxe__io__Bytes r1) {
	hl__types__ArrayObj r10;
	haxe__io__BytesInput r4;
	format__mp3__Reader r3;
	vvirtual *r2, *r12, *r21, *r24;
	venum *r22, *r23, *r25, *r26, *r29, *r30;
	bool r28;
	haxe__io__Bytes r5, r16;
	hl__types__ArrayBytes_Int r27;
	fmt_mp3 *r31;
	vdynamic *r6, *r7, *r13;
	vbyte *r32;
	varray *r14;
	int r9, r11, r15, r17, r18, r19, r20;
	r3 = (format__mp3__Reader)hl_alloc_obj(&t$format_mp3_Reader);
	r4 = (haxe__io__BytesInput)hl_alloc_obj(&t$haxe_io_BytesInput);
	r6 = NULL;
	r7 = NULL;
	haxe_io_BytesInput_new(r4,r1,r6,r7);
	format_mp3_Reader_new(r3,((haxe__io__Input)r4));
	r2 = format_mp3_Reader_read(r3);
	if( r2 == NULL ) hl_null_access();
	r9 = hl_vfields(r2)[2] ? (*(int*)(hl_vfields(r2)[2])) : (int)hl_dyn_geti(r2->value,27753940/*sampleCount*/,&t$_i32);
	r0->samples = r9;
	r10 = hl_vfields(r2)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r2)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r2->value,-326783332/*frames*/,&t$hl_types_ArrayObj);
	if( r10 == NULL ) hl_null_access();
	r9 = 0;
	r11 = r10->length;
	if( ((unsigned)r9) < ((unsigned)r11) ) goto label$e22434f_1_17;
	r12 = NULL;
	goto label$e22434f_1_20;
	label$e22434f_1_17:
	r14 = r10->array;
	r13 = ((vdynamic**)(r14 + 1))[r9];
	r12 = hl_to_virtual(&t$vrt_225d039,(vdynamic*)r13);
	label$e22434f_1_20:
	if( r12 == NULL ) hl_null_access();
	r5 = hl_vfields(r12)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r12)[0])) : (haxe__io__Bytes)hl_dyn_getp(r12->value,40064820/*data*/,&t$haxe_io_Bytes);
	r9 = -1;
	r11 = 0;
	if( r5 == NULL ) hl_null_access();
	r15 = r5->length;
	r17 = 24;
	r15 = r15 - r17;
	label$e22434f_1_28:
	if( r11 >= r15 ) goto label$e22434f_1_54;
	r17 = r11;
	++r11;
	if( r5 == NULL ) hl_null_access();
	r18 = haxe_io_Bytes_get(r5,r17);
	r19 = 76;
	if( r18 != r19 ) goto label$e22434f_1_53;
	r19 = 1;
	r18 = r17 + r19;
	r18 = haxe_io_Bytes_get(r5,r18);
	r19 = 65;
	if( r18 != r19 ) goto label$e22434f_1_53;
	r19 = 2;
	r18 = r17 + r19;
	r18 = haxe_io_Bytes_get(r5,r18);
	r19 = 77;
	if( r18 != r19 ) goto label$e22434f_1_53;
	r19 = 3;
	r18 = r17 + r19;
	r18 = haxe_io_Bytes_get(r5,r18);
	r19 = 69;
	if( r18 != r19 ) goto label$e22434f_1_53;
	r9 = r17;
	goto label$e22434f_1_54;
	label$e22434f_1_53:
	goto label$e22434f_1_28;
	label$e22434f_1_54:
	r15 = 0;
	if( r9 < r15 ) goto label$e22434f_1_82;
	if( r5 == NULL ) hl_null_access();
	r15 = 21;
	r11 = r9 + r15;
	r11 = haxe_io_Bytes_get(r5,r11);
	r15 = 16;
	r11 = r11 << r15;
	r17 = 22;
	r15 = r9 + r17;
	r15 = haxe_io_Bytes_get(r5,r15);
	r17 = 8;
	r15 = r15 << r17;
	r11 = r11 | r15;
	r17 = 23;
	r15 = r9 + r17;
	r15 = haxe_io_Bytes_get(r5,r15);
	r11 = r11 | r15;
	r17 = 12;
	r15 = r11 >> r17;
	r18 = 4095;
	r17 = r11 & r18;
	r18 = r0->samples;
	r19 = r15 + r17;
	r20 = 1152;
	r19 = r19 + r20;
	r18 = r18 - r19;
	r0->samples = r18;
	label$e22434f_1_82:
	if( r2 == NULL ) hl_null_access();
	r10 = hl_vfields(r2)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r2)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r2->value,-326783332/*frames*/,&t$hl_types_ArrayObj);
	if( r10 == NULL ) hl_null_access();
	r11 = 0;
	r15 = r10->length;
	if( ((unsigned)r11) < ((unsigned)r15) ) goto label$e22434f_1_90;
	r12 = NULL;
	goto label$e22434f_1_93;
	label$e22434f_1_90:
	r14 = r10->array;
	r13 = ((vdynamic**)(r14 + 1))[r11];
	r12 = hl_to_virtual(&t$vrt_225d039,(vdynamic*)r13);
	label$e22434f_1_93:
	if( r12 == NULL ) hl_null_access();
	r21 = hl_vfields(r12)[1] ? (*(vvirtual**)(hl_vfields(r12)[1])) : (vvirtual*)hl_dyn_getp(r12->value,-50329203/*header*/,&t$vrt_ce9d2f0);
	r22 = (venum*)g$hxd_snd_SampleFormat_F32;
	r0->sampleFormat = r22;
	if( r21 == NULL ) hl_null_access();
	r23 = hl_vfields(r21)[12] ? (*(venum**)(hl_vfields(r21)[12])) : (venum*)hl_dyn_getp(r21->value,372418284/*samplingRate*/,&t$format_mp3_SamplingRate);
	r11 = format_mp3_MPEG_srEnum2Num(r23);
	r0->samplingRate = r11;
	r25 = hl_vfields(r21)[1] ? (*(venum**)(hl_vfields(r21)[1])) : (venum*)hl_dyn_getp(r21->value,405740998/*channelMode*/,&t$format_mp3_ChannelMode);
	r26 = (venum*)g$format_mp3_ChannelMode_Mono;
	if( r25 != r26 ) goto label$e22434f_1_106;
	r11 = 1;
	goto label$e22434f_1_107;
	label$e22434f_1_106:
	r11 = 2;
	label$e22434f_1_107:
	r0->channels = r11;
	r0->bytes = r1;
	r27 = (hl__types__ArrayBytes_Int)hl_alloc_obj(&t$hl_types_ArrayBytes_Int);
	hl_types_ArrayBytes_Int_new(r27);
	r0->frameOffsets = r27;
	r11 = format_mp3_Tools_getSampleCountHdr(r21);
	r0->samplesPerFrame = r11;
	r4 = (haxe__io__BytesInput)hl_alloc_obj(&t$haxe_io_BytesInput);
	r6 = NULL;
	r7 = NULL;
	haxe_io_BytesInput_new(r4,r1,r6,r7);
	r3 = (format__mp3__Reader)hl_alloc_obj(&t$format_mp3_Reader);
	format_mp3_Reader_new(r3,((haxe__io__Input)r4));
	r11 = 0;
	label$e22434f_1_121:
	r28 = true;
	if( !r28 ) goto label$e22434f_1_152;
	if( r3 == NULL ) hl_null_access();
	r29 = format_mp3_Reader_seekFrame(r3);
	r30 = (venum*)g$format_mp3_FrameType_FT_MP3;
	if( r29 == r30 ) goto label$e22434f_1_129;
	goto label$e22434f_1_152;
	label$e22434f_1_129:
	if( r4 == NULL ) hl_null_access();
	r15 = r4->pos;
	r17 = 2;
	r15 = r15 - r17;
	r24 = format_mp3_Reader_readFrameHeader(r3);
	if( !r24 ) goto label$e22434f_1_151;
	r28 = format_mp3_Tools_isInvalidFrameHeader(r24);
	if( r28 ) goto label$e22434f_1_151;
	r17 = format_mp3_Tools_getSampleDataSizeHdr(r24);
	r18 = r4->totlen;
	r19 = r4->pos;
	r18 = r18 - r19;
	if( r18 < r17 ) goto label$e22434f_1_151;
	r27 = r0->frameOffsets;
	if( r27 == NULL ) hl_null_access();
	r18 = hl_types_ArrayBytes_Int_push(r27,r15);
	r19 = format_mp3_Tools_getSampleCountHdr(r24);
	r18 = r11 + r19;
	r11 = r18;
	r18 = r4->pos;
	r18 = r18 + r17;
	r18 = haxe_io_BytesInput_set_position(r4,r18);
	label$e22434f_1_151:
	goto label$e22434f_1_121;
	label$e22434f_1_152:
	r15 = 1152;
	r17 = r0->channels;
	r15 = r15 * r17;
	r17 = 4;
	r15 = r15 * r17;
	r16 = haxe_io_Bytes_alloc(r15);
	r0->frame = r16;
	r15 = -1;
	r0->currentSample = r15;
	r15 = -1;
	r0->currentFrame = r15;
	if( r1 == NULL ) hl_null_access();
	r32 = r1->b;
	r15 = r1->length;
	r31 = fmt_mp3_open(r32,r15);
	r0->reader = r31;
	return;
}

void hxd_snd_Mp3Data_decodeBuffer(hxd__snd__Mp3Data r0,haxe__io__Bytes r1,int r2,int r3,int r4) {
	haxe__io__Bytes r13, r19, r20;
	hl__types__ArrayBytes_Int r14;
	fmt_mp3 *r11;
	double r8, r9;
	vbyte *r12, *r17;
	int r6, r7, r10, r15, r16, r18, r21, r22;
	r6 = r0->currentSample;
	if( r6 == r3 ) goto label$e22434f_2_41;
	r8 = (double)r3;
	r6 = r0->samplesPerFrame;
	r9 = (double)r6;
	r8 = r8 / r9;
	r6 = hl_math_floor(r8);
	r10 = r0->currentFrame;
	if( r6 == r10 ) goto label$e22434f_2_40;
	r8 = (double)r3;
	r7 = r0->samplesPerFrame;
	r9 = (double)r7;
	r8 = r8 / r9;
	r7 = hl_math_floor(r8);
	r0->currentFrame = r7;
	r11 = r0->reader;
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->b;
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	r10 = r13->length;
	r14 = r0->frameOffsets;
	if( r14 == NULL ) hl_null_access();
	r16 = r14->length;
	if( ((unsigned)r7) < ((unsigned)r16) ) goto label$e22434f_2_28;
	r15 = 0;
	goto label$e22434f_2_32;
	label$e22434f_2_28:
	r17 = r14->bytes;
	r16 = 2;
	r16 = r7 << r16;
	r15 = *(int*)(r17 + r16);
	label$e22434f_2_32:
	r13 = r0->frame;
	if( r13 == NULL ) hl_null_access();
	r17 = r13->b;
	r13 = r0->frame;
	if( r13 == NULL ) hl_null_access();
	r16 = r13->length;
	r18 = 0;
	r10 = fmt_mp3_decode_frame(r11,r12,r10,r15,r17,r16,r18);
	label$e22434f_2_40:
	r0->currentSample = r3;
	label$e22434f_2_41:
	r6 = r0->currentFrame;
	r7 = r0->samplesPerFrame;
	r6 = r6 * r7;
	r7 = r0->currentSample;
	if( r7 == r6 ) goto label$e22434f_2_105;
	r10 = r0->samplesPerFrame;
	r15 = r0->currentSample;
	r15 = r15 - r6;
	r10 = r10 - r15;
	r7 = r10;
	r15 = r0->currentSample;
	r15 = r15 - r6;
	r16 = 4;
	r15 = r15 * r16;
	r16 = r0->channels;
	r15 = r15 * r16;
	r10 = r15;
	if( r1 == NULL ) hl_null_access();
	r19 = r0->frame;
	r20 = r0->frame;
	if( r20 == NULL ) hl_null_access();
	r18 = r20->length;
	r18 = r18 - r10;
	haxe_io_Bytes_blit(r1,r2,r19,r10,r18);
	r13 = r0->frame;
	if( r13 == NULL ) hl_null_access();
	r16 = r13->length;
	r16 = r16 - r10;
	r15 = r2 + r16;
	r2 = r15;
	r15 = r4 - r7;
	r4 = r15;
	r15 = r0->currentSample;
	r15 = r15 + r7;
	r0->currentSample = r15;
	r15 = r0->currentFrame;
	r16 = 1;
	r15 = r15 + r16;
	r0->currentFrame = r15;
	r11 = r0->reader;
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->b;
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	r16 = r13->length;
	r14 = r0->frameOffsets;
	if( r14 == NULL ) hl_null_access();
	r21 = r14->length;
	if( ((unsigned)r15) < ((unsigned)r21) ) goto label$e22434f_2_93;
	r18 = 0;
	goto label$e22434f_2_97;
	label$e22434f_2_93:
	r17 = r14->bytes;
	r21 = 2;
	r21 = r15 << r21;
	r18 = *(int*)(r17 + r21);
	label$e22434f_2_97:
	r13 = r0->frame;
	if( r13 == NULL ) hl_null_access();
	r17 = r13->b;
	r13 = r0->frame;
	if( r13 == NULL ) hl_null_access();
	r21 = r13->length;
	r22 = 0;
	r16 = fmt_mp3_decode_frame(r11,r12,r16,r18,r17,r21,r22);
	label$e22434f_2_105:
	r15 = r0->samplesPerFrame;
	r7 = r15;
	r15 = r0->samplesPerFrame;
	r16 = 4;
	r15 = r15 * r16;
	r16 = r0->channels;
	r15 = r15 * r16;
	r10 = r15;
	label$e22434f_2_113:
	if( r7 >= r4 ) goto label$e22434f_2_159;
	if( r1 == NULL ) hl_null_access();
	r19 = r0->frame;
	r16 = 0;
	r20 = r0->frame;
	if( r20 == NULL ) hl_null_access();
	r18 = r20->length;
	haxe_io_Bytes_blit(r1,r2,r19,r16,r18);
	r15 = r2 + r10;
	r2 = r15;
	r15 = r4 - r7;
	r4 = r15;
	r15 = r0->currentSample;
	r15 = r15 + r7;
	r0->currentSample = r15;
	r15 = r0->currentFrame;
	r16 = 1;
	r15 = r15 + r16;
	r0->currentFrame = r15;
	r11 = r0->reader;
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->b;
	r13 = r0->bytes;
	if( r13 == NULL ) hl_null_access();
	r16 = r13->length;
	r14 = r0->frameOffsets;
	if( r14 == NULL ) hl_null_access();
	r21 = r14->length;
	if( ((unsigned)r15) < ((unsigned)r21) ) goto label$e22434f_2_146;
	r18 = 0;
	goto label$e22434f_2_150;
	label$e22434f_2_146:
	r17 = r14->bytes;
	r21 = 2;
	r21 = r15 << r21;
	r18 = *(int*)(r17 + r21);
	label$e22434f_2_150:
	r13 = r0->frame;
	if( r13 == NULL ) hl_null_access();
	r17 = r13->b;
	r13 = r0->frame;
	if( r13 == NULL ) hl_null_access();
	r21 = r13->length;
	r22 = 0;
	r16 = fmt_mp3_decode_frame(r11,r12,r16,r18,r17,r21,r22);
	goto label$e22434f_2_113;
	label$e22434f_2_159:
	r16 = 0;
	if( r16 >= r4 ) goto label$e22434f_2_172;
	if( r1 == NULL ) hl_null_access();
	r19 = r0->frame;
	r16 = 0;
	r21 = 4;
	r18 = r4 * r21;
	r21 = r0->channels;
	r18 = r18 * r21;
	haxe_io_Bytes_blit(r1,r2,r19,r16,r18);
	r15 = r0->currentSample;
	r15 = r15 + r4;
	r0->currentSample = r15;
	label$e22434f_2_172:
	return;
}

