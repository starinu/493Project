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

struct t1880;
struct t19;

#include "codegen/il2cpp-codegen.h"

extern "C" void m11940_gshared (t1880 * __this, const MethodInfo* method);
#define m11940(__this, method) (( void (*) (t1880 *, const MethodInfo*))m11940_gshared)(__this, method)
extern "C" void m11941_gshared (t19 * __this , const MethodInfo* method);
#define m11941(__this , method) (( void (*) (t19 * , const MethodInfo*))m11941_gshared)(__this , method)
extern "C" int32_t m11942_gshared (t1880 * __this, t19 * p0, t19 * p1, const MethodInfo* method);
#define m11942(__this, p0, p1, method) (( int32_t (*) (t1880 *, t19 *, t19 *, const MethodInfo*))m11942_gshared)(__this, p0, p1, method)
extern "C" t1880 * m11943_gshared (t19 * __this , const MethodInfo* method);
#define m11943(__this , method) (( t1880 * (*) (t19 * , const MethodInfo*))m11943_gshared)(__this , method)
