﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop>,System.Int32>
struct Transform_1_t11926;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop>
struct List_1_t490;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop>,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m85584 (Transform_1_t11926 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop>,System.Int32>::Invoke(TKey,TValue)
 int32_t Transform_1_Invoke_m85585 (Transform_1_t11926 * __this, int32_t ___key, List_1_t490 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop>,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m85586 (Transform_1_t11926 * __this, int32_t ___key, List_1_t490 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop>,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Transform_1_EndInvoke_m85587 (Transform_1_t11926 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
