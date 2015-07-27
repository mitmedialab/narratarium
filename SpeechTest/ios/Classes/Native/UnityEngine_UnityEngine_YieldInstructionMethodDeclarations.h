#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t161;
struct YieldInstruction_t161_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m1254 (YieldInstruction_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t161_marshal(const YieldInstruction_t161& unmarshaled, YieldInstruction_t161_marshaled& marshaled);
void YieldInstruction_t161_marshal_back(const YieldInstruction_t161_marshaled& marshaled, YieldInstruction_t161& unmarshaled);
void YieldInstruction_t161_marshal_cleanup(YieldInstruction_t161_marshaled& marshaled);
