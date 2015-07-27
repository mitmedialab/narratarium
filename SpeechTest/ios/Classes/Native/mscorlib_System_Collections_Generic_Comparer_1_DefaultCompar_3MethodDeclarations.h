#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2474;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m13921_gshared (DefaultComparer_t2474 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13921(__this, method) (( void (*) (DefaultComparer_t2474 *, const MethodInfo*))DefaultComparer__ctor_m13921_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m13922_gshared (DefaultComparer_t2474 * __this, Guid_t62  ___x, Guid_t62  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m13922(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2474 *, Guid_t62 , Guid_t62 , const MethodInfo*))DefaultComparer_Compare_m13922_gshared)(__this, ___x, ___y, method)
