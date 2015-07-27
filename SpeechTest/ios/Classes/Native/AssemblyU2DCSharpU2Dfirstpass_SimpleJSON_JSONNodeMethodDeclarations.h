#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJSON.JSONNode
struct JSONNode_t2;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t38;
// SimpleJSON.JSONArray
struct JSONArray_t6;
// SimpleJSON.JSONClass
struct JSONClass_t11;
// System.Object
struct Object_t;
// System.IO.BinaryWriter
struct BinaryWriter_t39;
// System.IO.Stream
struct Stream_t40;
// System.IO.BinaryReader
struct BinaryReader_t41;

// System.Void SimpleJSON.JSONNode::.ctor()
extern "C" void JSONNode__ctor_m16 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONNode_Add_m17 (JSONNode_t2 * __this, String_t* ___aKey, JSONNode_t2 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
extern "C" JSONNode_t2 * JSONNode_get_Item_m18 (JSONNode_t2 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONNode_set_Item_m19 (JSONNode_t2 * __this, int32_t ___aIndex, JSONNode_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
extern "C" JSONNode_t2 * JSONNode_get_Item_m20 (JSONNode_t2 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONNode_set_Item_m21 (JSONNode_t2 * __this, String_t* ___aKey, JSONNode_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::get_Value()
extern "C" String_t* JSONNode_get_Value_m22 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
extern "C" void JSONNode_set_Value_m23 (JSONNode_t2 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_Count()
extern "C" int32_t JSONNode_get_Count_m24 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
extern "C" void JSONNode_Add_m25 (JSONNode_t2 * __this, JSONNode_t2 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
extern "C" JSONNode_t2 * JSONNode_Remove_m26 (JSONNode_t2 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
extern "C" JSONNode_t2 * JSONNode_Remove_m27 (JSONNode_t2 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t2 * JSONNode_Remove_m28 (JSONNode_t2 * __this, JSONNode_t2 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Childs()
extern "C" Object_t* JSONNode_get_Childs_m29 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChilds()
extern "C" Object_t* JSONNode_get_DeepChilds_m30 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString()
extern "C" String_t* JSONNode_ToString_m31 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString(System.String)
extern "C" String_t* JSONNode_ToString_m32 (JSONNode_t2 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
extern "C" int32_t JSONNode_get_AsInt_m33 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
extern "C" void JSONNode_set_AsInt_m34 (JSONNode_t2 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONNode::get_AsFloat()
extern "C" float JSONNode_get_AsFloat_m35 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
extern "C" void JSONNode_set_AsFloat_m36 (JSONNode_t2 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONNode::get_AsDouble()
extern "C" double JSONNode_get_AsDouble_m37 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
extern "C" void JSONNode_set_AsDouble_m38 (JSONNode_t2 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
extern "C" bool JSONNode_get_AsBool_m39 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
extern "C" void JSONNode_set_AsBool_m40 (JSONNode_t2 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
extern "C" JSONArray_t6 * JSONNode_get_AsArray_m41 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject()
extern "C" JSONClass_t11 * JSONNode_get_AsObject_m42 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C" bool JSONNode_Equals_m43 (JSONNode_t2 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C" int32_t JSONNode_GetHashCode_m44 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern "C" String_t* JSONNode_Escape_m45 (Object_t * __this /* static, unused */, String_t* ___aText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern "C" JSONNode_t2 * JSONNode_Parse_m46 (Object_t * __this /* static, unused */, String_t* ___aJSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C" void JSONNode_Serialize_m47 (JSONNode_t2 * __this, BinaryWriter_t39 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
extern "C" void JSONNode_SaveToStream_m48 (JSONNode_t2 * __this, Stream_t40 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C" void JSONNode_SaveToCompressedStream_m49 (JSONNode_t2 * __this, Stream_t40 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
extern "C" void JSONNode_SaveToCompressedFile_m50 (JSONNode_t2 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
extern "C" String_t* JSONNode_SaveToCompressedBase64_m51 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToFile(System.String)
extern "C" void JSONNode_SaveToFile_m52 (JSONNode_t2 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToBase64()
extern "C" String_t* JSONNode_SaveToBase64_m53 (JSONNode_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C" JSONNode_t2 * JSONNode_Deserialize_m54 (Object_t * __this /* static, unused */, BinaryReader_t41 * ___aReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
extern "C" JSONNode_t2 * JSONNode_LoadFromCompressedFile_m55 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C" JSONNode_t2 * JSONNode_LoadFromCompressedStream_m56 (Object_t * __this /* static, unused */, Stream_t40 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
extern "C" JSONNode_t2 * JSONNode_LoadFromCompressedBase64_m57 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
extern "C" JSONNode_t2 * JSONNode_LoadFromStream_m58 (Object_t * __this /* static, unused */, Stream_t40 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromFile(System.String)
extern "C" JSONNode_t2 * JSONNode_LoadFromFile_m59 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBase64(System.String)
extern "C" JSONNode_t2 * JSONNode_LoadFromBase64_m60 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern "C" JSONNode_t2 * JSONNode_op_Implicit_m61 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C" String_t* JSONNode_op_Implicit_m62 (Object_t * __this /* static, unused */, JSONNode_t2 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern "C" bool JSONNode_op_Equality_m63 (Object_t * __this /* static, unused */, JSONNode_t2 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C" bool JSONNode_op_Inequality_m64 (Object_t * __this /* static, unused */, JSONNode_t2 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
