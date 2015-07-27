﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t756;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t903;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t218;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t959  : public AsymmetricSignatureDeformatter_t960
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t756 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t903 * ___hash_1;
};
struct RSASslSignatureDeformatter_t959_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t218 * ___U3CU3Ef__switchU24map15_2;
};
