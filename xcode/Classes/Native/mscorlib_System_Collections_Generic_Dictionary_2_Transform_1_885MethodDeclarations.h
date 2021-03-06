﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Int32>
struct Transform_1_t18433;
// System.Object
struct Object_t;
// QianKunDaiLogic/ProductInfo
struct ProductInfo_t1678;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m135806 (Transform_1_t18433 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Int32>::Invoke(TKey,TValue)
 int32_t Transform_1_Invoke_m135807 (Transform_1_t18433 * __this, int32_t ___key, ProductInfo_t1678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m135808 (Transform_1_t18433 * __this, int32_t ___key, ProductInfo_t1678 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Transform_1_EndInvoke_m135809 (Transform_1_t18433 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
