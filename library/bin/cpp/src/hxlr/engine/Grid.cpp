// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxlr_engine_Cell
#include <hxlr/engine/Cell.h>
#endif
#ifndef INCLUDED_hxlr_engine_Grid
#include <hxlr/engine/Grid.h>
#endif
#ifndef INCLUDED_hxlr_lines_LineObject
#include <hxlr/lines/LineObject.h>
#endif
#ifndef INCLUDED_hxlr_math_geom_Line
#include <hxlr/math/geom/Line.h>
#endif
#ifndef INCLUDED_hxlr_math_geom_Point
#include <hxlr/math/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_25d95e4dfc05c545_22_new,"hxlr.engine.Grid","new",0x7e45aa2c,"hxlr.engine.Grid.new","hxlr/engine/Grid.hx",22,0x3cf3d0a4)
HX_LOCAL_STACK_FRAME(_hx_pos_25d95e4dfc05c545_28_register,"hxlr.engine.Grid","register",0x2b28c917,"hxlr.engine.Grid.register","hxlr/engine/Grid.hx",28,0x3cf3d0a4)
HX_LOCAL_STACK_FRAME(_hx_pos_25d95e4dfc05c545_94_addLine,"hxlr.engine.Grid","addLine",0xb8010a81,"hxlr.engine.Grid.addLine","hxlr/engine/Grid.hx",94,0x3cf3d0a4)
HX_LOCAL_STACK_FRAME(_hx_pos_25d95e4dfc05c545_104_storeLine,"hxlr.engine.Grid","storeLine",0x81459741,"hxlr.engine.Grid.storeLine","hxlr/engine/Grid.hx",104,0x3cf3d0a4)
HX_LOCAL_STACK_FRAME(_hx_pos_25d95e4dfc05c545_113_deleteTrack,"hxlr.engine.Grid","deleteTrack",0xb767482c,"hxlr.engine.Grid.deleteTrack","hxlr/engine/Grid.hx",113,0x3cf3d0a4)
HX_LOCAL_STACK_FRAME(_hx_pos_25d95e4dfc05c545_116_unregister,"hxlr.engine.Grid","unregister",0x3f81c570,"hxlr.engine.Grid.unregister","hxlr/engine/Grid.hx",116,0x3cf3d0a4)
HX_LOCAL_STACK_FRAME(_hx_pos_25d95e4dfc05c545_14_boot,"hxlr.engine.Grid","boot",0xf6c83ce6,"hxlr.engine.Grid.boot","hxlr/engine/Grid.hx",14,0x3cf3d0a4)
HX_LOCAL_STACK_FRAME(_hx_pos_25d95e4dfc05c545_15_boot,"hxlr.engine.Grid","boot",0xf6c83ce6,"hxlr.engine.Grid.boot","hxlr/engine/Grid.hx",15,0x3cf3d0a4)
HX_LOCAL_STACK_FRAME(_hx_pos_25d95e4dfc05c545_16_boot,"hxlr.engine.Grid","boot",0xf6c83ce6,"hxlr.engine.Grid.boot","hxlr/engine/Grid.hx",16,0x3cf3d0a4)
namespace hxlr{
namespace engine{

void Grid_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_25d95e4dfc05c545_22_new)
HXLINE(  23)		::hxlr::engine::Grid_obj::registry =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  24)		::hxlr::engine::Grid_obj::lines = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic Grid_obj::__CreateEmpty() { return new Grid_obj; }

void *Grid_obj::_hx_vtable = 0;

Dynamic Grid_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grid_obj > _hx_result = new Grid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Grid_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6fd4487e;
}

int Grid_obj::lineCount;

int Grid_obj::lineIDCount;

::Array< ::Dynamic> Grid_obj::subTypeCount;

 ::haxe::ds::StringMap Grid_obj::registry;

::Array< ::Dynamic> Grid_obj::lines;

