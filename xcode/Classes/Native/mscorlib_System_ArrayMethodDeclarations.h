﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Int64[]
struct Int64U5BU5D_t6861;
// System.Collections.IComparer
struct IComparer_t7107;
// System.Array/Swapper
struct Swapper_t7739;
// System.Double[]
struct DoubleU5BU5D_t7740;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.Array::.ctor()
 void Array__ctor_m53402 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
 Object_t * Array_System_Collections_IList_get_Item_m53403 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
 void Array_System_Collections_IList_set_Item_m53404 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
 int32_t Array_System_Collections_IList_Add_m53405 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
 void Array_System_Collections_IList_Clear_m53406 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
 bool Array_System_Collections_IList_Contains_m53407 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
 int32_t Array_System_Collections_IList_IndexOf_m53408 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
 void Array_System_Collections_IList_Insert_m53409 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
 void Array_System_Collections_IList_Remove_m53410 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
 void Array_System_Collections_IList_RemoveAt_m53411 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
 int32_t Array_System_Collections_ICollection_get_Count_m53412 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
 int32_t Array_InternalArray__ICollection_get_Count_m53413 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
 bool Array_InternalArray__ICollection_get_IsReadOnly_m53414 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
 void Array_InternalArray__ICollection_Clear_m53415 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
 void Array_InternalArray__RemoveAt_m53416 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
 int32_t Array_get_Length_m42374 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
 int64_t Array_get_LongLength_m53417 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
 int32_t Array_get_Rank_m44678 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
 int32_t Array_GetRank_m53418 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
 int32_t Array_GetLength_m41754 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
 int64_t Array_GetLongLength_m53419 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
 int32_t Array_GetLowerBound_m53420 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
 Object_t * Array_GetValue_m53421 (Array_t * __this, Int32U5BU5D_t116* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
 void Array_SetValue_m53422 (Array_t * __this, Object_t * ___value, Int32U5BU5D_t116* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
 Object_t * Array_GetValueImpl_m53423 (Array_t * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
 void Array_SetValueImpl_m53424 (Array_t * __this, Object_t * ___value, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
 bool Array_FastCopy_m53425 (Object_t * __this/* static, unused */, Array_t * ___source, int32_t ___source_idx, Array_t * ___dest, int32_t ___dest_idx, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
 Array_t * Array_CreateInstanceImpl_m53426 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int32U5BU5D_t116* ___lengths, Int32U5BU5D_t116* ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
 bool Array_get_IsSynchronized_m53427 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
 Object_t * Array_get_SyncRoot_m53428 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
 bool Array_get_IsFixedSize_m53429 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
 bool Array_get_IsReadOnly_m53430 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
 Object_t * Array_GetEnumerator_m38840 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
 int32_t Array_GetUpperBound_m53431 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
 Object_t * Array_GetValue_m44679 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
 Object_t * Array_GetValue_m53432 (Array_t * __this, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
 Object_t * Array_GetValue_m53433 (Array_t * __this, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
 Object_t * Array_GetValue_m53434 (Array_t * __this, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
 Object_t * Array_GetValue_m53435 (Array_t * __this, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
 Object_t * Array_GetValue_m53436 (Array_t * __this, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
 void Array_SetValue_m53437 (Array_t * __this, Object_t * ___value, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
 void Array_SetValue_m53438 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
 void Array_SetValue_m53439 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
 void Array_SetValue_m38826 (Array_t * __this, Object_t * ___value, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
 void Array_SetValue_m53440 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
 void Array_SetValue_m53441 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
 Array_t * Array_CreateInstance_m38825 (Object_t * __this/* static, unused */, Type_t * ___elementType, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
 Array_t * Array_CreateInstance_m53442 (Object_t * __this/* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
 Array_t * Array_CreateInstance_m53443 (Object_t * __this/* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, int32_t ___length3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
 Array_t * Array_CreateInstance_m53444 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int32U5BU5D_t116* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
 Array_t * Array_CreateInstance_m53445 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int32U5BU5D_t116* ___lengths, Int32U5BU5D_t116* ___lowerBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
 Int32U5BU5D_t116* Array_GetIntArray_m53446 (Object_t * __this/* static, unused */, Int64U5BU5D_t6861* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
 Array_t * Array_CreateInstance_m53447 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int64U5BU5D_t6861* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
 Object_t * Array_GetValue_m53448 (Array_t * __this, Int64U5BU5D_t6861* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
 void Array_SetValue_m53449 (Array_t * __this, Object_t * ___value, Int64U5BU5D_t6861* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
 int32_t Array_BinarySearch_m53450 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
 int32_t Array_BinarySearch_m53451 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
 int32_t Array_BinarySearch_m53452 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
 int32_t Array_BinarySearch_m53453 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
 int32_t Array_DoBinarySearch_m53454 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
 void Array_Clear_m40307 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
 void Array_ClearInternal_m53455 (Object_t * __this/* static, unused */, Array_t * ___a, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
 Object_t * Array_Clone_m40381 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
 void Array_Copy_m41478 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
 void Array_Copy_m39006 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
 void Array_Copy_m53456 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, int64_t ___sourceIndex, Array_t * ___destinationArray, int64_t ___destinationIndex, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
 void Array_Copy_m53457 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
 int32_t Array_IndexOf_m53458 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
 int32_t Array_IndexOf_m53459 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
 int32_t Array_IndexOf_m53460 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
 void Array_Initialize_m51259 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
 int32_t Array_LastIndexOf_m53461 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
 int32_t Array_LastIndexOf_m53462 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
 int32_t Array_LastIndexOf_m53463 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
 Swapper_t7739 * Array_get_swapper_m53464 (Object_t * __this/* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
 void Array_Reverse_m45626 (Object_t * __this/* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
 void Array_Reverse_m45705 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
 void Array_Sort_m53465 (Object_t * __this/* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
 void Array_Sort_m53466 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
 void Array_Sort_m52754 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
 void Array_Sort_m53467 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
 void Array_Sort_m53468 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
 void Array_Sort_m53469 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
 void Array_Sort_m53470 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
 void Array_Sort_m53471 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
 void Array_int_swapper_m53472 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
 void Array_obj_swapper_m53473 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
 void Array_slow_swapper_m53474 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
 void Array_double_swapper_m53475 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
 int32_t Array_new_gap_m53476 (Object_t * __this/* static, unused */, int32_t ___gap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
 void Array_combsort_m53477 (Object_t * __this/* static, unused */, DoubleU5BU5D_t7740* ___array, int32_t ___start, int32_t ___size, Swapper_t7739 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
 void Array_combsort_m53478 (Object_t * __this/* static, unused */, Int32U5BU5D_t116* ___array, int32_t ___start, int32_t ___size, Swapper_t7739 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
 void Array_combsort_m53479 (Object_t * __this/* static, unused */, CharU5BU5D_t1016* ___array, int32_t ___start, int32_t ___size, Swapper_t7739 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
 void Array_qsort_m53480 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___low0, int32_t ___high0, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
 void Array_swap_m53481 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
 int32_t Array_compare_m53482 (Object_t * __this/* static, unused */, Object_t * ___value1, Object_t * ___value2, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
 void Array_CopyTo_m6524 (Array_t * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
 void Array_CopyTo_m53483 (Array_t * __this, Array_t * ___array, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
 void Array_ConstrainedCopy_m53484 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;