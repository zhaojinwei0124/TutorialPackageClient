﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t7920;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t5906;
// System.Exception
struct Exception_t972;

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
 void StreamAsyncResult__ctor_m54682 (StreamAsyncResult_t7920 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
 void StreamAsyncResult_SetComplete_m54683 (StreamAsyncResult_t7920 * __this, Exception_t972 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
 void StreamAsyncResult_SetComplete_m54684 (StreamAsyncResult_t7920 * __this, Exception_t972 * ___e, int32_t ___nbytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
 Object_t * StreamAsyncResult_get_AsyncState_m54685 (StreamAsyncResult_t7920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t5906 * StreamAsyncResult_get_AsyncWaitHandle_m54686 (StreamAsyncResult_t7920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
 bool StreamAsyncResult_get_IsCompleted_m54687 (StreamAsyncResult_t7920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
 Exception_t972 * StreamAsyncResult_get_Exception_m54688 (StreamAsyncResult_t7920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
 int32_t StreamAsyncResult_get_NBytes_m54689 (StreamAsyncResult_t7920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
 bool StreamAsyncResult_get_Done_m54690 (StreamAsyncResult_t7920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
 void StreamAsyncResult_set_Done_m54691 (StreamAsyncResult_t7920 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
