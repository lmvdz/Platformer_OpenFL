#ifndef INCLUDED_core3_Map
#define INCLUDED_core3_Map

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(core3,Map)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core3{


class HXCPP_CLASS_ATTRIBUTES  Map_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Map_obj OBJ_;
		Map_obj();
		Void __construct(Array< Float > _tileData,::openfl::display::Tilesheet sheet);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core3.Map")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Map_obj > __new(Array< Float > _tileData,::openfl::display::Tilesheet sheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Map_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Map","\x7c","\xc2","\x3a","\x00"); }

		::openfl::display::Tilesheet sheet;
		::openfl::display::Sprite sprite;
		Array< Float > tileData;
		virtual Void draw( );
		Dynamic draw_dyn();

};

} // end namespace core3

#endif /* INCLUDED_core3_Map */ 
