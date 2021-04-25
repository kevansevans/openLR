// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxlr_engine_Cell
#include <hxlr/engine/Cell.h>
#endif
#ifndef INCLUDED_hxlr_lines_LineObject
#include <hxlr/lines/LineObject.h>
#endif
#ifndef INCLUDED_hxlr_math_geom_Line
#include <hxlr/math/geom/Line.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3bc40500d28ab2bd_44_new,"hxlr.engine.Cell","new",0x4b2b9308,"hxlr.engine.Cell.new","hxlr/engine/Cell.hx",44,0x2377b748)
HX_LOCAL_STACK_FRAME(_hx_pos_3bc40500d28ab2bd_52_addLine,"hxlr.engine.Cell","addLine",0xfe22915d,"hxlr.engine.Cell.addLine","hxlr/engine/Cell.hx",52,0x2377b748)
HX_LOCAL_STACK_FRAME(_hx_pos_3bc40500d28ab2bd_68_removeLine,"hxlr.engine.Cell","removeLine",0x5671b4b0,"hxlr.engine.Cell.removeLine","hxlr/engine/Cell.hx",68,0x2377b748)
HX_LOCAL_STACK_FRAME(_hx_pos_3bc40500d28ab2bd_26_getInfo,"hxlr.engine.Cell","getInfo",0x92701ecc,"hxlr.engine.Cell.getInfo","hxlr/engine/Cell.hx",26,0x2377b748)
HX_LOCAL_STACK_FRAME(_hx_pos_3bc40500d28ab2bd_22_boot,"hxlr.engine.Cell","boot",0x730e148a,"hxlr.engine.Cell.boot","hxlr/engine/Cell.hx",22,0x2377b748)
HX_LOCAL_STACK_FRAME(_hx_pos_3bc40500d28ab2bd_23_boot,"hxlr.engine.Cell","boot",0x730e148a,"hxlr.engine.Cell.boot","hxlr/engine/Cell.hx",23,0x2377b748)
namespace hxlr{
namespace engine{

void Cell_obj::__construct( ::Dynamic _info){
            	HX_STACKFRAME(&_hx_pos_3bc40500d28ab2bd_44_new)
HXLINE(  45)		this->info = _info;
HXLINE(  47)		this->allLines = ::Array_obj< ::Dynamic>::__new();
HXLINE(  48)		this->collidable = ::Array_obj< ::Dynamic>::__new();
HXLINE(  49)		this->intangible = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic Cell_obj::__CreateEmpty() { return new Cell_obj; }

void *Cell_obj::_hx_vtable = 0;

Dynamic Cell_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Cell_obj > _hx_result = new Cell_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Cell_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6d25935a;
}

void Cell_obj::addLine( ::hxlr::lines::LineObject _line){
            	HX_STACKFRAME(&_hx_pos_3bc40500d28ab2bd_52_addLine)
HXLINE(  54)		if (this->allLines->contains(_line)) {
HXLINE(  54)			return;
            		}
HXLINE(  56)		this->allLines->push(_line);
HXLINE(  58)		if (_line->tangible) {
HXLINE(  59)			this->collidable[( (int)(_line->id) )] = _line;
            		}
            		else {
HXLINE(  61)			this->intangible[( (int)(_line->id) )] = _line;
            		}
HXLINE(  64)		if (!(::hxlr::engine::Cell_obj::cellList->contains(::hx::ObjectPtr<OBJ_>(this)))) {
HXLINE(  64)			::hxlr::engine::Cell_obj::cellList->push(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Cell_obj,addLine,(void))

void Cell_obj::removeLine( ::hxlr::lines::LineObject _line){
            	HX_STACKFRAME(&_hx_pos_3bc40500d28ab2bd_68_removeLine)
HXLINE(  70)		if (!(this->allLines->contains(_line))) {
HXLINE(  70)			return;
            		}
HXLINE(  72)		this->allLines->remove(_line);
HXLINE(  74)		if (_line->tangible) {
HXLINE(  76)			this->collidable->remove(_line);
            		}
            		else {
HXLINE(  78)			this->intangible->remove(_line);
            		}
HXLINE(  81)		if ((this->allLines->length == 0)) {
HXLINE(  81)			::hxlr::engine::Cell_obj::cellList->remove(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Cell_obj,removeLine,(void))

int Cell_obj::size;

::Array< ::Dynamic> Cell_obj::cellList;

 ::Dynamic Cell_obj::getInfo(Float _x,Float _y){
            	HX_STACKFRAME(&_hx_pos_3bc40500d28ab2bd_26_getInfo)
HXLINE(  28)		int info = ::Std_obj::_hx_int(( (Float)(::Math_obj::floor((_x / ( (Float)(14) )))) ));
HXLINE(  29)		int info1 = ::Std_obj::_hx_int(( (Float)(::Math_obj::floor((_y / ( (Float)(14) )))) ));
HXLINE(  27)		 ::Dynamic info2 =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("x",78,00,00,00),info)
            			->setFixed(1,HX_("y",79,00,00,00),info1)
            			->setFixed(2,HX_("gx",31,5a,00,00),(_x - ( (Float)((14 * ::Math_obj::floor((_x / ( (Float)(14) ))))) )))
            			->setFixed(3,HX_("gy",32,5a,00,00),(_y - ( (Float)((14 * ::Math_obj::floor((_y / ( (Float)(14) ))))) ))));
HXLINE(  33)		info2->__SetField(HX_("key",9f,89,51,00),(((HX_("x",78,00,00,00) + info2->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) + HX_("y",79,00,00,00)) + info2->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)),::hx::paccDynamic);
HXLINE(  34)		return info2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cell_obj,getInfo,return )


::hx::ObjectPtr< Cell_obj > Cell_obj::__new( ::Dynamic _info) {
	::hx::ObjectPtr< Cell_obj > __this = new Cell_obj();
	__this->__construct(_info);
	return __this;
}

::hx::ObjectPtr< Cell_obj > Cell_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic _info) {
	Cell_obj *__this = (Cell_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Cell_obj), true, "hxlr.engine.Cell"));
	*(void **)__this = Cell_obj::_hx_vtable;
	__this->__construct(_info);
	return __this;
}

