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

#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Drawable>
#include <osg/Geode>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/RenderInfo>
#include <osg/State>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osg::Drawable > >, osg::Geode::DrawableList)

BEGIN_OBJECT_REFLECTOR(osg::Geode)
	I_DeclaringFile("osg/Geode");
	I_BaseType(osg::Node);
	I_Constructor0(____Geode,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Geode &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Geode__C5_Geode_R1__C5_CopyOp_R1,
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
	I_Method0(osg::Geode *, asGeode,
	          Properties::VIRTUAL,
	          __Geode_P1__asGeode,
	          "Convert 'this' into a Geode pointer if Node is a Geode, otherwise return 0. ",
	          "Equivalent to dynamic_cast<Geode*>(this). ");
	I_Method0(const osg::Geode *, asGeode,
	          Properties::VIRTUAL,
	          __C5_Geode_P1__asGeode,
	          "convert 'const this' into a const Geode pointer if Node is a Geode, otherwise return 0. ",
	          "Equivalent to dynamic_cast<const Geode*>(this). ");
	I_Method1(bool, addDrawable, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __bool__addDrawable__Drawable_P1,
	          "Add a Drawable to the Geode. ",
	          " param drawable The Drawable to be added to the Geode.   return true for success; false otherwise. ");
	I_Method1(bool, removeDrawable, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __bool__removeDrawable__Drawable_P1,
	          "Remove a Drawable from the Geode. ",
	          " param drawable The drawable to be removed.   return true if at least one Drawable was removed. false otherwise. ");
	I_MethodWithDefaults2(bool, removeDrawables, IN, unsigned int, i, , IN, unsigned int, numDrawablesToRemove, 1,
	                      Properties::VIRTUAL,
	                      __bool__removeDrawables__unsigned_int__unsigned_int,
	                      "Remove Drawable(s) from the specified position in Geode's drawable list. ",
	                      " param i The index of the first Drawable to remove.  numDrawablesToRemove The number of Drawable to remove.   return true if at least one Drawable was removed. false otherwise. ");
	I_Method2(bool, replaceDrawable, IN, osg::Drawable *, origDraw, IN, osg::Drawable *, newDraw,
	          Properties::VIRTUAL,
	          __bool__replaceDrawable__Drawable_P1__Drawable_P1,
	          "Replace specified Drawable with another Drawable. ",
	          "Equivalent to setDrawable(getDrawableIndex(origDraw),newDraw), see docs for setDrawable() for further details on implementation. ");
	I_Method2(bool, setDrawable, IN, unsigned int, i, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __bool__setDrawable__unsigned_int__Drawable_P1,
	          "Set Drawable at position i. ",
	          "Decrement the reference count origGSet and increments the reference count of newGset, and dirty the bounding sphere to force it to recompute on next getBound() and returns true. If origDrawable is not found then return false and do not add newGset. If newGset is NULL then return false and do not remove origGset. true if set correctly, false on failure (if node==NULL || i is out of range).  ");
	I_Method0(unsigned int, getNumDrawables,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumDrawables,
	          "Return the number of Drawables currently attached to the Geode. ",
	          "");
	I_Method1(osg::Drawable *, getDrawable, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __Drawable_P1__getDrawable__unsigned_int,
	          "Return the Drawable at position i. ",
	          "");
	I_Method1(const osg::Drawable *, getDrawable, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_Drawable_P1__getDrawable__unsigned_int,
	          "Return the Drawable at position i. ",
	          "");
	I_Method1(bool, containsDrawable, IN, const osg::Drawable *, gset,
	          Properties::NON_VIRTUAL,
	          __bool__containsDrawable__C5_Drawable_P1,
	          "Return true if a given Drawable is contained within Geode. ",
	          "");
	I_Method1(unsigned int, getDrawableIndex, IN, const osg::Drawable *, drawable,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getDrawableIndex__C5_Drawable_P1,
	          "Get the index number of drawable. ",
	          "A value between 0 and getNumDrawables()-1 if drawable is found; if not found, then getNumDrawables() is returned.  ");
	I_Method0(const osg::Geode::DrawableList &, getDrawableList,
	          Properties::NON_VIRTUAL,
	          __C5_DrawableList_R1__getDrawableList,
	          "Get the list of drawables. ",
	          "");
	I_Method1(void, compileDrawables, IN, osg::RenderInfo &, renderInfo,
	          Properties::NON_VIRTUAL,
	          __void__compileDrawables__RenderInfo_R1,
	          "Compile OpenGL Display List for each drawable. ",
	          "");
	I_Method0(const osg::BoundingBox &, getBoundingBox,
	          Properties::NON_VIRTUAL,
	          __C5_BoundingBox_R1__getBoundingBox,
	          "Return the Geode's bounding box, which is the union of all the bounding boxes of the geode's drawables. ",
	          "");
	I_Method0(osg::BoundingSphere, computeBound,
	          Properties::VIRTUAL,
	          __BoundingSphere__computeBound,
	          "Compute the bounding sphere around Node's geometry or children. ",
	          "This method is automatically called by getBound() when the bounding sphere has been marked dirty via dirtyBound(). ");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_Method1(void, resizeGLObjectBuffers, IN, unsigned int, maxSize,
	          Properties::VIRTUAL,
	          __void__resizeGLObjectBuffers__unsigned_int,
	          "Resize any per context GLObject buffers to specified size. ",
	          "");
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, x, 0,
	                      Properties::VIRTUAL,
	                      __void__releaseGLObjects__osg_State_P1,
	                      "If State is non-zero, this function releases any associated OpenGL objects for the specified graphics context. ",
	                      "Otherwise, releases OpenGL objects for all graphics contexts. ");
	I_SimpleProperty(const osg::BoundingBox &, BoundingBox, 
	                 __C5_BoundingBox_R1__getBoundingBox, 
	                 0);
	I_ArrayProperty(osg::Drawable *, Drawable, 
	                __Drawable_P1__getDrawable__unsigned_int, 
	                __bool__setDrawable__unsigned_int__Drawable_P1, 
	                __unsigned_int__getNumDrawables, 
	                __bool__addDrawable__Drawable_P1, 
	                0, 
	                __bool__removeDrawables__unsigned_int__unsigned_int);
	I_SimpleProperty(const osg::Geode::DrawableList &, DrawableList, 
	                 __C5_DrawableList_R1__getDrawableList, 
	                 0);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 0, 
	                 __void__setThreadSafeRefUnref__bool);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Drawable >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::Drawable *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::Drawable > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Constructor1(IN, osg::observer_ptr< osg::Drawable > &, optr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__observer_ptrT1_T__R1,
	               "",
	               "");
	I_Method0(osg::Drawable *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::Drawable *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::Drawable > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::Drawable *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osg::Drawable > >)

