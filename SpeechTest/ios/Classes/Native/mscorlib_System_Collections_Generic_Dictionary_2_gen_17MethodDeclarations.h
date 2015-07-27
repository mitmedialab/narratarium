#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2248;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t422;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2553;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2252;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2256;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2096;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2557;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t433;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2558;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2559;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t753;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m11607_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11607(__this, method) (( void (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2__ctor_m11607_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11609_gshared (Dictionary_2_t2248 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11609(__this, ___comparer, method) (( void (*) (Dictionary_2_t2248 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11609_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11611_gshared (Dictionary_2_t2248 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11611(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2248 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11611_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11613_gshared (Dictionary_2_t2248 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11613(__this, ___capacity, method) (( void (*) (Dictionary_2_t2248 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11613_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11615_gshared (Dictionary_2_t2248 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11615(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2248 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11615_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11617_gshared (Dictionary_2_t2248 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11617(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2248 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2__ctor_m11617_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11619_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11619(__this, method) (( Object_t* (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11619_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11621_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11621(__this, method) (( Object_t* (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11621_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11623_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11623(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2248 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11623_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11625_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11625(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2248 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11625_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11627_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11627(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2248 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11627_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11629_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11629(__this, ___key, method) (( bool (*) (Dictionary_2_t2248 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11629_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11631_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11631(__this, ___key, method) (( void (*) (Dictionary_2_t2248 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11631_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11633_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11633(__this, method) (( Object_t * (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11633_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11635_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11635(__this, method) (( bool (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11637_gshared (Dictionary_2_t2248 * __this, KeyValuePair_2_t2249  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11637(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2248 *, KeyValuePair_2_t2249 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11637_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11639_gshared (Dictionary_2_t2248 * __this, KeyValuePair_2_t2249  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11639(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2248 *, KeyValuePair_2_t2249 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11639_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11641_gshared (Dictionary_2_t2248 * __this, KeyValuePair_2U5BU5D_t2558* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11641(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2248 *, KeyValuePair_2U5BU5D_t2558*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11641_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11643_gshared (Dictionary_2_t2248 * __this, KeyValuePair_2_t2249  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11643(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2248 *, KeyValuePair_2_t2249 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11643_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11645_gshared (Dictionary_2_t2248 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11645(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2248 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11645_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11647_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11647(__this, method) (( Object_t * (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11647_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11649_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11649(__this, method) (( Object_t* (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11649_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11651_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11651(__this, method) (( Object_t * (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11651_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11653_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11653(__this, method) (( int32_t (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_get_Count_m11653_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m11655_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11655(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2248 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11655_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11657_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11657(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2248 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m11657_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11659_gshared (Dictionary_2_t2248 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11659(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2248 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11659_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11661_gshared (Dictionary_2_t2248 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11661(__this, ___size, method) (( void (*) (Dictionary_2_t2248 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11661_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11663_gshared (Dictionary_2_t2248 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11663(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2248 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11663_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2249  Dictionary_2_make_pair_m11665_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11665(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2249  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m11665_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11667_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11667(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m11667_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m11669_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11669(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m11669_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11671_gshared (Dictionary_2_t2248 * __this, KeyValuePair_2U5BU5D_t2558* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11671(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2248 *, KeyValuePair_2U5BU5D_t2558*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11671_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m11673_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11673(__this, method) (( void (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_Resize_m11673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11675_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11675(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2248 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m11675_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m11677_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11677(__this, method) (( void (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_Clear_m11677_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11679_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11679(__this, ___key, method) (( bool (*) (Dictionary_2_t2248 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11679_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11681_gshared (Dictionary_2_t2248 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11681(__this, ___value, method) (( bool (*) (Dictionary_2_t2248 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m11681_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11683_gshared (Dictionary_2_t2248 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11683(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2248 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2_GetObjectData_m11683_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11685_gshared (Dictionary_2_t2248 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11685(__this, ___sender, method) (( void (*) (Dictionary_2_t2248 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11685_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11687_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11687(__this, ___key, method) (( bool (*) (Dictionary_2_t2248 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11687_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11689_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11689(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2248 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11689_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2252 * Dictionary_2_get_Keys_m11691_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11691(__this, method) (( KeyCollection_t2252 * (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_get_Keys_m11691_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2256 * Dictionary_2_get_Values_m11693_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11693(__this, method) (( ValueCollection_t2256 * (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_get_Values_m11693_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11695_gshared (Dictionary_2_t2248 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11695(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2248 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11695_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m11697_gshared (Dictionary_2_t2248 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11697(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2248 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11697_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11699_gshared (Dictionary_2_t2248 * __this, KeyValuePair_2_t2249  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11699(__this, ___pair, method) (( bool (*) (Dictionary_2_t2248 *, KeyValuePair_2_t2249 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11699_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2254  Dictionary_2_GetEnumerator_m11701_gshared (Dictionary_2_t2248 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11701(__this, method) (( Enumerator_t2254  (*) (Dictionary_2_t2248 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11701_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t754  Dictionary_2_U3CCopyToU3Em__0_m11703_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11703(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t754  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11703_gshared)(__this /* static, unused */, ___key, ___value, method)
