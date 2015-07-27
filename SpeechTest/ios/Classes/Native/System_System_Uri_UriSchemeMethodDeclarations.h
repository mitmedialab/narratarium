#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t742;
struct UriScheme_t742_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m2863 (UriScheme_t742 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t742_marshal(const UriScheme_t742& unmarshaled, UriScheme_t742_marshaled& marshaled);
void UriScheme_t742_marshal_back(const UriScheme_t742_marshaled& marshaled, UriScheme_t742& unmarshaled);
void UriScheme_t742_marshal_cleanup(UriScheme_t742_marshaled& marshaled);
