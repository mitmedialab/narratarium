#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t1364;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1362;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1355;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m7173 (ArrayFixupRecord_t1364 * __this, ObjectRecord_t1362 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t1362 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m7174 (ArrayFixupRecord_t1364 * __this, ObjectManager_t1355 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
