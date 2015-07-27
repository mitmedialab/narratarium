#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t23;
// System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation>
struct Dictionary_2_t24;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>>
struct Dictionary_2_t25;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpeechAnimationDictionary
struct  SpeechAnimationDictionary_t26  : public MonoBehaviour_t27
{
	// System.Boolean SpeechAnimationDictionary::enableDictionary
	bool ___enableDictionary_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> SpeechAnimationDictionary::voiceCommands
	Dictionary_2_t23 * ___voiceCommands_3;
	// System.Collections.Generic.Dictionary`2<System.String,SpeechAnimationDictionary/Animation> SpeechAnimationDictionary::commandAnimations
	Dictionary_2_t24 * ___commandAnimations_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<System.String>> SpeechAnimationDictionary::revertedCommands
	Dictionary_2_t25 * ___revertedCommands_5;
};
