#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJSON.JSONArray
struct JSONArray_t6;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t38;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.IO.BinaryWriter
struct BinaryWriter_t39;

// System.Void SimpleJSON.JSONArray::.ctor()
extern "C" void JSONArray__ctor_m79 (JSONArray_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
extern "C" JSONNode_t2 * JSONArray_get_Item_m80 (JSONArray_t6 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONArray_set_Item_m81 (JSONArray_t6 * __this, int32_t ___aIndex, JSONNode_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
extern "C" JSONNode_t2 * JSONArray_get_Item_m82 (JSONArray_t6 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONArray_set_Item_m83 (JSONArray_t6 * __this, String_t* ___aKey, JSONNode_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONArray::get_Count()
extern "C" int32_t JSONArray_get_Count_m84 (JSONArray_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONArray_Add_m85 (JSONArray_t6 * __this, String_t* ___aKey, JSONNode_t2 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
extern "C" JSONNode_t2 * JSONArray_Remove_m86 (JSONArray_t6 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t2 * JSONArray_Remove_m87 (JSONArray_t6 * __this, JSONNode_t2 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Childs()
extern "C" Object_t* JSONArray_get_Childs_m88 (JSONArray_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator()
extern "C" Object_t * JSONArray_GetEnumerator_m89 (JSONArray_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString()
extern "C" String_t* JSONArray_ToString_m90 (JSONArray_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString(System.String)
extern "C" String_t* JSONArray_ToString_m91 (JSONArray_t6 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C" void JSONArray_Serialize_m92 (JSONArray_t6 * __this, BinaryWriter_t39 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
