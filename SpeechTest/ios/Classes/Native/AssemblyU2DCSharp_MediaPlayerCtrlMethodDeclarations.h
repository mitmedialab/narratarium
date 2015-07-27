#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MediaPlayerCtrl
struct MediaPlayerCtrl_t95;
// UnityEngine.Texture2D
struct Texture2D_t109;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// MediaPlayerCtrl/MEDIAPLAYER_ERROR
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_ERROR.h"
// MediaPlayerCtrl/MEDIAPLAYER_STATE
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_STATE.h"

// System.Void MediaPlayerCtrl::.ctor()
extern "C" void MediaPlayerCtrl__ctor_m400 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Awake()
extern "C" void MediaPlayerCtrl_Awake_m401 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Start()
extern "C" void MediaPlayerCtrl_Start_m402 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnApplicationQuit()
extern "C" void MediaPlayerCtrl_OnApplicationQuit_m403 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Update()
extern "C" void MediaPlayerCtrl_Update_m404 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Resize()
extern "C" void MediaPlayerCtrl_Resize_m405 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnError(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR)
extern "C" void MediaPlayerCtrl_OnError_m406 (MediaPlayerCtrl_t95 * __this, int32_t ___iCode, int32_t ___iCodeExtra, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnDestroy()
extern "C" void MediaPlayerCtrl_OnDestroy_m407 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::OnApplicationPause(System.Boolean)
extern "C" void MediaPlayerCtrl_OnApplicationPause_m408 (MediaPlayerCtrl_t95 * __this, bool ___bPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::GetCurrentState()
extern "C" int32_t MediaPlayerCtrl_GetCurrentState_m409 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D MediaPlayerCtrl::GetVideoTexture()
extern "C" Texture2D_t109 * MediaPlayerCtrl_GetVideoTexture_m410 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Play()
extern "C" void MediaPlayerCtrl_Play_m411 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Stop()
extern "C" void MediaPlayerCtrl_Stop_m412 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Pause()
extern "C" void MediaPlayerCtrl_Pause_m413 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Load(System.String)
extern "C" void MediaPlayerCtrl_Load_m414 (MediaPlayerCtrl_t95 * __this, String_t* ___strFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::SetVolume(System.Single)
extern "C" void MediaPlayerCtrl_SetVolume_m415 (MediaPlayerCtrl_t95 * __this, float ___fVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetSeekPosition()
extern "C" int32_t MediaPlayerCtrl_GetSeekPosition_m416 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::SeekTo(System.Int32)
extern "C" void MediaPlayerCtrl_SeekTo_m417 (MediaPlayerCtrl_t95 * __this, int32_t ___iSeek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetDuration()
extern "C" int32_t MediaPlayerCtrl_GetDuration_m418 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetCurrentSeekPercent()
extern "C" int32_t MediaPlayerCtrl_GetCurrentSeekPercent_m419 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetVideoWidth()
extern "C" int32_t MediaPlayerCtrl_GetVideoWidth_m420 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::GetVideoHeight()
extern "C" int32_t MediaPlayerCtrl_GetVideoHeight_m421 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::UnLoad()
extern "C" void MediaPlayerCtrl_UnLoad_m422 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::VideoPlayerPluginCreateInstance()
extern "C" int32_t MediaPlayerCtrl_VideoPlayerPluginCreateInstance_m423 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginDestroyInstance(System.Int32)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginDestroyInstance_m424 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginCanOutputToTexture(System.String)
extern "C" bool MediaPlayerCtrl_VideoPlayerPluginCanOutputToTexture_m425 (Object_t * __this /* static, unused */, String_t* ___videoURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginSetLoop(System.Int32,System.Boolean)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginSetLoop_m426 (Object_t * __this /* static, unused */, int32_t ___iID, bool ___bLoop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginSetVolume(System.Int32,System.Single)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginSetVolume_m427 (Object_t * __this /* static, unused */, int32_t ___iID, float ___fVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginPlayerReady(System.Int32)
extern "C" bool MediaPlayerCtrl_VideoPlayerPluginPlayerReady_m428 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MediaPlayerCtrl::VideoPlayerPluginDurationSeconds(System.Int32)
extern "C" float MediaPlayerCtrl_VideoPlayerPluginDurationSeconds_m429 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginExtents(System.Int32,System.Int32&,System.Int32&)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginExtents_m430 (Object_t * __this /* static, unused */, int32_t ___iID, int32_t* ___width, int32_t* ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::VideoPlayerPluginCurFrameTexture(System.Int32)
extern "C" int32_t MediaPlayerCtrl_VideoPlayerPluginCurFrameTexture_m431 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginLoadVideo(System.Int32,System.String)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginLoadVideo_m432 (Object_t * __this /* static, unused */, int32_t ___iID, String_t* ___videoURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginPlayVideo(System.Int32)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginPlayVideo_m433 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginPauseVideo(System.Int32)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginPauseVideo_m434 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginResumeVideo(System.Int32)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginResumeVideo_m435 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginRewindVideo(System.Int32)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginRewindVideo_m436 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginSeekToVideo(System.Int32,System.Single)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginSeekToVideo_m437 (Object_t * __this /* static, unused */, int32_t ___iID, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MediaPlayerCtrl::VideoPlayerPluginCurTimeSeconds(System.Int32)
extern "C" float MediaPlayerCtrl_VideoPlayerPluginCurTimeSeconds_m438 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginIsPlaying(System.Int32)
extern "C" bool MediaPlayerCtrl_VideoPlayerPluginIsPlaying_m439 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::VideoPlayerPluginStopVideo(System.Int32)
extern "C" void MediaPlayerCtrl_VideoPlayerPluginStopVideo_m440 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::VideoPlayerPluginFinish(System.Int32)
extern "C" bool MediaPlayerCtrl_VideoPlayerPluginFinish_m441 (Object_t * __this /* static, unused */, int32_t ___iID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::get_ready()
extern "C" bool MediaPlayerCtrl_get_ready_m442 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MediaPlayerCtrl::get_duration()
extern "C" float MediaPlayerCtrl_get_duration_m443 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MediaPlayerCtrl::get_currentTime()
extern "C" float MediaPlayerCtrl_get_currentTime_m444 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::get_isPlaying()
extern "C" bool MediaPlayerCtrl_get_isPlaying_m445 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MediaPlayerCtrl::get_videoSize()
extern "C" Vector2_t22  MediaPlayerCtrl_get_videoSize_m446 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D MediaPlayerCtrl::get_videoTexture()
extern "C" Texture2D_t109 * MediaPlayerCtrl_get_videoTexture_m447 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Destroy()
extern "C" void MediaPlayerCtrl_Call_Destroy_m448 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_UnLoad()
extern "C" void MediaPlayerCtrl_Call_UnLoad_m449 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MediaPlayerCtrl::Call_Load(System.String,System.Int32)
extern "C" bool MediaPlayerCtrl_Call_Load_m450 (MediaPlayerCtrl_t95 * __this, String_t* ___strFileName, int32_t ___iSeek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_UpdateVideoTexture()
extern "C" void MediaPlayerCtrl_Call_UpdateVideoTexture_m451 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetVolume(System.Single)
extern "C" void MediaPlayerCtrl_Call_SetVolume_m452 (MediaPlayerCtrl_t95 * __this, float ___fVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetSeekPosition(System.Int32)
extern "C" void MediaPlayerCtrl_Call_SetSeekPosition_m453 (MediaPlayerCtrl_t95 * __this, int32_t ___iSeek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetSeekPosition()
extern "C" int32_t MediaPlayerCtrl_Call_GetSeekPosition_m454 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Play(System.Int32)
extern "C" void MediaPlayerCtrl_Call_Play_m455 (MediaPlayerCtrl_t95 * __this, int32_t ___iSeek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Reset()
extern "C" void MediaPlayerCtrl_Call_Reset_m456 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Stop()
extern "C" void MediaPlayerCtrl_Call_Stop_m457 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_RePlay()
extern "C" void MediaPlayerCtrl_Call_RePlay_m458 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_Pause()
extern "C" void MediaPlayerCtrl_Call_Pause_m459 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetVideoWidth()
extern "C" int32_t MediaPlayerCtrl_Call_GetVideoWidth_m460 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetVideoHeight()
extern "C" int32_t MediaPlayerCtrl_Call_GetVideoHeight_m461 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetUnityTexture(System.Int32)
extern "C" void MediaPlayerCtrl_Call_SetUnityTexture_m462 (MediaPlayerCtrl_t95 * __this, int32_t ___iTextureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetWindowSize()
extern "C" void MediaPlayerCtrl_Call_SetWindowSize_m463 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetLooping(System.Boolean)
extern "C" void MediaPlayerCtrl_Call_SetLooping_m464 (MediaPlayerCtrl_t95 * __this, bool ___bLoop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl::Call_SetUnityActivity()
extern "C" void MediaPlayerCtrl_Call_SetUnityActivity_m465 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetError()
extern "C" int32_t MediaPlayerCtrl_Call_GetError_m466 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetErrorExtra()
extern "C" int32_t MediaPlayerCtrl_Call_GetErrorExtra_m467 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetDuration()
extern "C" int32_t MediaPlayerCtrl_Call_GetDuration_m468 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MediaPlayerCtrl::Call_GetCurrentSeekPercent()
extern "C" int32_t MediaPlayerCtrl_Call_GetCurrentSeekPercent_m469 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MediaPlayerCtrl/MEDIAPLAYER_STATE MediaPlayerCtrl::Call_GetStatus()
extern "C" int32_t MediaPlayerCtrl_Call_GetStatus_m470 (MediaPlayerCtrl_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MediaPlayerCtrl::DownloadStreamingVideoAndLoad(System.String)
extern "C" Object_t * MediaPlayerCtrl_DownloadStreamingVideoAndLoad_m471 (MediaPlayerCtrl_t95 * __this, String_t* ___strURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MediaPlayerCtrl::CopyStreamingAssetVideoAndLoad(System.String)
extern "C" Object_t * MediaPlayerCtrl_CopyStreamingAssetVideoAndLoad_m472 (MediaPlayerCtrl_t95 * __this, String_t* ___strURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
