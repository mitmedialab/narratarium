#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t118;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t2525;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t135;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" void List_1__ctor_m590_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1__ctor_m590(__this, method) (( void (*) (List_1_t118 *, const MethodInfo*))List_1__ctor_m590_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10712_gshared (List_1_t118 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10712(__this, ___capacity, method) (( void (*) (List_1_t118 *, int32_t, const MethodInfo*))List_1__ctor_m10712_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m10713_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10713(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10713_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10714_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10714(__this, method) (( Object_t* (*) (List_1_t118 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10714_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10715_gshared (List_1_t118 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10715(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t118 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10715_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10716_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10716(__this, method) (( Object_t * (*) (List_1_t118 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10716_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10717_gshared (List_1_t118 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10717(__this, ___item, method) (( int32_t (*) (List_1_t118 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10717_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10718_gshared (List_1_t118 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10718(__this, ___item, method) (( bool (*) (List_1_t118 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10718_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10719_gshared (List_1_t118 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10719(__this, ___item, method) (( int32_t (*) (List_1_t118 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10719_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10720_gshared (List_1_t118 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10720(__this, ___index, ___item, method) (( void (*) (List_1_t118 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10720_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10721_gshared (List_1_t118 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10721(__this, ___item, method) (( void (*) (List_1_t118 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10721_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10722_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10722(__this, method) (( bool (*) (List_1_t118 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10722_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10723_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10723(__this, method) (( Object_t * (*) (List_1_t118 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10723_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10724_gshared (List_1_t118 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10724(__this, ___index, method) (( Object_t * (*) (List_1_t118 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10724_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10725_gshared (List_1_t118 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10725(__this, ___index, ___value, method) (( void (*) (List_1_t118 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10725_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
extern "C" void List_1_Add_m10726_gshared (List_1_t118 * __this, Vector3_t73  ___item, const MethodInfo* method);
#define List_1_Add_m10726(__this, ___item, method) (( void (*) (List_1_t118 *, Vector3_t73 , const MethodInfo*))List_1_Add_m10726_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10727_gshared (List_1_t118 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10727(__this, ___newCount, method) (( void (*) (List_1_t118 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10727_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m10728_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1_Clear_m10728(__this, method) (( void (*) (List_1_t118 *, const MethodInfo*))List_1_Clear_m10728_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m10729_gshared (List_1_t118 * __this, Vector3_t73  ___item, const MethodInfo* method);
#define List_1_Contains_m10729(__this, ___item, method) (( bool (*) (List_1_t118 *, Vector3_t73 , const MethodInfo*))List_1_Contains_m10729_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10730_gshared (List_1_t118 * __this, Vector3U5BU5D_t135* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10730(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t118 *, Vector3U5BU5D_t135*, int32_t, const MethodInfo*))List_1_CopyTo_m10730_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t2179  List_1_GetEnumerator_m10731_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10731(__this, method) (( Enumerator_t2179  (*) (List_1_t118 *, const MethodInfo*))List_1_GetEnumerator_m10731_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10732_gshared (List_1_t118 * __this, Vector3_t73  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10732(__this, ___item, method) (( int32_t (*) (List_1_t118 *, Vector3_t73 , const MethodInfo*))List_1_IndexOf_m10732_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10733_gshared (List_1_t118 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10733(__this, ___start, ___delta, method) (( void (*) (List_1_t118 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10733_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10734_gshared (List_1_t118 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10734(__this, ___index, method) (( void (*) (List_1_t118 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10734_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10735_gshared (List_1_t118 * __this, int32_t ___index, Vector3_t73  ___item, const MethodInfo* method);
#define List_1_Insert_m10735(__this, ___index, ___item, method) (( void (*) (List_1_t118 *, int32_t, Vector3_t73 , const MethodInfo*))List_1_Insert_m10735_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m10736_gshared (List_1_t118 * __this, Vector3_t73  ___item, const MethodInfo* method);
#define List_1_Remove_m10736(__this, ___item, method) (( bool (*) (List_1_t118 *, Vector3_t73 , const MethodInfo*))List_1_Remove_m10736_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10737_gshared (List_1_t118 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10737(__this, ___index, method) (( void (*) (List_1_t118 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10737_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t135* List_1_ToArray_m580_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1_ToArray_m580(__this, method) (( Vector3U5BU5D_t135* (*) (List_1_t118 *, const MethodInfo*))List_1_ToArray_m580_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10738_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10738(__this, method) (( int32_t (*) (List_1_t118 *, const MethodInfo*))List_1_get_Capacity_m10738_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10739_gshared (List_1_t118 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10739(__this, ___value, method) (( void (*) (List_1_t118 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10739_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m10740_gshared (List_1_t118 * __this, const MethodInfo* method);
#define List_1_get_Count_m10740(__this, method) (( int32_t (*) (List_1_t118 *, const MethodInfo*))List_1_get_Count_m10740_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t73  List_1_get_Item_m10741_gshared (List_1_t118 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10741(__this, ___index, method) (( Vector3_t73  (*) (List_1_t118 *, int32_t, const MethodInfo*))List_1_get_Item_m10741_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10742_gshared (List_1_t118 * __this, int32_t ___index, Vector3_t73  ___value, const MethodInfo* method);
#define List_1_set_Item_m10742(__this, ___index, ___value, method) (( void (*) (List_1_t118 *, int32_t, Vector3_t73 , const MethodInfo*))List_1_set_Item_m10742_gshared)(__this, ___index, ___value, method)
