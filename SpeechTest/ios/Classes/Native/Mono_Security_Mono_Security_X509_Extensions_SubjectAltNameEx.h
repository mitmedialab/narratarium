﻿#pragma once
#include <stdint.h>
// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t920;
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct  SubjectAltNameExtension_t925  : public X509Extension_t760
{
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t920 * ____names_3;
};
