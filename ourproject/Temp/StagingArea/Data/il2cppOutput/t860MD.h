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

extern "C" void t860_marshal(const t860& unmarshaled, t860_marshaled& marshaled);
extern "C" void t860_marshal_back(const t860_marshaled& marshaled, t860& unmarshaled);
extern "C" void t860_marshal_cleanup(t860_marshaled& marshaled);
