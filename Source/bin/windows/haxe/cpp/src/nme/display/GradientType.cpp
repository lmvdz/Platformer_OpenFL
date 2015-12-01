#include <hxcpp.h>

#ifndef INCLUDED_nme_display_GradientType
#include <nme/display/GradientType.h>
#endif
namespace nme{
namespace display{

::nme::display::GradientType GradientType_obj::LINEAR;

::nme::display::GradientType GradientType_obj::RADIAL;

HX_DEFINE_CREATE_ENUM(GradientType_obj)

int GradientType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")) return 1;
	if (inName==HX_HCSTRING("RADIAL","\xdf","\x6a","\x79","\x63")) return 0;
	return super::__FindIndex(inName);
}

int GradientType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")) return 0;
	if (inName==HX_HCSTRING("RADIAL","\xdf","\x6a","\x79","\x63")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GradientType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")) return LINEAR;
	if (inName==HX_HCSTRING("RADIAL","\xdf","\x6a","\x79","\x63")) return RADIAL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("RADIAL","\xdf","\x6a","\x79","\x63"),
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GradientType_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GradientType_obj::RADIAL,"RADIAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GradientType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GradientType_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GradientType_obj::RADIAL,"RADIAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GradientType_obj::__mClass;

Dynamic __Create_GradientType_obj() { return new GradientType_obj; }

void GradientType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("nme.display.GradientType","\xbe","\x88","\xd0","\xdb"), hx::TCanCast< GradientType_obj >,sStaticFields,sMemberFields,
	&__Create_GradientType_obj, &__Create,
	&super::__SGetClass(), &CreateGradientType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GradientType_obj::__boot()
{
hx::Static(LINEAR) = hx::CreateEnum< GradientType_obj >(HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),1);
hx::Static(RADIAL) = hx::CreateEnum< GradientType_obj >(HX_HCSTRING("RADIAL","\xdf","\x6a","\x79","\x63"),0);
}


} // end namespace nme
} // end namespace display
