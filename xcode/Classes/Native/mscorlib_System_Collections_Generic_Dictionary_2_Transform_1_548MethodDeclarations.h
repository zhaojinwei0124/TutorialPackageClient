﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>>
struct Transform_1_t14001;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>
struct List_1_t606;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m102973 (Transform_1_t14001 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>>::Invoke(TKey,TValue)
 List_1_t606 * Transform_1_Invoke_m102974 (Transform_1_t14001 * __this, int32_t ___key, List_1_t606 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m102975 (Transform_1_t14001 * __this, int32_t ___key, List_1_t606 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>>::EndInvoke(System.IAsyncResult)
 List_1_t606 * Transform_1_EndInvoke_m102976 (Transform_1_t14001 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
