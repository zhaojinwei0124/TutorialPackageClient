﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t6629;
// System.Text.RegularExpressions.Match
struct Match_t6630;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;

// System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Match)
 void MatchCollection__ctor_m50620 (MatchCollection_t6629 * __this, Match_t6630 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
 int32_t MatchCollection_get_Count_m45849 (MatchCollection_t6629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::get_IsSynchronized()
 bool MatchCollection_get_IsSynchronized_m50621 (MatchCollection_t6629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
 Match_t6630 * MatchCollection_get_Item_m45850 (MatchCollection_t6629 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
 Object_t * MatchCollection_get_SyncRoot_m50622 (MatchCollection_t6629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
 void MatchCollection_CopyTo_m50623 (MatchCollection_t6629 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
 Object_t * MatchCollection_GetEnumerator_m50624 (MatchCollection_t6629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::TryToGet(System.Int32)
 bool MatchCollection_TryToGet_m50625 (MatchCollection_t6629 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Text.RegularExpressions.MatchCollection::get_FullList()
 Object_t * MatchCollection_get_FullList_m50626 (MatchCollection_t6629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
