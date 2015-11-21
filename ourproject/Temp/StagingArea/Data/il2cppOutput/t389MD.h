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

struct t389;
struct t42;
struct t42_marshaled;
struct t363;
struct t158;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1651_gshared (t389 * __this, t42 * p0, t363 * p1, int32_t p2, const MethodInfo* method);
#define m1651(__this, p0, p1, p2, method) (( void (*) (t389 *, t42 *, t363 *, int32_t, const MethodInfo*))m1651_gshared)(__this, p0, p1, p2, method)
extern "C" void m13037_gshared (t389 * __this, t158* p0, const MethodInfo* method);
#define m13037(__this, p0, method) (( void (*) (t389 *, t158*, const MethodInfo*))m13037_gshared)(__this, p0, method)
