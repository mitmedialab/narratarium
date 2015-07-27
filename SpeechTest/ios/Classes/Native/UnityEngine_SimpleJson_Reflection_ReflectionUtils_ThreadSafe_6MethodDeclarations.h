#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2304;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t422;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2302;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2324;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2125;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m12308_gshared (ThreadSafeDictionary_2_t2304 * __this, ThreadSafeDictionaryValueFactory_2_t2302 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m12308(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2304 *, ThreadSafeDictionaryValueFactory_2_t2302 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m12308_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m12310_gshared (ThreadSafeDictionary_2_t2304 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m12310(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2304 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m12310_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m12312_gshared (ThreadSafeDictionary_2_t2304 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m12312(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2304 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m12312_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m12314_gshared (ThreadSafeDictionary_2_t2304 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m12314(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2304 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m12314_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m12316_gshared (ThreadSafeDictionary_2_t2304 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m12316(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2304 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m12316_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m12318_gshared (ThreadSafeDictionary_2_t2304 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m12318(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2304 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m12318_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m12320_gshared (ThreadSafeDictionary_2_t2304 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m12320(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2304 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m12320_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m12322_gshared (ThreadSafeDictionary_2_t2304 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m12322(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2304 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m12322_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m12324_gshared (ThreadSafeDictionary_2_t2304 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m12324(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2304 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m12324_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m12326_gshared (ThreadSafeDictionary_2_t2304 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m12326(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2304 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m12326_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m12328_gshared (ThreadSafeDictionary_2_t2304 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m12328(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2304 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m12328_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m12330_gshared (ThreadSafeDictionary_2_t2304 * __this, KeyValuePair_2_t58  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m12330(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2304 *, KeyValuePair_2_t58 , const MethodInfo*))ThreadSafeDictionary_2_Add_m12330_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m12332_gshared (ThreadSafeDictionary_2_t2304 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m12332(__this, method) (( void (*) (ThreadSafeDictionary_2_t2304 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m12332_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m12334_gshared (ThreadSafeDictionary_2_t2304 * __this, KeyValuePair_2_t58  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m12334(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2304 *, KeyValuePair_2_t58 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m12334_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m12336_gshared (ThreadSafeDictionary_2_t2304 * __this, KeyValuePair_2U5BU5D_t2324* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m12336(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2304 *, KeyValuePair_2U5BU5D_t2324*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m12336_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m12338_gshared (ThreadSafeDictionary_2_t2304 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m12338(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2304 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m12338_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m12340_gshared (ThreadSafeDictionary_2_t2304 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m12340(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2304 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m12340_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m12342_gshared (ThreadSafeDictionary_2_t2304 * __this, KeyValuePair_2_t58  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m12342(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2304 *, KeyValuePair_2_t58 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m12342_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m12344_gshared (ThreadSafeDictionary_2_t2304 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m12344(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2304 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m12344_gshared)(__this, method)
