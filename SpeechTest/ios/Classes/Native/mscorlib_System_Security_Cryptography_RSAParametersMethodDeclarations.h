#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t775;
struct RSAParameters_t775_marshaled;

void RSAParameters_t775_marshal(const RSAParameters_t775& unmarshaled, RSAParameters_t775_marshaled& marshaled);
void RSAParameters_t775_marshal_back(const RSAParameters_t775_marshaled& marshaled, RSAParameters_t775& unmarshaled);
void RSAParameters_t775_marshal_cleanup(RSAParameters_t775_marshaled& marshaled);
