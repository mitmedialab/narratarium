#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2428;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Object[]
struct ObjectU5BU5D_t65;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t91;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t548;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m13645_gshared (Collection_1_t2428 * __this, const MethodInfo* method);
#define Collection_1__ctor_m13645(__this, method) (( void (*) (Collection_1_t2428 *, const MethodInfo*))Collection_1__ctor_m13645_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13646_gshared (Collection_1_t2428 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13646(__this, method) (( bool (*) (Collection_1_t2428 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13646_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m13647_gshared (Collection_1_t2428 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m13647(__this, ___array, ___index, method) (( void (*) (Collection_1_t2428 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m13647_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m13648_gshared (Collection_1_t2428 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m13648(__this, method) (( Object_t * (*) (Collection_1_t2428 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m13648_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m13649_gshared (Collection_1_t2428 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m13649(__this, ___value, method) (( int32_t (*) (Collection_1_t2428 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m13649_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m13650_gshared (Collection_1_t2428 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m13650(__this, ___value, method) (( bool (*) (Collection_1_t2428 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m13650_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m13651_gshared (Collection_1_t2428 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m13651(__this, ___value, method) (( int32_t (*) (Collection_1_t2428 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m13651_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m13652_gshared (Collection_1_t2428 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m13652(__this, ___index, ___value, method) (( void (*) (Collection_1_t2428 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m13652_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m13653_gshared (Collection_1_t2428 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m13653(__this, ___value, method) (( void (*) (Collection_1_t2428 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m13653_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m13654_gshared (Collection_1_t2428 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m13654(__this, method) (( Object_t * (*) (Collection_1_t2428 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m13654_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m13655_gshared (Collection_1_t2428 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m13655(__this, ___index, method) (( Object_t * (*) (Collection_1_t2428 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m13655_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m13656_gshared (Collection_1_t2428 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m13656(__this, ___index, ___value, method) (( void (*) (Collection_1_t2428 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m13656_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m13657_gshared (Collection_1_t2428 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m13657(__this, ___item, method) (( void (*) (Collection_1_t2428 *, Object_t *, const MethodInfo*))Collection_1_Add_m13657_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m13658_gshared (Collection_1_t2428 * __this, const MethodInfo* method);
#define Collection_1_Clear_m13658(__this, method) (( void (*) (Collection_1_t2428 *, const MethodInfo*))Collection_1_Clear_m13658_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m13659_gshared (Collection_1_t2428 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m13659(__this, method) (( void (*) (Collection_1_t2428 *, const MethodInfo*))Collection_1_ClearItems_m13659_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m13660_gshared (Collection_1_t2428 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m13660(__this, ___item, method) (( bool (*) (Collection_1_t2428 *, Object_t *, const MethodInfo*))Collection_1_Contains_m13660_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m13661_gshared (Collection_1_t2428 * __this, ObjectU5BU5D_t65* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m13661(__this, ___array, ___index, method) (( void (*) (Collection_1_t2428 *, ObjectU5BU5D_t65*, int32_t, const MethodInfo*))Collection_1_CopyTo_m13661_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m13662_gshared (Collection_1_t2428 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m13662(__this, method) (( Object_t* (*) (Collection_1_t2428 *, const MethodInfo*))Collection_1_GetEnumerator_m13662_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m13663_gshared (Collection_1_t2428 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m13663(__this, ___item, method) (( int32_t (*) (Collection_1_t2428 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m13663_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m13664_gshared (Collection_1_t2428 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m13664(__this, ___index, ___item, method) (( void (*) (Collection_1_t2428 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m13664_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m13665_gshared (Collection_1_t2428 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m13665(__this, ___index, ___item, method) (( void (*) (Collection_1_t2428 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m13665_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m13666_gshared (Collection_1_t2428 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m13666(__this, ___item, method) (( bool (*) (Collection_1_t2428 *, Object_t *, const MethodInfo*))Collection_1_Remove_m13666_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m13667_gshared (Collection_1_t2428 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m13667(__this, ___index, method) (( void (*) (Collection_1_t2428 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m13667_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m13668_gshared (Collection_1_t2428 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m13668(__this, ___index, method) (( void (*) (Collection_1_t2428 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m13668_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m13669_gshared (Collection_1_t2428 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m13669(__this, method) (( int32_t (*) (Collection_1_t2428 *, const MethodInfo*))Collection_1_get_Count_m13669_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m13670_gshared (Collection_1_t2428 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m13670(__this, ___index, method) (( Object_t * (*) (Collection_1_t2428 *, int32_t, const MethodInfo*))Collection_1_get_Item_m13670_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m13671_gshared (Collection_1_t2428 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m13671(__this, ___index, ___value, method) (( void (*) (Collection_1_t2428 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m13671_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m13672_gshared (Collection_1_t2428 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m13672(__this, ___index, ___item, method) (( void (*) (Collection_1_t2428 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m13672_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m13673_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m13673(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m13673_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m13674_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m13674(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m13674_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m13675_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m13675(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m13675_gshared)(__this /* static, unused */, ___list, method)
