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

struct t151;
struct t151_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m905 (t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m906 (t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m907 (t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t151_marshal(const t151& unmarshaled, t151_marshaled& marshaled);
extern "C" void t151_marshal_back(const t151_marshaled& marshaled, t151& unmarshaled);
extern "C" void t151_marshal_cleanup(t151_marshaled& marshaled);
