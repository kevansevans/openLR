﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/fmt/hmd/Writer.h>
#include <hxd/fmt/hmd/Property.h>
void haxe_io_Output_writeFloat(haxe__io__Output,double);
#include <hl/types/ArrayObj.h>
extern String s$6b4f452;
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <haxe/io/Encoding.h>
void haxe_io_Output_writeString(haxe__io__Output,String,venum*);
#include <hxd/fmt/hmd/Position.h>
#include <h3d/col/Bounds.h>
#include <hxd/fmt/hmd/Skin.h>
#include <hxd/fmt/hmd/SkinJoint.h>
#include <hxd/fmt/hmd/SkinSplit.h>
#include <hl/types/ArrayBytes_Int.h>
extern String s$;
void haxe_io_Output_writeUInt16(haxe__io__Output,int);
#include <hxd/fmt/hmd/Data.h>
#include <haxe/io/BytesOutput.h>
#include <hxd/fmt/hmd/Geometry.h>
#include <hxd/fmt/hmd/GeometryFormat.h>
#include <hxd/fmt/hmd/Material.h>
#include <h2d/BlendMode.h>
#include <hxd/fmt/hmd/Model.h>
#include <hxd/fmt/hmd/Animation.h>
#include <hxd/fmt/hmd/AnimationObject.h>
#include <hxd/fmt/hmd/AnimationEvent.h>
#include <haxe/io/Bytes.h>
extern hl_type t$haxe_io_BytesOutput;
void haxe_io_BytesOutput_new(haxe__io__BytesOutput);
extern String s$Can_t_write_HMD_v;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
String String___add__(String,String);
void haxe_io_Output_writeInt32(haxe__io__Output,int);
extern venum* g$69da9ba;
int hl_types_ArrayObj_indexOf(hl__types__ArrayObj,vdynamic*,vdynamic*);
haxe__io__Bytes haxe_io_BytesOutput_getBytes(haxe__io__BytesOutput);
extern String s$HMD;
void haxe_io_Output_write(haxe__io__Output,haxe__io__Bytes);

void hxd_fmt_hmd_Writer_new(hxd__fmt__hmd__Writer r0,haxe__io__Output r1) {
	r0->out = r1;
	return;
}

void hxd_fmt_hmd_Writer_writeProperty(hxd__fmt__hmd__Writer r0,venum* r1) {
	haxe__io__Output r3;
	double r5;
	int r4;
	r3 = r0->out;
	if( r3 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r1);
	((void (*)(haxe__io__Output,int))r3->$type->vobj_proto[0])(r3,r4);
	r4 = HL__ENUM_INDEX__(r1);
	switch(r4) {
		default:
			goto label$29ff4bb_2_14;
		case 0:
			r5 = ((hxd_fmt_hmd_Property_CameraFOVY*)r1)->p0;
			r3 = r0->out;
			if( r3 == NULL ) hl_null_access();
			haxe_io_Output_writeFloat(r3,r5);
			goto label$29ff4bb_2_14;
		case 1:
			goto label$29ff4bb_2_14;
		case 2:
			break;
	}
	label$29ff4bb_2_14:
	return;
}

void hxd_fmt_hmd_Writer_writeProps(hxd__fmt__hmd__Writer r0,hl__types__ArrayObj r1) {
	String r7;
	venum *r9;
	haxe__io__Output r6;
	vdynamic *r5;
	varray *r10;
	int r3, r4, r8;
	if( r1 ) goto label$29ff4bb_3_10;
	r3 = r0->version;
	r4 = 1;
	if( r3 != r4 ) goto label$29ff4bb_3_5;
	return;
	label$29ff4bb_3_5:
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r3 = 0;
	((void (*)(haxe__io__Output,int))r6->$type->vobj_proto[0])(r6,r3);
	return;
	label$29ff4bb_3_10:
	r3 = r0->version;
	r4 = 1;
	if( r3 != r4 ) goto label$29ff4bb_3_16;
	r7 = (String)s$6b4f452;
	r5 = haxe_Exception_thrown(((vdynamic*)r7));
	hl_throw((vdynamic*)r5);
	label$29ff4bb_3_16:
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r3 = r1->length;
	((void (*)(haxe__io__Output,int))r6->$type->vobj_proto[0])(r6,r3);
	r3 = 0;
	label$29ff4bb_3_22:
	if( r1 == NULL ) hl_null_access();
	r8 = r1->length;
	if( r3 >= r8 ) goto label$29ff4bb_3_36;
	r8 = r1->length;
	if( ((unsigned)r3) < ((unsigned)r8) ) goto label$29ff4bb_3_30;
	r9 = NULL;
	goto label$29ff4bb_3_33;
	label$29ff4bb_3_30:
	r10 = r1->array;
	r5 = ((vdynamic**)(r10 + 1))[r3];
	r9 = (venum*)r5;
	label$29ff4bb_3_33:
	++r3;
	hxd_fmt_hmd_Writer_writeProperty(r0,r9);
	goto label$29ff4bb_3_22;
	label$29ff4bb_3_36:
	return;
}

