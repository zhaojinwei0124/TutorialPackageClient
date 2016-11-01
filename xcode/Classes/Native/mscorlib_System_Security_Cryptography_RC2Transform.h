﻿#pragma once
#include <stdint.h>
// System.UInt16[]
struct UInt16U5BU5D_t7204;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.Cryptography.SymmetricTransform
#include "mscorlib_Mono_Security_Cryptography_SymmetricTransform.h"
// System.Security.Cryptography.RC2Transform
struct RC2Transform_t8130  : public SymmetricTransform_t7812
{
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t7204* ___K;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j;
};
struct RC2Transform_t8130_StaticFields{
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t1033* ___pitable;
};
