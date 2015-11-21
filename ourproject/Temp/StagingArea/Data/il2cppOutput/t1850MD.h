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

struct t1850;

#include "codegen/il2cpp-codegen.h"
#include "t192.h"

extern "C" void m11509_gshared (t1850 * __this, const MethodInfo* method);
#define m11509(__this, method) (( void (*) (t1850 *, const MethodInfo*))m11509_gshared)(__this, method)
extern "C" int32_t m11510_gshared (t1850 * __this, t192  p0, t192  p1, const MethodInfo* method);
#define m11510(__this, p0, p1, method) (( int32_t (*) (t1850 *, t192 , t192 , const MethodInfo*))m11510_gshared)(__this, p0, p1, method)
