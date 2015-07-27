#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t136;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2094;
// System.String[]
struct StringU5BU5D_t31;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t2117;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2081;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t433;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJSON.JSONNode,System.Collections.DictionaryEntry>
struct Transform_1_t2122;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct  Dictionary_2_t17  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::table
	Int32U5BU5D_t136* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::linkSlots
	LinkU5BU5D_t2094* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::keySlots
	StringU5BU5D_t31* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::valueSlots
	JSONNodeU5BU5D_t2117* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::serialization_info
	SerializationInfo_t433 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t17_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::<>f__am$cacheB
	Transform_1_t2122 * ___U3CU3Ef__amU24cacheB_15;
};
