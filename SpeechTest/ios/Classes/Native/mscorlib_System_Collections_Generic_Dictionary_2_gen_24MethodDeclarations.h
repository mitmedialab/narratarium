#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2371;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t422;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t2631;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t2374;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2378;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2096;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t2632;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t433;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2633;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t2634;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t753;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__20.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m13141_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13141(__this, method) (( void (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2__ctor_m13141_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13142_gshared (Dictionary_2_t2371 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13142(__this, ___comparer, method) (( void (*) (Dictionary_2_t2371 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13142_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13144_gshared (Dictionary_2_t2371 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m13144(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2371 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13144_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13146_gshared (Dictionary_2_t2371 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13146(__this, ___capacity, method) (( void (*) (Dictionary_2_t2371 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13146_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13148_gshared (Dictionary_2_t2371 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13148(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2371 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13148_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13150_gshared (Dictionary_2_t2371 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13150(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2371 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2__ctor_m13150_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13152_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13152(__this, method) (( Object_t* (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13152_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13154_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13154(__this, method) (( Object_t* (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13154_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13156_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13156(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2371 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13156_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13158_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13158(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2371 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13158_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13160_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13160(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2371 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13160_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13162_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13162(__this, ___key, method) (( bool (*) (Dictionary_2_t2371 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13162_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13164_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13164(__this, ___key, method) (( void (*) (Dictionary_2_t2371 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13164_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13166_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13166(__this, method) (( Object_t * (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13168_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13168(__this, method) (( bool (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13168_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13170_gshared (Dictionary_2_t2371 * __this, KeyValuePair_2_t2372  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13170(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2371 *, KeyValuePair_2_t2372 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13170_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13172_gshared (Dictionary_2_t2371 * __this, KeyValuePair_2_t2372  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13172(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2371 *, KeyValuePair_2_t2372 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13172_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13174_gshared (Dictionary_2_t2371 * __this, KeyValuePair_2U5BU5D_t2633* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13174(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2371 *, KeyValuePair_2U5BU5D_t2633*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13174_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13176_gshared (Dictionary_2_t2371 * __this, KeyValuePair_2_t2372  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13176(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2371 *, KeyValuePair_2_t2372 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13176_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13178_gshared (Dictionary_2_t2371 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13178(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2371 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13178_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13180_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13180(__this, method) (( Object_t * (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13180_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13182_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13182(__this, method) (( Object_t* (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13182_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13184_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13184(__this, method) (( Object_t * (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13184_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13186_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13186(__this, method) (( int32_t (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_get_Count_m13186_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m13188_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13188(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t2371 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13188_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13190_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13190(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2371 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m13190_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13192_gshared (Dictionary_2_t2371 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13192(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2371 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13192_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13194_gshared (Dictionary_2_t2371 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13194(__this, ___size, method) (( void (*) (Dictionary_2_t2371 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13194_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13196_gshared (Dictionary_2_t2371 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13196(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2371 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13196_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2372  Dictionary_2_make_pair_m13198_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13198(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2372  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m13198_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13200_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13200(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m13200_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m13202_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13202(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m13202_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13204_gshared (Dictionary_2_t2371 * __this, KeyValuePair_2U5BU5D_t2633* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13204(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2371 *, KeyValuePair_2U5BU5D_t2633*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13204_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m13206_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13206(__this, method) (( void (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_Resize_m13206_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13208_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13208(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2371 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m13208_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m13210_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13210(__this, method) (( void (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_Clear_m13210_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13212_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13212(__this, ___key, method) (( bool (*) (Dictionary_2_t2371 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13212_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13214_gshared (Dictionary_2_t2371 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13214(__this, ___value, method) (( bool (*) (Dictionary_2_t2371 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m13214_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13216_gshared (Dictionary_2_t2371 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13216(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2371 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2_GetObjectData_m13216_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13218_gshared (Dictionary_2_t2371 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13218(__this, ___sender, method) (( void (*) (Dictionary_2_t2371 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13218_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13220_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13220(__this, ___key, method) (( bool (*) (Dictionary_2_t2371 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13220_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13222_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13222(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2371 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13222_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t2374 * Dictionary_2_get_Keys_m13224_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13224(__this, method) (( KeyCollection_t2374 * (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_get_Keys_m13224_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t2378 * Dictionary_2_get_Values_m13226_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13226(__this, method) (( ValueCollection_t2378 * (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_get_Values_m13226_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13228_gshared (Dictionary_2_t2371 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13228(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2371 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13228_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m13230_gshared (Dictionary_2_t2371 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13230(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t2371 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13230_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13232_gshared (Dictionary_2_t2371 * __this, KeyValuePair_2_t2372  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13232(__this, ___pair, method) (( bool (*) (Dictionary_2_t2371 *, KeyValuePair_2_t2372 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13232_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2376  Dictionary_2_GetEnumerator_m13234_gshared (Dictionary_2_t2371 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13234(__this, method) (( Enumerator_t2376  (*) (Dictionary_2_t2371 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13234_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t754  Dictionary_2_U3CCopyToU3Em__0_m13236_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13236(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t754  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13236_gshared)(__this /* static, unused */, ___key, ___value, method)
