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

struct t185;
struct t185_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m594 (t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m595 (t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m596 (t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m597 (t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t185_marshal(const t185& unmarshaled, t185_marshaled& marshaled);
extern "C" void t185_marshal_back(const t185_marshaled& marshaled, t185& unmarshaled);
extern "C" void t185_marshal_cleanup(t185_marshaled& marshaled);
