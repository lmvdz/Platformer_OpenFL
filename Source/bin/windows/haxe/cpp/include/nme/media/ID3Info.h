#ifndef INCLUDED_nme_media_ID3Info
#define INCLUDED_nme_media_ID3Info

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,media,ID3Info)
namespace nme{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  ID3Info_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ID3Info_obj OBJ_;
		ID3Info_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.media.ID3Info")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ID3Info_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ID3Info_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ID3Info","\x86","\x60","\xe7","\x99"); }

		::String album;
		::String artist;
		::String comment;
		::String genre;
		::String songName;
		::String track;
		::String year;
};

} // end namespace nme
} // end namespace media

#endif /* INCLUDED_nme_media_ID3Info */ 
