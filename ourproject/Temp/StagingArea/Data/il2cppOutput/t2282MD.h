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

struct t2282;

#include "codegen/il2cpp-codegen.h"
#include "t1301.h"

extern "C" void m16866_gshared (t2282 * __this, const MethodInfo* method);
#define m16866(__this, method) (( void (*) (t2282 *, const MethodInfo*))m16866_gshared)(__this, method)
extern "C" int32_t m16867_gshared (t2282 * __this, t1301  p0, const MethodInfo* method);
#define m16867(__this, p0, method) (( int32_t (*) (t2282 *, t1301 , const MethodInfo*))m16867_gshared)(__this, p0, method)
extern "C" bool m16868_gshared (t2282 * __this, t1301  p0, t1301  p1, const MethodInfo* method);
#define m16868(__this, p0, p1, method) (( bool (*) (t2282 *, t1301 , t1301 , const MethodInfo*))m16868_gshared)(__this, p0, p1, method)
