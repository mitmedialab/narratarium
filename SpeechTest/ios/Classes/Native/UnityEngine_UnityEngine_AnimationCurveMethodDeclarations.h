#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t268;
struct AnimationCurve_t268_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t409;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m1314 (AnimationCurve_t268 * __this, KeyframeU5BU5D_t409* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m1315 (AnimationCurve_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m1316 (AnimationCurve_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m1317 (AnimationCurve_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m1318 (AnimationCurve_t268 * __this, KeyframeU5BU5D_t409* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t268_marshal(const AnimationCurve_t268& unmarshaled, AnimationCurve_t268_marshaled& marshaled);
void AnimationCurve_t268_marshal_back(const AnimationCurve_t268_marshaled& marshaled, AnimationCurve_t268& unmarshaled);
void AnimationCurve_t268_marshal_cleanup(AnimationCurve_t268_marshaled& marshaled);
