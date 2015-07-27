#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t608;
// System.Net.WebRequest
struct WebRequest_t607;
// System.Uri
struct Uri_t316;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m2141 (FileWebRequestCreator_t608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t607 * FileWebRequestCreator_Create_m2142 (FileWebRequestCreator_t608 * __this, Uri_t316 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
