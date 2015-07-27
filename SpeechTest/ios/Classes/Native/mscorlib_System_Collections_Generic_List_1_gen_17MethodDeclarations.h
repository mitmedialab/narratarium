#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t1613;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1431;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t2642;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t2462;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m13835(__this, method) (( void (*) (List_1_t1613 *, const MethodInfo*))List_1__ctor_m1850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m8760(__this, ___capacity, method) (( void (*) (List_1_t1613 *, int32_t, const MethodInfo*))List_1__ctor_m9858_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m13836(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9860_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13837(__this, method) (( Object_t* (*) (List_1_t1613 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13838(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1613 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m2006_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13839(__this, method) (( Object_t * (*) (List_1_t1613 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m2003_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13840(__this, ___item, method) (( int32_t (*) (List_1_t1613 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m2009_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13841(__this, ___item, method) (( bool (*) (List_1_t1613 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m2011_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13842(__this, ___item, method) (( int32_t (*) (List_1_t1613 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m2012_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13843(__this, ___index, ___item, method) (( void (*) (List_1_t1613 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m2013_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13844(__this, ___item, method) (( void (*) (List_1_t1613 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m2014_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13845(__this, method) (( bool (*) (List_1_t1613 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2016_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13846(__this, method) (( Object_t * (*) (List_1_t1613 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m2005_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13847(__this, ___index, method) (( Object_t * (*) (List_1_t1613 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m2007_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13848(__this, ___index, ___value, method) (( void (*) (List_1_t1613 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m2008_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m13849(__this, ___item, method) (( void (*) (List_1_t1613 *, StrongName_t1431 *, const MethodInfo*))List_1_Add_m2017_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13850(__this, ___newCount, method) (( void (*) (List_1_t1613 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9875_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m13851(__this, method) (( void (*) (List_1_t1613 *, const MethodInfo*))List_1_Clear_m2010_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m13852(__this, ___item, method) (( bool (*) (List_1_t1613 *, StrongName_t1431 *, const MethodInfo*))List_1_Contains_m2018_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13853(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1613 *, StrongNameU5BU5D_t2462*, int32_t, const MethodInfo*))List_1_CopyTo_m2019_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m13854(__this, method) (( Enumerator_t2463  (*) (List_1_t1613 *, const MethodInfo*))List_1_GetEnumerator_m9879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m13855(__this, ___item, method) (( int32_t (*) (List_1_t1613 *, StrongName_t1431 *, const MethodInfo*))List_1_IndexOf_m2022_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13856(__this, ___start, ___delta, method) (( void (*) (List_1_t1613 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9882_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13857(__this, ___index, method) (( void (*) (List_1_t1613 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m13858(__this, ___index, ___item, method) (( void (*) (List_1_t1613 *, int32_t, StrongName_t1431 *, const MethodInfo*))List_1_Insert_m2023_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m13859(__this, ___item, method) (( bool (*) (List_1_t1613 *, StrongName_t1431 *, const MethodInfo*))List_1_Remove_m2020_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13860(__this, ___index, method) (( void (*) (List_1_t1613 *, int32_t, const MethodInfo*))List_1_RemoveAt_m2015_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m13861(__this, method) (( StrongNameU5BU5D_t2462* (*) (List_1_t1613 *, const MethodInfo*))List_1_ToArray_m9889_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m13862(__this, method) (( int32_t (*) (List_1_t1613 *, const MethodInfo*))List_1_get_Capacity_m9891_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13863(__this, ___value, method) (( void (*) (List_1_t1613 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9893_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m13864(__this, method) (( int32_t (*) (List_1_t1613 *, const MethodInfo*))List_1_get_Count_m2004_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m13865(__this, ___index, method) (( StrongName_t1431 * (*) (List_1_t1613 *, int32_t, const MethodInfo*))List_1_get_Item_m2024_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m13866(__this, ___index, ___value, method) (( void (*) (List_1_t1613 *, int32_t, StrongName_t1431 *, const MethodInfo*))List_1_set_Item_m2025_gshared)(__this, ___index, ___value, method)
