#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1402;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1016;
// System.Byte[]
struct ByteU5BU5D_t54;
// System.UInt32[]
struct UInt32U5BU5D_t887;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m7434 (RijndaelTransform_t1402 * __this, Rijndael_t1016 * ___algo, bool ___encryption, ByteU5BU5D_t54* ___key, ByteU5BU5D_t54* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m7435 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m7436 (RijndaelTransform_t1402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m7437 (RijndaelTransform_t1402 * __this, ByteU5BU5D_t54* ___input, ByteU5BU5D_t54* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m7438 (RijndaelTransform_t1402 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m7439 (RijndaelTransform_t1402 * __this, ByteU5BU5D_t54* ___indata, ByteU5BU5D_t54* ___outdata, UInt32U5BU5D_t887* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m7440 (RijndaelTransform_t1402 * __this, ByteU5BU5D_t54* ___indata, ByteU5BU5D_t54* ___outdata, UInt32U5BU5D_t887* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m7441 (RijndaelTransform_t1402 * __this, ByteU5BU5D_t54* ___indata, ByteU5BU5D_t54* ___outdata, UInt32U5BU5D_t887* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m7442 (RijndaelTransform_t1402 * __this, ByteU5BU5D_t54* ___indata, ByteU5BU5D_t54* ___outdata, UInt32U5BU5D_t887* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m7443 (RijndaelTransform_t1402 * __this, ByteU5BU5D_t54* ___indata, ByteU5BU5D_t54* ___outdata, UInt32U5BU5D_t887* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m7444 (RijndaelTransform_t1402 * __this, ByteU5BU5D_t54* ___indata, ByteU5BU5D_t54* ___outdata, UInt32U5BU5D_t887* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
