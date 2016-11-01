﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5992;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5982;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.AxisEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void AxisEventData__ctor_m42501 (AxisEventData_t5992 * __this, EventSystem_t5982 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
 Vector2_t12  AxisEventData_get_moveVector_m42502 (AxisEventData_t5992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveVector(UnityEngine.Vector2)
 void AxisEventData_set_moveVector_m42503 (AxisEventData_t5992 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::get_moveDir()
 int32_t AxisEventData_get_moveDir_m42504 (AxisEventData_t5992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveDir(UnityEngine.EventSystems.MoveDirection)
 void AxisEventData_set_moveDir_m42505 (AxisEventData_t5992 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
