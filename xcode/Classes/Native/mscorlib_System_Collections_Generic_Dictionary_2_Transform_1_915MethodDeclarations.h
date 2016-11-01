﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,System.Collections.DictionaryEntry>
struct Transform_1_t19434;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// Games.AwardActivity.ActivityRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_ActivityRewardData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m141726 (Transform_1_t19434 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1066  Transform_1_Invoke_m141727 (Transform_1_t19434 * __this, int32_t ___key, ActivityRewardData_t2067  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m141728 (Transform_1_t19434 * __this, int32_t ___key, ActivityRewardData_t2067  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1066  Transform_1_EndInvoke_m141729 (Transform_1_t19434 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
