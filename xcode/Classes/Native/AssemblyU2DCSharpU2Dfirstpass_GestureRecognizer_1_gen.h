﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<DragGesture>
struct List_1_t8839;
// FingerGestures/FingerList
struct FingerList_t26;
// GestureRecognizer`1/GestureEventHandler<DragGesture>
struct GestureEventHandler_t8840;
// System.Predicate`1<DragGesture>
struct Predicate_1_t8841;
// GestureRecognizer
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognizer.h"
// GestureRecognizer`1<DragGesture>
struct GestureRecognizer_1_t984  : public GestureRecognizer_t25
{
	// System.Collections.Generic.List`1<T> GestureRecognizer`1<DragGesture>::gestures
	List_1_t8839 * ___gestures;
	// GestureRecognizer`1/GestureEventHandler<T> GestureRecognizer`1<DragGesture>::OnGesture
	GestureEventHandler_t8840 * ___OnGesture;
};
struct GestureRecognizer_1_t984_StaticFields{
	// FingerGestures/FingerList GestureRecognizer`1<DragGesture>::tempTouchList
	FingerList_t26 * ___tempTouchList;
	// System.Predicate`1<T> GestureRecognizer`1<DragGesture>::<>f__am$cache3
	Predicate_1_t8841 * ___U3CU3Ef__am$cache3;
};