void hxd_fmt_hmd_Writer_writeName(hxd__fmt__hmd__Writer r0,String r1) {
	venum *r5;
	haxe__io__Output r3;
	int r4;
	if( r1 ) goto label$29ff4bb_4_6;
	r3 = r0->out;
	if( r3 == NULL ) hl_null_access();
	r4 = 255;
	((void (*)(haxe__io__Output,int))r3->$type->vobj_proto[0])(r3,r4);
	return;
	label$29ff4bb_4_6:
	r3 = r0->out;
	if( r3 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r4 = r1->length;
	((void (*)(haxe__io__Output,int))r3->$type->vobj_proto[0])(r3,r4);
	r3 = r0->out;
	if( r3 == NULL ) hl_null_access();
	r5 = NULL;
	haxe_io_Output_writeString(r3,r1,r5);
	return;
}

void hxd_fmt_hmd_Writer_writePosition(hxd__fmt__hmd__Writer r0,hxd__fmt__hmd__Position r1,bool* r2) {
	bool r3;
	haxe__io__Output r6;
	double r4, r7, r8;
	if( r2 ) goto label$29ff4bb_5_3;
	r3 = true;
	goto label$29ff4bb_5_4;
	label$29ff4bb_5_3:
	r3 = *r2;
	label$29ff4bb_5_4:
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0.;
	if( r4 != r8 ) goto label$29ff4bb_5_12;
	r7 = 0.;
	goto label$29ff4bb_5_13;
	label$29ff4bb_5_12:
	r7 = r4;
	label$29ff4bb_5_13:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->y;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0.;
	if( r4 != r8 ) goto label$29ff4bb_5_21;
	r7 = 0.;
	goto label$29ff4bb_5_22;
	label$29ff4bb_5_21:
	r7 = r4;
	label$29ff4bb_5_22:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->z;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0.;
	if( r4 != r8 ) goto label$29ff4bb_5_30;
	r7 = 0.;
	goto label$29ff4bb_5_31;
	label$29ff4bb_5_30:
	r7 = r4;
	label$29ff4bb_5_31:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->qx;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0.;
	if( r4 != r8 ) goto label$29ff4bb_5_39;
	r7 = 0.;
	goto label$29ff4bb_5_40;
	label$29ff4bb_5_39:
	r7 = r4;
	label$29ff4bb_5_40:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->qy;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0.;
	if( r4 != r8 ) goto label$29ff4bb_5_48;
	r7 = 0.;
	goto label$29ff4bb_5_49;
	label$29ff4bb_5_48:
	r7 = r4;
	label$29ff4bb_5_49:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->qz;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0.;
	if( r4 != r8 ) goto label$29ff4bb_5_57;
	r7 = 0.;
	goto label$29ff4bb_5_58;
	label$29ff4bb_5_57:
	r7 = r4;
	label$29ff4bb_5_58:
	haxe_io_Output_writeFloat(r6,r7);
	if( !r3 ) goto label$29ff4bb_5_87;
	r4 = r1->sx;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0.;
	if( r4 != r8 ) goto label$29ff4bb_5_67;
	r7 = 0.;
	goto label$29ff4bb_5_68;
	label$29ff4bb_5_67:
	r7 = r4;
	label$29ff4bb_5_68:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->sy;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0.;
	if( r4 != r8 ) goto label$29ff4bb_5_76;
	r7 = 0.;
	goto label$29ff4bb_5_77;
	label$29ff4bb_5_76:
	r7 = r4;
	label$29ff4bb_5_77:
	haxe_io_Output_writeFloat(r6,r7);
	r4 = r1->sz;
	r6 = r0->out;
	if( r6 == NULL ) hl_null_access();
	r8 = 0.;
	if( r4 != r8 ) goto label$29ff4bb_5_85;
	r7 = 0.;
	goto label$29ff4bb_5_86;
	label$29ff4bb_5_85:
	r7 = r4;
	label$29ff4bb_5_86:
	haxe_io_Output_writeFloat(r6,r7);
	label$29ff4bb_5_87:
	return;
}

void hxd_fmt_hmd_Writer_writeBounds(hxd__fmt__hmd__Writer r0,h3d__col__Bounds r1) {
	haxe__io__Output r4;
	double r2, r5, r6;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->xMin;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0.;
	if( r2 != r6 ) goto label$29ff4bb_6_8;
	r5 = 0.;
	goto label$29ff4bb_6_9;
	label$29ff4bb_6_8:
	r5 = r2;
	label$29ff4bb_6_9:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->yMin;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0.;
	if( r2 != r6 ) goto label$29ff4bb_6_17;
	r5 = 0.;
	goto label$29ff4bb_6_18;
	label$29ff4bb_6_17:
	r5 = r2;
	label$29ff4bb_6_18:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->zMin;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0.;
	if( r2 != r6 ) goto label$29ff4bb_6_26;
	r5 = 0.;
	goto label$29ff4bb_6_27;
	label$29ff4bb_6_26:
	r5 = r2;
	label$29ff4bb_6_27:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->xMax;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0.;
	if( r2 != r6 ) goto label$29ff4bb_6_35;
	r5 = 0.;
	goto label$29ff4bb_6_36;
	label$29ff4bb_6_35:
	r5 = r2;
	label$29ff4bb_6_36:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->yMax;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0.;
	if( r2 != r6 ) goto label$29ff4bb_6_44;
	r5 = 0.;
	goto label$29ff4bb_6_45;
	label$29ff4bb_6_44:
	r5 = r2;
	label$29ff4bb_6_45:
	haxe_io_Output_writeFloat(r4,r5);
	r2 = r1->zMax;
	r4 = r0->out;
	if( r4 == NULL ) hl_null_access();
	r6 = 0.;
	if( r2 != r6 ) goto label$29ff4bb_6_53;
	r5 = 0.;
	goto label$29ff4bb_6_54;
	label$29ff4bb_6_53:
	r5 = r2;
	label$29ff4bb_6_54:
	haxe_io_Output_writeFloat(r4,r5);
	return;
}

void hxd_fmt_hmd_Writer_writeSkin(hxd__fmt__hmd__Writer r0,hxd__fmt__hmd__Skin r1) {
	bool *r18;
	String r3;
	hl__types__ArrayObj r4, r9;
	bool r13, r17, r19;
	hl__types__ArrayBytes_Int r21;
	hxd__fmt__hmd__SkinSplit r20;
	haxe__io__Output r5;
	double r14, r16;
	hxd__fmt__hmd__Position r15;
	vdynamic *r11;
	vbyte *r23;
	varray *r12;
	hxd__fmt__hmd__SkinJoint r10;
	int r6, r7, r8, r22;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->name;
	if( r3 ) goto label$29ff4bb_7_5;
	r3 = (String)s$;
	goto label$29ff4bb_7_6;
	label$29ff4bb_7_5:
	r3 = r1->name;
	label$29ff4bb_7_6:
	hxd_fmt_hmd_Writer_writeName(r0,r3);
	r4 = r1->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r4);
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	r4 = r1->joints;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	haxe_io_Output_writeUInt16(r5,r6);
	r6 = 0;
	r4 = r1->joints;
	label$29ff4bb_7_17:
	if( r4 == NULL ) hl_null_access();
	r8 = r4->length;
	if( r6 >= r8 ) goto label$29ff4bb_7_98;
	r8 = r4->length;
	if( ((unsigned)r6) < ((unsigned)r8) ) goto label$29ff4bb_7_25;
	r10 = NULL;
	goto label$29ff4bb_7_28;
	label$29ff4bb_7_25:
	r12 = r4->array;
	r11 = ((vdynamic**)(r12 + 1))[r6];
	r10 = (hxd__fmt__hmd__SkinJoint)r11;
	label$29ff4bb_7_28:
	++r6;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r9);
	r3 = r10->name;
	hxd_fmt_hmd_Writer_writeName(r0,r3);
	r15 = r10->position;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sx;
	r16 = 1.;
	if( r14 != r16 ) goto label$29ff4bb_7_68;
	r15 = r10->position;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sy;
	r16 = 1.;
	if( r14 != r16 ) goto label$29ff4bb_7_68;
	r15 = r10->position;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sz;
	r16 = 1.;
	if( r14 != r16 ) goto label$29ff4bb_7_68;
	r15 = r10->transpos;
	if( !r15 ) goto label$29ff4bb_7_66;
	r15 = r10->transpos;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sx;
	r16 = 1.;
	if( r14 != r16 ) goto label$29ff4bb_7_68;
	r15 = r10->transpos;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sy;
	r16 = 1.;
	if( r14 != r16 ) goto label$29ff4bb_7_68;
	r15 = r10->transpos;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->sz;
	r16 = 1.;
	if( r14 != r16 ) goto label$29ff4bb_7_68;
	label$29ff4bb_7_66:
	r13 = false;
	goto label$29ff4bb_7_69;
	label$29ff4bb_7_68:
	r13 = true;
	label$29ff4bb_7_69:
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	r7 = r10->parent;
	r8 = 1;
	r7 = r7 + r8;
	if( !r13 ) goto label$29ff4bb_7_77;
	r8 = 32768;
	goto label$29ff4bb_7_78;
	label$29ff4bb_7_77:
	r8 = 0;
	label$29ff4bb_7_78:
	r7 = r7 | r8;
	haxe_io_Output_writeUInt16(r5,r7);
	r15 = r10->position;
	r17 = r13;
	r18 = &r17;
	hxd_fmt_hmd_Writer_writePosition(r0,r15,r18);
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	r7 = r10->bind;
	r8 = 1;
	r7 = r7 + r8;
	haxe_io_Output_writeUInt16(r5,r7);
	r7 = r10->bind;
	r8 = 0;
	if( r7 < r8 ) goto label$29ff4bb_7_97;
	r15 = r10->transpos;
	r19 = r13;
	r18 = &r19;
	hxd_fmt_hmd_Writer_writePosition(r0,r15,r18);
	label$29ff4bb_7_97:
	goto label$29ff4bb_7_17;
	label$29ff4bb_7_98:
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r4 = r1->split;
	if( r4 ) goto label$29ff4bb_7_105;
	r6 = 0;
	goto label$29ff4bb_7_108;
	label$29ff4bb_7_105:
	r4 = r1->split;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	label$29ff4bb_7_108:
	((void (*)(haxe__io__Output,int))r5->$type->vobj_proto[0])(r5,r6);
	r4 = r1->split;
	if( !r4 ) goto label$29ff4bb_7_156;
	r6 = 0;
	r4 = r1->split;
	label$29ff4bb_7_113:
	if( r4 == NULL ) hl_null_access();
	r8 = r4->length;
	if( r6 >= r8 ) goto label$29ff4bb_7_156;
	r8 = r4->length;
	if( ((unsigned)r6) < ((unsigned)r8) ) goto label$29ff4bb_7_121;
	r20 = NULL;
	goto label$29ff4bb_7_124;
	label$29ff4bb_7_121:
	r12 = r4->array;
	r11 = ((vdynamic**)(r12 + 1))[r6];
	r20 = (hxd__fmt__hmd__SkinSplit)r11;
	label$29ff4bb_7_124:
	++r6;
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	if( r20 == NULL ) hl_null_access();
	r7 = r20->materialIndex;
	((void (*)(haxe__io__Output,int))r5->$type->vobj_proto[0])(r5,r7);
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	r21 = r20->joints;
	if( r21 == NULL ) hl_null_access();
	r7 = r21->length;
	((void (*)(haxe__io__Output,int))r5->$type->vobj_proto[0])(r5,r7);
	r7 = 0;
	r21 = r20->joints;
	label$29ff4bb_7_138:
	if( r21 == NULL ) hl_null_access();
	r22 = r21->length;
	if( r7 >= r22 ) goto label$29ff4bb_7_155;
	r22 = r21->length;
	if( ((unsigned)r7) < ((unsigned)r22) ) goto label$29ff4bb_7_146;
	r8 = 0;
	goto label$29ff4bb_7_150;
	label$29ff4bb_7_146:
	r23 = r21->bytes;
	r22 = 2;
	r22 = r7 << r22;
	r8 = *(int*)(r23 + r22);
	label$29ff4bb_7_150:
	++r7;
	r5 = r0->out;
	if( r5 == NULL ) hl_null_access();
	haxe_io_Output_writeUInt16(r5,r8);
	goto label$29ff4bb_7_138;
	label$29ff4bb_7_155:
	goto label$29ff4bb_7_113;
	label$29ff4bb_7_156:
	return;
}

