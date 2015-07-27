#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1019;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t632;
// System.Byte[]
struct ByteU5BU5D_t54;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m4189 (RSAPKCS1KeyExchangeFormatter_t1019 * __this, AsymmetricAlgorithm_t632 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t54* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m7415 (RSAPKCS1KeyExchangeFormatter_t1019 * __this, ByteU5BU5D_t54* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m7416 (RSAPKCS1KeyExchangeFormatter_t1019 * __this, AsymmetricAlgorithm_t632 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
