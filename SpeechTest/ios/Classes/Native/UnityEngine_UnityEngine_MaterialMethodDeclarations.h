#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material
struct Material_t129;
// UnityEngine.Texture
struct Texture_t182;
// System.String
struct String_t;

// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" void Material_set_mainTexture_m563 (Material_t129 * __this, Texture_t182 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" void Material_SetTexture_m1103 (Material_t129 * __this, String_t* ___propertyName, Texture_t182 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m1104 (Material_t129 * __this, int32_t ___nameID, Texture_t182 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
