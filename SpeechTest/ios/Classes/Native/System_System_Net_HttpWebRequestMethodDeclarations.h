#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t618;
// System.Uri
struct Uri_t316;
// System.Net.ServicePoint
struct ServicePoint_t617;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t433;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m2152 (HttpWebRequest_t618 * __this, Uri_t316 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m2153 (HttpWebRequest_t618 * __this, SerializationInfo_t433 * ___serializationInfo, StreamingContext_t434  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m2154 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m2155 (HttpWebRequest_t618 * __this, SerializationInfo_t433 * ___serializationInfo, StreamingContext_t434  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t316 * HttpWebRequest_get_Address_m2156 (HttpWebRequest_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t617 * HttpWebRequest_get_ServicePoint_m2157 (HttpWebRequest_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t617 * HttpWebRequest_GetServicePoint_m2158 (HttpWebRequest_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m2159 (HttpWebRequest_t618 * __this, SerializationInfo_t433 * ___serializationInfo, StreamingContext_t434  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
