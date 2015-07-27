#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t609;
// System.Net.WebRequest
struct WebRequest_t607;
// System.Uri
struct Uri_t316;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m2143 (FtpRequestCreator_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t607 * FtpRequestCreator_Create_m2144 (FtpRequestCreator_t609 * __this, Uri_t316 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
