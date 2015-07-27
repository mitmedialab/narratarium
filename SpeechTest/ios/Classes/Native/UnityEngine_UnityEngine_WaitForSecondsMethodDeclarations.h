#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t160;
struct WaitForSeconds_t160_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m643 (WaitForSeconds_t160 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t160_marshal(const WaitForSeconds_t160& unmarshaled, WaitForSeconds_t160_marshaled& marshaled);
void WaitForSeconds_t160_marshal_back(const WaitForSeconds_t160_marshaled& marshaled, WaitForSeconds_t160& unmarshaled);
void WaitForSeconds_t160_marshal_cleanup(WaitForSeconds_t160_marshaled& marshaled);
