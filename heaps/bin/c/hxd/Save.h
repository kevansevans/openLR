﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hxd__Save
#define INC_hxd__Save
typedef struct _hxd__$Save *hxd__$Save;
typedef struct _hxd__Save *hxd__Save;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _hxd__$Save {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	String SALT;
	vclosure* makeCRC;
	vclosure* loadData;
	vclosure* saveData;
	vclosure* load;
	vclosure* readSaveData;
	vclosure* writeSaveData;
	vclosure* save;
};
struct _hxd__Save {
	hl_type *$type;
};
#endif

