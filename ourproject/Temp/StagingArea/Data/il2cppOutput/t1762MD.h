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

struct t1762;

#include "codegen/il2cpp-codegen.h"
#include "t1618.h"

extern "C" void m10488_gshared (t1762 * __this, const MethodInfo* method);
#define m10488(__this, method) (( void (*) (t1762 *, const MethodInfo*))m10488_gshared)(__this, method)
extern "C" int32_t m17257_gshared (t1762 * __this, t1618  p0, t1618  p1, const MethodInfo* method);
#define m17257(__this, p0, p1, method) (( int32_t (*) (t1762 *, t1618 , t1618 , const MethodInfo*))m17257_gshared)(__this, p0, p1, method)
