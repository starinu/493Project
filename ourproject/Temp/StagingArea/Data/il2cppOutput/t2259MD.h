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

struct t2259;
struct t19;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16627_gshared (t2259 * __this, const MethodInfo* method);
#define m16627(__this, method) (( void (*) (t2259 *, const MethodInfo*))m16627_gshared)(__this, method)
extern "C" int32_t m16628_gshared (t2259 * __this, t19 * p0, const MethodInfo* method);
#define m16628(__this, p0, method) (( int32_t (*) (t2259 *, t19 *, const MethodInfo*))m16628_gshared)(__this, p0, method)
extern "C" bool m16629_gshared (t2259 * __this, t19 * p0, t19 * p1, const MethodInfo* method);
#define m16629(__this, p0, p1, method) (( bool (*) (t2259 *, t19 *, t19 *, const MethodInfo*))m16629_gshared)(__this, p0, p1, method)
