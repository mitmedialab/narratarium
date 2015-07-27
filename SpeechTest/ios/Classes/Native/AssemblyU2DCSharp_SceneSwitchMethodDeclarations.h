#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SceneSwitch
struct SceneSwitch_t116;
// System.String[]
struct StringU5BU5D_t31;
// System.Byte[]
struct ByteU5BU5D_t54;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t77;
// SpeechRecognition/State
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechRecognition_State.h"

// System.Void SceneSwitch::.ctor()
extern "C" void SceneSwitch__ctor_m508 (SceneSwitch_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::Start()
extern "C" void SceneSwitch_Start_m509 (SceneSwitch_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnResults(System.String[])
extern "C" void SceneSwitch_OnResults_m510 (SceneSwitch_t116 * __this, StringU5BU5D_t31* ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::Update()
extern "C" void SceneSwitch_Update_m511 (SceneSwitch_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnGUI()
extern "C" void SceneSwitch_OnGUI_m512 (SceneSwitch_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnBeginningOfSpeech()
extern "C" void SceneSwitch_OnBeginningOfSpeech_m513 (SceneSwitch_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnBufferReceived(System.Byte[])
extern "C" void SceneSwitch_OnBufferReceived_m514 (SceneSwitch_t116 * __this, ByteU5BU5D_t54* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnEndOfSpeech()
extern "C" void SceneSwitch_OnEndOfSpeech_m515 (SceneSwitch_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnError(System.Int32,System.String)
extern "C" void SceneSwitch_OnError_m516 (SceneSwitch_t116 * __this, int32_t ___error, String_t* ___errorMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnEvent(System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void SceneSwitch_OnEvent_m517 (SceneSwitch_t116 * __this, int32_t ___eventType, Dictionary_2_t77 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnPartialResults(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void SceneSwitch_OnPartialResults_m518 (SceneSwitch_t116 * __this, Dictionary_2_t77 * ___partialResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnReadyForSpeech(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void SceneSwitch_OnReadyForSpeech_m519 (SceneSwitch_t116 * __this, Dictionary_2_t77 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnRmsChanged(System.Single)
extern "C" void SceneSwitch_OnRmsChanged_m520 (SceneSwitch_t116 * __this, float ___rmsdB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneSwitch::OnChangeState(SpeechRecognition/State)
extern "C" void SceneSwitch_OnChangeState_m521 (SceneSwitch_t116 * __this, int32_t ___newState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
