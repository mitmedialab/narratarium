#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2254;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2248;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11738_gshared (Enumerator_t2254 * __this, Dictionary_2_t2248 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11738(__this, ___dictionary, method) (( void (*) (Enumerator_t2254 *, Dictionary_2_t2248 *, const MethodInfo*))Enumerator__ctor_m11738_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11739_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11739(__this, method) (( Object_t * (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11739_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t754  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11740_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11740(__this, method) (( DictionaryEntry_t754  (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11740_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11741_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11741(__this, method) (( Object_t * (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11741_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11742_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11742(__this, method) (( Object_t * (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11742_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11743_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11743(__this, method) (( bool (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_MoveNext_m11743_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2249  Enumerator_get_Current_m11744_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11744(__this, method) (( KeyValuePair_2_t2249  (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_get_Current_m11744_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11745_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11745(__this, method) (( Object_t * (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_get_CurrentKey_m11745_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m11746_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11746(__this, method) (( int64_t (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_get_CurrentValue_m11746_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m11747_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11747(__this, method) (( void (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_VerifyState_m11747_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11748_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11748(__this, method) (( void (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_VerifyCurrent_m11748_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m11749_gshared (Enumerator_t2254 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11749(__this, method) (( void (*) (Enumerator_t2254 *, const MethodInfo*))Enumerator_Dispose_m11749_gshared)(__this, method)
