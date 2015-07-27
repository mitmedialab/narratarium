#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t164;
struct Coroutine_t164_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m646 (Coroutine_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m647 (Coroutine_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m648 (Coroutine_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t164_marshal(const Coroutine_t164& unmarshaled, Coroutine_t164_marshaled& marshaled);
void Coroutine_t164_marshal_back(const Coroutine_t164_marshaled& marshaled, Coroutine_t164& unmarshaled);
void Coroutine_t164_marshal_cleanup(Coroutine_t164_marshaled& marshaled);
