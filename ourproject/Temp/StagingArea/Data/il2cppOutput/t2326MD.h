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

struct t2326;
struct t19;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17279_gshared (t2326 * __this, const MethodInfo* method);
#define m17279(__this, method) (( void (*) (t2326 *, const MethodInfo*))m17279_gshared)(__this, method)
extern "C" void m17280_gshared (t19 * __this , const MethodInfo* method);
#define m17280(__this , method) (( void (*) (t19 * , const MethodInfo*))m17280_gshared)(__this , method)
extern "C" int32_t m17281_gshared (t2326 * __this, t19 * p0, t19 * p1, const MethodInfo* method);
#define m17281(__this, p0, p1, method) (( int32_t (*) (t2326 *, t19 *, t19 *, const MethodInfo*))m17281_gshared)(__this, p0, p1, method)
extern "C" t2326 * m17282_gshared (t19 * __this , const MethodInfo* method);
#define m17282(__this , method) (( t2326 * (*) (t19 * , const MethodInfo*))m17282_gshared)(__this , method)
