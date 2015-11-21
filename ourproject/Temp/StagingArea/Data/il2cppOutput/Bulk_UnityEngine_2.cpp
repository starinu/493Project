#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

struct t334;
struct t14;
struct t19;
struct t335;
struct t336;
struct t338;
struct t364;
struct t363;
struct t126;
struct t225;
struct t180;
struct t181;
struct t325;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t112.h"
#include "t334.h"
#include "t334MD.h"
#include "t113.h"
#include "t14.h"
#include "t204MD.h"
#include "t204.h"
#include "t19.h"
#include "t116.h"
#include "t19MD.h"
#include "t122.h"
#include "t335.h"
#include "t335MD.h"
#include "t336.h"
#include "t336MD.h"
#include "t337.h"
#include "t337MD.h"
#include "t338.h"
#include "t338MD.h"
#include "t18.h"
#include "t18MD.h"
#include "t339.h"
#include "t339MD.h"
#include "t364.h"
#include "t363.h"
#include "t126.h"
#include "t364MD.h"
#include "t225.h"
#include "t225MD.h"
#include "t44.h"
#include "t181.h"
#include "t325.h"
#include "t325MD.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void m1567 (t334 * __this, t14* p0, const MethodInfo* method)
{
	{
		m1602(__this, NULL);
		t14* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t19 * m1568 (t334 * __this, const MethodInfo* method)
{
	{
		t19 * L_0 = (__this->f0);
		return L_0;
	}
}
extern TypeInfo* t334_TI_var;
extern "C" bool m1569 (t334 * __this, t19 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t334_TI_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	t334 * V_0 = {0};
	{
		t19 * L_0 = p0;
		V_0 = ((t334 *)IsInstClass(L_0, t334_TI_var));
		t334 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		t19 * L_2 = (__this->f0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t334 * L_3 = V_0;
		t19 * L_4 = m1568(L_3, NULL);
		return ((((t19*)(t19 *)L_4) == ((t19*)(t19 *)NULL))? 1 : 0);
	}

IL_0024:
	{
		t19 * L_5 = (__this->f0);
		t334 * L_6 = V_0;
		t19 * L_7 = m1568(L_6, NULL);
		bool L_8 = (bool)VirtFuncInvoker1< bool, t19 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
extern "C" int32_t m1570 (t334 * __this, const MethodInfo* method)
{
	{
		t19 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = m1665(__this, NULL);
		return L_1;
	}

IL_0012:
	{
		t19 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
extern "C" void m1571 (t335 * __this, const MethodInfo* method)
{
	{
		m1602(__this, NULL);
		return;
	}
}
extern "C" void m1572 (t336 * __this, t14* p0, const MethodInfo* method)
{
	{
		m1602(__this, NULL);
		t14* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern TypeInfo* t337_TI_var;
extern "C" void m1573 (t338 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t337_TI_var = il2cpp_codegen_type_info_from_index(161);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t19 * L_2 = Box(t337_TI_var, &L_1);
		t14* L_3 = (t14*)VirtFuncInvoker0< t14* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		m1574(__this, L_3, NULL);
		return;
	}
}
extern "C" void m1574 (t338 * __this, t14* p0, const MethodInfo* method)
{
	{
		m1602(__this, NULL);
		t14* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t14* m1575 (t338 * __this, const MethodInfo* method)
{
	{
		t14* L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t364 * m1576 (t19 * __this , t363 * p0, t126 * p1, t19 * p2, const MethodInfo* method)
{
	{
		t126 * L_0 = p1;
		t19 * L_1 = p2;
		t363 * L_2 = p0;
		t364 * L_3 = m1666(NULL, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
extern "C" t363 * m1577 (t19 * __this , t364 * p0, const MethodInfo* method)
{
	{
		t364 * L_0 = p0;
		t363 * L_1 = m1667(L_0, NULL);
		return L_1;
	}
}
extern "C" void m1578 (t225 * __this, t19 * p0, t44 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m1579 (t225 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m1579((t225 *)__this->f9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if ((__this->f2 != NULL || MethodHasParameters((MethodInfo*)(__this->f3.f0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t19 *, t19 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t19 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t225(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t19 * m1580 (t225 * __this, t181 * p0, t19 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t19 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m1581 (t225 * __this, t19 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
extern "C" void m1582 (t325 * __this, t19 * p0, t44 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m1583 (t325 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m1583((t325 *)__this->f9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if ((__this->f2 != NULL || MethodHasParameters((MethodInfo*)(__this->f3.f0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t19 *, t19 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t19 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t325(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t19 * m1584 (t325 * __this, t181 * p0, t19 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t19 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m1585 (t325 * __this, t19 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
