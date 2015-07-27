#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t1011;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t632;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t54;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m7417 (RSAPKCS1SignatureDeformatter_t1011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m4157 (RSAPKCS1SignatureDeformatter_t1011 * __this, AsymmetricAlgorithm_t632 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m7418 (RSAPKCS1SignatureDeformatter_t1011 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m7419 (RSAPKCS1SignatureDeformatter_t1011 * __this, AsymmetricAlgorithm_t632 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m7420 (RSAPKCS1SignatureDeformatter_t1011 * __this, ByteU5BU5D_t54* ___rgbHash, ByteU5BU5D_t54* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
