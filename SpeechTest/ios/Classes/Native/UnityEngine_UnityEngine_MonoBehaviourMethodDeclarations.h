#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t27;
// UnityEngine.Coroutine
struct Coroutine_t164;
struct Coroutine_t164_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t37;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m268 (MonoBehaviour_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t164 * MonoBehaviour_StartCoroutine_m548 (MonoBehaviour_t27 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t164 * MonoBehaviour_StartCoroutine_Auto_m1222 (MonoBehaviour_t27 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
