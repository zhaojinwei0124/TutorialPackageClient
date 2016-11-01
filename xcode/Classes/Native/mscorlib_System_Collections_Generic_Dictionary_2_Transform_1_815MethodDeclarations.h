﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ImporterFunc,ImporterFunc>
struct Transform_1_t16497;
// System.Object
struct Object_t;
// ImporterFunc
struct ImporterFunc_t1084;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ImporterFunc,ImporterFunc>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m123289(__this, ___object, ___method, method) (void)Transform_1__ctor_m59535_gshared((Transform_1_t8811 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ImporterFunc,ImporterFunc>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m123290(__this, ___key, ___value, method) (ImporterFunc_t1084 *)Transform_1_Invoke_m59536_gshared((Transform_1_t8811 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ImporterFunc,ImporterFunc>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m123291(__this, ___key, ___value, ___callback, ___object, method) (Object_t *)Transform_1_BeginInvoke_m59537_gshared((Transform_1_t8811 *)__this, (Object_t *)___key, (Object_t *)___value, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ImporterFunc,ImporterFunc>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m123292(__this, ___result, method) (ImporterFunc_t1084 *)Transform_1_EndInvoke_m59538_gshared((Transform_1_t8811 *)__this, (Object_t *)___result, method)
