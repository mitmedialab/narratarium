#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1332;
// System.MarshalByRefObject
struct MarshalByRefObject_t630;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1330;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m7043 (ClientIdentity_t1332 * __this, String_t* ___objectUri, ObjRef_t1330 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t630 * ClientIdentity_get_ClientProxy_m7044 (ClientIdentity_t1332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m7045 (ClientIdentity_t1332 * __this, MarshalByRefObject_t630 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1330 * ClientIdentity_CreateObjRef_m7046 (ClientIdentity_t1332 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m7047 (ClientIdentity_t1332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
