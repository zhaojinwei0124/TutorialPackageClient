﻿#pragma once
#include <stdint.h>
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t7978;
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.MonoProperty
struct MonoProperty_t7976  : public PropertyInfo_t5355
{
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t24 ___klass;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t24 ___prop;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t7975  ___info;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t7978 * ___cached_getter;
};
