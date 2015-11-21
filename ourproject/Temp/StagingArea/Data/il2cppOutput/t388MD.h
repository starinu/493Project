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

struct t388;
struct t42;
struct t42_marshaled;
struct t363;
struct t158;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1650_gshared (t388 * __this, t42 * p0, t363 * p1, float p2, const MethodInfo* method);
#define m1650(__this, p0, p1, p2, method) (( void (*) (t388 *, t42 *, t363 *, float, const MethodInfo*))m1650_gshared)(__this, p0, p1, p2, method)
extern "C" void m13029_gshared (t388 * __this, t158* p0, const MethodInfo* method);
#define m13029(__this, p0, method) (( void (*) (t388 *, t158*, const MethodInfo*))m13029_gshared)(__this, p0, method)
