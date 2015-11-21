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

struct t166;
struct t166_marshaled;
struct t14;
struct t126;

#include "codegen/il2cpp-codegen.h"

extern "C" void m520 (t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m521 (t19 * __this , t166 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t166 * m522 (t19 * __this , t14* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t166 * m523 (t19 * __this , t126 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t166 * m524 (t19 * __this , t126 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t166_marshal(const t166& unmarshaled, t166_marshaled& marshaled);
extern "C" void t166_marshal_back(const t166_marshaled& marshaled, t166& unmarshaled);
extern "C" void t166_marshal_cleanup(t166_marshaled& marshaled);
