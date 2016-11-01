﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.UInt32>
struct Predicate_1_t20461;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m149174 (Predicate_1_t20461 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.UInt32>::Invoke(T)
 bool Predicate_1_Invoke_m149175 (Predicate_1_t20461 * __this, uint32_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m149176 (Predicate_1_t20461 * __this, uint32_t ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.UInt32>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m149177 (Predicate_1_t20461 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
