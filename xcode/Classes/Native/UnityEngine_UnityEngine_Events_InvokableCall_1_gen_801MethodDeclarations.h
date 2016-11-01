﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t23266;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t6056;
// System.Object[]
struct ObjectU5BU5D_t142;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_1__ctor_m168869 (InvokableCall_1_t23266 * __this, Object_t * ___target, MethodInfo_t1087 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
 void InvokableCall_1__ctor_m168870 (InvokableCall_1_t23266 * __this, UnityAction_1_t6056 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
 void InvokableCall_1_Invoke_m168871 (InvokableCall_1_t23266 * __this, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_1_Find_m168872 (InvokableCall_1_t23266 * __this, Object_t * ___targetObj, MethodInfo_t1087 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
