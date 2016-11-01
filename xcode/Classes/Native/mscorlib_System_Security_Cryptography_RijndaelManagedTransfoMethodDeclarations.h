﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t8137;
// System.Security.Cryptography.Rijndael
struct Rijndael_t6616;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelManagedTransform__ctor_m55951 (RijndaelManagedTransform_t8137 * __this, Rijndael_t6616 * ___algo, bool ___encryption, ByteU5BU5D_t1033* ___key, ByteU5BU5D_t1033* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
 void RijndaelManagedTransform_System_IDisposable_Dispose_m55952 (RijndaelManagedTransform_t8137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
 bool RijndaelManagedTransform_get_CanReuseTransform_m55953 (RijndaelManagedTransform_t8137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t RijndaelManagedTransform_TransformBlock_m55954 (RijndaelManagedTransform_t8137 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t1033* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t1033* RijndaelManagedTransform_TransformFinalBlock_m55955 (RijndaelManagedTransform_t8137 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
