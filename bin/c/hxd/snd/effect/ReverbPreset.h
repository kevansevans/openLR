﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__snd__effect__ReverbPreset
#define INC_hxd__snd__effect__ReverbPreset
typedef struct _hxd__snd__effect__$ReverbPreset *hxd__snd__effect__$ReverbPreset;
typedef struct _hxd__snd__effect__ReverbPreset *hxd__snd__effect__ReverbPreset;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _hxd__snd__effect__$ReverbPreset {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hxd__snd__effect__ReverbPreset DEFAULT;
};
struct _hxd__snd__effect__ReverbPreset {
	hl_type *$type;
	double room;
	double roomHF;
	double roomRolloffFactor;
	double decayTime;
	double decayHFRatio;
	double reflections;
	double reflectionsDelay;
	double reverb;
	double reverbDelay;
	double diffusion;
	double density;
	double hfReference;
};
#endif

