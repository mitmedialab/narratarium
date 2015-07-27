#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1424;
// System.Security.PermissionSet
struct PermissionSet_t1220;
// System.Object
struct Object_t;

// System.Security.PermissionSet System.Security.Policy.PolicyStatement::get_PermissionSet()
extern "C" PermissionSet_t1220 * PolicyStatement_get_PermissionSet_m7572 (PolicyStatement_t1424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyStatement::Equals(System.Object)
extern "C" bool PolicyStatement_Equals_m7573 (PolicyStatement_t1424 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.PolicyStatement::GetHashCode()
extern "C" int32_t PolicyStatement_GetHashCode_m7574 (PolicyStatement_t1424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
