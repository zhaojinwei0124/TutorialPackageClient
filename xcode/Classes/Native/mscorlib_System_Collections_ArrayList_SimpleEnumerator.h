﻿#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.ArrayList/SimpleEnumerator
struct SimpleEnumerator_t7858  : public Object_t
{
	// System.Collections.ArrayList System.Collections.ArrayList/SimpleEnumerator::list
	ArrayList_t5157 * ___list;
	// System.Int32 System.Collections.ArrayList/SimpleEnumerator::index
	int32_t ___index;
	// System.Int32 System.Collections.ArrayList/SimpleEnumerator::version
	int32_t ___version;
	// System.Object System.Collections.ArrayList/SimpleEnumerator::currentElement
	Object_t * ___currentElement;
};
struct SimpleEnumerator_t7858_StaticFields{
	// System.Object System.Collections.ArrayList/SimpleEnumerator::endFlag
	Object_t * ___endFlag;
};