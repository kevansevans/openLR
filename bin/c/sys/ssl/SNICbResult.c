﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <sys/ssl/SNICbResult.h>
#include <sys/ssl/Certificate.h>
#include <sys/ssl/Key.h>
#include <hl/natives.h>

void sys_ssl_SNICbResult_new(sys__ssl__SNICbResult r0,sys__ssl__Certificate r1,sys__ssl__Key r2) {
	hl_ssl_cert *r3;
	hl_ssl_pkey *r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->__x;
	r0->cert = r3;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->__k;
	r0->key = r4;
	return;
}

