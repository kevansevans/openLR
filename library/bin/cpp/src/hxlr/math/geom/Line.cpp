// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_hxlr_math_geom_Line
#include <hxlr/math/geom/Line.h>
#endif
#ifndef INCLUDED_hxlr_math_geom_Point
#include <hxlr/math/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a8da5b0d2dac31ef_18_new,"hxlr.math.geom.Line","new",0xb82b0daa,"hxlr.math.geom.Line.new","hxlr/math/geom/Line.hx",18,0x668ab385)
HX_LOCAL_STACK_FRAME(_hx_pos_a8da5b0d2dac31ef_25_intersects,"hxlr.math.geom.Line","intersects",0x72bb22aa,"hxlr.math.geom.Line.intersects","hxlr/math/geom/Line.hx",25,0x668ab385)
HX_LOCAL_STACK_FRAME(_hx_pos_a8da5b0d2dac31ef_30_get_length,"hxlr.math.geom.Line","get_length",0x1e5e64a5,"hxlr.math.geom.Line.get_length","hxlr/math/geom/Line.hx",30,0x668ab385)
HX_LOCAL_STACK_FRAME(_hx_pos_a8da5b0d2dac31ef_34_set_length,"hxlr.math.geom.Line","set_length",0x21dc0319,"hxlr.math.geom.Line.set_length","hxlr/math/geom/Line.hx",34,0x668ab385)
HX_LOCAL_STACK_FRAME(_hx_pos_a8da5b0d2dac31ef_42_get_angle,"hxlr.math.geom.Line","get_angle",0xbc22f0f4,"hxlr.math.geom.Line.get_angle","hxlr/math/geom/Line.hx",42,0x668ab385)
HX_LOCAL_STACK_FRAME(_hx_pos_a8da5b0d2dac31ef_51_set_angle,"hxlr.math.geom.Line","set_angle",0x9f73dd00,"hxlr.math.geom.Line.set_angle","hxlr/math/geom/Line.hx",51,0x668ab385)
namespace hxlr{
namespace math{
namespace geom{

void Line_obj::__construct( ::hxlr::math::geom::Point _start, ::hxlr::math::geom::Point _end){
            	HX_STACKFRAME(&_hx_pos_a8da5b0d2dac31ef_18_new)
HXLINE(  19)		this->start = _start;
HXLINE(  20)		this->end = _end;
            	}

Dynamic Line_obj::__CreateEmpty() { return new Line_obj; }

void *Line_obj::_hx_vtable = 0;

Dynamic Line_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Line_obj > _hx_result = new Line_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Line_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a2a2bae;
}

bool Line_obj::intersects( ::hxlr::math::geom::Line _line){
            	HX_STACKFRAME(&_hx_pos_a8da5b0d2dac31ef_25_intersects)
HXDLIN(  25)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Line_obj,intersects,return )

Float Line_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_a8da5b0d2dac31ef_30_get_length)
HXDLIN(  30)		return ::Math_obj::sqrt((::Math_obj::pow((this->end->x - this->start->x),( (Float)(2) )) + ::Math_obj::pow((this->end->y - this->start->y),( (Float)(2) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Line_obj,get_length,return )

Float Line_obj::set_length(Float value){
            	HX_STACKFRAME(&_hx_pos_a8da5b0d2dac31ef_34_set_length)
HXLINE(  36)		 ::hxlr::math::geom::Point _hx_tmp = this->end;
HXDLIN(  36)		Float _hx_tmp1 = _hx_tmp->x;
HXDLIN(  36)		_hx_tmp->x = (_hx_tmp1 + (value * ::Math_obj::cos(this->get_angle())));
HXLINE(  37)		 ::hxlr::math::geom::Point _hx_tmp2 = this->end;
HXDLIN(  37)		Float _hx_tmp3 = _hx_tmp2->y;
HXDLIN(  37)		_hx_tmp2->y = (_hx_tmp3 + (value * ::Math_obj::sin(this->get_angle())));
HXLINE(  38)		return this->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Line_obj,set_length,return )

Float Line_obj::get_angle(){
            	HX_STACKFRAME(&_hx_pos_a8da5b0d2dac31ef_42_get_angle)
HXLINE(  43)		Float dx = (this->end->x - this->start->x);
HXLINE(  44)		Float dy = (this->end->y - this->start->y);
HXLINE(  45)		Float theta = ::Math_obj::atan((dy / dx));
HXLINE(  46)		return theta;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Line_obj,get_angle,return )

Float Line_obj::set_angle(Float value){
            	HX_STACKFRAME(&_hx_pos_a8da5b0d2dac31ef_51_set_angle)
HXDLIN(  51)		return this->get_angle();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Line_obj,set_angle,return )


::hx::ObjectPtr< Line_obj > Line_obj::__new( ::hxlr::math::geom::Point _start, ::hxlr::math::geom::Point _end) {
	::hx::ObjectPtr< Line_obj > __this = new Line_obj();
	__this->__construct(_start,_end);
	return __this;
}

::hx::ObjectPtr< Line_obj > Line_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxlr::math::geom::Point _start, ::hxlr::math::geom::Point _end) {
	Line_obj *__this = (Line_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Line_obj), true, "hxlr.math.geom.Line"));
	*(void **)__this = Line_obj::_hx_vtable;
	__this->__construct(_start,_end);
	return __this;
}

Line_obj::Line_obj()
{
}

void Line_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Line);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_END_CLASS();
}

void Line_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
}

::hx::Val Line_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_angle() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return ::hx::Val( get_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return ::hx::Val( intersects_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return ::hx::Val( set_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Line_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast<  ::hxlr::math::geom::Point >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast<  ::hxlr::math::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_length(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Line_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("angle",d3,43,e2,22));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Line_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxlr::math::geom::Point */ ,(int)offsetof(Line_obj,start),HX_("start",62,74,0b,84)},
	{::hx::fsObject /*  ::hxlr::math::geom::Point */ ,(int)offsetof(Line_obj,end),HX_("end",db,03,4d,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Line_obj_sStaticStorageInfo = 0;
#endif

static ::String Line_obj_sMemberFields[] = {
	HX_("start",62,74,0b,84),
	HX_("end",db,03,4d,00),
	HX_("intersects",b4,c2,eb,e3),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	HX_("get_angle",2a,a0,8b,66),
	HX_("set_angle",36,8c,dc,49),
	::String(null()) };

::hx::Class Line_obj::__mClass;

void Line_obj::__register()
{
	Line_obj _hx_dummy;
	Line_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxlr.math.geom.Line",b8,b0,9c,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Line_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Line_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Line_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Line_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxlr
} // end namespace math
} // end namespace geom
