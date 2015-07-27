#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
struct Func_2_t2124;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t101;
// System.AsyncCallback
struct AsyncCallback_t102;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m9996_gshared (Func_2_t2124 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m9996(__this, ___object, ___method, method) (( void (*) (Func_2_t2124 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m9996_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m9998_gshared (Func_2_t2124 * __this, KeyValuePair_2_t58  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m9998(__this, ___arg1, method) (( uint8_t (*) (Func_2_t2124 *, KeyValuePair_2_t58 , const MethodInfo*))Func_2_Invoke_m9998_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m10000_gshared (Func_2_t2124 * __this, KeyValuePair_2_t58  ___arg1, AsyncCallback_t102 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m10000(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2124 *, KeyValuePair_2_t58 , AsyncCallback_t102 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m10000_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m10002_gshared (Func_2_t2124 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m10002(__this, ___result, method) (( uint8_t (*) (Func_2_t2124 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m10002_gshared)(__this, ___result, method)
