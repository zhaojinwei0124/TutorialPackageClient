﻿#pragma once
#include <stdint.h>
// Mono.Security.X509.X509Stores
struct X509Stores_t6504;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.X509StoreManager
struct X509StoreManager_t6505  : public Object_t
{
};
struct X509StoreManager_t6505_StaticFields{
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t6504 * ____userStore;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t6504 * ____machineStore;
};