Cell_obj::Cell_obj()
{
}

void Cell_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cell);
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(allLines,"allLines");
	HX_MARK_MEMBER_NAME(collidable,"collidable");
	HX_MARK_MEMBER_NAME(intangible,"intangible");
	HX_MARK_END_CLASS();
}

void Cell_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(allLines,"allLines");
	HX_VISIT_MEMBER_NAME(collidable,"collidable");
	HX_VISIT_MEMBER_NAME(intangible,"intangible");
}

::hx::Val Cell_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addLine") ) { return ::hx::Val( addLine_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"allLines") ) { return ::hx::Val( allLines ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collidable") ) { return ::hx::Val( collidable ); }
		if (HX_FIELD_EQ(inName,"intangible") ) { return ::hx::Val( intangible ); }
		if (HX_FIELD_EQ(inName,"removeLine") ) { return ::hx::Val( removeLine_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Cell_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getInfo") ) { outValue = getInfo_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cellList") ) { outValue = ( cellList ); return true; }
	}
	return false;
}

::hx::Val Cell_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"allLines") ) { allLines=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collidable") ) { collidable=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intangible") ) { intangible=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Cell_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"cellList") ) { cellList=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void Cell_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("info",6e,38,bb,45));
	outFields->push(HX_("allLines",1e,9d,e5,6d));
	outFields->push(HX_("collidable",21,74,c2,4f));
	outFields->push(HX_("intangible",5d,91,fd,bd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Cell_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Cell_obj,info),HX_("info",6e,38,bb,45)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Cell_obj,allLines),HX_("allLines",1e,9d,e5,6d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Cell_obj,collidable),HX_("collidable",21,74,c2,4f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Cell_obj,intangible),HX_("intangible",5d,91,fd,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Cell_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Cell_obj::size,HX_("size",c1,a0,53,4c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Cell_obj::cellList,HX_("cellList",20,e3,d7,16)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Cell_obj_sMemberFields[] = {
	HX_("info",6e,38,bb,45),
	HX_("allLines",1e,9d,e5,6d),
	HX_("collidable",21,74,c2,4f),
	HX_("intangible",5d,91,fd,bd),
	HX_("addLine",b5,5a,f0,83),
	HX_("removeLine",58,52,d2,c4),
	::String(null()) };

static void Cell_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cell_obj::size,"size");
	HX_MARK_MEMBER_NAME(Cell_obj::cellList,"cellList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Cell_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cell_obj::size,"size");
	HX_VISIT_MEMBER_NAME(Cell_obj::cellList,"cellList");
};

#endif

::hx::Class Cell_obj::__mClass;

static ::String Cell_obj_sStaticFields[] = {
	HX_("size",c1,a0,53,4c),
	HX_("cellList",20,e3,d7,16),
	HX_("getInfo",24,e8,3d,18),
	::String(null())
};

void Cell_obj::__register()
{
	Cell_obj _hx_dummy;
	Cell_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxlr.engine.Cell",16,af,9b,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Cell_obj::__GetStatic;
	__mClass->mSetStaticField = &Cell_obj::__SetStatic;
	__mClass->mMarkFunc = Cell_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Cell_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Cell_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Cell_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Cell_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Cell_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Cell_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Cell_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3bc40500d28ab2bd_22_boot)
HXDLIN(  22)		size = 14;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3bc40500d28ab2bd_23_boot)
HXDLIN(  23)		cellList = ::Array_obj< ::Dynamic>::__new();
            	}
}

} // end namespace hxlr
} // end namespace engine
