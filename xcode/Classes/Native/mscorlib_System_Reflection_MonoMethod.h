﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoMethod
struct MonoMethod_t7971  : public MethodInfo_t1087
{
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t24 ___mhandle;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype;
};
