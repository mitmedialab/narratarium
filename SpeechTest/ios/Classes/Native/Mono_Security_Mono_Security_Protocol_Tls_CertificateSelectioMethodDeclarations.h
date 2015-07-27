#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t952;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t645;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t616;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t101;
// System.AsyncCallback
struct AsyncCallback_t102;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m4111 (CertificateSelectionCallback_t952 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t645 * CertificateSelectionCallback_Invoke_m4112 (CertificateSelectionCallback_t952 * __this, X509CertificateCollection_t616 * ___clientCertificates, X509Certificate_t645 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t616 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" X509Certificate_t645 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t952(Il2CppObject* delegate, X509CertificateCollection_t616 * ___clientCertificates, X509Certificate_t645 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t616 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m4113 (CertificateSelectionCallback_t952 * __this, X509CertificateCollection_t616 * ___clientCertificates, X509Certificate_t645 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t616 * ___serverRequestedCertificates, AsyncCallback_t102 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t645 * CertificateSelectionCallback_EndInvoke_m4114 (CertificateSelectionCallback_t952 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
