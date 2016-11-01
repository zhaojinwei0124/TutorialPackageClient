﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.String>
struct Action_1_t4407;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m148409(__this, ___object, ___method, method) (void)Action_1__ctor_m148410_gshared((Action_1_t20380 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Void System.Action`1<System.String>::Invoke(T)
#define Action_1_Invoke_m40536(__this, ___obj, method) (void)Action_1_Invoke_m148411_gshared((Action_1_t20380 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Action`1<System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m148412(__this, ___obj, ___callback, ___object, method) (Object_t *)Action_1_BeginInvoke_m148413_gshared((Action_1_t20380 *)__this, (Object_t *)___obj, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Void System.Action`1<System.String>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m148414(__this, ___result, method) (void)Action_1_EndInvoke_m148415_gshared((Action_1_t20380 *)__this, (Object_t *)___result, method)
