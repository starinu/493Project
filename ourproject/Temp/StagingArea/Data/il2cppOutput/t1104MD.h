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


#include "codegen/il2cpp-codegen.h"

extern "C" void t1104_marshal(const t1104& unmarshaled, t1104_marshaled& marshaled);
extern "C" void t1104_marshal_back(const t1104_marshaled& marshaled, t1104& unmarshaled);
extern "C" void t1104_marshal_cleanup(t1104_marshaled& marshaled);
