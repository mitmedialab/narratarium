#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t2284;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2278;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12058_gshared (Enumerator_t2284 * __this, Dictionary_2_t2278 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12058(__this, ___dictionary, method) (( void (*) (Enumerator_t2284 *, Dictionary_2_t2278 *, const MethodInfo*))Enumerator__ctor_m12058_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12059_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12059(__this, method) (( Object_t * (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12059_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t754  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12060_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12060(__this, method) (( DictionaryEntry_t754  (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12061_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12061(__this, method) (( Object_t * (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12061_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12062_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12062(__this, method) (( Object_t * (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12062_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12063_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12063(__this, method) (( bool (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_MoveNext_m12063_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2279  Enumerator_get_Current_m12064_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12064(__this, method) (( KeyValuePair_2_t2279  (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_get_Current_m12064_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m12065_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12065(__this, method) (( uint64_t (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_get_CurrentKey_m12065_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12066_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12066(__this, method) (( Object_t * (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_get_CurrentValue_m12066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12067_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12067(__this, method) (( void (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_VerifyState_m12067_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12068_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12068(__this, method) (( void (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_VerifyCurrent_m12068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12069_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12069(__this, method) (( void (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_Dispose_m12069_gshared)(__this, method)
