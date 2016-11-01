﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.ParameterInfo
struct ParameterInfo_t5488;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t1069;
// System.String
struct String_t;
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t7935;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"

// System.Void System.Reflection.ParameterInfo::.ctor()
 void ParameterInfo__ctor_m55254 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
 void ParameterInfo__ctor_m55255 (ParameterInfo_t5488 * __this, ParameterBuilder_t7935 * ___pb, Type_t * ___type, MemberInfo_t1069 * ___member, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
 void ParameterInfo__ctor_m55256 (ParameterInfo_t5488 * __this, ParameterInfo_t5488 * ___pinfo, MemberInfo_t1069 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::ToString()
 String_t* ParameterInfo_ToString_m55257 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
 Type_t * ParameterInfo_get_ParameterType_m38788 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
 int32_t ParameterInfo_get_Attributes_m55258 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
 bool ParameterInfo_get_IsIn_m55259 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
 bool ParameterInfo_get_IsOptional_m55260 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
 bool ParameterInfo_get_IsOut_m55261 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
 bool ParameterInfo_get_IsRetval_m55262 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
 MemberInfo_t1069 * ParameterInfo_get_Member_m55263 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::get_Name()
 String_t* ParameterInfo_get_Name_m55264 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.ParameterInfo::get_Position()
 int32_t ParameterInfo_get_Position_m55265 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t142* ParameterInfo_GetCustomAttributes_m55266 (ParameterInfo_t5488 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t142* ParameterInfo_GetCustomAttributes_m55267 (ParameterInfo_t5488 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
 bool ParameterInfo_IsDefined_m55268 (ParameterInfo_t5488 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
 ObjectU5BU5D_t142* ParameterInfo_GetPseudoCustomAttributes_m55269 (ParameterInfo_t5488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
