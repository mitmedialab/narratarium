#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1081;
// Mono.Math.BigInteger
struct BigInteger_t1080;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m5169 (ModulusRing_t1081 * __this, BigInteger_t1080 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m5170 (ModulusRing_t1081 * __this, BigInteger_t1080 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1080 * ModulusRing_Multiply_m5171 (ModulusRing_t1081 * __this, BigInteger_t1080 * ___a, BigInteger_t1080 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1080 * ModulusRing_Difference_m5172 (ModulusRing_t1081 * __this, BigInteger_t1080 * ___a, BigInteger_t1080 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1080 * ModulusRing_Pow_m5173 (ModulusRing_t1081 * __this, BigInteger_t1080 * ___a, BigInteger_t1080 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1080 * ModulusRing_Pow_m5174 (ModulusRing_t1081 * __this, uint32_t ___b, BigInteger_t1080 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
