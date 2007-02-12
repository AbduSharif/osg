// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/ApplicationUsage>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgViewer/StatsHandler>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgViewer::StatsHandler::StatsType)
	I_EnumLabel(osgViewer::StatsHandler::NO_STATS);
	I_EnumLabel(osgViewer::StatsHandler::FRAME_RATE);
	I_EnumLabel(osgViewer::StatsHandler::VIEWER_STATS);
	I_EnumLabel(osgViewer::StatsHandler::SCENE_STATS);
	I_EnumLabel(osgViewer::StatsHandler::LAST);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgViewer::StatsHandler)
	I_BaseType(osgGA::GUIEventHandler);
	I_Constructor0(____StatsHandler,
	               "",
	               "");
	I_Method1(void, setKeyEventTogglesOnScreenStats, IN, int, key,
	          __void__setKeyEventTogglesOnScreenStats__int,
	          "",
	          "");
	I_Method0(int, getKeyEventTogglesOnScreenStats,
	          __int__getKeyEventTogglesOnScreenStats,
	          "",
	          "");
	I_Method1(void, setKeyEventPrintsOutStats, IN, int, key,
	          __void__setKeyEventPrintsOutStats__int,
	          "",
	          "");
	I_Method0(int, getKeyEventPrintsOutStats,
	          __int__getKeyEventPrintsOutStats,
	          "",
	          "");
	I_Method2(bool, handle, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, aa,
	          __bool__handle__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "deprecated, Handle events, return true if handled, false otherwise. ",
	          "");
	I_Method0(double, getBlockMultiplier,
	          __double__getBlockMultiplier,
	          "",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this manipulator. ",
	          "");
	I_SimpleProperty(double, BlockMultiplier, 
	                 __double__getBlockMultiplier, 
	                 0);
	I_SimpleProperty(int, KeyEventPrintsOutStats, 
	                 __int__getKeyEventPrintsOutStats, 
	                 __void__setKeyEventPrintsOutStats__int);
	I_SimpleProperty(int, KeyEventTogglesOnScreenStats, 
	                 __int__getKeyEventTogglesOnScreenStats, 
	                 __void__setKeyEventTogglesOnScreenStats__int);
END_REFLECTOR

