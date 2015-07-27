#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t319;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t91;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Object[]
struct ObjectU5BU5D_t65;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1850_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1__ctor_m1850(__this, method) (( void (*) (List_1_t319 *, const MethodInfo*))List_1__ctor_m1850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9858_gshared (List_1_t319 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9858(__this, ___capacity, method) (( void (*) (List_1_t319 *, int32_t, const MethodInfo*))List_1__ctor_m9858_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m9860_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9860(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9860_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2021_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2021(__this, method) (( Object_t* (*) (List_1_t319 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m2006_gshared (List_1_t319 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m2006(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t319 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m2006_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m2003_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m2003(__this, method) (( Object_t * (*) (List_1_t319 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m2003_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m2009_gshared (List_1_t319 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m2009(__this, ___item, method) (( int32_t (*) (List_1_t319 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m2009_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m2011_gshared (List_1_t319 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m2011(__this, ___item, method) (( bool (*) (List_1_t319 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m2011_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m2012_gshared (List_1_t319 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m2012(__this, ___item, method) (( int32_t (*) (List_1_t319 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m2012_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m2013_gshared (List_1_t319 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m2013(__this, ___index, ___item, method) (( void (*) (List_1_t319 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m2013_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m2014_gshared (List_1_t319 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m2014(__this, ___item, method) (( void (*) (List_1_t319 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m2014_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2016_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2016(__this, method) (( bool (*) (List_1_t319 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2016_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m2005_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m2005(__this, method) (( Object_t * (*) (List_1_t319 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m2005_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m2007_gshared (List_1_t319 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m2007(__this, ___index, method) (( Object_t * (*) (List_1_t319 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m2007_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m2008_gshared (List_1_t319 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m2008(__this, ___index, ___value, method) (( void (*) (List_1_t319 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m2008_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m2017_gshared (List_1_t319 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m2017(__this, ___item, method) (( void (*) (List_1_t319 *, Object_t *, const MethodInfo*))List_1_Add_m2017_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9875_gshared (List_1_t319 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9875(__this, ___newCount, method) (( void (*) (List_1_t319 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9875_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m2010_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1_Clear_m2010(__this, method) (( void (*) (List_1_t319 *, const MethodInfo*))List_1_Clear_m2010_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m2018_gshared (List_1_t319 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m2018(__this, ___item, method) (( bool (*) (List_1_t319 *, Object_t *, const MethodInfo*))List_1_Contains_m2018_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m2019_gshared (List_1_t319 * __this, ObjectU5BU5D_t65* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m2019(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t319 *, ObjectU5BU5D_t65*, int32_t, const MethodInfo*))List_1_CopyTo_m2019_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2121  List_1_GetEnumerator_m9879_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9879(__this, method) (( Enumerator_t2121  (*) (List_1_t319 *, const MethodInfo*))List_1_GetEnumerator_m9879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m2022_gshared (List_1_t319 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m2022(__this, ___item, method) (( int32_t (*) (List_1_t319 *, Object_t *, const MethodInfo*))List_1_IndexOf_m2022_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9882_gshared (List_1_t319 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9882(__this, ___start, ___delta, method) (( void (*) (List_1_t319 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9882_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9884_gshared (List_1_t319 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9884(__this, ___index, method) (( void (*) (List_1_t319 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m2023_gshared (List_1_t319 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m2023(__this, ___index, ___item, method) (( void (*) (List_1_t319 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m2023_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m2020_gshared (List_1_t319 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m2020(__this, ___item, method) (( bool (*) (List_1_t319 *, Object_t *, const MethodInfo*))List_1_Remove_m2020_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m2015_gshared (List_1_t319 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m2015(__this, ___index, method) (( void (*) (List_1_t319 *, int32_t, const MethodInfo*))List_1_RemoveAt_m2015_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t65* List_1_ToArray_m9889_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1_ToArray_m9889(__this, method) (( ObjectU5BU5D_t65* (*) (List_1_t319 *, const MethodInfo*))List_1_ToArray_m9889_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9891_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9891(__this, method) (( int32_t (*) (List_1_t319 *, const MethodInfo*))List_1_get_Capacity_m9891_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9893_gshared (List_1_t319 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9893(__this, ___value, method) (( void (*) (List_1_t319 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9893_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m2004_gshared (List_1_t319 * __this, const MethodInfo* method);
#define List_1_get_Count_m2004(__this, method) (( int32_t (*) (List_1_t319 *, const MethodInfo*))List_1_get_Count_m2004_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m2024_gshared (List_1_t319 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m2024(__this, ___index, method) (( Object_t * (*) (List_1_t319 *, int32_t, const MethodInfo*))List_1_get_Item_m2024_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m2025_gshared (List_1_t319 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m2025(__this, ___index, ___value, method) (( void (*) (List_1_t319 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m2025_gshared)(__this, ___index, ___value, method)
