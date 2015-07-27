#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t237;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t54;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t2549;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t1012;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m1819(__this, method) (( void (*) (List_1_t237 *, const MethodInfo*))List_1__ctor_m1850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m11391(__this, ___capacity, method) (( void (*) (List_1_t237 *, int32_t, const MethodInfo*))List_1__ctor_m9858_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m11392(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9860_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11393(__this, method) (( Object_t* (*) (List_1_t237 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11394(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t237 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m2006_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11395(__this, method) (( Object_t * (*) (List_1_t237 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m2003_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11396(__this, ___item, method) (( int32_t (*) (List_1_t237 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m2009_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11397(__this, ___item, method) (( bool (*) (List_1_t237 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m2011_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11398(__this, ___item, method) (( int32_t (*) (List_1_t237 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m2012_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11399(__this, ___index, ___item, method) (( void (*) (List_1_t237 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m2013_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11400(__this, ___item, method) (( void (*) (List_1_t237 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m2014_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11401(__this, method) (( bool (*) (List_1_t237 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2016_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11402(__this, method) (( Object_t * (*) (List_1_t237 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m2005_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11403(__this, ___index, method) (( Object_t * (*) (List_1_t237 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m2007_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11404(__this, ___index, ___value, method) (( void (*) (List_1_t237 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m2008_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m11405(__this, ___item, method) (( void (*) (List_1_t237 *, ByteU5BU5D_t54*, const MethodInfo*))List_1_Add_m2017_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11406(__this, ___newCount, method) (( void (*) (List_1_t237 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9875_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m11407(__this, method) (( void (*) (List_1_t237 *, const MethodInfo*))List_1_Clear_m2010_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m11408(__this, ___item, method) (( bool (*) (List_1_t237 *, ByteU5BU5D_t54*, const MethodInfo*))List_1_Contains_m2018_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11409(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t237 *, ByteU5BU5DU5BU5D_t1012*, int32_t, const MethodInfo*))List_1_CopyTo_m2019_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m11410(__this, method) (( Enumerator_t2229  (*) (List_1_t237 *, const MethodInfo*))List_1_GetEnumerator_m9879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m11411(__this, ___item, method) (( int32_t (*) (List_1_t237 *, ByteU5BU5D_t54*, const MethodInfo*))List_1_IndexOf_m2022_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11412(__this, ___start, ___delta, method) (( void (*) (List_1_t237 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9882_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11413(__this, ___index, method) (( void (*) (List_1_t237 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m11414(__this, ___index, ___item, method) (( void (*) (List_1_t237 *, int32_t, ByteU5BU5D_t54*, const MethodInfo*))List_1_Insert_m2023_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m11415(__this, ___item, method) (( bool (*) (List_1_t237 *, ByteU5BU5D_t54*, const MethodInfo*))List_1_Remove_m2020_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11416(__this, ___index, method) (( void (*) (List_1_t237 *, int32_t, const MethodInfo*))List_1_RemoveAt_m2015_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m11417(__this, method) (( ByteU5BU5DU5BU5D_t1012* (*) (List_1_t237 *, const MethodInfo*))List_1_ToArray_m9889_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m11418(__this, method) (( int32_t (*) (List_1_t237 *, const MethodInfo*))List_1_get_Capacity_m9891_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11419(__this, ___value, method) (( void (*) (List_1_t237 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9893_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m11420(__this, method) (( int32_t (*) (List_1_t237 *, const MethodInfo*))List_1_get_Count_m2004_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m11421(__this, ___index, method) (( ByteU5BU5D_t54* (*) (List_1_t237 *, int32_t, const MethodInfo*))List_1_get_Item_m2024_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m11422(__this, ___index, ___value, method) (( void (*) (List_1_t237 *, int32_t, ByteU5BU5D_t54*, const MethodInfo*))List_1_set_Item_m2025_gshared)(__this, ___index, ___value, method)
