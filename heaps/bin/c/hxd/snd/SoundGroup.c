﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/SoundGroup.h>

void hxd_snd_SoundGroup_new(hxd__snd__SoundGroup r0,String r1) {
	bool r4;
	double r3;
	int r2;
	r0->name = r1;
	r2 = -1;
	r0->maxAudible = r2;
	r3 = 1.;
	r0->volume = r3;
	r4 = false;
	r0->mono = r4;
	return;
}
