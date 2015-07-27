#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2216;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2211;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11281_gshared (Enumerator_t2216 * __this, Dictionary_2_t2211 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11281(__this, ___dictionary, method) (( void (*) (Enumerator_t2216 *, Dictionary_2_t2211 *, const MethodInfo*))Enumerator__ctor_m11281_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11282_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11282(__this, method) (( Object_t * (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11282_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t754  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11283_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11283(__this, method) (( DictionaryEntry_t754  (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11283_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11284_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11284(__this, method) (( Object_t * (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11284_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11285_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11285(__this, method) (( Object_t * (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11285_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11286_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11286(__this, method) (( bool (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_MoveNext_m11286_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2212  Enumerator_get_Current_m11287_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11287(__this, method) (( KeyValuePair_2_t2212  (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_get_Current_m11287_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11288_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11288(__this, method) (( Object_t * (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_get_CurrentKey_m11288_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11289_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11289(__this, method) (( int32_t (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_get_CurrentValue_m11289_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m11290_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11290(__this, method) (( void (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_VerifyState_m11290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11291_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11291(__this, method) (( void (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_VerifyCurrent_m11291_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11292_gshared (Enumerator_t2216 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11292(__this, method) (( void (*) (Enumerator_t2216 *, const MethodInfo*))Enumerator_Dispose_m11292_gshared)(__this, method)
