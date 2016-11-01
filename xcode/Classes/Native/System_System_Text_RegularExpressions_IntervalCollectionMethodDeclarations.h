﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t7295;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t7294;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
 void IntervalCollection__ctor_m50782 (IntervalCollection_t7295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
 Interval_t7292  IntervalCollection_get_Item_m50783 (IntervalCollection_t7295 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
 void IntervalCollection_Add_m50784 (IntervalCollection_t7295 * __this, Interval_t7292  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
 void IntervalCollection_Normalize_m50785 (IntervalCollection_t7295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
 IntervalCollection_t7295 * IntervalCollection_GetMetaCollection_m50786 (IntervalCollection_t7295 * __this, CostDelegate_t7294 * ___cost_del, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
 void IntervalCollection_Optimize_m50787 (IntervalCollection_t7295 * __this, int32_t ___begin, int32_t ___end, IntervalCollection_t7295 * ___meta, CostDelegate_t7294 * ___cost_del, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
 int32_t IntervalCollection_get_Count_m50788 (IntervalCollection_t7295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
 bool IntervalCollection_get_IsSynchronized_m50789 (IntervalCollection_t7295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
 Object_t * IntervalCollection_get_SyncRoot_m50790 (IntervalCollection_t7295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
 void IntervalCollection_CopyTo_m50791 (IntervalCollection_t7295 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
 Object_t * IntervalCollection_GetEnumerator_m50792 (IntervalCollection_t7295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;