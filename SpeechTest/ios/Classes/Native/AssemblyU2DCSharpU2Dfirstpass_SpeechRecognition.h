#pragma once
#include <stdint.h>
// System.String
struct String_t;
// SpeechRecognition
struct SpeechRecognition_t29;
// SpeechAnimationDictionary
struct SpeechAnimationDictionary_t26;
// System.Text.Encoding
struct Encoding_t30;
// System.String[]
struct StringU5BU5D_t31;
// System.Collections.Generic.List`1<ISpeechRecognitionListener>
struct List_1_t32;
// System.Collections.Generic.List`1<ISpeechRecognitionListenerJs>
struct List_1_t33;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t34;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t35;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpeechRecognition/State
#include "AssemblyU2DCSharpU2Dfirstpass_SpeechRecognition_State.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// SpeechRecognition
struct  SpeechRecognition_t29  : public MonoBehaviour_t27
{
	// System.Int32 SpeechRecognition::maxResults
	int32_t ___maxResults_2;
	// System.String SpeechRecognition::preferredLanguage
	String_t* ___preferredLanguage_3;
	// System.Boolean SpeechRecognition::enableDebugLog
	bool ___enableDebugLog_4;
	// System.Boolean SpeechRecognition::enableEventLog
	bool ___enableEventLog_5;
	// System.Boolean SpeechRecognition::enableOnBeginningOfSpeech
	bool ___enableOnBeginningOfSpeech_6;
	// System.Boolean SpeechRecognition::enableOnBufferReceived
	bool ___enableOnBufferReceived_7;
	// System.Boolean SpeechRecognition::enableOnEndOfSpeech
	bool ___enableOnEndOfSpeech_8;
	// System.Boolean SpeechRecognition::enableOnEvent
	bool ___enableOnEvent_9;
	// System.Boolean SpeechRecognition::enableOnPartialResults
	bool ___enableOnPartialResults_10;
	// System.Boolean SpeechRecognition::enableOnReadyForSpeech
	bool ___enableOnReadyForSpeech_11;
	// System.Boolean SpeechRecognition::enableOnRmsChanged
	bool ___enableOnRmsChanged_12;
	// System.Boolean SpeechRecognition::autoRestart
	bool ___autoRestart_13;
	// System.Boolean SpeechRecognition::autoRestartOnResume
	bool ___autoRestartOnResume_14;
	// System.Single SpeechRecognition::autoRestartAmpThreshold
	float ___autoRestartAmpThreshold_15;
	// System.Boolean SpeechRecognition::disableScreenLockOnResult
	bool ___disableScreenLockOnResult_16;
	// System.Single SpeechRecognition::screenLockTimeout
	float ___screenLockTimeout_17;
	// System.String SpeechRecognition::fileName
	String_t* ___fileName_18;
	// SpeechRecognition/State SpeechRecognition::state
	int32_t ___state_19;
	// System.Single SpeechRecognition::screenLockTimeLeft
	float ___screenLockTimeLeft_30;
	// SpeechAnimationDictionary SpeechRecognition::speechDictionary
	SpeechAnimationDictionary_t26 * ___speechDictionary_31;
};
struct SpeechRecognition_t29_StaticFields{
	// System.Int32 SpeechRecognition::NOT_INITIALIZED
	int32_t ___NOT_INITIALIZED_20;
	// System.Int32 SpeechRecognition::IDLE
	int32_t ___IDLE_21;
	// System.Int32 SpeechRecognition::LISTENING_TO_SOUND
	int32_t ___LISTENING_TO_SOUND_22;
	// System.Int32 SpeechRecognition::LISTENING_TO_SPEECH
	int32_t ___LISTENING_TO_SPEECH_23;
	// System.Int32 SpeechRecognition::LISTINING_TO_SPEECH_INIT
	int32_t ___LISTINING_TO_SPEECH_INIT_24;
	// System.Int32 SpeechRecognition::STOPPED_LISTENING
	int32_t ___STOPPED_LISTENING_25;
	// UnityEngine.Rect SpeechRecognition::touchToListenRect
	Rect_t36  ___touchToListenRect_26;
	// System.Boolean SpeechRecognition::touchToListenEnabled
	bool ___touchToListenEnabled_27;
	// System.Boolean SpeechRecognition::isRecognitionAvailable
	bool ___isRecognitionAvailable_28;
	// SpeechRecognition SpeechRecognition::instance
	SpeechRecognition_t29 * ___instance_29;
	// System.Text.Encoding SpeechRecognition::utf8
	Encoding_t30 * ___utf8_32;
	// System.String[] SpeechRecognition::newLineSplit
	StringU5BU5D_t31* ___newLineSplit_33;
	// System.Collections.Generic.List`1<ISpeechRecognitionListener> SpeechRecognition::eventListeners
	List_1_t32 * ___eventListeners_34;
	// System.Collections.Generic.List`1<ISpeechRecognitionListenerJs> SpeechRecognition::eventListenersJs
	List_1_t33 * ___eventListenersJs_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> SpeechRecognition::errorMessages
	Dictionary_2_t34 * ___errorMessages_36;
	// System.Collections.Generic.HashSet`1<System.String> SpeechRecognition::newCommands
	HashSet_1_t35 * ___newCommands_37;
	// System.Collections.Generic.HashSet`1<System.String> SpeechRecognition::activeCommandsInThisFrame
	HashSet_1_t35 * ___activeCommandsInThisFrame_38;
};
