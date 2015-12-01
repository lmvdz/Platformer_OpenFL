#ifndef INCLUDED_nme_media_SampleRate
#define INCLUDED_nme_media_SampleRate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,media,SampleRate)
namespace nme{
namespace media{


class SampleRate_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SampleRate_obj OBJ_;

	public:
		SampleRate_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.media.SampleRate","\xbc","\xf9","\xf9","\x9c"); }
		::String __ToString() const { return HX_HCSTRING("SampleRate.","\xa4","\x00","\x9b","\xdf") + tag; }

		static ::nme::media::SampleRate Rate11025;
		static inline ::nme::media::SampleRate Rate11025_dyn() { return Rate11025; }
		static ::nme::media::SampleRate Rate22050;
		static inline ::nme::media::SampleRate Rate22050_dyn() { return Rate22050; }
		static ::nme::media::SampleRate Rate44100;
		static inline ::nme::media::SampleRate Rate44100_dyn() { return Rate44100; }
};

} // end namespace nme
} // end namespace media

#endif /* INCLUDED_nme_media_SampleRate */ 
