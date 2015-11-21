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

struct t153;
struct t153_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m455 (t153 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t153_marshal(const t153& unmarshaled, t153_marshaled& marshaled);
extern "C" void t153_marshal_back(const t153_marshaled& marshaled, t153& unmarshaled);
extern "C" void t153_marshal_cleanup(t153_marshaled& marshaled);
