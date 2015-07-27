#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t354;
struct GcScoreData_t354_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t366;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t366 * GcScoreData_ToScore_m1650 (GcScoreData_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t354_marshal(const GcScoreData_t354& unmarshaled, GcScoreData_t354_marshaled& marshaled);
void GcScoreData_t354_marshal_back(const GcScoreData_t354_marshaled& marshaled, GcScoreData_t354& unmarshaled);
void GcScoreData_t354_marshal_cleanup(GcScoreData_t354_marshaled& marshaled);
