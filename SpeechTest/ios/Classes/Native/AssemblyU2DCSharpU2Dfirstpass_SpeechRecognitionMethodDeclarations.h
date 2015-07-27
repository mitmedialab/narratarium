#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpeechRecognition
struct SpeechRecognition_t29;
// ISpeechRecognitionListener
struct ISpeechRecognitionListener_t42;
// ISpeechRecognitionListenerJs
struct ISpeechRecognitionListenerJs_t43;
// SpeechAnimationDictionary
struct SpeechAnimationDictionary_t26;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t35;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void SpeechRecognition::.ctor()
extern "C" void SpeechRecognition__ctor_m168 (SpeechRecognition_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::.cctor()
extern "C" void SpeechRecognition__cctor_m169 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::Awake()
extern "C" void SpeechRecognition_Awake_m170 (SpeechRecognition_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::Update()
extern "C" void SpeechRecognition_Update_m171 (SpeechRecognition_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::LateUpdate()
extern "C" void SpeechRecognition_LateUpdate_m172 (SpeechRecognition_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnApplicationPause(System.Boolean)
extern "C" void SpeechRecognition_OnApplicationPause_m173 (SpeechRecognition_t29 * __this, bool ___paused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnApplicationQuit()
extern "C" void SpeechRecognition_OnApplicationQuit_m174 (SpeechRecognition_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::AddSpeechRecognitionListeren(ISpeechRecognitionListener)
extern "C" void SpeechRecognition_AddSpeechRecognitionListeren_m175 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::RemoveSpeechRecognitionListeren(ISpeechRecognitionListener)
extern "C" void SpeechRecognition_RemoveSpeechRecognitionListeren_m176 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::AddSpeechRecognitionListerenJs(ISpeechRecognitionListenerJs)
extern "C" void SpeechRecognition_AddSpeechRecognitionListerenJs_m177 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::RemoveSpeechRecognitionListerenJs(ISpeechRecognitionListenerJs)
extern "C" void SpeechRecognition_RemoveSpeechRecognitionListerenJs_m178 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::SetTouchToListenZone(UnityEngine.Rect,System.Boolean)
extern "C" void SpeechRecognition_SetTouchToListenZone_m179 (Object_t * __this /* static, unused */, Rect_t36  ___rect, bool ___isUISpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::SetTouchToListenEnabled(System.Boolean)
extern "C" void SpeechRecognition_SetTouchToListenEnabled_m180 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpeechRecognition::GetTouchToListenEnabled()
extern "C" bool SpeechRecognition_GetTouchToListenEnabled_m181 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpeechRecognition::IsRecognitionAvailable()
extern "C" bool SpeechRecognition_IsRecognitionAvailable_m182 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpeechAnimationDictionary SpeechRecognition::GetSpeechAnimationDictionary()
extern "C" SpeechAnimationDictionary_t26 * SpeechRecognition_GetSpeechAnimationDictionary_m183 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpeechRecognition::CommandRecognized(System.String)
extern "C" bool SpeechRecognition_CommandRecognized_m184 (Object_t * __this /* static, unused */, String_t* ___commandName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> SpeechRecognition::GetCommandRecognized()
extern "C" HashSet_1_t35 * SpeechRecognition_GetCommandRecognized_m185 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::StartListening()
extern "C" void SpeechRecognition_StartListening_m186 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::StopListening()
extern "C" void SpeechRecognition_StopListening_m187 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnBeginningOfSpeech(System.String)
extern "C" void SpeechRecognition_OnBeginningOfSpeech_m188 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnBufferReceived(System.String)
extern "C" void SpeechRecognition_OnBufferReceived_m189 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnEndOfSpeech(System.String)
extern "C" void SpeechRecognition_OnEndOfSpeech_m190 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnError(System.String)
extern "C" void SpeechRecognition_OnError_m191 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnEvent(System.String)
extern "C" void SpeechRecognition_OnEvent_m192 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnPartialResults(System.String)
extern "C" void SpeechRecognition_OnPartialResults_m193 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnReadyForSpeech(System.String)
extern "C" void SpeechRecognition_OnReadyForSpeech_m194 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnResults(System.String)
extern "C" void SpeechRecognition_OnResults_m195 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnRmsChanged(System.String)
extern "C" void SpeechRecognition_OnRmsChanged_m196 (SpeechRecognition_t29 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechRecognition::OnChangeState(System.String)
extern "C" void SpeechRecognition_OnChangeState_m197 (SpeechRecognition_t29 * __this, String_t* ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpeechRecognition::loadFile(System.String)
extern "C" String_t* SpeechRecognition_loadFile_m198 (SpeechRecognition_t29 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
