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

struct t2211;
struct t19;
struct t180;
struct t181;

#include "codegen/il2cpp-codegen.h"
#include "t44.h"
#include "t823.h"

extern "C" void m16381_gshared (t2211 * __this, t19 * p0, t44 p1, const MethodInfo* method);
#define m16381(__this, p0, p1, method) (( void (*) (t2211 *, t19 *, t44, const MethodInfo*))m16381_gshared)(__this, p0, p1, method)
extern "C" t823  m16382_gshared (t2211 * __this, t19 * p0, bool p1, const MethodInfo* method);
#define m16382(__this, p0, p1, method) (( t823  (*) (t2211 *, t19 *, bool, const MethodInfo*))m16382_gshared)(__this, p0, p1, method)
extern "C" t19 * m16383_gshared (t2211 * __this, t19 * p0, bool p1, t181 * p2, t19 * p3, const MethodInfo* method);
#define m16383(__this, p0, p1, p2, p3, method) (( t19 * (*) (t2211 *, t19 *, bool, t181 *, t19 *, const MethodInfo*))m16383_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t823  m16384_gshared (t2211 * __this, t19 * p0, const MethodInfo* method);
#define m16384(__this, p0, method) (( t823  (*) (t2211 *, t19 *, const MethodInfo*))m16384_gshared)(__this, p0, method)
