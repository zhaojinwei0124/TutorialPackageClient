﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.JoinNumRewardData,Games.AwardActivity.JoinNumRewardData>
struct Transform_1_t19466;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Games.AwardActivity.JoinNumRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_JoinNumRewardData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.JoinNumRewardData,Games.AwardActivity.JoinNumRewardData>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m141866 (Transform_1_t19466 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.JoinNumRewardData,Games.AwardActivity.JoinNumRewardData>::Invoke(TKey,TValue)
 JoinNumRewardData_t2071  Transform_1_Invoke_m141867 (Transform_1_t19466 * __this, int32_t ___key, JoinNumRewardData_t2071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.JoinNumRewardData,Games.AwardActivity.JoinNumRewardData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m141868 (Transform_1_t19466 * __this, int32_t ___key, JoinNumRewardData_t2071  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.JoinNumRewardData,Games.AwardActivity.JoinNumRewardData>::EndInvoke(System.IAsyncResult)
 JoinNumRewardData_t2071  Transform_1_EndInvoke_m141869 (Transform_1_t19466 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
