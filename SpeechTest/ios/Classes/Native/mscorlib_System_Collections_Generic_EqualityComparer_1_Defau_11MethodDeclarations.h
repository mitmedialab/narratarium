#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2476;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m13930_gshared (DefaultComparer_t2476 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13930(__this, method) (( void (*) (DefaultComparer_t2476 *, const MethodInfo*))DefaultComparer__ctor_m13930_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13931_gshared (DefaultComparer_t2476 * __this, Guid_t62  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13931(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2476 *, Guid_t62 , const MethodInfo*))DefaultComparer_GetHashCode_m13931_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13932_gshared (DefaultComparer_t2476 * __this, Guid_t62  ___x, Guid_t62  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13932(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2476 *, Guid_t62 , Guid_t62 , const MethodInfo*))DefaultComparer_Equals_m13932_gshared)(__this, ___x, ___y, method)
