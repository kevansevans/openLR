﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <_std/IntIterator.h>

void IntIterator_new(IntIterator r0,int r1,int r2) {
	r0->min = r1;
	r0->max = r2;
	return;
}

bool IntIterator_hasNext(IntIterator r0) {
	bool r1;
	int r2, r3;
	r2 = r0->min;
	r3 = r0->max;
	if( r2 < r3 ) goto label$4e12878_2_5;
	r1 = false;
	goto label$4e12878_2_6;
	label$4e12878_2_5:
	r1 = true;
	label$4e12878_2_6:
	return r1;
}

int IntIterator_next(IntIterator r0) {
	int r1, r2;
	r1 = r0->min;
	r2 = r1;
	++r1;
	r0->min = r1;
	return r2;
}

