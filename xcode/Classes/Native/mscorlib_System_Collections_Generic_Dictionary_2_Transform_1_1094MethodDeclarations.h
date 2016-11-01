﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,LitJson.ArrayMetadata>
struct Transform_1_t23769;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// LitJson.ArrayMetadata
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m172738 (Transform_1_t23769 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::Invoke(TKey,TValue)
 ArrayMetadata_t6295  Transform_1_Invoke_m172739 (Transform_1_t23769 * __this, Type_t * ___key, ArrayMetadata_t6295  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m172740 (Transform_1_t23769 * __this, Type_t * ___key, ArrayMetadata_t6295  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::EndInvoke(System.IAsyncResult)
 ArrayMetadata_t6295  Transform_1_EndInvoke_m172741 (Transform_1_t23769 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
