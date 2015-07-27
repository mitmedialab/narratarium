#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t2399;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t690;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13475_gshared (Enumerator_t2399 * __this, Dictionary_2_t690 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13475(__this, ___dictionary, method) (( void (*) (Enumerator_t2399 *, Dictionary_2_t690 *, const MethodInfo*))Enumerator__ctor_m13475_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13476_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13476(__this, method) (( Object_t * (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13476_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t754  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13477_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13477(__this, method) (( DictionaryEntry_t754  (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13477_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13478_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13478(__this, method) (( Object_t * (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13478_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13479_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13479(__this, method) (( Object_t * (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13480_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13480(__this, method) (( bool (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_MoveNext_m13480_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2395  Enumerator_get_Current_m13481_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13481(__this, method) (( KeyValuePair_2_t2395  (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_get_Current_m13481_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13482_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13482(__this, method) (( int32_t (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_get_CurrentKey_m13482_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m13483_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13483(__this, method) (( int32_t (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_get_CurrentValue_m13483_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m13484_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13484(__this, method) (( void (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_VerifyState_m13484_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13485_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13485(__this, method) (( void (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_VerifyCurrent_m13485_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m13486_gshared (Enumerator_t2399 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13486(__this, method) (( void (*) (Enumerator_t2399 *, const MethodInfo*))Enumerator_Dispose_m13486_gshared)(__this, method)
