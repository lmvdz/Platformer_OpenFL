#ifndef INCLUDED_nme_events_Event
#define INCLUDED_nme_events_Event

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,events,Event)
namespace nme{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  Event_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Event_obj OBJ_;
		Event_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.events.Event")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Event_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Event_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Event","\xfa","\x37","\xf2","\x08"); }

		static void __boot();
		static ::String ACTIVATE;
		static ::String ADDED;
		static ::String ADDED_TO_STAGE;
		static ::String CANCEL;
		static ::String CHANGE;
		static ::String CLOSE;
		static ::String COMPLETE;
		static ::String CONNECT;
		static ::String CONTEXT3D_CREATE;
		static ::String CONTEXT3D_LOST;
		static ::String DEACTIVATE;
		static ::String ENTER_FRAME;
		static ::String ID3;
		static ::String INIT;
		static ::String MOUSE_LEAVE;
		static ::String OPEN;
		static ::String REMOVED;
		static ::String REMOVED_FROM_STAGE;
		static ::String RENDER;
		static ::String RESIZE;
		static ::String SCROLL;
		static ::String SELECT;
		static ::String SOUND_COMPLETE;
		static ::String TAB_CHILDREN_CHANGE;
		static ::String TAB_ENABLED_CHANGE;
		static ::String TAB_INDEX_CHANGE;
		static ::String UNLOAD;
		static ::String VIDEO_FRAME;
		bool _bubbles;
		bool _cancelable;
		Dynamic _currentTarget;
		int _eventPhase;
		Dynamic _target;
		::String _type;
		bool nmeIsCancelled;
		bool nmeIsCancelledNow;
		virtual ::nme::events::Event clone( );
		Dynamic clone_dyn();

		virtual bool nmeGetIsCancelled( );
		Dynamic nmeGetIsCancelled_dyn();

		virtual bool nmeGetIsCancelledNow( );
		Dynamic nmeGetIsCancelledNow_dyn();

		virtual Void nmeSetPhase( int inPhase);
		Dynamic nmeSetPhase_dyn();

		virtual Void stopImmediatePropagation( );
		Dynamic stopImmediatePropagation_dyn();

		virtual Void stopPropagation( );
		Dynamic stopPropagation_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool get_bubbles( );
		Dynamic get_bubbles_dyn();

		virtual bool get_cancelable( );
		Dynamic get_cancelable_dyn();

		virtual Dynamic get_currentTarget( );
		Dynamic get_currentTarget_dyn();

		virtual Dynamic set_currentTarget( Dynamic v);
		Dynamic set_currentTarget_dyn();

		virtual int get_eventPhase( );
		Dynamic get_eventPhase_dyn();

		virtual Dynamic get_target( );
		Dynamic get_target_dyn();

		virtual Dynamic set_target( Dynamic v);
		Dynamic set_target_dyn();

		virtual ::String get_type( );
		Dynamic get_type_dyn();

};

} // end namespace nme
} // end namespace events

#endif /* INCLUDED_nme_events_Event */ 
