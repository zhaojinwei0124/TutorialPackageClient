﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ObjRef
struct ObjRef_t8058;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t8068;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t8070;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t8069;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.ObjRef::.ctor()
 void ObjRef__ctor_m55544 (ObjRef_t8058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjRef__ctor_m55545 (ObjRef_t8058 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
 void ObjRef__cctor_m55546 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
 bool ObjRef_get_IsReferenceToWellKnow_m55547 (ObjRef_t8058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
 Object_t * ObjRef_get_ChannelInfo_m55548 (ObjRef_t8058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
 Object_t * ObjRef_get_EnvoyInfo_m55549 (ObjRef_t8058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
 void ObjRef_set_EnvoyInfo_m55550 (ObjRef_t8058 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
 Object_t * ObjRef_get_TypeInfo_m55551 (ObjRef_t8058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
 void ObjRef_set_TypeInfo_m55552 (ObjRef_t8058 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ObjRef::get_URI()
 String_t* ObjRef_get_URI_m55553 (ObjRef_t8058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
 void ObjRef_set_URI_m55554 (ObjRef_t8058 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjRef_GetObjectData_m55555 (ObjRef_t8058 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * ObjRef_GetRealObject_m55556 (ObjRef_t8058 * __this, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
 void ObjRef_UpdateChannelInfo_m55557 (ObjRef_t8058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
 Type_t * ObjRef_get_ServerType_m55558 (ObjRef_t8058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;