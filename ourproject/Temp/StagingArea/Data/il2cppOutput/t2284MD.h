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

struct t2284;
struct t19;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16873_gshared (t2284 * __this, const MethodInfo* method);
#define m16873(__this, method) (( void (*) (t2284 *, const MethodInfo*))m16873_gshared)(__this, method)
extern "C" void m16874_gshared (t19 * __this , const MethodInfo* method);
#define m16874(__this , method) (( void (*) (t19 * , const MethodInfo*))m16874_gshared)(__this , method)
extern "C" int32_t m16875_gshared (t2284 * __this, t19 * p0, t19 * p1, const MethodInfo* method);
#define m16875(__this, p0, p1, method) (( int32_t (*) (t2284 *, t19 *, t19 *, const MethodInfo*))m16875_gshared)(__this, p0, p1, method)
extern "C" t2284 * m16876_gshared (t19 * __this , const MethodInfo* method);
#define m16876(__this , method) (( t2284 * (*) (t19 * , const MethodInfo*))m16876_gshared)(__this , method)
