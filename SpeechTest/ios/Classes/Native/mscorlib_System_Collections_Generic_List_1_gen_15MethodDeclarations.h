#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t388;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t387;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t2625;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t2361;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m1915(__this, method) (( void (*) (List_1_t388 *, const MethodInfo*))List_1__ctor_m1850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m13060(__this, ___capacity, method) (( void (*) (List_1_t388 *, int32_t, const MethodInfo*))List_1__ctor_m9858_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m13061(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9860_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13062(__this, method) (( Object_t* (*) (List_1_t388 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13063(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t388 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m2006_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13064(__this, method) (( Object_t * (*) (List_1_t388 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m2003_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13065(__this, ___item, method) (( int32_t (*) (List_1_t388 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m2009_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13066(__this, ___item, method) (( bool (*) (List_1_t388 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m2011_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13067(__this, ___item, method) (( int32_t (*) (List_1_t388 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m2012_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13068(__this, ___index, ___item, method) (( void (*) (List_1_t388 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m2013_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13069(__this, ___item, method) (( void (*) (List_1_t388 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m2014_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13070(__this, method) (( bool (*) (List_1_t388 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2016_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13071(__this, method) (( Object_t * (*) (List_1_t388 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m2005_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13072(__this, ___index, method) (( Object_t * (*) (List_1_t388 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m2007_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13073(__this, ___index, ___value, method) (( void (*) (List_1_t388 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m2008_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m13074(__this, ___item, method) (( void (*) (List_1_t388 *, PersistentCall_t387 *, const MethodInfo*))List_1_Add_m2017_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13075(__this, ___newCount, method) (( void (*) (List_1_t388 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9875_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m13076(__this, method) (( void (*) (List_1_t388 *, const MethodInfo*))List_1_Clear_m2010_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m13077(__this, ___item, method) (( bool (*) (List_1_t388 *, PersistentCall_t387 *, const MethodInfo*))List_1_Contains_m2018_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13078(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t388 *, PersistentCallU5BU5D_t2361*, int32_t, const MethodInfo*))List_1_CopyTo_m2019_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m13079(__this, method) (( Enumerator_t2362  (*) (List_1_t388 *, const MethodInfo*))List_1_GetEnumerator_m9879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m13080(__this, ___item, method) (( int32_t (*) (List_1_t388 *, PersistentCall_t387 *, const MethodInfo*))List_1_IndexOf_m2022_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13081(__this, ___start, ___delta, method) (( void (*) (List_1_t388 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9882_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13082(__this, ___index, method) (( void (*) (List_1_t388 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m13083(__this, ___index, ___item, method) (( void (*) (List_1_t388 *, int32_t, PersistentCall_t387 *, const MethodInfo*))List_1_Insert_m2023_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m13084(__this, ___item, method) (( bool (*) (List_1_t388 *, PersistentCall_t387 *, const MethodInfo*))List_1_Remove_m2020_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13085(__this, ___index, method) (( void (*) (List_1_t388 *, int32_t, const MethodInfo*))List_1_RemoveAt_m2015_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m13086(__this, method) (( PersistentCallU5BU5D_t2361* (*) (List_1_t388 *, const MethodInfo*))List_1_ToArray_m9889_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m13087(__this, method) (( int32_t (*) (List_1_t388 *, const MethodInfo*))List_1_get_Capacity_m9891_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13088(__this, ___value, method) (( void (*) (List_1_t388 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9893_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m13089(__this, method) (( int32_t (*) (List_1_t388 *, const MethodInfo*))List_1_get_Count_m2004_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m13090(__this, ___index, method) (( PersistentCall_t387 * (*) (List_1_t388 *, int32_t, const MethodInfo*))List_1_get_Item_m2024_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m13091(__this, ___index, ___value, method) (( void (*) (List_1_t388 *, int32_t, PersistentCall_t387 *, const MethodInfo*))List_1_set_Item_m2025_gshared)(__this, ___index, ___value, method)
