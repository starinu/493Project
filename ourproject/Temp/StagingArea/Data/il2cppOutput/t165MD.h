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

struct t165;
struct t165_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1082 (t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t165_marshal(const t165& unmarshaled, t165_marshaled& marshaled);
extern "C" void t165_marshal_back(const t165_marshaled& marshaled, t165& unmarshaled);
extern "C" void t165_marshal_cleanup(t165_marshaled& marshaled);
