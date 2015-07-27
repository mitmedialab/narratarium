#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t240;
struct CacheIndex_t240_marshaled;

void CacheIndex_t240_marshal(const CacheIndex_t240& unmarshaled, CacheIndex_t240_marshaled& marshaled);
void CacheIndex_t240_marshal_back(const CacheIndex_t240_marshaled& marshaled, CacheIndex_t240& unmarshaled);
void CacheIndex_t240_marshal_cleanup(CacheIndex_t240_marshaled& marshaled);
