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

struct t1971;
struct t42;
struct t42_marshaled;
struct t363;
struct t19;
struct t158;

#include "codegen/il2cpp-codegen.h"

extern "C" void m13027_gshared (t1971 * __this, t42 * p0, t363 * p1, t19 * p2, const MethodInfo* method);
#define m13027(__this, p0, p1, p2, method) (( void (*) (t1971 *, t42 *, t363 *, t19 *, const MethodInfo*))m13027_gshared)(__this, p0, p1, p2, method)
extern "C" void m13028_gshared (t1971 * __this, t158* p0, const MethodInfo* method);
#define m13028(__this, p0, method) (( void (*) (t1971 *, t158*, const MethodInfo*))m13028_gshared)(__this, p0, method)
