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

struct t14;

#include "codegen/il2cpp-codegen.h"
#include "t1331.h"

extern "C" void m8145 (t1331 * __this, t14* p0, int64_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t1331_marshal(const t1331& unmarshaled, t1331_marshaled& marshaled);
extern "C" void t1331_marshal_back(const t1331_marshaled& marshaled, t1331& unmarshaled);
extern "C" void t1331_marshal_cleanup(t1331_marshaled& marshaled);
