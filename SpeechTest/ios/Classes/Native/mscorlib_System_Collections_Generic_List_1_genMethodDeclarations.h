#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t10;
// System.Object
struct Object_t;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>
struct IEnumerator_1_t4;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t2117;
// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m239(__this, method) (( void (*) (List_1_t10 *, const MethodInfo*))List_1__ctor_m1850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor(System.Int32)
#define List_1__ctor_m9857(__this, ___capacity, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1__ctor_m9858_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.cctor()
#define List_1__cctor_m9859(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9860_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9861(__this, method) (( Object_t* (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9862(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t10 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m2006_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9863(__this, method) (( Object_t * (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m2003_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9864(__this, ___item, method) (( int32_t (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m2009_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9865(__this, ___item, method) (( bool (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m2011_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9866(__this, ___item, method) (( int32_t (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m2012_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9867(__this, ___index, ___item, method) (( void (*) (List_1_t10 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m2013_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9868(__this, ___item, method) (( void (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m2014_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9869(__this, method) (( bool (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2016_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9870(__this, method) (( Object_t * (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m2005_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9871(__this, ___index, method) (( Object_t * (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m2007_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9872(__this, ___index, ___value, method) (( void (*) (List_1_t10 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m2008_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(T)
#define List_1_Add_m9873(__this, ___item, method) (( void (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_Add_m2017_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9874(__this, ___newCount, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9875_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Clear()
#define List_1_Clear_m9876(__this, method) (( void (*) (List_1_t10 *, const MethodInfo*))List_1_Clear_m2010_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Contains(T)
#define List_1_Contains_m9877(__this, ___item, method) (( bool (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_Contains_m2018_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9878(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t10 *, JSONNodeU5BU5D_t2117*, int32_t, const MethodInfo*))List_1_CopyTo_m2019_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GetEnumerator()
#define List_1_GetEnumerator_m236(__this, method) (( Enumerator_t8  (*) (List_1_t10 *, const MethodInfo*))List_1_GetEnumerator_m9879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::IndexOf(T)
#define List_1_IndexOf_m9880(__this, ___item, method) (( int32_t (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_IndexOf_m2022_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9881(__this, ___start, ___delta, method) (( void (*) (List_1_t10 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9882_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9883(__this, ___index, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Insert(System.Int32,T)
#define List_1_Insert_m9885(__this, ___index, ___item, method) (( void (*) (List_1_t10 *, int32_t, JSONNode_t2 *, const MethodInfo*))List_1_Insert_m2023_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(T)
#define List_1_Remove_m9886(__this, ___item, method) (( bool (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_Remove_m2020_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9887(__this, ___index, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_RemoveAt_m2015_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<SimpleJSON.JSONNode>::ToArray()
#define List_1_ToArray_m9888(__this, method) (( JSONNodeU5BU5D_t2117* (*) (List_1_t10 *, const MethodInfo*))List_1_ToArray_m9889_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Capacity()
#define List_1_get_Capacity_m9890(__this, method) (( int32_t (*) (List_1_t10 *, const MethodInfo*))List_1_get_Capacity_m9891_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9892(__this, ___value, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9893_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count()
#define List_1_get_Count_m9894(__this, method) (( int32_t (*) (List_1_t10 *, const MethodInfo*))List_1_get_Count_m2004_gshared)(__this, method)
// T System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32)
#define List_1_get_Item_m9895(__this, ___index, method) (( JSONNode_t2 * (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_get_Item_m2024_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,T)
#define List_1_set_Item_m9896(__this, ___index, ___value, method) (( void (*) (List_1_t10 *, int32_t, JSONNode_t2 *, const MethodInfo*))List_1_set_Item_m2025_gshared)(__this, ___index, ___value, method)
