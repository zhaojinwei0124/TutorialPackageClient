﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>>
struct Transform_1_t16523;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>
struct IDictionary_2_t5511;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_242.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m123489 (Transform_1_t16523 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t16503  Transform_1_Invoke_m123490 (Transform_1_t16523 * __this, int32_t ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m123491 (Transform_1_t16523 * __this, int32_t ___key, Object_t* ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t16503  Transform_1_EndInvoke_m123492 (Transform_1_t16523 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;