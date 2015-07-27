#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1401;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t934;
// System.Byte[]
struct ByteU5BU5D_t54;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" void RijndaelManaged__ctor_m7429 (RijndaelManaged_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C" void RijndaelManaged_GenerateIV_m7430 (RijndaelManaged_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C" void RijndaelManaged_GenerateKey_m7431 (RijndaelManaged_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateDecryptor_m7432 (RijndaelManaged_t1401 * __this, ByteU5BU5D_t54* ___rgbKey, ByteU5BU5D_t54* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateEncryptor_m7433 (RijndaelManaged_t1401 * __this, ByteU5BU5D_t54* ___rgbKey, ByteU5BU5D_t54* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
