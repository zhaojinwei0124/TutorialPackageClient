﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// UnityEngine.HumanBone
struct HumanBone_t7545 
{
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t7544  ___limit;
};
// Native definition for marshalling of: UnityEngine.HumanBone
struct HumanBone_t7545_marshaled
{
	char* ___m_BoneName;
	char* ___m_HumanName;
	HumanLimit_t7544  ___limit;
};
