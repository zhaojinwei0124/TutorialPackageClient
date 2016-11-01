﻿#pragma once
#include <stdint.h>
// UnityEngine.RectOffset
struct RectOffset_t6174;
// UnityEngine.RectTransform
struct RectTransform_t6078;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t6175;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t6170  : public UIBehaviour_t5983
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6174 * ___m_Padding;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6078 * ___m_Rect;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t6129  ___m_Tracker;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t12  ___m_TotalMinSize;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t12  ___m_TotalPreferredSize;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t12  ___m_TotalFlexibleSize;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t6175 * ___m_RectChildren;
};