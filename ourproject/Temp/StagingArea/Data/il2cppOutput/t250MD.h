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

struct t250;
struct t250_marshaled;
struct t19;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m1513 (t250 * __this, t19 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m1514 (t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m1515 (t19 * __this , t250 * p0, t250 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t250_marshal(const t250& unmarshaled, t250_marshaled& marshaled);
extern "C" void t250_marshal_back(const t250_marshaled& marshaled, t250& unmarshaled);
extern "C" void t250_marshal_cleanup(t250_marshaled& marshaled);
