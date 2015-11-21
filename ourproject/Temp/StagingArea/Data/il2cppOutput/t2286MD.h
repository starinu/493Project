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

struct t2286;
struct t19;
struct t180;
struct t181;

#include "codegen/il2cpp-codegen.h"
#include "t44.h"
#include "t1301.h"

extern "C" void m16879_gshared (t2286 * __this, t19 * p0, t44 p1, const MethodInfo* method);
#define m16879(__this, p0, p1, method) (( void (*) (t2286 *, t19 *, t44, const MethodInfo*))m16879_gshared)(__this, p0, p1, method)
extern "C" int32_t m16880_gshared (t2286 * __this, t1301  p0, t1301  p1, const MethodInfo* method);
#define m16880(__this, p0, p1, method) (( int32_t (*) (t2286 *, t1301 , t1301 , const MethodInfo*))m16880_gshared)(__this, p0, p1, method)
extern "C" t19 * m16881_gshared (t2286 * __this, t1301  p0, t1301  p1, t181 * p2, t19 * p3, const MethodInfo* method);
#define m16881(__this, p0, p1, p2, p3, method) (( t19 * (*) (t2286 *, t1301 , t1301 , t181 *, t19 *, const MethodInfo*))m16881_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16882_gshared (t2286 * __this, t19 * p0, const MethodInfo* method);
#define m16882(__this, p0, method) (( int32_t (*) (t2286 *, t19 *, const MethodInfo*))m16882_gshared)(__this, p0, method)
