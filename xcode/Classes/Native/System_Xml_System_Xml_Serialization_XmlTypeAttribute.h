﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Serialization.XmlTypeAttribute
struct XmlTypeAttribute_t6858  : public Attribute_t6396
{
	// System.Boolean System.Xml.Serialization.XmlTypeAttribute::includeInSchema
	bool ___includeInSchema;
	// System.String System.Xml.Serialization.XmlTypeAttribute::ns
	String_t* ___ns;
	// System.String System.Xml.Serialization.XmlTypeAttribute::typeName
	String_t* ___typeName;
};
