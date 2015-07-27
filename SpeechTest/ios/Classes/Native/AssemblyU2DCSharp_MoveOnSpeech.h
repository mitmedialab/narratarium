#pragma once
#include <stdint.h>
// UnityEngine.GUIStyle
struct GUIStyle_t112;
// MediaPlayerCtrl
struct MediaPlayerCtrl_t95;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// MoveOnSpeech
struct  MoveOnSpeech_t115  : public MonoBehaviour_t27
{
	// UnityEngine.GUIStyle MoveOnSpeech::fontStyle
	GUIStyle_t112 * ___fontStyle_2;
	// MediaPlayerCtrl MoveOnSpeech::scrMedia
	MediaPlayerCtrl_t95 * ___scrMedia_3;
	// System.String MoveOnSpeech::lastResults
	String_t* ___lastResults_4;
	// System.String MoveOnSpeech::lastResults2
	String_t* ___lastResults2_5;
	// UnityEngine.Vector2 MoveOnSpeech::direction
	Vector2_t22  ___direction_6;
	// UnityEngine.Vector2 MoveOnSpeech::speed
	Vector2_t22  ___speed_7;
	// UnityEngine.Vector2 MoveOnSpeech::movement
	Vector2_t22  ___movement_8;
	// UnityEngine.Vector2 MoveOnSpeech::runningSpeed
	Vector2_t22  ___runningSpeed_9;
	// UnityEngine.Vector2 MoveOnSpeech::walkingSpeed
	Vector2_t22  ___walkingSpeed_10;
	// System.Single MoveOnSpeech::dist
	float ___dist_11;
	// System.Single MoveOnSpeech::leftBorder
	float ___leftBorder_12;
	// System.Single MoveOnSpeech::rightBorder
	float ___rightBorder_13;
	// System.Single MoveOnSpeech::buffer
	float ___buffer_14;
	// System.Single MoveOnSpeech::topBorder
	float ___topBorder_15;
	// System.Single MoveOnSpeech::bottomBorder
	float ___bottomBorder_16;
	// System.Boolean MoveOnSpeech::facingRight
	bool ___facingRight_17;
	// System.Boolean MoveOnSpeech::running
	bool ___running_18;
	// System.Boolean MoveOnSpeech::walking
	bool ___walking_19;
	// System.String MoveOnSpeech::lastAnimation
	String_t* ___lastAnimation_20;
};
