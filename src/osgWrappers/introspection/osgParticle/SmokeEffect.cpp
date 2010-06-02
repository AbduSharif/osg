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
#include <osg/Vec3>
#include <osgParticle/Emitter>
#include <osgParticle/Program>
#include <osgParticle/SmokeEffect>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
BEGIN_OBJECT_REFLECTOR(osgParticle::SmokeEffect)
	I_DeclaringFile("osgParticle/SmokeEffect");
	I_BaseType(osgParticle::ParticleEffect);
	I_ConstructorWithDefaults1(IN, bool, automaticSetup, true,
	                           Properties::EXPLICIT,
	                           ____SmokeEffect__bool,
	                           "",
	                           "");
	I_ConstructorWithDefaults3(IN, const osg::Vec3 &, position, , IN, float, scale, 1.0f, IN, float, intensity, 1.0f,
	                           ____SmokeEffect__C5_osg_Vec3_R1__float__float,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, const osgParticle::SmokeEffect &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____SmokeEffect__C5_SmokeEffect_R1__C5_osg_CopyOp_R1,
	                           "",
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
	I_Method0(void, setDefaults,
	          Properties::VIRTUAL,
	          __void__setDefaults,
	          "",
	          "");
	I_Method0(void, setUpEmitterAndProgram,
	          Properties::VIRTUAL,
	          __void__setUpEmitterAndProgram,
	          "",
	          "");
	I_Method0(osgParticle::Emitter *, getEmitter,
	          Properties::VIRTUAL,
	          __Emitter_P1__getEmitter,
	          "",
	          "");
	I_Method0(const osgParticle::Emitter *, getEmitter,
	          Properties::VIRTUAL,
	          __C5_Emitter_P1__getEmitter,
	          "",
	          "");
	I_Method0(osgParticle::Program *, getProgram,
	          Properties::VIRTUAL,
	          __Program_P1__getProgram,
	          "",
	          "");
	I_Method0(const osgParticle::Program *, getProgram,
	          Properties::VIRTUAL,
	          __C5_Program_P1__getProgram,
	          "",
	          "");
	I_SimpleProperty(osgParticle::Emitter *, Emitter, 
	                 __Emitter_P1__getEmitter, 
	                 0);
	I_SimpleProperty(osgParticle::Program *, Program, 
	                 __Program_P1__getProgram, 
	                 0);
END_REFLECTOR

