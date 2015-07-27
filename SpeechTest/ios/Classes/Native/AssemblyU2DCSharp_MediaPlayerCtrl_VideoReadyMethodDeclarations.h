#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MediaPlayerCtrl/VideoReady
struct VideoReady_t105;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t101;
// System.AsyncCallback
struct AsyncCallback_t102;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void MediaPlayerCtrl/VideoReady::.ctor(System.Object,System.IntPtr)
extern "C" void VideoReady__ctor_m384 (VideoReady_t105 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoReady::Invoke()
extern "C" void VideoReady_Invoke_m385 (VideoReady_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VideoReady_t105(Il2CppObject* delegate);
// System.IAsyncResult MediaPlayerCtrl/VideoReady::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * VideoReady_BeginInvoke_m386 (VideoReady_t105 * __this, AsyncCallback_t102 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoReady::EndInvoke(System.IAsyncResult)
extern "C" void VideoReady_EndInvoke_m387 (VideoReady_t105 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
