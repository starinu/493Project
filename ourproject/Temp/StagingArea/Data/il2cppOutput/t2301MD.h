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

struct t2301;
struct t19;
struct t180;
struct t181;

#include "codegen/il2cpp-codegen.h"
#include "t44.h"

extern "C" void m17076_gshared (t2301 * __this, t19 * p0, t44 p1, const MethodInfo* method);
#define m17076(__this, p0, p1, method) (( void (*) (t2301 *, t19 *, t44, const MethodInfo*))m17076_gshared)(__this, p0, p1, method)
extern "C" t19 * m17077_gshared (t2301 * __this, const MethodInfo* method);
#define m17077(__this, method) (( t19 * (*) (t2301 *, const MethodInfo*))m17077_gshared)(__this, method)
extern "C" t19 * m17078_gshared (t2301 * __this, t181 * p0, t19 * p1, const MethodInfo* method);
#define m17078(__this, p0, p1, method) (( t19 * (*) (t2301 *, t181 *, t19 *, const MethodInfo*))m17078_gshared)(__this, p0, p1, method)
extern "C" t19 * m17079_gshared (t2301 * __this, t19 * p0, const MethodInfo* method);
#define m17079(__this, p0, method) (( t19 * (*) (t2301 *, t19 *, const MethodInfo*))m17079_gshared)(__this, p0, method)
