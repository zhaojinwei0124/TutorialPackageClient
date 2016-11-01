﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// <Module>
struct U3CModuleU3E_t7729;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t7730;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t7731;

// System.String <Module>::UnsupportedMember_String(System.Security.SecurityElement,System.String)
 String_t* U3CModuleU3E_UnsupportedMember_String_m52853 (Object_t * __this/* static, unused */, SecurityElement_t7730 * ___self, String_t* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object <Module>::UnsupportedMember_Object(System.Type,System.String,System.Object[],System.String)
 Object_t * U3CModuleU3E_UnsupportedMember_Object_m52854 (Object_t * __this/* static, unused */, Type_t * ___objectType, String_t* ___url, ObjectU5BU5D_t142* ___activationAttributes, String_t* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink <Module>::UnsupportedMember_IMessageSink(System.String,System.Object,System.String&,System.String)
 Object_t * U3CModuleU3E_UnsupportedMember_IMessageSink_m52855 (Object_t * __this/* static, unused */, String_t* ___url, Object_t * ___channelData, String_t** ___objectUri, String_t* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;