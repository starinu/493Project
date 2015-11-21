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

struct t2219;
struct t19;
struct t180;
struct t181;

#include "codegen/il2cpp-codegen.h"
#include "t44.h"
#include "t2212.h"

extern "C" void m16385_gshared (t2219 * __this, t19 * p0, t44 p1, const MethodInfo* method);
#define m16385(__this, p0, p1, method) (( void (*) (t2219 *, t19 *, t44, const MethodInfo*))m16385_gshared)(__this, p0, p1, method)
extern "C" t2212  m16386_gshared (t2219 * __this, t19 * p0, bool p1, const MethodInfo* method);
#define m16386(__this, p0, p1, method) (( t2212  (*) (t2219 *, t19 *, bool, const MethodInfo*))m16386_gshared)(__this, p0, p1, method)
extern "C" t19 * m16387_gshared (t2219 * __this, t19 * p0, bool p1, t181 * p2, t19 * p3, const MethodInfo* method);
#define m16387(__this, p0, p1, p2, p3, method) (( t19 * (*) (t2219 *, t19 *, bool, t181 *, t19 *, const MethodInfo*))m16387_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2212  m16388_gshared (t2219 * __this, t19 * p0, const MethodInfo* method);
#define m16388(__this, p0, method) (( t2212  (*) (t2219 *, t19 *, const MethodInfo*))m16388_gshared)(__this, p0, method)
