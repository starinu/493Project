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

struct t2258;
struct t19;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16625_gshared (t2258 * __this, const MethodInfo* method);
#define m16625(__this, method) (( void (*) (t2258 *, const MethodInfo*))m16625_gshared)(__this, method)
extern "C" int32_t m16626_gshared (t2258 * __this, t19 * p0, t19 * p1, const MethodInfo* method);
#define m16626(__this, p0, p1, method) (( int32_t (*) (t2258 *, t19 *, t19 *, const MethodInfo*))m16626_gshared)(__this, p0, p1, method)