void hxd_fmt_hmd_Writer_write(hxd__fmt__hmd__Writer r0,hxd__fmt__hmd__Data r1) {
	hxd__fmt__hmd__Skin r31;
	bool *r30;
	hxd__fmt__hmd__Model r28;
	String r8, r11;
	hxd__fmt__hmd__Material r23;
	hxd__fmt__hmd__AnimationEvent r38;
	hl__types__ArrayObj r12, r15, r19;
	venum *r24, *r26, *r40;
	haxe__io__Bytes r39, r41;
	bool r35;
	h3d__col__Bounds r22;
	hxd__fmt__hmd__GeometryFormat r20;
	hl__types__ArrayBytes_Int r21;
	hxd__fmt__hmd__Geometry r16;
	hxd__fmt__hmd__AnimationObject r36;
	haxe__io__BytesOutput r4;
	hxd__fmt__hmd__Animation r32;
	haxe__io__Output r2, r13;
	double r25, r33, r34;
	hxd__fmt__hmd__Position r29;
	int *r9;
	vdynamic *r7, *r27;
	varray *r17;
	vbyte *r10;
	int r5, r6, r14, r18, r37;
	r2 = r0->out;
	r4 = (haxe__io__BytesOutput)hl_alloc_obj(&t$haxe_io_BytesOutput);
	haxe_io_BytesOutput_new(r4);
	r0->out = ((haxe__io__Output)r4);
	if( r1 == NULL ) hl_null_access();
	r5 = r1->version;
	r0->version = r5;
	r5 = r0->version;
	r6 = 3;
	if( r6 >= r5 ) goto label$29ff4bb_8_18;
	r8 = (String)s$Can_t_write_HMD_v;
	r5 = r0->version;
	r9 = &r5;
	r10 = hl_itos(r5,r9);
	r11 = String___alloc__(r10,r5);
	r8 = String___add__(r8,r11);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$29ff4bb_8_18:
	r12 = r1->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r12);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r12 = r1->geometries;
	if( r12 == NULL ) hl_null_access();
	r5 = r12->length;
	haxe_io_Output_writeInt32(r13,r5);
	r5 = 0;
	r12 = r1->geometries;
	label$29ff4bb_8_28:
	if( r12 == NULL ) hl_null_access();
	r14 = r12->length;
	if( r5 >= r14 ) goto label$29ff4bb_8_117;
	r14 = r12->length;
	if( ((unsigned)r5) < ((unsigned)r14) ) goto label$29ff4bb_8_36;
	r16 = NULL;
	goto label$29ff4bb_8_39;
	label$29ff4bb_8_36:
	r17 = r12->array;
	r7 = ((vdynamic**)(r17 + 1))[r5];
	r16 = (hxd__fmt__hmd__Geometry)r7;
	label$29ff4bb_8_39:
	++r5;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r15);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r16->vertexCount;
	haxe_io_Output_writeInt32(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r16->vertexStride;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r15 = r16->vertexFormat;
	if( r15 == NULL ) hl_null_access();
	r6 = r15->length;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r6 = 0;
	r15 = r16->vertexFormat;
	label$29ff4bb_8_59:
	if( r15 == NULL ) hl_null_access();
	r18 = r15->length;
	if( r6 >= r18 ) goto label$29ff4bb_8_79;
	r18 = r15->length;
	if( ((unsigned)r6) < ((unsigned)r18) ) goto label$29ff4bb_8_67;
	r20 = NULL;
	goto label$29ff4bb_8_70;
	label$29ff4bb_8_67:
	r17 = r15->array;
	r7 = ((vdynamic**)(r17 + 1))[r6];
	r20 = (hxd__fmt__hmd__GeometryFormat)r7;
	label$29ff4bb_8_70:
	++r6;
	if( r20 == NULL ) hl_null_access();
	r8 = r20->name;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r14 = r20->format;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r14);
	goto label$29ff4bb_8_59;
	label$29ff4bb_8_79:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r16 == NULL ) hl_null_access();
	r6 = r16->vertexPosition;
	haxe_io_Output_writeInt32(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r21 = r16->indexCounts;
	if( r21 == NULL ) hl_null_access();
	r6 = r21->length;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r6 = 0;
	r21 = r16->indexCounts;
	label$29ff4bb_8_92:
	if( r21 == NULL ) hl_null_access();
	r18 = r21->length;
	if( r6 >= r18 ) goto label$29ff4bb_8_109;
	r18 = r21->length;
	if( ((unsigned)r6) < ((unsigned)r18) ) goto label$29ff4bb_8_100;
	r14 = 0;
	goto label$29ff4bb_8_104;
	label$29ff4bb_8_100:
	r10 = r21->bytes;
	r18 = 2;
	r18 = r6 << r18;
	r14 = *(int*)(r10 + r18);
	label$29ff4bb_8_104:
	++r6;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	haxe_io_Output_writeInt32(r13,r14);
	goto label$29ff4bb_8_92;
	label$29ff4bb_8_109:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r16 == NULL ) hl_null_access();
	r6 = r16->indexPosition;
	haxe_io_Output_writeInt32(r13,r6);
	r22 = r16->bounds;
	hxd_fmt_hmd_Writer_writeBounds(r0,r22);
	goto label$29ff4bb_8_28;
	label$29ff4bb_8_117:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r12 = r1->materials;
	if( r12 == NULL ) hl_null_access();
	r5 = r12->length;
	haxe_io_Output_writeInt32(r13,r5);
	r5 = 0;
	r12 = r1->materials;
	label$29ff4bb_8_126:
	if( r12 == NULL ) hl_null_access();
	r14 = r12->length;
	if( r5 >= r14 ) goto label$29ff4bb_8_173;
	r14 = r12->length;
	if( ((unsigned)r5) < ((unsigned)r14) ) goto label$29ff4bb_8_134;
	r23 = NULL;
	goto label$29ff4bb_8_137;
	label$29ff4bb_8_134:
	r17 = r12->array;
	r7 = ((vdynamic**)(r17 + 1))[r5];
	r23 = (hxd__fmt__hmd__Material)r7;
	label$29ff4bb_8_137:
	++r5;
	if( r23 == NULL ) hl_null_access();
	r15 = r23->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r15);
	r8 = r23->name;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	r8 = r23->diffuseTexture;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r24 = r23->blendMode;
	if( r24 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r24);
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = 1;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r25 = 1.;
	haxe_io_Output_writeFloat(r13,r25);
	r15 = r23->props;
	if( !r15 ) goto label$29ff4bb_8_172;
	r15 = r23->props;
	if( r15 == NULL ) hl_null_access();
	r26 = (venum*)g$69da9ba;
	r27 = NULL;
	r6 = hl_types_ArrayObj_indexOf(r15,((vdynamic*)r26),r27);
	r14 = 0;
	if( r6 < r14 ) goto label$29ff4bb_8_172;
	r8 = r23->specularTexture;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	r8 = r23->normalMap;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	label$29ff4bb_8_172:
	goto label$29ff4bb_8_126;
	label$29ff4bb_8_173:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r12 = r1->models;
	if( r12 == NULL ) hl_null_access();
	r5 = r12->length;
	haxe_io_Output_writeInt32(r13,r5);
	r5 = 0;
	r12 = r1->models;
	label$29ff4bb_8_182:
	if( r12 == NULL ) hl_null_access();
	r14 = r12->length;
	if( r5 >= r14 ) goto label$29ff4bb_8_254;
	r14 = r12->length;
	if( ((unsigned)r5) < ((unsigned)r14) ) goto label$29ff4bb_8_190;
	r28 = NULL;
	goto label$29ff4bb_8_193;
	label$29ff4bb_8_190:
	r17 = r12->array;
	r7 = ((vdynamic**)(r17 + 1))[r5];
	r28 = (hxd__fmt__hmd__Model)r7;
	label$29ff4bb_8_193:
	++r5;
	if( r28 == NULL ) hl_null_access();
	r15 = r28->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r15);
	r8 = r28->name;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r28->parent;
	r14 = 1;
	r6 = r6 + r14;
	haxe_io_Output_writeInt32(r13,r6);
	r8 = r28->follow;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	r29 = r28->position;
	r30 = NULL;
	hxd_fmt_hmd_Writer_writePosition(r0,r29,r30);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r28->geometry;
	r14 = 1;
	r6 = r6 + r14;
	haxe_io_Output_writeInt32(r13,r6);
	r6 = r28->geometry;
	r14 = 0;
	if( r6 >= r14 ) goto label$29ff4bb_8_220;
	goto label$29ff4bb_8_182;
	label$29ff4bb_8_220:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r21 = r28->materials;
	if( r21 == NULL ) hl_null_access();
	r6 = r21->length;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r6 = 0;
	r21 = r28->materials;
	label$29ff4bb_8_228:
	if( r21 == NULL ) hl_null_access();
	r18 = r21->length;
	if( r6 >= r18 ) goto label$29ff4bb_8_245;
	r18 = r21->length;
	if( ((unsigned)r6) < ((unsigned)r18) ) goto label$29ff4bb_8_236;
	r14 = 0;
	goto label$29ff4bb_8_240;
	label$29ff4bb_8_236:
	r10 = r21->bytes;
	r18 = 2;
	r18 = r6 << r18;
	r14 = *(int*)(r10 + r18);
	label$29ff4bb_8_240:
	++r6;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	haxe_io_Output_writeInt32(r13,r14);
	goto label$29ff4bb_8_228;
	label$29ff4bb_8_245:
	if( r28 == NULL ) hl_null_access();
	r31 = r28->skin;
	if( r31 ) goto label$29ff4bb_8_251;
	r8 = NULL;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	goto label$29ff4bb_8_253;
	label$29ff4bb_8_251:
	r31 = r28->skin;
	hxd_fmt_hmd_Writer_writeSkin(r0,r31);
	label$29ff4bb_8_253:
	goto label$29ff4bb_8_182;
	label$29ff4bb_8_254:
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r12 = r1->animations;
	if( r12 == NULL ) hl_null_access();
	r5 = r12->length;
	haxe_io_Output_writeInt32(r13,r5);
	r5 = 0;
	r12 = r1->animations;
	label$29ff4bb_8_263:
	if( r12 == NULL ) hl_null_access();
	r14 = r12->length;
	if( r5 >= r14 ) goto label$29ff4bb_8_407;
	r14 = r12->length;
	if( ((unsigned)r5) < ((unsigned)r14) ) goto label$29ff4bb_8_271;
	r32 = NULL;
	goto label$29ff4bb_8_274;
	label$29ff4bb_8_271:
	r17 = r12->array;
	r7 = ((vdynamic**)(r17 + 1))[r5];
	r32 = (hxd__fmt__hmd__Animation)r7;
	label$29ff4bb_8_274:
	++r5;
	if( r32 == NULL ) hl_null_access();
	r15 = r32->props;
	hxd_fmt_hmd_Writer_writeProps(r0,r15);
	r8 = r32->name;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r32->frames;
	haxe_io_Output_writeInt32(r13,r6);
	r25 = r32->sampling;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r34 = 0.;
	if( r25 != r34 ) goto label$29ff4bb_8_291;
	r33 = 0.;
	goto label$29ff4bb_8_292;
	label$29ff4bb_8_291:
	r33 = r25;
	label$29ff4bb_8_292:
	haxe_io_Output_writeFloat(r13,r33);
	r25 = r32->speed;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r34 = 0.;
	if( r25 != r34 ) goto label$29ff4bb_8_300;
	r33 = 0.;
	goto label$29ff4bb_8_301;
	label$29ff4bb_8_300:
	r33 = r25;
	label$29ff4bb_8_301:
	haxe_io_Output_writeFloat(r13,r33);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r35 = r32->loop;
	if( !r35 ) goto label$29ff4bb_8_308;
	r6 = 1;
	goto label$29ff4bb_8_309;
	label$29ff4bb_8_308:
	r6 = 0;
	label$29ff4bb_8_309:
	r15 = r32->events;
	if( !r15 ) goto label$29ff4bb_8_313;
	r14 = 2;
	goto label$29ff4bb_8_314;
	label$29ff4bb_8_313:
	r14 = 0;
	label$29ff4bb_8_314:
	r6 = r6 | r14;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r6 = r32->dataPosition;
	haxe_io_Output_writeInt32(r13,r6);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r15 = r32->objects;
	if( r15 == NULL ) hl_null_access();
	r6 = r15->length;
	haxe_io_Output_writeInt32(r13,r6);
	r6 = 0;
	r15 = r32->objects;
	label$29ff4bb_8_328:
	if( r15 == NULL ) hl_null_access();
	r18 = r15->length;
	if( r6 >= r18 ) goto label$29ff4bb_8_375;
	r18 = r15->length;
	if( ((unsigned)r6) < ((unsigned)r18) ) goto label$29ff4bb_8_336;
	r36 = NULL;
	goto label$29ff4bb_8_339;
	label$29ff4bb_8_336:
	r17 = r15->array;
	r7 = ((vdynamic**)(r17 + 1))[r6];
	r36 = (hxd__fmt__hmd__AnimationObject)r7;
	label$29ff4bb_8_339:
	++r6;
	if( r36 == NULL ) hl_null_access();
	r8 = r36->name;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r14 = r36->flags;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r14);
	r14 = r36->flags;
	r18 = 64;
	r14 = r14 & r18;
	r18 = 0;
	if( r14 == r18 ) goto label$29ff4bb_8_374;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r19 = r36->props;
	if( r19 == NULL ) hl_null_access();
	r14 = r19->length;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r14);
	r14 = 0;
	r19 = r36->props;
	label$29ff4bb_8_360:
	if( r19 == NULL ) hl_null_access();
	r37 = r19->length;
	if( r14 >= r37 ) goto label$29ff4bb_8_374;
	r37 = r19->length;
	if( ((unsigned)r14) < ((unsigned)r37) ) goto label$29ff4bb_8_368;
	r8 = NULL;
	goto label$29ff4bb_8_371;
	label$29ff4bb_8_368:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r14];
	r8 = (String)r7;
	label$29ff4bb_8_371:
	++r14;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	goto label$29ff4bb_8_360;
	label$29ff4bb_8_374:
	goto label$29ff4bb_8_328;
	label$29ff4bb_8_375:
	if( r32 == NULL ) hl_null_access();
	r15 = r32->events;
	if( !r15 ) goto label$29ff4bb_8_406;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r15 = r32->events;
	if( r15 == NULL ) hl_null_access();
	r6 = r15->length;
	haxe_io_Output_writeInt32(r13,r6);
	r6 = 0;
	r15 = r32->events;
	label$29ff4bb_8_386:
	if( r15 == NULL ) hl_null_access();
	r18 = r15->length;
	if( r6 >= r18 ) goto label$29ff4bb_8_406;
	r18 = r15->length;
	if( ((unsigned)r6) < ((unsigned)r18) ) goto label$29ff4bb_8_394;
	r38 = NULL;
	goto label$29ff4bb_8_397;
	label$29ff4bb_8_394:
	r17 = r15->array;
	r7 = ((vdynamic**)(r17 + 1))[r6];
	r38 = (hxd__fmt__hmd__AnimationEvent)r7;
	label$29ff4bb_8_397:
	++r6;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r38 == NULL ) hl_null_access();
	r14 = r38->frame;
	haxe_io_Output_writeInt32(r13,r14);
	r8 = r38->data;
	hxd_fmt_hmd_Writer_writeName(r0,r8);
	goto label$29ff4bb_8_386;
	label$29ff4bb_8_406:
	goto label$29ff4bb_8_263;
	label$29ff4bb_8_407:
	if( r4 == NULL ) hl_null_access();
	r39 = haxe_io_BytesOutput_getBytes(r4);
	r0->out = r2;
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r8 = (String)s$HMD;
	r40 = NULL;
	haxe_io_Output_writeString(r13,r8,r40);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r5 = r1->version;
	((void (*)(haxe__io__Output,int))r13->$type->vobj_proto[0])(r13,r5);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	if( r39 == NULL ) hl_null_access();
	r5 = r39->length;
	r6 = 12;
	r5 = r5 + r6;
	haxe_io_Output_writeInt32(r13,r5);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	haxe_io_Output_write(r13,r39);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r41 = r1->data;
	if( r41 == NULL ) hl_null_access();
	r5 = r41->length;
	haxe_io_Output_writeInt32(r13,r5);
	r13 = r0->out;
	if( r13 == NULL ) hl_null_access();
	r41 = r1->data;
	haxe_io_Output_write(r13,r41);
	return;
}

