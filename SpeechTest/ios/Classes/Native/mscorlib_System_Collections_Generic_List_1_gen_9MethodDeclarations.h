#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t283;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2550;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t413;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m11458_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1__ctor_m11458(__this, method) (( void (*) (List_1_t283 *, const MethodInfo*))List_1__ctor_m11458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1825_gshared (List_1_t283 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1825(__this, ___capacity, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1__ctor_m1825_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m11459_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11459(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11459_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11460_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11460(__this, method) (( Object_t* (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11460_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11461_gshared (List_1_t283 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11461(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t283 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11461_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11462_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11462(__this, method) (( Object_t * (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11462_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11463_gshared (List_1_t283 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11463(__this, ___item, method) (( int32_t (*) (List_1_t283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11463_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11464_gshared (List_1_t283 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11464(__this, ___item, method) (( bool (*) (List_1_t283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11464_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11465_gshared (List_1_t283 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11465(__this, ___item, method) (( int32_t (*) (List_1_t283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11465_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11466_gshared (List_1_t283 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11466(__this, ___index, ___item, method) (( void (*) (List_1_t283 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11466_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11467_gshared (List_1_t283 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11467(__this, ___item, method) (( void (*) (List_1_t283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11467_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11468_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11468(__this, method) (( bool (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11468_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11469_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11469(__this, method) (( Object_t * (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11469_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11470_gshared (List_1_t283 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11470(__this, ___index, method) (( Object_t * (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11470_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11471_gshared (List_1_t283 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11471(__this, ___index, ___value, method) (( void (*) (List_1_t283 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11471_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m11472_gshared (List_1_t283 * __this, UIVertex_t290  ___item, const MethodInfo* method);
#define List_1_Add_m11472(__this, ___item, method) (( void (*) (List_1_t283 *, UIVertex_t290 , const MethodInfo*))List_1_Add_m11472_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11473_gshared (List_1_t283 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11473(__this, ___newCount, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11473_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m11474_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_Clear_m11474(__this, method) (( void (*) (List_1_t283 *, const MethodInfo*))List_1_Clear_m11474_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m11475_gshared (List_1_t283 * __this, UIVertex_t290  ___item, const MethodInfo* method);
#define List_1_Contains_m11475(__this, ___item, method) (( bool (*) (List_1_t283 *, UIVertex_t290 , const MethodInfo*))List_1_Contains_m11475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11476_gshared (List_1_t283 * __this, UIVertexU5BU5D_t413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11476(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t283 *, UIVertexU5BU5D_t413*, int32_t, const MethodInfo*))List_1_CopyTo_m11476_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2235  List_1_GetEnumerator_m11477_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11477(__this, method) (( Enumerator_t2235  (*) (List_1_t283 *, const MethodInfo*))List_1_GetEnumerator_m11477_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11478_gshared (List_1_t283 * __this, UIVertex_t290  ___item, const MethodInfo* method);
#define List_1_IndexOf_m11478(__this, ___item, method) (( int32_t (*) (List_1_t283 *, UIVertex_t290 , const MethodInfo*))List_1_IndexOf_m11478_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11479_gshared (List_1_t283 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11479(__this, ___start, ___delta, method) (( void (*) (List_1_t283 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11479_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11480_gshared (List_1_t283 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11480(__this, ___index, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11480_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11481_gshared (List_1_t283 * __this, int32_t ___index, UIVertex_t290  ___item, const MethodInfo* method);
#define List_1_Insert_m11481(__this, ___index, ___item, method) (( void (*) (List_1_t283 *, int32_t, UIVertex_t290 , const MethodInfo*))List_1_Insert_m11481_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m11482_gshared (List_1_t283 * __this, UIVertex_t290  ___item, const MethodInfo* method);
#define List_1_Remove_m11482(__this, ___item, method) (( bool (*) (List_1_t283 *, UIVertex_t290 , const MethodInfo*))List_1_Remove_m11482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11483_gshared (List_1_t283 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11483(__this, ___index, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11483_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t413* List_1_ToArray_m11484_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_ToArray_m11484(__this, method) (( UIVertexU5BU5D_t413* (*) (List_1_t283 *, const MethodInfo*))List_1_ToArray_m11484_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11485_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11485(__this, method) (( int32_t (*) (List_1_t283 *, const MethodInfo*))List_1_get_Capacity_m11485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11486_gshared (List_1_t283 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11486(__this, ___value, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11486_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m11487_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_get_Count_m11487(__this, method) (( int32_t (*) (List_1_t283 *, const MethodInfo*))List_1_get_Count_m11487_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t290  List_1_get_Item_m11488_gshared (List_1_t283 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11488(__this, ___index, method) (( UIVertex_t290  (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_get_Item_m11488_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11489_gshared (List_1_t283 * __this, int32_t ___index, UIVertex_t290  ___value, const MethodInfo* method);
#define List_1_set_Item_m11489(__this, ___index, ___value, method) (( void (*) (List_1_t283 *, int32_t, UIVertex_t290 , const MethodInfo*))List_1_set_Item_m11489_gshared)(__this, ___index, ___value, method)
