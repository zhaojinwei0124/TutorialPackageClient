﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>
struct Transform_1_t23444;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t6084;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m170393 (Transform_1_t23444 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::Invoke(TKey,TValue)
 Graphic_t6084 * Transform_1_Invoke_m170394 (Transform_1_t23444 * __this, Graphic_t6084 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m170395 (Transform_1_t23444 * __this, Graphic_t6084 * ___key, int32_t ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::EndInvoke(System.IAsyncResult)
 Graphic_t6084 * Transform_1_EndInvoke_m170396 (Transform_1_t23444 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
