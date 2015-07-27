#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t2290;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2278;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12104_gshared (ShimEnumerator_t2290 * __this, Dictionary_2_t2278 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12104(__this, ___host, method) (( void (*) (ShimEnumerator_t2290 *, Dictionary_2_t2278 *, const MethodInfo*))ShimEnumerator__ctor_m12104_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12105_gshared (ShimEnumerator_t2290 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12105(__this, method) (( bool (*) (ShimEnumerator_t2290 *, const MethodInfo*))ShimEnumerator_MoveNext_m12105_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t754  ShimEnumerator_get_Entry_m12106_gshared (ShimEnumerator_t2290 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12106(__this, method) (( DictionaryEntry_t754  (*) (ShimEnumerator_t2290 *, const MethodInfo*))ShimEnumerator_get_Entry_m12106_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12107_gshared (ShimEnumerator_t2290 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12107(__this, method) (( Object_t * (*) (ShimEnumerator_t2290 *, const MethodInfo*))ShimEnumerator_get_Key_m12107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12108_gshared (ShimEnumerator_t2290 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12108(__this, method) (( Object_t * (*) (ShimEnumerator_t2290 *, const MethodInfo*))ShimEnumerator_get_Value_m12108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12109_gshared (ShimEnumerator_t2290 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12109(__this, method) (( Object_t * (*) (ShimEnumerator_t2290 *, const MethodInfo*))ShimEnumerator_get_Current_m12109_gshared)(__this, method)
