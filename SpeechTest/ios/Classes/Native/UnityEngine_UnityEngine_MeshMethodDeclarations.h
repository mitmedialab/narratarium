#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t128;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t135;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t127;
// System.Int32[]
struct Int32U5BU5D_t136;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m578 (Mesh_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m726 (Object_t * __this /* static, unused */, Mesh_t128 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m583 (Mesh_t128 * __this, Vector3U5BU5D_t135* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C" void Mesh_set_normals_m585 (Mesh_t128 * __this, Vector3U5BU5D_t135* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t127* Mesh_get_uv_m544 (Mesh_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m545 (Mesh_t128 * __this, Vector2U5BU5D_t127* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m584 (Mesh_t128 * __this, Int32U5BU5D_t136* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
