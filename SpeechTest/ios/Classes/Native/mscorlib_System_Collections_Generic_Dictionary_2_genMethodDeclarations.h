#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t17;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t421;
// System.Collections.Generic.ICollection`1<SimpleJSON.JSONNode>
struct ICollection_1_t2487;
// System.Object
struct Object_t;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct KeyCollection_t64;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,SimpleJSON.JSONNode>
struct ValueCollection_t2123;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2081;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJSON.JSONNode>
struct IDictionary_2_t2488;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t433;
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>[]
struct KeyValuePair_2U5BU5D_t2489;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerator_1_t2490;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t753;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
#define Dictionary_2__ctor_m251(__this, method) (( void (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2__ctor_m9581_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9907(__this, ___comparer, method) (( void (*) (Dictionary_2_t17 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9583_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9908(__this, ___dictionary, method) (( void (*) (Dictionary_2_t17 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9585_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor(System.Int32)
#define Dictionary_2__ctor_m9909(__this, ___capacity, method) (( void (*) (Dictionary_2_t17 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9587_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9910(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t17 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9589_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9911(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t17 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2__ctor_m9591_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9912(__this, method) (( Object_t* (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9593_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9913(__this, method) (( Object_t* (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9595_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9914(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t17 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9597_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9915(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t17 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9599_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9916(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t17 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9601_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9917(__this, ___key, method) (( bool (*) (Dictionary_2_t17 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9918(__this, ___key, method) (( void (*) (Dictionary_2_t17 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9605_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9919(__this, method) (( Object_t * (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9920(__this, method) (( bool (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9921(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t17 *, KeyValuePair_2_t14 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9611_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9922(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t17 *, KeyValuePair_2_t14 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9613_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9923(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t17 *, KeyValuePair_2U5BU5D_t2489*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9615_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9924(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t17 *, KeyValuePair_2_t14 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9617_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9925(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t17 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9619_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9926(__this, method) (( Object_t * (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9621_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9927(__this, method) (( Object_t* (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9623_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9928(__this, method) (( Object_t * (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9625_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count()
#define Dictionary_2_get_Count_m9929(__this, method) (( int32_t (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_get_Count_m9627_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(TKey)
#define Dictionary_2_get_Item_m9930(__this, ___key, method) (( JSONNode_t2 * (*) (Dictionary_2_t17 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9629_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9931(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t17 *, String_t*, JSONNode_t2 *, const MethodInfo*))Dictionary_2_set_Item_m9631_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9932(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t17 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9633_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9933(__this, ___size, method) (( void (*) (Dictionary_2_t17 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9635_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9934(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t17 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9637_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9935(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t14  (*) (Object_t * /* static, unused */, String_t*, JSONNode_t2 *, const MethodInfo*))Dictionary_2_make_pair_m9639_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9936(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, JSONNode_t2 *, const MethodInfo*))Dictionary_2_pick_key_m9641_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9937(__this /* static, unused */, ___key, ___value, method) (( JSONNode_t2 * (*) (Object_t * /* static, unused */, String_t*, JSONNode_t2 *, const MethodInfo*))Dictionary_2_pick_value_m9643_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9938(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t17 *, KeyValuePair_2U5BU5D_t2489*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9645_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Resize()
#define Dictionary_2_Resize_m9939(__this, method) (( void (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_Resize_m9647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(TKey,TValue)
#define Dictionary_2_Add_m9940(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t17 *, String_t*, JSONNode_t2 *, const MethodInfo*))Dictionary_2_Add_m9649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Clear()
#define Dictionary_2_Clear_m9941(__this, method) (( void (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_Clear_m9651_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9942(__this, ___key, method) (( bool (*) (Dictionary_2_t17 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9653_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9943(__this, ___value, method) (( bool (*) (Dictionary_2_t17 *, JSONNode_t2 *, const MethodInfo*))Dictionary_2_ContainsValue_m9655_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9944(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t17 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2_GetObjectData_m9657_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9945(__this, ___sender, method) (( void (*) (Dictionary_2_t17 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9659_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(TKey)
#define Dictionary_2_Remove_m9946(__this, ___key, method) (( bool (*) (Dictionary_2_t17 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9661_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9947(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t17 *, String_t*, JSONNode_t2 **, const MethodInfo*))Dictionary_2_TryGetValue_m9663_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Keys()
#define Dictionary_2_get_Keys_m257(__this, method) (( KeyCollection_t64 * (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_get_Keys_m9665_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Values()
#define Dictionary_2_get_Values_m9948(__this, method) (( ValueCollection_t2123 * (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_get_Values_m9667_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9949(__this, ___key, method) (( String_t* (*) (Dictionary_2_t17 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9669_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9950(__this, ___value, method) (( JSONNode_t2 * (*) (Dictionary_2_t17 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9671_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9951(__this, ___pair, method) (( bool (*) (Dictionary_2_t17 *, KeyValuePair_2_t14 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9673_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m241(__this, method) (( Enumerator_t13  (*) (Dictionary_2_t17 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9674_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9952(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t754  (*) (Object_t * /* static, unused */, String_t*, JSONNode_t2 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9676_gshared)(__this /* static, unused */, ___key, ___value, method)
