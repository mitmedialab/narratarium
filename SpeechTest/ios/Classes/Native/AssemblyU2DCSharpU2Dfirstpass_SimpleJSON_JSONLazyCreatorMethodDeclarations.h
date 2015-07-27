#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t19;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t6;
// SimpleJSON.JSONClass
struct JSONClass_t11;
// System.Object
struct Object_t;

// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator__ctor_m134 (JSONLazyCreator_t19 * __this, JSONNode_t2 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C" void JSONLazyCreator__ctor_m135 (JSONLazyCreator_t19 * __this, JSONNode_t2 * ___aNode, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_Set_m136 (JSONLazyCreator_t19 * __this, JSONNode_t2 * ___aVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
extern "C" JSONNode_t2 * JSONLazyCreator_get_Item_m137 (JSONLazyCreator_t19 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_set_Item_m138 (JSONLazyCreator_t19 * __this, int32_t ___aIndex, JSONNode_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
extern "C" JSONNode_t2 * JSONLazyCreator_get_Item_m139 (JSONLazyCreator_t19 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_set_Item_m140 (JSONLazyCreator_t19 * __this, String_t* ___aKey, JSONNode_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_Add_m141 (JSONLazyCreator_t19 * __this, JSONNode_t2 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_Add_m142 (JSONLazyCreator_t19 * __this, String_t* ___aKey, JSONNode_t2 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
extern "C" bool JSONLazyCreator_Equals_m143 (JSONLazyCreator_t19 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
extern "C" int32_t JSONLazyCreator_GetHashCode_m144 (JSONLazyCreator_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONLazyCreator::ToString()
extern "C" String_t* JSONLazyCreator_ToString_m145 (JSONLazyCreator_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONLazyCreator::ToString(System.String)
extern "C" String_t* JSONLazyCreator_ToString_m146 (JSONLazyCreator_t19 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
extern "C" int32_t JSONLazyCreator_get_AsInt_m147 (JSONLazyCreator_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
extern "C" void JSONLazyCreator_set_AsInt_m148 (JSONLazyCreator_t19 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
extern "C" float JSONLazyCreator_get_AsFloat_m149 (JSONLazyCreator_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
extern "C" void JSONLazyCreator_set_AsFloat_m150 (JSONLazyCreator_t19 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
extern "C" double JSONLazyCreator_get_AsDouble_m151 (JSONLazyCreator_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
extern "C" void JSONLazyCreator_set_AsDouble_m152 (JSONLazyCreator_t19 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
extern "C" bool JSONLazyCreator_get_AsBool_m153 (JSONLazyCreator_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C" void JSONLazyCreator_set_AsBool_m154 (JSONLazyCreator_t19 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
extern "C" JSONArray_t6 * JSONLazyCreator_get_AsArray_m155 (JSONLazyCreator_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass SimpleJSON.JSONLazyCreator::get_AsObject()
extern "C" JSONClass_t11 * JSONLazyCreator_get_AsObject_m156 (JSONLazyCreator_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Equality_m157 (Object_t * __this /* static, unused */, JSONLazyCreator_t19 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Inequality_m158 (Object_t * __this /* static, unused */, JSONLazyCreator_t19 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
