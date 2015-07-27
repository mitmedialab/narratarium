#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2382;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2371;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13312_gshared (ShimEnumerator_t2382 * __this, Dictionary_2_t2371 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13312(__this, ___host, method) (( void (*) (ShimEnumerator_t2382 *, Dictionary_2_t2371 *, const MethodInfo*))ShimEnumerator__ctor_m13312_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13313_gshared (ShimEnumerator_t2382 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13313(__this, method) (( bool (*) (ShimEnumerator_t2382 *, const MethodInfo*))ShimEnumerator_MoveNext_m13313_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t754  ShimEnumerator_get_Entry_m13314_gshared (ShimEnumerator_t2382 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13314(__this, method) (( DictionaryEntry_t754  (*) (ShimEnumerator_t2382 *, const MethodInfo*))ShimEnumerator_get_Entry_m13314_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13315_gshared (ShimEnumerator_t2382 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13315(__this, method) (( Object_t * (*) (ShimEnumerator_t2382 *, const MethodInfo*))ShimEnumerator_get_Key_m13315_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13316_gshared (ShimEnumerator_t2382 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13316(__this, method) (( Object_t * (*) (ShimEnumerator_t2382 *, const MethodInfo*))ShimEnumerator_get_Value_m13316_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13317_gshared (ShimEnumerator_t2382 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13317(__this, method) (( Object_t * (*) (ShimEnumerator_t2382 *, const MethodInfo*))ShimEnumerator_get_Current_m13317_gshared)(__this, method)
