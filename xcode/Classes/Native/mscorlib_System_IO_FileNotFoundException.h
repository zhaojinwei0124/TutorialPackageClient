﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.IO.IOException
#include "mscorlib_System_IO_IOException.h"
// System.IO.FileNotFoundException
struct FileNotFoundException_t7908  : public IOException_t141
{
	// System.String System.IO.FileNotFoundException::fileName
	String_t* ___fileName;
	// System.String System.IO.FileNotFoundException::fusionLog
	String_t* ___fusionLog;
};
