#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2146;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t433;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t91;
// System.Object[]
struct ObjectU5BU5D_t65;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2096;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t547;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m10288_gshared (HashSet_1_t2146 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m10288(__this, method) (( void (*) (HashSet_1_t2146 *, const MethodInfo*))HashSet_1__ctor_m10288_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m10290_gshared (HashSet_1_t2146 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m10290(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2146 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))HashSet_1__ctor_m10290_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10292_gshared (HashSet_1_t2146 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10292(__this, method) (( Object_t* (*) (HashSet_1_t2146 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10292_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10294_gshared (HashSet_1_t2146 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10294(__this, method) (( bool (*) (HashSet_1_t2146 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10294_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m10296_gshared (HashSet_1_t2146 * __this, ObjectU5BU5D_t65* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m10296(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2146 *, ObjectU5BU5D_t65*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m10296_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10298_gshared (HashSet_1_t2146 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10298(__this, ___item, method) (( void (*) (HashSet_1_t2146 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10298_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m10300_gshared (HashSet_1_t2146 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m10300(__this, method) (( Object_t * (*) (HashSet_1_t2146 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m10300_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m10302_gshared (HashSet_1_t2146 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m10302(__this, method) (( int32_t (*) (HashSet_1_t2146 *, const MethodInfo*))HashSet_1_get_Count_m10302_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m10304_gshared (HashSet_1_t2146 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m10304(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2146 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m10304_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m10306_gshared (HashSet_1_t2146 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m10306(__this, ___size, method) (( void (*) (HashSet_1_t2146 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m10306_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m10308_gshared (HashSet_1_t2146 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m10308(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2146 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m10308_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m10310_gshared (HashSet_1_t2146 * __this, ObjectU5BU5D_t65* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m10310(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2146 *, ObjectU5BU5D_t65*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m10310_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m10312_gshared (HashSet_1_t2146 * __this, ObjectU5BU5D_t65* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m10312(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2146 *, ObjectU5BU5D_t65*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m10312_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m10314_gshared (HashSet_1_t2146 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m10314(__this, method) (( void (*) (HashSet_1_t2146 *, const MethodInfo*))HashSet_1_Resize_m10314_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m10316_gshared (HashSet_1_t2146 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m10316(__this, ___index, method) (( int32_t (*) (HashSet_1_t2146 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m10316_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m10318_gshared (HashSet_1_t2146 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m10318(__this, ___item, method) (( int32_t (*) (HashSet_1_t2146 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m10318_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m10319_gshared (HashSet_1_t2146 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m10319(__this, ___item, method) (( bool (*) (HashSet_1_t2146 *, Object_t *, const MethodInfo*))HashSet_1_Add_m10319_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m10321_gshared (HashSet_1_t2146 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m10321(__this, method) (( void (*) (HashSet_1_t2146 *, const MethodInfo*))HashSet_1_Clear_m10321_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m10323_gshared (HashSet_1_t2146 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m10323(__this, ___item, method) (( bool (*) (HashSet_1_t2146 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m10323_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m10325_gshared (HashSet_1_t2146 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m10325(__this, ___item, method) (( bool (*) (HashSet_1_t2146 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m10325_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1_UnionWith_m10326_gshared (HashSet_1_t2146 * __this, Object_t* ___other, const MethodInfo* method);
#define HashSet_1_UnionWith_m10326(__this, ___other, method) (( void (*) (HashSet_1_t2146 *, Object_t*, const MethodInfo*))HashSet_1_UnionWith_m10326_gshared)(__this, ___other, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m10328_gshared (HashSet_1_t2146 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m10328(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2146 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))HashSet_1_GetObjectData_m10328_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m10330_gshared (HashSet_1_t2146 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m10330(__this, ___sender, method) (( void (*) (HashSet_1_t2146 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m10330_gshared)(__this, ___sender, method)
