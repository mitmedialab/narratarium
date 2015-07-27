#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2222;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2211;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11327_gshared (ShimEnumerator_t2222 * __this, Dictionary_2_t2211 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11327(__this, ___host, method) (( void (*) (ShimEnumerator_t2222 *, Dictionary_2_t2211 *, const MethodInfo*))ShimEnumerator__ctor_m11327_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11328_gshared (ShimEnumerator_t2222 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11328(__this, method) (( bool (*) (ShimEnumerator_t2222 *, const MethodInfo*))ShimEnumerator_MoveNext_m11328_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t754  ShimEnumerator_get_Entry_m11329_gshared (ShimEnumerator_t2222 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11329(__this, method) (( DictionaryEntry_t754  (*) (ShimEnumerator_t2222 *, const MethodInfo*))ShimEnumerator_get_Entry_m11329_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11330_gshared (ShimEnumerator_t2222 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11330(__this, method) (( Object_t * (*) (ShimEnumerator_t2222 *, const MethodInfo*))ShimEnumerator_get_Key_m11330_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11331_gshared (ShimEnumerator_t2222 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11331(__this, method) (( Object_t * (*) (ShimEnumerator_t2222 *, const MethodInfo*))ShimEnumerator_get_Value_m11331_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11332_gshared (ShimEnumerator_t2222 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11332(__this, method) (( Object_t * (*) (ShimEnumerator_t2222 *, const MethodInfo*))ShimEnumerator_get_Current_m11332_gshared)(__this, method)
