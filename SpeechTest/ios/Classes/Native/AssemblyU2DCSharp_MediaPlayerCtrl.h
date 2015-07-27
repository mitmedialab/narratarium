#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t72;
// UnityEngine.Texture2D
struct Texture2D_t109;
// MediaPlayerCtrl/VideoReady
struct VideoReady_t105;
// MediaPlayerCtrl/VideoEnd
struct VideoEnd_t103;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MediaPlayerCtrl/MEDIAPLAYER_STATE
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_STATE.h"
// MediaPlayerCtrl/MEDIA_SCALE
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIA_SCALE.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// MediaPlayerCtrl
struct  MediaPlayerCtrl_t95  : public MonoBehaviour_t27
{
	// System.String MediaPlayerCtrl::m_strFileName
	String_t* ___m_strFileName_2;
	// UnityEngine.GameObject MediaPlayerCtrl::m_TargetMaterial
	GameObject_t72 * ___m_TargetMaterial_3;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTexture
	Texture2D_t109 * ___m_VideoTexture_4;
	// UnityEngine.Texture2D MediaPlayerCtrl::m_VideoTextureDummy
	Texture2D_t109 * ___m_VideoTextureDummy_5;
	// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::m_CurrentState
	int32_t ___m_CurrentState_6;
	// System.Int32 MediaPlayerCtrl::m_iCurrentSeekPosition
	int32_t ___m_iCurrentSeekPosition_7;
	// System.Boolean MediaPlayerCtrl::m_bFullScreen
	bool ___m_bFullScreen_8;
	// System.Boolean MediaPlayerCtrl::m_bSupportRockchip
	bool ___m_bSupportRockchip_9;
	// MediaPlayerCtrl/VideoReady MediaPlayerCtrl::OnReady
	VideoReady_t105 * ___OnReady_10;
	// MediaPlayerCtrl/VideoEnd MediaPlayerCtrl::OnEnd
	VideoEnd_t103 * ___OnEnd_11;
	// System.Int32 MediaPlayerCtrl::m_iPauseFrame
	int32_t ___m_iPauseFrame_12;
	// System.Boolean MediaPlayerCtrl::m_bFirst
	bool ___m_bFirst_13;
	// MediaPlayerCtrl/MEDIA_SCALE MediaPlayerCtrl::m_ScaleValue
	int32_t ___m_ScaleValue_14;
	// UnityEngine.GameObject MediaPlayerCtrl::m_objResize
	GameObject_t72 * ___m_objResize_15;
	// System.Boolean MediaPlayerCtrl::m_bLoop
	bool ___m_bLoop_16;
	// System.Boolean MediaPlayerCtrl::m_bAutoPlay
	bool ___m_bAutoPlay_17;
	// System.Boolean MediaPlayerCtrl::m_bStop
	bool ___m_bStop_18;
	// System.Boolean MediaPlayerCtrl::m_bCheckFBO
	bool ___m_bCheckFBO_19;
	// UnityEngine.TextureFormat MediaPlayerCtrl::videoTextureFormat
	int32_t ___videoTextureFormat_20;
	// System.Int32 MediaPlayerCtrl::m_iID
	int32_t ___m_iID_21;
	// UnityEngine.Texture2D MediaPlayerCtrl::_videoTexture
	Texture2D_t109 * ____videoTexture_22;
};
