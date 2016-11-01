﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t6109;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t23480;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t7493;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m43867(__this, method) (void)UnityEvent_1__ctor_m168358_gshared((UnityEvent_1_t23197 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m170637(__this, ___call, method) (void)UnityEvent_1_AddListener_m168360_gshared((UnityEvent_1_t23197 *)__this, (UnityAction_1_t8593 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m170638(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m168362_gshared((UnityEvent_1_t23197 *)__this, (UnityAction_1_t8593 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m43868(__this, ___name, ___targetObj, method) (MethodInfo_t1087 *)UnityEvent_1_FindMethod_Impl_m168363_gshared((UnityEvent_1_t23197 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m43869(__this, ___target, ___theFunction, method) (BaseInvokableCall_t7493 *)UnityEvent_1_GetDelegate_m168364_gshared((UnityEvent_1_t23197 *)__this, (Object_t *)___target, (MethodInfo_t1087 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m43870(__this/* static, unused */, ___action, method) (BaseInvokableCall_t7493 *)UnityEvent_1_GetDelegate_m168365_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t8593 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m43912(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m168366_gshared((UnityEvent_1_t23197 *)__this, (Object_t *)___arg0, method)
