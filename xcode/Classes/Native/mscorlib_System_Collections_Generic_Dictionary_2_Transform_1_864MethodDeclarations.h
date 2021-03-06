﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.Collections.Generic.KeyValuePair`2<System.UInt64,Relation>>
struct Transform_1_t17586;
// System.Object
struct Object_t;
// Relation
struct Relation_t1442;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,Relation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.Collections.Generic.KeyValuePair`2<System.UInt64,Relation>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m130661 (Transform_1_t17586 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.Collections.Generic.KeyValuePair`2<System.UInt64,Relation>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5563  Transform_1_Invoke_m130662 (Transform_1_t17586 * __this, uint64_t ___key, Relation_t1442 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.Collections.Generic.KeyValuePair`2<System.UInt64,Relation>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m130663 (Transform_1_t17586 * __this, uint64_t ___key, Relation_t1442 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.Collections.Generic.KeyValuePair`2<System.UInt64,Relation>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5563  Transform_1_EndInvoke_m130664 (Transform_1_t17586 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
