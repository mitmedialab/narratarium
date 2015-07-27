#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t1017;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t1542  : public StringComparer_t443
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1017 * ____compareInfo_5;
};
