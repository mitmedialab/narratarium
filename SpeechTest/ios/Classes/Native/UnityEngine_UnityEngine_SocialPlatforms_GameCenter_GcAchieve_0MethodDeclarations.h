#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t353;
struct GcAchievementData_t353_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t364;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t364 * GcAchievementData_ToAchievement_m1649 (GcAchievementData_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t353_marshal(const GcAchievementData_t353& unmarshaled, GcAchievementData_t353_marshaled& marshaled);
void GcAchievementData_t353_marshal_back(const GcAchievementData_t353_marshaled& marshaled, GcAchievementData_t353& unmarshaled);
void GcAchievementData_t353_marshal_cleanup(GcAchievementData_t353_marshaled& marshaled);
