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

struct t1760;

#include "codegen/il2cpp-codegen.h"
#include "t688.h"

extern "C" void m10486_gshared (t1760 * __this, const MethodInfo* method);
#define m10486(__this, method) (( void (*) (t1760 *, const MethodInfo*))m10486_gshared)(__this, method)
extern "C" int32_t m17240_gshared (t1760 * __this, t688  p0, t688  p1, const MethodInfo* method);
#define m17240(__this, p0, p1, method) (( int32_t (*) (t1760 *, t688 , t688 , const MethodInfo*))m17240_gshared)(__this, p0, p1, method)
