﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.IO.FileSystemInfo
#include "mscorlib_System_IO_FileSystemInfo.h"
// System.IO.DirectoryInfo
struct DirectoryInfo_t7902  : public FileSystemInfo_t7903
{
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent;
};
