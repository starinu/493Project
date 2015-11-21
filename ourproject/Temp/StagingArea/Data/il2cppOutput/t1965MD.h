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

struct t1965;
struct t19;
struct t363;
struct t158;

#include "codegen/il2cpp-codegen.h"

extern "C" void m13006_gshared (t1965 * __this, t19 * p0, t363 * p1, const MethodInfo* method);
#define m13006(__this, p0, p1, method) (( void (*) (t1965 *, t19 *, t363 *, const MethodInfo*))m13006_gshared)(__this, p0, p1, method)
extern "C" void m13007_gshared (t1965 * __this, t158* p0, const MethodInfo* method);
#define m13007(__this, p0, method) (( void (*) (t1965 *, t158*, const MethodInfo*))m13007_gshared)(__this, p0, method)
extern "C" bool m13008_gshared (t1965 * __this, t19 * p0, t363 * p1, const MethodInfo* method);
#define m13008(__this, p0, p1, method) (( bool (*) (t1965 *, t19 *, t363 *, const MethodInfo*))m13008_gshared)(__this, p0, p1, method)
