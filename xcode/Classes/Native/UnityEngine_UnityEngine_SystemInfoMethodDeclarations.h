﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SystemInfo
struct SystemInfo_t7561;
// System.String
struct String_t;
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"

// System.String UnityEngine.SystemInfo::get_operatingSystem()
 String_t* SystemInfo_get_operatingSystem_m40701 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
 int32_t SystemInfo_get_processorCount_m40268 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
 int32_t SystemInfo_get_systemMemorySize_m40267 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
 int32_t SystemInfo_get_graphicsShaderLevel_m42173 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
 bool SystemInfo_get_supportsRenderTextures_m6543 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
 bool SystemInfo_get_supportsImageEffects_m38649 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
 bool SystemInfo_get_supportsComputeShaders_m42360 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
 bool SystemInfo_SupportsRenderTextureFormat_m6552 (Object_t * __this/* static, unused */, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
