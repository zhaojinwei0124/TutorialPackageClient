﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t6077;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t6083;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t6085;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m43782(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m167741_gshared((ObjectPool_1_t23121 *)__this, (UnityAction_1_t8593 *)___actionOnGet, (UnityAction_1_t8593 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m169718(__this, method) (int32_t)ObjectPool_1_get_countAll_m167743_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m169719(__this, ___value, method) (void)ObjectPool_1_set_countAll_m167745_gshared((ObjectPool_1_t23121 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m169720(__this, method) (int32_t)ObjectPool_1_get_countActive_m167747_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m169721(__this, method) (int32_t)ObjectPool_1_get_countInactive_m167749_gshared((ObjectPool_1_t23121 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m43790(__this, method) (List_1_t6085 *)ObjectPool_1_Get_m167751_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m43794(__this, ___element, method) (void)ObjectPool_1_Release_m167753_gshared((ObjectPool_1_t23121 *)__this, (Object_t *)___element, method)