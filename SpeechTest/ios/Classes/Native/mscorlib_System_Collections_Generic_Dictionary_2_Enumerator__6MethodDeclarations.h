#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2160;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2155;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10586_gshared (Enumerator_t2160 * __this, Dictionary_2_t2155 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10586(__this, ___dictionary, method) (( void (*) (Enumerator_t2160 *, Dictionary_2_t2155 *, const MethodInfo*))Enumerator__ctor_m10586_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10587_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10587(__this, method) (( Object_t * (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10587_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t754  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10588_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10588(__this, method) (( DictionaryEntry_t754  (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10588_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10589_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10589(__this, method) (( Object_t * (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10589_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10590_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10590(__this, method) (( Object_t * (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10590_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10591_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10591(__this, method) (( bool (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_MoveNext_m10591_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2156  Enumerator_get_Current_m10592_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10592(__this, method) (( KeyValuePair_2_t2156  (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_get_Current_m10592_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m10593_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10593(__this, method) (( int32_t (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_get_CurrentKey_m10593_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10594_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10594(__this, method) (( Object_t * (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_get_CurrentValue_m10594_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10595_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10595(__this, method) (( void (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_VerifyState_m10595_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10596_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10596(__this, method) (( void (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_VerifyCurrent_m10596_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10597_gshared (Enumerator_t2160 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10597(__this, method) (( void (*) (Enumerator_t2160 *, const MethodInfo*))Enumerator_Dispose_m10597_gshared)(__this, method)
