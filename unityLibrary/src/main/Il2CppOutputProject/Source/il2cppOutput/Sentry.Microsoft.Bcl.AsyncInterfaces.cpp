#include "pch-cpp.hpp"





template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct EmbeddedAttribute_t39A1FF07D6448598A64F4678781BACBC4226CFE5;
struct IAsyncDisposable_tA230F1E3405B29CD7CFBDBAD6C3040F2F007BB79;
struct IsReadOnlyAttribute_tB01E0B2246CFED809E899D064E4F8ED4D7E67DE2;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;

IL2CPP_EXTERN_C RuntimeClass* IAsyncDisposable_tA230F1E3405B29CD7CFBDBAD6C3040F2F007BB79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t9352344581B77A3A1778F0761114664605B8327C 
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct TaskAsyncEnumerableExtensions_tEF325AA0D46DD022C7A5C46FE34F54686444C6C7  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7 
{
	RuntimeObject* ____source;
	bool ____continueOnCapturedContext;
};
struct EmbeddedAttribute_t39A1FF07D6448598A64F4678781BACBC4226CFE5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct IsReadOnlyAttribute_tB01E0B2246CFED809E899D064E4F8ED4D7E67DE2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E 
{
	RuntimeObject* ____obj;
	int16_t ____token;
	bool ____continueOnCapturedContext;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B 
{
	ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E ____value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E_StaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredAsyncDisposable__ctor_m90AB61783CDA6B1DFB9C633DA9FE1BA37864888C (ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7* __this, RuntimeObject* ___0_source, bool ___1_continueOnCapturedContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B ValueTask_ConfigureAwait_mA7CCE63FA297B260AE0DBF86B0BFE8C9FEAD9B8E_inline (ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B ConfiguredAsyncDisposable_DisposeAsync_m84159E052EAEEB6F7E5888EEAED1E0F2E22DD7EE (ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m2E0A0DCF00192F17AC850446C5AB0E703ECA6145_inline (ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E* __this, RuntimeObject* ___0_obj, int16_t ___1_token, bool ___2_continueOnCapturedContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_m37E8BFCADC5AECBEAF490A6F664B1E2FCA598E45_inline (ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B* __this, ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 43533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m0C2F88B4EE02FF99416598D5419E9874BEC2E7C8 (EmbeddedAttribute_t39A1FF07D6448598A64F4678781BACBC4226CFE5* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 43534
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mD549A5C6FBFC0756FA3EE2E5903FFC1B6E199E8A (IsReadOnlyAttribute_tB01E0B2246CFED809E899D064E4F8ED4D7E67DE2* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 43539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredAsyncDisposable__ctor_m90AB61783CDA6B1DFB9C633DA9FE1BA37864888C (ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7* __this, RuntimeObject* ___0_source, bool ___1_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		__this->____source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source), (void*)L_0);
		bool L_1 = ___1_continueOnCapturedContext;
		__this->____continueOnCapturedContext = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredAsyncDisposable__ctor_m90AB61783CDA6B1DFB9C633DA9FE1BA37864888C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_source, bool ___1_continueOnCapturedContext, const RuntimeMethod* method)
{
	ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7*>(__this + _offset);
	ConfiguredAsyncDisposable__ctor_m90AB61783CDA6B1DFB9C633DA9FE1BA37864888C(_thisAdjusted, ___0_source, ___1_continueOnCapturedContext, method);
}
// Method Definition Index: 43540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B ConfiguredAsyncDisposable_DisposeAsync_m84159E052EAEEB6F7E5888EEAED1E0F2E22DD7EE (ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncDisposable_tA230F1E3405B29CD7CFBDBAD6C3040F2F007BB79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____source;
		NullCheck(L_0);
		ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E L_1;
		L_1 = InterfaceFuncInvoker0< ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E >::Invoke(0, IAsyncDisposable_tA230F1E3405B29CD7CFBDBAD6C3040F2F007BB79_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = __this->____continueOnCapturedContext;
		il2cpp_codegen_runtime_class_init_inline(ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E_il2cpp_TypeInfo_var);
		ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B L_3;
		L_3 = ValueTask_ConfigureAwait_mA7CCE63FA297B260AE0DBF86B0BFE8C9FEAD9B8E_inline((&V_0), L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B ConfiguredAsyncDisposable_DisposeAsync_m84159E052EAEEB6F7E5888EEAED1E0F2E22DD7EE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7*>(__this + _offset);
	ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B _returnValue;
	_returnValue = ConfiguredAsyncDisposable_DisposeAsync_m84159E052EAEEB6F7E5888EEAED1E0F2E22DD7EE(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 43541
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7 TaskAsyncEnumerableExtensions_ConfigureAwait_mF2F844FB0283F8E330181D6B8DFBBFC1B849894F (RuntimeObject* ___0_source, bool ___1_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		bool L_1 = ___1_continueOnCapturedContext;
		ConfiguredAsyncDisposable_t9753B2E7D73D9187072BE527310966CE854DFFB7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ConfiguredAsyncDisposable__ctor_m90AB61783CDA6B1DFB9C633DA9FE1BA37864888C((&L_2), L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 43384
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B ValueTask_ConfigureAwait_mA7CCE63FA297B260AE0DBF86B0BFE8C9FEAD9B8E_inline (ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____obj;
		int16_t L_1 = __this->____token;
		bool L_2 = ___0_continueOnCapturedContext;
		ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTask__ctor_m2E0A0DCF00192F17AC850446C5AB0E703ECA6145_inline((&L_3), L_0, L_1, L_2, NULL);
		ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B L_4;
		memset((&L_4), 0, sizeof(L_4));
		ConfiguredValueTaskAwaitable__ctor_m37E8BFCADC5AECBEAF490A6F664B1E2FCA598E45_inline((&L_4), L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 43375
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m2E0A0DCF00192F17AC850446C5AB0E703ECA6145_inline (ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E* __this, RuntimeObject* ___0_obj, int16_t ___1_token, bool ___2_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____obj = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj), (void*)L_0);
		int16_t L_1 = ___1_token;
		__this->____token = L_1;
		bool L_2 = ___2_continueOnCapturedContext;
		__this->____continueOnCapturedContext = L_2;
		return;
	}
}
// Method Definition Index: 43421
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_m37E8BFCADC5AECBEAF490A6F664B1E2FCA598E45_inline (ConfiguredValueTaskAwaitable_t1E31A943ACAA06541EF6C26E511DDA7B82718C6B* __this, ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E ___0_value, const RuntimeMethod* method) 
{
	{
		ValueTask_t83FB74E173DD0A3F821116EDDD3AE3F13DFC0C3E L_0 = ___0_value;
		__this->____value = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->____obj), (void*)NULL);
		return;
	}
}
