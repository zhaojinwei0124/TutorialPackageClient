﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.DictionaryEntry>
struct Transform_1_t20603;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// GameRes.SCachedBundleData
#include "AssemblyU2DCSharp_GameRes_SCachedBundleData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m150357 (Transform_1_t20603 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1066  Transform_1_Invoke_m150358 (Transform_1_t20603 * __this, String_t* ___key, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m150359 (Transform_1_t20603 * __this, String_t* ___key, SCachedBundleData_t4397  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1066  Transform_1_EndInvoke_m150360 (Transform_1_t20603 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
