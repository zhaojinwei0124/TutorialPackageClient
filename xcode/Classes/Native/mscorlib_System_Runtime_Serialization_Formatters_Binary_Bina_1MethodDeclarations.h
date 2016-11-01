﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t8073;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t8050;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t8085;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1038;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t8086;
// System.IO.BinaryReader
struct BinaryReader_t7900;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
 void BinaryFormatter__ctor_m55602 (BinaryFormatter_t8073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void BinaryFormatter__ctor_m55603 (BinaryFormatter_t8073 * __this, Object_t * ___selector, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
 Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m55604 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
 void BinaryFormatter_set_AssemblyFormat_m55605 (BinaryFormatter_t8073 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
 SerializationBinder_t8085 * BinaryFormatter_get_Binder_m55606 (BinaryFormatter_t8073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
 StreamingContext_t6414  BinaryFormatter_get_Context_m55607 (BinaryFormatter_t8073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
 Object_t * BinaryFormatter_get_SurrogateSelector_m55608 (BinaryFormatter_t8073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
 int32_t BinaryFormatter_get_FilterLevel_m55609 (BinaryFormatter_t8073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
 Object_t * BinaryFormatter_Deserialize_m55610 (BinaryFormatter_t8073 * __this, Stream_t1038 * ___serializationStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
 Object_t * BinaryFormatter_NoCheckDeserialize_m55611 (BinaryFormatter_t8073 * __this, Stream_t1038 * ___serializationStream, HeaderHandler_t8086 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
 void BinaryFormatter_ReadBinaryHeader_m55612 (BinaryFormatter_t8073 * __this, BinaryReader_t7900 * ___reader, bool* ___hasHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
