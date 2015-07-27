#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t613;
// System.Net.WebRequest
struct WebRequest_t607;
// System.Uri
struct Uri_t316;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m2149 (HttpRequestCreator_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t607 * HttpRequestCreator_Create_m2150 (HttpRequestCreator_t613 * __this, Uri_t316 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
