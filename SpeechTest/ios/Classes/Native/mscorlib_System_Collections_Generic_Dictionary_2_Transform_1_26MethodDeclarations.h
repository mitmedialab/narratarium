#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2277;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t101;
// System.AsyncCallback
struct AsyncCallback_t102;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12096_gshared (Transform_1_t2277 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12096(__this, ___object, ___method, method) (( void (*) (Transform_1_t2277 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12096_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t754  Transform_1_Invoke_m12097_gshared (Transform_1_t2277 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12097(__this, ___key, ___value, method) (( DictionaryEntry_t754  (*) (Transform_1_t2277 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m12097_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12098_gshared (Transform_1_t2277 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t102 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12098(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2277 *, uint64_t, Object_t *, AsyncCallback_t102 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12098_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t754  Transform_1_EndInvoke_m12099_gshared (Transform_1_t2277 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12099(__this, ___result, method) (( DictionaryEntry_t754  (*) (Transform_1_t2277 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12099_gshared)(__this, ___result, method)
