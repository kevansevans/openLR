// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_hxlr_lines_Accel
#include <hxlr/lines/Accel.h>
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
#ifndef INCLUDED_hxlr_rider_ContactPoint
#include <hxlr/rider/ContactPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c8f212042c3d95ab_10_new,"hxlr.lines.Accel","new",0x54d6fab3,"hxlr.lines.Accel.new","hxlr/lines/Accel.hx",10,0x887324df)
HX_LOCAL_STACK_FRAME(_hx_pos_c8f212042c3d95ab_26_calculateConstants,"hxlr.lines.Accel","calculateConstants",0x8b3e4f56,"hxlr.lines.Accel.calculateConstants","hxlr/lines/Accel.hx",26,0x887324df)
HX_LOCAL_STACK_FRAME(_hx_pos_c8f212042c3d95ab_34_collide,"hxlr.lines.Accel","collide",0xde05ff51,"hxlr.lines.Accel.collide","hxlr/lines/Accel.hx",34,0x887324df)
namespace hxlr{
namespace lines{

void Accel_obj::__construct( ::hxlr::math::geom::Point _start, ::hxlr::math::geom::Point _end,bool _shift){
            	HX_STACKFRAME(&_hx_pos_c8f212042c3d95ab_10_new)
HXLINE(  12)		this->accConst = ((Float)0.1);
HXLINE(  18)		super::__construct(_start,_end,_shift,null());
HXLINE(  20)		this->type = 1;
HXLINE(  22)		this->tangible = true;
            	}

Dynamic Accel_obj::__CreateEmpty() { return new Accel_obj; }

void *Accel_obj::_hx_vtable = 0;

Dynamic Accel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Accel_obj > _hx_result = new Accel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Accel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a2a2bae) {
		if (inClassId<=(int)0x196fd3dc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x196fd3dc;
		} else {
			return inClassId==(int)0x2a2a2bae;
		}
	} else {
		return inClassId==(int)0x5115c8e3;
	}
}

void Accel_obj::calculateConstants(){
            	HX_STACKFRAME(&_hx_pos_c8f212042c3d95ab_26_calculateConstants)
HXLINE(  27)		this->super::calculateConstants();
HXLINE(  29)		int _hx_tmp;
HXDLIN(  29)		if (this->shifted) {
HXLINE(  29)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  29)			_hx_tmp = -1;
            		}
HXDLIN(  29)		this->accx = ((this->ny * this->accConst) * ( (Float)(_hx_tmp) ));
HXLINE(  30)		int _hx_tmp1;
HXDLIN(  30)		if (this->shifted) {
HXLINE(  30)			_hx_tmp1 = -1;
            		}
            		else {
HXLINE(  30)			_hx_tmp1 = 1;
            		}
HXDLIN(  30)		this->accy = ((this->nx * this->accConst) * ( (Float)(_hx_tmp1) ));
            	}


