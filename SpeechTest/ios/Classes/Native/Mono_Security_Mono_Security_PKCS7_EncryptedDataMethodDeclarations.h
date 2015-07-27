#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t896;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t895;
// System.Byte[]
struct ByteU5BU5D_t54;
// Mono.Security.ASN1
struct ASN1_t757;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m3397 (EncryptedData_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m3398 (EncryptedData_t896 * __this, ASN1_t757 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t895 * EncryptedData_get_EncryptionAlgorithm_m3399 (EncryptedData_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t54* EncryptedData_get_EncryptedContent_m3400 (EncryptedData_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
