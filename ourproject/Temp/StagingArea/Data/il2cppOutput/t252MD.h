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

extern "C" void t252_marshal(const t252& unmarshaled, t252_marshaled& marshaled);
extern "C" void t252_marshal_back(const t252_marshaled& marshaled, t252& unmarshaled);
extern "C" void t252_marshal_cleanup(t252_marshaled& marshaled);
