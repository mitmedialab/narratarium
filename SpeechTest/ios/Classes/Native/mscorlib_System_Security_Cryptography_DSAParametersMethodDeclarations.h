#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t777;
struct DSAParameters_t777_marshaled;

void DSAParameters_t777_marshal(const DSAParameters_t777& unmarshaled, DSAParameters_t777_marshaled& marshaled);
void DSAParameters_t777_marshal_back(const DSAParameters_t777_marshaled& marshaled, DSAParameters_t777& unmarshaled);
void DSAParameters_t777_marshal_cleanup(DSAParameters_t777_marshaled& marshaled);