void Accel_obj::collide( ::hxlr::rider::ContactPoint _point){
            	HX_STACKFRAME(&_hx_pos_c8f212042c3d95ab_34_collide)
HXLINE(  36)		Float _loc5 = (_point->pos->x - this->start->x);
HXLINE(  37)		Float _loc6 = (_point->pos->y - this->start->y);
HXLINE(  38)		Float _loc4 = ((this->nx * _loc5) + (this->ny * _loc6));
HXLINE(  39)		Float _loc7 = (((_loc5 * this->dx) + (_loc6 * this->dy)) * this->invSqrDistance);
HXLINE(  40)		if ((((_point->dir->x * this->nx) + (_point->dir->y * this->ny)) > 0)) {
HXLINE(  42)			bool _hx_tmp;
HXDLIN(  42)			bool _hx_tmp1;
HXDLIN(  42)			bool _hx_tmp2;
HXDLIN(  42)			if ((_loc4 > 0)) {
HXLINE(  42)				_hx_tmp2 = (_loc4 < this->zone);
            			}
            			else {
HXLINE(  42)				_hx_tmp2 = false;
            			}
HXDLIN(  42)			if (_hx_tmp2) {
HXLINE(  42)				_hx_tmp1 = (_loc7 >= this->limStart);
            			}
            			else {
HXLINE(  42)				_hx_tmp1 = false;
            			}
HXDLIN(  42)			if (_hx_tmp1) {
HXLINE(  42)				_hx_tmp = (_loc7 <= this->limEnd);
            			}
            			else {
HXLINE(  42)				_hx_tmp = false;
            			}
HXDLIN(  42)			if (_hx_tmp) {
HXLINE(  43)				_point->pos->x = (_point->pos->x - (_loc4 * this->nx));
HXLINE(  44)				_point->pos->y = (_point->pos->y - (_loc4 * this->ny));
HXLINE(  45)				int _hx_tmp;
HXDLIN(  45)				if ((_point->vel->x < _point->pos->x)) {
HXLINE(  45)					_hx_tmp = 1;
            				}
            				else {
HXLINE(  45)					_hx_tmp = -1;
            				}
HXDLIN(  45)				_point->vel->x = ((_point->vel->x + (((this->ny * _point->friction) * _loc4) * ( (Float)(_hx_tmp) ))) + this->accx);
HXLINE(  46)				int _hx_tmp1;
HXDLIN(  46)				if ((_point->vel->y < _point->pos->y)) {
HXLINE(  46)					_hx_tmp1 = -1;
            				}
            				else {
HXLINE(  46)					_hx_tmp1 = 1;
            				}
HXDLIN(  46)				_point->vel->y = ((_point->vel->y - (((this->nx * _point->friction) * _loc4) * ( (Float)(_hx_tmp1) ))) + this->accy);
            			}
            		}
            	}



::hx::ObjectPtr< Accel_obj > Accel_obj::__new( ::hxlr::math::geom::Point _start, ::hxlr::math::geom::Point _end,bool _shift) {
	::hx::ObjectPtr< Accel_obj > __this = new Accel_obj();
	__this->__construct(_start,_end,_shift);
	return __this;
}

::hx::ObjectPtr< Accel_obj > Accel_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxlr::math::geom::Point _start, ::hxlr::math::geom::Point _end,bool _shift) {
	Accel_obj *__this = (Accel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Accel_obj), true, "hxlr.lines.Accel"));
	*(void **)__this = Accel_obj::_hx_vtable;
	__this->__construct(_start,_end,_shift);
	return __this;
}

Accel_obj::Accel_obj()
{
}

::hx::Val Accel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"accx") ) { return ::hx::Val( accx ); }
		if (HX_FIELD_EQ(inName,"accy") ) { return ::hx::Val( accy ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return ::hx::Val( collide_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"accConst") ) { return ::hx::Val( accConst ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"calculateConstants") ) { return ::hx::Val( calculateConstants_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Accel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"accx") ) { accx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accy") ) { accy=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"accConst") ) { accConst=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Accel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("accConst",62,4c,ca,33));
	outFields->push(HX_("accx",17,28,69,40));
	outFields->push(HX_("accy",18,28,69,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Accel_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Accel_obj,accConst),HX_("accConst",62,4c,ca,33)},
	{::hx::fsFloat,(int)offsetof(Accel_obj,accx),HX_("accx",17,28,69,40)},
	{::hx::fsFloat,(int)offsetof(Accel_obj,accy),HX_("accy",18,28,69,40)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Accel_obj_sStaticStorageInfo = 0;
#endif

static ::String Accel_obj_sMemberFields[] = {
	HX_("accConst",62,4c,ca,33),
	HX_("accx",17,28,69,40),
	HX_("accy",18,28,69,40),
	HX_("calculateConstants",49,e4,04,d9),
	HX_("collide",7e,af,63,ed),
	::String(null()) };

::hx::Class Accel_obj::__mClass;

void Accel_obj::__register()
{
	Accel_obj _hx_dummy;
	Accel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxlr.lines.Accel",41,25,19,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Accel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Accel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Accel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Accel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxlr
} // end namespace lines
