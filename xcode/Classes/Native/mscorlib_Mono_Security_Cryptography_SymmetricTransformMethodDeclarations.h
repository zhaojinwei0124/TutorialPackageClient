﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t7812;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t6484;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
 void SymmetricTransform__ctor_m53875 (SymmetricTransform_t7812 * __this, SymmetricAlgorithm_t6484 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t1033* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
 void SymmetricTransform_System_IDisposable_Dispose_m53876 (SymmetricTransform_t7812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
 void SymmetricTransform_Finalize_m53877 (SymmetricTransform_t7812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
 void SymmetricTransform_Dispose_m53878 (SymmetricTransform_t7812 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
 bool SymmetricTransform_get_CanReuseTransform_m53879 (SymmetricTransform_t7812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
 void SymmetricTransform_Transform_m53880 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___input, ByteU5BU5D_t1033* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[])
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
 void SymmetricTransform_CBC_m53881 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___input, ByteU5BU5D_t1033* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
 void SymmetricTransform_CFB_m53882 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___input, ByteU5BU5D_t1033* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
 void SymmetricTransform_OFB_m53883 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___input, ByteU5BU5D_t1033* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
 void SymmetricTransform_CTS_m53884 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___input, ByteU5BU5D_t1033* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
 void SymmetricTransform_CheckInput_m53885 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t SymmetricTransform_TransformBlock_m53886 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t1033* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
 bool SymmetricTransform_get_KeepLastBlock_m53887 (SymmetricTransform_t7812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t SymmetricTransform_InternalTransformBlock_m53888 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t1033* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
 void SymmetricTransform_Random_m53889 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
 void SymmetricTransform_ThrowBadPaddingException_m53890 (SymmetricTransform_t7812 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t1033* SymmetricTransform_FinalEncrypt_m53891 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t1033* SymmetricTransform_FinalDecrypt_m53892 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t1033* SymmetricTransform_TransformFinalBlock_m53893 (SymmetricTransform_t7812 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
