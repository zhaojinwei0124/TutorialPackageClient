﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Application/LogCallback
struct LogCallback_t5895;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
 void LogCallback__ctor_m41826 (LogCallback_t5895 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
 void LogCallback_Invoke_m52519 (LogCallback_t5895 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
 Object_t * LogCallback_BeginInvoke_m52520 (LogCallback_t5895 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
 void LogCallback_EndInvoke_m52521 (LogCallback_t5895 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
