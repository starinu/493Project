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

struct t1991;
struct t363;
struct t14;
struct t19;
struct t323;

#include "codegen/il2cpp-codegen.h"

extern "C" void m13254_gshared (t1991 * __this, const MethodInfo* method);
#define m13254(__this, method) (( void (*) (t1991 *, const MethodInfo*))m13254_gshared)(__this, method)
extern "C" t363 * m13255_gshared (t1991 * __this, t14* p0, t19 * p1, const MethodInfo* method);
#define m13255(__this, p0, p1, method) (( t363 * (*) (t1991 *, t14*, t19 *, const MethodInfo*))m13255_gshared)(__this, p0, p1, method)
extern "C" t323 * m13256_gshared (t1991 * __this, t19 * p0, t363 * p1, const MethodInfo* method);
#define m13256(__this, p0, p1, method) (( t323 * (*) (t1991 *, t19 *, t363 *, const MethodInfo*))m13256_gshared)(__this, p0, p1, method)
