﻿#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t6078;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t6124;
// UnityEngine.Coroutine
struct Coroutine_t5584;
struct Coroutine_t5584_marshaled;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.Scrollbar/Direction
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.Scrollbar
struct Scrollbar_t6127  : public Selectable_t6064
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t6078 * ___m_HandleRect;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_t6124 * ___m_OnValueChanged;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t6078 * ___m_ContainerRect;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t12  ___m_Offset;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t6129  ___m_Tracker;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t5584 * ___m_PointerDownRepeat;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging;
};
