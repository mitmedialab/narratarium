#pragma once
#include <stdint.h>
// System.Security.PermissionSet
struct PermissionSet_t1220;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.PolicyStatementAttribute
#include "mscorlib_System_Security_Policy_PolicyStatementAttribute.h"
// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t1424  : public Object_t
{
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t1220 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;
};
