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

struct t391;
struct t42;
struct t42_marshaled;
struct t363;
struct t158;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1653_gshared (t391 * __this, t42 * p0, t363 * p1, bool p2, const MethodInfo* method);
#define m1653(__this, p0, p1, p2, method) (( void (*) (t391 *, t42 *, t363 *, bool, const MethodInfo*))m1653_gshared)(__this, p0, p1, p2, method)
extern "C" void m13051_gshared (t391 * __this, t158* p0, const MethodInfo* method);
#define m13051(__this, p0, method) (( void (*) (t391 *, t158*, const MethodInfo*))m13051_gshared)(__this, p0, method)
