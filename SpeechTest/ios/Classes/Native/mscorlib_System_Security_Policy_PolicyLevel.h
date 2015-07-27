#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Security.Policy.CodeGroup
struct CodeGroup_t1426;
// System.Collections.ArrayList
struct ArrayList_t593;
// System.Collections.Hashtable
struct Hashtable_t583;
// System.Security.SecurityElement
struct SecurityElement_t1113;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.PolicyLevelType
#include "mscorlib_System_Security_PolicyLevelType.h"
// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t1429  : public Object_t
{
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t1426 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t593 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t593 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t583 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t1113 * ___xml_7;
};
