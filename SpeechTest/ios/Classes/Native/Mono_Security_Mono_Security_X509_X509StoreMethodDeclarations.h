#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Store
struct X509Store_t669;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t781;
// System.Collections.ArrayList
struct ArrayList_t593;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t54;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t643;
// Mono.Security.X509.X509Crl
struct X509Crl_t759;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" void X509Store__ctor_m3575 (X509Store_t669 * __this, String_t* ___path, bool ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" X509CertificateCollection_t781 * X509Store_get_Certificates_m3066 (X509Store_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" ArrayList_t593 * X509Store_get_Crls_m3053 (X509Store_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" ByteU5BU5D_t54* X509Store_Load_m3576 (X509Store_t669 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" X509Certificate_t643 * X509Store_LoadCertificate_m3577 (X509Store_t669 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" X509Crl_t759 * X509Store_LoadCrl_m3578 (X509Store_t669 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" bool X509Store_CheckStore_m3579 (X509Store_t669 * __this, String_t* ___path, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" X509CertificateCollection_t781 * X509Store_BuildCertificatesCollection_m3580 (X509Store_t669 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" ArrayList_t593 * X509Store_BuildCrlsCollection_m3581 (X509Store_t669 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
