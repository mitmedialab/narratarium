#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// CameraFlip2
#include "AssemblyU2DUnityScript_CameraFlip2.h"
#ifndef _MSC_VER
#else
#endif
// CameraFlip2
#include "AssemblyU2DUnityScript_CameraFlip2MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
struct Component_t130;
struct Camera_t132;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t130;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m565_gshared (Component_t130 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m565(__this, method) (( Object_t * (*) (Component_t130 *, const MethodInfo*))Component_GetComponent_TisObject_t_m565_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t132_m617(__this, method) (( Camera_t132 * (*) (Component_t130 *, const MethodInfo*))Component_GetComponent_TisObject_t_m565_gshared)(__this, method)


// System.Void CameraFlip2::.ctor()
extern "C" void CameraFlip2__ctor_m612 (CameraFlip2_t147 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFlip2::OnPreCull()
extern const MethodInfo* Component_GetComponent_TisCamera_t132_m617_MethodInfo_var;
extern "C" void CameraFlip2_OnPreCull_m613 (CameraFlip2_t147 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t132_m617_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483712);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t132 * L_0 = Component_GetComponent_TisCamera_t132_m617(__this, /*hidden argument*/Component_GetComponent_TisCamera_t132_m617_MethodInfo_var);
		NullCheck(L_0);
		Camera_ResetProjectionMatrix_m618(L_0, /*hidden argument*/NULL);
		Camera_t132 * L_1 = Component_GetComponent_TisCamera_t132_m617(__this, /*hidden argument*/Component_GetComponent_TisCamera_t132_m617_MethodInfo_var);
		Camera_t132 * L_2 = Component_GetComponent_TisCamera_t132_m617(__this, /*hidden argument*/Component_GetComponent_TisCamera_t132_m617_MethodInfo_var);
		NullCheck(L_2);
		Matrix4x4_t148  L_3 = Camera_get_projectionMatrix_m619(L_2, /*hidden argument*/NULL);
		Vector3_t73  L_4 = {0};
		Vector3__ctor_m292(&L_4, (((float)1)), (((float)(-1))), (((float)1)), /*hidden argument*/NULL);
		Matrix4x4_t148  L_5 = Matrix4x4_Scale_m620(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Matrix4x4_t148  L_6 = Matrix4x4_op_Multiply_m621(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Camera_set_projectionMatrix_m622(L_1, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFlip2::OnPreRender()
extern "C" void CameraFlip2_OnPreRender_m614 (CameraFlip2_t147 * __this, const MethodInfo* method)
{
	{
		GL_SetRevertBackfacing_m623(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFlip2::OnPostRender()
extern "C" void CameraFlip2_OnPostRender_m615 (CameraFlip2_t147 * __this, const MethodInfo* method)
{
	{
		GL_SetRevertBackfacing_m623(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFlip2::Main()
extern "C" void CameraFlip2_Main_m616 (CameraFlip2_t147 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
