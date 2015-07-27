#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t885;
// Mono.Math.BigInteger
struct BigInteger_t884;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3303 (ModulusRing_t885 * __this, BigInteger_t884 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3304 (ModulusRing_t885 * __this, BigInteger_t884 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t884 * ModulusRing_Multiply_m3305 (ModulusRing_t885 * __this, BigInteger_t884 * ___a, BigInteger_t884 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t884 * ModulusRing_Difference_m3306 (ModulusRing_t885 * __this, BigInteger_t884 * ___a, BigInteger_t884 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t884 * ModulusRing_Pow_m3307 (ModulusRing_t885 * __this, BigInteger_t884 * ___a, BigInteger_t884 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t884 * ModulusRing_Pow_m3308 (ModulusRing_t885 * __this, uint32_t ___b, BigInteger_t884 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
