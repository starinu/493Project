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

struct t148;
struct t148_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m517 (t148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m518 (t148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m519 (t148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t148_marshal(const t148& unmarshaled, t148_marshaled& marshaled);
extern "C" void t148_marshal_back(const t148_marshaled& marshaled, t148& unmarshaled);
extern "C" void t148_marshal_cleanup(t148_marshaled& marshaled);
