﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Object
#include "mscorlib_System_Object.h"
// System.String
struct String_t  : public Object_t
{
	// System.Int32 System.String::length
	int32_t ___length;
	// System.Char System.String::start_char
	uint16_t ___start_char;
};
struct String_t_StaticFields{
	// System.String System.String::Empty
	String_t* ___Empty;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1016* ___WhiteChars;
};
