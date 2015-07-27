#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJSON.JSONClass
struct JSONClass_t11;
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

// System.Void SimpleJSON.JSONClass::.ctor()
extern "C" void JSONClass__ctor_m109 (JSONClass_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String)
extern "C" JSONNode_t2 * JSONClass_get_Item_m110 (JSONClass_t11 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONClass_set_Item_m111 (JSONClass_t11 * __this, String_t* ___aKey, JSONNode_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.Int32)
extern "C" JSONNode_t2 * JSONClass_get_Item_m112 (JSONClass_t11 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONClass_set_Item_m113 (JSONClass_t11 * __this, int32_t ___aIndex, JSONNode_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONClass::get_Count()
extern "C" int32_t JSONClass_get_Count_m114 (JSONClass_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONClass_Add_m115 (JSONClass_t11 * __this, String_t* ___aKey, JSONNode_t2 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.String)
extern "C" JSONNode_t2 * JSONClass_Remove_m116 (JSONClass_t11 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.Int32)
extern "C" JSONNode_t2 * JSONClass_Remove_m117 (JSONClass_t11 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t2 * JSONClass_Remove_m118 (JSONClass_t11 * __this, JSONNode_t2 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass::get_Childs()
extern "C" Object_t* JSONClass_get_Childs_m119 (JSONClass_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONClass::GetEnumerator()
extern "C" Object_t * JSONClass_GetEnumerator_m120 (JSONClass_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONClass::ToString()
extern "C" String_t* JSONClass_ToString_m121 (JSONClass_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONClass::ToString(System.String)
extern "C" String_t* JSONClass_ToString_m122 (JSONClass_t11 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::Serialize(System.IO.BinaryWriter)
extern "C" void JSONClass_Serialize_m123 (JSONClass_t11 * __this, BinaryWriter_t39 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
