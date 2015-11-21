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

struct t1989;
struct t363;
struct t14;
struct t19;
struct t323;

#include "codegen/il2cpp-codegen.h"

extern "C" void m13248_gshared (t1989 * __this, const MethodInfo* method);
#define m13248(__this, method) (( void (*) (t1989 *, const MethodInfo*))m13248_gshared)(__this, method)
extern "C" t363 * m13249_gshared (t1989 * __this, t14* p0, t19 * p1, const MethodInfo* method);
#define m13249(__this, p0, p1, method) (( t363 * (*) (t1989 *, t14*, t19 *, const MethodInfo*))m13249_gshared)(__this, p0, p1, method)
extern "C" t323 * m13250_gshared (t1989 * __this, t19 * p0, t363 * p1, const MethodInfo* method);
#define m13250(__this, p0, p1, method) (( t323 * (*) (t1989 *, t19 *, t363 *, const MethodInfo*))m13250_gshared)(__this, p0, p1, method)
