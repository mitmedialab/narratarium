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
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
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
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// SimpleJSON.JSONBinaryTag
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONBinaryTag.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONBinaryTag
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONBinaryTagMethodDeclarations.h"



// SimpleJSON.JSONNode/<>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode_U3CU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONNode/<>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode_U3CU3Ec__IMethodDeclarations.h"

// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void SimpleJSON.JSONNode/<>c__Iterator0::.ctor()
extern "C" void U3CU3Ec__Iterator0__ctor_m0 (U3CU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C" JSONNode_t2 * U3CU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m1 (U3CU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2 (U3CU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CU3Ec__Iterator0_System_Collections_IEnumerable_GetEnumerator_m3 (U3CU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(4 /* System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern TypeInfo* U3CU3Ec__Iterator0_t3_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m4 (U3CU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator0_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t* L_0 = &(__this->___U24PC_0);
		int32_t L_1 = Interlocked_CompareExchange_m200(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator0_t3 * L_2 = (U3CU3Ec__Iterator0_t3 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator0_t3_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m0(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean SimpleJSON.JSONNode/<>c__Iterator0::MoveNext()
extern "C" bool U3CU3Ec__Iterator0_MoveNext_m5 (U3CU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U24PC_0);
		__this->___U24PC_0 = (-1);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0017;
	}

IL_0017:
	{
		return 0;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::Dispose()
extern "C" void U3CU3Ec__Iterator0_Dispose_m6 (U3CU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t44_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator0_Reset_m7 (U3CU3Ec__Iterator0_t3 * __this, const MethodInfo* method)
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
// SimpleJSON.JSONNode/<>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode_U3CU3Ec__I_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONNode/<>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode_U3CU3Ec__I_0MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeMethodDeclarations.h"


// System.Void SimpleJSON.JSONNode/<>c__Iterator1::.ctor()
extern "C" void U3CU3Ec__Iterator1__ctor_m8 (U3CU3Ec__Iterator1_t5 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C" JSONNode_t2 * U3CU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m9 (U3CU3Ec__Iterator1_t5 * __this, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m10 (U3CU3Ec__Iterator1_t5 * __this, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CU3Ec__Iterator1_System_Collections_IEnumerable_GetEnumerator_m11 (U3CU3Ec__Iterator1_t5 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(4 /* System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern TypeInfo* U3CU3Ec__Iterator1_t5_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m12 (U3CU3Ec__Iterator1_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator1_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator1_t5 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m200(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator1_t5 * L_2 = (U3CU3Ec__Iterator1_t5 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator1_t5_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator1__ctor_m8(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator1_t5 * L_3 = V_0;
		JSONNode_t2 * L_4 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_3);
		L_3->___U3CU3Ef__this_6 = L_4;
		U3CU3Ec__Iterator1_t5 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SimpleJSON.JSONNode/<>c__Iterator1::MoveNext()
extern TypeInfo* IEnumerable_1_t38_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t4_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t37_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ec__Iterator1_MoveNext_m13 (U3CU3Ec__Iterator1_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		IEnumerator_1_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IEnumerator_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_4);
		V_0 = L_0;
		__this->___U24PC_4 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0116;
	}

IL_0023:
	{
		JSONNode_t2 * L_2 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(16 /* System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Childs() */, L_2);
		NullCheck(L_3);
		Object_t* L_4 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t38_il2cpp_TypeInfo_var, L_3);
		__this->___U3CU24s_1U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_0077;
			}
		}

IL_0048:
		{
			goto IL_00e1;
		}

IL_004d:
		{
			Object_t* L_6 = (__this->___U3CU24s_1U3E__0_0);
			NullCheck(L_6);
			JSONNode_t2 * L_7 = (JSONNode_t2 *)InterfaceFuncInvoker0< JSONNode_t2 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t4_il2cpp_TypeInfo_var, L_6);
			__this->___U3CCU3E__1_1 = L_7;
			JSONNode_t2 * L_8 = (__this->___U3CCU3E__1_1);
			NullCheck(L_8);
			Object_t* L_9 = JSONNode_get_DeepChilds_m30(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			Object_t* L_10 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t38_il2cpp_TypeInfo_var, L_9);
			__this->___U3CU24s_2U3E__2_2 = L_10;
			V_0 = ((int32_t)-3);
		}

IL_0077:
		try
		{ // begin try (depth: 2)
			{
				uint32_t L_11 = V_0;
				if (((int32_t)((int32_t)L_11-(int32_t)1)) == 0)
				{
					goto IL_00b3;
				}
			}

IL_0083:
			{
				goto IL_00b3;
			}

IL_0088:
			{
				Object_t* L_12 = (__this->___U3CU24s_2U3E__2_2);
				NullCheck(L_12);
				JSONNode_t2 * L_13 = (JSONNode_t2 *)InterfaceFuncInvoker0< JSONNode_t2 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t4_il2cpp_TypeInfo_var, L_12);
				__this->___U3CDU3E__3_3 = L_13;
				JSONNode_t2 * L_14 = (__this->___U3CDU3E__3_3);
				__this->___U24current_5 = L_14;
				__this->___U24PC_4 = 1;
				V_1 = 1;
				IL2CPP_LEAVE(0x118, FINALLY_00c8);
			}

IL_00b3:
			{
				Object_t* L_15 = (__this->___U3CU24s_2U3E__2_2);
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t37_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0088;
				}
			}

IL_00c3:
			{
				IL2CPP_LEAVE(0xE1, FINALLY_00c8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t45 *)e.ex;
			goto FINALLY_00c8;
		}

FINALLY_00c8:
		{ // begin finally (depth: 2)
			{
				bool L_17 = V_1;
				if (!L_17)
				{
					goto IL_00cc;
				}
			}

IL_00cb:
			{
				IL2CPP_END_FINALLY(200)
			}

IL_00cc:
			{
				Object_t* L_18 = (__this->___U3CU24s_2U3E__2_2);
				if (L_18)
				{
					goto IL_00d5;
				}
			}

IL_00d4:
			{
				IL2CPP_END_FINALLY(200)
			}

IL_00d5:
			{
				Object_t* L_19 = (__this->___U3CU24s_2U3E__2_2);
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_19);
				IL2CPP_END_FINALLY(200)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(200)
		{
			IL2CPP_END_CLEANUP(0x118, FINALLY_00f6);
			IL2CPP_JUMP_TBL(0xE1, IL_00e1)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
		}

IL_00e1:
		{
			Object_t* L_20 = (__this->___U3CU24s_1U3E__0_0);
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t37_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_004d;
			}
		}

