﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoCustomAttrs/AttributeInfo
struct AttributeInfo_t8256;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t6411;

// System.Void System.MonoCustomAttrs/AttributeInfo::.ctor(System.AttributeUsageAttribute,System.Int32)
 void AttributeInfo__ctor_m56883 (AttributeInfo_t8256 * __this, AttributeUsageAttribute_t6411 * ___usage, int32_t ___inheritanceLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::get_Usage()
 AttributeUsageAttribute_t6411 * AttributeInfo_get_Usage_m56884 (AttributeInfo_t8256 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoCustomAttrs/AttributeInfo::get_InheritanceLevel()
 int32_t AttributeInfo_get_InheritanceLevel_m56885 (AttributeInfo_t8256 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
