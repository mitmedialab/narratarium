#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t2181;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m10759_gshared (DefaultComparer_t2181 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10759(__this, method) (( void (*) (DefaultComparer_t2181 *, const MethodInfo*))DefaultComparer__ctor_m10759_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10760_gshared (DefaultComparer_t2181 * __this, Vector3_t73  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10760(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2181 *, Vector3_t73 , const MethodInfo*))DefaultComparer_GetHashCode_m10760_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10761_gshared (DefaultComparer_t2181 * __this, Vector3_t73  ___x, Vector3_t73  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10761(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2181 *, Vector3_t73 , Vector3_t73 , const MethodInfo*))DefaultComparer_Equals_m10761_gshared)(__this, ___x, ___y, method)
