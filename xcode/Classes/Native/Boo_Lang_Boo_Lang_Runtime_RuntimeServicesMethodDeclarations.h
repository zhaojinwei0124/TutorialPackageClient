﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.RuntimeServices
struct RuntimeServices_t5971;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t6362;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1042;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t6363;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t6378;
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
 void RuntimeServices__cctor_m44591 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
 Dispatcher_t6362 * RuntimeServices_GetDispatcher_m44592 (Object_t * __this/* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t1042* ___cacheKeyTypes, DispatcherFactory_t6363 * ___factory, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
 Object_t * RuntimeServices_Coerce_m44593 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
 Dispatcher_t6362 * RuntimeServices_CreateCoerceDispatcher_m44594 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
 Dispatcher_t6362 * RuntimeServices_EmitPromotionDispatcher_m44595 (Object_t * __this/* static, unused */, Type_t * ___fromType, Type_t * ___toType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
 bool RuntimeServices_IsPromotableNumeric_m44596 (Object_t * __this/* static, unused */, Type_t * ___fromType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
 Dispatcher_t6362 * RuntimeServices_EmitImplicitConversionDispatcher_m44597 (Object_t * __this/* static, unused */, MethodInfo_t1087 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
 Object_t * RuntimeServices_CoercibleDispatcher_m44598 (Object_t * __this/* static, unused */, Object_t * ___o, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
 Object_t * RuntimeServices_IdentityDispatcher_m44599 (Object_t * __this/* static, unused */, Object_t * ___o, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
 bool RuntimeServices_IsNumeric_m44600 (Object_t * __this/* static, unused */, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
 String_t* RuntimeServices_op_Addition_m42359 (Object_t * __this/* static, unused */, String_t* ___lhs, String_t* ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
 bool RuntimeServices_EqualityOperator_m44601 (Object_t * __this/* static, unused */, Object_t * ___lhs, Object_t * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
 bool RuntimeServices_ArrayEqualityImpl_m44602 (Object_t * __this/* static, unused */, Array_t * ___lhs, Array_t * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
 int32_t RuntimeServices_GetConvertTypeCode_m44603 (Object_t * __this/* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
 bool RuntimeServices_EqualityOperator_m44604 (Object_t * __this/* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
 bool RuntimeServices_IsPromotableNumeric_m44605 (Object_t * __this/* static, unused */, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
 MethodInfo_t1087 * RuntimeServices_FindImplicitConversionOperator_m44606 (Object_t * __this/* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
 Object_t* RuntimeServices_GetExtensionMethods_m44607 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
 MethodInfo_t1087 * RuntimeServices_FindImplicitConversionMethod_m44608 (Object_t * __this/* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
