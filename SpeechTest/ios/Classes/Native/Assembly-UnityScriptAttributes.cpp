#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttribute.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern TypeInfo* DebuggableAttribute_t149_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t79_il2cpp_TypeInfo_var;
void g_AssemblyU2DUnityScript_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggableAttribute_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		RuntimeCompatibilityAttribute_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggableAttribute_t149 * tmp;
		tmp = (DebuggableAttribute_t149 *)il2cpp_codegen_object_new (DebuggableAttribute_t149_il2cpp_TypeInfo_var);
		DebuggableAttribute__ctor_m624(tmp, 257, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t79 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t79 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t79_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m318(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m319(tmp, true, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern const Il2CppType* Camera_t132_0_0_0_var;
extern TypeInfo* RequireComponent_t150_il2cpp_TypeInfo_var;
void CameraFlip2_t147_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t132_0_0_0_var = il2cpp_codegen_type_from_index(219);
		RequireComponent_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(221);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RequireComponent_t150 * tmp;
		tmp = (RequireComponent_t150 *)il2cpp_codegen_object_new (RequireComponent_t150_il2cpp_TypeInfo_var);
		RequireComponent__ctor_m625(tmp, il2cpp_codegen_type_get_object(Camera_t132_0_0_0_var), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_AssemblyU2DUnityScript_Assembly_AttributeGenerators[3] = 
{
	NULL,
	g_AssemblyU2DUnityScript_Assembly_CustomAttributesCacheGenerator,
	CameraFlip2_t147_CustomAttributesCacheGenerator,
};
