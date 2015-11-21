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

struct t2319;

#include "codegen/il2cpp-codegen.h"
#include "t688.h"

extern "C" void m17245_gshared (t2319 * __this, const MethodInfo* method);
#define m17245(__this, method) (( void (*) (t2319 *, const MethodInfo*))m17245_gshared)(__this, method)
extern "C" int32_t m17246_gshared (t2319 * __this, t688  p0, t688  p1, const MethodInfo* method);
#define m17246(__this, p0, p1, method) (( int32_t (*) (t2319 *, t688 , t688 , const MethodInfo*))m17246_gshared)(__this, p0, p1, method)
