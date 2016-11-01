﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t8038;
// System.String[]
struct StringU5BU5D_t333;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t8045;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.IDictionary
struct IDictionary_t1061;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
 void MethodDictionary__ctor_m55449 (MethodDictionary_t8038 * __this, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
 Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m55450 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
 void MethodDictionary_set_MethodKeys_m55451 (MethodDictionary_t8038 * __this, StringU5BU5D_t333* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
 Object_t * MethodDictionary_AllocInternalProperties_m55452 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
 Object_t * MethodDictionary_GetInternalProperties_m55453 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
 bool MethodDictionary_IsOverridenKey_m55454 (MethodDictionary_t8038 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsFixedSize()
 bool MethodDictionary_get_IsFixedSize_m55455 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsReadOnly()
 bool MethodDictionary_get_IsReadOnly_m55456 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
 Object_t * MethodDictionary_get_Item_m55457 (MethodDictionary_t8038 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
 void MethodDictionary_set_Item_m55458 (MethodDictionary_t8038 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
 Object_t * MethodDictionary_GetMethodProperty_m55459 (MethodDictionary_t8038 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
 void MethodDictionary_SetMethodProperty_m55460 (MethodDictionary_t8038 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
 Object_t * MethodDictionary_get_Keys_m55461 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
 Object_t * MethodDictionary_get_Values_m55462 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
 void MethodDictionary_Add_m55463 (MethodDictionary_t8038 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Clear()
 void MethodDictionary_Clear_m55464 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
 bool MethodDictionary_Contains_m55465 (MethodDictionary_t8038 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
 void MethodDictionary_Remove_m55466 (MethodDictionary_t8038 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
 int32_t MethodDictionary_get_Count_m55467 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
 bool MethodDictionary_get_IsSynchronized_m55468 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
 Object_t * MethodDictionary_get_SyncRoot_m55469 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
 void MethodDictionary_CopyTo_m55470 (MethodDictionary_t8038 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
 Object_t * MethodDictionary_GetEnumerator_m55471 (MethodDictionary_t8038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;