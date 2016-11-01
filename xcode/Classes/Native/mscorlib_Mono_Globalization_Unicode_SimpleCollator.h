﻿#pragma once
#include <stdint.h>
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t7785;
// System.Globalization.TextInfo
struct TextInfo_t7786;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t7770;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t7778;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t7779;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t7785  : public Object_t
{
	// System.Globalization.TextInfo Mono.Globalization.Unicode.SimpleCollator::textInfo
	TextInfo_t7786 * ___textInfo;
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::frenchSort
	bool ___frenchSort;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkCatTable
	uint8_t* ___cjkCatTable;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv1Table
	uint8_t* ___cjkLv1Table;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkIndexer
	CodePointIndexer_t7770 * ___cjkIndexer;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv2Table
	uint8_t* ___cjkLv2Table;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkLv2Indexer
	CodePointIndexer_t7770 * ___cjkLv2Indexer;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator::lcid
	int32_t ___lcid;
	// Mono.Globalization.Unicode.Contraction[] Mono.Globalization.Unicode.SimpleCollator::contractions
	ContractionU5BU5D_t7778* ___contractions;
	// Mono.Globalization.Unicode.Level2Map[] Mono.Globalization.Unicode.SimpleCollator::level2Maps
	Level2MapU5BU5D_t7779* ___level2Maps;
	// System.Byte[] Mono.Globalization.Unicode.SimpleCollator::unsafeFlags
	ByteU5BU5D_t1033* ___unsafeFlags;
};
struct SimpleCollator_t7785_StaticFields{
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckDisabled
	bool ___QuickCheckDisabled;
	// Mono.Globalization.Unicode.SimpleCollator Mono.Globalization.Unicode.SimpleCollator::invariant
	SimpleCollator_t7785 * ___invariant;
};
