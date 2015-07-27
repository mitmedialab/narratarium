#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1198;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1586;
// System.Exception
struct Exception_t45;
// System.Reflection.AssemblyName
struct AssemblyName_t1222;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m6301 (AssemblyBuilder_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1586* AssemblyBuilder_GetModulesInternal_m6302 (AssemblyBuilder_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m6303 (AssemblyBuilder_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t45 * AssemblyBuilder_not_supported_m6304 (AssemblyBuilder_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1222 * AssemblyBuilder_UnprotectedGetName_m6305 (AssemblyBuilder_t1198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
