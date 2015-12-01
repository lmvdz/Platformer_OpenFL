#ifndef INCLUDED_core2_game_world_maps_Map
#define INCLUDED_core2_game_world_maps_Map

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(core2,game,display,BMD)
HX_DECLARE_CLASS3(core2,game,world,World)
HX_DECLARE_CLASS4(core2,game,world,maps,Map)
HX_DECLARE_CLASS5(core2,game,world,maps,managers,MapManager)
HX_DECLARE_CLASS6(core2,game,world,maps,tile,managers,TileBitmapDataManager)
HX_DECLARE_CLASS5(core2,game,world,maps,tilesheet,MapTilesheet)
HX_DECLARE_CLASS6(core2,game,world,maps,tilesheet,managers,MapTilesheetManager)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core2{
namespace game{
namespace world{
namespace maps{


class HXCPP_CLASS_ATTRIBUTES  Map_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Map_obj OBJ_;
		Map_obj();
		Void __construct(::core2::game::world::World w,int ww,int wh,::core2::game::world::maps::managers::MapManager mm,int ax,int ay,::String mn,hx::Null< bool >  __o_registerMap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.maps.Map")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Map_obj > __new(::core2::game::world::World w,int ww,int wh,::core2::game::world::maps::managers::MapManager mm,int ax,int ay,::String mn,hx::Null< bool >  __o_registerMap);
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

		::String mapName;
		::openfl::display::Sprite mapTilesheetCanvas;
		::core2::game::world::maps::tilesheet::MapTilesheet mapTilesheet;
		::core2::game::world::maps::tilesheet::managers::MapTilesheetManager mapTilesheetManager;
		::core2::game::world::maps::tile::managers::TileBitmapDataManager tileBitmapDataManager;
		::core2::game::display::BMD tileBMD;
		::openfl::display::BitmapData openFLBMDtileBMD;
		int aspectRatioX;
		int aspectRatioY;
		::core2::game::world::maps::managers::MapManager mapManager;
		int mmHash;
		int mtsmHash;
		int tbmdmHash;
		::core2::game::world::World world;
		int wwidth;
		int wheight;
		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::core2::game::world::maps::Map getMap( );
		Dynamic getMap_dyn();

		virtual ::openfl::display::Sprite getMapTilesheetCanvas( );
		Dynamic getMapTilesheetCanvas_dyn();

		virtual ::core2::game::world::maps::tilesheet::MapTilesheet getMapTilesheet( );
		Dynamic getMapTilesheet_dyn();

		virtual ::core2::game::world::maps::tilesheet::managers::MapTilesheetManager getMapTilesheetManager( );
		Dynamic getMapTilesheetManager_dyn();

		virtual ::core2::game::world::maps::tile::managers::TileBitmapDataManager getTileBitmapDataManager( );
		Dynamic getTileBitmapDataManager_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual int getAspectRatioY( );
		Dynamic getAspectRatioY_dyn();

		virtual int getAspectRatioX( );
		Dynamic getAspectRatioX_dyn();

		virtual ::String getMapName( );
		Dynamic getMapName_dyn();

		virtual ::core2::game::world::World getWorld( );
		Dynamic getWorld_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps

#endif /* INCLUDED_core2_game_world_maps_Map */ 
