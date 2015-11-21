#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2318;
struct t19;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17241_gshared (t2318 * __this, const MethodInfo* method);
#define m17241(__this, method) (( void (*) (t2318 *, const MethodInfo*))m17241_gshared)(__this, method)
extern "C" void m17242_gshared (t19 * __this , const MethodInfo* method);
#define m17242(__this , method) (( void (*) (t19 * , const MethodInfo*))m17242_gshared)(__this , method)
extern "C" int32_t m17243_gshared (t2318 * __this, t19 * p0, t19 * p1, const MethodInfo* method);
#define m17243(__this, p0, p1, method) (( int32_t (*) (t2318 *, t19 *, t19 *, const MethodInfo*))m17243_gshared)(__this, p0, p1, method)
extern "C" t2318 * m17244_gshared (t19 * __this , const MethodInfo* method);
#define m17244(__this , method) (( t2318 * (*) (t19 * , const MethodInfo*))m17244_gshared)(__this , method)
