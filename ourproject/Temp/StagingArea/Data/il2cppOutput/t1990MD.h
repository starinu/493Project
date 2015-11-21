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

struct t1990;
struct t363;
struct t14;
struct t19;
struct t323;

#include "codegen/il2cpp-codegen.h"

extern "C" void m13251_gshared (t1990 * __this, const MethodInfo* method);
#define m13251(__this, method) (( void (*) (t1990 *, const MethodInfo*))m13251_gshared)(__this, method)
extern "C" t363 * m13252_gshared (t1990 * __this, t14* p0, t19 * p1, const MethodInfo* method);
#define m13252(__this, p0, p1, method) (( t363 * (*) (t1990 *, t14*, t19 *, const MethodInfo*))m13252_gshared)(__this, p0, p1, method)
extern "C" t323 * m13253_gshared (t1990 * __this, t19 * p0, t363 * p1, const MethodInfo* method);
#define m13253(__this, p0, p1, method) (( t323 * (*) (t1990 *, t19 *, t363 *, const MethodInfo*))m13253_gshared)(__this, p0, p1, method)
