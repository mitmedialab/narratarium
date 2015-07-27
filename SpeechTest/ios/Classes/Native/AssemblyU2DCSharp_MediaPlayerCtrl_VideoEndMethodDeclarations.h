#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MediaPlayerCtrl/VideoEnd
struct VideoEnd_t103;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t101;
// System.AsyncCallback
struct AsyncCallback_t102;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void MediaPlayerCtrl/VideoEnd::.ctor(System.Object,System.IntPtr)
extern "C" void VideoEnd__ctor_m380 (VideoEnd_t103 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoEnd::Invoke()
extern "C" void VideoEnd_Invoke_m381 (VideoEnd_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VideoEnd_t103(Il2CppObject* delegate);
// System.IAsyncResult MediaPlayerCtrl/VideoEnd::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * VideoEnd_BeginInvoke_m382 (VideoEnd_t103 * __this, AsyncCallback_t102 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoEnd::EndInvoke(System.IAsyncResult)
extern "C" void VideoEnd_EndInvoke_m383 (VideoEnd_t103 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
