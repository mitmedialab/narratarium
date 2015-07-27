#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1010;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t632;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t54;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m7288 (DSASignatureDeformatter_t1010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m4156 (DSASignatureDeformatter_t1010 * __this, AsymmetricAlgorithm_t632 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m7289 (DSASignatureDeformatter_t1010 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m7290 (DSASignatureDeformatter_t1010 * __this, AsymmetricAlgorithm_t632 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m7291 (DSASignatureDeformatter_t1010 * __this, ByteU5BU5D_t54* ___rgbHash, ByteU5BU5D_t54* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
