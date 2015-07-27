#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2105;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2098;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9721_gshared (Enumerator_t2105 * __this, Dictionary_2_t2098 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9721(__this, ___dictionary, method) (( void (*) (Enumerator_t2105 *, Dictionary_2_t2098 *, const MethodInfo*))Enumerator__ctor_m9721_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9722_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9722(__this, method) (( Object_t * (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9722_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t754  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9723_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9723(__this, method) (( DictionaryEntry_t754  (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9723_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9724_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9724(__this, method) (( Object_t * (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9724_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9725_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9725(__this, method) (( Object_t * (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9725_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9726_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9726(__this, method) (( bool (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_MoveNext_m9726_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t58  Enumerator_get_Current_m9727_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9727(__this, method) (( KeyValuePair_2_t58  (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_get_Current_m9727_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9728_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9728(__this, method) (( Object_t * (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_get_CurrentKey_m9728_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9729_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9729(__this, method) (( Object_t * (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_get_CurrentValue_m9729_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9730_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9730(__this, method) (( void (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_VerifyState_m9730_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9731_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9731(__this, method) (( void (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_VerifyCurrent_m9731_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9732_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9732(__this, method) (( void (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_Dispose_m9732_gshared)(__this, method)
