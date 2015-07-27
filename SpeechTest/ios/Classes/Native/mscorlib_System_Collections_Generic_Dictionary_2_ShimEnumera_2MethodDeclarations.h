#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2260;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2248;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11784_gshared (ShimEnumerator_t2260 * __this, Dictionary_2_t2248 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11784(__this, ___host, method) (( void (*) (ShimEnumerator_t2260 *, Dictionary_2_t2248 *, const MethodInfo*))ShimEnumerator__ctor_m11784_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11785_gshared (ShimEnumerator_t2260 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11785(__this, method) (( bool (*) (ShimEnumerator_t2260 *, const MethodInfo*))ShimEnumerator_MoveNext_m11785_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t754  ShimEnumerator_get_Entry_m11786_gshared (ShimEnumerator_t2260 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11786(__this, method) (( DictionaryEntry_t754  (*) (ShimEnumerator_t2260 *, const MethodInfo*))ShimEnumerator_get_Entry_m11786_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11787_gshared (ShimEnumerator_t2260 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11787(__this, method) (( Object_t * (*) (ShimEnumerator_t2260 *, const MethodInfo*))ShimEnumerator_get_Key_m11787_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11788_gshared (ShimEnumerator_t2260 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11788(__this, method) (( Object_t * (*) (ShimEnumerator_t2260 *, const MethodInfo*))ShimEnumerator_get_Value_m11788_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11789_gshared (ShimEnumerator_t2260 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11789(__this, method) (( Object_t * (*) (ShimEnumerator_t2260 *, const MethodInfo*))ShimEnumerator_get_Current_m11789_gshared)(__this, method)
