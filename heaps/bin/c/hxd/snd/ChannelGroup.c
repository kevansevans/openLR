﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <hxd/snd/ChannelGroup.h>
void hxd_snd_ChannelBase_new(hxd__snd__ChannelBase);

void hxd_snd_ChannelGroup_new(hxd__snd__ChannelGroup r0,String r1) {
	hxd_snd_ChannelBase_new(((hxd__snd__ChannelBase)r0));
	r0->name = r1;
	return;
}

