#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t261;
struct WebCamDevice_t261_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m1289 (WebCamDevice_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m1290 (WebCamDevice_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t261_marshal(const WebCamDevice_t261& unmarshaled, WebCamDevice_t261_marshaled& marshaled);
void WebCamDevice_t261_marshal_back(const WebCamDevice_t261_marshaled& marshaled, WebCamDevice_t261& unmarshaled);
void WebCamDevice_t261_marshal_cleanup(WebCamDevice_t261_marshaled& marshaled);
