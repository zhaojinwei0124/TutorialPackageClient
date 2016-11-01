﻿#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t6881;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct WriteCallbackInfo_t6882  : public Object_t
{
	// System.Type System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo::Type
	Type_t * ___Type;
	// System.String System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo::TypeName
	String_t* ___TypeName;
	// System.String System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo::TypeNs
	String_t* ___TypeNs;
	// System.Xml.Serialization.XmlSerializationReadCallback System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo::Callback
	XmlSerializationReadCallback_t6881 * ___Callback;
};
