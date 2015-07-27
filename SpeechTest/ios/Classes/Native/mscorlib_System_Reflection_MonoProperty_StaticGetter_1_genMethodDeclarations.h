#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2453;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t101;
// System.AsyncCallback
struct AsyncCallback_t102;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m13791_gshared (StaticGetter_1_t2453 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m13791(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2453 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m13791_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m13792_gshared (StaticGetter_1_t2453 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m13792(__this, method) (( Object_t * (*) (StaticGetter_1_t2453 *, const MethodInfo*))StaticGetter_1_Invoke_m13792_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m13793_gshared (StaticGetter_1_t2453 * __this, AsyncCallback_t102 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m13793(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2453 *, AsyncCallback_t102 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m13793_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m13794_gshared (StaticGetter_1_t2453 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m13794(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2453 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m13794_gshared)(__this, ___result, method)
