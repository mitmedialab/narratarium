#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MoveOnSpeech
struct MoveOnSpeech_t115;
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

// System.Void MoveOnSpeech::.ctor()
extern "C" void MoveOnSpeech__ctor_m493 (MoveOnSpeech_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::Start()
extern "C" void MoveOnSpeech_Start_m494 (MoveOnSpeech_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnResults(System.String[])
extern "C" void MoveOnSpeech_OnResults_m495 (MoveOnSpeech_t115 * __this, StringU5BU5D_t31* ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::Update()
extern "C" void MoveOnSpeech_Update_m496 (MoveOnSpeech_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnGUI()
extern "C" void MoveOnSpeech_OnGUI_m497 (MoveOnSpeech_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::FixedUpdate()
extern "C" void MoveOnSpeech_FixedUpdate_m498 (MoveOnSpeech_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnBeginningOfSpeech()
extern "C" void MoveOnSpeech_OnBeginningOfSpeech_m499 (MoveOnSpeech_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnBufferReceived(System.Byte[])
extern "C" void MoveOnSpeech_OnBufferReceived_m500 (MoveOnSpeech_t115 * __this, ByteU5BU5D_t54* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnEndOfSpeech()
extern "C" void MoveOnSpeech_OnEndOfSpeech_m501 (MoveOnSpeech_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnError(System.Int32,System.String)
extern "C" void MoveOnSpeech_OnError_m502 (MoveOnSpeech_t115 * __this, int32_t ___error, String_t* ___errorMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnEvent(System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void MoveOnSpeech_OnEvent_m503 (MoveOnSpeech_t115 * __this, int32_t ___eventType, Dictionary_2_t77 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnPartialResults(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void MoveOnSpeech_OnPartialResults_m504 (MoveOnSpeech_t115 * __this, Dictionary_2_t77 * ___partialResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnReadyForSpeech(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void MoveOnSpeech_OnReadyForSpeech_m505 (MoveOnSpeech_t115 * __this, Dictionary_2_t77 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnRmsChanged(System.Single)
extern "C" void MoveOnSpeech_OnRmsChanged_m506 (MoveOnSpeech_t115 * __this, float ___rmsdB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveOnSpeech::OnChangeState(SpeechRecognition/State)
extern "C" void MoveOnSpeech_OnChangeState_m507 (MoveOnSpeech_t115 * __this, int32_t ___newState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
