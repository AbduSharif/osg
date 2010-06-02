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

#include <osg/CopyOp>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osgTerrain/Terrain>
#include <osgTerrain/TerrainTechnique>
#include <osgTerrain/TerrainTile>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
BEGIN_OBJECT_REFLECTOR(osgTerrain::Terrain)
	I_DeclaringFile("osgTerrain/Terrain");
	I_BaseType(osg::CoordinateSystemNode);
	I_Constructor0(____Terrain,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::Terrain &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Terrain__C5_Terrain_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, x,
	          Properties::VIRTUAL,
	          __void__traverse__osg_NodeVisitor_R1,
	          "Traverse downwards : calls children's accept method with NodeVisitor. ",
	          "");
	I_Method1(void, setSampleRatio, IN, float, ratio,
	          Properties::NON_VIRTUAL,
	          __void__setSampleRatio__float,
	          "Set the sample ratio hint that TerrainTile should use when building geometry. ",
	          "Defaults to 1.0, which means use all original sample points. ");
	I_Method0(float, getSampleRatio,
	          Properties::NON_VIRTUAL,
	          __float__getSampleRatio,
	          "Get the sample ratio hint. ",
	          "");
	I_Method1(void, setVerticalScale, IN, float, scale,
	          Properties::NON_VIRTUAL,
	          __void__setVerticalScale__float,
	          "Set the vertical scale hint. ",
	          "");
	I_Method0(float, getVerticalScale,
	          Properties::NON_VIRTUAL,
	          __float__getVerticalScale,
	          "Get the vertical scale hint. ",
	          "");
	I_Method1(void, setBlendingPolicy, IN, osgTerrain::TerrainTile::BlendingPolicy, policy,
	          Properties::NON_VIRTUAL,
	          __void__setBlendingPolicy__TerrainTile_BlendingPolicy,
	          "Set the default policy to use when deciding whether to enable/disable blending and use of transparent bin. ",
	          "Note, the Terrain::BlendingPolicy value only sets the value for the TerrainTiles it encloses for the TerrainTile's that have their policy set to INHERIT. INHERIT is the default BlendingPolicy for both Terrain and TerrainTile, and if both are left to INERHIT then the policy used is ENABLE_BLENDING_WHEN_ALPHA_PRESENT. ");
	I_Method0(osgTerrain::TerrainTile::BlendingPolicy, getBlendingPolicy,
	          Properties::NON_VIRTUAL,
	          __TerrainTile_BlendingPolicy__getBlendingPolicy,
	          "Get the default policy to use when deciding whether to enable/disable blending and use of transparent bin. ",
	          "");
	I_Method1(osgTerrain::TerrainTile *, getTile, IN, const osgTerrain::TileID &, tileID,
	          Properties::NON_VIRTUAL,
	          __TerrainTile_P1__getTile__C5_TileID_R1,
	          "Get the TerrainTile for a given TileID. ",
	          "");
	I_Method1(const osgTerrain::TerrainTile *, getTile, IN, const osgTerrain::TileID &, tileID,
	          Properties::NON_VIRTUAL,
	          __C5_TerrainTile_P1__getTile__C5_TileID_R1,
	          "Get the const TerrainTile for a given TileID. ",
	          "");
	I_Method1(void, setTerrainTechniquePrototype, IN, osgTerrain::TerrainTechnique *, technique,
	          Properties::NON_VIRTUAL,
	          __void__setTerrainTechniquePrototype__TerrainTechnique_P1,
	          "Set the TerrainTechnique prototype from which TerrainTiles can clone the techniques from. ",
	          "");
	I_Method0(osgTerrain::TerrainTechnique *, getTerrainTechniquePrototype,
	          Properties::NON_VIRTUAL,
	          __TerrainTechnique_P1__getTerrainTechniquePrototype,
	          "Get the TerrainTechnique prototype. ",
	          "");
	I_Method0(const osgTerrain::TerrainTechnique *, getTerrainTechniquePrototype,
	          Properties::NON_VIRTUAL,
	          __C5_TerrainTechnique_P1__getTerrainTechniquePrototype,
	          "Get the const TerrainTechnique protype. ",
	          "");
	I_Method1(void, updateTerrainTileOnNextFrame, IN, osgTerrain::TerrainTile *, terrainTile,
	          Properties::NON_VIRTUAL,
	          __void__updateTerrainTileOnNextFrame__TerrainTile_P1,
	          "Tell the Terrain node to call the terrainTile's TerrainTechnique on the next update traversal. ",
	          "");
	I_ProtectedMethodWithDefaults1(void, dirtyRegisteredTiles, IN, int, dirtyMask, osgTerrain::TerrainTile::ALL_DIRTY,
	                               Properties::NON_VIRTUAL,
	                               Properties::NON_CONST,
	                               __void__dirtyRegisteredTiles__int,
	                               "",
	                               "");
	I_ProtectedMethod1(void, registerTerrainTile, IN, osgTerrain::TerrainTile *, tile,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__registerTerrainTile__TerrainTile_P1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, unregisterTerrainTile, IN, osgTerrain::TerrainTile *, tile,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__unregisterTerrainTile__TerrainTile_P1,
	                   "",
	                   "");
	I_SimpleProperty(osgTerrain::TerrainTile::BlendingPolicy, BlendingPolicy, 
	                 __TerrainTile_BlendingPolicy__getBlendingPolicy, 
	                 __void__setBlendingPolicy__TerrainTile_BlendingPolicy);
	I_SimpleProperty(float, SampleRatio, 
	                 __float__getSampleRatio, 
	                 __void__setSampleRatio__float);
	I_SimpleProperty(osgTerrain::TerrainTechnique *, TerrainTechniquePrototype, 
	                 __TerrainTechnique_P1__getTerrainTechniquePrototype, 
	                 __void__setTerrainTechniquePrototype__TerrainTechnique_P1);
	I_SimpleProperty(float, VerticalScale, 
	                 __float__getVerticalScale, 
	                 __void__setVerticalScale__float);
END_REFLECTOR

