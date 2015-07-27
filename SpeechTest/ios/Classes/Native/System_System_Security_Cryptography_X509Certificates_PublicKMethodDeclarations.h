#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t635;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t633;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t632;
// System.Security.Cryptography.Oid
struct Oid_t634;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t643;
// System.Byte[]
struct ByteU5BU5D_t54;
// System.Security.Cryptography.DSA
struct DSA_t755;
// System.Security.Cryptography.RSA
struct RSA_t756;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m2258 (PublicKey_t635 * __this, X509Certificate_t643 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t633 * PublicKey_get_EncodedKeyValue_m2259 (PublicKey_t635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t633 * PublicKey_get_EncodedParameters_m2260 (PublicKey_t635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t632 * PublicKey_get_Key_m2261 (PublicKey_t635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t634 * PublicKey_get_Oid_m2262 (PublicKey_t635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t54* PublicKey_GetUnsignedBigInteger_m2263 (Object_t * __this /* static, unused */, ByteU5BU5D_t54* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t755 * PublicKey_DecodeDSA_m2264 (Object_t * __this /* static, unused */, ByteU5BU5D_t54* ___rawPublicKey, ByteU5BU5D_t54* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t756 * PublicKey_DecodeRSA_m2265 (Object_t * __this /* static, unused */, ByteU5BU5D_t54* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
