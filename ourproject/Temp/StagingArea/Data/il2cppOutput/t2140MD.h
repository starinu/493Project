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

struct t2140;
struct t19;
struct t180;
struct t181;

#include "codegen/il2cpp-codegen.h"
#include "t44.h"
#include "t6.h"

extern "C" void m15434_gshared (t2140 * __this, t19 * p0, t44 p1, const MethodInfo* method);
#define m15434(__this, p0, p1, method) (( void (*) (t2140 *, t19 *, t44, const MethodInfo*))m15434_gshared)(__this, p0, p1, method)
extern "C" void m15435_gshared (t2140 * __this, t6  p0, const MethodInfo* method);
#define m15435(__this, p0, method) (( void (*) (t2140 *, t6 , const MethodInfo*))m15435_gshared)(__this, p0, method)
extern "C" t19 * m15436_gshared (t2140 * __this, t6  p0, t181 * p1, t19 * p2, const MethodInfo* method);
#define m15436(__this, p0, p1, p2, method) (( t19 * (*) (t2140 *, t6 , t181 *, t19 *, const MethodInfo*))m15436_gshared)(__this, p0, p1, p2, method)
extern "C" void m15437_gshared (t2140 * __this, t19 * p0, const MethodInfo* method);
#define m15437(__this, p0, method) (( void (*) (t2140 *, t19 *, const MethodInfo*))m15437_gshared)(__this, p0, method)
