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

struct t56;
struct t56_marshaled;
struct t144;

#include "codegen/il2cpp-codegen.h"
#include "t143.h"

extern "C" void m405 (t56 * __this, t144* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1197 (t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1198 (t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1199 (t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float m410 (t56 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t143  m408 (t56 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m407 (t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t143  m1200 (t56 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1201 (t56 * __this, t144* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t56_marshal(const t56& unmarshaled, t56_marshaled& marshaled);
extern "C" void t56_marshal_back(const t56_marshaled& marshaled, t56& unmarshaled);
extern "C" void t56_marshal_cleanup(t56_marshaled& marshaled);
