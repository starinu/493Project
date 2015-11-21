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

struct t2296;

#include "codegen/il2cpp-codegen.h"
#include "t1300.h"

extern "C" void m17044_gshared (t2296 * __this, const MethodInfo* method);
#define m17044(__this, method) (( void (*) (t2296 *, const MethodInfo*))m17044_gshared)(__this, method)
extern "C" int32_t m17045_gshared (t2296 * __this, t1300  p0, t1300  p1, const MethodInfo* method);
#define m17045(__this, p0, p1, method) (( int32_t (*) (t2296 *, t1300 , t1300 , const MethodInfo*))m17045_gshared)(__this, p0, p1, method)
