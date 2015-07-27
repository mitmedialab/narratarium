#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>
struct Dictionary_2_t24;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t421;
// System.Collections.Generic.ICollection`1<SpeechAnimationDictionary/Animation>
struct ICollection_1_t2499;
// System.Object
struct Object_t;
// SpeechAnimationDictionary/Animation
struct Animation_t21;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SpeechAnimationDictionary/Animation>
struct KeyCollection_t142;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,SpeechAnimationDictionary/Animation>
struct ValueCollection_t2134;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2081;
// System.Collections.Generic.IDictionary`2<System.String,SpeechAnimationDictionary/Animation>
struct IDictionary_2_t2500;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t433;
// System.Collections.Generic.KeyValuePair`2<System.String,SpeechAnimationDictionary/Animation>[]
struct KeyValuePair_2U5BU5D_t2501;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SpeechAnimationDictionary/Animation>>
struct IEnumerator_1_t2502;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t753;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
#define Dictionary_2__ctor_m266(__this, method) (( void (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2__ctor_m9581_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10142(__this, ___comparer, method) (( void (*) (Dictionary_2_t24 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9583_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m10143(__this, ___dictionary, method) (( void (*) (Dictionary_2_t24 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9585_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::.ctor(System.Int32)
#define Dictionary_2__ctor_m10144(__this, ___capacity, method) (( void (*) (Dictionary_2_t24 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9587_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10145(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t24 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9589_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m10146(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t24 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2__ctor_m9591_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10147(__this, method) (( Object_t* (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9593_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10148(__this, method) (( Object_t* (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9595_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10149(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t24 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9597_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10150(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t24 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9599_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m10151(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t24 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9601_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m10152(__this, ___key, method) (( bool (*) (Dictionary_2_t24 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m10153(__this, ___key, method) (( void (*) (Dictionary_2_t24 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9605_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10154(__this, method) (( Object_t * (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10155(__this, method) (( bool (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10156(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t24 *, KeyValuePair_2_t2133 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9611_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10157(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t24 *, KeyValuePair_2_t2133 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9613_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10158(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t24 *, KeyValuePair_2U5BU5D_t2501*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9615_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10159(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t24 *, KeyValuePair_2_t2133 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9617_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10160(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t24 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9619_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10161(__this, method) (( Object_t * (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9621_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10162(__this, method) (( Object_t* (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9623_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10163(__this, method) (( Object_t * (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9625_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::get_Count()
#define Dictionary_2_get_Count_m10164(__this, method) (( int32_t (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_get_Count_m9627_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::get_Item(TKey)
#define Dictionary_2_get_Item_m10165(__this, ___key, method) (( Animation_t21 * (*) (Dictionary_2_t24 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9629_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m10166(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t24 *, String_t*, Animation_t21 *, const MethodInfo*))Dictionary_2_set_Item_m9631_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m10167(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t24 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9633_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m10168(__this, ___size, method) (( void (*) (Dictionary_2_t24 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9635_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m10169(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t24 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9637_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m10170(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2133  (*) (Object_t * /* static, unused */, String_t*, Animation_t21 *, const MethodInfo*))Dictionary_2_make_pair_m9639_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m10171(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Animation_t21 *, const MethodInfo*))Dictionary_2_pick_key_m9641_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m10172(__this /* static, unused */, ___key, ___value, method) (( Animation_t21 * (*) (Object_t * /* static, unused */, String_t*, Animation_t21 *, const MethodInfo*))Dictionary_2_pick_value_m9643_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m10173(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t24 *, KeyValuePair_2U5BU5D_t2501*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9645_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::Resize()
#define Dictionary_2_Resize_m10174(__this, method) (( void (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_Resize_m9647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::Add(TKey,TValue)
#define Dictionary_2_Add_m10175(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t24 *, String_t*, Animation_t21 *, const MethodInfo*))Dictionary_2_Add_m9649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::Clear()
#define Dictionary_2_Clear_m10176(__this, method) (( void (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_Clear_m9651_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m10177(__this, ___key, method) (( bool (*) (Dictionary_2_t24 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9653_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m10178(__this, ___value, method) (( bool (*) (Dictionary_2_t24 *, Animation_t21 *, const MethodInfo*))Dictionary_2_ContainsValue_m9655_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m10179(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t24 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2_GetObjectData_m9657_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m10180(__this, ___sender, method) (( void (*) (Dictionary_2_t24 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9659_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::Remove(TKey)
#define Dictionary_2_Remove_m10181(__this, ___key, method) (( bool (*) (Dictionary_2_t24 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9661_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m10182(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t24 *, String_t*, Animation_t21 **, const MethodInfo*))Dictionary_2_TryGetValue_m9663_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::get_Keys()
#define Dictionary_2_get_Keys_m597(__this, method) (( KeyCollection_t142 * (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_get_Keys_m9665_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::get_Values()
#define Dictionary_2_get_Values_m10183(__this, method) (( ValueCollection_t2134 * (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_get_Values_m9667_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m10184(__this, ___key, method) (( String_t* (*) (Dictionary_2_t24 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9669_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m10185(__this, ___value, method) (( Animation_t21 * (*) (Dictionary_2_t24 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9671_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m10186(__this, ___pair, method) (( bool (*) (Dictionary_2_t24 *, KeyValuePair_2_t2133 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9673_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m10187(__this, method) (( Enumerator_t2135  (*) (Dictionary_2_t24 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9674_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m10188(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t754  (*) (Object_t * /* static, unused */, String_t*, Animation_t21 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9676_gshared)(__this /* static, unused */, ___key, ___value, method)
