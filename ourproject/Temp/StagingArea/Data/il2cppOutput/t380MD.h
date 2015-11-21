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

extern "C" void t380_marshal(const t380& unmarshaled, t380_marshaled& marshaled);
extern "C" void t380_marshal_back(const t380_marshaled& marshaled, t380& unmarshaled);
extern "C" void t380_marshal_cleanup(t380_marshaled& marshaled);
