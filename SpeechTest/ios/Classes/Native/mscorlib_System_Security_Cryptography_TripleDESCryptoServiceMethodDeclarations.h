#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1418;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t934;
// System.Byte[]
struct ByteU5BU5D_t54;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m7536 (TripleDESCryptoServiceProvider_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m7537 (TripleDESCryptoServiceProvider_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m7538 (TripleDESCryptoServiceProvider_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m7539 (TripleDESCryptoServiceProvider_t1418 * __this, ByteU5BU5D_t54* ___rgbKey, ByteU5BU5D_t54* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m7540 (TripleDESCryptoServiceProvider_t1418 * __this, ByteU5BU5D_t54* ___rgbKey, ByteU5BU5D_t54* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