IL_00f1:
		{
			IL2CPP_LEAVE(0x10F, FINALLY_00f6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_00f6;
	}

FINALLY_00f6:
	{ // begin finally (depth: 1)
		{
			bool L_22 = V_1;
			if (!L_22)
			{
				goto IL_00fa;
			}
		}

IL_00f9:
		{
			IL2CPP_END_FINALLY(246)
		}

IL_00fa:
		{
			Object_t* L_23 = (__this->___U3CU24s_1U3E__0_0);
			if (L_23)
			{
				goto IL_0103;
			}
		}

IL_0102:
		{
			IL2CPP_END_FINALLY(246)
		}

IL_0103:
		{
			Object_t* L_24 = (__this->___U3CU24s_1U3E__0_0);
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(246)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(246)
	{
		IL2CPP_JUMP_TBL(0x118, IL_0118)
		IL2CPP_JUMP_TBL(0x10F, IL_010f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_010f:
	{
		__this->___U24PC_4 = (-1);
	}

IL_0116:
	{
		return 0;
	}

IL_0118:
	{
		return 1;
	}
	// Dead block : IL_011a: ldloc.2
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::Dispose()
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator1_Dispose_m14 (U3CU3Ec__Iterator1_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_4);
		V_0 = L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0055;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0055;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x3B, FINALLY_0026);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t45 *)e.ex;
			goto FINALLY_0026;
		}

FINALLY_0026:
		{ // begin finally (depth: 2)
			{
				Object_t* L_2 = (__this->___U3CU24s_2U3E__2_2);
				if (L_2)
				{
					goto IL_002f;
				}
			}

IL_002e:
			{
				IL2CPP_END_FINALLY(38)
			}

IL_002f:
			{
				Object_t* L_3 = (__this->___U3CU24s_2U3E__2_2);
				NullCheck(L_3);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_3);
				IL2CPP_END_FINALLY(38)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(38)
		{
			IL2CPP_JUMP_TBL(0x3B, IL_003b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t* L_4 = (__this->___U3CU24s_1U3E__0_0);
			if (L_4)
			{
				goto IL_0049;
			}
		}

IL_0048:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_0049:
		{
			Object_t* L_5 = (__this->___U3CU24s_1U3E__0_0);
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_5);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0055:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::Reset()
extern TypeInfo* NotSupportedException_t44_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator1_Reset_m15 (U3CU3Ec__Iterator1_t5 * __this, const MethodInfo* method)
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

// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Double
#include "mscorlib_System_Double.h"
// SimpleJSON.JSONArray
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray.h"
// SimpleJSON.JSONClass
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.IO.BinaryWriter
#include "mscorlib_System_IO_BinaryWriter.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.IO.FileInfo
#include "mscorlib_System_IO_FileInfo.h"
// System.IO.DirectoryInfo
#include "mscorlib_System_IO_DirectoryInfo.h"
// System.IO.FileSystemInfo
#include "mscorlib_System_IO_FileSystemInfo.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.Int64
#include "mscorlib_System_Int64.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReader.h"
// SimpleJSON.JSONData
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONData.h"
// SimpleJSON.JSONLazyCreator
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONLazyCreator.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// SimpleJSON.JSONClass
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClassMethodDeclarations.h"
// SimpleJSON.JSONArray
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArrayMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.IO.BinaryWriter
#include "mscorlib_System_IO_BinaryWriterMethodDeclarations.h"
// System.IO.FileInfo
#include "mscorlib_System_IO_FileInfoMethodDeclarations.h"
// System.IO.FileSystemInfo
#include "mscorlib_System_IO_FileSystemInfoMethodDeclarations.h"
// System.IO.Directory
#include "mscorlib_System_IO_DirectoryMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReaderMethodDeclarations.h"
// SimpleJSON.JSONData
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONDataMethodDeclarations.h"


// System.Void SimpleJSON.JSONNode::.ctor()
extern "C" void JSONNode__ctor_m16 (JSONNode_t2 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONNode_Add_m17 (JSONNode_t2 * __this, String_t* ___aKey, JSONNode_t2 * ___aItem, const MethodInfo* method)
{
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
extern "C" JSONNode_t2 * JSONNode_get_Item_m18 (JSONNode_t2 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	{
		return (JSONNode_t2 *)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONNode_set_Item_m19 (JSONNode_t2 * __this, int32_t ___aIndex, JSONNode_t2 * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
extern "C" JSONNode_t2 * JSONNode_get_Item_m20 (JSONNode_t2 * __this, String_t* ___aKey, const MethodInfo* method)
{
	{
		return (JSONNode_t2 *)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONNode_set_Item_m21 (JSONNode_t2 * __this, String_t* ___aKey, JSONNode_t2 * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.String SimpleJSON.JSONNode::get_Value()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONNode_get_Value_m22 (JSONNode_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
extern "C" void JSONNode_set_Value_m23 (JSONNode_t2 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_Count()
extern "C" int32_t JSONNode_get_Count_m24 (JSONNode_t2 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void JSONNode_Add_m25 (JSONNode_t2 * __this, JSONNode_t2 * ___aItem, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		JSONNode_t2 * L_1 = ___aItem;
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, __this, L_0, L_1);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
extern "C" JSONNode_t2 * JSONNode_Remove_m26 (JSONNode_t2 * __this, String_t* ___aKey, const MethodInfo* method)
{
	{
		return (JSONNode_t2 *)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
extern "C" JSONNode_t2 * JSONNode_Remove_m27 (JSONNode_t2 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	{
		return (JSONNode_t2 *)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t2 * JSONNode_Remove_m28 (JSONNode_t2 * __this, JSONNode_t2 * ___aNode, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = ___aNode;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Childs()
extern TypeInfo* U3CU3Ec__Iterator0_t3_il2cpp_TypeInfo_var;
extern "C" Object_t* JSONNode_get_Childs_m29 (JSONNode_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator0_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator0_t3 * V_0 = {0};
	{
		U3CU3Ec__Iterator0_t3 * L_0 = (U3CU3Ec__Iterator0_t3 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator0_t3_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator0_t3 * L_1 = V_0;
		U3CU3Ec__Iterator0_t3 * L_2 = L_1;
		NullCheck(L_2);
		L_2->___U24PC_0 = ((int32_t)-2);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChilds()
extern TypeInfo* U3CU3Ec__Iterator1_t5_il2cpp_TypeInfo_var;
extern "C" Object_t* JSONNode_get_DeepChilds_m30 (JSONNode_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator1_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator1_t5 * V_0 = {0};
	{
		U3CU3Ec__Iterator1_t5 * L_0 = (U3CU3Ec__Iterator1_t5 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator1_t5_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator1__ctor_m8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator1_t5 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_6 = __this;
		U3CU3Ec__Iterator1_t5 * L_2 = V_0;
		U3CU3Ec__Iterator1_t5 * L_3 = L_2;
		NullCheck(L_3);
		L_3->___U24PC_4 = ((int32_t)-2);
		return L_3;
	}
}
// System.String SimpleJSON.JSONNode::ToString()
extern "C" String_t* JSONNode_ToString_m31 (JSONNode_t2 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral3;
	}
}
// System.String SimpleJSON.JSONNode::ToString(System.String)
extern "C" String_t* JSONNode_ToString_m32 (JSONNode_t2 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral3;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
extern "C" int32_t JSONNode_get_AsInt_m33 (JSONNode_t2 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1 = Int32_TryParse_m202(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0016:
	{
		return 0;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
extern "C" void JSONNode_set_AsInt_m34 (JSONNode_t2 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = Int32_ToString_m203((&___value), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		return;
	}
}
// System.Single SimpleJSON.JSONNode::get_AsFloat()
extern "C" float JSONNode_get_AsFloat_m35 (JSONNode_t2 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1 = Single_TryParse_m204(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		float L_2 = V_0;
		return L_2;
	}

IL_001a:
	{
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
extern "C" void JSONNode_set_AsFloat_m36 (JSONNode_t2 * __this, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = Single_ToString_m205((&___value), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		return;
	}
}
// System.Double SimpleJSON.JSONNode::get_AsDouble()
extern "C" double JSONNode_get_AsDouble_m37 (JSONNode_t2 * __this, const MethodInfo* method)
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1 = Double_TryParse_m206(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		double L_2 = V_0;
		return L_2;
	}

IL_001e:
	{
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
extern "C" void JSONNode_set_AsDouble_m38 (JSONNode_t2 * __this, double ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = Double_ToString_m207((&___value), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
extern TypeInfo* Boolean_t47_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool JSONNode_get_AsBool_m39 (JSONNode_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		V_0 = 0;
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t47_il2cpp_TypeInfo_var);
		bool L_1 = Boolean_TryParse_m208(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		bool L_2 = V_0;
		return L_2;
	}

IL_0016:
	{
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m209(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
extern "C" void JSONNode_set_AsBool_m40 (JSONNode_t2 * __this, bool ___value, const MethodInfo* method)
{
	JSONNode_t2 * G_B2_0 = {0};
	JSONNode_t2 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	JSONNode_t2 * G_B3_1 = {0};
	{
		bool L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral1;
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = (String_t*) &_stringLiteral2;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, G_B3_1, G_B3_0);
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
extern TypeInfo* JSONArray_t6_il2cpp_TypeInfo_var;
extern "C" JSONArray_t6 * JSONNode_get_AsArray_m41 (JSONNode_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		return ((JSONArray_t6 *)IsInst(__this, JSONArray_t6_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject()
extern TypeInfo* JSONClass_t11_il2cpp_TypeInfo_var;
extern "C" JSONClass_t11 * JSONNode_get_AsObject_m42 (JSONNode_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONClass_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		return ((JSONClass_t11 *)IsInst(__this, JSONClass_t11_il2cpp_TypeInfo_var));
	}
}
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C" bool JSONNode_Equals_m43 (JSONNode_t2 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		bool L_1 = Object_ReferenceEquals_m210(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C" int32_t JSONNode_GetHashCode_m44 (JSONNode_t2 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetHashCode_m211(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t48_il2cpp_TypeInfo_var;
extern "C" String_t* JSONNode_Escape_m45 (Object_t * __this /* static, unused */, String_t* ___aText, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Char_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint16_t V_1 = 0x0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	uint16_t V_4 = 0x0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___aText;
		V_2 = L_1;
		V_3 = 0;
		goto IL_00df;
	}

IL_000f:
	{
		String_t* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m212(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		uint16_t L_5 = V_1;
		V_4 = L_5;
		uint16_t L_6 = V_4;
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 0)
		{
			goto IL_00a7;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 1)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 2)
		{
			goto IL_0074;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 3)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 4)
		{
			goto IL_00b8;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 5)
		{
			goto IL_0085;
		}
	}

IL_003b:
	{
		uint16_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0063;
		}
	}
	{
		uint16_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)92))))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_00c9;
	}

IL_0052:
	{
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m213(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral4, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_00db;
	}

IL_0063:
	{
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m213(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_00db;
	}

IL_0074:
	{
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m213(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral6, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_00db;
	}

IL_0085:
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m213(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral7, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_00db;
	}

IL_0096:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m213(NULL /*static, unused*/, L_17, (String_t*) &_stringLiteral8, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_00db;
	}

IL_00a7:
	{
		String_t* L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m213(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_00db;
	}

IL_00b8:
	{
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m213(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral10, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_00db;
	}

IL_00c9:
	{
		String_t* L_23 = V_0;
		uint16_t L_24 = V_1;
		uint16_t L_25 = L_24;
		Object_t * L_26 = Box(Char_t48_il2cpp_TypeInfo_var, &L_25);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m214(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_00db;
	}

IL_00db:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00df:
	{
		int32_t L_29 = V_3;
		String_t* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = String_get_Length_m215(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_32 = V_0;
		return L_32;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern TypeInfo* Stack_1_t49_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t48_il2cpp_TypeInfo_var;
extern TypeInfo* JSONClass_t11_il2cpp_TypeInfo_var;
extern TypeInfo* JSONArray_t6_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m216_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m217_MethodInfo_var;
extern const MethodInfo* Stack_1_Peek_m219_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m222_MethodInfo_var;
extern "C" JSONNode_t2 * JSONNode_Parse_m46 (Object_t * __this /* static, unused */, String_t* ___aJSON, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_1_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Char_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		JSONClass_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		JSONArray_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Stack_1__ctor_m216_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		Stack_1_Push_m217_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		Stack_1_Peek_m219_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Stack_1_Pop_m222_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t49 * V_0 = {0};
	JSONNode_t2 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	bool V_5 = false;
	uint16_t V_6 = 0x0;
	String_t* V_7 = {0};
	uint16_t V_8 = 0x0;
	uint16_t V_9 = 0x0;
	{
		Stack_1_t49 * L_0 = (Stack_1_t49 *)il2cpp_codegen_object_new (Stack_1_t49_il2cpp_TypeInfo_var);
		Stack_1__ctor_m216(L_0, /*hidden argument*/Stack_1__ctor_m216_MethodInfo_var);
		V_0 = L_0;
		V_1 = (JSONNode_t2 *)NULL;
		V_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_2;
		V_5 = 0;
		goto IL_046b;
	}

IL_001f:
	{
		String_t* L_3 = ___aJSON;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m212(L_3, L_4, /*hidden argument*/NULL);
		V_8 = L_5;
		uint16_t L_6 = V_8;
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0333;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_032e;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0046;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0046;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_032e;
		}
	}

IL_0046:
	{
		uint16_t L_7 = V_8;
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)32))) == 0)
		{
			goto IL_0333;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)32))) == 1)
		{
			goto IL_005c;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)32))) == 2)
		{
			goto IL_02a7;
		}
	}

IL_005c:
	{
		uint16_t L_8 = V_8;
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_0132;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_0352;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_01c5;
		}
	}
	{
		uint16_t L_9 = V_8;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_009f;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_01c5;
		}
	}

IL_0088:
	{
		uint16_t L_10 = V_8;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)44))))
		{
			goto IL_02b2;
		}
	}
	{
		uint16_t L_11 = V_8;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)58))))
		{
			goto IL_027a;
		}
	}
	{
		goto IL_044f;
	}

IL_009f:
	{
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_13 = V_3;
		String_t* L_14 = ___aJSON;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint16_t L_16 = String_get_Chars_m212(L_14, L_15, /*hidden argument*/NULL);
		uint16_t L_17 = L_16;
		Object_t * L_18 = Box(Char_t48_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m214(NULL /*static, unused*/, L_13, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		goto IL_0467;
	}

IL_00be:
	{
		Stack_1_t49 * L_20 = V_0;
		JSONClass_t11 * L_21 = (JSONClass_t11 *)il2cpp_codegen_object_new (JSONClass_t11_il2cpp_TypeInfo_var);
		JSONClass__ctor_m109(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Stack_1_Push_m217(L_20, L_21, /*hidden argument*/Stack_1_Push_m217_MethodInfo_var);
		JSONNode_t2 * L_22 = V_1;
		bool L_23 = JSONNode_op_Inequality_m64(NULL /*static, unused*/, L_22, NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0119;
		}
	}
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		String_t* L_25 = String_Trim_m218(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		JSONNode_t2 * L_26 = V_1;
		if (!((JSONArray_t6 *)IsInst(L_26, JSONArray_t6_il2cpp_TypeInfo_var)))
		{
			goto IL_00fa;
		}
	}
	{
		JSONNode_t2 * L_27 = V_1;
		Stack_1_t49 * L_28 = V_0;
		NullCheck(L_28);
		JSONNode_t2 * L_29 = Stack_1_Peek_m219(L_28, /*hidden argument*/Stack_1_Peek_m219_MethodInfo_var);
		NullCheck(L_27);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_27, L_29);
		goto IL_0119;
	}

IL_00fa:
	{
		String_t* L_30 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_32 = String_op_Inequality_m220(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0119;
		}
	}
	{
		JSONNode_t2 * L_33 = V_1;
		String_t* L_34 = V_4;
		Stack_1_t49 * L_35 = V_0;
		NullCheck(L_35);
		JSONNode_t2 * L_36 = Stack_1_Peek_m219(L_35, /*hidden argument*/Stack_1_Peek_m219_MethodInfo_var);
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_33, L_34, L_36);
	}

IL_0119:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_37;
		String_t* L_38 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_38;
		Stack_1_t49 * L_39 = V_0;
		NullCheck(L_39);
		JSONNode_t2 * L_40 = Stack_1_Peek_m219(L_39, /*hidden argument*/Stack_1_Peek_m219_MethodInfo_var);
		V_1 = L_40;
		goto IL_0467;
	}

IL_0132:
	{
		bool L_41 = V_5;
		if (!L_41)
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = ___aJSON;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		uint16_t L_45 = String_get_Chars_m212(L_43, L_44, /*hidden argument*/NULL);
		uint16_t L_46 = L_45;
		Object_t * L_47 = Box(Char_t48_il2cpp_TypeInfo_var, &L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m214(NULL /*static, unused*/, L_42, L_47, /*hidden argument*/NULL);
		V_3 = L_48;
		goto IL_0467;
	}

IL_0151:
	{
		Stack_1_t49 * L_49 = V_0;
		JSONArray_t6 * L_50 = (JSONArray_t6 *)il2cpp_codegen_object_new (JSONArray_t6_il2cpp_TypeInfo_var);
		JSONArray__ctor_m79(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Stack_1_Push_m217(L_49, L_50, /*hidden argument*/Stack_1_Push_m217_MethodInfo_var);
		JSONNode_t2 * L_51 = V_1;
		bool L_52 = JSONNode_op_Inequality_m64(NULL /*static, unused*/, L_51, NULL, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01ac;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		String_t* L_54 = String_Trim_m218(L_53, /*hidden argument*/NULL);
		V_4 = L_54;
		JSONNode_t2 * L_55 = V_1;
		if (!((JSONArray_t6 *)IsInst(L_55, JSONArray_t6_il2cpp_TypeInfo_var)))
		{
			goto IL_018d;
		}
	}
	{
		JSONNode_t2 * L_56 = V_1;
		Stack_1_t49 * L_57 = V_0;
		NullCheck(L_57);
		JSONNode_t2 * L_58 = Stack_1_Peek_m219(L_57, /*hidden argument*/Stack_1_Peek_m219_MethodInfo_var);
		NullCheck(L_56);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_56, L_58);
		goto IL_01ac;
	}

IL_018d:
	{
		String_t* L_59 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_61 = String_op_Inequality_m220(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_01ac;
		}
	}
	{
		JSONNode_t2 * L_62 = V_1;
		String_t* L_63 = V_4;
		Stack_1_t49 * L_64 = V_0;
		NullCheck(L_64);
		JSONNode_t2 * L_65 = Stack_1_Peek_m219(L_64, /*hidden argument*/Stack_1_Peek_m219_MethodInfo_var);
		NullCheck(L_62);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_62, L_63, L_65);
	}

IL_01ac:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_66 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_66;
		String_t* L_67 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_67;
		Stack_1_t49 * L_68 = V_0;
		NullCheck(L_68);
		JSONNode_t2 * L_69 = Stack_1_Peek_m219(L_68, /*hidden argument*/Stack_1_Peek_m219_MethodInfo_var);
		V_1 = L_69;
		goto IL_0467;
	}

IL_01c5:
	{
		bool L_70 = V_5;
		if (!L_70)
		{
			goto IL_01e4;
		}
	}
	{
		String_t* L_71 = V_3;
		String_t* L_72 = ___aJSON;
		int32_t L_73 = V_2;
		NullCheck(L_72);
		uint16_t L_74 = String_get_Chars_m212(L_72, L_73, /*hidden argument*/NULL);
		uint16_t L_75 = L_74;
		Object_t * L_76 = Box(Char_t48_il2cpp_TypeInfo_var, &L_75);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_77 = String_Concat_m214(NULL /*static, unused*/, L_71, L_76, /*hidden argument*/NULL);
		V_3 = L_77;
		goto IL_0467;
	}

IL_01e4:
	{
		Stack_1_t49 * L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::get_Count() */, L_78);
		if (L_79)
		{
			goto IL_01fa;
		}
	}
	{
		Exception_t45 * L_80 = (Exception_t45 *)il2cpp_codegen_object_new (Exception_t45_il2cpp_TypeInfo_var);
		Exception__ctor_m221(L_80, (String_t*) &_stringLiteral11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_80);
	}

IL_01fa:
	{
		Stack_1_t49 * L_81 = V_0;
		NullCheck(L_81);
		Stack_1_Pop_m222(L_81, /*hidden argument*/Stack_1_Pop_m222_MethodInfo_var);
		String_t* L_82 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_83 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_84 = String_op_Inequality_m220(NULL /*static, unused*/, L_82, L_83, /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_85 = V_4;
		NullCheck(L_85);
		String_t* L_86 = String_Trim_m218(L_85, /*hidden argument*/NULL);
		V_4 = L_86;
		JSONNode_t2 * L_87 = V_1;
		if (!((JSONArray_t6 *)IsInst(L_87, JSONArray_t6_il2cpp_TypeInfo_var)))
		{
			goto IL_0236;
		}
	}
	{
		JSONNode_t2 * L_88 = V_1;
		String_t* L_89 = V_3;
		JSONNode_t2 * L_90 = JSONNode_op_Implicit_m61(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		NullCheck(L_88);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_88, L_90);
		goto IL_0255;
	}

IL_0236:
	{
		String_t* L_91 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_92 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_93 = String_op_Inequality_m220(NULL /*static, unused*/, L_91, L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_0255;
		}
	}
	{
		JSONNode_t2 * L_94 = V_1;
		String_t* L_95 = V_4;
		String_t* L_96 = V_3;
		JSONNode_t2 * L_97 = JSONNode_op_Implicit_m61(NULL /*static, unused*/, L_96, /*hidden argument*/NULL);
		NullCheck(L_94);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_94, L_95, L_97);
	}

IL_0255:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_98 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_98;
		String_t* L_99 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_99;
		Stack_1_t49 * L_100 = V_0;
		NullCheck(L_100);
		int32_t L_101 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::get_Count() */, L_100);
		if ((((int32_t)L_101) <= ((int32_t)0)))
		{
			goto IL_0275;
		}
	}
	{
		Stack_1_t49 * L_102 = V_0;
		NullCheck(L_102);
		JSONNode_t2 * L_103 = Stack_1_Peek_m219(L_102, /*hidden argument*/Stack_1_Peek_m219_MethodInfo_var);
		V_1 = L_103;
	}

IL_0275:
	{
		goto IL_0467;
	}

IL_027a:
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_0299;
		}
	}
	{
		String_t* L_105 = V_3;
		String_t* L_106 = ___aJSON;
		int32_t L_107 = V_2;
		NullCheck(L_106);
		uint16_t L_108 = String_get_Chars_m212(L_106, L_107, /*hidden argument*/NULL);
		uint16_t L_109 = L_108;
		Object_t * L_110 = Box(Char_t48_il2cpp_TypeInfo_var, &L_109);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_111 = String_Concat_m214(NULL /*static, unused*/, L_105, L_110, /*hidden argument*/NULL);
		V_3 = L_111;
		goto IL_0467;
	}

IL_0299:
	{
		String_t* L_112 = V_3;
		V_4 = L_112;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_113 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_113;
		goto IL_0467;
	}

IL_02a7:
	{
		bool L_114 = V_5;
		V_5 = ((int32_t)((int32_t)L_114^(int32_t)1));
		goto IL_0467;
	}

IL_02b2:
	{
		bool L_115 = V_5;
		if (!L_115)
		{
			goto IL_02d1;
		}
	}
	{
		String_t* L_116 = V_3;
		String_t* L_117 = ___aJSON;
		int32_t L_118 = V_2;
		NullCheck(L_117);
		uint16_t L_119 = String_get_Chars_m212(L_117, L_118, /*hidden argument*/NULL);
		uint16_t L_120 = L_119;
		Object_t * L_121 = Box(Char_t48_il2cpp_TypeInfo_var, &L_120);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_122 = String_Concat_m214(NULL /*static, unused*/, L_116, L_121, /*hidden argument*/NULL);
		V_3 = L_122;
		goto IL_0467;
	}

IL_02d1:
	{
		String_t* L_123 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_124 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_125 = String_op_Inequality_m220(NULL /*static, unused*/, L_123, L_124, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_031c;
		}
	}
	{
		JSONNode_t2 * L_126 = V_1;
		if (!((JSONArray_t6 *)IsInst(L_126, JSONArray_t6_il2cpp_TypeInfo_var)))
		{
			goto IL_02fd;
		}
	}
	{
		JSONNode_t2 * L_127 = V_1;
		String_t* L_128 = V_3;
		JSONNode_t2 * L_129 = JSONNode_op_Implicit_m61(NULL /*static, unused*/, L_128, /*hidden argument*/NULL);
		NullCheck(L_127);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_127, L_129);
		goto IL_031c;
	}

IL_02fd:
	{
		String_t* L_130 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_131 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_132 = String_op_Inequality_m220(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/NULL);
		if (!L_132)
		{
			goto IL_031c;
		}
	}
	{
		JSONNode_t2 * L_133 = V_1;
		String_t* L_134 = V_4;
		String_t* L_135 = V_3;
		JSONNode_t2 * L_136 = JSONNode_op_Implicit_m61(NULL /*static, unused*/, L_135, /*hidden argument*/NULL);
		NullCheck(L_133);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_133, L_134, L_136);
	}

IL_031c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_137 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_137;
		String_t* L_138 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_138;
		goto IL_0467;
	}

IL_032e:
	{
		goto IL_0467;
	}

IL_0333:
	{
		bool L_139 = V_5;
		if (!L_139)
		{
			goto IL_034d;
		}
	}
	{
		String_t* L_140 = V_3;
		String_t* L_141 = ___aJSON;
		int32_t L_142 = V_2;
		NullCheck(L_141);
		uint16_t L_143 = String_get_Chars_m212(L_141, L_142, /*hidden argument*/NULL);
		uint16_t L_144 = L_143;
		Object_t * L_145 = Box(Char_t48_il2cpp_TypeInfo_var, &L_144);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_146 = String_Concat_m214(NULL /*static, unused*/, L_140, L_145, /*hidden argument*/NULL);
		V_3 = L_146;
	}

IL_034d:
	{
		goto IL_0467;
	}

IL_0352:
	{
		int32_t L_147 = V_2;
		V_2 = ((int32_t)((int32_t)L_147+(int32_t)1));
		bool L_148 = V_5;
		if (!L_148)
		{
			goto IL_044a;
		}
	}
	{
		String_t* L_149 = ___aJSON;
		int32_t L_150 = V_2;
		NullCheck(L_149);
		uint16_t L_151 = String_get_Chars_m212(L_149, L_150, /*hidden argument*/NULL);
		V_6 = L_151;
		uint16_t L_152 = V_6;
		V_9 = L_152;
		uint16_t L_153 = V_9;
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 0)
		{
			goto IL_03d1;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 1)
		{
			goto IL_0394;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 2)
		{
			goto IL_0394;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 3)
		{
			goto IL_0394;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 4)
		{
			goto IL_03be;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 5)
		{
			goto IL_0394;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 6)
		{
			goto IL_03ab;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 7)
		{
			goto IL_0409;
		}
	}

IL_0394:
	{
		uint16_t L_154 = V_9;
		if ((((int32_t)L_154) == ((int32_t)((int32_t)98))))
		{
			goto IL_03e4;
		}
	}
	{
		uint16_t L_155 = V_9;
		if ((((int32_t)L_155) == ((int32_t)((int32_t)102))))
		{
			goto IL_03f6;
		}
	}
	{
		goto IL_0437;
	}

IL_03ab:
	{
		String_t* L_156 = V_3;
		uint16_t L_157 = ((int32_t)9);
		Object_t * L_158 = Box(Char_t48_il2cpp_TypeInfo_var, &L_157);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_159 = String_Concat_m214(NULL /*static, unused*/, L_156, L_158, /*hidden argument*/NULL);
		V_3 = L_159;
		goto IL_044a;
	}

IL_03be:
	{
		String_t* L_160 = V_3;
		uint16_t L_161 = ((int32_t)13);
		Object_t * L_162 = Box(Char_t48_il2cpp_TypeInfo_var, &L_161);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_163 = String_Concat_m214(NULL /*static, unused*/, L_160, L_162, /*hidden argument*/NULL);
		V_3 = L_163;
		goto IL_044a;
	}

IL_03d1:
	{
		String_t* L_164 = V_3;
		uint16_t L_165 = ((int32_t)10);
		Object_t * L_166 = Box(Char_t48_il2cpp_TypeInfo_var, &L_165);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_167 = String_Concat_m214(NULL /*static, unused*/, L_164, L_166, /*hidden argument*/NULL);
		V_3 = L_167;
		goto IL_044a;
	}

IL_03e4:
	{
		String_t* L_168 = V_3;
		uint16_t L_169 = 8;
		Object_t * L_170 = Box(Char_t48_il2cpp_TypeInfo_var, &L_169);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_171 = String_Concat_m214(NULL /*static, unused*/, L_168, L_170, /*hidden argument*/NULL);
		V_3 = L_171;
		goto IL_044a;
	}

IL_03f6:
	{
		String_t* L_172 = V_3;
		uint16_t L_173 = ((int32_t)12);
		Object_t * L_174 = Box(Char_t48_il2cpp_TypeInfo_var, &L_173);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_175 = String_Concat_m214(NULL /*static, unused*/, L_172, L_174, /*hidden argument*/NULL);
		V_3 = L_175;
		goto IL_044a;
	}

IL_0409:
	{
		String_t* L_176 = ___aJSON;
		int32_t L_177 = V_2;
		NullCheck(L_176);
		String_t* L_178 = String_Substring_m223(L_176, ((int32_t)((int32_t)L_177+(int32_t)1)), 4, /*hidden argument*/NULL);
		V_7 = L_178;
		String_t* L_179 = V_3;
		String_t* L_180 = V_7;
		int32_t L_181 = Int32_Parse_m224(NULL /*static, unused*/, L_180, ((int32_t)512), /*hidden argument*/NULL);
		uint16_t L_182 = (((uint16_t)L_181));
		Object_t * L_183 = Box(Char_t48_il2cpp_TypeInfo_var, &L_182);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_184 = String_Concat_m214(NULL /*static, unused*/, L_179, L_183, /*hidden argument*/NULL);
		V_3 = L_184;
		int32_t L_185 = V_2;
		V_2 = ((int32_t)((int32_t)L_185+(int32_t)4));
		goto IL_044a;
	}

IL_0437:
	{
		String_t* L_186 = V_3;
		uint16_t L_187 = V_6;
		uint16_t L_188 = L_187;
		Object_t * L_189 = Box(Char_t48_il2cpp_TypeInfo_var, &L_188);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_190 = String_Concat_m214(NULL /*static, unused*/, L_186, L_189, /*hidden argument*/NULL);
		V_3 = L_190;
		goto IL_044a;
	}

IL_044a:
	{
		goto IL_0467;
	}

IL_044f:
	{
		String_t* L_191 = V_3;
		String_t* L_192 = ___aJSON;
		int32_t L_193 = V_2;
		NullCheck(L_192);
		uint16_t L_194 = String_get_Chars_m212(L_192, L_193, /*hidden argument*/NULL);
		uint16_t L_195 = L_194;
		Object_t * L_196 = Box(Char_t48_il2cpp_TypeInfo_var, &L_195);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_197 = String_Concat_m214(NULL /*static, unused*/, L_191, L_196, /*hidden argument*/NULL);
		V_3 = L_197;
		goto IL_0467;
	}

IL_0467:
	{
		int32_t L_198 = V_2;
		V_2 = ((int32_t)((int32_t)L_198+(int32_t)1));
	}

IL_046b:
	{
		int32_t L_199 = V_2;
		String_t* L_200 = ___aJSON;
		NullCheck(L_200);
		int32_t L_201 = String_get_Length_m215(L_200, /*hidden argument*/NULL);
		if ((((int32_t)L_199) < ((int32_t)L_201)))
		{
			goto IL_001f;
		}
	}
	{
		bool L_202 = V_5;
		if (!L_202)
		{
			goto IL_0489;
		}
	}
	{
		Exception_t45 * L_203 = (Exception_t45 *)il2cpp_codegen_object_new (Exception_t45_il2cpp_TypeInfo_var);
		Exception__ctor_m221(L_203, (String_t*) &_stringLiteral12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_203);
	}

IL_0489:
	{
		JSONNode_t2 * L_204 = V_1;
		return L_204;
	}
}
// System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C" void JSONNode_Serialize_m47 (JSONNode_t2 * __this, BinaryWriter_t39 * ___aWriter, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
extern TypeInfo* BinaryWriter_t39_il2cpp_TypeInfo_var;
extern "C" void JSONNode_SaveToStream_m48 (JSONNode_t2 * __this, Stream_t40 * ___aData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryWriter_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	BinaryWriter_t39 * V_0 = {0};
	{
		Stream_t40 * L_0 = ___aData;
		BinaryWriter_t39 * L_1 = (BinaryWriter_t39 *)il2cpp_codegen_object_new (BinaryWriter_t39_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m225(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BinaryWriter_t39 * L_2 = V_0;
		VirtActionInvoker1< BinaryWriter_t39 * >::Invoke(28 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, __this, L_2);
		return;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern "C" void JSONNode_SaveToCompressedStream_m49 (JSONNode_t2 * __this, Stream_t40 * ___aData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t45 * L_0 = (Exception_t45 *)il2cpp_codegen_object_new (Exception_t45_il2cpp_TypeInfo_var);
		Exception__ctor_m221(L_0, (String_t*) &_stringLiteral13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern "C" void JSONNode_SaveToCompressedFile_m50 (JSONNode_t2 * __this, String_t* ___aFileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t45 * L_0 = (Exception_t45 *)il2cpp_codegen_object_new (Exception_t45_il2cpp_TypeInfo_var);
		Exception__ctor_m221(L_0, (String_t*) &_stringLiteral13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern "C" String_t* JSONNode_SaveToCompressedBase64_m51 (JSONNode_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t45 * L_0 = (Exception_t45 *)il2cpp_codegen_object_new (Exception_t45_il2cpp_TypeInfo_var);
		Exception__ctor_m221(L_0, (String_t*) &_stringLiteral13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJSON.JSONNode::SaveToFile(System.String)
extern TypeInfo* FileInfo_t51_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" void JSONNode_SaveToFile_m52 (JSONNode_t2 * __this, String_t* ___aFileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FileInfo_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	FileStream_t50 * V_0 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___aFileName;
		FileInfo_t51 * L_1 = (FileInfo_t51 *)il2cpp_codegen_object_new (FileInfo_t51_il2cpp_TypeInfo_var);
		FileInfo__ctor_m226(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		DirectoryInfo_t52 * L_2 = FileInfo_get_Directory_m227(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_2);
		Directory_CreateDirectory_m228(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___aFileName;
		FileStream_t50 * L_5 = File_OpenWrite_m229(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		FileStream_t50 * L_6 = V_0;
		JSONNode_SaveToStream_m48(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x36, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			FileStream_t50 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0035;
			}
		}

IL_002f:
		{
			FileStream_t50 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_8);
		}

IL_0035:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0036:
	{
		return;
	}
}
// System.String SimpleJSON.JSONNode::SaveToBase64()
extern TypeInfo* MemoryStream_t53_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t55_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" String_t* JSONNode_SaveToBase64_m53 (JSONNode_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Convert_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	MemoryStream_t53 * V_0 = {0};
	String_t* V_1 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		MemoryStream_t53 * L_0 = (MemoryStream_t53 *)il2cpp_codegen_object_new (MemoryStream_t53_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m230(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			MemoryStream_t53 * L_1 = V_0;
			JSONNode_SaveToStream_m48(__this, L_1, /*hidden argument*/NULL);
			MemoryStream_t53 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_2, (((int64_t)0)));
			MemoryStream_t53 * L_3 = V_0;
			NullCheck(L_3);
			ByteU5BU5D_t54* L_4 = (ByteU5BU5D_t54*)VirtFuncInvoker0< ByteU5BU5D_t54* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_3);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t55_il2cpp_TypeInfo_var);
			String_t* L_5 = Convert_ToBase64String_m231(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			IL2CPP_LEAVE(0x38, FINALLY_002b);
		}

IL_0026:
		{
			; // IL_0026: leave IL_0038
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t53 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0037;
			}
		}

IL_0031:
		{
			MemoryStream_t53 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_7);
		}

IL_0037:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0038:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
extern TypeInfo* JSONArray_t6_il2cpp_TypeInfo_var;
extern TypeInfo* JSONClass_t11_il2cpp_TypeInfo_var;
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern TypeInfo* JSONBinaryTag_t1_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONNode_Deserialize_m54 (Object_t * __this /* static, unused */, BinaryReader_t41 * ___aReader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		JSONClass_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		JSONBinaryTag_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	JSONArray_t6 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	JSONClass_t11 * V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	JSONNode_t2 * V_8 = {0};
	int32_t V_9 = {0};
	{
		BinaryReader_t41 * L_0 = ___aReader;
		NullCheck(L_0);
		uint8_t L_1 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_9 = L_2;
		int32_t L_3 = V_9;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0034;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0061;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_00b1;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_00bd;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_00e1;
	}

IL_0034:
	{
		BinaryReader_t41 * L_4 = ___aReader;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		V_1 = L_5;
		JSONArray_t6 * L_6 = (JSONArray_t6 *)il2cpp_codegen_object_new (JSONArray_t6_il2cpp_TypeInfo_var);
		JSONArray__ctor_m79(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0058;
	}

IL_0048:
	{
		JSONArray_t6 * L_7 = V_2;
		BinaryReader_t41 * L_8 = ___aReader;
		JSONNode_t2 * L_9 = JSONNode_Deserialize_m54(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_7, L_9);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		JSONArray_t6 * L_13 = V_2;
		return L_13;
	}

IL_0061:
	{
		BinaryReader_t41 * L_14 = ___aReader;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_14);
		V_4 = L_15;
		JSONClass_t11 * L_16 = (JSONClass_t11 *)il2cpp_codegen_object_new (JSONClass_t11_il2cpp_TypeInfo_var);
		JSONClass__ctor_m109(L_16, /*hidden argument*/NULL);
		V_5 = L_16;
		V_6 = 0;
		goto IL_0099;
	}

IL_0078:
	{
		BinaryReader_t41 * L_17 = ___aReader;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_17);
		V_7 = L_18;
		BinaryReader_t41 * L_19 = ___aReader;
		JSONNode_t2 * L_20 = JSONNode_Deserialize_m54(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		JSONClass_t11 * L_21 = V_5;
		String_t* L_22 = V_7;
		JSONNode_t2 * L_23 = V_8;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(4 /* System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode) */, L_21, L_22, L_23);
		int32_t L_24 = V_6;
		V_6 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = V_4;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0078;
		}
	}
	{
		JSONClass_t11 * L_27 = V_5;
		return L_27;
	}

IL_00a5:
	{
		BinaryReader_t41 * L_28 = ___aReader;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_28);
		JSONData_t18 * L_30 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m124(L_30, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00b1:
	{
		BinaryReader_t41 * L_31 = ___aReader;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_31);
		JSONData_t18 * L_33 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m128(L_33, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00bd:
	{
		BinaryReader_t41 * L_34 = ___aReader;
		NullCheck(L_34);
		double L_35 = (double)VirtFuncInvoker0< double >::Invoke(14 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_34);
		JSONData_t18 * L_36 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m126(L_36, L_35, /*hidden argument*/NULL);
		return L_36;
	}

IL_00c9:
	{
		BinaryReader_t41 * L_37 = ___aReader;
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_37);
		JSONData_t18 * L_39 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m127(L_39, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_00d5:
	{
		BinaryReader_t41 * L_40 = ___aReader;
		NullCheck(L_40);
		float L_41 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_40);
		JSONData_t18 * L_42 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m125(L_42, L_41, /*hidden argument*/NULL);
		return L_42;
	}

IL_00e1:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		Object_t * L_45 = Box(JSONBinaryTag_t1_il2cpp_TypeInfo_var, &L_44);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral14, L_45, /*hidden argument*/NULL);
		Exception_t45 * L_47 = (Exception_t45 *)il2cpp_codegen_object_new (Exception_t45_il2cpp_TypeInfo_var);
		Exception__ctor_m221(L_47, L_46, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_47);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONNode_LoadFromCompressedFile_m55 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t45 * L_0 = (Exception_t45 *)il2cpp_codegen_object_new (Exception_t45_il2cpp_TypeInfo_var);
		Exception__ctor_m221(L_0, (String_t*) &_stringLiteral13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONNode_LoadFromCompressedStream_m56 (Object_t * __this /* static, unused */, Stream_t40 * ___aData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t45 * L_0 = (Exception_t45 *)il2cpp_codegen_object_new (Exception_t45_il2cpp_TypeInfo_var);
		Exception__ctor_m221(L_0, (String_t*) &_stringLiteral13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONNode_LoadFromCompressedBase64_m57 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t45 * L_0 = (Exception_t45 *)il2cpp_codegen_object_new (Exception_t45_il2cpp_TypeInfo_var);
		Exception__ctor_m221(L_0, (String_t*) &_stringLiteral13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
extern TypeInfo* BinaryReader_t41_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONNode_LoadFromStream_m58 (Object_t * __this /* static, unused */, Stream_t40 * ___aData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryReader_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	BinaryReader_t41 * V_0 = {0};
	JSONNode_t2 * V_1 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t40 * L_0 = ___aData;
		BinaryReader_t41 * L_1 = (BinaryReader_t41 *)il2cpp_codegen_object_new (BinaryReader_t41_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m232(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			BinaryReader_t41 * L_2 = V_0;
			JSONNode_t2 * L_3 = JSONNode_Deserialize_m54(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			IL2CPP_LEAVE(0x25, FINALLY_0018);
		}

IL_0013:
		{
			; // IL_0013: leave IL_0025
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		{
			BinaryReader_t41 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			BinaryReader_t41 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_5);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(24)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0025:
	{
		JSONNode_t2 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromFile(System.String)
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONNode_LoadFromFile_m59 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	FileStream_t50 * V_0 = {0};
	JSONNode_t2 * V_1 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___aFileName;
		FileStream_t50 * L_1 = File_OpenRead_m233(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			FileStream_t50 * L_2 = V_0;
			JSONNode_t2 * L_3 = JSONNode_LoadFromStream_m58(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			IL2CPP_LEAVE(0x25, FINALLY_0018);
		}

IL_0013:
		{
			; // IL_0013: leave IL_0025
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		{
			FileStream_t50 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			FileStream_t50 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_5);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(24)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0025:
	{
		JSONNode_t2 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBase64(System.String)
extern TypeInfo* Convert_t55_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t53_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONNode_LoadFromBase64_m60 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		MemoryStream_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t54* V_0 = {0};
	MemoryStream_t53 * V_1 = {0};
	{
		String_t* L_0 = ___aBase64;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t55_il2cpp_TypeInfo_var);
		ByteU5BU5D_t54* L_1 = Convert_FromBase64String_m234(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t54* L_2 = V_0;
		MemoryStream_t53 * L_3 = (MemoryStream_t53 *)il2cpp_codegen_object_new (MemoryStream_t53_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m235(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		MemoryStream_t53 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_4, (((int64_t)0)));
		MemoryStream_t53 * L_5 = V_1;
		JSONNode_t2 * L_6 = JSONNode_LoadFromStream_m58(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONNode_op_Implicit_m61 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___s;
		JSONData_t18 * L_1 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m124(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C" String_t* JSONNode_op_Implicit_m62 (Object_t * __this /* static, unused */, JSONNode_t2 * ___d, const MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		JSONNode_t2 * L_0 = ___d;
		bool L_1 = JSONNode_op_Equality_m63(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0018;
	}

IL_0012:
	{
		JSONNode_t2 * L_2 = ___d;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, L_2);
		G_B3_0 = L_3;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern TypeInfo* JSONLazyCreator_t19_il2cpp_TypeInfo_var;
extern "C" bool JSONNode_op_Equality_m63 (Object_t * __this /* static, unused */, JSONNode_t2 * ___a, Object_t * ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___b;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		JSONNode_t2 * L_1 = ___a;
		if (!((JSONLazyCreator_t19 *)IsInst(L_1, JSONLazyCreator_t19_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		return 1;
	}

IL_0013:
	{
		JSONNode_t2 * L_2 = ___a;
		Object_t * L_3 = ___b;
		bool L_4 = Object_ReferenceEquals_m210(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C" bool JSONNode_op_Inequality_m64 (Object_t * __this /* static, unused */, JSONNode_t2 * ___a, Object_t * ___b, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = ___a;
		Object_t * L_1 = ___b;
		bool L_2 = JSONNode_op_Equality_m63(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// SimpleJSON.JSONArray/<>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray_U3CU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONArray/<>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray_U3CU3Ec__MethodDeclarations.h"

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"


// System.Void SimpleJSON.JSONArray/<>c__Iterator2::.ctor()
extern "C" void U3CU3Ec__Iterator2__ctor_m65 (U3CU3Ec__Iterator2_t7 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C" JSONNode_t2 * U3CU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m66 (U3CU3Ec__Iterator2_t7 * __this, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m67 (U3CU3Ec__Iterator2_t7 * __this, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CU3Ec__Iterator2_System_Collections_IEnumerable_GetEnumerator_m68 (U3CU3Ec__Iterator2_t7 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(4 /* System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern TypeInfo* U3CU3Ec__Iterator2_t7_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CU3Ec__Iterator2_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m69 (U3CU3Ec__Iterator2_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator2_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator2_t7 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___U24PC_2);
		int32_t L_1 = Interlocked_CompareExchange_m200(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator2_t7 * L_2 = (U3CU3Ec__Iterator2_t7 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator2_t7_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator2__ctor_m65(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator2_t7 * L_3 = V_0;
		JSONArray_t6 * L_4 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		L_3->___U3CU3Ef__this_4 = L_4;
		U3CU3Ec__Iterator2_t7 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SimpleJSON.JSONArray/<>c__Iterator2::MoveNext()
extern TypeInfo* Enumerator_t8_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m236_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m237_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m238_MethodInfo_var;
extern "C" bool U3CU3Ec__Iterator2_MoveNext_m70 (U3CU3Ec__Iterator2_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m236_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		Enumerator_get_Current_m237_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		Enumerator_MoveNext_m238_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a9;
	}

IL_0023:
	{
		JSONArray_t6 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		List_1_t10 * L_3 = (L_2->___m_List_0);
		NullCheck(L_3);
		Enumerator_t8  L_4 = List_1_GetEnumerator_m236(L_3, /*hidden argument*/List_1_GetEnumerator_m236_MethodInfo_var);
		__this->___U3CU24s_5U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_0078;
			}
		}

IL_0048:
		{
			goto IL_0078;
		}

IL_004d:
		{
			Enumerator_t8 * L_6 = &(__this->___U3CU24s_5U3E__0_0);
			JSONNode_t2 * L_7 = Enumerator_get_Current_m237(L_6, /*hidden argument*/Enumerator_get_Current_m237_MethodInfo_var);
			__this->___U3CNU3E__1_1 = L_7;
			JSONNode_t2 * L_8 = (__this->___U3CNU3E__1_1);
			__this->___U24current_3 = L_8;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xAB, FINALLY_008d);
		}

IL_0078:
		{
			Enumerator_t8 * L_9 = &(__this->___U3CU24s_5U3E__0_0);
			bool L_10 = Enumerator_MoveNext_m238(L_9, /*hidden argument*/Enumerator_MoveNext_m238_MethodInfo_var);
			if (L_10)
			{
				goto IL_004d;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0xA2, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_0091;
			}
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0091:
		{
			Enumerator_t8  L_12 = (__this->___U3CU24s_5U3E__0_0);
			Enumerator_t8  L_13 = L_12;
			Object_t * L_14 = Box(Enumerator_t8_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_JUMP_TBL(0xA2, IL_00a2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00a2:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00a9:
	{
		return 0;
	}

IL_00ab:
	{
		return 1;
	}
	// Dead block : IL_00ad: ldloc.2
}
// System.Void SimpleJSON.JSONArray/<>c__Iterator2::Dispose()
extern TypeInfo* Enumerator_t8_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator2_Dispose_m71 (U3CU3Ec__Iterator2_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0037;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x37, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_t8  L_2 = (__this->___U3CU24s_5U3E__0_0);
		Enumerator_t8  L_3 = L_2;
		Object_t * L_4 = Box(Enumerator_t8_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_4);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<>c__Iterator2::Reset()
extern TypeInfo* NotSupportedException_t44_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator2_Reset_m72 (U3CU3Ec__Iterator2_t7 * __this, const MethodInfo* method)
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
// SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray_U3CGetEnu.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray_U3CGetEnuMethodDeclarations.h"



// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator3__ctor_m73 (U3CGetEnumeratorU3Ec__Iterator3_t9 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m74 (U3CGetEnumeratorU3Ec__Iterator3_t9 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m75 (U3CGetEnumeratorU3Ec__Iterator3_t9 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::MoveNext()
extern TypeInfo* Enumerator_t8_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m236_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m237_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m238_MethodInfo_var;
extern "C" bool U3CGetEnumeratorU3Ec__Iterator3_MoveNext_m76 (U3CGetEnumeratorU3Ec__Iterator3_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m236_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		Enumerator_get_Current_m237_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		Enumerator_MoveNext_m238_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a9;
	}

IL_0023:
	{
		JSONArray_t6 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		List_1_t10 * L_3 = (L_2->___m_List_0);
		NullCheck(L_3);
		Enumerator_t8  L_4 = List_1_GetEnumerator_m236(L_3, /*hidden argument*/List_1_GetEnumerator_m236_MethodInfo_var);
		__this->___U3CU24s_6U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_0078;
			}
		}

IL_0048:
		{
			goto IL_0078;
		}

IL_004d:
		{
			Enumerator_t8 * L_6 = &(__this->___U3CU24s_6U3E__0_0);
			JSONNode_t2 * L_7 = Enumerator_get_Current_m237(L_6, /*hidden argument*/Enumerator_get_Current_m237_MethodInfo_var);
			__this->___U3CNU3E__1_1 = L_7;
			JSONNode_t2 * L_8 = (__this->___U3CNU3E__1_1);
			__this->___U24current_3 = L_8;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xAB, FINALLY_008d);
		}

IL_0078:
		{
			Enumerator_t8 * L_9 = &(__this->___U3CU24s_6U3E__0_0);
			bool L_10 = Enumerator_MoveNext_m238(L_9, /*hidden argument*/Enumerator_MoveNext_m238_MethodInfo_var);
			if (L_10)
			{
				goto IL_004d;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0xA2, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_0091;
			}
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0091:
		{
			Enumerator_t8  L_12 = (__this->___U3CU24s_6U3E__0_0);
			Enumerator_t8  L_13 = L_12;
			Object_t * L_14 = Box(Enumerator_t8_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_JUMP_TBL(0xA2, IL_00a2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00a2:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00a9:
	{
		return 0;
	}

IL_00ab:
	{
		return 1;
	}
	// Dead block : IL_00ad: ldloc.2
}
// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::Dispose()
extern TypeInfo* Enumerator_t8_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator3_Dispose_m77 (U3CGetEnumeratorU3Ec__Iterator3_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0037;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x37, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_t8  L_2 = (__this->___U3CU24s_6U3E__0_0);
		Enumerator_t8  L_3 = L_2;
		Object_t * L_4 = Box(Enumerator_t8_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_4);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::Reset()
extern TypeInfo* NotSupportedException_t44_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator3_Reset_m78 (U3CGetEnumeratorU3Ec__Iterator3_t9 * __this, const MethodInfo* method)
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

// SimpleJSON.JSONLazyCreator
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONLazyCreatorMethodDeclarations.h"


// System.Void SimpleJSON.JSONArray::.ctor()
extern TypeInfo* List_1_t10_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m239_MethodInfo_var;
extern "C" void JSONArray__ctor_m79 (JSONArray_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		List_1__ctor_m239_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t10 * L_0 = (List_1_t10 *)il2cpp_codegen_object_new (List_1_t10_il2cpp_TypeInfo_var);
		List_1__ctor_m239(L_0, /*hidden argument*/List_1__ctor_m239_MethodInfo_var);
		__this->___m_List_0 = L_0;
		JSONNode__ctor_m16(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
extern TypeInfo* JSONLazyCreator_t19_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONArray_get_Item_m80 (JSONArray_t6 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		List_1_t10 * L_2 = (__this->___m_List_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}

IL_0018:
	{
		JSONLazyCreator_t19 * L_4 = (JSONLazyCreator_t19 *)il2cpp_codegen_object_new (JSONLazyCreator_t19_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m134(L_4, __this, /*hidden argument*/NULL);
		return L_4;
	}

IL_001f:
	{
		List_1_t10 * L_5 = (__this->___m_List_0);
		int32_t L_6 = ___aIndex;
		NullCheck(L_5);
		JSONNode_t2 * L_7 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32) */, L_5, L_6);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONArray_set_Item_m81 (JSONArray_t6 * __this, int32_t ___aIndex, JSONNode_t2 * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		List_1_t10 * L_2 = (__this->___m_List_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}

IL_0018:
	{
		List_1_t10 * L_4 = (__this->___m_List_0);
		JSONNode_t2 * L_5 = ___value;
		NullCheck(L_4);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(!0) */, L_4, L_5);
		goto IL_0036;
	}

IL_0029:
	{
		List_1_t10 * L_6 = (__this->___m_List_0);
		int32_t L_7 = ___aIndex;
		JSONNode_t2 * L_8 = ___value;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, JSONNode_t2 * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,!0) */, L_6, L_7, L_8);
	}

IL_0036:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
extern TypeInfo* JSONLazyCreator_t19_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONArray_get_Item_m82 (JSONArray_t6 * __this, String_t* ___aKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONLazyCreator_t19 * L_0 = (JSONLazyCreator_t19 *)il2cpp_codegen_object_new (JSONLazyCreator_t19_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m134(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONArray_set_Item_m83 (JSONArray_t6 * __this, String_t* ___aKey, JSONNode_t2 * ___value, const MethodInfo* method)
{
	{
		List_1_t10 * L_0 = (__this->___m_List_0);
		JSONNode_t2 * L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Int32 SimpleJSON.JSONArray::get_Count()
extern "C" int32_t JSONArray_get_Count_m84 (JSONArray_t6 * __this, const MethodInfo* method)
{
	{
		List_1_t10 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONArray_Add_m85 (JSONArray_t6 * __this, String_t* ___aKey, JSONNode_t2 * ___aItem, const MethodInfo* method)
{
	{
		List_1_t10 * L_0 = (__this->___m_List_0);
		JSONNode_t2 * L_1 = ___aItem;
		NullCheck(L_0);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(!0) */, L_0, L_1);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
extern "C" JSONNode_t2 * JSONArray_Remove_m86 (JSONArray_t6 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	JSONNode_t2 * V_0 = {0};
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		List_1_t10 * L_2 = (__this->___m_List_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (JSONNode_t2 *)NULL;
	}

IL_001a:
	{
		List_1_t10 * L_4 = (__this->___m_List_0);
		int32_t L_5 = ___aIndex;
		NullCheck(L_4);
		JSONNode_t2 * L_6 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32) */, L_4, L_5);
		V_0 = L_6;
		List_1_t10 * L_7 = (__this->___m_List_0);
		int32_t L_8 = ___aIndex;
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32) */, L_7, L_8);
		JSONNode_t2 * L_9 = V_0;
		return L_9;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t2 * JSONArray_Remove_m87 (JSONArray_t6 * __this, JSONNode_t2 * ___aNode, const MethodInfo* method)
{
	{
		List_1_t10 * L_0 = (__this->___m_List_0);
		JSONNode_t2 * L_1 = ___aNode;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, JSONNode_t2 * >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(!0) */, L_0, L_1);
		JSONNode_t2 * L_2 = ___aNode;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Childs()
extern TypeInfo* U3CU3Ec__Iterator2_t7_il2cpp_TypeInfo_var;
extern "C" Object_t* JSONArray_get_Childs_m88 (JSONArray_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator2_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator2_t7 * V_0 = {0};
	{
		U3CU3Ec__Iterator2_t7 * L_0 = (U3CU3Ec__Iterator2_t7 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator2_t7_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator2__ctor_m65(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator2_t7 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CU3Ec__Iterator2_t7 * L_2 = V_0;
		U3CU3Ec__Iterator2_t7 * L_3 = L_2;
		NullCheck(L_3);
		L_3->___U24PC_2 = ((int32_t)-2);
		return L_3;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator()
extern TypeInfo* U3CGetEnumeratorU3Ec__Iterator3_t9_il2cpp_TypeInfo_var;
extern "C" Object_t * JSONArray_GetEnumerator_m89 (JSONArray_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetEnumeratorU3Ec__Iterator3_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator3_t9 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator3_t9 * L_0 = (U3CGetEnumeratorU3Ec__Iterator3_t9 *)il2cpp_codegen_object_new (U3CGetEnumeratorU3Ec__Iterator3_t9_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator3__ctor_m73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator3_t9 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CGetEnumeratorU3Ec__Iterator3_t9 * L_2 = V_0;
		return L_2;
	}
}
// System.String SimpleJSON.JSONArray::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t8_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m236_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m237_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m238_MethodInfo_var;
extern "C" String_t* JSONArray_ToString_m90 (JSONArray_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m236_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		Enumerator_get_Current_m237_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		Enumerator_MoveNext_m238_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	JSONNode_t2 * V_1 = {0};
	Enumerator_t8  V_2 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral15;
		List_1_t10 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		Enumerator_t8  L_1 = List_1_GetEnumerator_m236(L_0, /*hidden argument*/List_1_GetEnumerator_m236_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0017:
		{
			JSONNode_t2 * L_2 = Enumerator_get_Current_m237((&V_2), /*hidden argument*/Enumerator_get_Current_m237_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = String_get_Length_m215(L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) <= ((int32_t)2)))
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m213(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral16, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0037:
		{
			String_t* L_7 = V_0;
			JSONNode_t2 * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_8);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_10 = String_Concat_m213(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_0044:
		{
			bool L_11 = Enumerator_MoveNext_m238((&V_2), /*hidden argument*/Enumerator_MoveNext_m238_MethodInfo_var);
			if (L_11)
			{
				goto IL_0017;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_t8  L_12 = V_2;
		Enumerator_t8  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t8_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0061:
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m213(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral17, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = V_0;
		return L_17;
	}
}
// System.String SimpleJSON.JSONArray::ToString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t8_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m236_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m237_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m238_MethodInfo_var;
extern "C" String_t* JSONArray_ToString_m91 (JSONArray_t6 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m236_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		Enumerator_get_Current_m237_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		Enumerator_MoveNext_m238_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	JSONNode_t2 * V_1 = {0};
	Enumerator_t8  V_2 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral15;
		List_1_t10 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		Enumerator_t8  L_1 = List_1_GetEnumerator_m236(L_0, /*hidden argument*/List_1_GetEnumerator_m236_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0061;
		}

IL_0017:
		{
			JSONNode_t2 * L_2 = Enumerator_get_Current_m237((&V_2), /*hidden argument*/Enumerator_get_Current_m237_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = String_get_Length_m215(L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) <= ((int32_t)3)))
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m213(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral16, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0037:
		{
			String_t* L_7 = V_0;
			String_t* L_8 = ___aPrefix;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Concat_m240(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral18, L_8, (String_t*) &_stringLiteral19, /*hidden argument*/NULL);
			V_0 = L_9;
			String_t* L_10 = V_0;
			JSONNode_t2 * L_11 = V_1;
			String_t* L_12 = ___aPrefix;
			String_t* L_13 = String_Concat_m213(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral19, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_14 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_11, L_13);
			String_t* L_15 = String_Concat_m213(NULL /*static, unused*/, L_10, L_14, /*hidden argument*/NULL);
			V_0 = L_15;
		}

IL_0061:
		{
			bool L_16 = Enumerator_MoveNext_m238((&V_2), /*hidden argument*/Enumerator_MoveNext_m238_MethodInfo_var);
			if (L_16)
			{
				goto IL_0017;
			}
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		Enumerator_t8  L_17 = V_2;
		Enumerator_t8  L_18 = L_17;
		Object_t * L_19 = Box(Enumerator_t8_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_19);
		IL2CPP_END_FINALLY(114)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_007e:
	{
		String_t* L_20 = V_0;
		String_t* L_21 = ___aPrefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m240(NULL /*static, unused*/, L_20, (String_t*) &_stringLiteral18, L_21, (String_t*) &_stringLiteral20, /*hidden argument*/NULL);
		V_0 = L_22;
		String_t* L_23 = V_0;
		return L_23;
	}
}
// System.Void SimpleJSON.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C" void JSONArray_Serialize_m92 (JSONArray_t6 * __this, BinaryWriter_t39 * ___aWriter, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		BinaryWriter_t39 * L_0 = ___aWriter;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, 1);
		BinaryWriter_t39 * L_1 = ___aWriter;
		List_1_t10 * L_2 = (__this->___m_List_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_2);
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		V_0 = 0;
		goto IL_0035;
	}

IL_001f:
	{
		List_1_t10 * L_4 = (__this->___m_List_0);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JSONNode_t2 * L_6 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32) */, L_4, L_5);
		BinaryWriter_t39 * L_7 = ___aWriter;
		NullCheck(L_6);
		VirtActionInvoker1< BinaryWriter_t39 * >::Invoke(28 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		List_1_t10 * L_10 = (__this->___m_List_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
// SimpleJSON.JSONClass/<>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONClass/<>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CU3Ec__MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"


// System.Void SimpleJSON.JSONClass/<>c__Iterator4::.ctor()
extern "C" void U3CU3Ec__Iterator4__ctor_m93 (U3CU3Ec__Iterator4_t12 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C" JSONNode_t2 * U3CU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m94 (U3CU3Ec__Iterator4_t12 * __this, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m95 (U3CU3Ec__Iterator4_t12 * __this, const MethodInfo* method)
{
	{
		JSONNode_t2 * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CU3Ec__Iterator4_System_Collections_IEnumerable_GetEnumerator_m96 (U3CU3Ec__Iterator4_t12 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(4 /* System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern TypeInfo* U3CU3Ec__Iterator4_t12_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CU3Ec__Iterator4_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m97 (U3CU3Ec__Iterator4_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator4_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator4_t12 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___U24PC_2);
		int32_t L_1 = Interlocked_CompareExchange_m200(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator4_t12 * L_2 = (U3CU3Ec__Iterator4_t12 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator4_t12_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator4__ctor_m93(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator4_t12 * L_3 = V_0;
		JSONClass_t11 * L_4 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		L_3->___U3CU3Ef__this_4 = L_4;
		U3CU3Ec__Iterator4_t12 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SimpleJSON.JSONClass/<>c__Iterator4::MoveNext()
extern TypeInfo* Enumerator_t13_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m241_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m242_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m243_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m244_MethodInfo_var;
extern "C" bool U3CU3Ec__Iterator4_MoveNext_m98 (U3CU3Ec__Iterator4_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m241_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		Enumerator_get_Current_m242_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		KeyValuePair_2_get_Value_m243_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		Enumerator_MoveNext_m244_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00ae;
	}

IL_0023:
	{
		JSONClass_t11 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		Dictionary_2_t17 * L_3 = (L_2->___m_Dict_0);
		NullCheck(L_3);
		Enumerator_t13  L_4 = Dictionary_2_GetEnumerator_m241(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m241_MethodInfo_var);
		__this->___U3CU24s_9U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_007d;
			}
		}

IL_0048:
		{
			goto IL_007d;
		}

IL_004d:
		{
			Enumerator_t13 * L_6 = &(__this->___U3CU24s_9U3E__0_0);
			KeyValuePair_2_t14  L_7 = Enumerator_get_Current_m242(L_6, /*hidden argument*/Enumerator_get_Current_m242_MethodInfo_var);
			__this->___U3CNU3E__1_1 = L_7;
			KeyValuePair_2_t14 * L_8 = &(__this->___U3CNU3E__1_1);
			JSONNode_t2 * L_9 = KeyValuePair_2_get_Value_m243(L_8, /*hidden argument*/KeyValuePair_2_get_Value_m243_MethodInfo_var);
			__this->___U24current_3 = L_9;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xB0, FINALLY_0092);
		}

IL_007d:
		{
			Enumerator_t13 * L_10 = &(__this->___U3CU24s_9U3E__0_0);
			bool L_11 = Enumerator_MoveNext_m244(L_10, /*hidden argument*/Enumerator_MoveNext_m244_MethodInfo_var);
			if (L_11)
			{
				goto IL_004d;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA7, FINALLY_0092);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0096;
			}
		}

IL_0095:
		{
			IL2CPP_END_FINALLY(146)
		}

IL_0096:
		{
			Enumerator_t13  L_13 = (__this->___U3CU24s_9U3E__0_0);
			Enumerator_t13  L_14 = L_13;
			Object_t * L_15 = Box(Enumerator_t13_il2cpp_TypeInfo_var, &L_14);
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(146)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_JUMP_TBL(0xA7, IL_00a7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00a7:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00ae:
	{
		return 0;
	}

IL_00b0:
	{
		return 1;
	}
	// Dead block : IL_00b2: ldloc.2
}
// System.Void SimpleJSON.JSONClass/<>c__Iterator4::Dispose()
extern TypeInfo* Enumerator_t13_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator4_Dispose_m99 (U3CU3Ec__Iterator4_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0037;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x37, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_t13  L_2 = (__this->___U3CU24s_9U3E__0_0);
		Enumerator_t13  L_3 = L_2;
		Object_t * L_4 = Box(Enumerator_t13_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_4);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONClass/<>c__Iterator4::Reset()
extern TypeInfo* NotSupportedException_t44_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator4_Reset_m100 (U3CU3Ec__Iterator4_t12 * __this, const MethodInfo* method)
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
// SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CGetEnu.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CGetEnuMethodDeclarations.h"



// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator5__ctor_m101 (U3CGetEnumeratorU3Ec__Iterator5_t15 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m102 (U3CGetEnumeratorU3Ec__Iterator5_t15 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m103 (U3CGetEnumeratorU3Ec__Iterator5_t15 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::MoveNext()
extern TypeInfo* KeyValuePair_2_t14_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t13_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m241_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m242_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m244_MethodInfo_var;
extern "C" bool U3CGetEnumeratorU3Ec__Iterator5_MoveNext_m104 (U3CGetEnumeratorU3Ec__Iterator5_t15 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Enumerator_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m241_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		Enumerator_get_Current_m242_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		Enumerator_MoveNext_m244_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00ae;
	}

IL_0023:
	{
		JSONClass_t11 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		Dictionary_2_t17 * L_3 = (L_2->___m_Dict_0);
		NullCheck(L_3);
		Enumerator_t13  L_4 = Dictionary_2_GetEnumerator_m241(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m241_MethodInfo_var);
		__this->___U3CU24s_10U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_007d;
			}
		}

IL_0048:
		{
			goto IL_007d;
		}

IL_004d:
		{
			Enumerator_t13 * L_6 = &(__this->___U3CU24s_10U3E__0_0);
			KeyValuePair_2_t14  L_7 = Enumerator_get_Current_m242(L_6, /*hidden argument*/Enumerator_get_Current_m242_MethodInfo_var);
			__this->___U3CNU3E__1_1 = L_7;
			KeyValuePair_2_t14  L_8 = (__this->___U3CNU3E__1_1);
			KeyValuePair_2_t14  L_9 = L_8;
			Object_t * L_10 = Box(KeyValuePair_2_t14_il2cpp_TypeInfo_var, &L_9);
			__this->___U24current_3 = L_10;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xB0, FINALLY_0092);
		}

IL_007d:
		{
			Enumerator_t13 * L_11 = &(__this->___U3CU24s_10U3E__0_0);
			bool L_12 = Enumerator_MoveNext_m244(L_11, /*hidden argument*/Enumerator_MoveNext_m244_MethodInfo_var);
			if (L_12)
			{
				goto IL_004d;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA7, FINALLY_0092);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_0096;
			}
		}

IL_0095:
		{
			IL2CPP_END_FINALLY(146)
		}

IL_0096:
		{
			Enumerator_t13  L_14 = (__this->___U3CU24s_10U3E__0_0);
			Enumerator_t13  L_15 = L_14;
			Object_t * L_16 = Box(Enumerator_t13_il2cpp_TypeInfo_var, &L_15);
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(146)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_JUMP_TBL(0xA7, IL_00a7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00a7:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00ae:
	{
		return 0;
	}

IL_00b0:
	{
		return 1;
	}
	// Dead block : IL_00b2: ldloc.2
}
// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::Dispose()
extern TypeInfo* Enumerator_t13_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator5_Dispose_m105 (U3CGetEnumeratorU3Ec__Iterator5_t15 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0037;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x37, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_t13  L_2 = (__this->___U3CU24s_10U3E__0_0);
		Enumerator_t13  L_3 = L_2;
		Object_t * L_4 = Box(Enumerator_t13_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_4);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::Reset()
extern TypeInfo* NotSupportedException_t44_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator5_Reset_m106 (U3CGetEnumeratorU3Ec__Iterator5_t15 * __this, const MethodInfo* method)
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
// SimpleJSON.JSONClass/<Remove>c__AnonStorey6
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CRemove.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONClass/<Remove>c__AnonStorey6
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CRemoveMethodDeclarations.h"



// System.Void SimpleJSON.JSONClass/<Remove>c__AnonStorey6::.ctor()
extern "C" void U3CRemoveU3Ec__AnonStorey6__ctor_m107 (U3CRemoveU3Ec__AnonStorey6_t16 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONClass/<Remove>c__AnonStorey6::<>m__0(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
extern const MethodInfo* KeyValuePair_2_get_Value_m243_MethodInfo_var;
extern "C" bool U3CRemoveU3Ec__AnonStorey6_U3CU3Em__0_m108 (U3CRemoveU3Ec__AnonStorey6_t16 * __this, KeyValuePair_2_t14  ___k, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Value_m243_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONNode_t2 * L_0 = KeyValuePair_2_get_Value_m243((&___k), /*hidden argument*/KeyValuePair_2_get_Value_m243_MethodInfo_var);
		JSONNode_t2 * L_1 = (__this->___aNode_0);
		bool L_2 = JSONNode_op_Equality_m63(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Guid
#include "mscorlib_System_Guid.h"
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
#include "System_Core_System_Func_2_gen.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
#include "System_Core_System_Func_2_genMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollectiMethodDeclarations.h"
struct Enumerable_t56;
struct IEnumerable_1_t57;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t56;
struct IEnumerable_1_t59;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// Declaration !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" KeyValuePair_2_t58  Enumerable_ElementAt_TisKeyValuePair_2_t58_m246_gshared (Object_t * __this /* static, unused */, Object_t* p0, int32_t p1, const MethodInfo* method);
#define Enumerable_ElementAt_TisKeyValuePair_2_t58_m246(__this /* static, unused */, p0, p1, method) (( KeyValuePair_2_t58  (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))Enumerable_ElementAt_TisKeyValuePair_2_t58_m246_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
#define Enumerable_ElementAt_TisKeyValuePair_2_t14_m245(__this /* static, unused */, p0, p1, method) (( KeyValuePair_2_t14  (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))Enumerable_ElementAt_TisKeyValuePair_2_t58_m246_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t56;
struct IEnumerable_1_t57;
struct Func_2_t60;
struct Enumerable_t56;
struct IEnumerable_1_t59;
struct Func_2_t61;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" Object_t* Enumerable_Where_TisKeyValuePair_2_t58_m248_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t61 * p1, const MethodInfo* method);
#define Enumerable_Where_TisKeyValuePair_2_t58_m248(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t61 *, const MethodInfo*))Enumerable_Where_TisKeyValuePair_2_t58_m248_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisKeyValuePair_2_t14_m247(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t60 *, const MethodInfo*))Enumerable_Where_TisKeyValuePair_2_t58_m248_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t56;
struct IEnumerable_1_t57;
struct Enumerable_t56;
struct IEnumerable_1_t59;
// Declaration !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" KeyValuePair_2_t58  Enumerable_First_TisKeyValuePair_2_t58_m250_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_First_TisKeyValuePair_2_t58_m250(__this /* static, unused */, p0, method) (( KeyValuePair_2_t58  (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_First_TisKeyValuePair_2_t58_m250_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_First_TisKeyValuePair_2_t14_m249(__this /* static, unused */, p0, method) (( KeyValuePair_2_t14  (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_First_TisKeyValuePair_2_t58_m250_gshared)(__this /* static, unused */, p0, method)


// System.Void SimpleJSON.JSONClass::.ctor()
extern TypeInfo* Dictionary_2_t17_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m251_MethodInfo_var;
extern "C" void JSONClass__ctor_m109 (JSONClass_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		Dictionary_2__ctor_m251_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483661);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t17 * L_0 = (Dictionary_2_t17 *)il2cpp_codegen_object_new (Dictionary_2_t17_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m251(L_0, /*hidden argument*/Dictionary_2__ctor_m251_MethodInfo_var);
		__this->___m_Dict_0 = L_0;
		JSONNode__ctor_m16(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String)
extern TypeInfo* JSONLazyCreator_t19_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONClass_get_Item_m110 (JSONClass_t11 * __this, String_t* ___aKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t17 * L_0 = (__this->___m_Dict_0);
		String_t* L_1 = ___aKey;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t17 * L_3 = (__this->___m_Dict_0);
		String_t* L_4 = ___aKey;
		NullCheck(L_3);
		JSONNode_t2 * L_5 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		String_t* L_6 = ___aKey;
		JSONLazyCreator_t19 * L_7 = (JSONLazyCreator_t19 *)il2cpp_codegen_object_new (JSONLazyCreator_t19_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m135(L_7, __this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONClass::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONClass_set_Item_m111 (JSONClass_t11 * __this, String_t* ___aKey, JSONNode_t2 * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t17 * L_0 = (__this->___m_Dict_0);
		String_t* L_1 = ___aKey;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t17 * L_3 = (__this->___m_Dict_0);
		String_t* L_4 = ___aKey;
		JSONNode_t2 * L_5 = ___value;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(!0,!1) */, L_3, L_4, L_5);
		goto IL_0030;
	}

IL_0023:
	{
		Dictionary_2_t17 * L_6 = (__this->___m_Dict_0);
		String_t* L_7 = ___aKey;
		JSONNode_t2 * L_8 = ___value;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(!0,!1) */, L_6, L_7, L_8);
	}

IL_0030:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.Int32)
extern const MethodInfo* Enumerable_ElementAt_TisKeyValuePair_2_t14_m245_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m243_MethodInfo_var;
extern "C" JSONNode_t2 * JSONClass_get_Item_m112 (JSONClass_t11 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerable_ElementAt_TisKeyValuePair_2_t14_m245_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		KeyValuePair_2_get_Value_m243_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t14  V_0 = {0};
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		Dictionary_2_t17 * L_2 = (__this->___m_Dict_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (JSONNode_t2 *)NULL;
	}

IL_001a:
	{
		Dictionary_2_t17 * L_4 = (__this->___m_Dict_0);
		int32_t L_5 = ___aIndex;
		KeyValuePair_2_t14  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t14_m245(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t14_m245_MethodInfo_var);
		V_0 = L_6;
		JSONNode_t2 * L_7 = KeyValuePair_2_get_Value_m243((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m243_MethodInfo_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONClass::set_Item(System.Int32,SimpleJSON.JSONNode)
extern const MethodInfo* Enumerable_ElementAt_TisKeyValuePair_2_t14_m245_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m252_MethodInfo_var;
extern "C" void JSONClass_set_Item_m113 (JSONClass_t11 * __this, int32_t ___aIndex, JSONNode_t2 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerable_ElementAt_TisKeyValuePair_2_t14_m245_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		KeyValuePair_2_get_Key_m252_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	KeyValuePair_2_t14  V_1 = {0};
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		Dictionary_2_t17 * L_2 = (__this->___m_Dict_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		Dictionary_2_t17 * L_4 = (__this->___m_Dict_0);
		int32_t L_5 = ___aIndex;
		KeyValuePair_2_t14  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t14_m245(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t14_m245_MethodInfo_var);
		V_1 = L_6;
		String_t* L_7 = KeyValuePair_2_get_Key_m252((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m252_MethodInfo_var);
		V_0 = L_7;
		Dictionary_2_t17 * L_8 = (__this->___m_Dict_0);
		String_t* L_9 = V_0;
		JSONNode_t2 * L_10 = ___value;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(!0,!1) */, L_8, L_9, L_10);
		return;
	}
}
// System.Int32 SimpleJSON.JSONClass::get_Count()
extern "C" int32_t JSONClass_get_Count_m114 (JSONClass_t11 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t17 * L_0 = (__this->___m_Dict_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t62_il2cpp_TypeInfo_var;
extern "C" void JSONClass_Add_m115 (JSONClass_t11 * __this, String_t* ___aKey, JSONNode_t2 * ___aItem, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Guid_t62_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	Guid_t62  V_0 = {0};
	{
		String_t* L_0 = ___aKey;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m209(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0040;
		}
	}
	{
		Dictionary_2_t17 * L_2 = (__this->___m_Dict_0);
		String_t* L_3 = ___aKey;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Dictionary_2_t17 * L_5 = (__this->___m_Dict_0);
		String_t* L_6 = ___aKey;
		JSONNode_t2 * L_7 = ___aItem;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(!0,!1) */, L_5, L_6, L_7);
		goto IL_003b;
	}

IL_002e:
	{
		Dictionary_2_t17 * L_8 = (__this->___m_Dict_0);
		String_t* L_9 = ___aKey;
		JSONNode_t2 * L_10 = ___aItem;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(!0,!1) */, L_8, L_9, L_10);
	}

IL_003b:
	{
		goto IL_0059;
	}

IL_0040:
	{
		Dictionary_2_t17 * L_11 = (__this->___m_Dict_0);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t62_il2cpp_TypeInfo_var);
		Guid_t62  L_12 = Guid_NewGuid_m253(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = Guid_ToString_m254((&V_0), /*hidden argument*/NULL);
		JSONNode_t2 * L_14 = ___aItem;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(!0,!1) */, L_11, L_13, L_14);
	}

IL_0059:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.String)
extern "C" JSONNode_t2 * JSONClass_Remove_m116 (JSONClass_t11 * __this, String_t* ___aKey, const MethodInfo* method)
{
	JSONNode_t2 * V_0 = {0};
	{
		Dictionary_2_t17 * L_0 = (__this->___m_Dict_0);
		String_t* L_1 = ___aKey;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (JSONNode_t2 *)NULL;
	}

IL_0013:
	{
		Dictionary_2_t17 * L_3 = (__this->___m_Dict_0);
		String_t* L_4 = ___aKey;
		NullCheck(L_3);
		JSONNode_t2 * L_5 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		Dictionary_2_t17 * L_6 = (__this->___m_Dict_0);
		String_t* L_7 = ___aKey;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, String_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(!0) */, L_6, L_7);
		JSONNode_t2 * L_8 = V_0;
		return L_8;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.Int32)
extern const MethodInfo* Enumerable_ElementAt_TisKeyValuePair_2_t14_m245_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m252_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m243_MethodInfo_var;
extern "C" JSONNode_t2 * JSONClass_Remove_m117 (JSONClass_t11 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerable_ElementAt_TisKeyValuePair_2_t14_m245_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		KeyValuePair_2_get_Key_m252_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		KeyValuePair_2_get_Value_m243_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t14  V_0 = {0};
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		Dictionary_2_t17 * L_2 = (__this->___m_Dict_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (JSONNode_t2 *)NULL;
	}

IL_001a:
	{
		Dictionary_2_t17 * L_4 = (__this->___m_Dict_0);
		int32_t L_5 = ___aIndex;
		KeyValuePair_2_t14  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t14_m245(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t14_m245_MethodInfo_var);
		V_0 = L_6;
		Dictionary_2_t17 * L_7 = (__this->___m_Dict_0);
		String_t* L_8 = KeyValuePair_2_get_Key_m252((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m252_MethodInfo_var);
		NullCheck(L_7);
		VirtFuncInvoker1< bool, String_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(!0) */, L_7, L_8);
		JSONNode_t2 * L_9 = KeyValuePair_2_get_Value_m243((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m243_MethodInfo_var);
		return L_9;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(SimpleJSON.JSONNode)
extern TypeInfo* U3CRemoveU3Ec__AnonStorey6_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t60_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CRemoveU3Ec__AnonStorey6_U3CU3Em__0_m108_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m255_MethodInfo_var;
extern const MethodInfo* Enumerable_Where_TisKeyValuePair_2_t14_m247_MethodInfo_var;
extern const MethodInfo* Enumerable_First_TisKeyValuePair_2_t14_m249_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m252_MethodInfo_var;
extern "C" JSONNode_t2 * JSONClass_Remove_m118 (JSONClass_t11 * __this, JSONNode_t2 * ___aNode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRemoveU3Ec__AnonStorey6_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Func_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		U3CRemoveU3Ec__AnonStorey6_U3CU3Em__0_m108_MethodInfo_var = il2cpp_codegen_method_info_from_index(16);
		Func_2__ctor_m255_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		Enumerable_Where_TisKeyValuePair_2_t14_m247_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		Enumerable_First_TisKeyValuePair_2_t14_m249_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483667);
		KeyValuePair_2_get_Key_m252_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t14  V_0 = {0};
	U3CRemoveU3Ec__AnonStorey6_t16 * V_1 = {0};
	JSONNode_t2 * V_2 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CRemoveU3Ec__AnonStorey6_t16 * L_0 = (U3CRemoveU3Ec__AnonStorey6_t16 *)il2cpp_codegen_object_new (U3CRemoveU3Ec__AnonStorey6_t16_il2cpp_TypeInfo_var);
		U3CRemoveU3Ec__AnonStorey6__ctor_m107(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		U3CRemoveU3Ec__AnonStorey6_t16 * L_1 = V_1;
		JSONNode_t2 * L_2 = ___aNode;
		NullCheck(L_1);
		L_1->___aNode_0 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t17 * L_3 = (__this->___m_Dict_0);
			U3CRemoveU3Ec__AnonStorey6_t16 * L_4 = V_1;
			IntPtr_t L_5 = { (void*)U3CRemoveU3Ec__AnonStorey6_U3CU3Em__0_m108_MethodInfo_var };
			Func_2_t60 * L_6 = (Func_2_t60 *)il2cpp_codegen_object_new (Func_2_t60_il2cpp_TypeInfo_var);
			Func_2__ctor_m255(L_6, L_4, L_5, /*hidden argument*/Func_2__ctor_m255_MethodInfo_var);
			Object_t* L_7 = Enumerable_Where_TisKeyValuePair_2_t14_m247(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/Enumerable_Where_TisKeyValuePair_2_t14_m247_MethodInfo_var);
			KeyValuePair_2_t14  L_8 = Enumerable_First_TisKeyValuePair_2_t14_m249(NULL /*static, unused*/, L_7, /*hidden argument*/Enumerable_First_TisKeyValuePair_2_t14_m249_MethodInfo_var);
			V_0 = L_8;
			Dictionary_2_t17 * L_9 = (__this->___m_Dict_0);
			String_t* L_10 = KeyValuePair_2_get_Key_m252((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m252_MethodInfo_var);
			NullCheck(L_9);
			VirtFuncInvoker1< bool, String_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(!0) */, L_9, L_10);
			U3CRemoveU3Ec__AnonStorey6_t16 * L_11 = V_1;
			NullCheck(L_11);
			JSONNode_t2 * L_12 = (L_11->___aNode_0);
			V_2 = L_12;
			goto IL_005b;
		}

IL_0049:
		{
			; // IL_0049: leave IL_005b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t45 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_004e;
		throw e;
	}

CATCH_004e:
	{ // begin catch(System.Object)
		{
			V_2 = (JSONNode_t2 *)NULL;
			goto IL_005b;
		}

IL_0056:
		{
			; // IL_0056: leave IL_005b
		}
	} // end catch (depth: 1)

IL_005b:
	{
		JSONNode_t2 * L_13 = V_2;
		return L_13;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass::get_Childs()
extern TypeInfo* U3CU3Ec__Iterator4_t12_il2cpp_TypeInfo_var;
extern "C" Object_t* JSONClass_get_Childs_m119 (JSONClass_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator4_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator4_t12 * V_0 = {0};
	{
		U3CU3Ec__Iterator4_t12 * L_0 = (U3CU3Ec__Iterator4_t12 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator4_t12_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator4__ctor_m93(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator4_t12 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CU3Ec__Iterator4_t12 * L_2 = V_0;
		U3CU3Ec__Iterator4_t12 * L_3 = L_2;
		NullCheck(L_3);
		L_3->___U24PC_2 = ((int32_t)-2);
		return L_3;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONClass::GetEnumerator()
extern TypeInfo* U3CGetEnumeratorU3Ec__Iterator5_t15_il2cpp_TypeInfo_var;
extern "C" Object_t * JSONClass_GetEnumerator_m120 (JSONClass_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetEnumeratorU3Ec__Iterator5_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator5_t15 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator5_t15 * L_0 = (U3CGetEnumeratorU3Ec__Iterator5_t15 *)il2cpp_codegen_object_new (U3CGetEnumeratorU3Ec__Iterator5_t15_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator5__ctor_m101(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator5_t15 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CGetEnumeratorU3Ec__Iterator5_t15 * L_2 = V_0;
		return L_2;
	}
}
// System.String SimpleJSON.JSONClass::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t13_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m241_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m242_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m252_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m243_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m244_MethodInfo_var;
extern "C" String_t* JSONClass_ToString_m121 (JSONClass_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Enumerator_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m241_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		Enumerator_get_Current_m242_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		KeyValuePair_2_get_Key_m252_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		KeyValuePair_2_get_Value_m243_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		Enumerator_MoveNext_m244_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	KeyValuePair_2_t14  V_1 = {0};
	Enumerator_t13  V_2 = {0};
	String_t* V_3 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral21;
		Dictionary_2_t17 * L_0 = (__this->___m_Dict_0);
		NullCheck(L_0);
		Enumerator_t13  L_1 = Dictionary_2_GetEnumerator_m241(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m241_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0077;
		}

IL_0017:
		{
			KeyValuePair_2_t14  L_2 = Enumerator_get_Current_m242((&V_2), /*hidden argument*/Enumerator_get_Current_m242_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = String_get_Length_m215(L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) <= ((int32_t)2)))
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m213(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral16, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0037:
		{
			String_t* L_7 = V_0;
			V_3 = L_7;
			StringU5BU5D_t31* L_8 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 5));
			String_t* L_9 = V_3;
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
			ArrayElementTypeCheck (L_8, L_9);
			*((String_t**)(String_t**)SZArrayLdElema(L_8, 0)) = (String_t*)L_9;
			StringU5BU5D_t31* L_10 = L_8;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
			ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral22);
			*((String_t**)(String_t**)SZArrayLdElema(L_10, 1)) = (String_t*)(String_t*) &_stringLiteral22;
			StringU5BU5D_t31* L_11 = L_10;
			String_t* L_12 = KeyValuePair_2_get_Key_m252((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m252_MethodInfo_var);
			String_t* L_13 = JSONNode_Escape_m45(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
			ArrayElementTypeCheck (L_11, L_13);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, 2)) = (String_t*)L_13;
			StringU5BU5D_t31* L_14 = L_11;
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 3);
			ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral23);
			*((String_t**)(String_t**)SZArrayLdElema(L_14, 3)) = (String_t*)(String_t*) &_stringLiteral23;
			StringU5BU5D_t31* L_15 = L_14;
			JSONNode_t2 * L_16 = KeyValuePair_2_get_Value_m243((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m243_MethodInfo_var);
			NullCheck(L_16);
			String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_16);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
			ArrayElementTypeCheck (L_15, L_17);
			*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)L_17;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_18 = String_Concat_m256(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			V_0 = L_18;
		}

IL_0077:
		{
			bool L_19 = Enumerator_MoveNext_m244((&V_2), /*hidden argument*/Enumerator_MoveNext_m244_MethodInfo_var);
			if (L_19)
			{
				goto IL_0017;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x94, FINALLY_0088);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0088;
	}

FINALLY_0088:
	{ // begin finally (depth: 1)
		Enumerator_t13  L_20 = V_2;
		Enumerator_t13  L_21 = L_20;
		Object_t * L_22 = Box(Enumerator_t13_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_22);
		IL2CPP_END_FINALLY(136)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(136)
	{
		IL2CPP_JUMP_TBL(0x94, IL_0094)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0094:
	{
		String_t* L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m213(NULL /*static, unused*/, L_23, (String_t*) &_stringLiteral24, /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25 = V_0;
		return L_25;
	}
}
// System.String SimpleJSON.JSONClass::ToString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t13_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m241_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m242_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m252_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m243_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m244_MethodInfo_var;
extern "C" String_t* JSONClass_ToString_m122 (JSONClass_t11 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Enumerator_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m241_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		Enumerator_get_Current_m242_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		KeyValuePair_2_get_Key_m252_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		KeyValuePair_2_get_Value_m243_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		Enumerator_MoveNext_m244_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	KeyValuePair_2_t14  V_1 = {0};
	Enumerator_t13  V_2 = {0};
	String_t* V_3 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral25;
		Dictionary_2_t17 * L_0 = (__this->___m_Dict_0);
		NullCheck(L_0);
		Enumerator_t13  L_1 = Dictionary_2_GetEnumerator_m241(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m241_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0094;
		}

IL_0017:
		{
			KeyValuePair_2_t14  L_2 = Enumerator_get_Current_m242((&V_2), /*hidden argument*/Enumerator_get_Current_m242_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = String_get_Length_m215(L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) <= ((int32_t)3)))
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m213(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral16, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0037:
		{
			String_t* L_7 = V_0;
			String_t* L_8 = ___aPrefix;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Concat_m240(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral18, L_8, (String_t*) &_stringLiteral19, /*hidden argument*/NULL);
			V_0 = L_9;
			String_t* L_10 = V_0;
			V_3 = L_10;
			StringU5BU5D_t31* L_11 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 5));
			String_t* L_12 = V_3;
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
			ArrayElementTypeCheck (L_11, L_12);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, 0)) = (String_t*)L_12;
			StringU5BU5D_t31* L_13 = L_11;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
			ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral22);
			*((String_t**)(String_t**)SZArrayLdElema(L_13, 1)) = (String_t*)(String_t*) &_stringLiteral22;
			StringU5BU5D_t31* L_14 = L_13;
			String_t* L_15 = KeyValuePair_2_get_Key_m252((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m252_MethodInfo_var);
			String_t* L_16 = JSONNode_Escape_m45(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
			ArrayElementTypeCheck (L_14, L_16);
			*((String_t**)(String_t**)SZArrayLdElema(L_14, 2)) = (String_t*)L_16;
			StringU5BU5D_t31* L_17 = L_14;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 3);
			ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral26);
			*((String_t**)(String_t**)SZArrayLdElema(L_17, 3)) = (String_t*)(String_t*) &_stringLiteral26;
			StringU5BU5D_t31* L_18 = L_17;
			JSONNode_t2 * L_19 = KeyValuePair_2_get_Value_m243((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m243_MethodInfo_var);
			String_t* L_20 = ___aPrefix;
			String_t* L_21 = String_Concat_m213(NULL /*static, unused*/, L_20, (String_t*) &_stringLiteral19, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_22 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_19, L_21);
			NullCheck(L_18);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 4);
			ArrayElementTypeCheck (L_18, L_22);
			*((String_t**)(String_t**)SZArrayLdElema(L_18, 4)) = (String_t*)L_22;
			String_t* L_23 = String_Concat_m256(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			V_0 = L_23;
		}

IL_0094:
		{
			bool L_24 = Enumerator_MoveNext_m244((&V_2), /*hidden argument*/Enumerator_MoveNext_m244_MethodInfo_var);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xB1, FINALLY_00a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_00a5;
	}

FINALLY_00a5:
	{ // begin finally (depth: 1)
		Enumerator_t13  L_25 = V_2;
		Enumerator_t13  L_26 = L_25;
		Object_t * L_27 = Box(Enumerator_t13_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_27);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_27);
		IL2CPP_END_FINALLY(165)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(165)
	{
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00b1:
	{
		String_t* L_28 = V_0;
		String_t* L_29 = ___aPrefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m240(NULL /*static, unused*/, L_28, (String_t*) &_stringLiteral18, L_29, (String_t*) &_stringLiteral24, /*hidden argument*/NULL);
		V_0 = L_30;
		String_t* L_31 = V_0;
		return L_31;
	}
}
// System.Void SimpleJSON.JSONClass::Serialize(System.IO.BinaryWriter)
extern TypeInfo* Enumerator_t63_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m257_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m258_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m259_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m260_MethodInfo_var;
extern "C" void JSONClass_Serialize_m123 (JSONClass_t11 * __this, BinaryWriter_t39 * ___aWriter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_get_Keys_m257_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483668);
		KeyCollection_GetEnumerator_m258_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483669);
		Enumerator_get_Current_m259_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483670);
		Enumerator_MoveNext_m260_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483671);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Enumerator_t63  V_1 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		BinaryWriter_t39 * L_0 = ___aWriter;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, 2);
		BinaryWriter_t39 * L_1 = ___aWriter;
		Dictionary_2_t17 * L_2 = (__this->___m_Dict_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_2);
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		Dictionary_2_t17 * L_4 = (__this->___m_Dict_0);
		NullCheck(L_4);
		KeyCollection_t64 * L_5 = Dictionary_2_get_Keys_m257(L_4, /*hidden argument*/Dictionary_2_get_Keys_m257_MethodInfo_var);
		NullCheck(L_5);
		Enumerator_t63  L_6 = KeyCollection_GetEnumerator_m258(L_5, /*hidden argument*/KeyCollection_GetEnumerator_m258_MethodInfo_var);
		V_1 = L_6;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_002e:
		{
			String_t* L_7 = Enumerator_get_Current_m259((&V_1), /*hidden argument*/Enumerator_get_Current_m259_MethodInfo_var);
			V_0 = L_7;
			BinaryWriter_t39 * L_8 = ___aWriter;
			String_t* L_9 = V_0;
			NullCheck(L_8);
			VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_8, L_9);
			Dictionary_2_t17 * L_10 = (__this->___m_Dict_0);
			String_t* L_11 = V_0;
			NullCheck(L_10);
			JSONNode_t2 * L_12 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(!0) */, L_10, L_11);
			BinaryWriter_t39 * L_13 = ___aWriter;
			NullCheck(L_12);
			VirtActionInvoker1< BinaryWriter_t39 * >::Invoke(28 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, L_12, L_13);
		}

IL_004f:
		{
			bool L_14 = Enumerator_MoveNext_m260((&V_1), /*hidden argument*/Enumerator_MoveNext_m260_MethodInfo_var);
			if (L_14)
			{
				goto IL_002e;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_t63  L_15 = V_1;
		Enumerator_t63  L_16 = L_15;
		Object_t * L_17 = Box(Enumerator_t63_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_17);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_006c:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJSON.JSONData::.ctor(System.String)
extern "C" void JSONData__ctor_m124 (JSONData_t18 * __this, String_t* ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m16(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___aData;
		__this->___m_Data_0 = L_0;
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
extern "C" void JSONData__ctor_m125 (JSONData_t18 * __this, float ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m16(__this, /*hidden argument*/NULL);
		float L_0 = ___aData;
		VirtActionInvoker1< float >::Invoke(21 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
extern "C" void JSONData__ctor_m126 (JSONData_t18 * __this, double ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m16(__this, /*hidden argument*/NULL);
		double L_0 = ___aData;
		VirtActionInvoker1< double >::Invoke(23 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
extern "C" void JSONData__ctor_m127 (JSONData_t18 * __this, bool ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m16(__this, /*hidden argument*/NULL);
		bool L_0 = ___aData;
		VirtActionInvoker1< bool >::Invoke(25 /* System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
extern "C" void JSONData__ctor_m128 (JSONData_t18 * __this, int32_t ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m16(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___aData;
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, __this, L_0);
		return;
	}
}
// System.String SimpleJSON.JSONData::get_Value()
extern "C" String_t* JSONData_get_Value_m129 (JSONData_t18 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Data_0);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONData::set_Value(System.String)
extern "C" void JSONData_set_Value_m130 (JSONData_t18 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_Data_0 = L_0;
		return;
	}
}
// System.String SimpleJSON.JSONData::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONData_ToString_m131 (JSONData_t18 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_Data_0);
		String_t* L_1 = JSONNode_Escape_m45(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m261(NULL /*static, unused*/, (String_t*) &_stringLiteral22, L_1, (String_t*) &_stringLiteral22, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String SimpleJSON.JSONData::ToString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONData_ToString_m132 (JSONData_t18 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_Data_0);
		String_t* L_1 = JSONNode_Escape_m45(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m261(NULL /*static, unused*/, (String_t*) &_stringLiteral22, L_1, (String_t*) &_stringLiteral22, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SimpleJSON.JSONData::Serialize(System.IO.BinaryWriter)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" void JSONData_Serialize_m133 (JSONData_t18 * __this, BinaryWriter_t39 * ___aWriter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t18 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		JSONData_t18 * L_1 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m124(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t18 * L_2 = V_0;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, __this);
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_2, L_3);
		JSONData_t18 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___m_Data_0);
		String_t* L_6 = (__this->___m_Data_0);
		bool L_7 = String_op_Equality_m262(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		BinaryWriter_t39 * L_8 = ___aWriter;
		NullCheck(L_8);
		VirtActionInvoker1< uint8_t >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_8, 4);
		BinaryWriter_t39 * L_9 = ___aWriter;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, __this);
		NullCheck(L_9);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_9, L_10);
		return;
	}

IL_0041:
	{
		JSONData_t18 * L_11 = V_0;
		float L_12 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, __this);
		NullCheck(L_11);
		VirtActionInvoker1< float >::Invoke(21 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_11, L_12);
		JSONData_t18 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = (L_13->___m_Data_0);
		String_t* L_15 = (__this->___m_Data_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m262(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		BinaryWriter_t39 * L_17 = ___aWriter;
		NullCheck(L_17);
		VirtActionInvoker1< uint8_t >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_17, 7);
		BinaryWriter_t39 * L_18 = ___aWriter;
		float L_19 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, __this);
		NullCheck(L_18);
		VirtActionInvoker1< float >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_18, L_19);
		return;
	}

IL_0077:
	{
		JSONData_t18 * L_20 = V_0;
		double L_21 = (double)VirtFuncInvoker0< double >::Invoke(22 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		NullCheck(L_20);
		VirtActionInvoker1< double >::Invoke(23 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, L_20, L_21);
		JSONData_t18 * L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23 = (L_22->___m_Data_0);
		String_t* L_24 = (__this->___m_Data_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m262(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ad;
		}
	}
	{
		BinaryWriter_t39 * L_26 = ___aWriter;
		NullCheck(L_26);
		VirtActionInvoker1< uint8_t >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_26, 5);
		BinaryWriter_t39 * L_27 = ___aWriter;
		double L_28 = (double)VirtFuncInvoker0< double >::Invoke(22 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		NullCheck(L_27);
		VirtActionInvoker1< double >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_27, L_28);
		return;
	}

IL_00ad:
	{
		JSONData_t18 * L_29 = V_0;
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, __this);
		NullCheck(L_29);
		VirtActionInvoker1< bool >::Invoke(25 /* System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean) */, L_29, L_30);
		JSONData_t18 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = (L_31->___m_Data_0);
		String_t* L_33 = (__this->___m_Data_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_34 = String_op_Equality_m262(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00e3;
		}
	}
	{
		BinaryWriter_t39 * L_35 = ___aWriter;
		NullCheck(L_35);
		VirtActionInvoker1< uint8_t >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_35, 6);
		BinaryWriter_t39 * L_36 = ___aWriter;
		bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, __this);
		NullCheck(L_36);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_36, L_37);
		return;
	}

IL_00e3:
	{
		BinaryWriter_t39 * L_38 = ___aWriter;
		NullCheck(L_38);
		VirtActionInvoker1< uint8_t >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_38, 3);
		BinaryWriter_t39 * L_39 = ___aWriter;
		String_t* L_40 = (__this->___m_Data_0);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_39, L_40);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator__ctor_m134 (JSONLazyCreator_t19 * __this, JSONNode_t2 * ___aNode, const MethodInfo* method)
{
	{
		JSONNode__ctor_m16(__this, /*hidden argument*/NULL);
		JSONNode_t2 * L_0 = ___aNode;
		__this->___m_Node_0 = L_0;
		__this->___m_Key_1 = (String_t*)NULL;
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C" void JSONLazyCreator__ctor_m135 (JSONLazyCreator_t19 * __this, JSONNode_t2 * ___aNode, String_t* ___aKey, const MethodInfo* method)
{
	{
		JSONNode__ctor_m16(__this, /*hidden argument*/NULL);
		JSONNode_t2 * L_0 = ___aNode;
		__this->___m_Node_0 = L_0;
		String_t* L_1 = ___aKey;
		__this->___m_Key_1 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_Set_m136 (JSONLazyCreator_t19 * __this, JSONNode_t2 * ___aVal, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Key_1);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		JSONNode_t2 * L_1 = (__this->___m_Node_0);
		JSONNode_t2 * L_2 = ___aVal;
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		goto IL_002e;
	}

IL_001c:
	{
		JSONNode_t2 * L_3 = (__this->___m_Node_0);
		String_t* L_4 = (__this->___m_Key_1);
		JSONNode_t2 * L_5 = ___aVal;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_3, L_4, L_5);
	}

IL_002e:
	{
		__this->___m_Node_0 = (JSONNode_t2 *)NULL;
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
extern TypeInfo* JSONLazyCreator_t19_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONLazyCreator_get_Item_m137 (JSONLazyCreator_t19 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONLazyCreator_t19 * L_0 = (JSONLazyCreator_t19 *)il2cpp_codegen_object_new (JSONLazyCreator_t19_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m134(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
extern TypeInfo* JSONArray_t6_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_Item_m138 (JSONLazyCreator_t19 * __this, int32_t ___aIndex, JSONNode_t2 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	JSONArray_t6 * V_0 = {0};
	{
		JSONArray_t6 * L_0 = (JSONArray_t6 *)il2cpp_codegen_object_new (JSONArray_t6_il2cpp_TypeInfo_var);
		JSONArray__ctor_m79(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONArray_t6 * L_1 = V_0;
		JSONNode_t2 * L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		JSONArray_t6 * L_3 = V_0;
		JSONLazyCreator_Set_m136(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
extern TypeInfo* JSONLazyCreator_t19_il2cpp_TypeInfo_var;
extern "C" JSONNode_t2 * JSONLazyCreator_get_Item_m139 (JSONLazyCreator_t19 * __this, String_t* ___aKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___aKey;
		JSONLazyCreator_t19 * L_1 = (JSONLazyCreator_t19 *)il2cpp_codegen_object_new (JSONLazyCreator_t19_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m135(L_1, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
extern TypeInfo* JSONClass_t11_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_Item_m140 (JSONLazyCreator_t19 * __this, String_t* ___aKey, JSONNode_t2 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONClass_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	JSONClass_t11 * V_0 = {0};
	{
		JSONClass_t11 * L_0 = (JSONClass_t11 *)il2cpp_codegen_object_new (JSONClass_t11_il2cpp_TypeInfo_var);
		JSONClass__ctor_m109(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONClass_t11 * L_1 = V_0;
		String_t* L_2 = ___aKey;
		JSONNode_t2 * L_3 = ___value;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(4 /* System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		JSONClass_t11 * L_4 = V_0;
		JSONLazyCreator_Set_m136(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
extern TypeInfo* JSONArray_t6_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_Add_m141 (JSONLazyCreator_t19 * __this, JSONNode_t2 * ___aItem, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	JSONArray_t6 * V_0 = {0};
	{
		JSONArray_t6 * L_0 = (JSONArray_t6 *)il2cpp_codegen_object_new (JSONArray_t6_il2cpp_TypeInfo_var);
		JSONArray__ctor_m79(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONArray_t6 * L_1 = V_0;
		JSONNode_t2 * L_2 = ___aItem;
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t2 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		JSONArray_t6 * L_3 = V_0;
		JSONLazyCreator_Set_m136(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
extern TypeInfo* JSONClass_t11_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_Add_m142 (JSONLazyCreator_t19 * __this, String_t* ___aKey, JSONNode_t2 * ___aItem, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONClass_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	JSONClass_t11 * V_0 = {0};
	{
		JSONClass_t11 * L_0 = (JSONClass_t11 *)il2cpp_codegen_object_new (JSONClass_t11_il2cpp_TypeInfo_var);
		JSONClass__ctor_m109(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONClass_t11 * L_1 = V_0;
		String_t* L_2 = ___aKey;
		JSONNode_t2 * L_3 = ___aItem;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(4 /* System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		JSONClass_t11 * L_4 = V_0;
		JSONLazyCreator_Set_m136(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
extern "C" bool JSONLazyCreator_Equals_m143 (JSONLazyCreator_t19 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m210(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
extern "C" int32_t JSONLazyCreator_GetHashCode_m144 (JSONLazyCreator_t19 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = JSONNode_GetHashCode_m44(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SimpleJSON.JSONLazyCreator::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONLazyCreator_ToString_m145 (JSONLazyCreator_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.String SimpleJSON.JSONLazyCreator::ToString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONLazyCreator_ToString_m146 (JSONLazyCreator_t19 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" int32_t JSONLazyCreator_get_AsInt_m147 (JSONLazyCreator_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t18 * V_0 = {0};
	{
		JSONData_t18 * L_0 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m128(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t18 * L_1 = V_0;
		JSONLazyCreator_Set_m136(__this, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_AsInt_m148 (JSONLazyCreator_t19 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t18 * V_0 = {0};
	{
		int32_t L_0 = ___value;
		JSONData_t18 * L_1 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m128(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t18 * L_2 = V_0;
		JSONLazyCreator_Set_m136(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" float JSONLazyCreator_get_AsFloat_m149 (JSONLazyCreator_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t18 * V_0 = {0};
	{
		JSONData_t18 * L_0 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m125(L_0, (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t18 * L_1 = V_0;
		JSONLazyCreator_Set_m136(__this, L_1, /*hidden argument*/NULL);
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_AsFloat_m150 (JSONLazyCreator_t19 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t18 * V_0 = {0};
	{
		float L_0 = ___value;
		JSONData_t18 * L_1 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m125(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t18 * L_2 = V_0;
		JSONLazyCreator_Set_m136(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" double JSONLazyCreator_get_AsDouble_m151 (JSONLazyCreator_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t18 * V_0 = {0};
	{
		JSONData_t18 * L_0 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m126(L_0, (0.0), /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t18 * L_1 = V_0;
		JSONLazyCreator_Set_m136(__this, L_1, /*hidden argument*/NULL);
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_AsDouble_m152 (JSONLazyCreator_t19 * __this, double ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t18 * V_0 = {0};
	{
		double L_0 = ___value;
		JSONData_t18 * L_1 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m126(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t18 * L_2 = V_0;
		JSONLazyCreator_Set_m136(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" bool JSONLazyCreator_get_AsBool_m153 (JSONLazyCreator_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t18 * V_0 = {0};
	{
		JSONData_t18 * L_0 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m127(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t18 * L_1 = V_0;
		JSONLazyCreator_Set_m136(__this, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
extern TypeInfo* JSONData_t18_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_AsBool_m154 (JSONLazyCreator_t19 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t18 * V_0 = {0};
	{
		bool L_0 = ___value;
		JSONData_t18 * L_1 = (JSONData_t18 *)il2cpp_codegen_object_new (JSONData_t18_il2cpp_TypeInfo_var);
		JSONData__ctor_m127(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t18 * L_2 = V_0;
		JSONLazyCreator_Set_m136(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
extern TypeInfo* JSONArray_t6_il2cpp_TypeInfo_var;
extern "C" JSONArray_t6 * JSONLazyCreator_get_AsArray_m155 (JSONLazyCreator_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	JSONArray_t6 * V_0 = {0};
	{
		JSONArray_t6 * L_0 = (JSONArray_t6 *)il2cpp_codegen_object_new (JSONArray_t6_il2cpp_TypeInfo_var);
		JSONArray__ctor_m79(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONArray_t6 * L_1 = V_0;
		JSONLazyCreator_Set_m136(__this, L_1, /*hidden argument*/NULL);
		JSONArray_t6 * L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONClass SimpleJSON.JSONLazyCreator::get_AsObject()
extern TypeInfo* JSONClass_t11_il2cpp_TypeInfo_var;
extern "C" JSONClass_t11 * JSONLazyCreator_get_AsObject_m156 (JSONLazyCreator_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONClass_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	JSONClass_t11 * V_0 = {0};
	{
		JSONClass_t11 * L_0 = (JSONClass_t11 *)il2cpp_codegen_object_new (JSONClass_t11_il2cpp_TypeInfo_var);
		JSONClass__ctor_m109(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONClass_t11 * L_1 = V_0;
		JSONLazyCreator_Set_m136(__this, L_1, /*hidden argument*/NULL);
		JSONClass_t11 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Equality_m157 (Object_t * __this /* static, unused */, JSONLazyCreator_t19 * ___a, Object_t * ___b, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___b;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		JSONLazyCreator_t19 * L_1 = ___a;
		Object_t * L_2 = ___b;
		bool L_3 = Object_ReferenceEquals_m210(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Inequality_m158 (Object_t * __this /* static, unused */, JSONLazyCreator_t19 * ___a, Object_t * ___b, const MethodInfo* method)
{
	{
		JSONLazyCreator_t19 * L_0 = ___a;
		Object_t * L_1 = ___b;
		bool L_2 = JSONLazyCreator_op_Equality_m157(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// SimpleJSON.JSON
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSON.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSON
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONMethodDeclarations.h"



// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
extern "C" JSONNode_t2 * JSON_Parse_m159 (Object_t * __this /* static, unused */, String_t* ___aJSON, const MethodInfo* method)
{
	{
		String_t* L_0 = ___aJSON;
		JSONNode_t2 * L_1 = JSONNode_Parse_m46(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SpeechAnimationDictionary/Animation
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechAnimationDictionary_Anim.h"
#ifndef _MSC_VER
#else
#endif
// SpeechAnimationDictionary/Animation
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechAnimationDictionary_AnimMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Void SpeechAnimationDictionary/Animation::.ctor(System.Boolean,System.Boolean,System.String)
extern "C" void Animation__ctor_m160 (Animation_t21 * __this, bool ___flippedX, bool ___flippedY, String_t* ___animation, const MethodInfo* method)
{
	{
		Vector2_t22  L_0 = {0};
		Vector2__ctor_m263(&L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___direction_5 = L_0;
		Object__ctor_m199(__this, /*hidden argument*/NULL);
		bool L_1 = ___flippedX;
		__this->___flippedX_0 = L_1;
		bool L_2 = ___flippedY;
		__this->___flippedY_1 = L_2;
		String_t* L_3 = ___animation;
		__this->___animation_4 = L_3;
		return;
	}
}
// System.String SpeechAnimationDictionary/Animation::ToString()
extern TypeInfo* ObjectU5BU5D_t65_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t47_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t22_il2cpp_TypeInfo_var;
extern "C" String_t* Animation_ToString_m161 (Animation_t21 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Boolean_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Vector2_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t65* L_0 = ((ObjectU5BU5D_t65*)SZArrayNew(ObjectU5BU5D_t65_il2cpp_TypeInfo_var, ((int32_t)12)));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t65* L_2 = L_0;
		bool L_3 = (__this->___flippedX_0);
		bool L_4 = L_3;
		Object_t * L_5 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t65* L_6 = L_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)(String_t*) &_stringLiteral37;
		ObjectU5BU5D_t65* L_7 = L_6;
		bool L_8 = (__this->___flippedY_1);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)L_10;
		ObjectU5BU5D_t65* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 4);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 4)) = (Object_t *)(String_t*) &_stringLiteral37;
		ObjectU5BU5D_t65* L_12 = L_11;
		String_t* L_13 = (__this->___animation_4);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)L_13;
		ObjectU5BU5D_t65* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 6);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 6)) = (Object_t *)(String_t*) &_stringLiteral37;
		ObjectU5BU5D_t65* L_15 = L_14;
		bool L_16 = (__this->___running_2);
		bool L_17 = L_16;
		Object_t * L_18 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 7);
		ArrayElementTypeCheck (L_15, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 7)) = (Object_t *)L_18;
		ObjectU5BU5D_t65* L_19 = L_15;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 8);
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 8)) = (Object_t *)(String_t*) &_stringLiteral37;
		ObjectU5BU5D_t65* L_20 = L_19;
		bool L_21 = (__this->___walking_3);
		bool L_22 = L_21;
		Object_t * L_23 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)9));
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, ((int32_t)9))) = (Object_t *)L_23;
		ObjectU5BU5D_t65* L_24 = L_20;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)10));
		ArrayElementTypeCheck (L_24, (String_t*) &_stringLiteral37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral37;
		ObjectU5BU5D_t65* L_25 = L_24;
		Vector2_t22  L_26 = (__this->___direction_5);
		Vector2_t22  L_27 = L_26;
		Object_t * L_28 = Box(Vector2_t22_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)11));
		ArrayElementTypeCheck (L_25, L_28);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, ((int32_t)11))) = (Object_t *)L_28;
		String_t* L_29 = String_Concat_m264(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		return L_29;
	}
}
// SpeechAnimationDictionary
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechAnimationDictionary.h"
#ifndef _MSC_VER
#else
#endif
// SpeechAnimationDictionary
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechAnimationDictionaryMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Collections.Generic.HashSet`1<System.String>
#include "System_Core_System_Collections_Generic_HashSet_1_gen.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// System.Collections.Generic.HashSet`1<System.String>
#include "System_Core_System_Collections_Generic_HashSet_1_genMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// System.Void SpeechAnimationDictionary::.ctor()
extern TypeInfo* Dictionary_2_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t25_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m265_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m266_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m267_MethodInfo_var;
extern "C" void SpeechAnimationDictionary__ctor_m162 (SpeechAnimationDictionary_t26 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		Dictionary_2_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		Dictionary_2_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		Dictionary_2__ctor_m265_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483672);
		Dictionary_2__ctor_m266_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		Dictionary_2__ctor_m267_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t23 * L_0 = (Dictionary_2_t23 *)il2cpp_codegen_object_new (Dictionary_2_t23_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m265(L_0, /*hidden argument*/Dictionary_2__ctor_m265_MethodInfo_var);
		__this->___voiceCommands_3 = L_0;
		Dictionary_2_t24 * L_1 = (Dictionary_2_t24 *)il2cpp_codegen_object_new (Dictionary_2_t24_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m266(L_1, /*hidden argument*/Dictionary_2__ctor_m266_MethodInfo_var);
		__this->___commandAnimations_4 = L_1;
		Dictionary_2_t25 * L_2 = (Dictionary_2_t25 *)il2cpp_codegen_object_new (Dictionary_2_t25_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m267(L_2, /*hidden argument*/Dictionary_2__ctor_m267_MethodInfo_var);
		__this->___revertedCommands_5 = L_2;
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeechAnimationDictionary::ReloadDictionary()
extern TypeInfo* HashSet_1_t35_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t68_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t67_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m269_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m270_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m271_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m272_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m273_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m274_MethodInfo_var;
extern const MethodInfo* HashSet_1_Add_m275_MethodInfo_var;
extern const MethodInfo* HashSet_1__ctor_m276_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m277_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m278_MethodInfo_var;
extern "C" void SpeechAnimationDictionary_ReloadDictionary_m163 (SpeechAnimationDictionary_t26 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HashSet_1_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		Enumerator_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Enumerator_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		Dictionary_2_GetEnumerator_m269_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		Enumerator_get_Current_m270_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483676);
		KeyValuePair_2_get_Value_m271_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483677);
		List_1_GetEnumerator_m272_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Enumerator_get_Current_m273_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		KeyValuePair_2_get_Key_m274_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		HashSet_1_Add_m275_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		HashSet_1__ctor_m276_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Enumerator_MoveNext_m277_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		Enumerator_MoveNext_m278_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t66  V_0 = {0};
	Enumerator_t67  V_1 = {0};
	String_t* V_2 = {0};
	Enumerator_t68  V_3 = {0};
	String_t* V_4 = {0};
	HashSet_1_t35 * V_5 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t25 * L_0 = (__this->___revertedCommands_5);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>>::Clear() */, L_0);
		Dictionary_2_t23 * L_1 = (__this->___voiceCommands_3);
		NullCheck(L_1);
		Enumerator_t67  L_2 = Dictionary_2_GetEnumerator_m269(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m269_MethodInfo_var);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c3;
		}

IL_001c:
		{
			KeyValuePair_2_t66  L_3 = Enumerator_get_Current_m270((&V_1), /*hidden argument*/Enumerator_get_Current_m270_MethodInfo_var);
			V_0 = L_3;
			List_1_t69 * L_4 = KeyValuePair_2_get_Value_m271((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m271_MethodInfo_var);
			NullCheck(L_4);
			Enumerator_t68  L_5 = List_1_GetEnumerator_m272(L_4, /*hidden argument*/List_1_GetEnumerator_m272_MethodInfo_var);
			V_3 = L_5;
		}

IL_0031:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00a6;
			}

IL_0036:
			{
				String_t* L_6 = Enumerator_get_Current_m273((&V_3), /*hidden argument*/Enumerator_get_Current_m273_MethodInfo_var);
				V_2 = L_6;
				String_t* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8 = String_Trim_m218(L_7, /*hidden argument*/NULL);
				V_4 = L_8;
				Dictionary_2_t25 * L_9 = (__this->___revertedCommands_5);
				String_t* L_10 = V_4;
				NullCheck(L_9);
				bool L_11 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>>::ContainsKey(!0) */, L_9, L_10);
				if (!L_11)
				{
					goto IL_007c;
				}
			}

IL_0058:
			{
				Dictionary_2_t25 * L_12 = (__this->___revertedCommands_5);
				String_t* L_13 = V_4;
				NullCheck(L_12);
				HashSet_1_t35 * L_14 = (HashSet_1_t35 *)VirtFuncInvoker1< HashSet_1_t35 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>>::get_Item(!0) */, L_12, L_13);
				String_t* L_15 = KeyValuePair_2_get_Key_m274((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m274_MethodInfo_var);
				NullCheck(L_15);
				String_t* L_16 = String_Trim_m218(L_15, /*hidden argument*/NULL);
				NullCheck(L_14);
				HashSet_1_Add_m275(L_14, L_16, /*hidden argument*/HashSet_1_Add_m275_MethodInfo_var);
				goto IL_00a6;
			}

IL_007c:
			{
				HashSet_1_t35 * L_17 = (HashSet_1_t35 *)il2cpp_codegen_object_new (HashSet_1_t35_il2cpp_TypeInfo_var);
				HashSet_1__ctor_m276(L_17, /*hidden argument*/HashSet_1__ctor_m276_MethodInfo_var);
				V_5 = L_17;
				HashSet_1_t35 * L_18 = V_5;
				String_t* L_19 = KeyValuePair_2_get_Key_m274((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m274_MethodInfo_var);
				NullCheck(L_19);
				String_t* L_20 = String_Trim_m218(L_19, /*hidden argument*/NULL);
				NullCheck(L_18);
				HashSet_1_Add_m275(L_18, L_20, /*hidden argument*/HashSet_1_Add_m275_MethodInfo_var);
				Dictionary_2_t25 * L_21 = (__this->___revertedCommands_5);
				String_t* L_22 = V_4;
				HashSet_1_t35 * L_23 = V_5;
				NullCheck(L_21);
				VirtActionInvoker2< String_t*, HashSet_1_t35 * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>>::Add(!0,!1) */, L_21, L_22, L_23);
			}

IL_00a6:
			{
				bool L_24 = Enumerator_MoveNext_m277((&V_3), /*hidden argument*/Enumerator_MoveNext_m277_MethodInfo_var);
				if (L_24)
				{
					goto IL_0036;
				}
			}

IL_00b2:
			{
				IL2CPP_LEAVE(0xC3, FINALLY_00b7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t45 *)e.ex;
			goto FINALLY_00b7;
		}

FINALLY_00b7:
		{ // begin finally (depth: 2)
			Enumerator_t68  L_25 = V_3;
			Enumerator_t68  L_26 = L_25;
			Object_t * L_27 = Box(Enumerator_t68_il2cpp_TypeInfo_var, &L_26);
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_27);
			IL2CPP_END_FINALLY(183)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(183)
		{
			IL2CPP_JUMP_TBL(0xC3, IL_00c3)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
		}

IL_00c3:
		{
			bool L_28 = Enumerator_MoveNext_m278((&V_1), /*hidden argument*/Enumerator_MoveNext_m278_MethodInfo_var);
			if (L_28)
			{
				goto IL_001c;
			}
		}

IL_00cf:
		{
			IL2CPP_LEAVE(0xE0, FINALLY_00d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_00d4;
	}

FINALLY_00d4:
	{ // begin finally (depth: 1)
		Enumerator_t67  L_29 = V_1;
		Enumerator_t67  L_30 = L_29;
		Object_t * L_31 = Box(Enumerator_t67_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_31);
		IL2CPP_END_FINALLY(212)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(212)
	{
		IL2CPP_JUMP_TBL(0xE0, IL_00e0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00e0:
	{
		return;
	}
}
// System.Void SpeechAnimationDictionary::TestResults(System.String[]&,System.Collections.Generic.HashSet`1<System.String>&)
extern const MethodInfo* HashSet_1_UnionWith_m279_MethodInfo_var;
extern "C" void SpeechAnimationDictionary_TestResults_m164 (SpeechAnimationDictionary_t26 * __this, StringU5BU5D_t31** ___speechResults, HashSet_1_t35 ** ___foundCommands, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HashSet_1_UnionWith_m279_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t31* V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	{
		StringU5BU5D_t31** L_0 = ___speechResults;
		V_1 = (*((StringU5BU5D_t31**)L_0));
		V_2 = 0;
		goto IL_003d;
	}

IL_000a:
	{
		StringU5BU5D_t31* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
		String_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = String_Trim_m218(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		Dictionary_2_t25 * L_6 = (__this->___revertedCommands_5);
		String_t* L_7 = V_3;
		NullCheck(L_6);
		bool L_8 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>>::ContainsKey(!0) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		HashSet_1_t35 ** L_9 = ___foundCommands;
		Dictionary_2_t25 * L_10 = (__this->___revertedCommands_5);
		String_t* L_11 = V_3;
		NullCheck(L_10);
		HashSet_1_t35 * L_12 = (HashSet_1_t35 *)VirtFuncInvoker1< HashSet_1_t35 *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>>::get_Item(!0) */, L_10, L_11);
		NullCheck((*((HashSet_1_t35 **)L_9)));
		HashSet_1_UnionWith_m279((*((HashSet_1_t35 **)L_9)), L_12, /*hidden argument*/HashSet_1_UnionWith_m279_MethodInfo_var);
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_2;
		StringU5BU5D_t31* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Void SpeechAnimationDictionary::loadDictionary(System.String)
extern TypeInfo* Int32_t70_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t69_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t37_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* Animation_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t65_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t47_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t71_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m281_MethodInfo_var;
extern "C" void SpeechAnimationDictionary_loadDictionary_m165 (SpeechAnimationDictionary_t26 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		IEnumerator_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Animation_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		ObjectU5BU5D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		Boolean_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Single_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		List_1__ctor_m281_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	JSONArray_t6 * V_0 = {0};
	int32_t V_1 = 0;
	JSONClass_t11 * V_2 = {0};
	String_t* V_3 = {0};
	List_1_t69 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Animation_t21 * V_7 = {0};
	String_t* V_8 = {0};
	String_t* V_9 = {0};
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	JSONArray_t6 * V_14 = {0};
	Object_t * V_15 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString;
		JSONNode_t2 * L_1 = JSONNode_Parse_m46(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		JSONArray_t6 * L_2 = (JSONArray_t6 *)VirtFuncInvoker0< JSONArray_t6 * >::Invoke(26 /* SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray() */, L_1);
		V_0 = L_2;
		JSONArray_t6 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 SimpleJSON.JSONArray::get_Count() */, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t70_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m214(NULL /*static, unused*/, (String_t*) &_stringLiteral27, L_6, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_0295;
	}

IL_002d:
	{
		JSONArray_t6 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		JSONNode_t2 * L_10 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_10);
		JSONClass_t11 * L_11 = (JSONClass_t11 *)VirtFuncInvoker0< JSONClass_t11 * >::Invoke(27 /* SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject() */, L_10);
		V_2 = L_11;
		JSONClass_t11 * L_12 = V_2;
		NullCheck(L_12);
		JSONNode_t2 * L_13 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_12, (String_t*) &_stringLiteral28);
		String_t* L_14 = JSONNode_op_Implicit_m62(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		List_1_t69 * L_15 = (List_1_t69 *)il2cpp_codegen_object_new (List_1_t69_il2cpp_TypeInfo_var);
		List_1__ctor_m281(L_15, /*hidden argument*/List_1__ctor_m281_MethodInfo_var);
		V_4 = L_15;
		JSONClass_t11 * L_16 = V_2;
		NullCheck(L_16);
		JSONNode_t2 * L_17 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_16, (String_t*) &_stringLiteral29);
		NullCheck(L_17);
		JSONArray_t6 * L_18 = (JSONArray_t6 *)VirtFuncInvoker0< JSONArray_t6 * >::Invoke(26 /* SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray() */, L_17);
		NullCheck(L_18);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator() */, L_18);
		V_6 = L_19;
	}

IL_0069:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0094;
		}

IL_006e:
		{
			Object_t * L_20 = V_6;
			NullCheck(L_20);
			Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t37_il2cpp_TypeInfo_var, L_20);
			V_5 = L_21;
			List_1_t69 * L_22 = V_4;
			Object_t * L_23 = V_5;
			NullCheck(L_23);
			String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			NullCheck(L_24);
			String_t* L_26 = String_Replace_m282(L_24, (String_t*) &_stringLiteral22, L_25, /*hidden argument*/NULL);
			NullCheck(L_22);
			VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_22, L_26);
		}

IL_0094:
		{
			Object_t * L_27 = V_6;
			NullCheck(L_27);
			bool L_28 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t37_il2cpp_TypeInfo_var, L_27);
			if (L_28)
			{
				goto IL_006e;
			}
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xBB, FINALLY_00a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_00a5;
	}

FINALLY_00a5:
	{ // begin finally (depth: 1)
		{
			Object_t * L_29 = V_6;
			V_15 = ((Object_t *)IsInst(L_29, IDisposable_t46_il2cpp_TypeInfo_var));
			Object_t * L_30 = V_15;
			if (L_30)
			{
				goto IL_00b3;
			}
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(165)
		}

IL_00b3:
		{
			Object_t * L_31 = V_15;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_31);
			IL2CPP_END_FINALLY(165)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(165)
	{
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00bb:
	{
		V_7 = (Animation_t21 *)NULL;
		V_8 = (String_t*) &_stringLiteral30;
		JSONClass_t11 * L_32 = V_2;
		NullCheck(L_32);
		JSONNode_t2 * L_33 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_32, (String_t*) &_stringLiteral31);
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_33);
		V_9 = L_34;
		String_t* L_35 = V_9;
		String_t* L_36 = V_9;
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m215(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_38 = String_Substring_m223(L_35, 1, ((int32_t)((int32_t)L_37-(int32_t)2)), /*hidden argument*/NULL);
		String_t* L_39 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_40 = String_Compare_m283(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0275;
		}
	}
	{
		JSONClass_t11 * L_41 = V_2;
		NullCheck(L_41);
		JSONNode_t2 * L_42 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_41, (String_t*) &_stringLiteral31);
		NullCheck(L_42);
		JSONClass_t11 * L_43 = (JSONClass_t11 *)VirtFuncInvoker0< JSONClass_t11 * >::Invoke(27 /* SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject() */, L_42);
		NullCheck(L_43);
		JSONNode_t2 * L_44 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_43, (String_t*) &_stringLiteral32);
		NullCheck(L_44);
		bool L_45 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, L_44);
		V_10 = L_45;
		JSONClass_t11 * L_46 = V_2;
		NullCheck(L_46);
		JSONNode_t2 * L_47 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_46, (String_t*) &_stringLiteral31);
		NullCheck(L_47);
		JSONClass_t11 * L_48 = (JSONClass_t11 *)VirtFuncInvoker0< JSONClass_t11 * >::Invoke(27 /* SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject() */, L_47);
		NullCheck(L_48);
		JSONNode_t2 * L_49 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_48, (String_t*) &_stringLiteral33);
		NullCheck(L_49);
		bool L_50 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, L_49);
		V_11 = L_50;
		JSONClass_t11 * L_51 = V_2;
		NullCheck(L_51);
		JSONNode_t2 * L_52 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_51, (String_t*) &_stringLiteral31);
		NullCheck(L_52);
		JSONClass_t11 * L_53 = (JSONClass_t11 *)VirtFuncInvoker0< JSONClass_t11 * >::Invoke(27 /* SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject() */, L_52);
		NullCheck(L_53);
		JSONNode_t2 * L_54 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_53, (String_t*) &_stringLiteral34);
		NullCheck(L_54);
		bool L_55 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, L_54);
		V_12 = L_55;
		JSONClass_t11 * L_56 = V_2;
		NullCheck(L_56);
		JSONNode_t2 * L_57 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_56, (String_t*) &_stringLiteral31);
		NullCheck(L_57);
		JSONClass_t11 * L_58 = (JSONClass_t11 *)VirtFuncInvoker0< JSONClass_t11 * >::Invoke(27 /* SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject() */, L_57);
		NullCheck(L_58);
		JSONNode_t2 * L_59 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_58, (String_t*) &_stringLiteral35);
		NullCheck(L_59);
		bool L_60 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, L_59);
		V_13 = L_60;
		bool L_61 = V_10;
		bool L_62 = V_11;
		JSONClass_t11 * L_63 = V_2;
		NullCheck(L_63);
		JSONNode_t2 * L_64 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_63, (String_t*) &_stringLiteral31);
		NullCheck(L_64);
		JSONNode_t2 * L_65 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_64, (String_t*) &_stringLiteral31);
		NullCheck(L_65);
		String_t* L_66 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_65);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_67 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_66);
		String_t* L_68 = String_Replace_m282(L_66, (String_t*) &_stringLiteral22, L_67, /*hidden argument*/NULL);
		Animation_t21 * L_69 = (Animation_t21 *)il2cpp_codegen_object_new (Animation_t21_il2cpp_TypeInfo_var);
		Animation__ctor_m160(L_69, L_61, L_62, L_68, /*hidden argument*/NULL);
		V_7 = L_69;
		JSONClass_t11 * L_70 = V_2;
		NullCheck(L_70);
		JSONNode_t2 * L_71 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_70, (String_t*) &_stringLiteral31);
		NullCheck(L_71);
		JSONClass_t11 * L_72 = (JSONClass_t11 *)VirtFuncInvoker0< JSONClass_t11 * >::Invoke(27 /* SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject() */, L_71);
		NullCheck(L_72);
		JSONNode_t2 * L_73 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_72, (String_t*) &_stringLiteral36);
		NullCheck(L_73);
		JSONArray_t6 * L_74 = (JSONArray_t6 *)VirtFuncInvoker0< JSONArray_t6 * >::Invoke(26 /* SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray() */, L_73);
		V_14 = L_74;
		Animation_t21 * L_75 = V_7;
		bool L_76 = V_12;
		NullCheck(L_75);
		L_75->___running_2 = L_76;
		Animation_t21 * L_77 = V_7;
		bool L_78 = V_13;
		NullCheck(L_77);
		L_77->___walking_3 = L_78;
		Animation_t21 * L_79 = V_7;
		JSONArray_t6 * L_80 = V_14;
		NullCheck(L_80);
		JSONNode_t2 * L_81 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32) */, L_80, 0);
		NullCheck(L_81);
		int32_t L_82 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_81);
		JSONArray_t6 * L_83 = V_14;
		NullCheck(L_83);
		JSONNode_t2 * L_84 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32) */, L_83, 1);
		NullCheck(L_84);
		int32_t L_85 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_84);
		Vector2_t22  L_86 = {0};
		Vector2__ctor_m263(&L_86, (((float)L_82)), (((float)L_85)), /*hidden argument*/NULL);
		NullCheck(L_79);
		L_79->___direction_5 = L_86;
		ObjectU5BU5D_t65* L_87 = ((ObjectU5BU5D_t65*)SZArrayNew(ObjectU5BU5D_t65_il2cpp_TypeInfo_var, 7));
		Animation_t21 * L_88 = V_7;
		NullCheck(L_88);
		bool L_89 = (L_88->___running_2);
		bool L_90 = L_89;
		Object_t * L_91 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_90);
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 0);
		ArrayElementTypeCheck (L_87, L_91);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_87, 0)) = (Object_t *)L_91;
		ObjectU5BU5D_t65* L_92 = L_87;
		NullCheck(L_92);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_92, 1);
		ArrayElementTypeCheck (L_92, (String_t*) &_stringLiteral37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_92, 1)) = (Object_t *)(String_t*) &_stringLiteral37;
		ObjectU5BU5D_t65* L_93 = L_92;
		Animation_t21 * L_94 = V_7;
		NullCheck(L_94);
		bool L_95 = (L_94->___walking_3);
		bool L_96 = L_95;
		Object_t * L_97 = Box(Boolean_t47_il2cpp_TypeInfo_var, &L_96);
		NullCheck(L_93);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_93, 2);
		ArrayElementTypeCheck (L_93, L_97);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_93, 2)) = (Object_t *)L_97;
		ObjectU5BU5D_t65* L_98 = L_93;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 3);
		ArrayElementTypeCheck (L_98, (String_t*) &_stringLiteral37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_98, 3)) = (Object_t *)(String_t*) &_stringLiteral37;
		ObjectU5BU5D_t65* L_99 = L_98;
		Animation_t21 * L_100 = V_7;
		NullCheck(L_100);
		Vector2_t22 * L_101 = &(L_100->___direction_5);
		float L_102 = (L_101->___x_1);
		float L_103 = L_102;
		Object_t * L_104 = Box(Single_t71_il2cpp_TypeInfo_var, &L_103);
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, 4);
		ArrayElementTypeCheck (L_99, L_104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_99, 4)) = (Object_t *)L_104;
		ObjectU5BU5D_t65* L_105 = L_99;
		NullCheck(L_105);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_105, 5);
		ArrayElementTypeCheck (L_105, (String_t*) &_stringLiteral37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_105, 5)) = (Object_t *)(String_t*) &_stringLiteral37;
		ObjectU5BU5D_t65* L_106 = L_105;
		Animation_t21 * L_107 = V_7;
		NullCheck(L_107);
		Vector2_t22 * L_108 = &(L_107->___direction_5);
		float L_109 = (L_108->___y_2);
		float L_110 = L_109;
		Object_t * L_111 = Box(Single_t71_il2cpp_TypeInfo_var, &L_110);
		NullCheck(L_106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_106, 6);
		ArrayElementTypeCheck (L_106, L_111);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_106, 6)) = (Object_t *)L_111;
		String_t* L_112 = String_Concat_m264(NULL /*static, unused*/, L_106, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_112, /*hidden argument*/NULL);
	}

IL_0275:
	{
		Dictionary_2_t23 * L_113 = (__this->___voiceCommands_3);
		String_t* L_114 = V_3;
		List_1_t69 * L_115 = V_4;
		NullCheck(L_113);
		VirtActionInvoker2< String_t*, List_1_t69 * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::Add(!0,!1) */, L_113, L_114, L_115);
		Dictionary_2_t24 * L_116 = (__this->___commandAnimations_4);
		String_t* L_117 = V_3;
		Animation_t21 * L_118 = V_7;
		NullCheck(L_116);
		VirtActionInvoker2< String_t*, Animation_t21 * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>::Add(!0,!1) */, L_116, L_117, L_118);
		int32_t L_119 = V_1;
		V_1 = ((int32_t)((int32_t)L_119+(int32_t)1));
	}

IL_0295:
	{
		int32_t L_120 = V_1;
		JSONArray_t6 * L_121 = V_0;
		NullCheck(L_121);
		int32_t L_122 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 SimpleJSON.JSONArray::get_Count() */, L_121);
		if ((((int32_t)L_120) < ((int32_t)L_122)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
// System.Void SpeechAnimationDictionary::Start()
extern "C" void SpeechAnimationDictionary_Start_m166 (SpeechAnimationDictionary_t26 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SpeechAnimationDictionary::Update()
extern "C" void SpeechAnimationDictionary_Update_m167 (SpeechAnimationDictionary_t26 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// SpeechRecognition/State
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechRecognition_State.h"
#ifndef _MSC_VER
#else
#endif
// SpeechRecognition/State
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechRecognition_StateMethodDeclarations.h"



// SpeechRecognition
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechRecognition.h"
#ifndef _MSC_VER
#else
#endif
// SpeechRecognition
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechRecognitionMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Collections.Generic.List`1<ISpeechRecognitionListener>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// System.Collections.Generic.List`1<ISpeechRecognitionListenerJs>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Collections.Generic.List`1/Enumerator<ISpeechRecognitionListener>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// System.Collections.Generic.List`1/Enumerator<ISpeechRecognitionListenerJs>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Collections.Generic.List`1<ISpeechRecognitionListener>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<ISpeechRecognitionListenerJs>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<ISpeechRecognitionListener>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<ISpeechRecognitionListenerJs>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAssetMethodDeclarations.h"
struct GameObject_t72;
struct SpeechAnimationDictionary_t26;
struct GameObject_t72;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m285_gshared (GameObject_t72 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m285(__this, method) (( Object_t * (*) (GameObject_t72 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m285_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<SpeechAnimationDictionary>()
// !!0 UnityEngine.GameObject::GetComponent<SpeechAnimationDictionary>()
#define GameObject_GetComponent_TisSpeechAnimationDictionary_t26_m284(__this, method) (( SpeechAnimationDictionary_t26 * (*) (GameObject_t72 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m285_gshared)(__this, method)


// System.Void SpeechRecognition::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SpeechRecognition__ctor_m168 (SpeechRecognition_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___maxResults_2 = 5;
		__this->___preferredLanguage_3 = (String_t*) &_stringLiteral38;
		__this->___autoRestartAmpThreshold_15 = (0.5f);
		__this->___screenLockTimeout_17 = (10.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fileName_18 = L_0;
		__this->___screenLockTimeLeft_30 = (-1.0f);
		MonoBehaviour__ctor_m268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpeechRecognition::.cctor()
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t30_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t32_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t33_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t34_il2cpp_TypeInfo_var;
extern TypeInfo* HashSet_1_t35_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m289_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m290_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m291_MethodInfo_var;
extern const MethodInfo* HashSet_1__ctor_m276_MethodInfo_var;
extern "C" void SpeechRecognition__cctor_m169 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Encoding_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		StringU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		List_1_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		List_1_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Dictionary_2_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		HashSet_1_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		List_1__ctor_m289_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		List_1__ctor_m290_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		Dictionary_2__ctor_m291_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		HashSet_1__ctor_m276_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___NOT_INITIALIZED_20 = 0;
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___IDLE_21 = 1;
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___LISTENING_TO_SOUND_22 = 2;
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___LISTENING_TO_SPEECH_23 = 3;
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___LISTINING_TO_SPEECH_INIT_24 = 4;
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___STOPPED_LISTENING_25 = 5;
		Rect_t36  L_0 = {0};
		Rect__ctor_m286(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___touchToListenRect_26 = L_0;
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___touchToListenEnabled_27 = 0;
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___isRecognitionAvailable_28 = 0;
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29 = (SpeechRecognition_t29 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t30_il2cpp_TypeInfo_var);
		Encoding_t30 * L_1 = Encoding_get_UTF8_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___utf8_32 = L_1;
		StringU5BU5D_t31* L_2 = ((StringU5BU5D_t31*)SZArrayNew(StringU5BU5D_t31_il2cpp_TypeInfo_var, 1));
		String_t* L_3 = Environment_get_NewLine_m288(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)L_3;
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___newLineSplit_33 = L_2;
		List_1_t32 * L_4 = (List_1_t32 *)il2cpp_codegen_object_new (List_1_t32_il2cpp_TypeInfo_var);
		List_1__ctor_m289(L_4, /*hidden argument*/List_1__ctor_m289_MethodInfo_var);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34 = L_4;
		List_1_t33 * L_5 = (List_1_t33 *)il2cpp_codegen_object_new (List_1_t33_il2cpp_TypeInfo_var);
		List_1__ctor_m290(L_5, /*hidden argument*/List_1__ctor_m290_MethodInfo_var);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35 = L_5;
		Dictionary_2_t34 * L_6 = (Dictionary_2_t34 *)il2cpp_codegen_object_new (Dictionary_2_t34_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m291(L_6, /*hidden argument*/Dictionary_2__ctor_m291_MethodInfo_var);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36 = L_6;
		HashSet_1_t35 * L_7 = (HashSet_1_t35 *)il2cpp_codegen_object_new (HashSet_1_t35_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m276(L_7, /*hidden argument*/HashSet_1__ctor_m276_MethodInfo_var);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___newCommands_37 = L_7;
		HashSet_1_t35 * L_8 = (HashSet_1_t35 *)il2cpp_codegen_object_new (HashSet_1_t35_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m276(L_8, /*hidden argument*/HashSet_1__ctor_m276_MethodInfo_var);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___activeCommandsInThisFrame_38 = L_8;
		return;
	}
}
// System.Void SpeechRecognition::Awake()
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSpeechAnimationDictionary_t26_m284_MethodInfo_var;
extern "C" void SpeechRecognition_Awake_m170 (SpeechRecognition_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GameObject_GetComponent_TisSpeechAnimationDictionary_t26_m284_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		Vector3_t73  L_0 = {0};
		Vector3__ctor_m292(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Rect_Contains_m293((&((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___touchToListenRect_26), L_0, /*hidden argument*/NULL);
		SpeechRecognition_t29 * L_1 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		bool L_2 = Object_op_Inequality_m294(NULL /*static, unused*/, L_1, (Object_t74 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		GameObject_t72 * L_3 = Component_get_gameObject_m295(__this, /*hidden argument*/NULL);
		Object_Destroy_m296(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}

IL_003b:
	{
		GameObject_t72 * L_4 = Component_get_gameObject_m295(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m297(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29 = __this;
		GameObject_t72 * L_5 = Component_get_gameObject_m295(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		SpeechAnimationDictionary_t26 * L_6 = GameObject_GetComponent_TisSpeechAnimationDictionary_t26_m284(L_5, /*hidden argument*/GameObject_GetComponent_TisSpeechAnimationDictionary_t26_m284_MethodInfo_var);
		__this->___speechDictionary_31 = L_6;
		String_t* L_7 = (__this->___fileName_18);
		String_t* L_8 = SpeechRecognition_loadFile_m198(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral39, L_9, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		SpeechAnimationDictionary_t26 * L_11 = (__this->___speechDictionary_31);
		String_t* L_12 = V_0;
		NullCheck(L_11);
		SpeechAnimationDictionary_loadDictionary_m165(L_11, L_12, /*hidden argument*/NULL);
		SpeechAnimationDictionary_t26 * L_13 = (__this->___speechDictionary_31);
		NullCheck(L_13);
		SpeechAnimationDictionary_ReloadDictionary_m163(L_13, /*hidden argument*/NULL);
		Dictionary_2_t34 * L_14 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		NullCheck(L_14);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_14, 3, (String_t*) &_stringLiteral40);
		Dictionary_2_t34 * L_15 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		NullCheck(L_15);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_15, 5, (String_t*) &_stringLiteral41);
		Dictionary_2_t34 * L_16 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		NullCheck(L_16);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_16, ((int32_t)9), (String_t*) &_stringLiteral42);
		Dictionary_2_t34 * L_17 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		NullCheck(L_17);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_17, 2, (String_t*) &_stringLiteral43);
		Dictionary_2_t34 * L_18 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		NullCheck(L_18);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_18, 1, (String_t*) &_stringLiteral44);
		Dictionary_2_t34 * L_19 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		NullCheck(L_19);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_19, 7, (String_t*) &_stringLiteral45);
		Dictionary_2_t34 * L_20 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		NullCheck(L_20);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_20, 8, (String_t*) &_stringLiteral46);
		Dictionary_2_t34 * L_21 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		NullCheck(L_21);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_21, 4, (String_t*) &_stringLiteral47);
		Dictionary_2_t34 * L_22 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		NullCheck(L_22);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_22, 6, (String_t*) &_stringLiteral48);
		return;
	}
}
// System.Void SpeechRecognition::Update()
extern "C" void SpeechRecognition_Update_m171 (SpeechRecognition_t29 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_19);
		if (!L_0)
		{
			goto IL_000b;
		}
	}

IL_000b:
	{
		float L_1 = (__this->___screenLockTimeLeft_30);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		float L_2 = (__this->___screenLockTimeLeft_30);
		float L_3 = Time_get_deltaTime_m298(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___screenLockTimeLeft_30 = ((float)((float)L_2-(float)L_3));
		float L_4 = (__this->___screenLockTimeLeft_30);
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		Screen_set_sleepTimeout_m299(NULL /*static, unused*/, ((int32_t)-2), /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void SpeechRecognition::LateUpdate()
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern const MethodInfo* HashSet_1_UnionWith_m279_MethodInfo_var;
extern "C" void SpeechRecognition_LateUpdate_m172 (SpeechRecognition_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		HashSet_1_UnionWith_m279_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		HashSet_1_t35 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___activeCommandsInThisFrame_38;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void System.Collections.Generic.HashSet`1<System.String>::Clear() */, L_0);
		HashSet_1_t35 * L_1 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___activeCommandsInThisFrame_38;
		HashSet_1_t35 * L_2 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___newCommands_37;
		NullCheck(L_1);
		HashSet_1_UnionWith_m279(L_1, L_2, /*hidden argument*/HashSet_1_UnionWith_m279_MethodInfo_var);
		HashSet_1_t35 * L_3 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___newCommands_37;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(7 /* System.Void System.Collections.Generic.HashSet`1<System.String>::Clear() */, L_3);
		return;
	}
}
// System.Void SpeechRecognition::OnApplicationPause(System.Boolean)
extern "C" void SpeechRecognition_OnApplicationPause_m173 (SpeechRecognition_t29 * __this, bool ___paused, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SpeechRecognition::OnApplicationQuit()
extern "C" void SpeechRecognition_OnApplicationQuit_m174 (SpeechRecognition_t29 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SpeechRecognition::AddSpeechRecognitionListeren(ISpeechRecognitionListener)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void SpeechRecognition_AddSpeechRecognitionListeren_m175 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		Object_t * L_1 = ___listener;
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<ISpeechRecognitionListener>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void SpeechRecognition::RemoveSpeechRecognitionListeren(ISpeechRecognitionListener)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void SpeechRecognition_RemoveSpeechRecognitionListeren_m176 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		Object_t * L_1 = ___listener;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<ISpeechRecognitionListener>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// System.Void SpeechRecognition::AddSpeechRecognitionListerenJs(ISpeechRecognitionListenerJs)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void SpeechRecognition_AddSpeechRecognitionListerenJs_m177 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		Object_t * L_1 = ___listener;
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<ISpeechRecognitionListenerJs>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void SpeechRecognition::RemoveSpeechRecognitionListerenJs(ISpeechRecognitionListenerJs)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void SpeechRecognition_RemoveSpeechRecognitionListerenJs_m178 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		Object_t * L_1 = ___listener;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<ISpeechRecognitionListenerJs>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// System.Void SpeechRecognition::SetTouchToListenZone(UnityEngine.Rect,System.Boolean)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void SpeechRecognition_SetTouchToListenZone_m179 (Object_t * __this /* static, unused */, Rect_t36  ___rect, bool ___isUISpace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___isUISpace;
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		float L_1 = Rect_get_x_m300((&___rect), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m301(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = Rect_get_y_m302((&___rect), /*hidden argument*/NULL);
		float L_4 = Rect_get_height_m303((&___rect), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m304((&___rect), /*hidden argument*/NULL);
		float L_6 = Rect_get_height_m303((&___rect), /*hidden argument*/NULL);
		Rect_t36  L_7 = {0};
		Rect__ctor_m286(&L_7, L_1, ((float)((float)((float)((float)(((float)L_2))-(float)L_3))-(float)L_4)), L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___touchToListenRect_26 = L_7;
		goto IL_0046;
	}

IL_0040:
	{
		Rect_t36  L_8 = ___rect;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___touchToListenRect_26 = L_8;
	}

IL_0046:
	{
		return;
	}
}
// System.Void SpeechRecognition::SetTouchToListenEnabled(System.Boolean)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" void SpeechRecognition_SetTouchToListenEnabled_m180 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___enabled;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___touchToListenEnabled_27 = L_0;
		bool L_1 = ___enabled;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_2 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_2);
		L_2->___autoRestart_13 = 0;
	}

IL_0017:
	{
		return;
	}
}
// System.Boolean SpeechRecognition::GetTouchToListenEnabled()
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" bool SpeechRecognition_GetTouchToListenEnabled_m181 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		bool L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___touchToListenEnabled_27;
		return L_0;
	}
}
// System.Boolean SpeechRecognition::IsRecognitionAvailable()
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" bool SpeechRecognition_IsRecognitionAvailable_m182 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		bool L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___isRecognitionAvailable_28;
		return L_0;
	}
}
// SpeechAnimationDictionary SpeechRecognition::GetSpeechAnimationDictionary()
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" SpeechAnimationDictionary_t26 * SpeechRecognition_GetSpeechAnimationDictionary_m183 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		SpeechAnimationDictionary_t26 * L_1 = (L_0->___speechDictionary_31);
		return L_1;
	}
}
// System.Boolean SpeechRecognition::CommandRecognized(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" bool SpeechRecognition_CommandRecognized_m184 (Object_t * __this /* static, unused */, String_t* ___commandName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		HashSet_1_t35 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___activeCommandsInThisFrame_38;
		String_t* L_1 = ___commandName;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.HashSet`1<System.String> SpeechRecognition::GetCommandRecognized()
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern "C" HashSet_1_t35 * SpeechRecognition_GetCommandRecognized_m185 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		HashSet_1_t35 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___activeCommandsInThisFrame_38;
		return L_0;
	}
}
// System.Void SpeechRecognition::StartListening()
extern "C" void SpeechRecognition_StartListening_m186 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SpeechRecognition::StopListening()
extern "C" void SpeechRecognition_StopListening_m187 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SpeechRecognition::OnBeginningOfSpeech(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnBeginningOfSpeech_m188 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t75  V_1 = {0};
	Object_t * V_2 = {0};
	Enumerator_t76  V_3 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		bool L_1 = (L_0->___enableEventLog_5);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Debug_Log_m280(NULL /*static, unused*/, (String_t*) &_stringLiteral49, /*hidden argument*/NULL);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_2 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_2);
		Enumerator_t75  L_3 = List_1_GetEnumerator_m305(L_2, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_1 = L_3;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0029:
		{
			Object_t * L_4 = Enumerator_get_Current_m306((&V_1), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_0 = L_4;
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void ISpeechRecognitionListener::OnBeginningOfSpeech() */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_5);
		}

IL_0037:
		{
			bool L_6 = Enumerator_MoveNext_m307((&V_1), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_6)
			{
				goto IL_0029;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_7 = V_1;
		Enumerator_t75  L_8 = L_7;
		Object_t * L_9 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_9);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_10 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_10);
		Enumerator_t76  L_11 = List_1_GetEnumerator_m308(L_10, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_3 = L_11;
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0064:
		{
			Object_t * L_12 = Enumerator_get_Current_m309((&V_3), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_2 = L_12;
			Object_t * L_13 = V_2;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void ISpeechRecognitionListenerJs::OnBeginningOfSpeech() */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_13);
		}

IL_0072:
		{
			bool L_14 = Enumerator_MoveNext_m310((&V_3), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_14)
			{
				goto IL_0064;
			}
		}

IL_007e:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_15 = V_3;
		Enumerator_t76  L_16 = L_15;
		Object_t * L_17 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_17);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_008f:
	{
		return;
	}
}
// System.Void SpeechRecognition::OnBufferReceived(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnBufferReceived_m189 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t54* V_0 = {0};
	Object_t * V_1 = {0};
	Enumerator_t75  V_2 = {0};
	Object_t * V_3 = {0};
	Enumerator_t76  V_4 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		bool L_1 = (L_0->___enableEventLog_5);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral50, L_2, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		Encoding_t30 * L_4 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___utf8_32;
		String_t* L_5 = ___message;
		NullCheck(L_4);
		ByteU5BU5D_t54* L_6 = (ByteU5BU5D_t54*)VirtFuncInvoker1< ByteU5BU5D_t54*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_0 = L_6;
		List_1_t32 * L_7 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_7);
		Enumerator_t75  L_8 = List_1_GetEnumerator_m305(L_7, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_2 = L_8;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_003b:
		{
			Object_t * L_9 = Enumerator_get_Current_m306((&V_2), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_1 = L_9;
			Object_t * L_10 = V_1;
			ByteU5BU5D_t54* L_11 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker1< ByteU5BU5D_t54* >::Invoke(1 /* System.Void ISpeechRecognitionListener::OnBufferReceived(System.Byte[]) */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_10, L_11);
		}

IL_004a:
		{
			bool L_12 = Enumerator_MoveNext_m307((&V_2), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_12)
			{
				goto IL_003b;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x67, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_13 = V_2;
		Enumerator_t75  L_14 = L_13;
		Object_t * L_15 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_15);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_16 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_16);
		Enumerator_t76  L_17 = List_1_GetEnumerator_m308(L_16, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_4 = L_17;
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0087;
		}

IL_0078:
		{
			Object_t * L_18 = Enumerator_get_Current_m309((&V_4), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_3 = L_18;
			Object_t * L_19 = V_3;
			String_t* L_20 = ___message;
			NullCheck(L_19);
			InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void ISpeechRecognitionListenerJs::OnBufferReceived(System.String) */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_19, L_20);
		}

IL_0087:
		{
			bool L_21 = Enumerator_MoveNext_m310((&V_4), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_21)
			{
				goto IL_0078;
			}
		}

IL_0093:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_0098);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0098;
	}

FINALLY_0098:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_22 = V_4;
		Enumerator_t76  L_23 = L_22;
		Object_t * L_24 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_24);
		IL2CPP_END_FINALLY(152)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(152)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00a5:
	{
		return;
	}
}
// System.Void SpeechRecognition::OnEndOfSpeech(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnEndOfSpeech_m190 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Enumerator_t75  V_1 = {0};
	Object_t * V_2 = {0};
	Enumerator_t76  V_3 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		bool L_1 = (L_0->___enableEventLog_5);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Debug_Log_m280(NULL /*static, unused*/, (String_t*) &_stringLiteral51, /*hidden argument*/NULL);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_2 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_2);
		Enumerator_t75  L_3 = List_1_GetEnumerator_m305(L_2, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_1 = L_3;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0029:
		{
			Object_t * L_4 = Enumerator_get_Current_m306((&V_1), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_0 = L_4;
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(2 /* System.Void ISpeechRecognitionListener::OnEndOfSpeech() */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_5);
		}

IL_0037:
		{
			bool L_6 = Enumerator_MoveNext_m307((&V_1), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_6)
			{
				goto IL_0029;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_7 = V_1;
		Enumerator_t75  L_8 = L_7;
		Object_t * L_9 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_9);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_10 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_10);
		Enumerator_t76  L_11 = List_1_GetEnumerator_m308(L_10, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_3 = L_11;
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0064:
		{
			Object_t * L_12 = Enumerator_get_Current_m309((&V_3), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_2 = L_12;
			Object_t * L_13 = V_2;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(2 /* System.Void ISpeechRecognitionListenerJs::OnEndOfSpeech() */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_13);
		}

IL_0072:
		{
			bool L_14 = Enumerator_MoveNext_m310((&V_3), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_14)
			{
				goto IL_0064;
			}
		}

IL_007e:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_15 = V_3;
		Enumerator_t76  L_16 = L_15;
		Object_t * L_17 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_17);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_008f:
	{
		return;
	}
}
// System.Void SpeechRecognition::OnError(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnError_m191 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	Enumerator_t75  V_2 = {0};
	Object_t * V_3 = {0};
	Enumerator_t76  V_4 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (-1);
		String_t* L_0 = ___message;
		bool L_1 = Int32_TryParse_m202(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00c8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_2 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_2);
		bool L_3 = (L_2->___enableEventLog_5);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		Dictionary_2_t34 * L_4 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(!0) */, L_4, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral52, L_6, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_8 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_8);
		Enumerator_t75  L_9 = List_1_GetEnumerator_m305(L_8, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_2 = L_9;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0062;
		}

IL_0048:
		{
			Object_t * L_10 = Enumerator_get_Current_m306((&V_2), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_1 = L_10;
			Object_t * L_11 = V_1;
			int32_t L_12 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
			Dictionary_2_t34 * L_13 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
			int32_t L_14 = V_0;
			NullCheck(L_13);
			String_t* L_15 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(!0) */, L_13, L_14);
			NullCheck(L_11);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void ISpeechRecognitionListener::OnError(System.Int32,System.String) */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_11, L_12, L_15);
		}

IL_0062:
		{
			bool L_16 = Enumerator_MoveNext_m307((&V_2), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_16)
			{
				goto IL_0048;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_17 = V_2;
		Enumerator_t75  L_18 = L_17;
		Object_t * L_19 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_19);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_007f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_20 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_20);
		Enumerator_t76  L_21 = List_1_GetEnumerator_m308(L_20, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_4 = L_21;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00aa;
		}

IL_0090:
		{
			Object_t * L_22 = Enumerator_get_Current_m309((&V_4), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_3 = L_22;
			Object_t * L_23 = V_3;
			int32_t L_24 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
			Dictionary_2_t34 * L_25 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___errorMessages_36;
			int32_t L_26 = V_0;
			NullCheck(L_25);
			String_t* L_27 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(!0) */, L_25, L_26);
			NullCheck(L_23);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void ISpeechRecognitionListenerJs::OnError(System.Int32,System.String) */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_23, L_24, L_27);
		}

IL_00aa:
		{
			bool L_28 = Enumerator_MoveNext_m310((&V_4), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_28)
			{
				goto IL_0090;
			}
		}

IL_00b6:
		{
			IL2CPP_LEAVE(0xC8, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_29 = V_4;
		Enumerator_t76  L_30 = L_29;
		Object_t * L_31 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_31);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00c8:
	{
		return;
	}
}
// System.Void SpeechRecognition::OnEvent(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t77_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m312_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnEvent_m192 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Dictionary_2__ctor_m312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t31* V_0 = {0};
	int32_t V_1 = 0;
	Dictionary_2_t77 * V_2 = {0};
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Enumerator_t75  V_5 = {0};
	Object_t * V_6 = {0};
	Enumerator_t76  V_7 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		bool L_1 = (L_0->___enableEventLog_5);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral53, L_2, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		String_t* L_4 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		StringU5BU5D_t31* L_5 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___newLineSplit_33;
		NullCheck(L_4);
		StringU5BU5D_t31* L_6 = String_Split_m311(L_4, L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		V_1 = (-1);
		Dictionary_2_t77 * L_7 = (Dictionary_2_t77 *)il2cpp_codegen_object_new (Dictionary_2_t77_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m312(L_7, /*hidden argument*/Dictionary_2__ctor_m312_MethodInfo_var);
		V_2 = L_7;
		StringU5BU5D_t31* L_8 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		bool L_10 = Int32_TryParse_m202(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_8, L_9)), (&V_1), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00f7;
		}
	}
	{
		V_3 = 1;
		goto IL_0067;
	}

IL_004a:
	{
		int32_t L_11 = V_3;
		StringU5BU5D_t31* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)((int32_t)L_11+(int32_t)1))) >= ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0063;
		}
	}
	{
		Dictionary_2_t77 * L_13 = V_2;
		StringU5BU5D_t31* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		StringU5BU5D_t31* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)));
		int32_t L_19 = ((int32_t)((int32_t)L_18+(int32_t)1));
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1) */, L_13, (*(String_t**)(String_t**)SZArrayLdElema(L_14, L_16)), (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19)));
	}

IL_0063:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)((int32_t)L_20+(int32_t)2));
	}

IL_0067:
	{
		int32_t L_21 = V_3;
		StringU5BU5D_t31* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_23 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_23);
		Enumerator_t75  L_24 = List_1_GetEnumerator_m305(L_23, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_5 = L_24;
	}

IL_007c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0081:
		{
			Object_t * L_25 = Enumerator_get_Current_m306((&V_5), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_4 = L_25;
			Object_t * L_26 = V_4;
			int32_t L_27 = V_1;
			Dictionary_2_t77 * L_28 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker2< int32_t, Dictionary_2_t77 * >::Invoke(4 /* System.Void ISpeechRecognitionListener::OnEvent(System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>) */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_26, L_27, L_28);
		}

IL_0093:
		{
			bool L_29 = Enumerator_MoveNext_m307((&V_5), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_29)
			{
				goto IL_0081;
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xB1, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_30 = V_5;
		Enumerator_t75  L_31 = L_30;
		Object_t * L_32 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_32);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_32);
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00b1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_33 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_33);
		Enumerator_t76  L_34 = List_1_GetEnumerator_m308(L_33, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_7 = L_34;
	}

IL_00bd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d4;
		}

IL_00c2:
		{
			Object_t * L_35 = Enumerator_get_Current_m309((&V_7), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_6 = L_35;
			Object_t * L_36 = V_6;
			int32_t L_37 = V_1;
			String_t* L_38 = ___message;
			NullCheck(L_36);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(4 /* System.Void ISpeechRecognitionListenerJs::OnEvent(System.Int32,System.String) */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_36, L_37, L_38);
		}

IL_00d4:
		{
			bool L_39 = Enumerator_MoveNext_m310((&V_7), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_39)
			{
				goto IL_00c2;
			}
		}

IL_00e0:
		{
			IL2CPP_LEAVE(0xF2, FINALLY_00e5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_00e5;
	}

FINALLY_00e5:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_40 = V_7;
		Enumerator_t76  L_41 = L_40;
		Object_t * L_42 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_42);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_42);
		IL2CPP_END_FINALLY(229)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(229)
	{
		IL2CPP_JUMP_TBL(0xF2, IL_00f2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00f2:
	{
		goto IL_0110;
	}

IL_00f7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_43 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_43);
		bool L_44 = (L_43->___enableDebugLog_4);
		if (!L_44)
		{
			goto IL_0110;
		}
	}
	{
		Debug_Log_m280(NULL /*static, unused*/, (String_t*) &_stringLiteral54, /*hidden argument*/NULL);
	}

IL_0110:
	{
		return;
	}
}
// System.Void SpeechRecognition::OnPartialResults(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t77_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m312_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnPartialResults_m193 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Dictionary_2__ctor_m312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t31* V_0 = {0};
	Dictionary_2_t77 * V_1 = {0};
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	Enumerator_t75  V_4 = {0};
	Object_t * V_5 = {0};
	Enumerator_t76  V_6 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		bool L_1 = (L_0->___enableEventLog_5);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral55, L_2, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		String_t* L_4 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		StringU5BU5D_t31* L_5 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___newLineSplit_33;
		NullCheck(L_4);
		StringU5BU5D_t31* L_6 = String_Split_m311(L_4, L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		Dictionary_2_t77 * L_7 = (Dictionary_2_t77 *)il2cpp_codegen_object_new (Dictionary_2_t77_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m312(L_7, /*hidden argument*/Dictionary_2__ctor_m312_MethodInfo_var);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0056;
	}

IL_0039:
	{
		int32_t L_8 = V_2;
		StringU5BU5D_t31* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)((int32_t)((int32_t)L_8+(int32_t)1))) >= ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t77 * L_10 = V_1;
		StringU5BU5D_t31* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		StringU5BU5D_t31* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15+(int32_t)1)));
		int32_t L_16 = ((int32_t)((int32_t)L_15+(int32_t)1));
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1) */, L_10, (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_13)), (*(String_t**)(String_t**)SZArrayLdElema(L_14, L_16)));
	}

IL_0052:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)((int32_t)L_17+(int32_t)2));
	}

IL_0056:
	{
		int32_t L_18 = V_2;
		StringU5BU5D_t31* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_20 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_20);
		Enumerator_t75  L_21 = List_1_GetEnumerator_m305(L_20, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_4 = L_21;
	}

IL_006b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_0070:
		{
			Object_t * L_22 = Enumerator_get_Current_m306((&V_4), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_3 = L_22;
			Object_t * L_23 = V_3;
			Dictionary_2_t77 * L_24 = V_1;
			NullCheck(L_23);
			InterfaceActionInvoker1< Dictionary_2_t77 * >::Invoke(5 /* System.Void ISpeechRecognitionListener::OnPartialResults(System.Collections.Generic.Dictionary`2<System.String,System.String>) */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_23, L_24);
		}

IL_007f:
		{
			bool L_25 = Enumerator_MoveNext_m307((&V_4), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_25)
			{
				goto IL_0070;
			}
		}

IL_008b:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_26 = V_4;
		Enumerator_t75  L_27 = L_26;
		Object_t * L_28 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_28);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_28);
		IL2CPP_END_FINALLY(144)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_009d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_29 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_29);
		Enumerator_t76  L_30 = List_1_GetEnumerator_m308(L_29, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_6 = L_30;
	}

IL_00a9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bf;
		}

IL_00ae:
		{
			Object_t * L_31 = Enumerator_get_Current_m309((&V_6), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_5 = L_31;
			Object_t * L_32 = V_5;
			String_t* L_33 = ___message;
			NullCheck(L_32);
			InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void ISpeechRecognitionListenerJs::OnPartialResults(System.String) */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_32, L_33);
		}

IL_00bf:
		{
			bool L_34 = Enumerator_MoveNext_m310((&V_6), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_34)
			{
				goto IL_00ae;
			}
		}

IL_00cb:
		{
			IL2CPP_LEAVE(0xDD, FINALLY_00d0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_00d0;
	}

FINALLY_00d0:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_35 = V_6;
		Enumerator_t76  L_36 = L_35;
		Object_t * L_37 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_37);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_37);
		IL2CPP_END_FINALLY(208)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(208)
	{
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00dd:
	{
		return;
	}
}
// System.Void SpeechRecognition::OnReadyForSpeech(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t77_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m312_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnReadyForSpeech_m194 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Dictionary_2__ctor_m312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t31* V_0 = {0};
	Dictionary_2_t77 * V_1 = {0};
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	Enumerator_t75  V_4 = {0};
	Object_t * V_5 = {0};
	Enumerator_t76  V_6 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		bool L_1 = (L_0->___enableEventLog_5);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral56, L_2, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		String_t* L_4 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		StringU5BU5D_t31* L_5 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___newLineSplit_33;
		NullCheck(L_4);
		StringU5BU5D_t31* L_6 = String_Split_m311(L_4, L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		Dictionary_2_t77 * L_7 = (Dictionary_2_t77 *)il2cpp_codegen_object_new (Dictionary_2_t77_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m312(L_7, /*hidden argument*/Dictionary_2__ctor_m312_MethodInfo_var);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0056;
	}

IL_0039:
	{
		int32_t L_8 = V_2;
		StringU5BU5D_t31* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)((int32_t)((int32_t)L_8+(int32_t)1))) >= ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t77 * L_10 = V_1;
		StringU5BU5D_t31* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		StringU5BU5D_t31* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15+(int32_t)1)));
		int32_t L_16 = ((int32_t)((int32_t)L_15+(int32_t)1));
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1) */, L_10, (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_13)), (*(String_t**)(String_t**)SZArrayLdElema(L_14, L_16)));
	}

IL_0052:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)((int32_t)L_17+(int32_t)2));
	}

IL_0056:
	{
		int32_t L_18 = V_2;
		StringU5BU5D_t31* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_20 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_20);
		Enumerator_t75  L_21 = List_1_GetEnumerator_m305(L_20, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_4 = L_21;
	}

IL_006b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_0070:
		{
			Object_t * L_22 = Enumerator_get_Current_m306((&V_4), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_3 = L_22;
			Object_t * L_23 = V_3;
			Dictionary_2_t77 * L_24 = V_1;
			NullCheck(L_23);
			InterfaceActionInvoker1< Dictionary_2_t77 * >::Invoke(6 /* System.Void ISpeechRecognitionListener::OnReadyForSpeech(System.Collections.Generic.Dictionary`2<System.String,System.String>) */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_23, L_24);
		}

IL_007f:
		{
			bool L_25 = Enumerator_MoveNext_m307((&V_4), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_25)
			{
				goto IL_0070;
			}
		}

IL_008b:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_26 = V_4;
		Enumerator_t75  L_27 = L_26;
		Object_t * L_28 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_28);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_28);
		IL2CPP_END_FINALLY(144)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_009d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_29 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_29);
		Enumerator_t76  L_30 = List_1_GetEnumerator_m308(L_29, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_6 = L_30;
	}

IL_00a9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bf;
		}

IL_00ae:
		{
			Object_t * L_31 = Enumerator_get_Current_m309((&V_6), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_5 = L_31;
			Object_t * L_32 = V_5;
			String_t* L_33 = ___message;
			NullCheck(L_32);
			InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void ISpeechRecognitionListenerJs::OnReadyForSpeech(System.String) */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_32, L_33);
		}

IL_00bf:
		{
			bool L_34 = Enumerator_MoveNext_m310((&V_6), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_34)
			{
				goto IL_00ae;
			}
		}

IL_00cb:
		{
			IL2CPP_LEAVE(0xDD, FINALLY_00d0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_00d0;
	}

FINALLY_00d0:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_35 = V_6;
		Enumerator_t76  L_36 = L_35;
		Object_t * L_37 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_37);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_37);
		IL2CPP_END_FINALLY(208)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(208)
	{
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00dd:
	{
		return;
	}
}
// System.Void SpeechRecognition::OnResults(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnResults_m195 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t31* V_0 = {0};
	Object_t * V_1 = {0};
	Enumerator_t75  V_2 = {0};
	Object_t * V_3 = {0};
	Enumerator_t76  V_4 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		bool L_1 = (L_0->___enableEventLog_5);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral57, L_2, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		String_t* L_4 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		StringU5BU5D_t31* L_5 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___newLineSplit_33;
		NullCheck(L_4);
		StringU5BU5D_t31* L_6 = String_Split_m311(L_4, L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t32 * L_7 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_7);
		Enumerator_t75  L_8 = List_1_GetEnumerator_m305(L_7, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_2 = L_8;
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004b;
		}

IL_003c:
		{
			Object_t * L_9 = Enumerator_get_Current_m306((&V_2), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_1 = L_9;
			Object_t * L_10 = V_1;
			StringU5BU5D_t31* L_11 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker1< StringU5BU5D_t31* >::Invoke(7 /* System.Void ISpeechRecognitionListener::OnResults(System.String[]) */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_10, L_11);
		}

IL_004b:
		{
			bool L_12 = Enumerator_MoveNext_m307((&V_2), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_12)
			{
				goto IL_003c;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_13 = V_2;
		Enumerator_t75  L_14 = L_13;
		Object_t * L_15 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_15);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_16 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_16);
		Enumerator_t76  L_17 = List_1_GetEnumerator_m308(L_16, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_4 = L_17;
	}

IL_0074:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0088;
		}

IL_0079:
		{
			Object_t * L_18 = Enumerator_get_Current_m309((&V_4), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_3 = L_18;
			Object_t * L_19 = V_3;
			String_t* L_20 = ___message;
			NullCheck(L_19);
			InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void ISpeechRecognitionListenerJs::OnResults(System.String) */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_19, L_20);
		}

IL_0088:
		{
			bool L_21 = Enumerator_MoveNext_m310((&V_4), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_21)
			{
				goto IL_0079;
			}
		}

IL_0094:
		{
			IL2CPP_LEAVE(0xA6, FINALLY_0099);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0099;
	}

FINALLY_0099:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_22 = V_4;
		Enumerator_t76  L_23 = L_22;
		Object_t * L_24 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_24);
		IL2CPP_END_FINALLY(153)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(153)
	{
		IL2CPP_JUMP_TBL(0xA6, IL_00a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00a6:
	{
		SpeechAnimationDictionary_t26 * L_25 = (__this->___speechDictionary_31);
		NullCheck(L_25);
		bool L_26 = (L_25->___enableDictionary_2);
		if (!L_26)
		{
			goto IL_00c8;
		}
	}
	{
		SpeechAnimationDictionary_t26 * L_27 = (__this->___speechDictionary_31);
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		SpeechAnimationDictionary_TestResults_m164(L_27, (&V_0), (&((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___newCommands_37), /*hidden argument*/NULL);
	}

IL_00c8:
	{
		bool L_28 = (__this->___disableScreenLockOnResult_16);
		if (!L_28)
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_29 = Screen_get_sleepTimeout_m313(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_29) == ((int32_t)(-1))))
		{
			goto IL_00e4;
		}
	}
	{
		Screen_set_sleepTimeout_m299(NULL /*static, unused*/, (-1), /*hidden argument*/NULL);
	}

IL_00e4:
	{
		float L_30 = (__this->___screenLockTimeout_17);
		__this->___screenLockTimeLeft_30 = L_30;
	}

IL_00f0:
	{
		return;
	}
}
// System.Void SpeechRecognition::OnRmsChanged(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnRmsChanged_m196 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Object_t * V_1 = {0};
	Enumerator_t75  V_2 = {0};
	Object_t * V_3 = {0};
	Enumerator_t76  V_4 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		SpeechRecognition_t29 * L_0 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		bool L_1 = (L_0->___enableEventLog_5);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral58, L_2, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		V_0 = (-1.0f);
		String_t* L_4 = ___message;
		bool L_5 = Single_TryParse_m204(NULL /*static, unused*/, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00ac;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_6 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_6);
		Enumerator_t75  L_7 = List_1_GetEnumerator_m305(L_6, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_2 = L_7;
	}

IL_003d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0051;
		}

IL_0042:
		{
			Object_t * L_8 = Enumerator_get_Current_m306((&V_2), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_1 = L_8;
			Object_t * L_9 = V_1;
			float L_10 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker1< float >::Invoke(8 /* System.Void ISpeechRecognitionListener::OnRmsChanged(System.Single) */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_9, L_10);
		}

IL_0051:
		{
			bool L_11 = Enumerator_MoveNext_m307((&V_2), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_11)
			{
				goto IL_0042;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_12 = V_2;
		Enumerator_t75  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_006e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_15 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_15);
		Enumerator_t76  L_16 = List_1_GetEnumerator_m308(L_15, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_4 = L_16;
	}

IL_007a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008e;
		}

IL_007f:
		{
			Object_t * L_17 = Enumerator_get_Current_m309((&V_4), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_3 = L_17;
			Object_t * L_18 = V_3;
			float L_19 = V_0;
			NullCheck(L_18);
			InterfaceActionInvoker1< float >::Invoke(8 /* System.Void ISpeechRecognitionListenerJs::OnRmsChanged(System.Single) */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_18, L_19);
		}

IL_008e:
		{
			bool L_20 = Enumerator_MoveNext_m310((&V_4), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_20)
			{
				goto IL_007f;
			}
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_21 = V_4;
		Enumerator_t76  L_22 = L_21;
		Object_t * L_23 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_23);
		IL2CPP_END_FINALLY(159)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00ac:
	{
		return;
	}
}
// System.Void SpeechRecognition::OnChangeState(System.String)
extern TypeInfo* SpeechRecognition_t29_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t75_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t46_il2cpp_TypeInfo_var;
extern TypeInfo* ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m305_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m306_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m307_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m308_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m309_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m310_MethodInfo_var;
extern "C" void SpeechRecognition_OnChangeState_m197 (SpeechRecognition_t29 * __this, String_t* ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpeechRecognition_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IDisposable_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		List_1_GetEnumerator_m305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		Enumerator_get_Current_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		List_1_GetEnumerator_m308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerator_get_Current_m309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_MoveNext_m310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	Enumerator_t75  V_2 = {0};
	Object_t * V_3 = {0};
	Enumerator_t76  V_4 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		String_t* L_0 = ___state;
		NullCheck(L_0);
		String_t* L_1 = String_Substring_m223(L_0, 0, 1, /*hidden argument*/NULL);
		bool L_2 = Int32_TryParse_m202(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_3 = V_0;
		__this->___state_19 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t32 * L_4 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListeners_34;
		NullCheck(L_4);
		Enumerator_t75  L_5 = List_1_GetEnumerator_m305(L_4, /*hidden argument*/List_1_GetEnumerator_m305_MethodInfo_var);
		V_2 = L_5;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_002d:
		{
			Object_t * L_6 = Enumerator_get_Current_m306((&V_2), /*hidden argument*/Enumerator_get_Current_m306_MethodInfo_var);
			V_1 = L_6;
			Object_t * L_7 = V_1;
			int32_t L_8 = (__this->___state_19);
			NullCheck(L_7);
			InterfaceActionInvoker1< int32_t >::Invoke(9 /* System.Void ISpeechRecognitionListener::OnChangeState(SpeechRecognition/State) */, ISpeechRecognitionListener_t42_il2cpp_TypeInfo_var, L_7, L_8);
		}

IL_0041:
		{
			bool L_9 = Enumerator_MoveNext_m307((&V_2), /*hidden argument*/Enumerator_MoveNext_m307_MethodInfo_var);
			if (L_9)
			{
				goto IL_002d;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Enumerator_t75  L_10 = V_2;
		Enumerator_t75  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t75_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_12);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_005e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpeechRecognition_t29_il2cpp_TypeInfo_var);
		List_1_t33 * L_13 = ((SpeechRecognition_t29_StaticFields*)SpeechRecognition_t29_il2cpp_TypeInfo_var->static_fields)->___eventListenersJs_35;
		NullCheck(L_13);
		Enumerator_t76  L_14 = List_1_GetEnumerator_m308(L_13, /*hidden argument*/List_1_GetEnumerator_m308_MethodInfo_var);
		V_4 = L_14;
	}

IL_006a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0083;
		}

IL_006f:
		{
			Object_t * L_15 = Enumerator_get_Current_m309((&V_4), /*hidden argument*/Enumerator_get_Current_m309_MethodInfo_var);
			V_3 = L_15;
			Object_t * L_16 = V_3;
			int32_t L_17 = (__this->___state_19);
			NullCheck(L_16);
			InterfaceActionInvoker1< int32_t >::Invoke(9 /* System.Void ISpeechRecognitionListenerJs::OnChangeState(System.Int32) */, ISpeechRecognitionListenerJs_t43_il2cpp_TypeInfo_var, L_16, L_17);
		}

IL_0083:
		{
			bool L_18 = Enumerator_MoveNext_m310((&V_4), /*hidden argument*/Enumerator_MoveNext_m310_MethodInfo_var);
			if (L_18)
			{
				goto IL_006f;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_0094);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t45 *)e.ex;
		goto FINALLY_0094;
	}

FINALLY_0094:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_19 = V_4;
		Enumerator_t76  L_20 = L_19;
		Object_t * L_21 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_21);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t46_il2cpp_TypeInfo_var, L_21);
		IL2CPP_END_FINALLY(148)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(148)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t45 *)
	}

IL_00a1:
	{
		bool L_22 = (__this->___enableDebugLog_4);
		if (!L_22)
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_23 = ___state;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m215(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_25 = ___state;
		NullCheck(L_25);
		String_t* L_26 = String_Substring_m314(L_25, 1, /*hidden argument*/NULL);
		Debug_Log_m280(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		return;
	}
}
// System.String SpeechRecognition::loadFile(System.String)
extern const Il2CppType* TextAsset_t78_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextAsset_t78_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* SpeechRecognition_loadFile_m198 (SpeechRecognition_t29 * __this, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextAsset_t78_0_0_0_var = il2cpp_codegen_type_from_index(61);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		TextAsset_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		Exception_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	TextAsset_t78 * V_0 = {0};
	String_t* V_1 = {0};
	Exception_t45 * V_2 = {0};
	String_t* V_3 = {0};
	Exception_t45 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t45 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Debug_Log_m280(NULL /*static, unused*/, (String_t*) &_stringLiteral59, /*hidden argument*/NULL);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___fileName;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_1 = Type_GetTypeFromHandle_m315(NULL /*static, unused*/, LoadTypeToken(TextAsset_t78_0_0_0_var), /*hidden argument*/NULL);
			Object_t74 * L_2 = Resources_Load_m316(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
			V_0 = ((TextAsset_t78 *)Castclass(L_2, TextAsset_t78_il2cpp_TypeInfo_var));
			TextAsset_t78 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = TextAsset_get_text_m317(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
			String_t* L_5 = V_1;
			V_3 = L_5;
			goto IL_0059;
		}

IL_002e:
		{
			; // IL_002e: leave IL_0059
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t45 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t45_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0033;
		throw e;
	}

CATCH_0033:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t45 *)__exception_local);
			Exception_t45 * L_6 = V_2;
			NullCheck(L_6);
			String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_6);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_8 = String_Concat_m213(NULL /*static, unused*/, (String_t*) &_stringLiteral60, L_7, /*hidden argument*/NULL);
			Debug_Log_m280(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			V_3 = L_9;
			goto IL_0059;
		}

IL_0054:
		{
			; // IL_0054: leave IL_0059
		}
	} // end catch (depth: 1)

IL_0059:
	{
		String_t* L_10 = V_3;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
