#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t94_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
extern TypeInfo MedaiPlayerSampleGUI_t96_il2cpp_TypeInfo;
// MedaiPlayerSampleGUI
#include "AssemblyU2DCSharp_MedaiPlayerSampleGUI.h"
extern TypeInfo MedaiPlayerSampleSphereGUI_t97_il2cpp_TypeInfo;
// MedaiPlayerSampleSphereGUI
#include "AssemblyU2DCSharp_MedaiPlayerSampleSphereGUI.h"
extern TypeInfo MEDIAPLAYER_ERROR_t98_il2cpp_TypeInfo;
// MediaPlayerCtrl/MEDIAPLAYER_ERROR
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_ERROR.h"
extern TypeInfo MEDIAPLAYER_STATE_t99_il2cpp_TypeInfo;
// MediaPlayerCtrl/MEDIAPLAYER_STATE
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_STATE.h"
extern TypeInfo MEDIA_SCALE_t100_il2cpp_TypeInfo;
// MediaPlayerCtrl/MEDIA_SCALE
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIA_SCALE.h"
extern TypeInfo VideoEnd_t103_il2cpp_TypeInfo;
// MediaPlayerCtrl/VideoEnd
#include "AssemblyU2DCSharp_MediaPlayerCtrl_VideoEnd.h"
extern TypeInfo VideoReady_t105_il2cpp_TypeInfo;
// MediaPlayerCtrl/VideoReady
#include "AssemblyU2DCSharp_MediaPlayerCtrl_VideoReady.h"
extern TypeInfo U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107_il2cpp_TypeInfo;
// MediaPlayerCtrl/<DownloadStreamingVideoAndLoad>c__Iterator0
#include "AssemblyU2DCSharp_MediaPlayerCtrl_U3CDownloadStreamingVideoA.h"
extern TypeInfo U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108_il2cpp_TypeInfo;
// MediaPlayerCtrl/<CopyStreamingAssetVideoAndLoad>c__Iterator1
#include "AssemblyU2DCSharp_MediaPlayerCtrl_U3CCopyStreamingAssetVideo.h"
extern TypeInfo MediaPlayerCtrl_t95_il2cpp_TypeInfo;
// MediaPlayerCtrl
#include "AssemblyU2DCSharp_MediaPlayerCtrl.h"
extern TypeInfo MediaPlayerFullScreenCtrl_t110_il2cpp_TypeInfo;
// MediaPlayerFullScreenCtrl
#include "AssemblyU2DCSharp_MediaPlayerFullScreenCtrl.h"
extern TypeInfo SphereMirror_t111_il2cpp_TypeInfo;
// SphereMirror
#include "AssemblyU2DCSharp_SphereMirror.h"
extern TypeInfo BorderCollision_t113_il2cpp_TypeInfo;
// BorderCollision
#include "AssemblyU2DCSharp_BorderCollision.h"
extern TypeInfo MeshCreator_t114_il2cpp_TypeInfo;
// MeshCreator
#include "AssemblyU2DCSharp_MeshCreator.h"
extern TypeInfo MoveOnSpeech_t115_il2cpp_TypeInfo;
// MoveOnSpeech
#include "AssemblyU2DCSharp_MoveOnSpeech.h"
extern TypeInfo SceneSwitch_t116_il2cpp_TypeInfo;
// SceneSwitch
#include "AssemblyU2DCSharp_SceneSwitch.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_AssemblyU2DCSharp_Assembly_Types[18] = 
{
	&U3CModuleU3E_t94_il2cpp_TypeInfo,
	&MedaiPlayerSampleGUI_t96_il2cpp_TypeInfo,
	&MedaiPlayerSampleSphereGUI_t97_il2cpp_TypeInfo,
	&MEDIAPLAYER_ERROR_t98_il2cpp_TypeInfo,
	&MEDIAPLAYER_STATE_t99_il2cpp_TypeInfo,
	&MEDIA_SCALE_t100_il2cpp_TypeInfo,
	&VideoEnd_t103_il2cpp_TypeInfo,
	&VideoReady_t105_il2cpp_TypeInfo,
	&U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107_il2cpp_TypeInfo,
	&U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108_il2cpp_TypeInfo,
	&MediaPlayerCtrl_t95_il2cpp_TypeInfo,
	&MediaPlayerFullScreenCtrl_t110_il2cpp_TypeInfo,
	&SphereMirror_t111_il2cpp_TypeInfo,
	&BorderCollision_t113_il2cpp_TypeInfo,
	&MeshCreator_t114_il2cpp_TypeInfo,
	&MoveOnSpeech_t115_il2cpp_TypeInfo,
	&SceneSwitch_t116_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
Il2CppAssembly g_AssemblyU2DCSharp_Assembly = 
{
	{ "Assembly-CSharp", NULL, NULL, NULL, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_AssemblyU2DCSharp_dll_Image,
	1,
};
extern const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_Assembly_AttributeGenerators[14];
static const char* s_StringTable[76] = 
{
	"scrMedia",
	"m_bFinish",
	"value__",
	"MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK",
	"MEDIA_ERROR_IO",
	"MEDIA_ERROR_MALFORMED",
	"MEDIA_ERROR_TIMED_OUT",
	"MEDIA_ERROR_UNSUPPORTED",
	"MEDIA_ERROR_SERVER_DIED",
	"MEDIA_ERROR_UNKNOWN",
	"NOT_READY",
	"READY",
	"END",
	"PLAYING",
	"PAUSED",
	"STOPPED",
	"ERROR",
	"SCALE_X_TO_Y",
	"SCALE_X_TO_Z",
	"SCALE_Y_TO_X",
	"SCALE_Y_TO_Z",
	"SCALE_Z_TO_X",
	"SCALE_Z_TO_Y",
	"strURL",
	"<www>__0",
	"<write_path>__1",
	"$PC",
	"$current",
	"<$>strURL",
	"<>f__this",
	"<write_path>__0",
	"<www>__1",
	"m_strFileName",
	"m_TargetMaterial",
	"m_VideoTexture",
	"m_VideoTextureDummy",
	"m_CurrentState",
	"m_iCurrentSeekPosition",
	"m_bFullScreen",
	"m_bSupportRockchip",
	"OnReady",
	"OnEnd",
	"m_iPauseFrame",
	"m_bFirst",
	"m_ScaleValue",
	"m_objResize",
	"m_bLoop",
	"m_bAutoPlay",
	"m_bStop",
	"m_bCheckFBO",
	"videoTextureFormat",
	"m_iID",
	"_videoTexture",
	"m_objVideo",
	"m_iOrgWidth",
	"m_iOrgHeight",
	"dist",
	"leftBorder",
	"rightBorder",
	"buffer",
	"topBorder",
	"bottomBorder",
	"lastResults2",
	"fontStyle",
	"enabled",
	"taggedObject",
	"lastResults",
	"direction",
	"speed",
	"movement",
	"runningSpeed",
	"walkingSpeed",
	"facingRight",
	"running",
	"walking",
	"lastAnimation",
};
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
static const Il2CppFieldDefinition s_FieldTable[95] = 
{
	{ 0, 167, offsetof(MedaiPlayerSampleGUI_t96, ___scrMedia_2), 0 } ,
	{ 1, 113, offsetof(MedaiPlayerSampleGUI_t96, ___m_bFinish_3), 0 } ,
	{ 0, 167, offsetof(MedaiPlayerSampleSphereGUI_t97, ___scrMedia_2), 0 } ,
	{ 2, 75, offsetof(MEDIAPLAYER_ERROR_t98, ___value___1) + sizeof(Object_t), 0 } ,
	{ 3, 172, 0, 0 } ,
	{ 4, 172, 0, 0 } ,
	{ 5, 172, 0, 0 } ,
	{ 6, 172, 0, 0 } ,
	{ 7, 172, 0, 0 } ,
	{ 8, 172, 0, 0 } ,
	{ 9, 172, 0, 0 } ,
	{ 2, 75, offsetof(MEDIAPLAYER_STATE_t99, ___value___1) + sizeof(Object_t), 0 } ,
	{ 10, 174, 0, 0 } ,
	{ 11, 174, 0, 0 } ,
	{ 12, 174, 0, 0 } ,
	{ 13, 174, 0, 0 } ,
	{ 14, 174, 0, 0 } ,
	{ 15, 174, 0, 0 } ,
	{ 16, 174, 0, 0 } ,
	{ 2, 75, offsetof(MEDIA_SCALE_t100, ___value___1) + sizeof(Object_t), 0 } ,
	{ 17, 177, 0, 0 } ,
	{ 18, 177, 0, 0 } ,
	{ 19, 177, 0, 0 } ,
	{ 20, 177, 0, 0 } ,
	{ 21, 177, 0, 0 } ,
	{ 22, 177, 0, 0 } ,
	{ 23, 189, offsetof(U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107, ___strURL_0), 0 } ,
	{ 24, 190, offsetof(U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107, ___U3CwwwU3E__0_1), 0 } ,
	{ 25, 189, offsetof(U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107, ___U3Cwrite_pathU3E__1_2), 0 } ,
	{ 26, 82, offsetof(U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107, ___U24PC_3), 0 } ,
	{ 27, 94, offsetof(U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107, ___U24current_4), 0 } ,
	{ 28, 189, offsetof(U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107, ___U3CU24U3EstrURL_5), 0 } ,
	{ 29, 191, offsetof(U3CDownloadStreamingVideoAndLoadU3Ec__Iterator0_t107, ___U3CU3Ef__this_6), 0 } ,
	{ 23, 189, offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108, ___strURL_0), 0 } ,
	{ 30, 189, offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108, ___U3Cwrite_pathU3E__0_1), 0 } ,
	{ 31, 190, offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108, ___U3CwwwU3E__1_2), 0 } ,
	{ 26, 82, offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108, ___U24PC_3), 0 } ,
	{ 27, 94, offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108, ___U24current_4), 0 } ,
	{ 28, 189, offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108, ___U3CU24U3EstrURL_5), 0 } ,
	{ 29, 191, offsetof(U3CCopyStreamingAssetVideoAndLoadU3Ec__Iterator1_t108, ___U3CU3Ef__this_6), 0 } ,
	{ 32, 114, offsetof(MediaPlayerCtrl_t95, ___m_strFileName_2), 0 } ,
	{ 33, 196, offsetof(MediaPlayerCtrl_t95, ___m_TargetMaterial_3), 0 } ,
	{ 34, 197, offsetof(MediaPlayerCtrl_t95, ___m_VideoTexture_4), 0 } ,
	{ 35, 197, offsetof(MediaPlayerCtrl_t95, ___m_VideoTextureDummy_5), 0 } ,
	{ 36, 198, offsetof(MediaPlayerCtrl_t95, ___m_CurrentState_6), 0 } ,
	{ 37, 199, offsetof(MediaPlayerCtrl_t95, ___m_iCurrentSeekPosition_7), 0 } ,
	{ 38, 113, offsetof(MediaPlayerCtrl_t95, ___m_bFullScreen_8), 0 } ,
	{ 39, 113, offsetof(MediaPlayerCtrl_t95, ___m_bSupportRockchip_9), 0 } ,
	{ 40, 200, offsetof(MediaPlayerCtrl_t95, ___OnReady_10), 0 } ,
	{ 41, 201, offsetof(MediaPlayerCtrl_t95, ___OnEnd_11), 0 } ,
	{ 42, 199, offsetof(MediaPlayerCtrl_t95, ___m_iPauseFrame_12), 0 } ,
	{ 43, 202, offsetof(MediaPlayerCtrl_t95, ___m_bFirst_13), 0 } ,
	{ 44, 203, offsetof(MediaPlayerCtrl_t95, ___m_ScaleValue_14), 0 } ,
	{ 45, 196, offsetof(MediaPlayerCtrl_t95, ___m_objResize_15), 0 } ,
	{ 46, 113, offsetof(MediaPlayerCtrl_t95, ___m_bLoop_16), 0 } ,
	{ 47, 113, offsetof(MediaPlayerCtrl_t95, ___m_bAutoPlay_17), 0 } ,
	{ 48, 202, offsetof(MediaPlayerCtrl_t95, ___m_bStop_18), 0 } ,
	{ 49, 202, offsetof(MediaPlayerCtrl_t95, ___m_bCheckFBO_19), 0 } ,
	{ 50, 204, offsetof(MediaPlayerCtrl_t95, ___videoTextureFormat_20), 0 } ,
	{ 51, 199, offsetof(MediaPlayerCtrl_t95, ___m_iID_21), 0 } ,
	{ 52, 197, offsetof(MediaPlayerCtrl_t95, ____videoTexture_22), 0 } ,
	{ 53, 196, offsetof(MediaPlayerFullScreenCtrl_t110, ___m_objVideo_2), 0 } ,
	{ 54, 199, offsetof(MediaPlayerFullScreenCtrl_t110, ___m_iOrgWidth_3), 0 } ,
	{ 55, 199, offsetof(MediaPlayerFullScreenCtrl_t110, ___m_iOrgHeight_4), 0 } ,
	{ 56, 134, offsetof(BorderCollision_t113, ___dist_2), 0 } ,
	{ 57, 134, offsetof(BorderCollision_t113, ___leftBorder_3), 0 } ,
	{ 58, 134, offsetof(BorderCollision_t113, ___rightBorder_4), 0 } ,
	{ 59, 134, offsetof(BorderCollision_t113, ___buffer_5), 0 } ,
	{ 60, 134, offsetof(BorderCollision_t113, ___topBorder_6), 0 } ,
	{ 61, 134, offsetof(BorderCollision_t113, ___bottomBorder_7), 0 } ,
	{ 62, 107, offsetof(BorderCollision_t113, ___lastResults2_8), 0 } ,
	{ 63, 210, offsetof(BorderCollision_t113, ___fontStyle_9), 0 } ,
	{ 64, 113, offsetof(BorderCollision_t113, ___enabled_10), 0 } ,
	{ 65, 114, offsetof(BorderCollision_t113, ___taggedObject_11), 0 } ,
	{ 63, 210, offsetof(MoveOnSpeech_t115, ___fontStyle_2), 0 } ,
	{ 0, 167, offsetof(MoveOnSpeech_t115, ___scrMedia_3), 0 } ,
	{ 66, 107, offsetof(MoveOnSpeech_t115, ___lastResults_4), 0 } ,
	{ 62, 107, offsetof(MoveOnSpeech_t115, ___lastResults2_5), 0 } ,
	{ 67, 115, offsetof(MoveOnSpeech_t115, ___direction_6), 0 } ,
	{ 68, 115, offsetof(MoveOnSpeech_t115, ___speed_7), 0 } ,
	{ 69, 115, offsetof(MoveOnSpeech_t115, ___movement_8), 0 } ,
	{ 70, 115, offsetof(MoveOnSpeech_t115, ___runningSpeed_9), 0 } ,
	{ 71, 115, offsetof(MoveOnSpeech_t115, ___walkingSpeed_10), 0 } ,
	{ 56, 134, offsetof(MoveOnSpeech_t115, ___dist_11), 0 } ,
	{ 57, 134, offsetof(MoveOnSpeech_t115, ___leftBorder_12), 0 } ,
	{ 58, 134, offsetof(MoveOnSpeech_t115, ___rightBorder_13), 0 } ,
	{ 59, 134, offsetof(MoveOnSpeech_t115, ___buffer_14), 0 } ,
	{ 60, 134, offsetof(MoveOnSpeech_t115, ___topBorder_15), 0 } ,
	{ 61, 134, offsetof(MoveOnSpeech_t115, ___bottomBorder_16), 0 } ,
	{ 72, 202, offsetof(MoveOnSpeech_t115, ___facingRight_17), 0 } ,
	{ 73, 202, offsetof(MoveOnSpeech_t115, ___running_18), 0 } ,
	{ 74, 202, offsetof(MoveOnSpeech_t115, ___walking_19), 0 } ,
	{ 75, 107, offsetof(MoveOnSpeech_t115, ___lastAnimation_20), 0 } ,
	{ 63, 210, offsetof(SceneSwitch_t116, ___fontStyle_2), 0 } ,
	{ 66, 107, offsetof(SceneSwitch_t116, ___lastResults_3), 0 } ,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
