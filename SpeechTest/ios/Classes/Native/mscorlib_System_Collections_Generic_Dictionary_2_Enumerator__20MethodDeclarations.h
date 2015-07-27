#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t2376;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2371;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13266_gshared (Enumerator_t2376 * __this, Dictionary_2_t2371 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13266(__this, ___dictionary, method) (( void (*) (Enumerator_t2376 *, Dictionary_2_t2371 *, const MethodInfo*))Enumerator__ctor_m13266_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13267_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13267(__this, method) (( Object_t * (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13267_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t754  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13268_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13268(__this, method) (( DictionaryEntry_t754  (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13268_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13269_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13269(__this, method) (( Object_t * (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13269_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13270_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13270(__this, method) (( Object_t * (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13270_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13271_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13271(__this, method) (( bool (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_MoveNext_m13271_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t2372  Enumerator_get_Current_m13272_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13272(__this, method) (( KeyValuePair_2_t2372  (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_get_Current_m13272_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13273_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13273(__this, method) (( Object_t * (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_get_CurrentKey_m13273_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m13274_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13274(__this, method) (( uint8_t (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_get_CurrentValue_m13274_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m13275_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13275(__this, method) (( void (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_VerifyState_m13275_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13276_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13276(__this, method) (( void (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_VerifyCurrent_m13276_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m13277_gshared (Enumerator_t2376 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13277(__this, method) (( void (*) (Enumerator_t2376 *, const MethodInfo*))Enumerator_Dispose_m13277_gshared)(__this, method)
