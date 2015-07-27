#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2369;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t101;
// System.AsyncCallback
struct AsyncCallback_t102;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_42MethodDeclarations.h"
#define Transform_1__ctor_m13329(__this, ___object, ___method, method) (( void (*) (Transform_1_t2369 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13304_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13330(__this, ___key, ___value, method) (( DictionaryEntry_t754  (*) (Transform_1_t2369 *, String_t*, bool, const MethodInfo*))Transform_1_Invoke_m13305_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13331(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2369 *, String_t*, bool, AsyncCallback_t102 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13306_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13332(__this, ___result, method) (( DictionaryEntry_t754  (*) (Transform_1_t2369 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13307_gshared)(__this, ___result, method)
