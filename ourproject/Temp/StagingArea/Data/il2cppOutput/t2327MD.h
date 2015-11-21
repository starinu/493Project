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

struct t2327;

#include "codegen/il2cpp-codegen.h"
#include "t1637.h"

extern "C" void m17283_gshared (t2327 * __this, const MethodInfo* method);
#define m17283(__this, method) (( void (*) (t2327 *, const MethodInfo*))m17283_gshared)(__this, method)
extern "C" int32_t m17284_gshared (t2327 * __this, t1637  p0, t1637  p1, const MethodInfo* method);
#define m17284(__this, p0, p1, method) (( int32_t (*) (t2327 *, t1637 , t1637 , const MethodInfo*))m17284_gshared)(__this, p0, p1, method)
