#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t190;
struct Gradient_t190_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m755 (Gradient_t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m756 (Gradient_t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m757 (Gradient_t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m758 (Gradient_t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t190_marshal(const Gradient_t190& unmarshaled, Gradient_t190_marshaled& marshaled);
void Gradient_t190_marshal_back(const Gradient_t190_marshaled& marshaled, Gradient_t190& unmarshaled);
void Gradient_t190_marshal_cleanup(Gradient_t190_marshaled& marshaled);