void Grid_obj::_hx_register( ::hxlr::lines::LineObject _line){
            	HX_STACKFRAME(&_hx_pos_25d95e4dfc05c545_28_register)
HXLINE(  29)		::hxlr::engine::Grid_obj::addLine(_line);
HXLINE(  31)		 ::Dynamic start = ::hxlr::engine::Cell_obj::getInfo(_line->start->x,_line->start->y);
HXLINE(  32)		 ::Dynamic end = ::hxlr::engine::Cell_obj::getInfo(_line->end->x,_line->end->y);
HXLINE(  34)		int right;
HXDLIN(  34)		if ((_line->dx > 0)) {
HXLINE(  34)			right = ( (int)(end->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  34)			right = ( (int)(start->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
            		}
HXLINE(  35)		int left;
HXDLIN(  35)		if ((_line->dx > 0)) {
HXLINE(  35)			left = ( (int)(start->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  35)			left = ( (int)(end->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
            		}
HXLINE(  36)		int bottom;
HXDLIN(  36)		if ((_line->dy > 0)) {
HXLINE(  36)			bottom = ( (int)(end->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  36)			bottom = ( (int)(start->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
            		}
HXLINE(  37)		int top;
HXDLIN(  37)		if ((_line->dy > 0)) {
HXLINE(  37)			top = ( (int)(start->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  37)			top = ( (int)(end->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
            		}
HXLINE(  39)		::hxlr::engine::Grid_obj::storeLine(_line,start);
HXLINE(  41)		bool _hx_tmp;
HXDLIN(  41)		bool _hx_tmp1;
HXDLIN(  41)		if ((_line->dx == 0)) {
HXLINE(  41)			_hx_tmp1 = (_line->dy == 0);
            		}
            		else {
HXLINE(  41)			_hx_tmp1 = false;
            		}
HXDLIN(  41)		if (!(_hx_tmp1)) {
HXLINE(  41)			if ((left == right)) {
HXLINE(  41)				_hx_tmp = (top == bottom);
            			}
            			else {
HXLINE(  41)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(  41)			_hx_tmp = true;
            		}
HXDLIN(  41)		if (_hx_tmp) {
HXLINE(  42)			return;
            		}
HXLINE(  45)		Float x = _line->start->x;
HXLINE(  46)		Float y = _line->start->y;
HXLINE(  47)		Float invDx;
HXDLIN(  47)		if ((_line->dx == 0)) {
HXLINE(  47)			invDx = ( (Float)(1) );
            		}
            		else {
HXLINE(  47)			invDx = (( (Float)(1) ) / _line->dx);
            		}
HXLINE(  48)		Float invDy;
HXDLIN(  48)		if ((_line->dy == 0)) {
HXLINE(  48)			invDy = ( (Float)(1) );
            		}
            		else {
HXLINE(  48)			invDy = (( (Float)(1) ) / _line->dy);
            		}
HXLINE(  50)		Float difX;
HXLINE(  51)		Float difY;
HXLINE(  53)		while(true){
HXLINE(  55)			if (::hx::IsLess( start->__Field(HX_("x",78,00,00,00),::hx::paccDynamic),0 )) {
HXLINE(  56)				if ((_line->dx > 0)) {
HXLINE(  56)					difX = ( (Float)((14 + start->__Field(HX_("gx",31,5a,00,00),::hx::paccDynamic))) );
            				}
            				else {
HXLINE(  56)					difX = (( (Float)(-14) ) - ( (Float)(start->__Field(HX_("gx",31,5a,00,00),::hx::paccDynamic)) ));
            				}
            			}
            			else {
HXLINE(  58)				if ((_line->dx > 0)) {
HXLINE(  58)					difX = (( (Float)(14) ) - ( (Float)(start->__Field(HX_("gx",31,5a,00,00),::hx::paccDynamic)) ));
            				}
            				else {
HXLINE(  58)					difX = -(( (Float)((start->__Field(HX_("gx",31,5a,00,00),::hx::paccDynamic) + 1)) ));
            				}
            			}
HXLINE(  60)			if (::hx::IsLess( start->__Field(HX_("y",79,00,00,00),::hx::paccDynamic),0 )) {
HXLINE(  61)				if ((_line->dy > 0)) {
HXLINE(  61)					difY = ( (Float)((14 + start->__Field(HX_("gy",32,5a,00,00),::hx::paccDynamic))) );
            				}
            				else {
HXLINE(  61)					difY = (( (Float)(-14) ) - ( (Float)(start->__Field(HX_("gy",32,5a,00,00),::hx::paccDynamic)) ));
            				}
            			}
            			else {
HXLINE(  63)				if ((_line->dy > 0)) {
HXLINE(  63)					difY = (( (Float)(14) ) - ( (Float)(start->__Field(HX_("gy",32,5a,00,00),::hx::paccDynamic)) ));
            				}
            				else {
HXLINE(  63)					difY = -(( (Float)((start->__Field(HX_("gy",32,5a,00,00),::hx::paccDynamic) + 1)) ));
            				}
            			}
HXLINE(  66)			if ((_line->dx == 0)) {
HXLINE(  67)				y = (y + difY);
            			}
            			else {
HXLINE(  68)				if ((_line->dy == 0)) {
HXLINE(  69)					x = (x + difX);
            				}
            				else {
HXLINE(  72)					Float step = (y + ((_line->dy * difX) * invDx));
HXLINE(  73)					if ((::Math_obj::abs((step - y)) < ::Math_obj::abs(difY))) {
HXLINE(  74)						x = (x + difX);
HXLINE(  75)						y = step;
            					}
            					else {
HXLINE(  76)						if ((::Math_obj::abs((step - y)) == ::Math_obj::abs(difY))) {
HXLINE(  77)							x = (x + difX);
HXLINE(  78)							y = (y + difY);
            						}
            						else {
HXLINE(  80)							x = (x + ((_line->dx * difY) * invDy));
HXLINE(  81)							y = (y + difY);
            						}
            					}
            				}
            			}
HXLINE(  84)			start = ::hxlr::engine::Cell_obj::getInfo(x,y);
HXLINE(  85)			bool _hx_tmp;
HXDLIN(  85)			bool _hx_tmp1;
HXDLIN(  85)			bool _hx_tmp2;
HXDLIN(  85)			if (::hx::IsGreaterEq( start->__Field(HX_("x",78,00,00,00),::hx::paccDynamic),left )) {
HXLINE(  85)				_hx_tmp2 = ::hx::IsLessEq( start->__Field(HX_("x",78,00,00,00),::hx::paccDynamic),right );
            			}
            			else {
HXLINE(  85)				_hx_tmp2 = false;
            			}
HXDLIN(  85)			if (_hx_tmp2) {
HXLINE(  85)				_hx_tmp1 = ::hx::IsGreaterEq( start->__Field(HX_("y",79,00,00,00),::hx::paccDynamic),top );
            			}
            			else {
HXLINE(  85)				_hx_tmp1 = false;
            			}
HXDLIN(  85)			if (_hx_tmp1) {
HXLINE(  85)				_hx_tmp = ::hx::IsLessEq( start->__Field(HX_("y",79,00,00,00),::hx::paccDynamic),bottom );
            			}
            			else {
HXLINE(  85)				_hx_tmp = false;
            			}
HXDLIN(  85)			if (_hx_tmp) {
HXLINE(  86)				::hxlr::engine::Grid_obj::storeLine(_line,start);
HXLINE(  87)				continue;
            			}
HXLINE(  89)			return;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,_hx_register,(void))

void Grid_obj::addLine( ::hxlr::lines::LineObject _line){
            	HX_STACKFRAME(&_hx_pos_25d95e4dfc05c545_94_addLine)
HXLINE(  95)		if (::hx::IsNull( _line->id )) {
HXLINE(  95)			_line->id = ::hxlr::engine::Grid_obj::lineIDCount;
            		}
HXLINE(  96)		::hxlr::engine::Grid_obj::lines[( (int)(_line->id) )] = _line;
HXLINE(  97)		++::hxlr::engine::Grid_obj::lineCount;
HXLINE(  98)		++::hxlr::engine::Grid_obj::lineIDCount;
HXLINE(  99)		if (::hx::IsNull( ::hxlr::engine::Grid_obj::subTypeCount->__get(_line->type) )) {
HXLINE(  99)			::hxlr::engine::Grid_obj::subTypeCount[_line->type] = 0;
            		}
HXLINE( 100)		++::hx::IndexRef(::hxlr::engine::Grid_obj::subTypeCount.mPtr,_line->type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,addLine,(void))

void Grid_obj::storeLine( ::hxlr::lines::LineObject _line, ::Dynamic _info){
            	HX_GC_STACKFRAME(&_hx_pos_25d95e4dfc05c545_104_storeLine)
HXLINE( 105)		if (::hx::IsNull( ::hxlr::engine::Grid_obj::registry->get( ::Dynamic(_info->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic))) )) {
HXLINE( 106)			::Dynamic this1 = ::hxlr::engine::Grid_obj::registry;
HXDLIN( 106)			::String k = ( (::String)(_info->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)) );
HXDLIN( 106)			 ::hxlr::engine::Cell v =  ::hxlr::engine::Cell_obj::__alloc( HX_CTX ,_info);
HXDLIN( 106)			( ( ::haxe::ds::StringMap)(this1) )->set(k,v);
            		}
HXLINE( 108)		( ( ::hxlr::engine::Cell)(::hxlr::engine::Grid_obj::registry->get( ::Dynamic(_info->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)))) )->addLine(_line);
HXLINE( 109)		_line->keyList->push( ::Dynamic(_info->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,storeLine,(void))

void Grid_obj::deleteTrack(){
            	HX_STACKFRAME(&_hx_pos_25d95e4dfc05c545_113_deleteTrack)
HXDLIN( 113)		int _g = 0;
HXDLIN( 113)		::Array< ::Dynamic> _g1 = ::hxlr::engine::Grid_obj::lines;
HXDLIN( 113)		while((_g < _g1->length)){
HXDLIN( 113)			 ::hxlr::lines::LineObject line = _g1->__get(_g).StaticCast<  ::hxlr::lines::LineObject >();
HXDLIN( 113)			_g = (_g + 1);
HXDLIN( 113)			::hxlr::engine::Grid_obj::unregister(line);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,deleteTrack,(void))

void Grid_obj::unregister( ::hxlr::lines::LineObject _line){
            	HX_STACKFRAME(&_hx_pos_25d95e4dfc05c545_116_unregister)
HXLINE( 118)		if (::hx::IsNull( _line )) {
HXLINE( 118)			return;
            		}
HXLINE( 120)		{
HXLINE( 120)			int _g = 0;
HXDLIN( 120)			::Array< ::String > _g1 = _line->keyList;
HXDLIN( 120)			while((_g < _g1->length)){
HXLINE( 120)				::String key = _g1->__get(_g);
HXDLIN( 120)				_g = (_g + 1);
HXLINE( 121)				( ( ::hxlr::engine::Cell)(::hxlr::engine::Grid_obj::registry->get(key)) )->removeLine(_line);
            			}
            		}
HXLINE( 124)		--::hxlr::engine::Grid_obj::lineCount;
HXLINE( 125)		--::hx::IndexRef(::hxlr::engine::Grid_obj::subTypeCount.mPtr,_line->type);
HXLINE( 127)		::hxlr::engine::Grid_obj::lines[( (int)(_line->id) )] = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,unregister,(void))


::hx::ObjectPtr< Grid_obj > Grid_obj::__new() {
	::hx::ObjectPtr< Grid_obj > __this = new Grid_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Grid_obj > Grid_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Grid_obj *__this = (Grid_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Grid_obj), false, "hxlr.engine.Grid"));
	*(void **)__this = Grid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Grid_obj::Grid_obj()
{
}

bool Grid_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { outValue = ( lines ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addLine") ) { outValue = addLine_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"registry") ) { outValue = ( registry ); return true; }
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineCount") ) { outValue = ( lineCount ); return true; }
		if (HX_FIELD_EQ(inName,"storeLine") ) { outValue = storeLine_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { outValue = unregister_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineIDCount") ) { outValue = ( lineIDCount ); return true; }
		if (HX_FIELD_EQ(inName,"deleteTrack") ) { outValue = deleteTrack_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"subTypeCount") ) { outValue = ( subTypeCount ); return true; }
	}
	return false;
}

bool Grid_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { lines=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"registry") ) { registry=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineCount") ) { lineCount=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineIDCount") ) { lineIDCount=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"subTypeCount") ) { subTypeCount=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Grid_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Grid_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Grid_obj::lineCount,HX_("lineCount",3b,48,5e,91)},
	{::hx::fsInt,(void *) &Grid_obj::lineIDCount,HX_("lineIDCount",80,a9,76,5a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Grid_obj::subTypeCount,HX_("subTypeCount",15,a6,35,bc)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Grid_obj::registry,HX_("registry",bd,b1,9f,d0)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Grid_obj::lines,HX_("lines",ff,dd,01,75)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Grid_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::lineCount,"lineCount");
	HX_MARK_MEMBER_NAME(Grid_obj::lineIDCount,"lineIDCount");
	HX_MARK_MEMBER_NAME(Grid_obj::subTypeCount,"subTypeCount");
	HX_MARK_MEMBER_NAME(Grid_obj::registry,"registry");
	HX_MARK_MEMBER_NAME(Grid_obj::lines,"lines");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Grid_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::lineCount,"lineCount");
	HX_VISIT_MEMBER_NAME(Grid_obj::lineIDCount,"lineIDCount");
	HX_VISIT_MEMBER_NAME(Grid_obj::subTypeCount,"subTypeCount");
	HX_VISIT_MEMBER_NAME(Grid_obj::registry,"registry");
	HX_VISIT_MEMBER_NAME(Grid_obj::lines,"lines");
};

#endif

::hx::Class Grid_obj::__mClass;

static ::String Grid_obj_sStaticFields[] = {
	HX_("lineCount",3b,48,5e,91),
	HX_("lineIDCount",80,a9,76,5a),
	HX_("subTypeCount",15,a6,35,bc),
	HX_("registry",bd,b1,9f,d0),
	HX_("lines",ff,dd,01,75),
	HX_("register",63,a6,9f,d0),
	HX_("addLine",b5,5a,f0,83),
	HX_("storeLine",75,5c,d0,a3),
	HX_("deleteTrack",60,c2,14,a6),
	HX_("unregister",bc,8d,63,56),
	::String(null())
};

void Grid_obj::__register()
{
	Grid_obj _hx_dummy;
	Grid_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxlr.engine.Grid",3a,64,4a,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Grid_obj::__GetStatic;
	__mClass->mSetStaticField = &Grid_obj::__SetStatic;
	__mClass->mMarkFunc = Grid_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Grid_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Grid_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Grid_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grid_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Grid_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_25d95e4dfc05c545_14_boot)
HXDLIN(  14)		lineCount = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_25d95e4dfc05c545_15_boot)
HXDLIN(  15)		lineIDCount = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_25d95e4dfc05c545_16_boot)
HXDLIN(  16)		subTypeCount = ::Array_obj< ::Dynamic>::__new();
            	}
}

} // end namespace hxlr
} // end namespace engine
