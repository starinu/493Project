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

extern "C" void t212_marshal(const t212& unmarshaled, t212_marshaled& marshaled);
extern "C" void t212_marshal_back(const t212_marshaled& marshaled, t212& unmarshaled);
extern "C" void t212_marshal_cleanup(t212_marshaled& marshaled);
