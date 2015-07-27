#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.ModuleResolveEventHandler
struct ModuleResolveEventHandler_t1217;
// System.Object
struct Object_t;
// System.Reflection.Module
struct Module_t1209;
// System.ResolveEventArgs
struct ResolveEventArgs_t1540;
// System.IAsyncResult
struct IAsyncResult_t101;
// System.AsyncCallback
struct AsyncCallback_t102;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.ModuleResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ModuleResolveEventHandler__ctor_m8723 (ModuleResolveEventHandler_t1217 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Module_t1209 * ModuleResolveEventHandler_Invoke_m8724 (ModuleResolveEventHandler_t1217 * __this, Object_t * ___sender, ResolveEventArgs_t1540 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Module_t1209 * pinvoke_delegate_wrapper_ModuleResolveEventHandler_t1217(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1540 * ___e);
// System.IAsyncResult System.Reflection.ModuleResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ModuleResolveEventHandler_BeginInvoke_m8725 (ModuleResolveEventHandler_t1217 * __this, Object_t * ___sender, ResolveEventArgs_t1540 * ___e, AsyncCallback_t102 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Module_t1209 * ModuleResolveEventHandler_EndInvoke_m8726 (ModuleResolveEventHandler_t1217 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
