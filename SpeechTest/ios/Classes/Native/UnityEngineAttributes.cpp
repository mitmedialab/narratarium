#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t79_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t495_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		RuntimeCompatibilityAttribute_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		ExtensionAttribute_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t79 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t79 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t79_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m318(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m319(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t495 * tmp;
		tmp = (ExtensionAttribute_t495 *)il2cpp_codegen_object_new (ExtensionAttribute_t495_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m1920(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t494 * tmp;
		tmp = (InternalsVisibleToAttribute_t494 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t494_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1919(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t152_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t152_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t399_il2cpp_TypeInfo_var;
void AssetBundle_t154_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t399 * tmp;
		tmp = (TypeInferenceRuleAttribute_t399 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t399_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1776(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t399_il2cpp_TypeInfo_var;
void AssetBundle_t154_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		TypeInferenceRuleAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t399 * tmp;
		tmp = (TypeInferenceRuleAttribute_t399 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t399_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1776(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void AssetBundle_t154_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void LayerMask_t157_CustomAttributesCacheGenerator_LayerMask_LayerToName_m637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void LayerMask_t157_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t496_il2cpp_TypeInfo_var;
void LayerMask_t157_CustomAttributesCacheGenerator_LayerMask_t157_LayerMask_GetMask_m639_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t496 * tmp;
		tmp = (ParamArrayAttribute_t496 *)il2cpp_codegen_object_new (ParamArrayAttribute_t496_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1921(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void SystemInfo_t159_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void SystemInfo_t159_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Coroutine_t164_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void ScriptableObject_t165_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t349_il2cpp_TypeInfo_var;
void ScriptableObject_t165_CustomAttributesCacheGenerator_ScriptableObject_t165_ScriptableObject_Internal_CreateScriptableObject_m650_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t349 * tmp;
		tmp = (WritableAttribute_t349 *)il2cpp_codegen_object_new (WritableAttribute_t349_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1644(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void ScriptableObject_t165_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void ScriptableObject_t165_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m660(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GcLeaderboard_t177_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GcLeaderboard_t177_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GcLeaderboard_t177_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GcLeaderboard_t177_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void MeshFilter_t125_CustomAttributesCacheGenerator_MeshFilter_get_mesh_m543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void MeshFilter_t125_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Mesh_t128_CustomAttributesCacheGenerator_Mesh_Internal_Create_m726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t349_il2cpp_TypeInfo_var;
void Mesh_t128_CustomAttributesCacheGenerator_Mesh_t128_Mesh_Internal_Create_m726_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t349 * tmp;
		tmp = (WritableAttribute_t349 *)il2cpp_codegen_object_new (WritableAttribute_t349_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1644(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Mesh_t128_CustomAttributesCacheGenerator_Mesh_set_vertices_m583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Mesh_t128_CustomAttributesCacheGenerator_Mesh_set_normals_m585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Mesh_t128_CustomAttributesCacheGenerator_Mesh_get_uv_m544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Mesh_t128_CustomAttributesCacheGenerator_Mesh_set_uv_m545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Mesh_t128_CustomAttributesCacheGenerator_Mesh_set_triangles_m584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Renderer_t179_CustomAttributesCacheGenerator_Renderer_get_material_m562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Screen_t180_CustomAttributesCacheGenerator_Screen_get_width_m549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Screen_t180_CustomAttributesCacheGenerator_Screen_get_height_m301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Screen_t180_CustomAttributesCacheGenerator_Screen_get_sleepTimeout_m313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Screen_t180_CustomAttributesCacheGenerator_Screen_set_sleepTimeout_m299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t497_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GL_t181_CustomAttributesCacheGenerator_GL_SetRevertBackfacing_m623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t497 * tmp;
		tmp = (ObsoleteAttribute_t497 *)il2cpp_codegen_object_new (ObsoleteAttribute_t497_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1923(tmp, il2cpp_codegen_string_new_wrapper("Use invertCulling property"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Texture_t182_CustomAttributesCacheGenerator_Texture_set_filterMode_m558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Texture_t182_CustomAttributesCacheGenerator_Texture_set_wrapMode_m559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Texture2D_t109_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t349_il2cpp_TypeInfo_var;
void Texture2D_t109_CustomAttributesCacheGenerator_Texture2D_t109_Texture2D_Internal_Create_m750_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t349 * tmp;
		tmp = (WritableAttribute_t349 *)il2cpp_codegen_object_new (WritableAttribute_t349_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1644(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Texture2D_t109_CustomAttributesCacheGenerator_Texture2D_UpdateExternalTexture_m560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUILayer_t187_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Gradient_t190_CustomAttributesCacheGenerator_Gradient_Init_m756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Gradient_t190_CustomAttributesCacheGenerator_Gradient_Cleanup_m757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void GUI_t120_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
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
void GUI_t120_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
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
void GUI_t120_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m765(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUI_t120_CustomAttributesCacheGenerator_GUI_set_changed_m768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUI_t120_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUI_t120_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUILayoutUtility_t200_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUILayoutUtility_t200_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIUtility_t208_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIUtility_t208_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIUtility_t208_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISettings_t209_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISettings_t209_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISettings_t209_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISettings_t209_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISettings_t209_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t347_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t347 * tmp;
		tmp = (ExecuteInEditMode_t347 *)il2cpp_codegen_object_new (ExecuteInEditMode_t347_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m1640(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUISkin_t193_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUIContent_t214_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUIContent_t214_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void GUIContent_t214_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyleState_t133_CustomAttributesCacheGenerator_GUIStyleState_Init_m894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyleState_t133_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyleState_t133_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyleState_t133_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_Init_m902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_Cleanup_m903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_left_m904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_set_left_m905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_right_m906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_set_right_m907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_top_m908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_set_top_m909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_bottom_m910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_set_bottom_m911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_vertical_m913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_Init_m917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_name_m919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_set_name_m920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t216_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_Event_Init_m937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_Event_Cleanup_m939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_Event_get_type_m940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_Event_get_modifiers_m943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_Event_get_character_m944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_Event_get_commandName_m945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_Event_get_keyCode_m946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Event_t217_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t498_il2cpp_TypeInfo_var;
void EventModifiers_t221_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void Vector2_t22_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void Vector3_t73_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void Color_t134_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t340_il2cpp_TypeInfo_var;
void Color32_t222_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t340 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t340 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t340_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m1634(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void Quaternion_t223_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void Matrix4x4_t148_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m1004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m1006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m1008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m1011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m1023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m1026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m1027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Bounds_t224_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m1051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Bounds_t224_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m1054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Bounds_t224_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m1057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Bounds_t224_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m1061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void Vector4_t225_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* TypeInferenceRuleAttribute_t399_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Resources_t231_CustomAttributesCacheGenerator_Resources_Load_m316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t399 * tmp;
		tmp = (TypeInferenceRuleAttribute_t399 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t399_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1776(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Resources_t231_CustomAttributesCacheGenerator_Resources_UnloadUnusedAssets_m536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextAsset_t78_CustomAttributesCacheGenerator_TextAsset_get_text_m317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t497_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t232_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t497 * tmp;
		tmp = (ObsoleteAttribute_t497 *)il2cpp_codegen_object_new (ObsoleteAttribute_t497_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1923(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Shader_t235_CustomAttributesCacheGenerator_Shader_PropertyToID_m1102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Material_t129_CustomAttributesCacheGenerator_Material_SetTexture_m1104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t236_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t236_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m1107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t236_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m1110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t236_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m1113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void WWW_t106_CustomAttributesCacheGenerator_WWW_DestroyWWW_m1126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void WWW_t106_CustomAttributesCacheGenerator_WWW_InitWWW_m1127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void WWW_t106_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m1129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void WWW_t106_CustomAttributesCacheGenerator_WWW_get_bytes_m534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void WWW_t106_CustomAttributesCacheGenerator_WWW_get_error_m530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void WWW_t106_CustomAttributesCacheGenerator_WWW_get_isDone_m1133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t396_il2cpp_TypeInfo_var;
void WWWForm_t238_CustomAttributesCacheGenerator_WWWForm_AddField_m1137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t396 * tmp;
		tmp = (ExcludeFromDocsAttribute_t396 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t396_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1774(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t395_il2cpp_TypeInfo_var;
void WWWForm_t238_CustomAttributesCacheGenerator_WWWForm_t238_WWWForm_AddField_m1138_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t395 * tmp;
		tmp = (DefaultValueAttribute_t395 *)il2cpp_codegen_object_new (DefaultValueAttribute_t395_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1770(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t395_il2cpp_TypeInfo_var;
void WWWTranscoder_t239_CustomAttributesCacheGenerator_WWWTranscoder_t239_WWWTranscoder_QPEncode_m1145_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t395 * tmp;
		tmp = (DefaultValueAttribute_t395 *)il2cpp_codegen_object_new (DefaultValueAttribute_t395_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1770(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t395_il2cpp_TypeInfo_var;
void WWWTranscoder_t239_CustomAttributesCacheGenerator_WWWTranscoder_t239_WWWTranscoder_SevenBitClean_m1148_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t395 * tmp;
		tmp = (DefaultValueAttribute_t395 *)il2cpp_codegen_object_new (DefaultValueAttribute_t395_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1770(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t497_il2cpp_TypeInfo_var;
void CacheIndex_t240_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t497 * tmp;
		tmp = (ObsoleteAttribute_t497 *)il2cpp_codegen_object_new (ObsoleteAttribute_t497_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1923(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t496_il2cpp_TypeInfo_var;
void UnityString_t241_CustomAttributesCacheGenerator_UnityString_t241_UnityString_Format_m1150_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t496 * tmp;
		tmp = (ParamArrayAttribute_t496 *)il2cpp_codegen_object_new (ParamArrayAttribute_t496_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1921(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void AsyncOperation_t153_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m1152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Application_t243_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m1158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Application_t243_CustomAttributesCacheGenerator_Application_get_streamingAssetsPath_m538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Application_t243_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t500_il2cpp_TypeInfo_var;
void Application_t243_CustomAttributesCacheGenerator_Application_t243____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t500 * tmp;
		tmp = (SecurityCriticalAttribute_t500 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t500_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m1927(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_get_eventMask_m1168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m1169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_get_targetTexture_m1171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m1172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_set_projectionMatrix_m1173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ResetProjectionMatrix_m1174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_get_clearFlags_m1175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportToWorldPoint_m1176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m1178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_get_allCameras_m569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m1179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_GetAllCameras_m1180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m1185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m1187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var;
void CameraCallback_t244_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t501 * tmp;
		tmp = (EditorBrowsableAttribute_t501 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1928(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Debug_t245_CustomAttributesCacheGenerator_Debug_Internal_Log_m1188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t349_il2cpp_TypeInfo_var;
void Debug_t245_CustomAttributesCacheGenerator_Debug_t245_Debug_Internal_Log_m1188_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t349 * tmp;
		tmp = (WritableAttribute_t349 *)il2cpp_codegen_object_new (WritableAttribute_t349_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1644(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Display_t248_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m1214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Display_t248_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m1215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Display_t248_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m1216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Display_t248_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m1217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Display_t248_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m1218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Display_t248_CustomAttributesCacheGenerator_Display_SetParamsImpl_m1219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Display_t248_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m1220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Display_t248_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m1221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void MonoBehaviour_t27_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m1222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Input_t123_CustomAttributesCacheGenerator_Input_GetMouseButton_m1224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Input_t123_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Input_t123_CustomAttributesCacheGenerator_Input_get_mousePosition_m1226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Input_t123_CustomAttributesCacheGenerator_Input_GetTouch_m1227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Input_t123_CustomAttributesCacheGenerator_Input_get_touchCount_m1228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Object_t74_CustomAttributesCacheGenerator_Object_Destroy_m1230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t395_il2cpp_TypeInfo_var;
void Object_t74_CustomAttributesCacheGenerator_Object_t74_Object_Destroy_m1230_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t395 * tmp;
		tmp = (DefaultValueAttribute_t395 *)il2cpp_codegen_object_new (DefaultValueAttribute_t395_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1770(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t396_il2cpp_TypeInfo_var;
void Object_t74_CustomAttributesCacheGenerator_Object_Destroy_m296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t396 * tmp;
		tmp = (ExcludeFromDocsAttribute_t396 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t396_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1774(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Object_t74_CustomAttributesCacheGenerator_Object_get_name_m1231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Object_t74_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Object_t74_CustomAttributesCacheGenerator_Object_ToString_m370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Component_t130_CustomAttributesCacheGenerator_Component_get_transform_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Component_t130_CustomAttributesCacheGenerator_Component_get_gameObject_m295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Component_t130_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m1237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var;
void Component_t130_CustomAttributesCacheGenerator_Component_GetComponent_m1929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t502 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t502 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1930(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameObject_t72_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m1238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var;
void GameObject_t72_CustomAttributesCacheGenerator_GameObject_GetComponent_m1931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t502 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t502 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1930(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameObject_t72_CustomAttributesCacheGenerator_GameObject_get_transform_m550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameObject_t72_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void GameObject_t72_CustomAttributesCacheGenerator_GameObject_SendMessage_m1239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t395_il2cpp_TypeInfo_var;
void GameObject_t72_CustomAttributesCacheGenerator_GameObject_t72_GameObject_SendMessage_m1239_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t395 * tmp;
		tmp = (DefaultValueAttribute_t395 *)il2cpp_codegen_object_new (DefaultValueAttribute_t395_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1770(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t395_il2cpp_TypeInfo_var;
void GameObject_t72_CustomAttributesCacheGenerator_GameObject_t72_GameObject_SendMessage_m1239_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t395 * tmp;
		tmp = (DefaultValueAttribute_t395 *)il2cpp_codegen_object_new (DefaultValueAttribute_t395_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1770(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m1243(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m1244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localEulerAngles_m1245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localEulerAngles_m1246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m1247(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m1248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Transform_t124_CustomAttributesCacheGenerator_Transform_get_childCount_m1249(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Transform_t124_CustomAttributesCacheGenerator_Transform_GetChild_m1251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Time_t251_CustomAttributesCacheGenerator_Time_get_deltaTime_m298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Random_t252_CustomAttributesCacheGenerator_Random_RandomRangeInt_m1253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void PlayerPrefs_t253_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m1255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t395_il2cpp_TypeInfo_var;
void PlayerPrefs_t253_CustomAttributesCacheGenerator_PlayerPrefs_t253_PlayerPrefs_GetString_m1255_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t395 * tmp;
		tmp = (DefaultValueAttribute_t395 *)il2cpp_codegen_object_new (DefaultValueAttribute_t395_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1770(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t396_il2cpp_TypeInfo_var;
void PlayerPrefs_t253_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m1256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t396 * tmp;
		tmp = (ExcludeFromDocsAttribute_t396 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t396_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1774(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Rigidbody2D_t139_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m1273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t497_il2cpp_TypeInfo_var;
void AnimationEvent_t264_CustomAttributesCacheGenerator_AnimationEvent_t264____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t497 * tmp;
		tmp = (ObsoleteAttribute_t497 *)il2cpp_codegen_object_new (ObsoleteAttribute_t497_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1923(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void AnimationCurve_t268_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t496_il2cpp_TypeInfo_var;
void AnimationCurve_t268_CustomAttributesCacheGenerator_AnimationCurve_t268_AnimationCurve__ctor_m1314_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t496 * tmp;
		tmp = (ParamArrayAttribute_t496 *)il2cpp_codegen_object_new (ParamArrayAttribute_t496_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1921(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void AnimationCurve_t268_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m1316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void AnimationCurve_t268_CustomAttributesCacheGenerator_AnimationCurve_Init_m1318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t497_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t265_CustomAttributesCacheGenerator_AnimatorStateInfo_t265____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t497 * tmp;
		tmp = (ObsoleteAttribute_t497 *)il2cpp_codegen_object_new (ObsoleteAttribute_t497_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1923(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Animator_t271_CustomAttributesCacheGenerator_Animator_StringToHash_m1337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t497_il2cpp_TypeInfo_var;
void CharacterInfo_t278_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t497 * tmp;
		tmp = (ObsoleteAttribute_t497 *)il2cpp_codegen_object_new (ObsoleteAttribute_t497_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1923(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t497_il2cpp_TypeInfo_var;
void CharacterInfo_t278_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t497 * tmp;
		tmp = (ObsoleteAttribute_t497 *)il2cpp_codegen_object_new (ObsoleteAttribute_t497_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1923(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t497_il2cpp_TypeInfo_var;
void CharacterInfo_t278_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t497 * tmp;
		tmp = (ObsoleteAttribute_t497 *)il2cpp_codegen_object_new (ObsoleteAttribute_t497_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1923(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t497_il2cpp_TypeInfo_var;
void CharacterInfo_t278_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t497 * tmp;
		tmp = (ObsoleteAttribute_t497 *)il2cpp_codegen_object_new (ObsoleteAttribute_t497_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1923(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void Font_t211_CustomAttributesCacheGenerator_Font_get_dynamic_m1363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t279_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t501 * tmp;
		tmp = (EditorBrowsableAttribute_t501 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1928(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_Init_m1367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m1368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m1372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m1373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m1374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m1375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m1376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m1378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m1379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m1380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m1381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m1382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t339_il2cpp_TypeInfo_var;
void TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m1383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t339 * tmp;
		tmp = (WrapperlessIcall_t339 *)il2cpp_codegen_object_new (WrapperlessIcall_t339_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1633(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void Request_t291_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t291_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t291_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
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
void Request_t291_CustomAttributesCacheGenerator_Request_get_sourceId_m1404(CustomAttributesCache* cache)
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
void Request_t291_CustomAttributesCacheGenerator_Request_get_appId_m1405(CustomAttributesCache* cache)
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
void Request_t291_CustomAttributesCacheGenerator_Request_get_domain_m1406(CustomAttributesCache* cache)
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
void Response_t293_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
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
void Response_t293_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
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
void Response_t293_CustomAttributesCacheGenerator_Response_get_success_m1415(CustomAttributesCache* cache)
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
void Response_t293_CustomAttributesCacheGenerator_Response_set_success_m1416(CustomAttributesCache* cache)
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
void Response_t293_CustomAttributesCacheGenerator_Response_get_extendedInfo_m1417(CustomAttributesCache* cache)
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
void Response_t293_CustomAttributesCacheGenerator_Response_set_extendedInfo_m1418(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m1423(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m1424(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m1425(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m1426(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m1427(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m1428(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m1429(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m1430(CustomAttributesCache* cache)
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
void CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m1431(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m1434(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m1435(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m1436(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m1437(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m1438(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m1439(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m1440(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m1441(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m1442(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m1443(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m1444(CustomAttributesCache* cache)
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
void CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m1445(CustomAttributesCache* cache)
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
void JoinMatchRequest_t298_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchRequest_t298_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchRequest_t298_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m1449(CustomAttributesCache* cache)
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
void JoinMatchRequest_t298_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m1450(CustomAttributesCache* cache)
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
void JoinMatchRequest_t298_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m1451(CustomAttributesCache* cache)
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
void JoinMatchRequest_t298_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m1452(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m1455(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m1456(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m1457(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m1458(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m1459(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m1460(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m1461(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m1462(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m1463(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m1464(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m1465(CustomAttributesCache* cache)
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
void JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m1466(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t300_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t300_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m1470(CustomAttributesCache* cache)
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
void DestroyMatchRequest_t300_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m1471(CustomAttributesCache* cache)
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
void DropConnectionRequest_t301_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DropConnectionRequest_t301_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void DropConnectionRequest_t301_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m1474(CustomAttributesCache* cache)
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
void DropConnectionRequest_t301_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m1475(CustomAttributesCache* cache)
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
void DropConnectionRequest_t301_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m1476(CustomAttributesCache* cache)
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
void DropConnectionRequest_t301_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m1477(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m1480(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m1481(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m1482(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m1483(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m1484(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m1485(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m1486(CustomAttributesCache* cache)
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
void ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m1487(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m1490(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m1491(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m1492(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m1493(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m1494(CustomAttributesCache* cache)
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
void MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m1495(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m1499(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m1500(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_name_m1501(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_name_m1502(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m1503(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m1504(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m1505(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m1506(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m1507(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m1508(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m1509(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m1510(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m1511(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m1512(CustomAttributesCache* cache)
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
void MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m1513(CustomAttributesCache* cache)
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
void ListMatchResponse_t307_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
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
void ListMatchResponse_t307_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m1517(CustomAttributesCache* cache)
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
void ListMatchResponse_t307_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m1518(CustomAttributesCache* cache)
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
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t504_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t308_il2cpp_TypeInfo_var;
void AppID_t308_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		AppID_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t504 * tmp;
		tmp = (DefaultValueAttribute_t504 *)il2cpp_codegen_object_new (DefaultValueAttribute_t504_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1934(tmp, Box(AppID_t308_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t504_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t309_il2cpp_TypeInfo_var;
void SourceID_t309_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		SourceID_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t504 * tmp;
		tmp = (DefaultValueAttribute_t504 *)il2cpp_codegen_object_new (DefaultValueAttribute_t504_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1934(tmp, Box(SourceID_t309_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t504_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t310_il2cpp_TypeInfo_var;
void NetworkID_t310_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		NetworkID_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(308);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t504 * tmp;
		tmp = (DefaultValueAttribute_t504 *)il2cpp_codegen_object_new (DefaultValueAttribute_t504_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1934(tmp, Box(NetworkID_t310_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t504_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t311_il2cpp_TypeInfo_var;
void NodeID_t311_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		NodeID_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t504 * tmp;
		tmp = (DefaultValueAttribute_t504 *)il2cpp_codegen_object_new (DefaultValueAttribute_t504_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1934(tmp, Box(NodeID_t311_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var;
void NetworkMatch_t317_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t82 * tmp;
		tmp = (DebuggerHiddenAttribute_t82 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t506_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t506_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t82 * tmp;
		tmp = (DebuggerHiddenAttribute_t82 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t506_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t82 * tmp;
		tmp = (DebuggerHiddenAttribute_t82 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t506_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t82 * tmp;
		tmp = (DebuggerHiddenAttribute_t82 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t82_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var;
void JsonArray_t318_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(427);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t501 * tmp;
		tmp = (EditorBrowsableAttribute_t501 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1928(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t507 * tmp;
		tmp = (GeneratedCodeAttribute_t507 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1945(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var;
void JsonObject_t321_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(427);
		EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t80 * tmp;
		tmp = (DefaultMemberAttribute_t80 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t80_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m340(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t507 * tmp;
		tmp = (GeneratedCodeAttribute_t507 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1945(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t501 * tmp;
		tmp = (EditorBrowsableAttribute_t501 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1928(tmp, 1, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var;
void SimpleJson_t324_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(427);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t507 * tmp;
		tmp = (GeneratedCodeAttribute_t507 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1945(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t508_il2cpp_TypeInfo_var;
void SimpleJson_t324_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t508 * tmp;
		tmp = (SuppressMessageAttribute_t508 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t508_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1946(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1947(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t508_il2cpp_TypeInfo_var;
void SimpleJson_t324_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t508 * tmp;
		tmp = (SuppressMessageAttribute_t508 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t508_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1946(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var;
void SimpleJson_t324_CustomAttributesCacheGenerator_SimpleJson_t324____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t501 * tmp;
		tmp = (EditorBrowsableAttribute_t501 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t501_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1928(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t322_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(427);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t507 * tmp;
		tmp = (GeneratedCodeAttribute_t507 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1945(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t508_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t322_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t508 * tmp;
		tmp = (SuppressMessageAttribute_t508 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t508_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1946(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1947(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t323_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(427);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t507 * tmp;
		tmp = (GeneratedCodeAttribute_t507 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1945(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t508_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t323_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t508 * tmp;
		tmp = (SuppressMessageAttribute_t508 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t508_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1946(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1947(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t508_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t323_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t508 * tmp;
		tmp = (SuppressMessageAttribute_t508 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t508_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1946(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1947(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var;
void ReflectionUtils_t338_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(427);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t507 * tmp;
		tmp = (GeneratedCodeAttribute_t507 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t507_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1945(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t496_il2cpp_TypeInfo_var;
void ReflectionUtils_t338_CustomAttributesCacheGenerator_ReflectionUtils_t338_ReflectionUtils_GetConstructorInfo_m1617_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t496 * tmp;
		tmp = (ParamArrayAttribute_t496 *)il2cpp_codegen_object_new (ParamArrayAttribute_t496_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1921(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t496_il2cpp_TypeInfo_var;
void ReflectionUtils_t338_CustomAttributesCacheGenerator_ReflectionUtils_t338_ReflectionUtils_GetContructor_m1622_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t496 * tmp;
		tmp = (ParamArrayAttribute_t496 *)il2cpp_codegen_object_new (ParamArrayAttribute_t496_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1921(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t496_il2cpp_TypeInfo_var;
void ReflectionUtils_t338_CustomAttributesCacheGenerator_ReflectionUtils_t338_ReflectionUtils_GetConstructorByReflection_m1624_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t496 * tmp;
		tmp = (ParamArrayAttribute_t496 *)il2cpp_codegen_object_new (ParamArrayAttribute_t496_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1921(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t80_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t509_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* ParamArrayAttribute_t496_il2cpp_TypeInfo_var;
void ConstructorDelegate_t331_CustomAttributesCacheGenerator_ConstructorDelegate_t331_ConstructorDelegate_Invoke_m1602_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t496 * tmp;
		tmp = (ParamArrayAttribute_t496 *)il2cpp_codegen_object_new (ParamArrayAttribute_t496_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1921(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t496_il2cpp_TypeInfo_var;
void ConstructorDelegate_t331_CustomAttributesCacheGenerator_ConstructorDelegate_t331_ConstructorDelegate_BeginInvoke_m1603_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t496 * tmp;
		tmp = (ParamArrayAttribute_t496 *)il2cpp_codegen_object_new (ParamArrayAttribute_t496_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1921(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t333_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t334_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t335_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t336_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t337_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t340_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t345_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m1973(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void RequireComponent_t150_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1974(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void WritableAttribute_t349_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1974(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t350_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t81_il2cpp_TypeInfo_var;
void Achievement_t364_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void Achievement_t364_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
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
void Achievement_t364_CustomAttributesCacheGenerator_Achievement_get_id_m1677(CustomAttributesCache* cache)
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
void Achievement_t364_CustomAttributesCacheGenerator_Achievement_set_id_m1678(CustomAttributesCache* cache)
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
void Achievement_t364_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1679(CustomAttributesCache* cache)
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
void Achievement_t364_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1680(CustomAttributesCache* cache)
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
void AchievementDescription_t365_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void AchievementDescription_t365_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1687(CustomAttributesCache* cache)
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
void AchievementDescription_t365_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1688(CustomAttributesCache* cache)
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
void Score_t366_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
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
void Score_t366_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
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
void Score_t366_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1697(CustomAttributesCache* cache)
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
void Score_t366_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1698(CustomAttributesCache* cache)
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
void Score_t366_CustomAttributesCacheGenerator_Score_get_value_m1699(CustomAttributesCache* cache)
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
void Score_t366_CustomAttributesCacheGenerator_Score_set_value_m1700(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_get_id_m1708(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_set_id_m1709(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1710(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1711(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_get_range_m1712(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_set_range_m1713(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1714(CustomAttributesCache* cache)
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
void Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1715(CustomAttributesCache* cache)
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
extern TypeInfo* SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var;
void StackTraceUtility_t377_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t502 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t502 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1930(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var;
void StackTraceUtility_t377_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t502 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t502 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1930(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var;
void StackTraceUtility_t377_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t502 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t502 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t502_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1930(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t378_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1974(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void ArgumentCache_t384_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t397 * tmp;
		tmp = (FormerlySerializedAsAttribute_t397 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1775(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var;
void PersistentCall_t387_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t397 * tmp;
		tmp = (FormerlySerializedAsAttribute_t397 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1775(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void PersistentCall_t387_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t397 * tmp;
		tmp = (FormerlySerializedAsAttribute_t397 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1775(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t397 * tmp;
		tmp = (FormerlySerializedAsAttribute_t397 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1775(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void PersistentCallGroup_t389_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t397 * tmp;
		tmp = (FormerlySerializedAsAttribute_t397 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1775(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void UnityEventBase_t392_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t397 * tmp;
		tmp = (FormerlySerializedAsAttribute_t397 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t397_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1775(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t234_il2cpp_TypeInfo_var;
void UnityEventBase_t392_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t234 * tmp;
		tmp = (SerializeField_t234 *)il2cpp_codegen_object_new (SerializeField_t234_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1101(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t346_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t394_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t346_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(431);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t346 * tmp;
		tmp = (AddComponentMenu_t346 *)il2cpp_codegen_object_new (AddComponentMenu_t346_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m1639(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t395_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t396_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t397_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1974(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m1973(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t511_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t399_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t511 * tmp;
		tmp = (AttributeUsageAttribute_t511 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t511_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1972(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[488] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t152_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m627,
	AssetBundleCreateRequest_t152_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m628,
	AssetBundle_t154_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m632,
	AssetBundle_t154_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m633,
	AssetBundle_t154_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m634,
	LayerMask_t157_CustomAttributesCacheGenerator_LayerMask_LayerToName_m637,
	LayerMask_t157_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m638,
	LayerMask_t157_CustomAttributesCacheGenerator_LayerMask_t157_LayerMask_GetMask_m639_Arg0_ParameterInfo,
	SystemInfo_t159_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m642,
	SystemInfo_t159_CustomAttributesCacheGenerator_SystemInfo_get_deviceModel_m541,
	Coroutine_t164_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m647,
	ScriptableObject_t165_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m650,
	ScriptableObject_t165_CustomAttributesCacheGenerator_ScriptableObject_t165_ScriptableObject_Internal_CreateScriptableObject_m650_Arg0_ParameterInfo,
	ScriptableObject_t165_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m651,
	ScriptableObject_t165_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m653,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m658,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m659,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m660,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m661,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m662,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m663,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m664,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m665,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m666,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m667,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m668,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m669,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m670,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m671,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m672,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m673,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m674,
	GameCenterPlatform_t175_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m678,
	GcLeaderboard_t177_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m722,
	GcLeaderboard_t177_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m723,
	GcLeaderboard_t177_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m724,
	GcLeaderboard_t177_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m725,
	MeshFilter_t125_CustomAttributesCacheGenerator_MeshFilter_get_mesh_m543,
	MeshFilter_t125_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m579,
	Mesh_t128_CustomAttributesCacheGenerator_Mesh_Internal_Create_m726,
	Mesh_t128_CustomAttributesCacheGenerator_Mesh_t128_Mesh_Internal_Create_m726_Arg0_ParameterInfo,
	Mesh_t128_CustomAttributesCacheGenerator_Mesh_set_vertices_m583,
	Mesh_t128_CustomAttributesCacheGenerator_Mesh_set_normals_m585,
	Mesh_t128_CustomAttributesCacheGenerator_Mesh_get_uv_m544,
	Mesh_t128_CustomAttributesCacheGenerator_Mesh_set_uv_m545,
	Mesh_t128_CustomAttributesCacheGenerator_Mesh_set_triangles_m584,
	Renderer_t179_CustomAttributesCacheGenerator_Renderer_get_material_m562,
	Screen_t180_CustomAttributesCacheGenerator_Screen_get_width_m549,
	Screen_t180_CustomAttributesCacheGenerator_Screen_get_height_m301,
	Screen_t180_CustomAttributesCacheGenerator_Screen_get_sleepTimeout_m313,
	Screen_t180_CustomAttributesCacheGenerator_Screen_set_sleepTimeout_m299,
	GL_t181_CustomAttributesCacheGenerator_GL_SetRevertBackfacing_m623,
	Texture_t182_CustomAttributesCacheGenerator_Texture_set_filterMode_m558,
	Texture_t182_CustomAttributesCacheGenerator_Texture_set_wrapMode_m559,
	Texture2D_t109_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m750,
	Texture2D_t109_CustomAttributesCacheGenerator_Texture2D_t109_Texture2D_Internal_Create_m750_Arg0_ParameterInfo,
	Texture2D_t109_CustomAttributesCacheGenerator_Texture2D_UpdateExternalTexture_m560,
	GUILayer_t187_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m752,
	Gradient_t190_CustomAttributesCacheGenerator_Gradient_Init_m756,
	Gradient_t190_CustomAttributesCacheGenerator_Gradient_Cleanup_m757,
	GUI_t120_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t120_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t120_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m765,
	GUI_t120_CustomAttributesCacheGenerator_GUI_set_changed_m768,
	GUI_t120_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m771,
	GUI_t120_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m773,
	GUILayoutUtility_t200_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m786,
	GUILayoutUtility_t200_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m788,
	GUIUtility_t208_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m820,
	GUIUtility_t208_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m822,
	GUIUtility_t208_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m826,
	GUISettings_t209_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t209_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t209_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t209_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t209_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t193_CustomAttributesCacheGenerator,
	GUISkin_t193_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t193_CustomAttributesCacheGenerator_m_box,
	GUISkin_t193_CustomAttributesCacheGenerator_m_button,
	GUISkin_t193_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t193_CustomAttributesCacheGenerator_m_label,
	GUISkin_t193_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t193_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t193_CustomAttributesCacheGenerator_m_window,
	GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t193_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t193_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t193_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t193_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t193_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t193_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t193_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t193_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t193_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t193_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t214_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t214_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t214_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t133_CustomAttributesCacheGenerator_GUIStyleState_Init_m894,
	GUIStyleState_t133_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m895,
	GUIStyleState_t133_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m896,
	GUIStyleState_t133_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m897,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_Init_m902,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_Cleanup_m903,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_left_m904,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_set_left_m905,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_right_m906,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_set_right_m907,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_top_m908,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_set_top_m909,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_bottom_m910,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_set_bottom_m911,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m912,
	RectOffset_t203_CustomAttributesCacheGenerator_RectOffset_get_vertical_m913,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_Init_m917,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m918,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_name_m919,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_set_name_m920,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m921,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m924,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m925,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m926,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m927,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m928,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m929,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m930,
	GUIStyle_t112_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m931,
	TouchScreenKeyboard_t216_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m934,
	Event_t217_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t217_CustomAttributesCacheGenerator_Event_Init_m937,
	Event_t217_CustomAttributesCacheGenerator_Event_Cleanup_m939,
	Event_t217_CustomAttributesCacheGenerator_Event_get_type_m940,
	Event_t217_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m942,
	Event_t217_CustomAttributesCacheGenerator_Event_get_modifiers_m943,
	Event_t217_CustomAttributesCacheGenerator_Event_get_character_m944,
	Event_t217_CustomAttributesCacheGenerator_Event_get_commandName_m945,
	Event_t217_CustomAttributesCacheGenerator_Event_get_keyCode_m946,
	Event_t217_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m948,
	EventModifiers_t221_CustomAttributesCacheGenerator,
	Vector2_t22_CustomAttributesCacheGenerator,
	Vector3_t73_CustomAttributesCacheGenerator,
	Color_t134_CustomAttributesCacheGenerator,
	Color32_t222_CustomAttributesCacheGenerator,
	Quaternion_t223_CustomAttributesCacheGenerator,
	Matrix4x4_t148_CustomAttributesCacheGenerator,
	Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m1004,
	Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m1006,
	Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m1008,
	Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m1011,
	Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m1023,
	Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m1026,
	Matrix4x4_t148_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m1027,
	Bounds_t224_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m1051,
	Bounds_t224_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m1054,
	Bounds_t224_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m1057,
	Bounds_t224_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m1061,
	Vector4_t225_CustomAttributesCacheGenerator,
	Resources_t231_CustomAttributesCacheGenerator_Resources_Load_m316,
	Resources_t231_CustomAttributesCacheGenerator_Resources_UnloadUnusedAssets_m536,
	TextAsset_t78_CustomAttributesCacheGenerator_TextAsset_get_text_m317,
	SerializePrivateVariables_t232_CustomAttributesCacheGenerator,
	Shader_t235_CustomAttributesCacheGenerator_Shader_PropertyToID_m1102,
	Material_t129_CustomAttributesCacheGenerator_Material_SetTexture_m1104,
	SphericalHarmonicsL2_t236_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t236_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m1107,
	SphericalHarmonicsL2_t236_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m1110,
	SphericalHarmonicsL2_t236_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m1113,
	WWW_t106_CustomAttributesCacheGenerator_WWW_DestroyWWW_m1126,
	WWW_t106_CustomAttributesCacheGenerator_WWW_InitWWW_m1127,
	WWW_t106_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m1129,
	WWW_t106_CustomAttributesCacheGenerator_WWW_get_bytes_m534,
	WWW_t106_CustomAttributesCacheGenerator_WWW_get_error_m530,
	WWW_t106_CustomAttributesCacheGenerator_WWW_get_isDone_m1133,
	WWWForm_t238_CustomAttributesCacheGenerator_WWWForm_AddField_m1137,
	WWWForm_t238_CustomAttributesCacheGenerator_WWWForm_t238_WWWForm_AddField_m1138_Arg2_ParameterInfo,
	WWWTranscoder_t239_CustomAttributesCacheGenerator_WWWTranscoder_t239_WWWTranscoder_QPEncode_m1145_Arg1_ParameterInfo,
	WWWTranscoder_t239_CustomAttributesCacheGenerator_WWWTranscoder_t239_WWWTranscoder_SevenBitClean_m1148_Arg1_ParameterInfo,
	CacheIndex_t240_CustomAttributesCacheGenerator,
	UnityString_t241_CustomAttributesCacheGenerator_UnityString_t241_UnityString_Format_m1150_Arg1_ParameterInfo,
	AsyncOperation_t153_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m1152,
	Application_t243_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m1158,
	Application_t243_CustomAttributesCacheGenerator_Application_get_streamingAssetsPath_m538,
	Application_t243_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m531,
	Application_t243_CustomAttributesCacheGenerator_Application_t243____persistentDataPath_PropertyInfo,
	Camera_t132_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1165,
	Camera_t132_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1166,
	Camera_t132_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1167,
	Camera_t132_CustomAttributesCacheGenerator_Camera_get_eventMask_m1168,
	Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m1169,
	Camera_t132_CustomAttributesCacheGenerator_Camera_get_targetTexture_m1171,
	Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m1172,
	Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_set_projectionMatrix_m1173,
	Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ResetProjectionMatrix_m1174,
	Camera_t132_CustomAttributesCacheGenerator_Camera_get_clearFlags_m1175,
	Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportToWorldPoint_m1176,
	Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m1178,
	Camera_t132_CustomAttributesCacheGenerator_Camera_get_allCameras_m569,
	Camera_t132_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m1179,
	Camera_t132_CustomAttributesCacheGenerator_Camera_GetAllCameras_m1180,
	Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m1185,
	Camera_t132_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m1187,
	CameraCallback_t244_CustomAttributesCacheGenerator,
	Debug_t245_CustomAttributesCacheGenerator_Debug_Internal_Log_m1188,
	Debug_t245_CustomAttributesCacheGenerator_Debug_t245_Debug_Internal_Log_m1188_Arg2_ParameterInfo,
	Display_t248_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m1214,
	Display_t248_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m1215,
	Display_t248_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m1216,
	Display_t248_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m1217,
	Display_t248_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m1218,
	Display_t248_CustomAttributesCacheGenerator_Display_SetParamsImpl_m1219,
	Display_t248_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m1220,
	Display_t248_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m1221,
	MonoBehaviour_t27_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m1222,
	Input_t123_CustomAttributesCacheGenerator_Input_GetMouseButton_m1224,
	Input_t123_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1225,
	Input_t123_CustomAttributesCacheGenerator_Input_get_mousePosition_m1226,
	Input_t123_CustomAttributesCacheGenerator_Input_GetTouch_m1227,
	Input_t123_CustomAttributesCacheGenerator_Input_get_touchCount_m1228,
	Object_t74_CustomAttributesCacheGenerator_Object_Destroy_m1230,
	Object_t74_CustomAttributesCacheGenerator_Object_t74_Object_Destroy_m1230_Arg1_ParameterInfo,
	Object_t74_CustomAttributesCacheGenerator_Object_Destroy_m296,
	Object_t74_CustomAttributesCacheGenerator_Object_get_name_m1231,
	Object_t74_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m297,
	Object_t74_CustomAttributesCacheGenerator_Object_ToString_m370,
	Component_t130_CustomAttributesCacheGenerator_Component_get_transform_m525,
	Component_t130_CustomAttributesCacheGenerator_Component_get_gameObject_m295,
	Component_t130_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m1237,
	Component_t130_CustomAttributesCacheGenerator_Component_GetComponent_m1929,
	GameObject_t72_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m1238,
	GameObject_t72_CustomAttributesCacheGenerator_GameObject_GetComponent_m1931,
	GameObject_t72_CustomAttributesCacheGenerator_GameObject_get_transform_m550,
	GameObject_t72_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m575,
	GameObject_t72_CustomAttributesCacheGenerator_GameObject_SendMessage_m1239,
	GameObject_t72_CustomAttributesCacheGenerator_GameObject_t72_GameObject_SendMessage_m1239_Arg1_ParameterInfo,
	GameObject_t72_CustomAttributesCacheGenerator_GameObject_t72_GameObject_SendMessage_m1239_Arg2_ParameterInfo,
	Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m1243,
	Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m1244,
	Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localEulerAngles_m1245,
	Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localEulerAngles_m1246,
	Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m1247,
	Transform_t124_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m1248,
	Transform_t124_CustomAttributesCacheGenerator_Transform_get_childCount_m1249,
	Transform_t124_CustomAttributesCacheGenerator_Transform_GetChild_m1251,
	Time_t251_CustomAttributesCacheGenerator_Time_get_deltaTime_m298,
	Random_t252_CustomAttributesCacheGenerator_Random_RandomRangeInt_m1253,
	PlayerPrefs_t253_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m1255,
	PlayerPrefs_t253_CustomAttributesCacheGenerator_PlayerPrefs_t253_PlayerPrefs_GetString_m1255_Arg1_ParameterInfo,
	PlayerPrefs_t253_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m1256,
	Rigidbody2D_t139_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m1273,
	AnimationEvent_t264_CustomAttributesCacheGenerator_AnimationEvent_t264____data_PropertyInfo,
	AnimationCurve_t268_CustomAttributesCacheGenerator,
	AnimationCurve_t268_CustomAttributesCacheGenerator_AnimationCurve_t268_AnimationCurve__ctor_m1314_Arg0_ParameterInfo,
	AnimationCurve_t268_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m1316,
	AnimationCurve_t268_CustomAttributesCacheGenerator_AnimationCurve_Init_m1318,
	AnimatorStateInfo_t265_CustomAttributesCacheGenerator_AnimatorStateInfo_t265____nameHash_PropertyInfo,
	Animator_t271_CustomAttributesCacheGenerator_Animator_StringToHash_m1337,
	CharacterInfo_t278_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t278_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t278_CustomAttributesCacheGenerator_width,
	CharacterInfo_t278_CustomAttributesCacheGenerator_flipped,
	Font_t211_CustomAttributesCacheGenerator_Font_get_dynamic_m1363,
	FontTextureRebuildCallback_t279_CustomAttributesCacheGenerator,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_Init_m1367,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m1368,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1371,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m1372,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m1373,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m1374,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m1375,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m1376,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m1378,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m1379,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m1380,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m1381,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m1382,
	TextGenerator_t286_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m1383,
	Request_t291_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t291_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t291_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t291_CustomAttributesCacheGenerator_Request_get_sourceId_m1404,
	Request_t291_CustomAttributesCacheGenerator_Request_get_appId_m1405,
	Request_t291_CustomAttributesCacheGenerator_Request_get_domain_m1406,
	Response_t293_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t293_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t293_CustomAttributesCacheGenerator_Response_get_success_m1415,
	Response_t293_CustomAttributesCacheGenerator_Response_set_success_m1416,
	Response_t293_CustomAttributesCacheGenerator_Response_get_extendedInfo_m1417,
	Response_t293_CustomAttributesCacheGenerator_Response_set_extendedInfo_m1418,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m1423,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m1424,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m1425,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m1426,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m1427,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m1428,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m1429,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m1430,
	CreateMatchRequest_t296_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m1431,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m1434,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m1435,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m1436,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m1437,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m1438,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m1439,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m1440,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m1441,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m1442,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m1443,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m1444,
	CreateMatchResponse_t297_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m1445,
	JoinMatchRequest_t298_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t298_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t298_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m1449,
	JoinMatchRequest_t298_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m1450,
	JoinMatchRequest_t298_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m1451,
	JoinMatchRequest_t298_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m1452,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m1455,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m1456,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m1457,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m1458,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m1459,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m1460,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m1461,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m1462,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m1463,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m1464,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m1465,
	JoinMatchResponse_t299_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m1466,
	DestroyMatchRequest_t300_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t300_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m1470,
	DestroyMatchRequest_t300_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m1471,
	DropConnectionRequest_t301_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t301_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t301_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m1474,
	DropConnectionRequest_t301_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m1475,
	DropConnectionRequest_t301_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m1476,
	DropConnectionRequest_t301_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m1477,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m1480,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m1481,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m1482,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m1483,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m1484,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m1485,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m1486,
	ListMatchRequest_t302_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m1487,
	MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m1490,
	MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m1491,
	MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m1492,
	MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m1493,
	MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m1494,
	MatchDirectConnectInfo_t303_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m1495,
	MatchDesc_t305_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t305_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t305_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t305_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t305_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t305_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t305_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t305_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t305_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m1499,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m1500,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_name_m1501,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_name_m1502,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m1503,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m1504,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m1505,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m1506,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m1507,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m1508,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m1509,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m1510,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m1511,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m1512,
	MatchDesc_t305_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m1513,
	ListMatchResponse_t307_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t307_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m1517,
	ListMatchResponse_t307_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m1518,
	AppID_t308_CustomAttributesCacheGenerator,
	SourceID_t309_CustomAttributesCacheGenerator,
	NetworkID_t310_CustomAttributesCacheGenerator,
	NodeID_t311_CustomAttributesCacheGenerator,
	NetworkMatch_t317_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1935,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t506_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t506_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1941,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t506_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1942,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t506_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1944,
	JsonArray_t318_CustomAttributesCacheGenerator,
	JsonObject_t321_CustomAttributesCacheGenerator,
	SimpleJson_t324_CustomAttributesCacheGenerator,
	SimpleJson_t324_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1562,
	SimpleJson_t324_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1574,
	SimpleJson_t324_CustomAttributesCacheGenerator_SimpleJson_t324____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t322_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t322_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1948,
	PocoJsonSerializerStrategy_t323_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t323_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1591,
	PocoJsonSerializerStrategy_t323_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1592,
	ReflectionUtils_t338_CustomAttributesCacheGenerator,
	ReflectionUtils_t338_CustomAttributesCacheGenerator_ReflectionUtils_t338_ReflectionUtils_GetConstructorInfo_m1617_Arg1_ParameterInfo,
	ReflectionUtils_t338_CustomAttributesCacheGenerator_ReflectionUtils_t338_ReflectionUtils_GetContructor_m1622_Arg1_ParameterInfo,
	ReflectionUtils_t338_CustomAttributesCacheGenerator_ReflectionUtils_t338_ReflectionUtils_GetConstructorByReflection_m1624_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t509_CustomAttributesCacheGenerator,
	ConstructorDelegate_t331_CustomAttributesCacheGenerator_ConstructorDelegate_t331_ConstructorDelegate_Invoke_m1602_Arg0_ParameterInfo,
	ConstructorDelegate_t331_CustomAttributesCacheGenerator_ConstructorDelegate_t331_ConstructorDelegate_BeginInvoke_m1603_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t333_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t334_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t335_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t336_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t337_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t340_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t345_CustomAttributesCacheGenerator,
	RequireComponent_t150_CustomAttributesCacheGenerator,
	WritableAttribute_t349_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t350_CustomAttributesCacheGenerator,
	Achievement_t364_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t364_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t364_CustomAttributesCacheGenerator_Achievement_get_id_m1677,
	Achievement_t364_CustomAttributesCacheGenerator_Achievement_set_id_m1678,
	Achievement_t364_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1679,
	Achievement_t364_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1680,
	AchievementDescription_t365_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t365_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1687,
	AchievementDescription_t365_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1688,
	Score_t366_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t366_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t366_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1697,
	Score_t366_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1698,
	Score_t366_CustomAttributesCacheGenerator_Score_get_value_m1699,
	Score_t366_CustomAttributesCacheGenerator_Score_set_value_m1700,
	Leaderboard_t176_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t176_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t176_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t176_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_get_id_m1708,
	Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_set_id_m1709,
	Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1710,
	Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1711,
	Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_get_range_m1712,
	Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_set_range_m1713,
	Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1714,
	Leaderboard_t176_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1715,
	StackTraceUtility_t377_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1727,
	StackTraceUtility_t377_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1730,
	StackTraceUtility_t377_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1732,
	SharedBetweenAnimatorsAttribute_t378_CustomAttributesCacheGenerator,
	ArgumentCache_t384_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	PersistentCall_t387_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t387_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t389_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t392_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t392_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t394_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t395_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t396_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t397_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t399_CustomAttributesCacheGenerator,
};
