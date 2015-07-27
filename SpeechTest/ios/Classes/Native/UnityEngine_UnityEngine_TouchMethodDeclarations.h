#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t121;
struct Touch_t121_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t22  Touch_get_deltaPosition_m527 (Touch_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t121_marshal(const Touch_t121& unmarshaled, Touch_t121_marshaled& marshaled);
void Touch_t121_marshal_back(const Touch_t121_marshaled& marshaled, Touch_t121& unmarshaled);
void Touch_t121_marshal_cleanup(Touch_t121_marshaled& marshaled);
