﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>>
struct Transform_1_t13717;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>
struct List_1_t590;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m100581 (Transform_1_t13717 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>>::Invoke(TKey,TValue)
 List_1_t590 * Transform_1_Invoke_m100582 (Transform_1_t13717 * __this, int32_t ___key, List_1_t590 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m100583 (Transform_1_t13717 * __this, int32_t ___key, List_1_t590 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>>::EndInvoke(System.IAsyncResult)
 List_1_t590 * Transform_1_EndInvoke_m100584 (Transform_1_t13717 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
