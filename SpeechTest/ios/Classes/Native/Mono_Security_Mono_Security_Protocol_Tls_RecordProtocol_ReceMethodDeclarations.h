#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t956;
// System.IO.Stream
struct Stream_t40;
// System.Byte[]
struct ByteU5BU5D_t54;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t45;
// System.Threading.WaitHandle
struct WaitHandle_t1001;
// System.AsyncCallback
struct AsyncCallback_t102;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3790 (ReceiveRecordAsyncResult_t956 * __this, AsyncCallback_t102 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t54* ___initialBuffer, Stream_t40 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t40 * ReceiveRecordAsyncResult_get_Record_m3791 (ReceiveRecordAsyncResult_t956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t54* ReceiveRecordAsyncResult_get_ResultingBuffer_m3792 (ReceiveRecordAsyncResult_t956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t54* ReceiveRecordAsyncResult_get_InitialBuffer_m3793 (ReceiveRecordAsyncResult_t956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3794 (ReceiveRecordAsyncResult_t956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t45 * ReceiveRecordAsyncResult_get_AsyncException_m3795 (ReceiveRecordAsyncResult_t956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3796 (ReceiveRecordAsyncResult_t956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1001 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3797 (ReceiveRecordAsyncResult_t956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3798 (ReceiveRecordAsyncResult_t956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3799 (ReceiveRecordAsyncResult_t956 * __this, Exception_t45 * ___ex, ByteU5BU5D_t54* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3800 (ReceiveRecordAsyncResult_t956 * __this, Exception_t45 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3801 (ReceiveRecordAsyncResult_t956 * __this, ByteU5BU5D_t54* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
