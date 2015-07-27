#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t117;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2522;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Int32[]
struct Int32U5BU5D_t136;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m589_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1__ctor_m589(__this, method) (( void (*) (List_1_t117 *, const MethodInfo*))List_1__ctor_m589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10762_gshared (List_1_t117 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10762(__this, ___capacity, method) (( void (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1__ctor_m10762_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m10763_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10763(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10763_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10764_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10764(__this, method) (( Object_t* (*) (List_1_t117 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10764_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10765_gshared (List_1_t117 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10765(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t117 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10765_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10766_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10766(__this, method) (( Object_t * (*) (List_1_t117 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10766_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10767_gshared (List_1_t117 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10767(__this, ___item, method) (( int32_t (*) (List_1_t117 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10767_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10768_gshared (List_1_t117 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10768(__this, ___item, method) (( bool (*) (List_1_t117 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10768_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10769_gshared (List_1_t117 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10769(__this, ___item, method) (( int32_t (*) (List_1_t117 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10769_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10770_gshared (List_1_t117 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10770(__this, ___index, ___item, method) (( void (*) (List_1_t117 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10770_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10771_gshared (List_1_t117 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10771(__this, ___item, method) (( void (*) (List_1_t117 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10771_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10772_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10772(__this, method) (( bool (*) (List_1_t117 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10772_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10773_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10773(__this, method) (( Object_t * (*) (List_1_t117 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10773_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10774_gshared (List_1_t117 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10774(__this, ___index, method) (( Object_t * (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10774_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10775_gshared (List_1_t117 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10775(__this, ___index, ___value, method) (( void (*) (List_1_t117 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10775_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m10776_gshared (List_1_t117 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m10776(__this, ___item, method) (( void (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_Add_m10776_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10777_gshared (List_1_t117 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10777(__this, ___newCount, method) (( void (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10777_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m10778_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1_Clear_m10778(__this, method) (( void (*) (List_1_t117 *, const MethodInfo*))List_1_Clear_m10778_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m10779_gshared (List_1_t117 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m10779(__this, ___item, method) (( bool (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_Contains_m10779_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10780_gshared (List_1_t117 * __this, Int32U5BU5D_t136* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10780(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t117 *, Int32U5BU5D_t136*, int32_t, const MethodInfo*))List_1_CopyTo_m10780_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2182  List_1_GetEnumerator_m10781_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10781(__this, method) (( Enumerator_t2182  (*) (List_1_t117 *, const MethodInfo*))List_1_GetEnumerator_m10781_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10782_gshared (List_1_t117 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m10782(__this, ___item, method) (( int32_t (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_IndexOf_m10782_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10783_gshared (List_1_t117 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10783(__this, ___start, ___delta, method) (( void (*) (List_1_t117 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10783_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10784_gshared (List_1_t117 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10784(__this, ___index, method) (( void (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10784_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10785_gshared (List_1_t117 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m10785(__this, ___index, ___item, method) (( void (*) (List_1_t117 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m10785_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m10786_gshared (List_1_t117 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m10786(__this, ___item, method) (( bool (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_Remove_m10786_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10787_gshared (List_1_t117 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10787(__this, ___index, method) (( void (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10787_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t136* List_1_ToArray_m581_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1_ToArray_m581(__this, method) (( Int32U5BU5D_t136* (*) (List_1_t117 *, const MethodInfo*))List_1_ToArray_m581_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10788_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10788(__this, method) (( int32_t (*) (List_1_t117 *, const MethodInfo*))List_1_get_Capacity_m10788_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10789_gshared (List_1_t117 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10789(__this, ___value, method) (( void (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10789_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m10790_gshared (List_1_t117 * __this, const MethodInfo* method);
#define List_1_get_Count_m10790(__this, method) (( int32_t (*) (List_1_t117 *, const MethodInfo*))List_1_get_Count_m10790_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m10791_gshared (List_1_t117 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10791(__this, ___index, method) (( int32_t (*) (List_1_t117 *, int32_t, const MethodInfo*))List_1_get_Item_m10791_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10792_gshared (List_1_t117 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m10792(__this, ___index, ___value, method) (( void (*) (List_1_t117 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m10792_gshared)(__this, ___index, ___value, method)
