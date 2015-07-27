#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t761;
// System.Byte[]
struct ByteU5BU5D_t54;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t784;
// Mono.Security.ASN1
struct ASN1_t757;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m3553 (X509CrlEntry_t761 * __this, ASN1_t757 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t54* X509CrlEntry_get_SerialNumber_m3554 (X509CrlEntry_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t195  X509CrlEntry_get_RevocationDate_m3051 (X509CrlEntry_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t784 * X509CrlEntry_get_Extensions_m3057 (X509CrlEntry_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
