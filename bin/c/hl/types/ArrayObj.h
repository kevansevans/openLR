﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hl__types__ArrayObj
#define INC_hl__types__ArrayObj
typedef struct _hl__types__ArrayObj *hl__types__ArrayObj;
#include <hl/types/ArrayBase.h>
#include <hl/types/ArrayAccess.h>


struct _hl__types__ArrayObj {
	hl_type *$type;
	int length;
	varray* array;
};
#endif

