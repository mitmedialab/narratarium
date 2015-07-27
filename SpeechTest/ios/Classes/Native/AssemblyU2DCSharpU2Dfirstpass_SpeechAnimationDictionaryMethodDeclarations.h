#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpeechAnimationDictionary
struct SpeechAnimationDictionary_t26;
// System.String[]
struct StringU5BU5D_t31;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t35;
// System.String
struct String_t;

// System.Void SpeechAnimationDictionary::.ctor()
extern "C" void SpeechAnimationDictionary__ctor_m162 (SpeechAnimationDictionary_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechAnimationDictionary::ReloadDictionary()
extern "C" void SpeechAnimationDictionary_ReloadDictionary_m163 (SpeechAnimationDictionary_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechAnimationDictionary::TestResults(System.String[]&,System.Collections.Generic.HashSet`1<System.String>&)
extern "C" void SpeechAnimationDictionary_TestResults_m164 (SpeechAnimationDictionary_t26 * __this, StringU5BU5D_t31** ___speechResults, HashSet_1_t35 ** ___foundCommands, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechAnimationDictionary::loadDictionary(System.String)
extern "C" void SpeechAnimationDictionary_loadDictionary_m165 (SpeechAnimationDictionary_t26 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechAnimationDictionary::Start()
extern "C" void SpeechAnimationDictionary_Start_m166 (SpeechAnimationDictionary_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechAnimationDictionary::Update()
extern "C" void SpeechAnimationDictionary_Update_m167 (SpeechAnimationDictionary_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
