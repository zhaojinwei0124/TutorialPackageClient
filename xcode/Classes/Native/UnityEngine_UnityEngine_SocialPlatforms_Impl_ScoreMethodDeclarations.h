﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t7449;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
 void Score__ctor_m51560 (Score_t7449 * __this, String_t* ___leaderboardID, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
 void Score__ctor_m51561 (Score_t7449 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t1171  ___date, String_t* ___formattedValue, int32_t ___rank, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
 String_t* Score_ToString_m51562 (Score_t7449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
 String_t* Score_get_leaderboardID_m51563 (Score_t7449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
 void Score_set_leaderboardID_m51564 (Score_t7449 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
 int64_t Score_get_value_m51565 (Score_t7449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
 void Score_set_value_m51566 (Score_t7449 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
