﻿// Generated by HLC 4.1.5 (HL v5)
#ifndef INC_hscript__Expr
#define INC_hscript__Expr
typedef struct _hscript__$Expr *hscript__$Expr;
#include <hl/Enum.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/natives.h>
#include <hl/types/ArrayObj.h>
#include <hscript/Const.h>
#include <hscript/Expr.h>
#include <hscript/CType.h>


struct _hscript__$Expr {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __ename__;
	hl_bytes_map* __emap__;
	hl__types__ArrayObj __constructs__;
	varray* __evalues__;
};
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
} hscript_Expr_EConst;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
} hscript_Expr_EIdent;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	venum* p1;
	venum* p2;
} hscript_Expr_EVar;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
} hscript_Expr_EParent;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayObj p0;
} hscript_Expr_EBlock;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	String p1;
} hscript_Expr_EField;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	venum* p1;
	venum* p2;
} hscript_Expr_EBinop;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	bool p1;
	venum* p2;
} hscript_Expr_EUnop;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	hl__types__ArrayObj p1;
} hscript_Expr_ECall;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	venum* p1;
	venum* p2;
} hscript_Expr_EIf;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	venum* p1;
} hscript_Expr_EWhile;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	venum* p1;
	venum* p2;
} hscript_Expr_EFor;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayObj p0;
	venum* p1;
	String p2;
	venum* p3;
} hscript_Expr_EFunction;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
} hscript_Expr_EReturn;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	venum* p1;
} hscript_Expr_EArray;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayObj p0;
} hscript_Expr_EArrayDecl;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	hl__types__ArrayObj p1;
} hscript_Expr_ENew;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
} hscript_Expr_EThrow;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	String p1;
	venum* p2;
	venum* p3;
} hscript_Expr_ETry;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayObj p0;
} hscript_Expr_EObject;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	venum* p1;
	venum* p2;
} hscript_Expr_ETernary;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	hl__types__ArrayObj p1;
	venum* p2;
} hscript_Expr_ESwitch;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	venum* p1;
} hscript_Expr_EDoWhile;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	hl__types__ArrayObj p1;
	venum* p2;
} hscript_Expr_EMeta;
typedef struct {
	HL__ENUM_CONSTRUCT__
	venum* p0;
	venum* p1;
} hscript_Expr_ECheckType;
#endif
