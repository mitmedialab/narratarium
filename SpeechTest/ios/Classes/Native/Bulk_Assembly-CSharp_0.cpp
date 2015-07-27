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
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
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
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// MedaiPlayerSampleGUI
#include "AssemblyU2DCSharp_MedaiPlayerSampleGUI.h"
#ifndef _MSC_VER
#else
#endif
// MedaiPlayerSampleGUI
#include "AssemblyU2DCSharp_MedaiPlayerSampleGUIMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// MediaPlayerCtrl
#include "AssemblyU2DCSharp_MediaPlayerCtrl.h"
// MediaPlayerCtrl/VideoEnd
#include "AssemblyU2DCSharp_MediaPlayerCtrl_VideoEnd.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// MediaPlayerCtrl/VideoEnd
#include "AssemblyU2DCSharp_MediaPlayerCtrl_VideoEndMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// MediaPlayerCtrl
#include "AssemblyU2DCSharp_MediaPlayerCtrlMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void MedaiPlayerSampleGUI::.ctor()
extern "C" void MedaiPlayerSampleGUI__ctor_m371 (MedaiPlayerSampleGUI_t96 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MedaiPlayerSampleGUI::Start()
extern TypeInfo* VideoEnd_t103_il2cpp_TypeInfo_var;
extern const MethodInfo* MedaiPlayerSampleGUI_OnEnd_m375_MethodInfo_var;
extern "C" void MedaiPlayerSampleGUI_Start_m372 (MedaiPlayerSampleGUI_t96 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		VideoEnd_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		MedaiPlayerSampleGUI_OnEnd_m375_MethodInfo_var = il2cpp_codegen_method_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		MediaPlayerCtrl_t95 * L_0 = (__this->___scrMedia_2);
		MediaPlayerCtrl_t95 * L_1 = L_0;
		NullCheck(L_1);
		VideoEnd_t103 * L_2 = (L_1->___OnEnd_11);
		IntPtr_t L_3 = { (void*)MedaiPlayerSampleGUI_OnEnd_m375_MethodInfo_var };
		VideoEnd_t103 * L_4 = (VideoEnd_t103 *)il2cpp_codegen_object_new (VideoEnd_t103_il2cpp_TypeInfo_var);
		VideoEnd__ctor_m380(L_4, __this, L_3, /*hidden argument*/NULL);
		Delegate_t119 * L_5 = Delegate_Combine_m522(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___OnEnd_11 = ((VideoEnd_t103 *)Castclass(L_5, VideoEnd_t103_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MedaiPlayerSampleGUI::Update()
extern "C" void MedaiPlayerSampleGUI_Update_m373 (MedaiPlayerSampleGUI_t96 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MedaiPlayerSampleGUI::OnGUI()
extern TypeInfo* GUI_t120_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t47_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void MedaiPlayerSampleGUI_OnGUI_m374 (MedaiPlayerSampleGUI_t96 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		Boolean_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t36  L_0 = {0};
		Rect__ctor_m286(&L_0, (50.0f), (50.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m523(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral61, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_2 = (__this->___scrMedia_2);
		NullCheck(L_2);
		MediaPlayerCtrl_Load_m414(L_2, (String_t*) &_stringLiteral62, /*hidden argument*/NULL);
		__this->___m_bFinish_3 = 0;
	}

IL_003f:
	{
		Rect_t36  L_3 = {0};
		Rect__ctor_m286(&L_3, (50.0f), (200.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_4 = GUI_Button_m523(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral63, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0079;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_5 = (__this->___scrMedia_2);
		NullCheck(L_5);
		MediaPlayerCtrl_Play_m411(L_5, /*hidden argument*/NULL);
		__this->___m_bFinish_3 = 0;
	}

IL_0079:
	{
		Rect_t36  L_6 = {0};
		Rect__ctor_m286(&L_6, (50.0f), (350.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m523(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral64, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00ac;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_8 = (__this->___scrMedia_2);
		NullCheck(L_8);
		MediaPlayerCtrl_Stop_m412(L_8, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		Rect_t36  L_9 = {0};
		Rect__ctor_m286(&L_9, (50.0f), (500.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_10 = GUI_Button_m523(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral65, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00df;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_11 = (__this->___scrMedia_2);
		NullCheck(L_11);
		MediaPlayerCtrl_Pause_m413(L_11, /*hidden argument*/NULL);
	}

IL_00df:
	{
		Rect_t36  L_12 = {0};
		Rect__ctor_m286(&L_12, (50.0f), (650.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_13 = GUI_Button_m523(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral66, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0112;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_14 = (__this->___scrMedia_2);
		NullCheck(L_14);
		MediaPlayerCtrl_UnLoad_m422(L_14, /*hidden argument*/NULL);
	}

IL_0112:
	{
		Rect_t36  L_15 = {0};
		Rect__ctor_m286(&L_15, (50.0f), (800.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		bool L_16 = (__this->___m_bFinish_3);
		bool L_17 = L_16;
		Object_t * L_18 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral37, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_20 = GUI_Button_m523(NULL /*static, unused*/, L_15, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_014a;
		}
	}

IL_014a:
	{
		return;
	}
}
// System.Void MedaiPlayerSampleGUI::OnEnd()
extern "C" void MedaiPlayerSampleGUI_OnEnd_m375 (MedaiPlayerSampleGUI_t96 * __this, const MethodInfo* method)
{
	{
		__this->___m_bFinish_3 = 1;
		return;
	}
}
// MedaiPlayerSampleSphereGUI
#include "AssemblyU2DCSharp_MedaiPlayerSampleSphereGUI.h"
#ifndef _MSC_VER
#else
#endif
// MedaiPlayerSampleSphereGUI
#include "AssemblyU2DCSharp_MedaiPlayerSampleSphereGUIMethodDeclarations.h"

// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#include "UnityEngine_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void MedaiPlayerSampleSphereGUI::.ctor()
extern "C" void MedaiPlayerSampleSphereGUI__ctor_m376 (MedaiPlayerSampleSphereGUI_t97 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MedaiPlayerSampleSphereGUI::Start()
extern "C" void MedaiPlayerSampleSphereGUI_Start_m377 (MedaiPlayerSampleSphereGUI_t97 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MedaiPlayerSampleSphereGUI::Update()
extern TypeInfo* Input_t123_il2cpp_TypeInfo_var;
extern "C" void MedaiPlayerSampleSphereGUI_Update_m378 (MedaiPlayerSampleSphereGUI_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t121  V_0 = {0};
	TouchU5BU5D_t122* V_1 = {0};
	int32_t V_2 = 0;
	Vector3_t73  V_3 = {0};
	Vector3_t73  V_4 = {0};
	Vector2_t22  V_5 = {0};
	Vector3_t73  V_6 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t123_il2cpp_TypeInfo_var);
		TouchU5BU5D_t122* L_0 = Input_get_touches_m524(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_007a;
	}

IL_000d:
	{
		TouchU5BU5D_t122* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		V_0 = (*(Touch_t121 *)((Touch_t121 *)(Touch_t121 *)SZArrayLdElema(L_1, L_2)));
		Transform_t124 * L_3 = Component_get_transform_m525(__this, /*hidden argument*/NULL);
		Transform_t124 * L_4 = Component_get_transform_m525(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t73  L_5 = Transform_get_localEulerAngles_m526(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = ((&V_3)->___x_0);
		Transform_t124 * L_7 = Component_get_transform_m525(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t73  L_8 = Transform_get_localEulerAngles_m526(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_1);
		Vector2_t22  L_10 = Touch_get_deltaPosition_m527((&V_0), /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = ((&V_5)->___x_1);
		Transform_t124 * L_12 = Component_get_transform_m525(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t73  L_13 = Transform_get_localEulerAngles_m526(L_12, /*hidden argument*/NULL);
		V_6 = L_13;
		float L_14 = ((&V_6)->___z_2);
		Vector3_t73  L_15 = {0};
		Vector3__ctor_m292(&L_15, L_6, ((float)((float)L_9+(float)L_11)), L_14, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localEulerAngles_m528(L_3, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_007a:
	{
		int32_t L_17 = V_2;
		TouchU5BU5D_t122* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void MedaiPlayerSampleSphereGUI::OnGUI()
extern TypeInfo* GUI_t120_il2cpp_TypeInfo_var;
extern "C" void MedaiPlayerSampleSphereGUI_OnGUI_m379 (MedaiPlayerSampleSphereGUI_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t36  L_0 = {0};
		Rect__ctor_m286(&L_0, (50.0f), (50.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m523(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral61, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_2 = (__this->___scrMedia_2);
		NullCheck(L_2);
		MediaPlayerCtrl_Load_m414(L_2, (String_t*) &_stringLiteral62, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Rect_t36  L_3 = {0};
		Rect__ctor_m286(&L_3, (50.0f), (200.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_4 = GUI_Button_m523(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral63, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_5 = (__this->___scrMedia_2);
		NullCheck(L_5);
		MediaPlayerCtrl_Play_m411(L_5, /*hidden argument*/NULL);
	}

IL_006b:
	{
		Rect_t36  L_6 = {0};
		Rect__ctor_m286(&L_6, (50.0f), (350.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m523(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral64, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_009e;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_8 = (__this->___scrMedia_2);
		NullCheck(L_8);
		MediaPlayerCtrl_Stop_m412(L_8, /*hidden argument*/NULL);
	}

IL_009e:
	{
		Rect_t36  L_9 = {0};
		Rect__ctor_m286(&L_9, (50.0f), (500.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_10 = GUI_Button_m523(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral65, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00d1;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_11 = (__this->___scrMedia_2);
		NullCheck(L_11);
		MediaPlayerCtrl_Pause_m413(L_11, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		Rect_t36  L_12 = {0};
		Rect__ctor_m286(&L_12, (50.0f), (650.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		bool L_13 = GUI_Button_m523(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral66, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0104;
		}
	}
	{
		MediaPlayerCtrl_t95 * L_14 = (__this->___scrMedia_2);
		NullCheck(L_14);
		MediaPlayerCtrl_UnLoad_m422(L_14, /*hidden argument*/NULL);
	}

IL_0104:
	{
		return;
	}
}
// MediaPlayerCtrl/MEDIAPLAYER_ERROR
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_ERROR.h"
#ifndef _MSC_VER
#else
#endif
// MediaPlayerCtrl/MEDIAPLAYER_ERROR
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_ERRORMethodDeclarations.h"



// MediaPlayerCtrl/MEDIAPLAYER_STATE
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_STATE.h"
#ifndef _MSC_VER
#else
#endif
// MediaPlayerCtrl/MEDIAPLAYER_STATE
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_STATEMethodDeclarations.h"



// MediaPlayerCtrl/MEDIA_SCALE
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIA_SCALE.h"
#ifndef _MSC_VER
#else
#endif
// MediaPlayerCtrl/MEDIA_SCALE
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIA_SCALEMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void MediaPlayerCtrl/VideoEnd::.ctor(System.Object,System.IntPtr)
extern "C" void VideoEnd__ctor_m380 (VideoEnd_t103 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MediaPlayerCtrl/VideoEnd::Invoke()
extern "C" void VideoEnd_Invoke_m381 (VideoEnd_t103 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		VideoEnd_Invoke_m381((VideoEnd_t103 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_VideoEnd_t103(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MediaPlayerCtrl/VideoEnd::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * VideoEnd_BeginInvoke_m382 (VideoEnd_t103 * __this, AsyncCallback_t102 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MediaPlayerCtrl/VideoEnd::EndInvoke(System.IAsyncResult)
extern "C" void VideoEnd_EndInvoke_m383 (VideoEnd_t103 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// MediaPlayerCtrl/VideoReady
#include "AssemblyU2DCSharp_MediaPlayerCtrl_VideoReady.h"
#ifndef _MSC_VER
#else
#endif
// MediaPlayerCtrl/VideoReady
#include "AssemblyU2DCSharp_MediaPlayerCtrl_VideoReadyMethodDeclarations.h"



// System.Void MediaPlayerCtrl/VideoReady::.ctor(System.Object,System.IntPtr)
extern "C" void VideoReady__ctor_m384 (VideoReady_t105 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MediaPlayerCtrl/VideoReady::Invoke()
extern "C" void VideoReady_Invoke_m385 (VideoReady_t105 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		VideoReady_Invoke_m385((VideoReady_t105 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_VideoReady_t105(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MediaPlayerCtrl/VideoReady::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * VideoReady_BeginInvoke_m386 (VideoReady_t105 * __this, AsyncCallback_t102 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MediaPlayerCtrl/VideoReady::EndInvoke(System.IAsyncResult)
extern "C" void VideoReady_EndInvoke_m387 (VideoReady_t105 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>c__Iterator0
#include "AssemblyU2DCSharp_MediaPlayerCtrl_U3CDownloadStreamingVideoA.h"
#ifndef _MSC_VER
#else
#endif
// MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>c__Iterator0
#include "AssemblyU2DCSharp_MediaPlayerCtrl_U3CDownloadStreamingVideoAMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.IO.DirectoryInfo
#include "mscorlib_System_IO_DirectoryInfo.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.IO.Directory
#include "mscorlib_System_IO_DirectoryMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>c__Iterator0::.ctor()
extern "C" void U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0__ctor_m388 (U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m389 (U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m390 (U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>c__Iterator0::MoveNext()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t106_il2cpp_TypeInfo_var;
extern "C" bool U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_MoveNext_m391 (U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		WWW_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_3);
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_014a;
	}

IL_0021:
	{
		String_t* L_2 = (__this->___strURL_0);
		NullCheck(L_2);
		String_t* L_3 = String_Trim_m218(L_2, /*hidden argument*/NULL);
		__this->___strURL_0 = L_3;
		String_t* L_4 = (__this->___strURL_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral80, L_4, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		String_t* L_6 = (__this->___strURL_0);
		WWW_t106 * L_7 = (WWW_t106 *)il2cpp_codegen_object_new (WWW_t106_il2cpp_TypeInfo_var);
		WWW__ctor_m529(L_7, L_6, /*hidden argument*/NULL);
		__this->___U3CwwwU3E__0_1 = L_7;
		WWW_t106 * L_8 = (__this->___U3CwwwU3E__0_1);
		__this->___U24current_4 = L_8;
		__this->___U24PC_3 = 1;
		goto IL_014c;
	}

IL_0070:
	{
		WWW_t106 * L_9 = (__this->___U3CwwwU3E__0_1);
		NullCheck(L_9);
		String_t* L_10 = WWW_get_error_m530(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_IsNullOrEmpty_m209(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_011b;
		}
	}
	{
		String_t* L_12 = Application_get_persistentDataPath_m531(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m213(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral68, /*hidden argument*/NULL);
		bool L_14 = Directory_Exists_m532(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00b3;
		}
	}
	{
		String_t* L_15 = Application_get_persistentDataPath_m531(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m213(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral68, /*hidden argument*/NULL);
		Directory_CreateDirectory_m228(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		String_t* L_17 = Application_get_persistentDataPath_m531(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_18 = (__this->___strURL_0);
		String_t* L_19 = (__this->___strURL_0);
		NullCheck(L_19);
		int32_t L_20 = String_LastIndexOf_m533(L_19, (String_t*) &_stringLiteral81, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_21 = String_Substring_m314(L_18, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m261(NULL /*static, unused*/, L_17, (String_t*) &_stringLiteral68, L_21, /*hidden argument*/NULL);
		__this->___U3Cwrite_pathU3E__1_2 = L_22;
		String_t* L_23 = (__this->___U3Cwrite_pathU3E__1_2);
		WWW_t106 * L_24 = (__this->___U3CwwwU3E__0_1);
		NullCheck(L_24);
		ByteU5BU5D_t54* L_25 = WWW_get_bytes_m534(L_24, /*hidden argument*/NULL);
		File_WriteAllBytes_m535(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		MediaPlayerCtrl_t95 * L_26 = (__this->___U3CU3Ef__this_6);
		String_t* L_27 = (__this->___U3Cwrite_pathU3E__1_2);
		String_t* L_28 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral82, L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		MediaPlayerCtrl_Call_Load_m450(L_26, L_28, 0, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_011b:
	{
		WWW_t106 * L_29 = (__this->___U3CwwwU3E__0_1);
		NullCheck(L_29);
		String_t* L_30 = WWW_get_error_m530(L_29, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
	}

IL_012b:
	{
		WWW_t106 * L_31 = (__this->___U3CwwwU3E__0_1);
		NullCheck(L_31);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.WWW::Dispose() */, L_31);
		__this->___U3CwwwU3E__0_1 = (WWW_t106 *)NULL;
		Resources_UnloadUnusedAssets_m536(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U24PC_3 = (-1);
	}

IL_014a:
	{
		return 0;
	}

IL_014c:
	{
		return 1;
	}
	// Dead block : IL_014e: ldloc.1
}
// System.Void MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>c__Iterator0::Dispose()
extern "C" void U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_Dispose_m392 (U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t44_il2cpp_TypeInfo_var;
extern "C" void U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_Reset_m393 (U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t44 * L_0 = (NotSupportedException_t44 *)il2cpp_codegen_object_new (NotSupportedException_t44_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m201(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>c__Iterator1
#include "AssemblyU2DCSharp_MediaPlayerCtrl_U3CCopyStreamingAssetVideo.h"
#ifndef _MSC_VER
#else
#endif
// MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>c__Iterator1
#include "AssemblyU2DCSharp_MediaPlayerCtrl_U3CCopyStreamingAssetVideoMethodDeclarations.h"



// System.Void MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>c__Iterator1::.ctor()
extern "C" void U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1__ctor_m394 (U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m395 (U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m396 (U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>c__Iterator1::MoveNext()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t106_il2cpp_TypeInfo_var;
extern "C" bool U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_MoveNext_m397 (U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		WWW_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_3);
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_014d;
	}

IL_0021:
	{
		String_t* L_2 = (__this->___strURL_0);
		NullCheck(L_2);
		String_t* L_3 = String_Trim_m218(L_2, /*hidden argument*/NULL);
		__this->___strURL_0 = L_3;
		String_t* L_4 = Application_get_persistentDataPath_m531(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = (__this->___strURL_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m261(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral81, L_5, /*hidden argument*/NULL);
		__this->___U3Cwrite_pathU3E__0_1 = L_6;
		String_t* L_7 = (__this->___U3Cwrite_pathU3E__0_1);
		bool L_8 = File_Exists_m537(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0129;
		}
	}
	{
		String_t* L_9 = (__this->___strURL_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral83, L_9, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		String_t* L_11 = Application_get_streamingAssetsPath_m538(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_12 = (__this->___strURL_0);
		String_t* L_13 = String_Concat_m261(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral81, L_12, /*hidden argument*/NULL);
		WWW_t106 * L_14 = (WWW_t106 *)il2cpp_codegen_object_new (WWW_t106_il2cpp_TypeInfo_var);
		WWW__ctor_m529(L_14, L_13, /*hidden argument*/NULL);
		__this->___U3CwwwU3E__1_2 = L_14;
		WWW_t106 * L_15 = (__this->___U3CwwwU3E__1_2);
		__this->___U24current_4 = L_15;
		__this->___U24PC_3 = 1;
		goto IL_014f;
	}

IL_00aa:
	{
		WWW_t106 * L_16 = (__this->___U3CwwwU3E__1_2);
		NullCheck(L_16);
		String_t* L_17 = WWW_get_error_m530(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_IsNullOrEmpty_m209(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0102;
		}
	}
	{
		String_t* L_19 = (__this->___U3Cwrite_pathU3E__0_1);
		Debug_Log_m280(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		String_t* L_20 = (__this->___U3Cwrite_pathU3E__0_1);
		WWW_t106 * L_21 = (__this->___U3CwwwU3E__1_2);
		NullCheck(L_21);
		ByteU5BU5D_t54* L_22 = WWW_get_bytes_m534(L_21, /*hidden argument*/NULL);
		File_WriteAllBytes_m535(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		MediaPlayerCtrl_t95 * L_23 = (__this->___U3CU3Ef__this_6);
		String_t* L_24 = (__this->___U3Cwrite_pathU3E__0_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral82, L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		MediaPlayerCtrl_Call_Load_m450(L_23, L_25, 0, /*hidden argument*/NULL);
		goto IL_0112;
	}

IL_0102:
	{
		WWW_t106 * L_26 = (__this->___U3CwwwU3E__1_2);
		NullCheck(L_26);
		String_t* L_27 = WWW_get_error_m530(L_26, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
	}

IL_0112:
	{
		WWW_t106 * L_28 = (__this->___U3CwwwU3E__1_2);
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.WWW::Dispose() */, L_28);
		__this->___U3CwwwU3E__1_2 = (WWW_t106 *)NULL;
		goto IL_0146;
	}

IL_0129:
	{
		MediaPlayerCtrl_t95 * L_29 = (__this->___U3CU3Ef__this_6);
		String_t* L_30 = (__this->___U3Cwrite_pathU3E__0_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral82, L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		MediaPlayerCtrl_Call_Load_m450(L_29, L_31, 0, /*hidden argument*/NULL);
	}

IL_0146:
	{
		__this->___U24PC_3 = (-1);
	}

IL_014d:
	{
		return 0;
	}

IL_014f:
	{
		return 1;
	}
	// Dead block : IL_0151: ldloc.1
}
// System.Void MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>c__Iterator1::Dispose()
extern "C" void U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_Dispose_m398 (U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>c__Iterator1::Reset()
extern TypeInfo* NotSupportedException_t44_il2cpp_TypeInfo_var;
extern "C" void U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_Reset_m399 (U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t44 * L_0 = (NotSupportedException_t44 *)il2cpp_codegen_object_new (NotSupportedException_t44_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m201(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilter.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilterMethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
struct GameObject_t72;
struct MeshFilter_t125;
struct GameObject_t72;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m285_gshared (GameObject_t72 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m285(__this, method) (( Object_t * (*) (GameObject_t72 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m285_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
#define GameObject_GetComponent_TisMeshFilter_t125_m539(__this, method) (( MeshFilter_t125 * (*) (GameObject_t72 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m285_gshared)(__this, method)
struct GameObject_t72;
struct MeshRenderer_t126;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t126_m540(__this, method) (( MeshRenderer_t126 * (*) (GameObject_t72 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m285_gshared)(__this, method)


// System.Void MediaPlayerCtrl::.ctor()
extern "C" void MediaPlayerCtrl__ctor_m400 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		__this->___m_bSupportRockchip_9 = 1;
		__this->___m_bAutoPlay_17 = 1;
		__this->___videoTextureFormat_20 = ((int32_t)14);
		__this->___m_iID_21 = (-1);
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerCtrl::Awake()
extern const MethodInfo* GameObject_GetComponent_TisMeshFilter_t125_m539_MethodInfo_var;
extern "C" void MediaPlayerCtrl_Awake_m401 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisMeshFilter_t125_m539_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		s_Il2CppMethodIntialized = true;
	}
	Vector2U5BU5D_t127* V_0 = {0};
	int32_t V_1 = 0;
	{
		String_t* L_0 = SystemInfo_get_deviceModel_m541(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = String_Contains_m542(L_0, (String_t*) &_stringLiteral67, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		__this->___m_bSupportRockchip_9 = 1;
		goto IL_0027;
	}

IL_0020:
	{
		__this->___m_bSupportRockchip_9 = 0;
	}

IL_0027:
	{
		GameObject_t72 * L_2 = (__this->___m_TargetMaterial_3);
		NullCheck(L_2);
		MeshFilter_t125 * L_3 = GameObject_GetComponent_TisMeshFilter_t125_m539(L_2, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t125_m539_MethodInfo_var);
		NullCheck(L_3);
		Mesh_t128 * L_4 = MeshFilter_get_mesh_m543(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector2U5BU5D_t127* L_5 = Mesh_get_uv_m544(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0077;
	}

IL_0044:
	{
		Vector2U5BU5D_t127* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		Vector2U5BU5D_t127* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		float L_10 = (((Vector2_t22 *)(Vector2_t22 *)SZArrayLdElema(L_8, L_9))->___x_1);
		Vector2U5BU5D_t127* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		float L_13 = (((Vector2_t22 *)(Vector2_t22 *)SZArrayLdElema(L_11, L_12))->___y_2);
		Vector2_t22  L_14 = {0};
		Vector2__ctor_m263(&L_14, L_10, ((float)((float)(1.0f)-(float)L_13)), /*hidden argument*/NULL);
		*((Vector2_t22 *)(Vector2_t22 *)SZArrayLdElema(L_6, L_7)) = L_14;
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0077:
	{
		int32_t L_16 = V_1;
		Vector2U5BU5D_t127* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		GameObject_t72 * L_18 = (__this->___m_TargetMaterial_3);
		NullCheck(L_18);
		MeshFilter_t125 * L_19 = GameObject_GetComponent_TisMeshFilter_t125_m539(L_18, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t125_m539_MethodInfo_var);
		NullCheck(L_19);
		Mesh_t128 * L_20 = MeshFilter_get_mesh_m543(L_19, /*hidden argument*/NULL);
		Vector2U5BU5D_t127* L_21 = V_0;
		NullCheck(L_20);
		Mesh_set_uv_m545(L_20, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerCtrl::Start()
extern "C" void MediaPlayerCtrl_Start_m402 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		MediaPlayerCtrl_Call_SetUnityActivity_m465(__this, /*hidden argument*/NULL);
		MediaPlayerCtrl_SetVolume_m415(__this, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerCtrl::OnApplicationQuit()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void MediaPlayerCtrl_OnApplicationQuit_m403 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_persistentDataPath_m531(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m213(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral68, /*hidden argument*/NULL);
		bool L_2 = Directory_Exists_m532(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = Application_get_persistentDataPath_m531(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m213(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral68, /*hidden argument*/NULL);
		Directory_Delete_m546(NULL /*static, unused*/, L_4, 1, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void MediaPlayerCtrl::Update()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void MediaPlayerCtrl_Update_m404 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = (__this->___m_strFileName_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m209(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		bool L_2 = (__this->___m_bFirst_13);
		if (L_2)
		{
			goto IL_0068;
		}
	}
	{
		String_t* L_3 = (__this->___m_strFileName_2);
		NullCheck(L_3);
		String_t* L_4 = String_Trim_m218(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m547(L_5, (String_t*) &_stringLiteral69, 5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_7 = V_0;
		Object_t * L_8 = MediaPlayerCtrl_DownloadStreamingVideoAndLoad_m471(__this, L_7, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m548(__this, L_8, /*hidden argument*/NULL);
		goto IL_0055;
	}

IL_004c:
	{
		String_t* L_9 = V_0;
		MediaPlayerCtrl_Call_Load_m450(__this, L_9, 0, /*hidden argument*/NULL);
	}

IL_0055:
	{
		bool L_10 = (__this->___m_bLoop_16);
		MediaPlayerCtrl_Call_SetLooping_m464(__this, L_10, /*hidden argument*/NULL);
		__this->___m_bFirst_13 = 1;
	}

IL_0068:
	{
		int32_t L_11 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_0169;
		}
	}
	{
		bool L_12 = (__this->___m_bCheckFBO_19);
		if (L_12)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_13 = MediaPlayerCtrl_Call_GetVideoWidth_m460(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_14 = MediaPlayerCtrl_Call_GetVideoHeight_m461(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0098;
		}
	}

IL_0097:
	{
		return;
	}

IL_0098:
	{
		MediaPlayerCtrl_Resize_m405(__this, /*hidden argument*/NULL);
		Texture2D_t109 * L_15 = (__this->___m_VideoTexture_4);
		bool L_16 = Object_op_Inequality_m294(NULL /*static, unused*/, L_15, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00e5;
		}
	}
	{
		Texture2D_t109 * L_17 = (__this->___m_VideoTextureDummy_5);
		bool L_18 = Object_op_Inequality_m294(NULL /*static, unused*/, L_17, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00d2;
		}
	}
	{
		Texture2D_t109 * L_19 = (__this->___m_VideoTextureDummy_5);
		Object_Destroy_m296(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		__this->___m_VideoTextureDummy_5 = (Texture2D_t109 *)NULL;
	}

IL_00d2:
	{
		Texture2D_t109 * L_20 = (__this->___m_VideoTexture_4);
		__this->___m_VideoTextureDummy_5 = L_20;
		__this->___m_VideoTexture_4 = (Texture2D_t109 *)NULL;
	}

IL_00e5:
	{
		MediaPlayerCtrl_Call_SetWindowSize_m463(__this, /*hidden argument*/NULL);
		__this->___m_bCheckFBO_19 = 1;
	}

IL_00f2:
	{
		MediaPlayerCtrl_Call_UpdateVideoTexture_m451(__this, /*hidden argument*/NULL);
		int32_t L_21 = MediaPlayerCtrl_Call_GetSeekPosition_m454(__this, /*hidden argument*/NULL);
		__this->___m_iCurrentSeekPosition_7 = L_21;
		String_t* L_22 = (__this->___m_strFileName_2);
		NullCheck(L_22);
		bool L_23 = String_StartsWith_m547(L_22, (String_t*) &_stringLiteral70, 5, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0130;
		}
	}
	{
		String_t* L_24 = (__this->___m_strFileName_2);
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m547(L_24, (String_t*) &_stringLiteral69, 5, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0135;
		}
	}

IL_0130:
	{
		goto IL_0169;
	}

IL_0135:
	{
		int32_t L_26 = (__this->___m_iCurrentSeekPosition_7);
		int32_t L_27 = MediaPlayerCtrl_Call_GetDuration_m468(__this, /*hidden argument*/NULL);
		bool L_28 = (__this->___m_bLoop_16);
		int32_t L_29 = (__this->___m_CurrentState_6);
		if (!((int32_t)((int32_t)((int32_t)((int32_t)((((int32_t)L_26) > ((int32_t)((int32_t)((int32_t)L_27-(int32_t)((int32_t)500)))))? 1 : 0)&(int32_t)((((int32_t)L_28) == ((int32_t)1))? 1 : 0)))&(int32_t)((((int32_t)L_29) == ((int32_t)3))? 1 : 0))))
		{
			goto IL_0169;
		}
	}
	{
		MediaPlayerCtrl_SeekTo_m417(__this, 0, /*hidden argument*/NULL);
	}

IL_0169:
	{
		int32_t L_30 = (__this->___m_CurrentState_6);
		int32_t L_31 = MediaPlayerCtrl_Call_GetStatus_m470(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_0216;
		}
	}
	{
		int32_t L_32 = MediaPlayerCtrl_Call_GetStatus_m470(__this, /*hidden argument*/NULL);
		__this->___m_CurrentState_6 = L_32;
		int32_t L_33 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_01bf;
		}
	}
	{
		VideoReady_t105 * L_34 = (__this->___OnReady_10);
		if (!L_34)
		{
			goto IL_01a8;
		}
	}
	{
		VideoReady_t105 * L_35 = (__this->___OnReady_10);
		NullCheck(L_35);
		VirtActionInvoker0::Invoke(10 /* System.Void MediaPlayerCtrl/VideoReady::Invoke() */, L_35);
	}

IL_01a8:
	{
		bool L_36 = (__this->___m_bAutoPlay_17);
		if (!L_36)
		{
			goto IL_01ba;
		}
	}
	{
		MediaPlayerCtrl_Call_Play_m455(__this, 0, /*hidden argument*/NULL);
	}

IL_01ba:
	{
		goto IL_0216;
	}

IL_01bf:
	{
		int32_t L_37 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_01f8;
		}
	}
	{
		VideoEnd_t103 * L_38 = (__this->___OnEnd_11);
		if (!L_38)
		{
			goto IL_01e1;
		}
	}
	{
		VideoEnd_t103 * L_39 = (__this->___OnEnd_11);
		NullCheck(L_39);
		VirtActionInvoker0::Invoke(10 /* System.Void MediaPlayerCtrl/VideoEnd::Invoke() */, L_39);
	}

IL_01e1:
	{
		bool L_40 = (__this->___m_bLoop_16);
		if (!L_40)
		{
			goto IL_01f3;
		}
	}
	{
		MediaPlayerCtrl_Call_Play_m455(__this, 0, /*hidden argument*/NULL);
	}

IL_01f3:
	{
		goto IL_0216;
	}

IL_01f8:
	{
		int32_t L_41 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_41) == ((uint32_t)6))))
		{
			goto IL_0216;
		}
	}
	{
		int32_t L_42 = MediaPlayerCtrl_Call_GetError_m466(__this, /*hidden argument*/NULL);
		int32_t L_43 = MediaPlayerCtrl_Call_GetErrorExtra_m467(__this, /*hidden argument*/NULL);
		MediaPlayerCtrl_OnError_m406(__this, L_42, L_43, /*hidden argument*/NULL);
	}

IL_0216:
	{
		return;
	}
}
// System.Void MediaPlayerCtrl::Resize()
extern "C" void MediaPlayerCtrl_Resize_m405 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t73  V_7 = {0};
	Vector3_t73  V_8 = {0};
	Vector3_t73  V_9 = {0};
	Vector3_t73  V_10 = {0};
	Vector3_t73  V_11 = {0};
	Vector3_t73  V_12 = {0};
	Vector3_t73  V_13 = {0};
	Vector3_t73  V_14 = {0};
	Vector3_t73  V_15 = {0};
	Vector3_t73  V_16 = {0};
	Vector3_t73  V_17 = {0};
	Vector3_t73  V_18 = {0};
	Vector3_t73  V_19 = {0};
	Vector3_t73  V_20 = {0};
	Vector3_t73  V_21 = {0};
	Vector3_t73  V_22 = {0};
	Vector3_t73  V_23 = {0};
	Vector3_t73  V_24 = {0};
	Vector3_t73  V_25 = {0};
	Vector3_t73  V_26 = {0};
	Vector3_t73  V_27 = {0};
	{
		int32_t L_0 = (__this->___m_CurrentState_6);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		GameObject_t72 * L_1 = (__this->___m_objResize_15);
		bool L_2 = Object_op_Inequality_m294(NULL /*static, unused*/, L_1, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_3 = Screen_get_width_m549(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = Screen_get_height_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = ((float)((float)(((float)L_5))/(float)(((float)L_6))));
		int32_t L_7 = MediaPlayerCtrl_Call_GetVideoWidth_m460(__this, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = MediaPlayerCtrl_Call_GetVideoHeight_m461(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = V_4;
		int32_t L_10 = V_3;
		V_5 = ((float)((float)(((float)L_9))/(float)(((float)L_10))));
		float L_11 = V_2;
		float L_12 = V_5;
		V_6 = ((float)((float)L_11/(float)L_12));
		bool L_13 = (__this->___m_bFullScreen_8);
		if (!L_13)
		{
			goto IL_00d7;
		}
	}
	{
		float L_14 = V_5;
		if ((!(((float)L_14) < ((float)(1.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_15 = V_2;
		if ((!(((float)L_15) < ((float)(1.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		float L_16 = V_5;
		float L_17 = V_2;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0094;
		}
	}
	{
		GameObject_t72 * L_18 = (__this->___m_objResize_15);
		NullCheck(L_18);
		Transform_t124 * L_19 = GameObject_get_transform_m550(L_18, /*hidden argument*/NULL);
		Transform_t124 * L_20 = L_19;
		NullCheck(L_20);
		Vector3_t73  L_21 = Transform_get_localScale_m551(L_20, /*hidden argument*/NULL);
		float L_22 = V_6;
		Vector3_t73  L_23 = Vector3_op_Multiply_m552(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localScale_m553(L_20, L_23, /*hidden argument*/NULL);
	}

IL_0094:
	{
		__this->___m_ScaleValue_14 = 0;
		goto IL_00d7;
	}

IL_00a0:
	{
		float L_24 = V_2;
		if ((!(((float)L_24) > ((float)(1.0f)))))
		{
			goto IL_00d0;
		}
	}
	{
		float L_25 = V_5;
		float L_26 = V_2;
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00d0;
		}
	}
	{
		GameObject_t72 * L_27 = (__this->___m_objResize_15);
		NullCheck(L_27);
		Transform_t124 * L_28 = GameObject_get_transform_m550(L_27, /*hidden argument*/NULL);
		Transform_t124 * L_29 = L_28;
		NullCheck(L_29);
		Vector3_t73  L_30 = Transform_get_localScale_m551(L_29, /*hidden argument*/NULL);
		float L_31 = V_6;
		Vector3_t73  L_32 = Vector3_op_Multiply_m552(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localScale_m553(L_29, L_32, /*hidden argument*/NULL);
	}

IL_00d0:
	{
		__this->___m_ScaleValue_14 = 2;
	}

IL_00d7:
	{
		int32_t L_33 = (__this->___m_ScaleValue_14);
		if (L_33)
		{
			goto IL_014a;
		}
	}
	{
		GameObject_t72 * L_34 = (__this->___m_objResize_15);
		NullCheck(L_34);
		Transform_t124 * L_35 = GameObject_get_transform_m550(L_34, /*hidden argument*/NULL);
		GameObject_t72 * L_36 = (__this->___m_objResize_15);
		NullCheck(L_36);
		Transform_t124 * L_37 = GameObject_get_transform_m550(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t73  L_38 = Transform_get_localScale_m551(L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		float L_39 = ((&V_7)->___x_0);
		GameObject_t72 * L_40 = (__this->___m_objResize_15);
		NullCheck(L_40);
		Transform_t124 * L_41 = GameObject_get_transform_m550(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t73  L_42 = Transform_get_localScale_m551(L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		float L_43 = ((&V_8)->___x_0);
		float L_44 = V_5;
		GameObject_t72 * L_45 = (__this->___m_objResize_15);
		NullCheck(L_45);
		Transform_t124 * L_46 = GameObject_get_transform_m550(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t73  L_47 = Transform_get_localScale_m551(L_46, /*hidden argument*/NULL);
		V_9 = L_47;
		float L_48 = ((&V_9)->___z_2);
		Vector3_t73  L_49 = {0};
		Vector3__ctor_m292(&L_49, L_39, ((float)((float)L_43*(float)L_44)), L_48, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localScale_m553(L_35, L_49, /*hidden argument*/NULL);
		goto IL_03ee;
	}

IL_014a:
	{
		int32_t L_50 = (__this->___m_ScaleValue_14);
		if ((!(((uint32_t)L_50) == ((uint32_t)1))))
		{
			goto IL_01be;
		}
	}
	{
		GameObject_t72 * L_51 = (__this->___m_objResize_15);
		NullCheck(L_51);
		Transform_t124 * L_52 = GameObject_get_transform_m550(L_51, /*hidden argument*/NULL);
		GameObject_t72 * L_53 = (__this->___m_objResize_15);
		NullCheck(L_53);
		Transform_t124 * L_54 = GameObject_get_transform_m550(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t73  L_55 = Transform_get_localScale_m551(L_54, /*hidden argument*/NULL);
		V_10 = L_55;
		float L_56 = ((&V_10)->___x_0);
		GameObject_t72 * L_57 = (__this->___m_objResize_15);
		NullCheck(L_57);
		Transform_t124 * L_58 = GameObject_get_transform_m550(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_t73  L_59 = Transform_get_localScale_m551(L_58, /*hidden argument*/NULL);
		V_11 = L_59;
		float L_60 = ((&V_11)->___y_1);
		GameObject_t72 * L_61 = (__this->___m_objResize_15);
		NullCheck(L_61);
		Transform_t124 * L_62 = GameObject_get_transform_m550(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t73  L_63 = Transform_get_localScale_m551(L_62, /*hidden argument*/NULL);
		V_12 = L_63;
		float L_64 = ((&V_12)->___x_0);
		float L_65 = V_5;
		Vector3_t73  L_66 = {0};
		Vector3__ctor_m292(&L_66, L_56, L_60, ((float)((float)L_64*(float)L_65)), /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_set_localScale_m553(L_52, L_66, /*hidden argument*/NULL);
		goto IL_03ee;
	}

IL_01be:
	{
		int32_t L_67 = (__this->___m_ScaleValue_14);
		if ((!(((uint32_t)L_67) == ((uint32_t)2))))
		{
			goto IL_0232;
		}
	}
	{
		GameObject_t72 * L_68 = (__this->___m_objResize_15);
		NullCheck(L_68);
		Transform_t124 * L_69 = GameObject_get_transform_m550(L_68, /*hidden argument*/NULL);
		GameObject_t72 * L_70 = (__this->___m_objResize_15);
		NullCheck(L_70);
		Transform_t124 * L_71 = GameObject_get_transform_m550(L_70, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_t73  L_72 = Transform_get_localScale_m551(L_71, /*hidden argument*/NULL);
		V_13 = L_72;
		float L_73 = ((&V_13)->___y_1);
		float L_74 = V_5;
		GameObject_t72 * L_75 = (__this->___m_objResize_15);
		NullCheck(L_75);
		Transform_t124 * L_76 = GameObject_get_transform_m550(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		Vector3_t73  L_77 = Transform_get_localScale_m551(L_76, /*hidden argument*/NULL);
		V_14 = L_77;
		float L_78 = ((&V_14)->___y_1);
		GameObject_t72 * L_79 = (__this->___m_objResize_15);
		NullCheck(L_79);
		Transform_t124 * L_80 = GameObject_get_transform_m550(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		Vector3_t73  L_81 = Transform_get_localScale_m551(L_80, /*hidden argument*/NULL);
		V_15 = L_81;
		float L_82 = ((&V_15)->___z_2);
		Vector3_t73  L_83 = {0};
		Vector3__ctor_m292(&L_83, ((float)((float)L_73/(float)L_74)), L_78, L_82, /*hidden argument*/NULL);
		NullCheck(L_69);
		Transform_set_localScale_m553(L_69, L_83, /*hidden argument*/NULL);
		goto IL_03ee;
	}

IL_0232:
	{
		int32_t L_84 = (__this->___m_ScaleValue_14);
		if ((!(((uint32_t)L_84) == ((uint32_t)3))))
		{
			goto IL_02a6;
		}
	}
	{
		GameObject_t72 * L_85 = (__this->___m_objResize_15);
		NullCheck(L_85);
		Transform_t124 * L_86 = GameObject_get_transform_m550(L_85, /*hidden argument*/NULL);
		GameObject_t72 * L_87 = (__this->___m_objResize_15);
		NullCheck(L_87);
		Transform_t124 * L_88 = GameObject_get_transform_m550(L_87, /*hidden argument*/NULL);
		NullCheck(L_88);
		Vector3_t73  L_89 = Transform_get_localScale_m551(L_88, /*hidden argument*/NULL);
		V_16 = L_89;
		float L_90 = ((&V_16)->___x_0);
		GameObject_t72 * L_91 = (__this->___m_objResize_15);
		NullCheck(L_91);
		Transform_t124 * L_92 = GameObject_get_transform_m550(L_91, /*hidden argument*/NULL);
		NullCheck(L_92);
		Vector3_t73  L_93 = Transform_get_localScale_m551(L_92, /*hidden argument*/NULL);
		V_17 = L_93;
		float L_94 = ((&V_17)->___y_1);
		GameObject_t72 * L_95 = (__this->___m_objResize_15);
		NullCheck(L_95);
		Transform_t124 * L_96 = GameObject_get_transform_m550(L_95, /*hidden argument*/NULL);
		NullCheck(L_96);
		Vector3_t73  L_97 = Transform_get_localScale_m551(L_96, /*hidden argument*/NULL);
		V_18 = L_97;
		float L_98 = ((&V_18)->___y_1);
		float L_99 = V_5;
		Vector3_t73  L_100 = {0};
		Vector3__ctor_m292(&L_100, L_90, L_94, ((float)((float)L_98/(float)L_99)), /*hidden argument*/NULL);
		NullCheck(L_86);
		Transform_set_localScale_m553(L_86, L_100, /*hidden argument*/NULL);
		goto IL_03ee;
	}

IL_02a6:
	{
		int32_t L_101 = (__this->___m_ScaleValue_14);
		if ((!(((uint32_t)L_101) == ((uint32_t)4))))
		{
			goto IL_031a;
		}
	}
	{
		GameObject_t72 * L_102 = (__this->___m_objResize_15);
		NullCheck(L_102);
		Transform_t124 * L_103 = GameObject_get_transform_m550(L_102, /*hidden argument*/NULL);
		GameObject_t72 * L_104 = (__this->___m_objResize_15);
		NullCheck(L_104);
		Transform_t124 * L_105 = GameObject_get_transform_m550(L_104, /*hidden argument*/NULL);
		NullCheck(L_105);
		Vector3_t73  L_106 = Transform_get_localScale_m551(L_105, /*hidden argument*/NULL);
		V_19 = L_106;
		float L_107 = ((&V_19)->___z_2);
		float L_108 = V_5;
		GameObject_t72 * L_109 = (__this->___m_objResize_15);
		NullCheck(L_109);
		Transform_t124 * L_110 = GameObject_get_transform_m550(L_109, /*hidden argument*/NULL);
		NullCheck(L_110);
		Vector3_t73  L_111 = Transform_get_localScale_m551(L_110, /*hidden argument*/NULL);
		V_20 = L_111;
		float L_112 = ((&V_20)->___y_1);
		GameObject_t72 * L_113 = (__this->___m_objResize_15);
		NullCheck(L_113);
		Transform_t124 * L_114 = GameObject_get_transform_m550(L_113, /*hidden argument*/NULL);
		NullCheck(L_114);
		Vector3_t73  L_115 = Transform_get_localScale_m551(L_114, /*hidden argument*/NULL);
		V_21 = L_115;
		float L_116 = ((&V_21)->___z_2);
		Vector3_t73  L_117 = {0};
		Vector3__ctor_m292(&L_117, ((float)((float)L_107*(float)L_108)), L_112, L_116, /*hidden argument*/NULL);
		NullCheck(L_103);
		Transform_set_localScale_m553(L_103, L_117, /*hidden argument*/NULL);
		goto IL_03ee;
	}

IL_031a:
	{
		int32_t L_118 = (__this->___m_ScaleValue_14);
		if ((!(((uint32_t)L_118) == ((uint32_t)5))))
		{
			goto IL_038e;
		}
	}
	{
		GameObject_t72 * L_119 = (__this->___m_objResize_15);
		NullCheck(L_119);
		Transform_t124 * L_120 = GameObject_get_transform_m550(L_119, /*hidden argument*/NULL);
		GameObject_t72 * L_121 = (__this->___m_objResize_15);
		NullCheck(L_121);
		Transform_t124 * L_122 = GameObject_get_transform_m550(L_121, /*hidden argument*/NULL);
		NullCheck(L_122);
		Vector3_t73  L_123 = Transform_get_localScale_m551(L_122, /*hidden argument*/NULL);
		V_22 = L_123;
		float L_124 = ((&V_22)->___x_0);
		GameObject_t72 * L_125 = (__this->___m_objResize_15);
		NullCheck(L_125);
		Transform_t124 * L_126 = GameObject_get_transform_m550(L_125, /*hidden argument*/NULL);
		NullCheck(L_126);
		Vector3_t73  L_127 = Transform_get_localScale_m551(L_126, /*hidden argument*/NULL);
		V_23 = L_127;
		float L_128 = ((&V_23)->___z_2);
		float L_129 = V_5;
		GameObject_t72 * L_130 = (__this->___m_objResize_15);
		NullCheck(L_130);
		Transform_t124 * L_131 = GameObject_get_transform_m550(L_130, /*hidden argument*/NULL);
		NullCheck(L_131);
		Vector3_t73  L_132 = Transform_get_localScale_m551(L_131, /*hidden argument*/NULL);
		V_24 = L_132;
		float L_133 = ((&V_24)->___z_2);
		Vector3_t73  L_134 = {0};
		Vector3__ctor_m292(&L_134, L_124, ((float)((float)L_128*(float)L_129)), L_133, /*hidden argument*/NULL);
		NullCheck(L_120);
		Transform_set_localScale_m553(L_120, L_134, /*hidden argument*/NULL);
		goto IL_03ee;
	}

IL_038e:
	{
		GameObject_t72 * L_135 = (__this->___m_objResize_15);
		NullCheck(L_135);
		Transform_t124 * L_136 = GameObject_get_transform_m550(L_135, /*hidden argument*/NULL);
		GameObject_t72 * L_137 = (__this->___m_objResize_15);
		NullCheck(L_137);
		Transform_t124 * L_138 = GameObject_get_transform_m550(L_137, /*hidden argument*/NULL);
		NullCheck(L_138);
		Vector3_t73  L_139 = Transform_get_localScale_m551(L_138, /*hidden argument*/NULL);
		V_25 = L_139;
		float L_140 = ((&V_25)->___x_0);
		GameObject_t72 * L_141 = (__this->___m_objResize_15);
		NullCheck(L_141);
		Transform_t124 * L_142 = GameObject_get_transform_m550(L_141, /*hidden argument*/NULL);
		NullCheck(L_142);
		Vector3_t73  L_143 = Transform_get_localScale_m551(L_142, /*hidden argument*/NULL);
		V_26 = L_143;
		float L_144 = ((&V_26)->___y_1);
		GameObject_t72 * L_145 = (__this->___m_objResize_15);
		NullCheck(L_145);
		Transform_t124 * L_146 = GameObject_get_transform_m550(L_145, /*hidden argument*/NULL);
		NullCheck(L_146);
		Vector3_t73  L_147 = Transform_get_localScale_m551(L_146, /*hidden argument*/NULL);
		V_27 = L_147;
		float L_148 = ((&V_27)->___z_2);
		Vector3_t73  L_149 = {0};
		Vector3__ctor_m292(&L_149, L_140, L_144, L_148, /*hidden argument*/NULL);
		NullCheck(L_136);
		Transform_set_localScale_m553(L_136, L_149, /*hidden argument*/NULL);
	}

IL_03ee:
	{
		return;
	}
}
// System.Void MediaPlayerCtrl::OnError(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* MEDIAPLAYER_ERROR_t98_il2cpp_TypeInfo_var;
extern "C" void MediaPlayerCtrl_OnError_m406 (MediaPlayerCtrl_t95 * __this, int32_t ___iCode, int32_t ___iCodeExtra, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		MEDIAPLAYER_ERROR_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		int32_t L_1 = ___iCode;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)100))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)200))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0048;
	}

IL_0027:
	{
		V_0 = (String_t*) &_stringLiteral71;
		goto IL_005e;
	}

IL_0032:
	{
		V_0 = (String_t*) &_stringLiteral72;
		goto IL_005e;
	}

IL_003d:
	{
		V_0 = (String_t*) &_stringLiteral73;
		goto IL_005e;
	}

IL_0048:
	{
		int32_t L_5 = ___iCode;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(MEDIAPLAYER_ERROR_t98_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral74, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_005e;
	}

IL_005e:
	{
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m213(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral37, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = ___iCodeExtra;
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (((int32_t)((int32_t)L_12+(int32_t)((int32_t)1010))) == 0)
		{
			goto IL_00d3;
		}
		if (((int32_t)((int32_t)L_12+(int32_t)((int32_t)1010))) == 1)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)L_12+(int32_t)((int32_t)1010))) == 2)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)L_12+(int32_t)((int32_t)1010))) == 3)
		{
			goto IL_00b1;
		}
	}

IL_0088:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1004))))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-110))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00e4;
	}

IL_00a0:
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m213(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral75, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_00fa;
	}

IL_00b1:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m213(NULL /*static, unused*/, L_17, (String_t*) &_stringLiteral76, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_00fa;
	}

IL_00c2:
	{
		String_t* L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m213(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral77, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_00fa;
	}

IL_00d3:
	{
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m213(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral78, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_00fa;
	}

IL_00e4:
	{
		int32_t L_23 = ___iCode;
		int32_t L_24 = L_23;
		Object_t * L_25 = Box(MEDIAPLAYER_ERROR_t98_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral74, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		goto IL_00fa;
	}

IL_00fa:
	{
		String_t* L_27 = V_0;
		Debug_LogError_m554(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerCtrl::OnDestroy()
extern "C" void MediaPlayerCtrl_OnDestroy_m407 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		MediaPlayerCtrl_Call_UnLoad_m449(__this, /*hidden argument*/NULL);
		Texture2D_t109 * L_0 = (__this->___m_VideoTextureDummy_5);
		bool L_1 = Object_op_Inequality_m294(NULL /*static, unused*/, L_0, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		Texture2D_t109 * L_2 = (__this->___m_VideoTextureDummy_5);
		Object_Destroy_m296(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___m_VideoTextureDummy_5 = (Texture2D_t109 *)NULL;
	}

IL_0029:
	{
		Texture2D_t109 * L_3 = (__this->___m_VideoTexture_4);
		bool L_4 = Object_op_Inequality_m294(NULL /*static, unused*/, L_3, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		Texture2D_t109 * L_5 = (__this->___m_VideoTexture_4);
		Object_Destroy_m296(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0045:
	{
		MediaPlayerCtrl_Call_Destroy_m448(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerCtrl::OnApplicationPause(System.Boolean)
extern TypeInfo* Boolean_t47_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void MediaPlayerCtrl_OnApplicationPause_m408 (MediaPlayerCtrl_t95 * __this, bool ___bPause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___bPause;
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral79, L_2, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_4 = ___bPause;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = (__this->___m_iCurrentSeekPosition_7);
		__this->___m_iPauseFrame_12 = L_5;
		MediaPlayerCtrl_Stop_m412(__this, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_0032:
	{
		__this->___m_bStop_18 = 0;
		int32_t L_6 = (__this->___m_iPauseFrame_12);
		MediaPlayerCtrl_Call_Play_m455(__this, L_6, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::GetCurrentState()
extern "C" int32_t MediaPlayerCtrl_GetCurrentState_m409 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_CurrentState_6);
		return L_0;
	}
}
// UnityEngine.Texture2D MediaPlayerCtrl::GetVideoTexture()
extern "C" Texture2D_t109 * MediaPlayerCtrl_GetVideoTexture_m410 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		Texture2D_t109 * L_0 = (__this->___m_VideoTexture_4);
		return L_0;
	}
}
// System.Void MediaPlayerCtrl::Play()
extern "C" void MediaPlayerCtrl_Play_m411 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_bStop_18);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		MediaPlayerCtrl_Call_Play_m455(__this, 0, /*hidden argument*/NULL);
		__this->___m_bStop_18 = 0;
	}

IL_0019:
	{
		int32_t L_1 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0030;
		}
	}
	{
		MediaPlayerCtrl_Call_RePlay_m458(__this, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0030:
	{
		int32_t L_2 = (__this->___m_CurrentState_6);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_3 = (__this->___m_CurrentState_6);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_4 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}

IL_0054:
	{
		MediaPlayerCtrl_Call_Play_m455(__this, 0, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void MediaPlayerCtrl::Stop()
extern "C" void MediaPlayerCtrl_Stop_m412 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		MediaPlayerCtrl_Call_Pause_m459(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		__this->___m_bStop_18 = 1;
		__this->___m_CurrentState_6 = 5;
		__this->___m_iCurrentSeekPosition_7 = 0;
		return;
	}
}
// System.Void MediaPlayerCtrl::Pause()
extern "C" void MediaPlayerCtrl_Pause_m413 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		MediaPlayerCtrl_Call_Pause_m459(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		__this->___m_CurrentState_6 = 4;
		return;
	}
}
// System.Void MediaPlayerCtrl::Load(System.String)
extern "C" void MediaPlayerCtrl_Load_m414 (MediaPlayerCtrl_t95 * __this, String_t* ___strFileName, const MethodInfo* method)
{
	{
		__this->___m_bCheckFBO_19 = 0;
		String_t* L_0 = ___strFileName;
		__this->___m_strFileName_2 = L_0;
		String_t* L_1 = ___strFileName;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m547(L_1, (String_t*) &_stringLiteral69, 5, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_3 = (__this->___m_strFileName_2);
		MediaPlayerCtrl_DownloadStreamingVideoAndLoad_m471(__this, L_3, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_0031:
	{
		String_t* L_4 = (__this->___m_strFileName_2);
		MediaPlayerCtrl_Call_Load_m450(__this, L_4, 0, /*hidden argument*/NULL);
	}

IL_003f:
	{
		__this->___m_CurrentState_6 = 0;
		return;
	}
}
// System.Void MediaPlayerCtrl::SetVolume(System.Single)
extern "C" void MediaPlayerCtrl_SetVolume_m415 (MediaPlayerCtrl_t95 * __this, float ___fVolume, const MethodInfo* method)
{
	{
		float L_0 = ___fVolume;
		MediaPlayerCtrl_Call_SetVolume_m452(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 MediaPlayerCtrl::GetSeekPosition()
extern "C" int32_t MediaPlayerCtrl_GetSeekPosition_m416 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iCurrentSeekPosition_7);
		return L_0;
	}
}
// System.Void MediaPlayerCtrl::SeekTo(System.Int32)
extern "C" void MediaPlayerCtrl_SeekTo_m417 (MediaPlayerCtrl_t95 * __this, int32_t ___iSeek, const MethodInfo* method)
{
	{
		int32_t L_0 = ___iSeek;
		MediaPlayerCtrl_Call_SetSeekPosition_m453(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 MediaPlayerCtrl::GetDuration()
extern "C" int32_t MediaPlayerCtrl_GetDuration_m418 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = MediaPlayerCtrl_Call_GetDuration_m468(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 MediaPlayerCtrl::GetCurrentSeekPercent()
extern "C" int32_t MediaPlayerCtrl_GetCurrentSeekPercent_m419 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = MediaPlayerCtrl_Call_GetCurrentSeekPercent_m469(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 MediaPlayerCtrl::GetVideoWidth()
extern "C" int32_t MediaPlayerCtrl_GetVideoWidth_m420 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = MediaPlayerCtrl_Call_GetVideoWidth_m460(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 MediaPlayerCtrl::GetVideoHeight()
extern "C" int32_t MediaPlayerCtrl_GetVideoHeight_m421 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = MediaPlayerCtrl_Call_GetVideoHeight_m461(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void MediaPlayerCtrl::UnLoad()
extern "C" void MediaPlayerCtrl_UnLoad_m422 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		__this->___m_bCheckFBO_19 = 0;
		MediaPlayerCtrl_Call_UnLoad_m449(__this, /*hidden argument*/NULL);
		__this->___m_CurrentState_6 = 0;
		return;
	}
}
// System.Int32 MediaPlayerCtrl::VideoPlayerPluginCreateInstance()
extern "C" {int32_t DEFAULT_CALL VideoPlayerPluginCreateInstance();}
extern "C" int32_t MediaPlayerCtrl_VideoPlayerPluginCreateInstance_m423 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginCreateInstance;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginCreateInstance'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void MediaPlayerCtrl::VideoPlayerPluginDestroyInstance(System.Int32)
extern "C" {void DEFAULT_CALL VideoPlayerPluginDestroyInstance(int32_t);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginDestroyInstance_m424 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginDestroyInstance;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginDestroyInstance'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

}
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginCanOutputToTexture(System.String)
extern "C" {int32_t DEFAULT_CALL VideoPlayerPluginCanOutputToTexture(char*);}
extern "C" bool MediaPlayerCtrl_VideoPlayerPluginCanOutputToTexture_m425 (Object_t * __this /* static, unused */, String_t* ___videoURL, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginCanOutputToTexture;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginCanOutputToTexture'"));
		}
	}

	// Marshaling of parameter '___videoURL' to native representation
	char* ____videoURL_marshaled = { 0 };
	____videoURL_marshaled = il2cpp_codegen_marshal_string(___videoURL);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____videoURL_marshaled);

	// Marshaling cleanup of parameter '___videoURL' native representation
	il2cpp_codegen_marshal_free(____videoURL_marshaled);
	____videoURL_marshaled = NULL;

	return _return_value;
}
// System.Void MediaPlayerCtrl::VideoPlayerPluginSetLoop(System.Int32,System.Boolean)
extern "C" {void DEFAULT_CALL VideoPlayerPluginSetLoop(int32_t, int32_t);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginSetLoop_m426 (Object_t * __this /* static, unused */, int32_t ___iID, bool ___bLoop, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginSetLoop;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginSetLoop'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Marshaling of parameter '___bLoop' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___iID, ___bLoop);

	// Marshaling cleanup of parameter '___iID' native representation

	// Marshaling cleanup of parameter '___bLoop' native representation

}
// System.Void MediaPlayerCtrl::VideoPlayerPluginSetVolume(System.Int32,System.Single)
extern "C" {void DEFAULT_CALL VideoPlayerPluginSetVolume(int32_t, float);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginSetVolume_m427 (Object_t * __this /* static, unused */, int32_t ___iID, float ___fVolume, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginSetVolume;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginSetVolume'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Marshaling of parameter '___fVolume' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___iID, ___fVolume);

	// Marshaling cleanup of parameter '___iID' native representation

	// Marshaling cleanup of parameter '___fVolume' native representation

}
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginPlayerReady(System.Int32)
extern "C" {int32_t DEFAULT_CALL VideoPlayerPluginPlayerReady(int32_t);}
extern "C" bool MediaPlayerCtrl_VideoPlayerPluginPlayerReady_m428 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginPlayerReady;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginPlayerReady'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

	return _return_value;
}
// System.Single MediaPlayerCtrl::VideoPlayerPluginDurationSeconds(System.Int32)
extern "C" {float DEFAULT_CALL VideoPlayerPluginDurationSeconds(int32_t);}
extern "C" float MediaPlayerCtrl_VideoPlayerPluginDurationSeconds_m429 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginDurationSeconds;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginDurationSeconds'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation and marshaling of return value back from native representation
	float _return_value = _il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

	return _return_value;
}
// System.Void MediaPlayerCtrl::VideoPlayerPluginExtents(System.Int32,System.Int32&,System.Int32&)
extern "C" {void DEFAULT_CALL VideoPlayerPluginExtents(int32_t, int32_t*, int32_t*);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginExtents_m430 (Object_t * __this /* static, unused */, int32_t ___iID, int32_t* ___width, int32_t* ___height, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t*, int32_t*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginExtents;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginExtents'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Marshaling of parameter '___width' to native representation
	int32_t* ____width_marshaled = { 0 };
	int32_t ____width_marshaled_dereferenced = { 0 };
	____width_marshaled_dereferenced = *___width;
	____width_marshaled = &____width_marshaled_dereferenced;

	// Marshaling of parameter '___height' to native representation
	int32_t* ____height_marshaled = { 0 };
	int32_t ____height_marshaled_dereferenced = { 0 };
	____height_marshaled_dereferenced = *___height;
	____height_marshaled = &____height_marshaled_dereferenced;

	// Native function invocation
	_il2cpp_pinvoke_func(___iID, ____width_marshaled, ____height_marshaled);

	// Marshaling cleanup of parameter '___iID' native representation

	// Marshaling of parameter '___width' back from native representation
	int32_t ____width_result_dereferenced = { 0 };
	int32_t* ____width_result = &____width_result_dereferenced;
	*____width_result = *____width_marshaled;
	*___width = *____width_result;

	// Marshaling cleanup of parameter '___width' native representation

	// Marshaling of parameter '___height' back from native representation
	int32_t ____height_result_dereferenced = { 0 };
	int32_t* ____height_result = &____height_result_dereferenced;
	*____height_result = *____height_marshaled;
	*___height = *____height_result;

	// Marshaling cleanup of parameter '___height' native representation

}
// System.Int32 MediaPlayerCtrl::VideoPlayerPluginCurFrameTexture(System.Int32)
extern "C" {int32_t DEFAULT_CALL VideoPlayerPluginCurFrameTexture(int32_t);}
extern "C" int32_t MediaPlayerCtrl_VideoPlayerPluginCurFrameTexture_m431 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginCurFrameTexture;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginCurFrameTexture'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

	return _return_value;
}
// System.Void MediaPlayerCtrl::VideoPlayerPluginLoadVideo(System.Int32,System.String)
extern "C" {void DEFAULT_CALL VideoPlayerPluginLoadVideo(int32_t, char*);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginLoadVideo_m432 (Object_t * __this /* static, unused */, int32_t ___iID, String_t* ___videoURL, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginLoadVideo;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginLoadVideo'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Marshaling of parameter '___videoURL' to native representation
	char* ____videoURL_marshaled = { 0 };
	____videoURL_marshaled = il2cpp_codegen_marshal_string(___videoURL);

	// Native function invocation
	_il2cpp_pinvoke_func(___iID, ____videoURL_marshaled);

	// Marshaling cleanup of parameter '___iID' native representation

	// Marshaling cleanup of parameter '___videoURL' native representation
	il2cpp_codegen_marshal_free(____videoURL_marshaled);
	____videoURL_marshaled = NULL;

}
// System.Void MediaPlayerCtrl::VideoPlayerPluginPlayVideo(System.Int32)
extern "C" {void DEFAULT_CALL VideoPlayerPluginPlayVideo(int32_t);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginPlayVideo_m433 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginPlayVideo;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginPlayVideo'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

}
// System.Void MediaPlayerCtrl::VideoPlayerPluginPauseVideo(System.Int32)
extern "C" {void DEFAULT_CALL VideoPlayerPluginPauseVideo(int32_t);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginPauseVideo_m434 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginPauseVideo;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginPauseVideo'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

}
// System.Void MediaPlayerCtrl::VideoPlayerPluginResumeVideo(System.Int32)
extern "C" {void DEFAULT_CALL VideoPlayerPluginResumeVideo(int32_t);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginResumeVideo_m435 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginResumeVideo;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginResumeVideo'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

}
// System.Void MediaPlayerCtrl::VideoPlayerPluginRewindVideo(System.Int32)
extern "C" {void DEFAULT_CALL VideoPlayerPluginRewindVideo(int32_t);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginRewindVideo_m436 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginRewindVideo;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginRewindVideo'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

}
// System.Void MediaPlayerCtrl::VideoPlayerPluginSeekToVideo(System.Int32,System.Single)
extern "C" {void DEFAULT_CALL VideoPlayerPluginSeekToVideo(int32_t, float);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginSeekToVideo_m437 (Object_t * __this /* static, unused */, int32_t ___iID, float ___time, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginSeekToVideo;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginSeekToVideo'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Marshaling of parameter '___time' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___iID, ___time);

	// Marshaling cleanup of parameter '___iID' native representation

	// Marshaling cleanup of parameter '___time' native representation

}
// System.Single MediaPlayerCtrl::VideoPlayerPluginCurTimeSeconds(System.Int32)
extern "C" {float DEFAULT_CALL VideoPlayerPluginCurTimeSeconds(int32_t);}
extern "C" float MediaPlayerCtrl_VideoPlayerPluginCurTimeSeconds_m438 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginCurTimeSeconds;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginCurTimeSeconds'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation and marshaling of return value back from native representation
	float _return_value = _il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

	return _return_value;
}
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginIsPlaying(System.Int32)
extern "C" {int32_t DEFAULT_CALL VideoPlayerPluginIsPlaying(int32_t);}
extern "C" bool MediaPlayerCtrl_VideoPlayerPluginIsPlaying_m439 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginIsPlaying;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginIsPlaying'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

	return _return_value;
}
// System.Void MediaPlayerCtrl::VideoPlayerPluginStopVideo(System.Int32)
extern "C" {void DEFAULT_CALL VideoPlayerPluginStopVideo(int32_t);}
extern "C" void MediaPlayerCtrl_VideoPlayerPluginStopVideo_m440 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginStopVideo;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginStopVideo'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

}
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginFinish(System.Int32)
extern "C" {int32_t DEFAULT_CALL VideoPlayerPluginFinish(int32_t);}
extern "C" bool MediaPlayerCtrl_VideoPlayerPluginFinish_m441 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)VideoPlayerPluginFinish;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'VideoPlayerPluginFinish'"));
		}
	}

	// Marshaling of parameter '___iID' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(___iID);

	// Marshaling cleanup of parameter '___iID' native representation

	return _return_value;
}
// System.Boolean MediaPlayerCtrl::get_ready()
extern "C" bool MediaPlayerCtrl_get_ready_m442 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		bool L_1 = MediaPlayerCtrl_VideoPlayerPluginPlayerReady_m428(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single MediaPlayerCtrl::get_duration()
extern "C" float MediaPlayerCtrl_get_duration_m443 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		float L_1 = MediaPlayerCtrl_VideoPlayerPluginDurationSeconds_m429(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single MediaPlayerCtrl::get_currentTime()
extern "C" float MediaPlayerCtrl_get_currentTime_m444 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		float L_1 = MediaPlayerCtrl_VideoPlayerPluginCurTimeSeconds_m438(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean MediaPlayerCtrl::get_isPlaying()
extern "C" bool MediaPlayerCtrl_get_isPlaying_m445 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		bool L_1 = MediaPlayerCtrl_VideoPlayerPluginIsPlaying_m439(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 MediaPlayerCtrl::get_videoSize()
extern "C" Vector2_t22  MediaPlayerCtrl_get_videoSize_m446 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		int32_t L_0 = (__this->___m_iID_21);
		MediaPlayerCtrl_VideoPlayerPluginExtents_m430(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Vector2_t22  L_3 = {0};
		Vector2__ctor_m263(&L_3, (((float)L_1)), (((float)L_2)), /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Texture2D MediaPlayerCtrl::get_videoTexture()
extern "C" Texture2D_t109 * MediaPlayerCtrl_get_videoTexture_m447 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t22  V_1 = {0};
	Vector2_t22  V_2 = {0};
	int32_t G_B3_0 = 0;
	{
		bool L_0 = MediaPlayerCtrl_get_ready_m442(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = (__this->___m_iID_21);
		int32_t L_2 = MediaPlayerCtrl_VideoPlayerPluginCurFrameTexture_m431(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0099;
		}
	}
	{
		Texture2D_t109 * L_4 = (__this->____videoTexture_22);
		bool L_5 = Object_op_Equality_m555(NULL /*static, unused*/, L_4, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		Vector2_t22  L_6 = MediaPlayerCtrl_get_videoSize_m446(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = ((&V_1)->___x_1);
		Vector2_t22  L_8 = MediaPlayerCtrl_get_videoSize_m446(__this, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = ((&V_2)->___y_2);
		int32_t L_10 = (__this->___videoTextureFormat_20);
		int32_t L_11 = V_0;
		IntPtr_t L_12 = IntPtr_op_Explicit_m556(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Texture2D_t109 * L_13 = Texture2D_CreateExternalTexture_m557(NULL /*static, unused*/, (((int32_t)L_7)), (((int32_t)L_9)), L_10, 0, 0, L_12, /*hidden argument*/NULL);
		__this->____videoTexture_22 = L_13;
		Texture2D_t109 * L_14 = (__this->____videoTexture_22);
		NullCheck(L_14);
		Texture_set_filterMode_m558(L_14, 1, /*hidden argument*/NULL);
		Texture2D_t109 * L_15 = (__this->____videoTexture_22);
		NullCheck(L_15);
		Texture_set_wrapMode_m559(L_15, 0, /*hidden argument*/NULL);
	}

IL_0083:
	{
		Texture2D_t109 * L_16 = (__this->____videoTexture_22);
		int32_t L_17 = V_0;
		IntPtr_t L_18 = IntPtr_op_Explicit_m556(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Texture2D_UpdateExternalTexture_m560(L_16, L_18, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_0099:
	{
		Texture2D_t109 * L_19 = (__this->____videoTexture_22);
		bool L_20 = Object_op_Inequality_m294(NULL /*static, unused*/, L_19, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b5;
		}
	}
	{
		Texture2D_t109 * L_21 = (__this->____videoTexture_22);
		Object_Destroy_m296(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		__this->____videoTexture_22 = (Texture2D_t109 *)NULL;
	}

IL_00bc:
	{
		Texture2D_t109 * L_22 = (__this->____videoTexture_22);
		return L_22;
	}
}
// System.Void MediaPlayerCtrl::Call_Destroy()
extern "C" void MediaPlayerCtrl_Call_Destroy_m448 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		MediaPlayerCtrl_VideoPlayerPluginDestroyInstance_m424(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture2D_t109 * L_1 = (__this->____videoTexture_22);
		bool L_2 = Object_op_Inequality_m294(NULL /*static, unused*/, L_1, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Texture2D_t109 * L_3 = (__this->____videoTexture_22);
		Object_Destroy_m296(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		__this->____videoTexture_22 = (Texture2D_t109 *)NULL;
		__this->___m_iID_21 = (-1);
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_UnLoad()
extern "C" void MediaPlayerCtrl_Call_UnLoad_m449 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		MediaPlayerCtrl_VideoPlayerPluginStopVideo_m440(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MediaPlayerCtrl::Call_Load(System.String,System.Int32)
extern "C" bool MediaPlayerCtrl_Call_Load_m450 (MediaPlayerCtrl_t95 * __this, String_t* ___strFileName, int32_t ___iSeek, const MethodInfo* method)
{
	{
		String_t* L_0 = ___strFileName;
		bool L_1 = MediaPlayerCtrl_VideoPlayerPluginCanOutputToTexture_m425(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = (__this->___m_iID_21);
		String_t* L_3 = ___strFileName;
		MediaPlayerCtrl_VideoPlayerPluginLoadVideo_m432(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return 1;
	}
}
// System.Void MediaPlayerCtrl::Call_UpdateVideoTexture()
extern const MethodInfo* GameObject_GetComponent_TisMeshRenderer_t126_m540_MethodInfo_var;
extern "C" void MediaPlayerCtrl_Call_UpdateVideoTexture_m451 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisMeshRenderer_t126_m540_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483700);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture2D_t109 * L_0 = (__this->___m_VideoTextureDummy_5);
		bool L_1 = Object_op_Inequality_m294(NULL /*static, unused*/, L_0, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Texture2D_t109 * L_2 = (__this->___m_VideoTextureDummy_5);
		Object_Destroy_m296(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___m_VideoTextureDummy_5 = (Texture2D_t109 *)NULL;
	}

IL_0023:
	{
		int32_t L_3 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0066;
		}
	}
	{
		GameObject_t72 * L_4 = (__this->___m_TargetMaterial_3);
		bool L_5 = Object_op_Implicit_m561(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		GameObject_t72 * L_6 = (__this->___m_TargetMaterial_3);
		NullCheck(L_6);
		MeshRenderer_t126 * L_7 = GameObject_GetComponent_TisMeshRenderer_t126_m540(L_6, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t126_m540_MethodInfo_var);
		NullCheck(L_7);
		Material_t129 * L_8 = Renderer_get_material_m562(L_7, /*hidden argument*/NULL);
		Texture2D_t109 * L_9 = (__this->____videoTexture_22);
		NullCheck(L_8);
		Material_set_mainTexture_m563(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005a:
	{
		Texture2D_t109 * L_10 = MediaPlayerCtrl_get_videoTexture_m447(__this, /*hidden argument*/NULL);
		__this->___m_VideoTexture_4 = L_10;
	}

IL_0066:
	{
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_SetVolume(System.Single)
extern "C" void MediaPlayerCtrl_Call_SetVolume_m452 (MediaPlayerCtrl_t95 * __this, float ___fVolume, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		float L_1 = ___fVolume;
		MediaPlayerCtrl_VideoPlayerPluginSetVolume_m427(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_SetSeekPosition(System.Int32)
extern "C" void MediaPlayerCtrl_Call_SetSeekPosition_m453 (MediaPlayerCtrl_t95 * __this, int32_t ___iSeek, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___iSeek;
		V_0 = ((float)((float)(((float)L_0))/(float)(1000.0f)));
		int32_t L_1 = (__this->___m_iID_21);
		float L_2 = V_0;
		MediaPlayerCtrl_VideoPlayerPluginSeekToVideo_m437(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 MediaPlayerCtrl::Call_GetSeekPosition()
extern "C" int32_t MediaPlayerCtrl_Call_GetSeekPosition_m454 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = (__this->___m_iID_21);
		float L_1 = MediaPlayerCtrl_VideoPlayerPluginCurTimeSeconds_m438(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		return (((int32_t)((float)((float)L_2*(float)(1000.0f)))));
	}
}
// System.Void MediaPlayerCtrl::Call_Play(System.Int32)
extern "C" void MediaPlayerCtrl_Call_Play_m455 (MediaPlayerCtrl_t95 * __this, int32_t ___iSeek, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___iSeek;
		V_0 = ((float)((float)(((float)L_0))/(float)(1000.0f)));
		bool L_1 = MediaPlayerCtrl_get_isPlaying_m445(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = (__this->___m_iID_21);
		float L_3 = V_0;
		MediaPlayerCtrl_VideoPlayerPluginSeekToVideo_m437(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0025:
	{
		int32_t L_4 = (__this->___m_iID_21);
		float L_5 = V_0;
		MediaPlayerCtrl_VideoPlayerPluginSeekToVideo_m437(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = (__this->___m_iID_21);
		MediaPlayerCtrl_VideoPlayerPluginPlayVideo_m433(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_7 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)5))))
		{
			goto IL_004f;
		}
	}
	{
		__this->___m_CurrentState_6 = 3;
	}

IL_004f:
	{
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_Reset()
extern "C" void MediaPlayerCtrl_Call_Reset_m456 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_Stop()
extern "C" void MediaPlayerCtrl_Call_Stop_m457 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		MediaPlayerCtrl_VideoPlayerPluginStopVideo_m440(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_RePlay()
extern "C" void MediaPlayerCtrl_Call_RePlay_m458 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		MediaPlayerCtrl_VideoPlayerPluginResumeVideo_m435(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___m_CurrentState_6 = 3;
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_Pause()
extern "C" void MediaPlayerCtrl_Call_Pause_m459 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		__this->___m_CurrentState_6 = 4;
		int32_t L_0 = (__this->___m_iID_21);
		MediaPlayerCtrl_VideoPlayerPluginPauseVideo_m434(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 MediaPlayerCtrl::Call_GetVideoWidth()
extern "C" int32_t MediaPlayerCtrl_Call_GetVideoWidth_m460 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	Vector2_t22  V_0 = {0};
	{
		Vector2_t22  L_0 = MediaPlayerCtrl_get_videoSize_m446(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		return (((int32_t)L_1));
	}
}
// System.Int32 MediaPlayerCtrl::Call_GetVideoHeight()
extern "C" int32_t MediaPlayerCtrl_Call_GetVideoHeight_m461 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	Vector2_t22  V_0 = {0};
	{
		Vector2_t22  L_0 = MediaPlayerCtrl_get_videoSize_m446(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___y_2);
		return (((int32_t)L_1));
	}
}
// System.Void MediaPlayerCtrl::Call_SetUnityTexture(System.Int32)
extern "C" void MediaPlayerCtrl_Call_SetUnityTexture_m462 (MediaPlayerCtrl_t95 * __this, int32_t ___iTextureID, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_SetWindowSize()
extern "C" void MediaPlayerCtrl_Call_SetWindowSize_m463 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_SetLooping(System.Boolean)
extern "C" void MediaPlayerCtrl_Call_SetLooping_m464 (MediaPlayerCtrl_t95 * __this, bool ___bLoop, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		bool L_1 = ___bLoop;
		MediaPlayerCtrl_VideoPlayerPluginSetLoop_m426(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerCtrl::Call_SetUnityActivity()
extern "C" void MediaPlayerCtrl_Call_SetUnityActivity_m465 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = MediaPlayerCtrl_VideoPlayerPluginCreateInstance_m423(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_iID_21 = L_0;
		return;
	}
}
// System.Int32 MediaPlayerCtrl::Call_GetError()
extern "C" int32_t MediaPlayerCtrl_Call_GetError_m466 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 MediaPlayerCtrl::Call_GetErrorExtra()
extern "C" int32_t MediaPlayerCtrl_Call_GetErrorExtra_m467 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 MediaPlayerCtrl::Call_GetDuration()
extern "C" int32_t MediaPlayerCtrl_Call_GetDuration_m468 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		float L_0 = MediaPlayerCtrl_get_duration_m443(__this, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_0*(float)(1000.0f)))));
	}
}
// System.Int32 MediaPlayerCtrl::Call_GetCurrentSeekPercent()
extern "C" int32_t MediaPlayerCtrl_Call_GetCurrentSeekPercent_m469 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		return (-1);
	}
}
// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::Call_GetStatus()
extern "C" int32_t MediaPlayerCtrl_Call_GetStatus_m470 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iID_21);
		bool L_1 = MediaPlayerCtrl_VideoPlayerPluginFinish_m441(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0012:
	{
		int32_t L_2 = (__this->___m_CurrentState_6);
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = (__this->___m_CurrentState_6);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0031;
		}
	}

IL_002a:
	{
		int32_t L_4 = (__this->___m_CurrentState_6);
		return L_4;
	}

IL_0031:
	{
		bool L_5 = MediaPlayerCtrl_get_isPlaying_m445(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		return (int32_t)(3);
	}

IL_003e:
	{
		bool L_6 = MediaPlayerCtrl_get_ready_m442(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_004b:
	{
		int32_t L_7 = (__this->___m_CurrentState_6);
		return L_7;
	}
}
// System.Collections.IEnumerator MediaPlayerCtrl::DownloadStreamingVideoAndLoad(System.String)
extern TypeInfo* U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107_il2cpp_TypeInfo_var;
extern "C" Object_t * MediaPlayerCtrl_DownloadStreamingVideoAndLoad_m471 (MediaPlayerCtrl_t95 * __this, String_t* ___strURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * V_0 = {0};
	{
		U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * L_0 = (U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 *)il2cpp_codegen_object_new (U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107_il2cpp_TypeInfo_var);
		U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0__ctor_m388(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * L_1 = V_0;
		String_t* L_2 = ___strURL;
		NullCheck(L_1);
		L_1->___strURL_0 = L_2;
		U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * L_3 = V_0;
		String_t* L_4 = ___strURL;
		NullCheck(L_3);
		L_3->___U3CU24U3EstrURL_5 = L_4;
		U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_6 = __this;
		U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator MediaPlayerCtrl::CopyStreamingAssetVideoAndLoad(System.String)
extern TypeInfo* U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108_il2cpp_TypeInfo_var;
extern "C" Object_t * MediaPlayerCtrl_CopyStreamingAssetVideoAndLoad_m472 (MediaPlayerCtrl_t95 * __this, String_t* ___strURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * V_0 = {0};
	{
		U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * L_0 = (U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 *)il2cpp_codegen_object_new (U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108_il2cpp_TypeInfo_var);
		U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1__ctor_m394(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * L_1 = V_0;
		String_t* L_2 = ___strURL;
		NullCheck(L_1);
		L_1->___strURL_0 = L_2;
		U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * L_3 = V_0;
		String_t* L_4 = ___strURL;
		NullCheck(L_3);
		L_3->___U3CU24U3EstrURL_5 = L_4;
		U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_6 = __this;
		U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108 * L_6 = V_0;
		return L_6;
	}
}
// MediaPlayerFullScreenCtrl
#include "AssemblyU2DCSharp_MediaPlayerFullScreenCtrl.h"
#ifndef _MSC_VER
#else
#endif
// MediaPlayerFullScreenCtrl
#include "AssemblyU2DCSharp_MediaPlayerFullScreenCtrlMethodDeclarations.h"

struct Component_t130;
struct MediaPlayerCtrl_t95;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t130;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m565_gshared (Component_t130 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m565(__this, method) (( Object_t * (*) (Component_t130 *, const MethodInfo*))Component_GetComponent_TisObject_t_m565_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<MediaPlayerCtrl>()
// !!0 UnityEngine.Component::GetComponent<MediaPlayerCtrl>()
#define Component_GetComponent_TisMediaPlayerCtrl_t95_m564(__this, method) (( MediaPlayerCtrl_t95 * (*) (Component_t130 *, const MethodInfo*))Component_GetComponent_TisObject_t_m565_gshared)(__this, method)


// System.Void MediaPlayerFullScreenCtrl::.ctor()
extern "C" void MediaPlayerFullScreenCtrl__ctor_m473 (MediaPlayerFullScreenCtrl_t110 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerFullScreenCtrl::Start()
extern "C" void MediaPlayerFullScreenCtrl_Start_m474 (MediaPlayerFullScreenCtrl_t110 * __this, const MethodInfo* method)
{
	{
		MediaPlayerFullScreenCtrl_Resize_m476(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediaPlayerFullScreenCtrl::Update()
extern "C" void MediaPlayerFullScreenCtrl_Update_m475 (MediaPlayerFullScreenCtrl_t110 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_iOrgWidth_3);
		int32_t L_1 = Screen_get_width_m549(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		MediaPlayerFullScreenCtrl_Resize_m476(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_2 = (__this->___m_iOrgHeight_4);
		int32_t L_3 = Screen_get_height_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		MediaPlayerFullScreenCtrl_Resize_m476(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void MediaPlayerFullScreenCtrl::Resize()
extern const MethodInfo* Component_GetComponent_TisMediaPlayerCtrl_t95_m564_MethodInfo_var;
extern "C" void MediaPlayerFullScreenCtrl_Resize_m476 (MediaPlayerFullScreenCtrl_t110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisMediaPlayerCtrl_t95_m564_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483701);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = Screen_get_width_m549(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_iOrgWidth_3 = L_0;
		int32_t L_1 = Screen_get_height_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_iOrgHeight_4 = L_1;
		int32_t L_2 = (__this->___m_iOrgHeight_4);
		int32_t L_3 = (__this->___m_iOrgWidth_3);
		V_0 = ((float)((float)(((float)L_2))/(float)(((float)L_3))));
		GameObject_t72 * L_4 = (__this->___m_objVideo_2);
		NullCheck(L_4);
		Transform_t124 * L_5 = GameObject_get_transform_m550(L_4, /*hidden argument*/NULL);
		float L_6 = V_0;
		float L_7 = V_0;
		Vector3_t73  L_8 = {0};
		Vector3__ctor_m292(&L_8, ((float)((float)(20.0f)/(float)L_6)), ((float)((float)(20.0f)/(float)L_7)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m553(L_5, L_8, /*hidden argument*/NULL);
		GameObject_t72 * L_9 = (__this->___m_objVideo_2);
		NullCheck(L_9);
		Transform_t124 * L_10 = GameObject_get_transform_m550(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		MediaPlayerCtrl_t95 * L_11 = Component_GetComponent_TisMediaPlayerCtrl_t95_m564(L_10, /*hidden argument*/Component_GetComponent_TisMediaPlayerCtrl_t95_m564_MethodInfo_var);
		NullCheck(L_11);
		MediaPlayerCtrl_Resize_m405(L_11, /*hidden argument*/NULL);
		return;
	}
}
// SphereMirror
#include "AssemblyU2DCSharp_SphereMirror.h"
#ifndef _MSC_VER
#else
#endif
// SphereMirror
#include "AssemblyU2DCSharp_SphereMirrorMethodDeclarations.h"

struct Component_t130;
struct MeshFilter_t125;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t125_m566(__this, method) (( MeshFilter_t125 * (*) (Component_t130 *, const MethodInfo*))Component_GetComponent_TisObject_t_m565_gshared)(__this, method)


// System.Void SphereMirror::.ctor()
extern "C" void SphereMirror__ctor_m477 (SphereMirror_t111 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SphereMirror::Start()
extern const MethodInfo* Component_GetComponent_TisMeshFilter_t125_m566_MethodInfo_var;
extern "C" void SphereMirror_Start_m478 (SphereMirror_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisMeshFilter_t125_m566_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483702);
		s_Il2CppMethodIntialized = true;
	}
	Vector2U5BU5D_t127* V_0 = {0};
	int32_t V_1 = 0;
	{
		Transform_t124 * L_0 = Component_get_transform_m525(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MeshFilter_t125 * L_1 = Component_GetComponent_TisMeshFilter_t125_m566(L_0, /*hidden argument*/Component_GetComponent_TisMeshFilter_t125_m566_MethodInfo_var);
		NullCheck(L_1);
		Mesh_t128 * L_2 = MeshFilter_get_mesh_m543(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector2U5BU5D_t127* L_3 = Mesh_get_uv_m544(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0050;
	}

IL_001d:
	{
		Vector2U5BU5D_t127* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Vector2U5BU5D_t127* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		float L_8 = (((Vector2_t22 *)(Vector2_t22 *)SZArrayLdElema(L_6, L_7))->___x_1);
		Vector2U5BU5D_t127* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		float L_11 = (((Vector2_t22 *)(Vector2_t22 *)SZArrayLdElema(L_9, L_10))->___y_2);
		Vector2_t22  L_12 = {0};
		Vector2__ctor_m263(&L_12, ((float)((float)(1.0f)-(float)L_8)), L_11, /*hidden argument*/NULL);
		*((Vector2_t22 *)(Vector2_t22 *)SZArrayLdElema(L_4, L_5)) = L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		Vector2U5BU5D_t127* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		Transform_t124 * L_16 = Component_get_transform_m525(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		MeshFilter_t125 * L_17 = Component_GetComponent_TisMeshFilter_t125_m566(L_16, /*hidden argument*/Component_GetComponent_TisMeshFilter_t125_m566_MethodInfo_var);
		NullCheck(L_17);
		Mesh_t128 * L_18 = MeshFilter_get_mesh_m543(L_17, /*hidden argument*/NULL);
		Vector2U5BU5D_t127* L_19 = V_0;
		NullCheck(L_18);
		Mesh_set_uv_m545(L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SphereMirror::Update()
extern "C" void SphereMirror_Update_m479 (SphereMirror_t111 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// BorderCollision
#include "AssemblyU2DCSharp_BorderCollision.h"
#ifndef _MSC_VER
#else
#endif
// BorderCollision
#include "AssemblyU2DCSharp_BorderCollisionMethodDeclarations.h"

// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"


// System.Void BorderCollision::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t112_il2cpp_TypeInfo_var;
extern "C" void BorderCollision__ctor_m480 (BorderCollision_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUIStyle_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___lastResults2_8 = L_0;
		GUIStyle_t112 * L_1 = (GUIStyle_t112 *)il2cpp_codegen_object_new (GUIStyle_t112_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_1, /*hidden argument*/NULL);
		__this->___fontStyle_9 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___taggedObject_11 = L_2;
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BorderCollision::Start()
extern "C" void BorderCollision_Start_m481 (BorderCollision_t113 * __this, const MethodInfo* method)
{
	Vector3_t73  V_0 = {0};
	Vector3_t73  V_1 = {0};
	Vector3_t73  V_2 = {0};
	Vector3_t73  V_3 = {0};
	Vector3_t73  V_4 = {0};
	{
		Transform_t124 * L_0 = Component_get_transform_m525(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t73  L_1 = Transform_get_position_m568(L_0, /*hidden argument*/NULL);
		CameraU5BU5D_t131* L_2 = Camera_get_allCameras_m569(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		NullCheck((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_2, L_3)));
		Transform_t124 * L_4 = Component_get_transform_m525((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t73  L_5 = Transform_get_position_m568(L_4, /*hidden argument*/NULL);
		Vector3_t73  L_6 = Vector3_op_Subtraction_m570(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = ((&V_0)->___z_2);
		__this->___dist_2 = L_7;
		CameraU5BU5D_t131* L_8 = Camera_get_allCameras_m569(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		int32_t L_9 = 1;
		float L_10 = (__this->___dist_2);
		Vector3_t73  L_11 = {0};
		Vector3__ctor_m292(&L_11, (0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		NullCheck((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_8, L_9)));
		Vector3_t73  L_12 = Camera_ViewportToWorldPoint_m571((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_8, L_9)), L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = ((&V_1)->___x_0);
		__this->___leftBorder_3 = L_13;
		CameraU5BU5D_t131* L_14 = Camera_get_allCameras_m569(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		int32_t L_15 = 1;
		float L_16 = (__this->___dist_2);
		Vector3_t73  L_17 = {0};
		Vector3__ctor_m292(&L_17, (1.0f), (0.0f), L_16, /*hidden argument*/NULL);
		NullCheck((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_14, L_15)));
		Vector3_t73  L_18 = Camera_ViewportToWorldPoint_m571((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_14, L_15)), L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		float L_19 = ((&V_2)->___x_0);
		__this->___rightBorder_4 = L_19;
		CameraU5BU5D_t131* L_20 = Camera_get_allCameras_m569(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		int32_t L_21 = 1;
		float L_22 = (__this->___dist_2);
		Vector3_t73  L_23 = {0};
		Vector3__ctor_m292(&L_23, (1.0f), (1.0f), L_22, /*hidden argument*/NULL);
		NullCheck((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_20, L_21)));
		Vector3_t73  L_24 = Camera_ViewportToWorldPoint_m571((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_20, L_21)), L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25 = ((&V_3)->___y_1);
		__this->___topBorder_6 = L_25;
		CameraU5BU5D_t131* L_26 = Camera_get_allCameras_m569(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 1);
		int32_t L_27 = 1;
		float L_28 = (__this->___dist_2);
		Vector3_t73  L_29 = {0};
		Vector3__ctor_m292(&L_29, (0.0f), (0.0f), L_28, /*hidden argument*/NULL);
		NullCheck((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_26, L_27)));
		Vector3_t73  L_30 = Camera_ViewportToWorldPoint_m571((*(Camera_t132 **)(Camera_t132 **)SZArrayLdElema(L_26, L_27)), L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		float L_31 = ((&V_4)->___y_1);
		__this->___bottomBorder_7 = L_31;
		GUIStyle_t112 * L_32 = (__this->___fontStyle_9);
		NullCheck(L_32);
		GUIStyleState_t133 * L_33 = GUIStyle_get_normal_m572(L_32, /*hidden argument*/NULL);
		Color_t134  L_34 = Color_get_black_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyleState_set_textColor_m574(L_33, L_34, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BorderCollision::Update()
extern "C" void BorderCollision_Update_m482 (BorderCollision_t113 * __this, const MethodInfo* method)
{
	Vector3_t73  V_0 = {0};
	Vector3_t73  V_1 = {0};
	Vector3_t73  V_2 = {0};
	Vector3_t73  V_3 = {0};
	Vector3_t73  V_4 = {0};
	Vector3_t73  V_5 = {0};
	Vector3_t73  V_6 = {0};
	Vector3_t73  V_7 = {0};
	Vector3_t73  V_8 = {0};
	Vector3_t73  V_9 = {0};
	Vector3_t73  V_10 = {0};
	Vector3_t73  V_11 = {0};
	{
		String_t* L_0 = (__this->___taggedObject_11);
		GameObject_t72 * L_1 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t124 * L_2 = GameObject_get_transform_m550(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t73  L_3 = Transform_get_position_m568(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = ((&V_0)->___x_0);
		float L_5 = (__this->___leftBorder_3);
		float L_6 = (__this->___buffer_5);
		if ((!(((float)L_4) < ((float)((float)((float)L_5-(float)L_6))))))
		{
			goto IL_009b;
		}
	}
	{
		__this->___lastResults2_8 = (String_t*) &_stringLiteral84;
		String_t* L_7 = (__this->___taggedObject_11);
		GameObject_t72 * L_8 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t124 * L_9 = GameObject_get_transform_m550(L_8, /*hidden argument*/NULL);
		float L_10 = (__this->___rightBorder_4);
		float L_11 = (__this->___buffer_5);
		String_t* L_12 = (__this->___taggedObject_11);
		GameObject_t72 * L_13 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_t124 * L_14 = GameObject_get_transform_m550(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t73  L_15 = Transform_get_position_m568(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		float L_16 = ((&V_1)->___y_1);
		String_t* L_17 = (__this->___taggedObject_11);
		GameObject_t72 * L_18 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_t124 * L_19 = GameObject_get_transform_m550(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t73  L_20 = Transform_get_position_m568(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = ((&V_2)->___z_2);
		Vector3_t73  L_22 = {0};
		Vector3__ctor_m292(&L_22, ((float)((float)L_10+(float)L_11)), L_16, L_21, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_m576(L_9, L_22, /*hidden argument*/NULL);
	}

IL_009b:
	{
		String_t* L_23 = (__this->___taggedObject_11);
		GameObject_t72 * L_24 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_t124 * L_25 = GameObject_get_transform_m550(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t73  L_26 = Transform_get_position_m568(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		float L_27 = ((&V_3)->___x_0);
		float L_28 = (__this->___rightBorder_4);
		float L_29 = (__this->___buffer_5);
		if ((!(((float)L_27) > ((float)((float)((float)L_28+(float)L_29))))))
		{
			goto IL_0138;
		}
	}
	{
		__this->___lastResults2_8 = (String_t*) &_stringLiteral85;
		String_t* L_30 = (__this->___taggedObject_11);
		GameObject_t72 * L_31 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_t124 * L_32 = GameObject_get_transform_m550(L_31, /*hidden argument*/NULL);
		float L_33 = (__this->___leftBorder_3);
		float L_34 = (__this->___buffer_5);
		String_t* L_35 = (__this->___taggedObject_11);
		GameObject_t72 * L_36 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_t124 * L_37 = GameObject_get_transform_m550(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t73  L_38 = Transform_get_position_m568(L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		float L_39 = ((&V_4)->___y_1);
		String_t* L_40 = (__this->___taggedObject_11);
		GameObject_t72 * L_41 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_t124 * L_42 = GameObject_get_transform_m550(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t73  L_43 = Transform_get_position_m568(L_42, /*hidden argument*/NULL);
		V_5 = L_43;
		float L_44 = ((&V_5)->___z_2);
		Vector3_t73  L_45 = {0};
		Vector3__ctor_m292(&L_45, ((float)((float)L_33-(float)L_34)), L_39, L_44, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_position_m576(L_32, L_45, /*hidden argument*/NULL);
	}

IL_0138:
	{
		String_t* L_46 = (__this->___taggedObject_11);
		GameObject_t72 * L_47 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_t124 * L_48 = GameObject_get_transform_m550(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t73  L_49 = Transform_get_position_m568(L_48, /*hidden argument*/NULL);
		V_6 = L_49;
		float L_50 = ((&V_6)->___y_1);
		float L_51 = (__this->___bottomBorder_7);
		float L_52 = (__this->___buffer_5);
		if ((!(((float)L_50) < ((float)((float)((float)L_51+(float)L_52))))))
		{
			goto IL_01d6;
		}
	}
	{
		__this->___lastResults2_8 = (String_t*) &_stringLiteral86;
		String_t* L_53 = (__this->___taggedObject_11);
		GameObject_t72 * L_54 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_t124 * L_55 = GameObject_get_transform_m550(L_54, /*hidden argument*/NULL);
		String_t* L_56 = (__this->___taggedObject_11);
		GameObject_t72 * L_57 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_t124 * L_58 = GameObject_get_transform_m550(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_t73  L_59 = Transform_get_position_m568(L_58, /*hidden argument*/NULL);
		V_7 = L_59;
		float L_60 = ((&V_7)->___x_0);
		float L_61 = (__this->___topBorder_6);
		float L_62 = (__this->___buffer_5);
		String_t* L_63 = (__this->___taggedObject_11);
		GameObject_t72 * L_64 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_t124 * L_65 = GameObject_get_transform_m550(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t73  L_66 = Transform_get_position_m568(L_65, /*hidden argument*/NULL);
		V_8 = L_66;
		float L_67 = ((&V_8)->___z_2);
		Vector3_t73  L_68 = {0};
		Vector3__ctor_m292(&L_68, L_60, ((float)((float)L_61-(float)L_62)), L_67, /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_position_m576(L_55, L_68, /*hidden argument*/NULL);
	}

IL_01d6:
	{
		String_t* L_69 = (__this->___taggedObject_11);
		GameObject_t72 * L_70 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Transform_t124 * L_71 = GameObject_get_transform_m550(L_70, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_t73  L_72 = Transform_get_position_m568(L_71, /*hidden argument*/NULL);
		V_9 = L_72;
		float L_73 = ((&V_9)->___y_1);
		float L_74 = (__this->___topBorder_6);
		float L_75 = (__this->___buffer_5);
		if ((!(((float)L_73) > ((float)((float)((float)L_74-(float)L_75))))))
		{
			goto IL_0274;
		}
	}
	{
		__this->___lastResults2_8 = (String_t*) &_stringLiteral86;
		String_t* L_76 = (__this->___taggedObject_11);
		GameObject_t72 * L_77 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_t124 * L_78 = GameObject_get_transform_m550(L_77, /*hidden argument*/NULL);
		String_t* L_79 = (__this->___taggedObject_11);
		GameObject_t72 * L_80 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		Transform_t124 * L_81 = GameObject_get_transform_m550(L_80, /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector3_t73  L_82 = Transform_get_position_m568(L_81, /*hidden argument*/NULL);
		V_10 = L_82;
		float L_83 = ((&V_10)->___x_0);
		float L_84 = (__this->___bottomBorder_7);
		float L_85 = (__this->___buffer_5);
		String_t* L_86 = (__this->___taggedObject_11);
		GameObject_t72 * L_87 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_t124 * L_88 = GameObject_get_transform_m550(L_87, /*hidden argument*/NULL);
		NullCheck(L_88);
		Vector3_t73  L_89 = Transform_get_position_m568(L_88, /*hidden argument*/NULL);
		V_11 = L_89;
		float L_90 = ((&V_11)->___z_2);
		Vector3_t73  L_91 = {0};
		Vector3__ctor_m292(&L_91, L_83, ((float)((float)L_84+(float)L_85)), L_90, /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_set_position_m576(L_78, L_91, /*hidden argument*/NULL);
	}

IL_0274:
	{
		return;
	}
}
// System.Void BorderCollision::OnGUI()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t120_il2cpp_TypeInfo_var;
extern "C" void BorderCollision_OnGUI_m483 (BorderCollision_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUI_t120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m549(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t36  L_2 = {0};
		Rect__ctor_m286(&L_2, (0.0f), (30.0f), (((float)L_0)), (((float)L_1)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___lastResults2_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral87, L_3, /*hidden argument*/NULL);
		GUIStyle_t112 * L_5 = (__this->___fontStyle_9);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		GUI_Label_m577(NULL /*static, unused*/, L_2, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// MeshCreator
#include "AssemblyU2DCSharp_MeshCreator.h"
#ifndef _MSC_VER
#else
#endif
// MeshCreator
#include "AssemblyU2DCSharp_MeshCreatorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"


// System.Void MeshCreator::.ctor()
extern "C" void MeshCreator__ctor_m484 (MeshCreator_t114 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MeshCreator::Start()
extern TypeInfo* Mesh_t128_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t70_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3U5BU5D_t135_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t127_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisMeshFilter_t125_m566_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m580_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m581_MethodInfo_var;
extern "C" void MeshCreator_Start_m485 (MeshCreator_t114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mesh_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(155);
		Int32_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Vector3U5BU5D_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(156);
		Vector2U5BU5D_t127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		Component_GetComponent_TisMeshFilter_t125_m566_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483702);
		List_1_ToArray_m580_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483703);
		List_1_ToArray_m581_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483704);
		s_Il2CppMethodIntialized = true;
	}
	Mesh_t128 * V_0 = {0};
	MeshFilter_t125 * V_1 = {0};
	List_1_t118 * V_2 = {0};
	Vector3U5BU5D_t135* V_3 = {0};
	List_1_t117 * V_4 = {0};
	Int32U5BU5D_t136* V_5 = {0};
	Vector3U5BU5D_t135* V_6 = {0};
	int32_t V_7 = 0;
	Vector2U5BU5D_t127* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	{
		Mesh_t128 * L_0 = (Mesh_t128 *)il2cpp_codegen_object_new (Mesh_t128_il2cpp_TypeInfo_var);
		Mesh__ctor_m578(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MeshFilter_t125 * L_1 = Component_GetComponent_TisMeshFilter_t125_m566(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t125_m566_MethodInfo_var);
		V_1 = L_1;
		MeshFilter_t125 * L_2 = V_1;
		Mesh_t128 * L_3 = V_0;
		NullCheck(L_2);
		MeshFilter_set_mesh_m579(L_2, L_3, /*hidden argument*/NULL);
		List_1_t118 * L_4 = MeshCreator_getVerticesBezier_m491(__this, ((int32_t)1000), /*hidden argument*/NULL);
		V_2 = L_4;
		List_1_t118 * L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_5);
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t70_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral88, L_8, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		List_1_t118 * L_10 = V_2;
		NullCheck(L_10);
		Vector3U5BU5D_t135* L_11 = List_1_ToArray_m580(L_10, /*hidden argument*/List_1_ToArray_m580_MethodInfo_var);
		V_3 = L_11;
		List_1_t118 * L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_12);
		List_1_t117 * L_14 = MeshCreator_getTrianglesBottomToTop_m490(__this, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		List_1_t117 * L_15 = V_4;
		NullCheck(L_15);
		Int32U5BU5D_t136* L_16 = List_1_ToArray_m581(L_15, /*hidden argument*/List_1_ToArray_m581_MethodInfo_var);
		V_5 = L_16;
		List_1_t118 * L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_17);
		V_6 = ((Vector3U5BU5D_t135*)SZArrayNew(Vector3U5BU5D_t135_il2cpp_TypeInfo_var, L_18));
		V_7 = 0;
		goto IL_0090;
	}

IL_006d:
	{
		Vector3U5BU5D_t135* L_19 = V_6;
		int32_t L_20 = V_7;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		Vector3_t73  L_21 = Vector3_get_forward_m582(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t73  L_22 = Vector3_op_Multiply_m552(NULL /*static, unused*/, L_21, (-1.0f), /*hidden argument*/NULL);
		*((Vector3_t73 *)(Vector3_t73 *)SZArrayLdElema(L_19, L_20)) = L_22;
		int32_t L_23 = V_7;
		V_7 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0090:
	{
		int32_t L_24 = V_7;
		List_1_t118 * L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_006d;
		}
	}
	{
		List_1_t118 * L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_27);
		V_8 = ((Vector2U5BU5D_t127*)SZArrayNew(Vector2U5BU5D_t127_il2cpp_TypeInfo_var, L_28));
		V_9 = 0;
		V_10 = 0;
		goto IL_011c;
	}

IL_00b5:
	{
		int32_t L_29 = V_9;
		List_1_t118 * L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_30);
		V_11 = ((float)((float)((float)((float)(((float)L_29))*(float)(1.0f)))/(float)((float)((float)(((float)L_31))/(float)(2.0f)))));
		int32_t L_32 = V_10;
		if (((int32_t)((int32_t)L_32%(int32_t)2)))
		{
			goto IL_00f6;
		}
	}
	{
		Vector2U5BU5D_t127* L_33 = V_8;
		int32_t L_34 = V_10;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		float L_35 = V_11;
		Vector2_t22  L_36 = {0};
		Vector2__ctor_m263(&L_36, L_35, (1.0f), /*hidden argument*/NULL);
		*((Vector2_t22 *)(Vector2_t22 *)SZArrayLdElema(L_33, L_34)) = L_36;
		goto IL_0116;
	}

IL_00f6:
	{
		Vector2U5BU5D_t127* L_37 = V_8;
		int32_t L_38 = V_10;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		float L_39 = V_11;
		Vector2_t22  L_40 = {0};
		Vector2__ctor_m263(&L_40, L_39, (0.0f), /*hidden argument*/NULL);
		*((Vector2_t22 *)(Vector2_t22 *)SZArrayLdElema(L_37, L_38)) = L_40;
		int32_t L_41 = V_9;
		V_9 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_0116:
	{
		int32_t L_42 = V_10;
		V_10 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_011c:
	{
		int32_t L_43 = V_10;
		List_1_t118 * L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_44);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_00b5;
		}
	}
	{
		Mesh_t128 * L_46 = V_0;
		Vector3U5BU5D_t135* L_47 = V_3;
		NullCheck(L_46);
		Mesh_set_vertices_m583(L_46, L_47, /*hidden argument*/NULL);
		Mesh_t128 * L_48 = V_0;
		Int32U5BU5D_t136* L_49 = V_5;
		NullCheck(L_48);
		Mesh_set_triangles_m584(L_48, L_49, /*hidden argument*/NULL);
		Mesh_t128 * L_50 = V_0;
		Vector3U5BU5D_t135* L_51 = V_6;
		NullCheck(L_50);
		Mesh_set_normals_m585(L_50, L_51, /*hidden argument*/NULL);
		Mesh_t128 * L_52 = V_0;
		Vector2U5BU5D_t127* L_53 = V_8;
		NullCheck(L_52);
		Mesh_set_uv_m545(L_52, L_53, /*hidden argument*/NULL);
		return;
	}
}
// System.Single MeshCreator::getX(System.Int32,System.Single)
extern TypeInfo* Mathf_t137_il2cpp_TypeInfo_var;
extern "C" float MeshCreator_getX_m486 (MeshCreator_t114 * __this, int32_t ___radius, float ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___radius;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t137_il2cpp_TypeInfo_var);
		float L_1 = powf((((float)L_0)), (2.0f));
		float L_2 = ___y;
		float L_3 = powf(L_2, (2.0f));
		float L_4 = sqrtf(((float)((float)L_1-(float)L_3)));
		return L_4;
	}
}
// System.Single MeshCreator::getY(System.Int32,System.Single)
extern TypeInfo* Mathf_t137_il2cpp_TypeInfo_var;
extern "C" float MeshCreator_getY_m487 (MeshCreator_t114 * __this, int32_t ___radius, float ___x, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___radius;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t137_il2cpp_TypeInfo_var);
		float L_1 = powf((((float)L_0)), (2.0f));
		float L_2 = ___x;
		float L_3 = powf(L_2, (2.0f));
		float L_4 = sqrtf(((float)((float)L_1-(float)L_3)));
		return L_4;
	}
}
// System.Single MeshCreator::getYSin(System.Single)
extern TypeInfo* Mathf_t137_il2cpp_TypeInfo_var;
extern "C" float MeshCreator_getYSin_m488 (MeshCreator_t114 * __this, float ___angle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___angle;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t137_il2cpp_TypeInfo_var);
		float L_1 = sinf(L_0);
		return L_1;
	}
}
// UnityEngine.Vector3 MeshCreator::CalculateBezierPoint(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* ObjectU5BU5D_t65_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t71_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t73_il2cpp_TypeInfo_var;
extern "C" Vector3_t73  MeshCreator_CalculateBezierPoint_m489 (MeshCreator_t114 * __this, float ___t, Vector3_t73  ___p0, Vector3_t73  ___p1, Vector3_t73  ___p2, Vector3_t73  ___p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		Single_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Vector3_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t73  V_5 = {0};
	{
		ObjectU5BU5D_t65* L_0 = ((ObjectU5BU5D_t65*)SZArrayNew(ObjectU5BU5D_t65_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral89);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral89;
		ObjectU5BU5D_t65* L_1 = L_0;
		float L_2 = ___t;
		float L_3 = L_2;
		Object_t * L_4 = Box(Single_t71_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t65* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral90);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral90;
		ObjectU5BU5D_t65* L_6 = L_5;
		String_t* L_7 = Vector3_ToString_m586((&___p0), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t65* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral91);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)(String_t*) &_stringLiteral91;
		ObjectU5BU5D_t65* L_9 = L_8;
		String_t* L_10 = Vector3_ToString_m586((&___p1), /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 5);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t65* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral92);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral92;
		ObjectU5BU5D_t65* L_12 = L_11;
		String_t* L_13 = Vector3_ToString_m586((&___p2), /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_13;
		ObjectU5BU5D_t65* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 8);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral93);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 8)) = (Object_t *)(String_t*) &_stringLiteral93;
		ObjectU5BU5D_t65* L_15 = L_14;
		String_t* L_16 = Vector3_ToString_m586((&___p3), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)9));
		ArrayElementTypeCheck (L_15, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, ((int32_t)9))) = (Object_t *)L_16;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m264(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		float L_18 = ___t;
		V_0 = ((float)((float)(1.0f)-(float)L_18));
		float L_19 = ___t;
		float L_20 = ___t;
		V_1 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_0;
		float L_22 = V_0;
		V_2 = ((float)((float)L_21*(float)L_22));
		float L_23 = V_2;
		float L_24 = V_0;
		V_3 = ((float)((float)L_23*(float)L_24));
		float L_25 = V_1;
		float L_26 = ___t;
		V_4 = ((float)((float)L_25*(float)L_26));
		float L_27 = V_3;
		Vector3_t73  L_28 = ___p0;
		Vector3_t73  L_29 = Vector3_op_Multiply_m587(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		Vector3_t73  L_30 = V_5;
		float L_31 = V_2;
		float L_32 = ___t;
		Vector3_t73  L_33 = ___p1;
		Vector3_t73  L_34 = Vector3_op_Multiply_m587(NULL /*static, unused*/, ((float)((float)((float)((float)(3.0f)*(float)L_31))*(float)L_32)), L_33, /*hidden argument*/NULL);
		Vector3_t73  L_35 = Vector3_op_Addition_m588(NULL /*static, unused*/, L_30, L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		Vector3_t73  L_36 = V_5;
		float L_37 = V_0;
		float L_38 = V_1;
		Vector3_t73  L_39 = ___p2;
		Vector3_t73  L_40 = Vector3_op_Multiply_m587(NULL /*static, unused*/, ((float)((float)((float)((float)(3.0f)*(float)L_37))*(float)L_38)), L_39, /*hidden argument*/NULL);
		Vector3_t73  L_41 = Vector3_op_Addition_m588(NULL /*static, unused*/, L_36, L_40, /*hidden argument*/NULL);
		V_5 = L_41;
		Vector3_t73  L_42 = V_5;
		float L_43 = V_4;
		Vector3_t73  L_44 = ___p3;
		Vector3_t73  L_45 = Vector3_op_Multiply_m587(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		Vector3_t73  L_46 = Vector3_op_Addition_m588(NULL /*static, unused*/, L_42, L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		Vector3_t73  L_47 = V_5;
		Vector3_t73  L_48 = L_47;
		Object_t * L_49 = Box(Vector3_t73_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral94, L_49, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		Vector3_t73  L_51 = V_5;
		return L_51;
	}
}
// System.Collections.Generic.List`1<System.Int32> MeshCreator::getTrianglesBottomToTop(System.Int32)
extern TypeInfo* List_1_t117_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m589_MethodInfo_var;
extern "C" List_1_t117 * MeshCreator_getTrianglesBottomToTop_m490 (MeshCreator_t114 * __this, int32_t ___vertexAmount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(159);
		List_1__ctor_m589_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t117 * V_3 = {0};
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 1;
		V_2 = 2;
		List_1_t117 * L_0 = (List_1_t117 *)il2cpp_codegen_object_new (List_1_t117_il2cpp_TypeInfo_var);
		List_1__ctor_m589(L_0, /*hidden argument*/List_1__ctor_m589_MethodInfo_var);
		V_3 = L_0;
		V_4 = 0;
		goto IL_0061;
	}

IL_0014:
	{
		List_1_t117 * L_1 = V_3;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_1, L_2);
		List_1_t117 * L_3 = V_3;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_3, L_4);
		List_1_t117 * L_5 = V_3;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_5, L_6);
		int32_t L_7 = V_2;
		int32_t L_8 = ___vertexAmount;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)((int32_t)L_8-(int32_t)1))))))
		{
			goto IL_0041;
		}
	}
	{
		Debug_Log_m280(NULL /*static, unused*/, (String_t*) &_stringLiteral95, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_0041:
	{
		int32_t L_9 = V_4;
		if (!((int32_t)((int32_t)L_9%(int32_t)2)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)2));
		goto IL_0057;
	}

IL_0053:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)2));
	}

IL_0057:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_4;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = ___vertexAmount;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0014;
		}
	}

IL_0069:
	{
		List_1_t117 * L_16 = V_3;
		return L_16;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> MeshCreator::getVerticesBezier(System.Int32)
extern TypeInfo* List_1_t118_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t70_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m590_MethodInfo_var;
extern "C" List_1_t118 * MeshCreator_getVerticesBezier_m491 (MeshCreator_t114 * __this, int32_t ___points, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		Int32_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1__ctor_m590_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483706);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t118 * V_0 = {0};
	List_1_t118 * V_1 = {0};
	Vector3_t73  V_2 = {0};
	Vector3_t73  V_3 = {0};
	Vector3_t73  V_4 = {0};
	Vector3_t73  V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	List_1_t118 * V_10 = {0};
	int32_t V_11 = 0;
	Vector3_t73  V_12 = {0};
	Vector3_t73  V_13 = {0};
	Vector3_t73  V_14 = {0};
	Vector3_t73  V_15 = {0};
	Vector3_t73  V_16 = {0};
	Vector3_t73  V_17 = {0};
	{
		List_1_t118 * L_0 = (List_1_t118 *)il2cpp_codegen_object_new (List_1_t118_il2cpp_TypeInfo_var);
		List_1__ctor_m590(L_0, /*hidden argument*/List_1__ctor_m590_MethodInfo_var);
		V_0 = L_0;
		List_1_t118 * L_1 = (List_1_t118 *)il2cpp_codegen_object_new (List_1_t118_il2cpp_TypeInfo_var);
		List_1__ctor_m590(L_1, /*hidden argument*/List_1__ctor_m590_MethodInfo_var);
		V_1 = L_1;
		Vector3__ctor_m292((&V_2), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3__ctor_m292((&V_3), (-1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3__ctor_m292((&V_4), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3__ctor_m292((&V_5), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_6 = (-1);
		goto IL_00a6;
	}

IL_006c:
	{
		int32_t L_2 = V_6;
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t70_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral96, L_4, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		List_1_t118 * L_6 = V_0;
		int32_t L_7 = V_6;
		int32_t L_8 = ___points;
		Vector3_t73  L_9 = V_2;
		Vector3_t73  L_10 = V_3;
		Vector3_t73  L_11 = V_4;
		Vector3_t73  L_12 = V_5;
		Vector3_t73  L_13 = MeshCreator_CalculateBezierPoint_m489(__this, ((float)((float)((float)((float)(((float)L_7))*(float)(1.0f)))/(float)(((float)L_8)))), L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_6, L_13);
		int32_t L_14 = V_6;
		V_6 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_15 = V_6;
		int32_t L_16 = ___points;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_006c;
		}
	}
	{
		List_1_t118 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_17);
		V_7 = ((int32_t)((int32_t)L_18-(int32_t)1));
		goto IL_0107;
	}

IL_00bd:
	{
		List_1_t118 * L_19 = V_0;
		List_1_t118 * L_20 = V_0;
		int32_t L_21 = V_7;
		NullCheck(L_20);
		Vector3_t73  L_22 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_20, L_21);
		V_12 = L_22;
		float L_23 = ((&V_12)->___x_0);
		List_1_t118 * L_24 = V_0;
		int32_t L_25 = V_7;
		NullCheck(L_24);
		Vector3_t73  L_26 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_24, L_25);
		V_13 = L_26;
		float L_27 = ((&V_13)->___y_1);
		List_1_t118 * L_28 = V_0;
		int32_t L_29 = V_7;
		NullCheck(L_28);
		Vector3_t73  L_30 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_28, L_29);
		V_14 = L_30;
		float L_31 = ((&V_14)->___z_2);
		Vector3_t73  L_32 = {0};
		Vector3__ctor_m292(&L_32, L_23, ((float)((float)L_27*(float)(-1.0f))), L_31, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_19, L_32);
		int32_t L_33 = V_7;
		V_7 = ((int32_t)((int32_t)L_33-(int32_t)1));
	}

IL_0107:
	{
		int32_t L_34 = V_7;
		if ((((int32_t)L_34) > ((int32_t)(-1))))
		{
			goto IL_00bd;
		}
	}
	{
		Vector3__ctor_m292((&V_2), (-5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3__ctor_m292((&V_3), (-5.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Vector3__ctor_m292((&V_4), (5.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Vector3__ctor_m292((&V_5), (5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_8 = (-1);
		goto IL_0193;
	}

IL_016f:
	{
		List_1_t118 * L_35 = V_1;
		int32_t L_36 = V_8;
		int32_t L_37 = ___points;
		Vector3_t73  L_38 = V_2;
		Vector3_t73  L_39 = V_3;
		Vector3_t73  L_40 = V_4;
		Vector3_t73  L_41 = V_5;
		Vector3_t73  L_42 = MeshCreator_CalculateBezierPoint_m489(__this, ((float)((float)((float)((float)(((float)L_36))+(float)(1.0f)))/(float)(((float)L_37)))), L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_35, L_42);
		int32_t L_43 = V_8;
		V_8 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_0193:
	{
		int32_t L_44 = V_8;
		int32_t L_45 = ___points;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_016f;
		}
	}
	{
		List_1_t118 * L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_46);
		V_9 = ((int32_t)((int32_t)L_47-(int32_t)1));
		goto IL_01f4;
	}

IL_01aa:
	{
		List_1_t118 * L_48 = V_1;
		List_1_t118 * L_49 = V_1;
		int32_t L_50 = V_9;
		NullCheck(L_49);
		Vector3_t73  L_51 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_49, L_50);
		V_15 = L_51;
		float L_52 = ((&V_15)->___x_0);
		List_1_t118 * L_53 = V_1;
		int32_t L_54 = V_9;
		NullCheck(L_53);
		Vector3_t73  L_55 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_53, L_54);
		V_16 = L_55;
		float L_56 = ((&V_16)->___y_1);
		List_1_t118 * L_57 = V_1;
		int32_t L_58 = V_9;
		NullCheck(L_57);
		Vector3_t73  L_59 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_57, L_58);
		V_17 = L_59;
		float L_60 = ((&V_17)->___z_2);
		Vector3_t73  L_61 = {0};
		Vector3__ctor_m292(&L_61, L_52, ((float)((float)L_56*(float)(-1.0f))), L_60, /*hidden argument*/NULL);
		NullCheck(L_48);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_48, L_61);
		int32_t L_62 = V_9;
		V_9 = ((int32_t)((int32_t)L_62-(int32_t)1));
	}

IL_01f4:
	{
		int32_t L_63 = V_9;
		if ((((int32_t)L_63) > ((int32_t)(-1))))
		{
			goto IL_01aa;
		}
	}
	{
		List_1_t118 * L_64 = (List_1_t118 *)il2cpp_codegen_object_new (List_1_t118_il2cpp_TypeInfo_var);
		List_1__ctor_m590(L_64, /*hidden argument*/List_1__ctor_m590_MethodInfo_var);
		V_10 = L_64;
		V_11 = 0;
		goto IL_022f;
	}

IL_020b:
	{
		List_1_t118 * L_65 = V_10;
		List_1_t118 * L_66 = V_1;
		int32_t L_67 = V_11;
		NullCheck(L_66);
		Vector3_t73  L_68 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_66, L_67);
		NullCheck(L_65);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_65, L_68);
		List_1_t118 * L_69 = V_10;
		List_1_t118 * L_70 = V_0;
		int32_t L_71 = V_11;
		NullCheck(L_70);
		Vector3_t73  L_72 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_70, L_71);
		NullCheck(L_69);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_69, L_72);
		int32_t L_73 = V_11;
		V_11 = ((int32_t)((int32_t)L_73+(int32_t)1));
	}

IL_022f:
	{
		int32_t L_74 = V_11;
		List_1_t118 * L_75 = V_1;
		NullCheck(L_75);
		int32_t L_76 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_75);
		if ((((int32_t)L_74) < ((int32_t)L_76)))
		{
			goto IL_020b;
		}
	}
	{
		List_1_t118 * L_77 = V_10;
		return L_77;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> MeshCreator::getVerticesCircular(System.Single)
extern TypeInfo* List_1_t118_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t137_il2cpp_TypeInfo_var;
extern TypeInfo* UnityException_t138_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m590_MethodInfo_var;
extern "C" List_1_t118 * MeshCreator_getVerticesCircular_m492 (MeshCreator_t114 * __this, float ___subdivisionLength, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		Mathf_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		UnityException_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		List_1__ctor_m590_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483706);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t118 * V_0 = {0};
	List_1_t118 * V_1 = {0};
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	List_1_t118 * V_12 = {0};
	int32_t V_13 = 0;
	Vector3_t73  V_14 = {0};
	Vector3_t73  V_15 = {0};
	Vector3_t73  V_16 = {0};
	Vector3_t73  V_17 = {0};
	Vector3_t73  V_18 = {0};
	Vector3_t73  V_19 = {0};
	{
		List_1_t118 * L_0 = (List_1_t118 *)il2cpp_codegen_object_new (List_1_t118_il2cpp_TypeInfo_var);
		List_1__ctor_m590(L_0, /*hidden argument*/List_1__ctor_m590_MethodInfo_var);
		V_0 = L_0;
		List_1_t118 * L_1 = (List_1_t118 *)il2cpp_codegen_object_new (List_1_t118_il2cpp_TypeInfo_var);
		List_1__ctor_m590(L_1, /*hidden argument*/List_1__ctor_m590_MethodInfo_var);
		V_1 = L_1;
		float L_2 = ___subdivisionLength;
		V_2 = L_2;
		V_3 = 1;
		int32_t L_3 = V_3;
		float L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t137_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_FloorToInt_m591(NULL /*static, unused*/, ((float)((float)(((float)((int32_t)((int32_t)2*(int32_t)L_3))))/(float)L_4)), /*hidden argument*/NULL);
		V_4 = L_5;
		V_5 = 0;
		goto IL_0054;
	}

IL_0025:
	{
		List_1_t118 * L_6 = V_0;
		int32_t L_7 = V_3;
		int32_t L_8 = V_5;
		float L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = V_3;
		int32_t L_12 = V_5;
		float L_13 = V_2;
		float L_14 = MeshCreator_getY_m487(__this, L_10, ((float)((float)(((float)((-L_11))))+(float)((float)((float)(((float)L_12))*(float)L_13)))), /*hidden argument*/NULL);
		Vector3_t73  L_15 = {0};
		Vector3__ctor_m292(&L_15, ((float)((float)(((float)((-L_7))))+(float)((float)((float)(((float)L_8))*(float)L_9)))), L_14, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_6, L_15);
		int32_t L_16 = V_5;
		V_5 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_17 = V_5;
		int32_t L_18 = V_4;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0025;
		}
	}
	{
		List_1_t118 * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_19);
		V_6 = ((int32_t)((int32_t)L_20-(int32_t)2));
		goto IL_00b6;
	}

IL_006c:
	{
		List_1_t118 * L_21 = V_0;
		List_1_t118 * L_22 = V_0;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		Vector3_t73  L_24 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_22, L_23);
		V_14 = L_24;
		float L_25 = ((&V_14)->___x_0);
		List_1_t118 * L_26 = V_0;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		Vector3_t73  L_28 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_26, L_27);
		V_15 = L_28;
		float L_29 = ((&V_15)->___y_1);
		List_1_t118 * L_30 = V_0;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		Vector3_t73  L_32 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_30, L_31);
		V_16 = L_32;
		float L_33 = ((&V_16)->___z_2);
		Vector3_t73  L_34 = {0};
		Vector3__ctor_m292(&L_34, L_25, ((float)((float)L_29*(float)(-1.0f))), L_33, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_21, L_34);
		int32_t L_35 = V_6;
		V_6 = ((int32_t)((int32_t)L_35-(int32_t)1));
	}

IL_00b6:
	{
		int32_t L_36 = V_6;
		if ((((int32_t)L_36) > ((int32_t)(-1))))
		{
			goto IL_006c;
		}
	}
	{
		V_7 = 5;
		int32_t L_37 = V_7;
		int32_t L_38 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t137_il2cpp_TypeInfo_var);
		int32_t L_39 = Mathf_CeilToInt_m592(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_37/(int32_t)L_38)))), /*hidden argument*/NULL);
		V_8 = L_39;
		float L_40 = V_2;
		int32_t L_41 = V_8;
		V_2 = ((float)((float)L_40*(float)(((float)L_41))));
		int32_t L_42 = V_7;
		float L_43 = V_2;
		int32_t L_44 = Mathf_FloorToInt_m591(NULL /*static, unused*/, ((float)((float)(((float)((int32_t)((int32_t)2*(int32_t)L_42))))/(float)L_43)), /*hidden argument*/NULL);
		V_9 = L_44;
		int32_t L_45 = V_9;
		int32_t L_46 = V_4;
		if ((((int32_t)L_45) == ((int32_t)L_46)))
		{
			goto IL_00f5;
		}
	}
	{
		UnityException_t138 * L_47 = (UnityException_t138 *)il2cpp_codegen_object_new (UnityException_t138_il2cpp_TypeInfo_var);
		UnityException__ctor_m593(L_47, (String_t*) &_stringLiteral97, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_47);
	}

IL_00f5:
	{
		V_10 = 0;
		goto IL_012f;
	}

IL_00fd:
	{
		List_1_t118 * L_48 = V_1;
		int32_t L_49 = V_7;
		int32_t L_50 = V_10;
		float L_51 = V_2;
		int32_t L_52 = V_7;
		int32_t L_53 = V_7;
		int32_t L_54 = V_10;
		float L_55 = V_2;
		float L_56 = MeshCreator_getY_m487(__this, L_52, ((float)((float)(((float)((-L_53))))+(float)((float)((float)(((float)L_54))*(float)L_55)))), /*hidden argument*/NULL);
		Vector3_t73  L_57 = {0};
		Vector3__ctor_m292(&L_57, ((float)((float)(((float)((-L_49))))+(float)((float)((float)(((float)L_50))*(float)L_51)))), L_56, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_48);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_48, L_57);
		int32_t L_58 = V_10;
		V_10 = ((int32_t)((int32_t)L_58+(int32_t)1));
	}

IL_012f:
	{
		int32_t L_59 = V_10;
		int32_t L_60 = V_4;
		if ((((int32_t)L_59) <= ((int32_t)L_60)))
		{
			goto IL_00fd;
		}
	}
	{
		List_1_t118 * L_61 = V_1;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_61);
		V_11 = ((int32_t)((int32_t)L_62-(int32_t)2));
		goto IL_0191;
	}

IL_0147:
	{
		List_1_t118 * L_63 = V_1;
		List_1_t118 * L_64 = V_1;
		int32_t L_65 = V_11;
		NullCheck(L_64);
		Vector3_t73  L_66 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_64, L_65);
		V_17 = L_66;
		float L_67 = ((&V_17)->___x_0);
		List_1_t118 * L_68 = V_1;
		int32_t L_69 = V_11;
		NullCheck(L_68);
		Vector3_t73  L_70 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_68, L_69);
		V_18 = L_70;
		float L_71 = ((&V_18)->___y_1);
		List_1_t118 * L_72 = V_1;
		int32_t L_73 = V_11;
		NullCheck(L_72);
		Vector3_t73  L_74 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_72, L_73);
		V_19 = L_74;
		float L_75 = ((&V_19)->___z_2);
		Vector3_t73  L_76 = {0};
		Vector3__ctor_m292(&L_76, L_67, ((float)((float)L_71*(float)(-1.0f))), L_75, /*hidden argument*/NULL);
		NullCheck(L_63);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_63, L_76);
		int32_t L_77 = V_11;
		V_11 = ((int32_t)((int32_t)L_77-(int32_t)1));
	}

IL_0191:
	{
		int32_t L_78 = V_11;
		if ((((int32_t)L_78) > ((int32_t)(-1))))
		{
			goto IL_0147;
		}
	}
	{
		List_1_t118 * L_79 = (List_1_t118 *)il2cpp_codegen_object_new (List_1_t118_il2cpp_TypeInfo_var);
		List_1__ctor_m590(L_79, /*hidden argument*/List_1__ctor_m590_MethodInfo_var);
		V_12 = L_79;
		V_13 = 0;
		goto IL_01cc;
	}

IL_01a8:
	{
		List_1_t118 * L_80 = V_12;
		List_1_t118 * L_81 = V_1;
		int32_t L_82 = V_13;
		NullCheck(L_81);
		Vector3_t73  L_83 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_81, L_82);
		NullCheck(L_80);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_80, L_83);
		List_1_t118 * L_84 = V_12;
		List_1_t118 * L_85 = V_0;
		int32_t L_86 = V_13;
		NullCheck(L_85);
		Vector3_t73  L_87 = (Vector3_t73 )VirtFuncInvoker1< Vector3_t73 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_85, L_86);
		NullCheck(L_84);
		VirtActionInvoker1< Vector3_t73  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_84, L_87);
		int32_t L_88 = V_13;
		V_13 = ((int32_t)((int32_t)L_88+(int32_t)1));
	}

IL_01cc:
	{
		int32_t L_89 = V_13;
		List_1_t118 * L_90 = V_1;
		NullCheck(L_90);
		int32_t L_91 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_90);
		if ((((int32_t)L_89) < ((int32_t)L_91)))
		{
			goto IL_01a8;
		}
	}
	{
		List_1_t118 * L_92 = V_12;
		return L_92;
	}
}
// MoveOnSpeech
#include "AssemblyU2DCSharp_MoveOnSpeech.h"
#ifndef _MSC_VER
#else
#endif
// MoveOnSpeech
#include "AssemblyU2DCSharp_MoveOnSpeechMethodDeclarations.h"

// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1.h"
// SpeechAnimationDictionary/Animation
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechAnimationDictionary_Anim.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// SpeechAnimationDictionary
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechAnimationDictionary.h"
// System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_2.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// SpeechRecognition/State
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechRecognition_State.h"
// SpeechRecognition
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechRecognitionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1MethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
struct Component_t130;
struct Rigidbody2D_t139;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t139_m594(__this, method) (( Rigidbody2D_t139 * (*) (Component_t130 *, const MethodInfo*))Component_GetComponent_TisObject_t_m565_gshared)(__this, method)


// System.Void MoveOnSpeech::.ctor()
extern TypeInfo* GUIStyle_t112_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void MoveOnSpeech__ctor_m493 (MoveOnSpeech_t115 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t112 * L_0 = (GUIStyle_t112 *)il2cpp_codegen_object_new (GUIStyle_t112_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_0, /*hidden argument*/NULL);
		__this->___fontStyle_2 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___lastResults_4 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___lastResults2_5 = L_2;
		Vector2_t22  L_3 = {0};
		Vector2__ctor_m263(&L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___direction_6 = L_3;
		Vector2_t22  L_4 = {0};
		Vector2__ctor_m263(&L_4, (2.0f), (2.0f), /*hidden argument*/NULL);
		__this->___speed_7 = L_4;
		Vector2_t22  L_5 = {0};
		Vector2__ctor_m263(&L_5, (2.0f), (2.0f), /*hidden argument*/NULL);
		__this->___runningSpeed_9 = L_5;
		Vector2_t22  L_6 = {0};
		Vector2__ctor_m263(&L_6, (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___walkingSpeed_10 = L_6;
		__this->___facingRight_17 = 1;
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___lastAnimation_20 = L_7;
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveOnSpeech::Start()
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void MoveOnSpeech_Start_m494 (MoveOnSpeech_t115 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_AddSpeechRecognitionListeren_m175(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		SpeechRecognition_StartListening_m186(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIStyle_t112 * L_0 = (__this->___fontStyle_2);
		NullCheck(L_0);
		GUIStyleState_t133 * L_1 = GUIStyle_get_normal_m572(L_0, /*hidden argument*/NULL);
		Color_t134  L_2 = Color_get_black_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyleState_set_textColor_m574(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveOnSpeech::OnResults(System.String[])
extern TypeInfo* StringBuilder_t140_il2cpp_TypeInfo_var;
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void MoveOnSpeech_OnResults_m495 (MoveOnSpeech_t115 * __this, StringU5BU5D_t31* ___results, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t140 * V_0 = {0};
	{
		StringBuilder_t140 * L_0 = (StringBuilder_t140 *)il2cpp_codegen_object_new (StringBuilder_t140_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m595(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t140 * L_1 = V_0;
		StringU5BU5D_t31* L_2 = ___results;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		NullCheck(L_1);
		StringBuilder_Append_m596(L_1, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_3)), /*hidden argument*/NULL);
		StringBuilder_t140 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_4);
		__this->___lastResults_4 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_StartListening_m186(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveOnSpeech::Update()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t141_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m597_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m598_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m599_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m600_MethodInfo_var;
extern "C" void MoveOnSpeech_Update_m496 (MoveOnSpeech_t115 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Enumerator_t141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Dictionary_2_get_Keys_m597_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		KeyCollection_GetEnumerator_m598_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		Enumerator_get_Current_m599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		Enumerator_MoveNext_m600_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Enumerator_t141  V_2 = {0};
	Animation_t21 * V_3 = {0};
	Vector3_t73  V_4 = {0};
	Vector3_t73  V_5 = {0};
	Exception_t45 * V_6 = {0};
	Vector3_t73  V_7 = {0};
	bool V_8 = false;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		Debug_Log_m280(NULL /*static, unused*/, (String_t*) &_stringLiteral98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechAnimationDictionary_t26 * L_1 = SpeechRecognition_GetSpeechAnimationDictionary_m183(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_t24 * L_2 = (L_1->___commandAnimations_4);
		NullCheck(L_2);
		KeyCollection_t142 * L_3 = Dictionary_2_get_Keys_m597(L_2, /*hidden argument*/Dictionary_2_get_Keys_m597_MethodInfo_var);
		NullCheck(L_3);
		Enumerator_t141  L_4 = KeyCollection_GetEnumerator_m598(L_3, /*hidden argument*/KeyCollection_GetEnumerator_m598_MethodInfo_var);
		V_2 = L_4;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0054;
		}

IL_002a:
		{
			String_t* L_5 = Enumerator_get_Current_m599((&V_2), /*hidden argument*/Enumerator_get_Current_m599_MethodInfo_var);
			V_1 = L_5;
			String_t* L_6 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
			bool L_7 = SpeechRecognition_CommandRecognized_m184(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0054;
			}
		}

IL_003d:
		{
			String_t* L_8 = V_1;
			V_0 = L_8;
			String_t* L_9 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_10 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral99, L_9, /*hidden argument*/NULL);
			Debug_Log_m280(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			goto IL_0060;
		}

IL_0054:
		{
			bool L_11 = Enumerator_MoveNext_m600((&V_2), /*hidden argument*/Enumerator_MoveNext_m600_MethodInfo_var);
			if (L_11)
			{
				goto IL_002a;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Enumerator_t141  L_12 = V_2;
		Enumerator_t141  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t141_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0071:
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_15, L_16);
		if (L_17)
		{
			goto IL_0298;
		}
	}
	{
		String_t* L_18 = V_0;
		if (!L_18)
		{
			goto IL_0298;
		}
	}
	{
		Debug_Log_m280(NULL /*static, unused*/, (String_t*) &_stringLiteral100, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechAnimationDictionary_t26 * L_19 = SpeechRecognition_GetSpeechAnimationDictionary_m183(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral101, L_19, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_3 = (Animation_t21 *)NULL;
		SpeechAnimationDictionary_t26 * L_21 = SpeechRecognition_GetSpeechAnimationDictionary_m183(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		Dictionary_2_t24 * L_22 = (L_21->___commandAnimations_4);
		String_t* L_23 = V_0;
		NullCheck(L_22);
		Animation_t21 * L_24 = (Animation_t21 *)VirtFuncInvoker1< Animation_t21 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::get_Item(!0) */, L_22, L_23);
		V_3 = L_24;
		Animation_t21 * L_25 = V_3;
		if (!L_25)
		{
			goto IL_0298;
		}
	}

IL_00be:
	try
	{ // begin try (depth: 1)
		{
			Animation_t21 * L_26 = V_3;
			NullCheck(L_26);
			Vector2_t22  L_27 = (L_26->___direction_5);
			__this->___direction_6 = L_27;
			bool L_28 = (__this->___facingRight_17);
			if (!L_28)
			{
				goto IL_0133;
			}
		}

IL_00d5:
		{
			Animation_t21 * L_29 = V_3;
			NullCheck(L_29);
			bool L_30 = (L_29->___flippedX_0);
			if (!L_30)
			{
				goto IL_0133;
			}
		}

IL_00e0:
		{
			bool L_31 = (__this->___facingRight_17);
			__this->___facingRight_17 = ((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
			GameObject_t72 * L_32 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, (String_t*) &_stringLiteral102, /*hidden argument*/NULL);
			NullCheck(L_32);
			Transform_t124 * L_33 = GameObject_get_transform_m550(L_32, /*hidden argument*/NULL);
			NullCheck(L_33);
			Vector3_t73  L_34 = Transform_get_localScale_m551(L_33, /*hidden argument*/NULL);
			V_4 = L_34;
			Vector3_t73 * L_35 = (&V_4);
			float L_36 = (L_35->___x_0);
			L_35->___x_0 = ((float)((float)L_36*(float)(-1.0f)));
			GameObject_t72 * L_37 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, (String_t*) &_stringLiteral102, /*hidden argument*/NULL);
			NullCheck(L_37);
			Transform_t124 * L_38 = GameObject_get_transform_m550(L_37, /*hidden argument*/NULL);
			Vector3_t73  L_39 = V_4;
			NullCheck(L_38);
			Transform_set_localScale_m553(L_38, L_39, /*hidden argument*/NULL);
			goto IL_0197;
		}

IL_0133:
		{
			bool L_40 = (__this->___facingRight_17);
			if (L_40)
			{
				goto IL_0197;
			}
		}

IL_013e:
		{
			Animation_t21 * L_41 = V_3;
			NullCheck(L_41);
			bool L_42 = (L_41->___flippedX_0);
			if (L_42)
			{
				goto IL_0197;
			}
		}

IL_0149:
		{
			bool L_43 = (__this->___facingRight_17);
			__this->___facingRight_17 = ((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
			GameObject_t72 * L_44 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, (String_t*) &_stringLiteral102, /*hidden argument*/NULL);
			NullCheck(L_44);
			Transform_t124 * L_45 = GameObject_get_transform_m550(L_44, /*hidden argument*/NULL);
			NullCheck(L_45);
			Vector3_t73  L_46 = Transform_get_localScale_m551(L_45, /*hidden argument*/NULL);
			V_5 = L_46;
			Vector3_t73 * L_47 = (&V_5);
			float L_48 = (L_47->___x_0);
			L_47->___x_0 = ((float)((float)L_48*(float)(-1.0f)));
			GameObject_t72 * L_49 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, (String_t*) &_stringLiteral102, /*hidden argument*/NULL);
			NullCheck(L_49);
			Transform_t124 * L_50 = GameObject_get_transform_m550(L_49, /*hidden argument*/NULL);
			Vector3_t73  L_51 = V_5;
			NullCheck(L_50);
			Transform_set_localScale_m553(L_50, L_51, /*hidden argument*/NULL);
		}

IL_0197:
		{
			Animation_t21 * L_52 = V_3;
			NullCheck(L_52);
			bool L_53 = (L_52->___running_2);
			if (!L_53)
			{
				goto IL_01c6;
			}
		}

IL_01a2:
		{
			Animation_t21 * L_54 = V_3;
			NullCheck(L_54);
			bool L_55 = (L_54->___running_2);
			__this->___running_18 = L_55;
			__this->___walking_19 = 0;
			Vector2_t22  L_56 = (__this->___runningSpeed_9);
			__this->___speed_7 = L_56;
			goto IL_0207;
		}

IL_01c6:
		{
			Animation_t21 * L_57 = V_3;
			NullCheck(L_57);
			bool L_58 = (L_57->___walking_3);
			if (!L_58)
			{
				goto IL_01f5;
			}
		}

IL_01d1:
		{
			__this->___running_18 = 0;
			Animation_t21 * L_59 = V_3;
			NullCheck(L_59);
			bool L_60 = (L_59->___walking_3);
			__this->___walking_19 = L_60;
			Vector2_t22  L_61 = (__this->___walkingSpeed_10);
			__this->___speed_7 = L_61;
			goto IL_0207;
		}

IL_01f5:
		{
			int32_t L_62 = 0;
			V_8 = L_62;
			__this->___walking_19 = L_62;
			bool L_63 = V_8;
			__this->___running_18 = L_63;
		}

IL_0207:
		{
			Animation_t21 * L_64 = V_3;
			if (!L_64)
			{
				goto IL_0264;
			}
		}

IL_020d:
		{
			String_t* L_65 = (__this->___lastAnimation_20);
			Animation_t21 * L_66 = V_3;
			NullCheck(L_66);
			String_t* L_67 = (L_66->___animation_4);
			NullCheck(L_65);
			bool L_68 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_65, L_67);
			if (!L_68)
			{
				goto IL_0228;
			}
		}

IL_0223:
		{
			goto IL_0264;
		}

IL_0228:
		{
			Animation_t21 * L_69 = V_3;
			NullCheck(L_69);
			String_t* L_70 = (L_69->___animation_4);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_71 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			NullCheck(L_70);
			bool L_72 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_70, L_71);
			if (L_72)
			{
				goto IL_0264;
			}
		}

IL_023d:
		{
			Animation_t21 * L_73 = V_3;
			NullCheck(L_73);
			String_t* L_74 = (L_73->___animation_4);
			if (!L_74)
			{
				goto IL_0264;
			}
		}

IL_0248:
		{
			MediaPlayerCtrl_t95 * L_75 = (__this->___scrMedia_3);
			Animation_t21 * L_76 = V_3;
			NullCheck(L_76);
			String_t* L_77 = (L_76->___animation_4);
			NullCheck(L_75);
			MediaPlayerCtrl_Load_m414(L_75, L_77, /*hidden argument*/NULL);
			MediaPlayerCtrl_t95 * L_78 = (__this->___scrMedia_3);
			NullCheck(L_78);
			MediaPlayerCtrl_Play_m411(L_78, /*hidden argument*/NULL);
		}

IL_0264:
		{
			Animation_t21 * L_79 = V_3;
			NullCheck(L_79);
			String_t* L_80 = (L_79->___animation_4);
			__this->___lastAnimation_20 = L_80;
			goto IL_0298;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t45 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t45_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0275;
		throw e;
	}

CATCH_0275:
	{ // begin catch(System.Exception)
		{
			V_6 = ((Exception_t45 *)__exception_local);
			Exception_t45 * L_81 = V_6;
			NullCheck(L_81);
			String_t* L_82 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_81);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_83 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral103, L_82, /*hidden argument*/NULL);
			__this->___lastResults2_5 = L_83;
			goto IL_0309;
		}

IL_0293:
		{
			; // IL_0293: leave IL_0298
		}
	} // end catch (depth: 1)

IL_0298:
	{
		Vector2_t22 * L_84 = &(__this->___speed_7);
		float L_85 = (L_84->___x_1);
		Vector2_t22 * L_86 = &(__this->___direction_6);
		float L_87 = (L_86->___x_1);
		Vector2_t22 * L_88 = &(__this->___speed_7);
		float L_89 = (L_88->___y_2);
		Vector2_t22 * L_90 = &(__this->___direction_6);
		float L_91 = (L_90->___y_2);
		Vector2_t22  L_92 = {0};
		Vector2__ctor_m263(&L_92, ((float)((float)L_85*(float)L_87)), ((float)((float)L_89*(float)L_91)), /*hidden argument*/NULL);
		__this->___movement_8 = L_92;
		GameObject_t72 * L_93 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, (String_t*) &_stringLiteral102, /*hidden argument*/NULL);
		NullCheck(L_93);
		Transform_t124 * L_94 = GameObject_get_transform_m550(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		Vector3_t73  L_95 = Transform_get_localScale_m551(L_94, /*hidden argument*/NULL);
		V_7 = L_95;
		(&V_7)->___y_1 = (1.6f);
		GameObject_t72 * L_96 = GameObject_FindGameObjectWithTag_m575(NULL /*static, unused*/, (String_t*) &_stringLiteral102, /*hidden argument*/NULL);
		NullCheck(L_96);
		Transform_t124 * L_97 = GameObject_get_transform_m550(L_96, /*hidden argument*/NULL);
		Vector3_t73  L_98 = V_7;
		NullCheck(L_97);
		Transform_set_localScale_m553(L_97, L_98, /*hidden argument*/NULL);
	}

IL_0309:
	{
		return;
	}
}
// System.Void MoveOnSpeech::OnGUI()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t120_il2cpp_TypeInfo_var;
extern "C" void MoveOnSpeech_OnGUI_m497 (MoveOnSpeech_t115 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUI_t120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m549(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t36  L_2 = {0};
		Rect__ctor_m286(&L_2, (0.0f), (0.0f), (((float)L_0)), (((float)L_1)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___lastResults_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral104, L_3, /*hidden argument*/NULL);
		GUIStyle_t112 * L_5 = (__this->___fontStyle_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		GUI_Label_m577(NULL /*static, unused*/, L_2, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_width_m549(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_height_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t36  L_8 = {0};
		Rect__ctor_m286(&L_8, (0.0f), (30.0f), (((float)L_6)), (((float)L_7)), /*hidden argument*/NULL);
		String_t* L_9 = (__this->___lastResults2_5);
		String_t* L_10 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral87, L_9, /*hidden argument*/NULL);
		GUIStyle_t112 * L_11 = (__this->___fontStyle_2);
		GUI_Label_m577(NULL /*static, unused*/, L_8, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveOnSpeech::FixedUpdate()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t139_m594_MethodInfo_var;
extern "C" void MoveOnSpeech_FixedUpdate_m498 (MoveOnSpeech_t115 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody2D_t139_m594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483711);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody2D_t139 * L_0 = Component_GetComponent_TisRigidbody2D_t139_m594(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t139_m594_MethodInfo_var);
		Vector2_t22  L_1 = (__this->___movement_8);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m601(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveOnSpeech::OnBeginningOfSpeech()
extern "C" void MoveOnSpeech_OnBeginningOfSpeech_m499 (MoveOnSpeech_t115 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MoveOnSpeech::OnBufferReceived(System.Byte[])
extern "C" void MoveOnSpeech_OnBufferReceived_m500 (MoveOnSpeech_t115 * __this, ByteU5BU5D_t54* ___buffer, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MoveOnSpeech::OnEndOfSpeech()
extern "C" void MoveOnSpeech_OnEndOfSpeech_m501 (MoveOnSpeech_t115 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MoveOnSpeech::OnError(System.Int32,System.String)
extern TypeInfo* Int32_t70_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void MoveOnSpeech_OnError_m502 (MoveOnSpeech_t115 * __this, int32_t ___error, String_t* ___errorMessage, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___errorMessage;
		int32_t L_1 = ___error;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t70_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m602(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral37, L_3, /*hidden argument*/NULL);
		__this->___lastResults_4 = L_4;
		int32_t L_5 = ___error;
		if ((!(((uint32_t)L_5) == ((uint32_t)5))))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_StartListening_m186(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void MoveOnSpeech::OnEvent(System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void MoveOnSpeech_OnEvent_m503 (MoveOnSpeech_t115 * __this, int32_t ___eventType, Dictionary_2_t77 * ___bundle, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MoveOnSpeech::OnPartialResults(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void MoveOnSpeech_OnPartialResults_m504 (MoveOnSpeech_t115 * __this, Dictionary_2_t77 * ___partialResults, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MoveOnSpeech::OnReadyForSpeech(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void MoveOnSpeech_OnReadyForSpeech_m505 (MoveOnSpeech_t115 * __this, Dictionary_2_t77 * ___bundle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_StartListening_m186(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveOnSpeech::OnRmsChanged(System.Single)
extern "C" void MoveOnSpeech_OnRmsChanged_m506 (MoveOnSpeech_t115 * __this, float ___rmsdB, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MoveOnSpeech::OnChangeState(SpeechRecognition/State)
extern "C" void MoveOnSpeech_OnChangeState_m507 (MoveOnSpeech_t115 * __this, int32_t ___newState, const MethodInfo* method)
{
	{
		return;
	}
}
// SceneSwitch
#include "AssemblyU2DCSharp_SceneSwitch.h"
#ifndef _MSC_VER
#else
#endif
// SceneSwitch
#include "AssemblyU2DCSharp_SceneSwitchMethodDeclarations.h"



// System.Void SceneSwitch::.ctor()
extern TypeInfo* GUIStyle_t112_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SceneSwitch__ctor_m508 (SceneSwitch_t116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t112 * L_0 = (GUIStyle_t112 *)il2cpp_codegen_object_new (GUIStyle_t112_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_0, /*hidden argument*/NULL);
		__this->___fontStyle_2 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___lastResults_3 = L_1;
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitch::Start()
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void SceneSwitch_Start_m509 (SceneSwitch_t116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_AddSpeechRecognitionListeren_m175(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		SpeechRecognition_StartListening_m186(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIStyle_t112 * L_0 = (__this->___fontStyle_2);
		NullCheck(L_0);
		GUIStyleState_t133 * L_1 = GUIStyle_get_normal_m572(L_0, /*hidden argument*/NULL);
		Color_t134  L_2 = Color_get_black_m573(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyleState_set_textColor_m574(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitch::OnResults(System.String[])
extern TypeInfo* StringBuilder_t140_il2cpp_TypeInfo_var;
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void SceneSwitch_OnResults_m510 (SceneSwitch_t116 * __this, StringU5BU5D_t31* ___results, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t140 * V_0 = {0};
	{
		StringBuilder_t140 * L_0 = (StringBuilder_t140 *)il2cpp_codegen_object_new (StringBuilder_t140_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m595(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t140 * L_1 = V_0;
		StringU5BU5D_t31* L_2 = ___results;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_2, L_3)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_3)));
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m603(L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m596(L_1, L_5, /*hidden argument*/NULL);
		StringBuilder_t140 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_6);
		__this->___lastResults_3 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_StartListening_m186(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitch::Update()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t141_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m597_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m598_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m599_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m600_MethodInfo_var;
extern "C" void SceneSwitch_Update_m511 (SceneSwitch_t116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Enumerator_t141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_get_Keys_m597_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		KeyCollection_GetEnumerator_m598_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		Enumerator_get_Current_m599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		Enumerator_MoveNext_m600_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Enumerator_t141  V_2 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		Debug_Log_m280(NULL /*static, unused*/, (String_t*) &_stringLiteral98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechAnimationDictionary_t26 * L_1 = SpeechRecognition_GetSpeechAnimationDictionary_m183(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_t24 * L_2 = (L_1->___commandAnimations_4);
		NullCheck(L_2);
		KeyCollection_t142 * L_3 = Dictionary_2_get_Keys_m597(L_2, /*hidden argument*/Dictionary_2_get_Keys_m597_MethodInfo_var);
		NullCheck(L_3);
		Enumerator_t141  L_4 = KeyCollection_GetEnumerator_m598(L_3, /*hidden argument*/KeyCollection_GetEnumerator_m598_MethodInfo_var);
		V_2 = L_4;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0054;
		}

IL_002a:
		{
			String_t* L_5 = Enumerator_get_Current_m599((&V_2), /*hidden argument*/Enumerator_get_Current_m599_MethodInfo_var);
			V_1 = L_5;
			String_t* L_6 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
			bool L_7 = SpeechRecognition_CommandRecognized_m184(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0054;
			}
		}

IL_003d:
		{
			String_t* L_8 = V_1;
			V_0 = L_8;
			String_t* L_9 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_10 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral99, L_9, /*hidden argument*/NULL);
			Debug_Log_m280(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			goto IL_0060;
		}

IL_0054:
		{
			bool L_11 = Enumerator_MoveNext_m600((&V_2), /*hidden argument*/Enumerator_MoveNext_m600_MethodInfo_var);
			if (L_11)
			{
				goto IL_002a;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Enumerator_t141  L_12 = V_2;
		Enumerator_t141  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t141_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0071:
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_15, L_16);
		if (L_17)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_18 = V_0;
		if (!L_18)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_19, (String_t*) &_stringLiteral105);
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		Application_LoadLevel_m604(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_009d:
	{
		return;
	}
}
// System.Void SceneSwitch::OnGUI()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t120_il2cpp_TypeInfo_var;
extern "C" void SceneSwitch_OnGUI_m512 (SceneSwitch_t116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUI_t120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m549(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t36  L_2 = {0};
		Rect__ctor_m286(&L_2, (0.0f), (0.0f), (((float)L_0)), (((float)L_1)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___lastResults_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral104, L_3, /*hidden argument*/NULL);
		GUIStyle_t112 * L_5 = (__this->___fontStyle_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t120_il2cpp_TypeInfo_var);
		GUI_Label_m577(NULL /*static, unused*/, L_2, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitch::OnBeginningOfSpeech()
extern "C" void SceneSwitch_OnBeginningOfSpeech_m513 (SceneSwitch_t116 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SceneSwitch::OnBufferReceived(System.Byte[])
extern "C" void SceneSwitch_OnBufferReceived_m514 (SceneSwitch_t116 * __this, ByteU5BU5D_t54* ___buffer, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SceneSwitch::OnEndOfSpeech()
extern "C" void SceneSwitch_OnEndOfSpeech_m515 (SceneSwitch_t116 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SceneSwitch::OnError(System.Int32,System.String)
extern TypeInfo* Int32_t70_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void SceneSwitch_OnError_m516 (SceneSwitch_t116 * __this, int32_t ___error, String_t* ___errorMessage, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___errorMessage;
		int32_t L_1 = ___error;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t70_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m602(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral37, L_3, /*hidden argument*/NULL);
		__this->___lastResults_3 = L_4;
		int32_t L_5 = ___error;
		if ((!(((uint32_t)L_5) == ((uint32_t)5))))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_StartListening_m186(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void SceneSwitch::OnEvent(System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void SceneSwitch_OnEvent_m517 (SceneSwitch_t116 * __this, int32_t ___eventType, Dictionary_2_t77 * ___bundle, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SceneSwitch::OnPartialResults(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void SceneSwitch_OnPartialResults_m518 (SceneSwitch_t116 * __this, Dictionary_2_t77 * ___partialResults, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SceneSwitch::OnReadyForSpeech(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void SceneSwitch_OnReadyForSpeech_m519 (SceneSwitch_t116 * __this, Dictionary_2_t77 * ___bundle, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SceneSwitch::OnRmsChanged(System.Single)
extern "C" void SceneSwitch_OnRmsChanged_m520 (SceneSwitch_t116 * __this, float ___rmsdB, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SceneSwitch::OnChangeState(SpeechRecognition/State)
extern "C" void SceneSwitch_OnChangeState_m521 (SceneSwitch_t116 * __this, int32_t ___newState, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
