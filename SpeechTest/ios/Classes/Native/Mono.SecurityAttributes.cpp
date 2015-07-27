#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t796_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t800_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t797_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t802_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t798_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t801_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t79_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t805_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t804_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t792_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1268);
		AssemblyDescriptionAttribute_t800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1272);
		AssemblyProductAttribute_t797_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1269);
		AssemblyTitleAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1274);
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		AssemblyCompanyAttribute_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1270);
		ComVisibleAttribute_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1273);
		RuntimeCompatibilityAttribute_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		AssemblyKeyFileAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1277);
		AssemblyDelaySignAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1276);
		NeutralResourcesLanguageAttribute_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1264);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t796 * tmp;
		tmp = (AssemblyCopyrightAttribute_t796 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t796_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m3110(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t800 * tmp;
		tmp = (AssemblyDescriptionAttribute_t800 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t800_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m3114(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t797 * tmp;
		tmp = (AssemblyProductAttribute_t797 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t797_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m3111(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t802 * tmp;
		tmp = (AssemblyTitleAttribute_t802 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t802_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m3116(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t798 * tmp;
		tmp = (AssemblyCompanyAttribute_t798 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t798_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m3112(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t801 * tmp;
		tmp = (ComVisibleAttribute_t801 *)il2cpp_codegen_object_new (ComVisibleAttribute_t801_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m3115(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t79 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t79 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t79_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m318(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m319(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t805 * tmp;
		tmp = (AssemblyKeyFileAttribute_t805 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t805_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m3119(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t804 * tmp;
		tmp = (AssemblyDelaySignAttribute_t804 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t804_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m3118(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t792 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t792 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t792_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m3106(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger__ctor_m3324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger__ctor_m3326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger__ctor_m3328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_SetBit_m3335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_SetBit_m3336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_ToString_m3339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_ToString_m3340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m3350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m3354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_op_Equality_m3360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m3361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t793_il2cpp_TypeInfo_var;
void ModulusRing_t885_CustomAttributesCacheGenerator_ModulusRing_Pow_m3308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t793 * tmp;
		tmp = (CLSCompliantAttribute_t793 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t793_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3107(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void ASN1_t757_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t80 * tmp;
		tmp = (DefaultMemberAttribute_t80 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t80_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m340(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void PKCS12_t780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void PKCS12_t780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void PKCS12_t780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void PKCS12_t780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void X509Certificate_t643_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void X509Certificate_t643_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void X509Certificate_t643_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void X509CertificateCollection_t781_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t80 * tmp;
		tmp = (DefaultMemberAttribute_t80 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t80_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m340(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t498_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t916_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t498 * tmp;
		tmp = (FlagsAttribute_t498 *)il2cpp_codegen_object_new (FlagsAttribute_t498_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1924(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void X509Crl_t759_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t80 * tmp;
		tmp = (DefaultMemberAttribute_t80 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t80_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m340(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void X509Crl_t759_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t784_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t80 * tmp;
		tmp = (DefaultMemberAttribute_t80 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t80_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m340(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t919_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t498_il2cpp_TypeInfo_var;
void KeyUsages_t921_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t498 * tmp;
		tmp = (FlagsAttribute_t498 *)il2cpp_codegen_object_new (FlagsAttribute_t498_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1924(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t498_il2cpp_TypeInfo_var;
void CertTypes_t923_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t498 * tmp;
		tmp = (FlagsAttribute_t498 *)il2cpp_codegen_object_new (FlagsAttribute_t498_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1924(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t936_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t80 * tmp;
		tmp = (DefaultMemberAttribute_t80 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t80_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m340(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void HttpsClientStream_t954_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void HttpsClientStream_t954_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void HttpsClientStream_t954_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void HttpsClientStream_t954_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void RSASslSignatureDeformatter_t959_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void RSASslSignatureFormatter_t961_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t498_il2cpp_TypeInfo_var;
void SecurityProtocolType_t964_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t498 * tmp;
		tmp = (FlagsAttribute_t498 *)il2cpp_codegen_object_new (FlagsAttribute_t498_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1924(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t999_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t81 * tmp;
		tmp = (CompilerGeneratedAttribute_t81 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m341(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger__ctor_m3324,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger__ctor_m3326,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger__ctor_m3328,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_SetBit_m3335,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_SetBit_m3336,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_ToString_m3339,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_ToString_m3340,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m3350,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m3354,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_op_Equality_m3360,
	BigInteger_t884_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m3361,
	ModulusRing_t885_CustomAttributesCacheGenerator_ModulusRing_Pow_m3308,
	ASN1_t757_CustomAttributesCacheGenerator,
	PKCS12_t780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t643_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t643_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t643_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t781_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t916_CustomAttributesCacheGenerator,
	X509Crl_t759_CustomAttributesCacheGenerator,
	X509Crl_t759_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t784_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t919_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t921_CustomAttributesCacheGenerator,
	CertTypes_t923_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t936_CustomAttributesCacheGenerator,
	HttpsClientStream_t954_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t954_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t954_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3788,
	HttpsClientStream_t954_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3789,
	RSASslSignatureDeformatter_t959_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t961_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t964_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t999_CustomAttributesCacheGenerator,
};
