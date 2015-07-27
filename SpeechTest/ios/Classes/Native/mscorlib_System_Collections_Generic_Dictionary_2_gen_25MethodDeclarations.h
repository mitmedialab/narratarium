#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t690;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2515;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2397;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2401;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2152;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t2639;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t433;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2640;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2641;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t753;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13397_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13397(__this, method) (( void (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2__ctor_m13397_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13398_gshared (Dictionary_2_t690 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13398(__this, ___comparer, method) (( void (*) (Dictionary_2_t690 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13398_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13399_gshared (Dictionary_2_t690 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m13399(__this, ___dictionary, method) (( void (*) (Dictionary_2_t690 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13399_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13400_gshared (Dictionary_2_t690 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13400(__this, ___capacity, method) (( void (*) (Dictionary_2_t690 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13400_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13401_gshared (Dictionary_2_t690 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13401(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t690 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13401_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13402_gshared (Dictionary_2_t690 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13402(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t690 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2__ctor_m13402_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13403_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13403(__this, method) (( Object_t* (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13403_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13404_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13404(__this, method) (( Object_t* (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13404_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13405_gshared (Dictionary_2_t690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13405(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t690 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13405_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13406_gshared (Dictionary_2_t690 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13406(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t690 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13406_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13407_gshared (Dictionary_2_t690 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13407(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t690 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13407_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13408_gshared (Dictionary_2_t690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13408(__this, ___key, method) (( bool (*) (Dictionary_2_t690 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13408_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13409_gshared (Dictionary_2_t690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13409(__this, ___key, method) (( void (*) (Dictionary_2_t690 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13409_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13410_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13410(__this, method) (( Object_t * (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13411_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13411(__this, method) (( bool (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13411_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13412_gshared (Dictionary_2_t690 * __this, KeyValuePair_2_t2395  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13412(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t690 *, KeyValuePair_2_t2395 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13412_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13413_gshared (Dictionary_2_t690 * __this, KeyValuePair_2_t2395  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13413(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t690 *, KeyValuePair_2_t2395 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13413_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13414_gshared (Dictionary_2_t690 * __this, KeyValuePair_2U5BU5D_t2640* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13414(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t690 *, KeyValuePair_2U5BU5D_t2640*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13414_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13415_gshared (Dictionary_2_t690 * __this, KeyValuePair_2_t2395  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13415(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t690 *, KeyValuePair_2_t2395 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13415_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13416_gshared (Dictionary_2_t690 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13416(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t690 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13416_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13417_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13417(__this, method) (( Object_t * (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13417_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13418_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13418(__this, method) (( Object_t* (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13418_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13419_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13419(__this, method) (( Object_t * (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13419_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13420_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13420(__this, method) (( int32_t (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_get_Count_m13420_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13421_gshared (Dictionary_2_t690 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13421(__this, ___key, method) (( int32_t (*) (Dictionary_2_t690 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13421_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13422_gshared (Dictionary_2_t690 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13422(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t690 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m13422_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13423_gshared (Dictionary_2_t690 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13423(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t690 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13423_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13424_gshared (Dictionary_2_t690 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13424(__this, ___size, method) (( void (*) (Dictionary_2_t690 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13424_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13425_gshared (Dictionary_2_t690 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13425(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t690 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13425_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2395  Dictionary_2_make_pair_m13426_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13426(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2395  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m13426_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m13427_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13427(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m13427_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13428_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13428(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m13428_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13429_gshared (Dictionary_2_t690 * __this, KeyValuePair_2U5BU5D_t2640* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13429(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t690 *, KeyValuePair_2U5BU5D_t2640*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13429_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13430_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13430(__this, method) (( void (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_Resize_m13430_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13431_gshared (Dictionary_2_t690 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13431(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t690 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m13431_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13432_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13432(__this, method) (( void (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_Clear_m13432_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13433_gshared (Dictionary_2_t690 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13433(__this, ___key, method) (( bool (*) (Dictionary_2_t690 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13433_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13434_gshared (Dictionary_2_t690 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13434(__this, ___value, method) (( bool (*) (Dictionary_2_t690 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m13434_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13435_gshared (Dictionary_2_t690 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13435(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t690 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2_GetObjectData_m13435_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13436_gshared (Dictionary_2_t690 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13436(__this, ___sender, method) (( void (*) (Dictionary_2_t690 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13436_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13437_gshared (Dictionary_2_t690 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13437(__this, ___key, method) (( bool (*) (Dictionary_2_t690 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13438_gshared (Dictionary_2_t690 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13438(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t690 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13438_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t2397 * Dictionary_2_get_Keys_m13439_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13439(__this, method) (( KeyCollection_t2397 * (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_get_Keys_m13439_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2401 * Dictionary_2_get_Values_m13440_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13440(__this, method) (( ValueCollection_t2401 * (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_get_Values_m13440_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13441_gshared (Dictionary_2_t690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13441(__this, ___key, method) (( int32_t (*) (Dictionary_2_t690 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13441_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13442_gshared (Dictionary_2_t690 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13442(__this, ___value, method) (( int32_t (*) (Dictionary_2_t690 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13442_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13443_gshared (Dictionary_2_t690 * __this, KeyValuePair_2_t2395  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13443(__this, ___pair, method) (( bool (*) (Dictionary_2_t690 *, KeyValuePair_2_t2395 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13443_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2399  Dictionary_2_GetEnumerator_m13444_gshared (Dictionary_2_t690 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13444(__this, method) (( Enumerator_t2399  (*) (Dictionary_2_t690 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13444_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t754  Dictionary_2_U3CCopyToU3Em__0_m13445_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13445(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t754  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13445_gshared)(__this /* static, unused */, ___key, ___value, method)
