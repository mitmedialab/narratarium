#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t1621;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m8771_gshared (GenericEqualityComparer_1_t1621 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m8771(__this, method) (( void (*) (GenericEqualityComparer_1_t1621 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m8771_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m13940_gshared (GenericEqualityComparer_1_t1621 * __this, TimeSpan_t659  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m13940(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1621 *, TimeSpan_t659 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m13940_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m13941_gshared (GenericEqualityComparer_1_t1621 * __this, TimeSpan_t659  ___x, TimeSpan_t659  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m13941(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1621 *, TimeSpan_t659 , TimeSpan_t659 , const MethodInfo*))GenericEqualityComparer_1_Equals_m13941_gshared)(__this, ___x, ___y, method)
