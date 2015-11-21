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
#include "t810.h"

extern "C" void m4100 (t810 * __this, t14* p0, t14* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t810_marshal(const t810& unmarshaled, t810_marshaled& marshaled);
extern "C" void t810_marshal_back(const t810_marshaled& marshaled, t810& unmarshaled);
extern "C" void t810_marshal_cleanup(t810_marshaled& marshaled);
