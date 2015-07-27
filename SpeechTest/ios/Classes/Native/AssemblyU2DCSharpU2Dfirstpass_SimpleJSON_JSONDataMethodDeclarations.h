#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJSON.JSONData
struct JSONData_t18;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t39;

// System.Void SimpleJSON.JSONData::.ctor(System.String)
extern "C" void JSONData__ctor_m124 (JSONData_t18 * __this, String_t* ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
extern "C" void JSONData__ctor_m125 (JSONData_t18 * __this, float ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
extern "C" void JSONData__ctor_m126 (JSONData_t18 * __this, double ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
extern "C" void JSONData__ctor_m127 (JSONData_t18 * __this, bool ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
extern "C" void JSONData__ctor_m128 (JSONData_t18 * __this, int32_t ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::get_Value()
extern "C" String_t* JSONData_get_Value_m129 (JSONData_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::set_Value(System.String)
extern "C" void JSONData_set_Value_m130 (JSONData_t18 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::ToString()
extern "C" String_t* JSONData_ToString_m131 (JSONData_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::ToString(System.String)
extern "C" String_t* JSONData_ToString_m132 (JSONData_t18 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::Serialize(System.IO.BinaryWriter)
extern "C" void JSONData_Serialize_m133 (JSONData_t18 * __this, BinaryWriter_t39 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
