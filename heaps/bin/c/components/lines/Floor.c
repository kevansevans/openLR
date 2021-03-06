﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <components/lines/Floor.h>
void components_lines_LineBase_new(components__lines__LineBase,h2d__col__Point,h2d__col__Point,bool,vdynamic*);
#include <hxlr/components/ContactPoint.h>

void components_lines_Floor_new(components__lines__Floor r0,h2d__col__Point r1,h2d__col__Point r2,bool r3) {
	vdynamic *r5;
	int r6;
	r5 = NULL;
	components_lines_LineBase_new(((components__lines__LineBase)r0),r1,r2,r3,r5);
	r6 = 0;
	r0->type = r6;
	return;
}

void components_lines_Floor_collide(components__lines__Floor r0,hxlr__components__ContactPoint r1) {
	h2d__col__Point r3, r12;
	double r2, r4, r6, r7, r8, r9, r10, r13;
	int r11;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->pos;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->x;
	r3 = r0->start;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->x;
	r2 = r2 - r4;
	r3 = r1->pos;
	if( r3 == NULL ) hl_null_access();
	r4 = r3->y;
	r3 = r0->start;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->y;
	r4 = r4 - r6;
	r6 = r0->nx;
	r6 = r6 * r2;
	r7 = r0->ny;
	r7 = r7 * r4;
	r6 = r6 + r7;
	r8 = r0->dx;
	r7 = r2 * r8;
	r9 = r0->dy;
	r8 = r4 * r9;
	r7 = r7 + r8;
	r8 = r0->invSqrDistance;
	r7 = r7 * r8;
	r3 = r1->dir;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->x;
	r9 = r0->nx;
	r8 = r8 * r9;
	r3 = r1->dir;
	if( r3 == NULL ) hl_null_access();
	r9 = r3->y;
	r10 = r0->ny;
	r9 = r9 * r10;
	r8 = r8 + r9;
	r9 = 0.;
	if( !(r9 < r8) ) goto label$e262668_2_105;
	r9 = 0.;
	if( !(r9 < r6) ) goto label$e262668_2_105;
	r11 = r0->zone;
	r9 = (double)r11;
	if( !(r6 < r9) ) goto label$e262668_2_105;
	r9 = r0->limStart;
	if( !(r7 >= r9) ) goto label$e262668_2_105;
	r9 = r0->limEnd;
	if( !(r9 >= r7) ) goto label$e262668_2_105;
	r3 = r1->pos;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->x;
	r10 = r0->nx;
	r9 = r6 * r10;
	r8 = r8 - r9;
	r3->x = r8;
	r3 = r1->pos;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->y;
	r10 = r0->ny;
	r9 = r6 * r10;
	r8 = r8 - r9;
	r3->y = r8;
	r3 = r1->vel;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->x;
	r9 = r0->ny;
	r10 = r1->friction;
	r9 = r9 * r10;
	r9 = r9 * r6;
	r12 = r1->vel;
	if( r12 == NULL ) hl_null_access();
	r10 = r12->x;
	r12 = r1->pos;
	if( r12 == NULL ) hl_null_access();
	r13 = r12->x;
	if( !(r10 < r13) ) goto label$e262668_2_79;
	r11 = 1;
	goto label$e262668_2_80;
	label$e262668_2_79:
	r11 = -1;
	label$e262668_2_80:
	r10 = (double)r11;
	r9 = r9 * r10;
	r8 = r8 + r9;
	r3->x = r8;
	r3 = r1->vel;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->y;
	r9 = r0->nx;
	r10 = r1->friction;
	r9 = r9 * r10;
	r9 = r9 * r6;
	r12 = r1->vel;
	if( r12 == NULL ) hl_null_access();
	r10 = r12->y;
	r12 = r1->pos;
	if( r12 == NULL ) hl_null_access();
	r13 = r12->y;
	if( !(r10 < r13) ) goto label$e262668_2_100;
	r11 = -1;
	goto label$e262668_2_101;
	label$e262668_2_100:
	r11 = 1;
	label$e262668_2_101:
	r10 = (double)r11;
	r9 = r9 * r10;
	r8 = r8 - r9;
	r3->y = r8;
	label$e262668_2_105:
	return;
}

