#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MeshCreator
struct MeshCreator_t114;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t117;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t118;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MeshCreator::.ctor()
extern "C" void MeshCreator__ctor_m484 (MeshCreator_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeshCreator::Start()
extern "C" void MeshCreator_Start_m485 (MeshCreator_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MeshCreator::getX(System.Int32,System.Single)
extern "C" float MeshCreator_getX_m486 (MeshCreator_t114 * __this, int32_t ___radius, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MeshCreator::getY(System.Int32,System.Single)
extern "C" float MeshCreator_getY_m487 (MeshCreator_t114 * __this, int32_t ___radius, float ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MeshCreator::getYSin(System.Single)
extern "C" float MeshCreator_getYSin_m488 (MeshCreator_t114 * __this, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MeshCreator::CalculateBezierPoint(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t73  MeshCreator_CalculateBezierPoint_m489 (MeshCreator_t114 * __this, float ___t, Vector3_t73  ___p0, Vector3_t73  ___p1, Vector3_t73  ___p2, Vector3_t73  ___p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> MeshCreator::getTrianglesBottomToTop(System.Int32)
extern "C" List_1_t117 * MeshCreator_getTrianglesBottomToTop_m490 (MeshCreator_t114 * __this, int32_t ___vertexAmount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> MeshCreator::getVerticesBezier(System.Int32)
extern "C" List_1_t118 * MeshCreator_getVerticesBezier_m491 (MeshCreator_t114 * __this, int32_t ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> MeshCreator::getVerticesCircular(System.Single)
extern "C" List_1_t118 * MeshCreator_getVerticesCircular_m492 (MeshCreator_t114 * __this, float ___subdivisionLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
