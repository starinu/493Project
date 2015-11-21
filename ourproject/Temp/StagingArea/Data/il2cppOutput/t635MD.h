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

struct t340;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16100_gshared (t19 * __this , const MethodInfo* method);
#define m16100(__this , method) (( void (*) (t19 * , const MethodInfo*))m16100_gshared)(__this , method)
extern "C" t340 * m3246_gshared (t19 * __this , const MethodInfo* method);
#define m3246(__this , method) (( t340 * (*) (t19 * , const MethodInfo*))m3246_gshared)(__this , method)
extern "C" void m3256_gshared (t19 * __this , t340 * p0, const MethodInfo* method);
#define m3256(__this , p0, method) (( void (*) (t19 * , t340 *, const MethodInfo*))m3256_gshared)(__this , p0, method)
extern "C" void m16101_gshared (t19 * __this , t340 * p0, const MethodInfo* method);
#define m16101(__this , p0, method) (( void (*) (t19 * , t340 *, const MethodInfo*))m16101_gshared)(__this , p0, method)
