#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2166;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2155;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10632_gshared (ShimEnumerator_t2166 * __this, Dictionary_2_t2155 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10632(__this, ___host, method) (( void (*) (ShimEnumerator_t2166 *, Dictionary_2_t2155 *, const MethodInfo*))ShimEnumerator__ctor_m10632_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10633_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10633(__this, method) (( bool (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_MoveNext_m10633_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t754  ShimEnumerator_get_Entry_m10634_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10634(__this, method) (( DictionaryEntry_t754  (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Entry_m10634_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10635_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10635(__this, method) (( Object_t * (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Key_m10635_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10636_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10636(__this, method) (( Object_t * (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Value_m10636_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10637_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10637(__this, method) (( Object_t * (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Current_m10637_gshared)(__this, method)
