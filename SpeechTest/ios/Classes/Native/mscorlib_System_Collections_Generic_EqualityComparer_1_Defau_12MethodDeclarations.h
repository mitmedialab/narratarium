#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2480;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m13947_gshared (DefaultComparer_t2480 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13947(__this, method) (( void (*) (DefaultComparer_t2480 *, const MethodInfo*))DefaultComparer__ctor_m13947_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13948_gshared (DefaultComparer_t2480 * __this, TimeSpan_t659  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13948(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2480 *, TimeSpan_t659 , const MethodInfo*))DefaultComparer_GetHashCode_m13948_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13949_gshared (DefaultComparer_t2480 * __this, TimeSpan_t659  ___x, TimeSpan_t659  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13949(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2480 *, TimeSpan_t659 , TimeSpan_t659 , const MethodInfo*))DefaultComparer_Equals_m13949_gshared)(__this, ___x, ___y, method)
