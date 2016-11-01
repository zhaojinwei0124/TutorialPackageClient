﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderReplacementFallbackBuffer
struct EncoderReplacementFallbackBuffer_t8187;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t8186;

// System.Void System.Text.EncoderReplacementFallbackBuffer::.ctor(System.Text.EncoderReplacementFallback)
 void EncoderReplacementFallbackBuffer__ctor_m56212 (EncoderReplacementFallbackBuffer_t8187 * __this, EncoderReplacementFallback_t8186 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallbackBuffer::get_Remaining()
 int32_t EncoderReplacementFallbackBuffer_get_Remaining_m56213 (EncoderReplacementFallbackBuffer_t8187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Int32)
 bool EncoderReplacementFallbackBuffer_Fallback_m56214 (EncoderReplacementFallbackBuffer_t8187 * __this, uint16_t ___charUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
 bool EncoderReplacementFallbackBuffer_Fallback_m56215 (EncoderReplacementFallbackBuffer_t8187 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Int32)
 bool EncoderReplacementFallbackBuffer_Fallback_m56216 (EncoderReplacementFallbackBuffer_t8187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderReplacementFallbackBuffer::GetNextChar()
 uint16_t EncoderReplacementFallbackBuffer_GetNextChar_m56217 (EncoderReplacementFallbackBuffer_t8187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;