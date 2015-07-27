#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1166;
// System.Text.DecoderFallback
struct DecoderFallback_t1440;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1441;
// System.Byte[]
struct ByteU5BU5D_t54;
// System.Char[]
struct CharU5BU5D_t426;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m7634 (Decoder_t1166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m7635 (Decoder_t1166 * __this, DecoderFallback_t1440 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1441 * Decoder_get_FallbackBuffer_m7636 (Decoder_t1166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