static const Il2CppFieldDefaultValue s_DefaultValues[20] = 
{
	{ 4, 48, 0 },
	{ 5, 48, 4 },
	{ 6, 48, 8 },
	{ 7, 48, 12 },
	{ 8, 48, 16 },
	{ 9, 48, 20 },
	{ 10, 48, 24 },
	{ 12, 48, 28 },
	{ 13, 48, 32 },
	{ 14, 48, 36 },
	{ 15, 48, 40 },
	{ 16, 48, 44 },
	{ 17, 48, 48 },
	{ 18, 48, 52 },
	{ 20, 48, 56 },
	{ 21, 48, 60 },
	{ 22, 48, 64 },
	{ 23, 48, 68 },
	{ 24, 48, 72 },
	{ 25, 48, 76 },
};
static const uint8_t s_DefaultValueDataTable[80] = 
{
	0xC8,
	0x00,
	0x00,
	0x00,
	0x14,
	0xFC,
	0xFF,
	0xFF,
	0x11,
	0xFC,
	0xFF,
	0xFF,
	0x92,
	0xFF,
	0xFF,
	0xFF,
	0x0E,
	0xFC,
	0xFF,
	0xFF,
	0x64,
	0x00,
	0x00,
	0x00,
	0x01,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x01,
	0x00,
	0x00,
	0x00,
	0x02,
	0x00,
	0x00,
	0x00,
	0x03,
	0x00,
	0x00,
	0x00,
	0x04,
	0x00,
	0x00,
	0x00,
	0x05,
	0x00,
	0x00,
	0x00,
	0x06,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x01,
	0x00,
	0x00,
	0x00,
	0x02,
	0x00,
	0x00,
	0x00,
	0x03,
	0x00,
	0x00,
	0x00,
	0x04,
	0x00,
	0x00,
	0x00,
	0x05,
	0x00,
	0x00,
	0x00,
};
Il2CppImage g_AssemblyU2DCSharp_dll_Image = 
{
	 "Assembly-CSharp.dll" ,
	&g_AssemblyU2DCSharp_Assembly,
	g_AssemblyU2DCSharp_Assembly_Types,
	17,
	NULL,
	s_StringTable,
	76,
	s_FieldTable,
	95,
	s_DefaultValues,
	20,
	s_DefaultValueDataTable,
	80,
	14,
	NULL,
	g_AssemblyU2DCSharp_Assembly_AttributeGenerators,
};
