﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>>
struct Transform_1_t9369;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>
struct List_1_t346;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m64075 (Transform_1_t9369 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>>::Invoke(TKey,TValue)
 List_1_t346 * Transform_1_Invoke_m64076 (Transform_1_t9369 * __this, int32_t ___key, List_1_t346 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m64077 (Transform_1_t9369 * __this, int32_t ___key, List_1_t346 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>>::EndInvoke(System.IAsyncResult)
 List_1_t346 * Transform_1_EndInvoke_m64078 (Transform_1_t9369 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
