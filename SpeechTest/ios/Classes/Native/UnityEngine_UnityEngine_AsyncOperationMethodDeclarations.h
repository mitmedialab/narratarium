#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t153;
struct AsyncOperation_t153_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m1151 (AsyncOperation_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m1152 (AsyncOperation_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m1153 (AsyncOperation_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t153_marshal(const AsyncOperation_t153& unmarshaled, AsyncOperation_t153_marshaled& marshaled);
void AsyncOperation_t153_marshal_back(const AsyncOperation_t153_marshaled& marshaled, AsyncOperation_t153& unmarshaled);
void AsyncOperation_t153_marshal_cleanup(AsyncOperation_t153_marshaled& marshaled);
