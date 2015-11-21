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

struct t1920;

#include "codegen/il2cpp-codegen.h"
#include "t264.h"

extern "C" void m12481_gshared (t1920 * __this, const MethodInfo* method);
#define m12481(__this, method) (( void (*) (t1920 *, const MethodInfo*))m12481_gshared)(__this, method)
extern "C" int32_t m12482_gshared (t1920 * __this, t264  p0, const MethodInfo* method);
#define m12482(__this, p0, method) (( int32_t (*) (t1920 *, t264 , const MethodInfo*))m12482_gshared)(__this, p0, method)
extern "C" bool m12483_gshared (t1920 * __this, t264  p0, t264  p1, const MethodInfo* method);
#define m12483(__this, p0, p1, method) (( bool (*) (t1920 *, t264 , t264 , const MethodInfo*))m12483_gshared)(__this, p0, p1, method)
