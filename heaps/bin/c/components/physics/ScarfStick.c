﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/physics/ScarfStick.h>
extern venum* g$7bcd604;
void components_physics_Stick_new(components__physics__Stick,hxlr__components__ContactPoint,hxlr__components__ContactPoint,venum*,components__sledder__RiderBase);

void components_physics_ScarfStick_new(components__physics__ScarfStick r0,hxlr__components__ContactPoint r1,hxlr__components__ContactPoint r2,components__sledder__RiderBase r3) {
	venum *r5;
	r5 = (venum*)g$7bcd604;
	components_physics_Stick_new(((components__physics__Stick)r0),r1,r2,r5,r3);
	return;
}

