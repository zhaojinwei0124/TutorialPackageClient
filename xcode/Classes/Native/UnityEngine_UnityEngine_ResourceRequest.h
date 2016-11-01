﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
// UnityEngine.ResourceRequest
struct ResourceRequest_t7564  : public AsyncOperation_t2007
{
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type;
};