﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Single>
struct Predicate_1_t20295;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m147736 (Predicate_1_t20295 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
 bool Predicate_1_Invoke_m147737 (Predicate_1_t20295 * __this, float ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m147738 (Predicate_1_t20295 * __this, float ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m147739 (Predicate_1_t20295 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
