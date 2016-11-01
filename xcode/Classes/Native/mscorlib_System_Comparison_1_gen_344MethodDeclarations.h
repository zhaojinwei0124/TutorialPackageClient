﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t22744;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m165292 (Comparison_1_t22744 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m165293 (Comparison_1_t22744 * __this, Vector4_t942  ___x, Vector4_t942  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m165294 (Comparison_1_t22744 * __this, Vector4_t942  ___x, Vector4_t942  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m165295 (Comparison_1_t22744 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;