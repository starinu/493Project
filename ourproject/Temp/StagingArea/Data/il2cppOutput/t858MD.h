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

extern "C" void t858_marshal(const t858& unmarshaled, t858_marshaled& marshaled);
extern "C" void t858_marshal_back(const t858_marshaled& marshaled, t858& unmarshaled);
extern "C" void t858_marshal_cleanup(t858_marshaled& marshaled);
