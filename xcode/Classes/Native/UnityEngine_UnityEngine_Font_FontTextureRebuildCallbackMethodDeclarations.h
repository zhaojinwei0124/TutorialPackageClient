﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t5952;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
 void FontTextureRebuildCallback__ctor_m42247 (FontTextureRebuildCallback_t5952 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
 void FontTextureRebuildCallback_Invoke_m52101 (FontTextureRebuildCallback_t5952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * FontTextureRebuildCallback_BeginInvoke_m52102 (FontTextureRebuildCallback_t5952 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
 void FontTextureRebuildCallback_EndInvoke_m52103 (FontTextureRebuildCallback_t5952 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
