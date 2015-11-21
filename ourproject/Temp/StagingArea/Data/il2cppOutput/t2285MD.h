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

struct t2285;

#include "codegen/il2cpp-codegen.h"
#include "t1301.h"

extern "C" void m16877_gshared (t2285 * __this, const MethodInfo* method);
#define m16877(__this, method) (( void (*) (t2285 *, const MethodInfo*))m16877_gshared)(__this, method)
extern "C" int32_t m16878_gshared (t2285 * __this, t1301  p0, t1301  p1, const MethodInfo* method);
#define m16878(__this, p0, p1, method) (( int32_t (*) (t2285 *, t1301 , t1301 , const MethodInfo*))m16878_gshared)(__this, p0, p1, method)
