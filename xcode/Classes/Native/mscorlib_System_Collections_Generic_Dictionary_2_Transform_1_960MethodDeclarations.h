﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>>
struct Transform_1_t20400;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_37.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m148564 (Transform_1_t20400 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5676  Transform_1_Invoke_m148565 (Transform_1_t20400 * __this, String_t* ___key, List_1_t1289 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m148566 (Transform_1_t20400 * __this, String_t* ___key, List_1_t1289 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5676  Transform_1_EndInvoke_m148567 (Transform_1_t20400 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
