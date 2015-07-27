#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t274;
struct HumanBone_t274_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m1338 (HumanBone_t274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m1339 (HumanBone_t274 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m1340 (HumanBone_t274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m1341 (HumanBone_t274 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t274_marshal(const HumanBone_t274& unmarshaled, HumanBone_t274_marshaled& marshaled);
void HumanBone_t274_marshal_back(const HumanBone_t274_marshaled& marshaled, HumanBone_t274& unmarshaled);
void HumanBone_t274_marshal_cleanup(HumanBone_t274_marshaled& marshaled);
