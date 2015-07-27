#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t60;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t101;
// System.AsyncCallback
struct AsyncCallback_t102;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_0MethodDeclarations.h"
#define Func_2__ctor_m255(__this, ___object, ___method, method) (( void (*) (Func_2_t60 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m9996_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m9997(__this, ___arg1, method) (( bool (*) (Func_2_t60 *, KeyValuePair_2_t14 , const MethodInfo*))Func_2_Invoke_m9998_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m9999(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t60 *, KeyValuePair_2_t14 , AsyncCallback_t102 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m10000_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m10001(__this, ___result, method) (( bool (*) (Func_2_t60 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m10002_gshared)(__this, ___result, method)
