﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_components__managers__Musicplayer
#define INC_components__managers__Musicplayer
typedef struct _components__managers__$Musicplayer *components__managers__$Musicplayer;
typedef struct _components__managers__Musicplayer *components__managers__Musicplayer;
#include <hxd/fs/BytesFileEntry.h>
#include <components/managers/Musicplayer.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hxd/snd/effect/Pitch.h>
#include <hxd/res/Sound.h>
#include <hxd/snd/Channel.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	hxd__fs__BytesFileEntry p0;
	components__managers__Musicplayer p1;
} Enumt$ctx_69acb46;
struct _components__managers__$Musicplayer {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _components__managers__Musicplayer {
	hl_type *$type;
	double offset;
	hxd__snd__effect__Pitch speedfilter;
	hxd__res__Sound sound;
	hxd__snd__Channel mixer;
	bool playing;
};
#endif

