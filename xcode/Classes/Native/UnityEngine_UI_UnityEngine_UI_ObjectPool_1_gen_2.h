﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct Stack_1_t23672;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t6190;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t6189  : public Object_t
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::m_Stack
	Stack_1_t23672 * ___m_Stack;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::m_ActionOnGet
	UnityAction_1_t6190 * ___m_ActionOnGet;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::m_ActionOnRelease
	UnityAction_1_t6190 * ___m_ActionOnRelease;
	// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField;
};
