﻿// Generated by HLC 4.1.5 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/_Unserializer/DefaultResolver.h>
hl__Class Type_resolveClass(String);
hl__BaseType Type_resolveEnum(String);

void haxe__Unserializer_DefaultResolver_new(haxe___Unserializer__DefaultResolver r0) {
	return;
}

hl__Class haxe__Unserializer_DefaultResolver_resolveClass(haxe___Unserializer__DefaultResolver r0,String r1) {
	hl__Class r2;
	r2 = Type_resolveClass(r1);
	return r2;
}

hl__BaseType haxe__Unserializer_DefaultResolver_resolveEnum(haxe___Unserializer__DefaultResolver r0,String r1) {
	hl__BaseType r2;
	r2 = Type_resolveEnum(r1);
	return r2;
}

