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

struct t401;
struct t19;
struct t180;
struct t181;

#include "codegen/il2cpp-codegen.h"
#include "t44.h"
#include "t431.h"

extern "C" void m3014_gshared (t401 * __this, t19 * p0, t44 p1, const MethodInfo* method);
#define m3014(__this, p0, p1, method) (( void (*) (t401 *, t19 *, t44, const MethodInfo*))m3014_gshared)(__this, p0, p1, method)
extern "C" int32_t m13355_gshared (t401 * __this, t431  p0, t431  p1, const MethodInfo* method);
#define m13355(__this, p0, p1, method) (( int32_t (*) (t401 *, t431 , t431 , const MethodInfo*))m13355_gshared)(__this, p0, p1, method)
extern "C" t19 * m13356_gshared (t401 * __this, t431  p0, t431  p1, t181 * p2, t19 * p3, const MethodInfo* method);
#define m13356(__this, p0, p1, p2, p3, method) (( t19 * (*) (t401 *, t431 , t431 , t181 *, t19 *, const MethodInfo*))m13356_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m13357_gshared (t401 * __this, t19 * p0, const MethodInfo* method);
#define m13357(__this, p0, method) (( int32_t (*) (t401 *, t19 *, const MethodInfo*))m13357_gshared)(__this, p0, method)
