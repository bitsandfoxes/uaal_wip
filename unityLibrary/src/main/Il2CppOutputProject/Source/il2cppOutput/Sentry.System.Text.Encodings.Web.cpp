#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530;
struct Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD;
struct Pinnable_1_tE8646790C70B7BE55702280E40D5A4A99313EB4F;
struct StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Assembly_t;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F;
struct DoesNotReturnAttribute_t67176C691A18FEB431E738F1A0647B74B0ADBB9C;
struct EmbeddedAttribute_tF0E860A4BBBA69FFB48B7F47BB7BB48F0D28FCC2;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
struct IsReadOnlyAttribute_tDF5C3BB2AD588B81245233F93B2479CC2A2173F2;
struct JavaScriptEncoder_t7E17468B89805B21C42FA58190749ABB41A13AD8;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NativeIntegerAttribute_t8CCDA978820C7385EEE55B72041459C48A98EC7F;
struct NotNullAttribute_t6226457535CBC72E0BA5E67E52E095D65B4114A8;
struct NotNullWhenAttribute_tF1E120995BB8898B23CDEE9CD8C1A61E69F267DD;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NullableAttribute_t7ACA933D9BF4B05F1B7585E6D15B0BF372F1AB36;
struct NullableContextAttribute_tFC7292EAD6256CECBB9E027765DBB23BDFAFAD29;
struct NullablePublicOnlyAttribute_t035C33422D56AC6A55740D3995D83A491DF722F8;
struct OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3;
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069;
struct String_t;
struct TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38;
struct TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A;
struct Type_t;
struct UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E;
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;
struct U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162;

IL2CPP_EXTERN_C RuntimeClass* AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t75C3A39AAB3BE63446FA835E1135612398956793_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09EAD6A50C87B14995000A914300979F01096C97;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FC0613DB074A9C5DAB592FE3F86B3EDD439F7E5;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2;
IL2CPP_EXTERN_C String_t* _stringLiteralA7724F58887AE658863220F8D9138F5AC5532B2C;
IL2CPP_EXTERN_C String_t* _stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6;
IL2CPP_EXTERN_C String_t* _stringLiteralE3D7E554C2FD3D52D9690E3D5BB7B7321C3FA52B;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AD0F59C87E26DB328E73CE5878FFD76F11C3D3;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultJavaScriptEncoder__ctor_mC8F27D4E775D368AA433FD9FBAFDE4D6C041B22D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m256EFA800095D067A2E5C6565CE4A59C6580653F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m50EB7DF4A31D500A07B28EAA5503665CE259D880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3783728D84CC56FF496B01B411C5C44F5CD27683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m241969C86B1304681C79B554EBB56ACE408064B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m6007619FD172571DFEE0D74D7FC36B8A19818D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_mA911EEB64EE0CC596ED4B9483C873E3D67E8957D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m6BEA29F375B04D61FEA8DD79A7B77194EDE238CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m348013E76A9B43A149AEDF4068BDD33716372542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Clear_m206891C9B92AA06957C270529BC9FB7C0E6F716C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mCD1B124CDC6B59DAF17F6A3BB52EC14D77A17148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_m58CBA4AE57A7D59CD5B69FBFD0609C6C28A45C8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mACFB9A8C4B9ED50E54C5071AAE84DC41BDD7D34A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StrongBox_1__ctor_mB7531301FF1AE723E399FAB9D8A4DA4095636000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings_AllowRange_m52B7E8FBBCAB9B1356C70BE19CCE4635F7446512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings_AllowRanges_m18D3171E80119C94092B52370EC341417EA46817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoderSettings__ctor_m906A6B6E63A7B6CF25716E95E67BE0C148F19DE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_m8D51FF9E9FDFF79624B3AE3C0B656F47CCAAE62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m33015D9CAAF113EFE8202E853C2CA3D987A97528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerator_Reset_mE4B04768C26D71261EE723B23612C0DC08D8251B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnicodeRange_Create_m10FCA80BBBF64D2D6AD90664DC096EE56DBD9775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnicodeRange__ctor_mE703FAECF78AE16E5422C06BC395FE0DD96A531F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t0D9D61234E36918C53353CAFA00A7CDB372C9942_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A_0_0_0_var;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t74BFFA1E67A22B43F6A71D81CD99899FA2814CBE_StaticFields____8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_RVAStorage;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t06859747B5177DCD5345319077E17DAB349E4B2B 
{
};
struct PerTypeValues_1_tED776BA07B921050D08D92A9FB9AC262FF51C42F  : public RuntimeObject
{
};
struct PerTypeValues_1_t0B8019F3E6AB4E0DA6368DE83FE051815AF8EDC3  : public RuntimeObject
{
};
struct PerTypeValues_1_t932E035F990BA84CB197B79D0DD828CC5F475287  : public RuntimeObject
{
};
struct Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530  : public RuntimeObject
{
	uint8_t ___Data;
};
struct Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD  : public RuntimeObject
{
	Il2CppChar ___Data;
};
struct Pinnable_1_tE8646790C70B7BE55702280E40D5A4A99313EB4F  : public RuntimeObject
{
	uint32_t ___Data;
};
struct U3CPrivateImplementationDetailsU3E_t74BFFA1E67A22B43F6A71D81CD99899FA2814CBE  : public RuntimeObject
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct HexConverter_t06F4CBC893BB2DDC9C3CF9A6AC72EB4D0EDEAAE7  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SR_t0D9D61234E36918C53353CAFA00A7CDB372C9942  : public RuntimeObject
{
};
struct SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88  : public RuntimeObject
{
};
struct ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069  : public RuntimeObject
{
};
struct SpanUtility_t95F1F9CC8F74CABC77B5CE4FA8F6F7AB18C0D982  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38  : public RuntimeObject
{
};
struct ThrowHelper_t33DBA3AE3C28C732292B1D6C0E6274A67088B3C6  : public RuntimeObject
{
};
struct UnicodeHelpers_t60FA94277A7D33F89A01BD272D5197BD8142E796  : public RuntimeObject
{
};
struct UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD  : public RuntimeObject
{
	int32_t ___U3CFirstCodePointU3Ek__BackingField;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78  : public RuntimeObject
{
};
struct UnicodeUtility_t1F159B07994DBD1B82BB788FC58AB920073AB364  : public RuntimeObject
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
struct U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	int32_t ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DoesNotReturnAttribute_t67176C691A18FEB431E738F1A0647B74B0ADBB9C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct EmbeddedAttribute_tF0E860A4BBBA69FFB48B7F47BB7BB48F0D28FCC2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct IsReadOnlyAttribute_tDF5C3BB2AD588B81245233F93B2479CC2A2173F2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct JavaScriptEncoder_t7E17468B89805B21C42FA58190749ABB41A13AD8  : public TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38
{
};
struct NativeIntegerAttribute_t8CCDA978820C7385EEE55B72041459C48A98EC7F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___TransformFlags;
};
struct NotNullAttribute_t6226457535CBC72E0BA5E67E52E095D65B4114A8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct NotNullWhenAttribute_tF1E120995BB8898B23CDEE9CD8C1A61E69F267DD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	bool ___U3CReturnValueU3Ek__BackingField;
};
struct NullableAttribute_t7ACA933D9BF4B05F1B7585E6D15B0BF372F1AB36  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags;
};
struct NullableContextAttribute_tFC7292EAD6256CECBB9E027765DBB23BDFAFAD29  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	uint8_t ___Flag;
};
struct NullablePublicOnlyAttribute_t035C33422D56AC6A55740D3995D83A491DF722F8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	bool ___IncludesInternals;
};
struct Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F 
{
	uint32_t ____value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D8192_tF233F7E636930C977963482261B4EBEE2573512C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D8192_tF233F7E636930C977963482261B4EBEE2573512C__padding[8192];
	};
};
#pragma pack(pop, tp)
struct U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6__padding[8192];
	};
};
struct U3CBufferU3Ee__FixedBuffer_tB1330CD0855BB622D9F7382731EF4EA9DFD9F62D 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CBufferU3Ee__FixedBuffer_tB1330CD0855BB622D9F7382731EF4EA9DFD9F62D__padding[128];
	};
};
struct U3CAsBytesU3Ee__FixedBuffer_t52B6D47E193D021EDB6B843B6605CB180A08F8EC 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CAsBytesU3Ee__FixedBuffer_t52B6D47E193D021EDB6B843B6605CB180A08F8EC__padding[16];
	};
};
struct U3CDataU3Ee__FixedBuffer_t0DE3A00F75479702BFD16FDA286F2FF154E8A494 
{
	union
	{
		struct
		{
			uint64_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t0DE3A00F75479702BFD16FDA286F2FF154E8A494__padding[1024];
	};
};
struct ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 
{
	Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD 
{
	Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 
{
	Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct Span_1_tB3916DFC764DF153B19342195C5137E7904A154F 
{
	Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct Span_1_t52E8D6CE4051868EF02A556436D822434F573789 
{
	Pinnable_1_tE8646790C70B7BE55702280E40D5A4A99313EB4F* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2 
{
	U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6 ___Bitmap;
};
struct AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0 
{
	U3CBufferU3Ee__FixedBuffer_tB1330CD0855BB622D9F7382731EF4EA9DFD9F62D ___Buffer;
};
struct DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F  : public JavaScriptEncoder_t7E17468B89805B21C42FA58190749ABB41A13AD8
{
	OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* ____innerEncoder;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t7DEB1DC2A275807FC6E8D15BB11F34D3D007482B 
{
	int32_t ___value__;
};
struct ExceptionArgument_t75C3A39AAB3BE63446FA835E1135612398956793 
{
	int32_t ___value__;
};
struct OperationStatus_t989115D0E70D7092128DE283C99B4A8F74AE3504 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct UltimateResourceFallbackLocation_tFA91547D7BF4CEF1101A7C391ECB7B73EE073AB6 
{
	int32_t ___value__;
};
struct Casing_t20EF11D66A94E118CC5291EA72A9947C69BD1198 
{
	uint32_t ___value__;
};
struct AllowedAsciiCodePoints_tFFFD8C74BE909C8EA9A27124F51DDCC7F6729800 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			U3CAsBytesU3Ee__FixedBuffer_t52B6D47E193D021EDB6B843B6605CB180A08F8EC ___AsBytes;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CAsBytesU3Ee__FixedBuffer_t52B6D47E193D021EDB6B843B6605CB180A08F8EC ___AsBytes_forAlignmentOnly;
		};
	};
};
struct AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E 
{
	U3CDataU3Ee__FixedBuffer_t0DE3A00F75479702BFD16FDA286F2FF154E8A494 ___Data;
};
struct StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2  : public RuntimeObject
{
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2 ___Value;
};
struct OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3  : public RuntimeObject
{
	AllowedAsciiCodePoints_tFFFD8C74BE909C8EA9A27124F51DDCC7F6729800 ____allowedAsciiCodePoints;
	AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E ____asciiPreescapedData;
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2 ____allowedBmpCodePoints;
	ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* ____scalarEscaper;
};
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	String_t* ___BaseNameField;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets;
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets;
	String_t* ___moduleDir;
	Assembly_t* ___MainAssembly;
	Type_t* ____locationInfo;
	Type_t* ____userResourceSet;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture;
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache;
	bool ____ignoreCase;
	bool ___UseManifest;
	bool ___UseSatelliteAssem;
	int32_t ____fallbackLoc;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion;
	bool ____lookedForSatelliteContractVersion;
	Assembly_t* ____callingAssembly;
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly;
	RuntimeObject* ___resourceGroveler;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A  : public RuntimeObject
{
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2 ____allowedCodePointsBitmap;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E  : public ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069
{
	AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0 ____preescapedMap;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct PerTypeValues_1_tED776BA07B921050D08D92A9FB9AC262FF51C42F_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t0B8019F3E6AB4E0DA6368DE83FE051815AF8EDC3_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t932E035F990BA84CB197B79D0DD828CC5F475287_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct U3CPrivateImplementationDetailsU3E_t74BFFA1E67A22B43F6A71D81CD99899FA2814CBE_StaticFields
{
	__StaticArrayInitTypeSizeU3D8192_tF233F7E636930C977963482261B4EBEE2573512C ___8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_StaticFields
{
	bool ___s_usingResourceKeys;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_StaticFields
{
	UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* ____all;
	UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* ____u0000;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_StaticFields
{
	DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* ___BasicLatinSingleton;
	DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* ___UnsafeRelaxedEscapingSingleton;
};
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	int32_t ___MagicNumber;
	int32_t ___HeaderVersionNumber;
	Type_t* ____minResourceSet;
	String_t* ___ResReaderTypeName;
	String_t* ___ResSetTypeName;
	String_t* ___MscorlibName;
	int32_t ___DEBUG;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_StaticFields
{
	EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* ___Singleton;
	EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* ___SingletonMinimallyEscaped;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9  : public RuntimeArray
{
	ALIGN_FIELD (8) UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* m_Items[1];

	inline UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88_gshared (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6BEA29F375B04D61FEA8DD79A7B77194EDE238CA_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCD1B124CDC6B59DAF17F6A3BB52EC14D77A17148_gshared_inline (Span_1_t52E8D6CE4051868EF02A556436D822434F573789* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t* Span_1_get_Item_m58CBA4AE57A7D59CD5B69FBFD0609C6C28A45C8F_gshared_inline (Span_1_t52E8D6CE4051868EF02A556436D822434F573789* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mACFB9A8C4B9ED50E54C5071AAE84DC41BDD7D34A_gshared_inline (Span_1_t52E8D6CE4051868EF02A556436D822434F573789* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE_gshared (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_span, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_span, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tB3916DFC764DF153B19342195C5137E7904A154F Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m348013E76A9B43A149AEDF4068BDD33716372542_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_span, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_span, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_gshared (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mA911EEB64EE0CC596ED4B9483C873E3D67E8957D_gshared (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tB3916DFC764DF153B19342195C5137E7904A154F Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m206891C9B92AA06957C270529BC9FB7C0E6F716C_gshared (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669_gshared (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450_gshared (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD_gshared (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m241969C86B1304681C79B554EBB56ACE408064B9_gshared (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m6007619FD172571DFEE0D74D7FC36B8A19818D51_gshared (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m50EB7DF4A31D500A07B28EAA5503665CE259D880_gshared (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrongBox_1__ctor_mB7531301FF1AE723E399FAB9D8A4DA4095636000_gshared (StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3783728D84CC56FF496B01B411C5C44F5CD27683_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A52D522A0DF772DE00FBB3B1A8DE153863926C7_gshared_inline (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m07F606949D668E9239DB87B7C29C0DE92FDC584C_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8C2E96471A665DA0C9366A58A54F154B82A7E787_gshared_inline (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA29C794D4B1BEF366A11C2B9EFD3C17D6244E19F_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFD602335C0CC4673A79F88058D6BE87930370C3E_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF79E11F51B396ACFD1F12C93216500B94C652E8C_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m256EFA800095D067A2E5C6565CE4A59C6580653F_gshared (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_span, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
inline uint8_t* Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4*, int32_t, const RuntimeMethod*))Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_gshared_inline)(__this, ___0_index, method);
}
inline Il2CppChar* Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F*, int32_t, const RuntimeMethod*))Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m5AEA0C4E1F8B6E3291B0F839F9B91C18C6EA3B91_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mB9938ABF4732361E82D7F83817779FDC7FB55A15 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___0_resourceSource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mB89D93B40ECA2B334204C2B48200BBDB5A356B2F (String_t* ___0_resourceKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78 (String_t* ___0_switchName, bool* ___1_isEnabled, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_mFEE5B207F59389C23704FAEA79B52FFF4E192BAB_inline (uint32_t ___0_value, uint32_t ___1_lowerBound, uint32_t ___2_upperBound, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsValidUnicodeScalar_m01999FC776A7A53CF0F6F919AE08225884F7EEE7_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m33015D9CAAF113EFE8202E853C2CA3D987A97528 (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_m9CA9A74626056DC7B7D16417742FAC8DFA056DA5 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_mC511E9B0882FA9359750E73B70E73F8FA7D0911F (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rune__ctor_m6D5BD73487D41925DE0B776F9646E60373DA4923_inline (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, uint32_t ___0_scalarValue, bool ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_m320F22FD432DEB4C7F80F22E070F14ECFA655C1F_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_get_IsAscii_m7F2E10EF934516BCE9920CD3C6402ED142A3993B (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsBmpCodePoint_m855EA7F47FC5B33ED1C73EDD123C0389051C8EF2_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_get_IsBmp_m645688C36A81DF49B3C238042A21611F1F4D981B (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F Rune_UnsafeCreate_m16BA4411AE09ABDDA83E43F4D918CE651E06794F_inline (uint32_t ___0_scalarValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeUtility_GetUtf16SequenceLength_mAD0FD6B80BD934A998CD7A1A8518376744177B98 (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_get_Utf16SequenceLength_m05639C5CC19044C21FEC4E7D57B2B29D40022973 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88 (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD*, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88_gshared)(__this, method);
}
inline Il2CppChar* ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryCreate_mBFAA07BF4298DFCD516A8C62CB4E1C39B926FA7E (Il2CppChar ___0_ch, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* ___1_result, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryCreate_m5DCEE15CF2F8CFB0B059BE7421671AA0459A4D0E (Il2CppChar ___0_highSurrogate, Il2CppChar ___1_lowSurrogate, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* ___2_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsHighSurrogate_mED1E5FB863528ABB0D7D3DC4DE0FAB4517760658 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F Rune_get_ReplacementChar_mE7DA425C57DB5D6879BEF1E6A7440499F27122A7 (const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_gshared_inline)(__this, method);
}
inline uint8_t* ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_Equals_mB1DF17C10FB746A0775193C67BFA3CDA1836D898 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_Equals_m70B96965EC32689B6E5D2E19143D77F676032193 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_op_Equality_m2B5A84292FEE94C02E80850C962BBBB0136D79C5 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_left, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_GetHashCode_mA4D43BF6E932790A30110B19E6B9E98FDFF0DB7B (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsSurrogateCodePoint_m6514E52F8C314F967DBA1CB00A1CD53BBA8DC670_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F*, const RuntimeMethod*))Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeUtility_GetUtf16SurrogatesFromSupplementaryPlaneScalar_mFBE463401A83EBF4C2320407D9075A5A4AE47B2C_inline (uint32_t ___0_value, Il2CppChar* ___1_highSurrogateCodePoint, Il2CppChar* ___2_lowSurrogateCodePoint, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryEncodeToUtf16_m7D60E83815F9069CA4137113E02B792F6164A51B (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_destination, int32_t* ___1_charsWritten, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4*, const RuntimeMethod*))Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryEncodeToUtf8_m73B938111E53C7AC0850BFFAEAB720718D081CA4 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_destination, int32_t* ___1_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 UnicodeHelpers_get_DefinedCharsBitmapSpan_mC3E40C81137E786F28AA598CD5F14841B6F69C72 (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m6BEA29F375B04D61FEA8DD79A7B77194EDE238CA_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m6BEA29F375B04D61FEA8DD79A7B77194EDE238CA_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m42FD1ED8249621B6259965C360453856118383CB_inline (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m3B39C98498D5FC82DC3F401987300AB44EBDF7B4_inline (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange__ctor_mE703FAECF78AE16E5422C06BC395FE0DD96A531F (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, int32_t ___0_firstCodePoint, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* UnicodeRanges_CreateRange_m7AE1E6C5870B5F57F156A0D62523C6AC5C2E4E03 (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD** ___0_range, Il2CppChar ___1_first, Il2CppChar ___2_last, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* UnicodeRange_Create_m10FCA80BBBF64D2D6AD90664DC096EE56DBD9775 (Il2CppChar ___0_firstCharacter, Il2CppChar ___1_lastCharacter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* __this, Il2CppChar ___0_key, uint8_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsciiByteMap_TryLookup_m2045F16F64FEC435CDCA248AFA3D4EA0EDED2100_inline (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_key, uint8_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline (uint32_t ___0_value, uintptr_t* ___1_index, int32_t* ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_AllowChar_m20439C3829232D0D2F7E4F7AB7A59CA8D818D9B2_inline (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8A221E2F98F0FE0D68C2C4DF50FD8488F129BB09 (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 UnicodeHelpers_GetDefinedBmpCodePointsBitmapLittleEndian_mE10AB64E3FF5716A3B0C3B674543242026044747 (const RuntimeMethod* method) ;
inline void Span_1__ctor_mCD1B124CDC6B59DAF17F6A3BB52EC14D77A17148_inline (Span_1_t52E8D6CE4051868EF02A556436D822434F573789* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t52E8D6CE4051868EF02A556436D822434F573789*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mCD1B124CDC6B59DAF17F6A3BB52EC14D77A17148_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline uint32_t* Span_1_get_Item_m58CBA4AE57A7D59CD5B69FBFD0609C6C28A45C8F_inline (Span_1_t52E8D6CE4051868EF02A556436D822434F573789* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint32_t* (*) (Span_1_t52E8D6CE4051868EF02A556436D822434F573789*, int32_t, const RuntimeMethod*))Span_1_get_Item_m58CBA4AE57A7D59CD5B69FBFD0609C6C28A45C8F_gshared_inline)(__this, ___0_index, method);
}
inline ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_gshared_inline)(__this, ___0_start, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_mA66C5A31FBA4E74D472679C36CB4E5685E27654C_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_source, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mACFB9A8C4B9ED50E54C5071AAE84DC41BDD7D34A_inline (Span_1_t52E8D6CE4051868EF02A556436D822434F573789* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t52E8D6CE4051868EF02A556436D822434F573789*, const RuntimeMethod*))Span_1_get_Length_mACFB9A8C4B9ED50E54C5071AAE84DC41BDD7D34A_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_m0F31C0A448F7E7A8333724C5E806561DAC13BD9F (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCodePointAllowed_mE8C77B539C520F0C5E3FBE79A9523BDF37B99A0F_inline (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsciiPreescapedData_PopulatePreescapedData_mF28EAAE5A8F49C81C0644D409F004634AB66FBE5 (AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* __this, AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* ___0_allowedCodePointsBmp, ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* ___1_innerEncoder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedAsciiCodePoints_PopulateAllowedCodePoints_mCABB548D824C8F0A722198B16638FA170F1518C4 (AllowedAsciiCodePoints_tFFFD8C74BE909C8EA9A27124F51DDCC7F6729800* __this, AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* ___0_allowedBmpCodePoints, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_mF7BC5130E4B27BECD08A2267839D49C547901267 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_data, const RuntimeMethod* method) ;
inline void Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline bool Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F*, const RuntimeMethod*))Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__AssertThisNotNull_m9FA07FA45698B9DE907687961B31C68D83E8C1E3_inline (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, const RuntimeMethod* method) ;
inline bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_span, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD, int32_t, const RuntimeMethod*))SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_gshared_inline)(___0_span, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsciiPreescapedData_TryGetPreescapedData_mE56B12B506C0C97ED3E466022FB028D03C4AA318_inline (AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* __this, uint32_t ___0_codePoint, uint64_t* ___1_preescapedData, const RuntimeMethod* method) ;
inline bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_span, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F, int32_t, const RuntimeMethod*))SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_gshared_inline)(___0_span, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_IsScalarValueAllowed_m44BD8F7EA7549D7208F5A1A20D7683D960ECD004_inline (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_value, const RuntimeMethod* method) ;
inline Span_1_tB3916DFC764DF153B19342195C5137E7904A154F Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_tB3916DFC764DF153B19342195C5137E7904A154F (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F*, int32_t, const RuntimeMethod*))Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_gshared_inline)(__this, ___0_start, method);
}
inline bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m348013E76A9B43A149AEDF4068BDD33716372542_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_span, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507, int32_t, const RuntimeMethod*))SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m348013E76A9B43A149AEDF4068BDD33716372542_gshared_inline)(___0_span, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_TryWriteUInt64LittleEndian_mA57339C96051A7EF676D56ABAFDA9A7BF4E27F34_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_span, int32_t ___1_offset, uint64_t ___2_value, const RuntimeMethod* method) ;
inline bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_span, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4, int32_t, const RuntimeMethod*))SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_gshared_inline)(___0_span, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_DecodeFromUtf8_mA26A377DDDB4BBB698378511691E091577D1F62B (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_source, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* ___1_result, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 (*) (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4*, int32_t, const RuntimeMethod*))Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_gshared_inline)(__this, ___0_start, method);
}
inline bool ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07 (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507*, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_gshared)(__this, method);
}
inline Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mA911EEB64EE0CC596ED4B9483C873E3D67E8957D (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mA911EEB64EE0CC596ED4B9483C873E3D67E8957D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_IsControl_mF0FC16C54F3E33C734B3C3F52D79C2EF961D9A00 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_value, const RuntimeMethod* method) ;
inline Span_1_tB3916DFC764DF153B19342195C5137E7904A154F Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tB3916DFC764DF153B19342195C5137E7904A154F (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_gshared_inline)(__this, ___0_start, ___1_length, method);
}
inline void Span_1_Clear_m206891C9B92AA06957C270529BC9FB7C0E6F716C (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F*, const RuntimeMethod*))Span_1_Clear_m206891C9B92AA06957C270529BC9FB7C0E6F716C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_mC8F27D4E775D368AA433FD9FBAFDE4D6C041B22D (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* ___0_settings, bool ___1_allowMinimalJsonEscaping, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptEncoder__ctor_m2F59ACB8329419E25ADF69BCB0AAACDD9FFED033 (JavaScriptEncoder_t7E17468B89805B21C42FA58190749ABB41A13AD8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* TextEncoderSettings_GetAllowedCodePointsBitmap_mDCE8D36FBD81A450F8BE47571FDA633769888427 (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* __this, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669 (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F, const RuntimeMethod*))Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__ctor_m9F15F7BBE6D0D3C923A832D9B3DE865F2D7A33AB (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* ___0_scalarEscaper, AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* ___1_allowedCodePointsBmp, bool ___2_forbidHtmlSensitiveCharacters, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___3_extraCharactersToEscape, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_Encode_m5E8120EE0FE5B44BBA40A416EF3B38E9981D9FD7 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_source, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_destination, int32_t* ___2_charsConsumed, int32_t* ___3_charsWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_EncodeUtf8_mE4FFC3CFCBDA0720DB9C65393314F2CDED856C94 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_source, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___1_destination, int32_t* ___2_bytesConsumed, int32_t* ___3_bytesWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_FindFirstCharacterToEncode_mD80BEE36341F2B33EFA4C39676DDDA0A9605CD4E_inline (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, Il2CppChar* ___0_text, int32_t ___1_textLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_GetIndexOfFirstByteToEncode_m9478485A199BCDE1CA9D9F8E1B24D603C5808994 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_TryEncodeUnicodeScalar_m4F79E08B67CD84D7AF357C546FB7A69745934AEB (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, int32_t ___0_unicodeScalar, Il2CppChar* ___1_buffer, int32_t ___2_bufferLength, int32_t* ___3_numberOfCharactersWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* UnicodeRanges_get_BasicLatin_m7145E34B74CBD2462ED01A989E6AA302E1878477 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings__ctor_m906A6B6E63A7B6CF25716E95E67BE0C148F19DE5 (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* __this, UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* ___0_allowedRanges, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_m76A7C16E13846ECAF064FE972804B0FE26D7C2B9 (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* ___0_settings, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* UnicodeRanges_get_All_mD9CD17ACAE1CF216979A72F3EE32420555A16DAE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalarEscaperBase__ctor_m0DE57B1FCEE6A59F5066C7313D1DAB8E07D85F56 (ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_U3CEncodeUtf8U3Eg__TryEncodeScalarAsHexU7C4_0_mF9DBEC142287CB6ED542816883FAD1E890DDD784 (RuntimeObject* ___0_this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___1_value, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___2_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_U3CEncodeUtf16U3Eg__TryEncodeScalarAsHexU7C5_0_m649BEA6ED6A78281C939C3E70AD915B21A245579 (RuntimeObject* ___0_this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___1_value, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___2_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscaperImplementation__ctor_m73003932F4F503C9D5556298FA6FD7239FE88BE7 (EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* __this, bool ___0_allowMinimalEscaping, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexConverter_ToBytesBuffer_mBE2517764F9EF6F0E8FD9AD19B2C23E66266535F_inline (uint8_t ___0_value, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___1_buffer, int32_t ___2_startingIndex, uint32_t ___3_casing, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mBD46BC0E9A2B84A2F85569B7ABC79AB19FA64423_inline (uint32_t ___0_scalar, Il2CppChar* ___1_highSurrogate, Il2CppChar* ___2_lowSurrogate, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexConverter_ToCharsBuffer_mB047CE531CA06177F520AC0395523C2F3BCB7622_inline (uint8_t ___0_value, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_buffer, int32_t ___2_startingIndex, uint32_t ___3_casing, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_AreValidIndexAndLength_m63E10B641EC532EA7DC9DC69D4BC92DBC7B81407_inline (int32_t ___0_spanRealLength, int32_t ___1_requestedOffset, int32_t ___2_requestedLength, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_mE3620A212E4DCE9334F6EFA6518F286FFD00A5E1_inline (uint64_t ___0_value, const RuntimeMethod* method) ;
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450 (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__ctor_mC23A8564B67C43255BF415B71C016DA4BB354683 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, const RuntimeMethod* method) ;
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD_gshared)(___0_span, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalar_m32F1C002E4923112744BDCE29E6D5136D6F76D01_inline (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, uint32_t ___0_unicodeScalar, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_buffer, int32_t* ___2_charsWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_m8D51FF9E9FDFF79624B3AE3C0B656F47CCAAE62B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_DecodeFromUtf16_mA1721E120027218B984163DE7E65AA613CCDAB3D (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_source, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* ___1_result, int32_t* ___2_charsConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetUtf8RepresentationForScalarValue_mFA681D8DC4256D0432289941E3619FA8F71960AD (uint32_t ___0_scalar, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_gshared_inline)(__this, ___0_start, ___1_length, method);
}
inline void ReadOnlySpan_1_CopyTo_m241969C86B1304681C79B554EBB56ACE408064B9 (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507*, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m241969C86B1304681C79B554EBB56ACE408064B9_gshared)(__this, ___0_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalarUtf8_m313F5116E0CBF64D14D0A24130A43B5748C3CE61 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, uint32_t ___0_unicodeScalar, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_utf16ScratchBuffer, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___2_utf8Destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_gshared_inline)(__this, ___0_start, ___1_length, method);
}
inline void ReadOnlySpan_1_CopyTo_m6007619FD172571DFEE0D74D7FC36B8A19818D51 (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD*, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m6007619FD172571DFEE0D74D7FC36B8A19818D51_gshared)(__this, ___0_destination, method);
}
inline ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_gshared_inline)(__this, ___0_start, method);
}
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m50EB7DF4A31D500A07B28EAA5503665CE259D880 (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m50EB7DF4A31D500A07B28EAA5503665CE259D880_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_TextEncoderDoesNotImplementMaxOutputCharsPerInputChar_m83FA414045AF2AA9E9AA3B7E7C82A9BE78BDBC7C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_m8F0E6509E72EE287E5F8827CBCEAA8EE0F85BF12_inline (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_mCE666A2C567AA63B583810061F92AA25413FC1B3_inline (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllowedCodePointsU3Ed__14__ctor_m338B063DC020BBDEF38D48BA792CAF553534EB9B (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
inline void StrongBox_1__ctor_mB7531301FF1AE723E399FAB9D8A4DA4095636000 (StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2* __this, const RuntimeMethod* method)
{
	((  void (*) (StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2*, const RuntimeMethod*))StrongBox_1__ctor_mB7531301FF1AE723E399FAB9D8A4DA4095636000_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllowedCodePointsU3Ed__14_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m2409964593274011FBBEC621B958135EDD619887 (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_m577311F50B3B7AAD3EB247FB0BD9FF18D71E9197 (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3783728D84CC56FF496B01B411C5C44F5CD27683_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_source, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507, const RuntimeMethod*))MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3783728D84CC56FF496B01B411C5C44F5CD27683_gshared_inline)(___0_source, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m498A761DCA181928B228594D43E9A01B40B3DC6A_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m83C73BAC53EC40A8FD75953BFDF2C0A02BBEF926 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m07A6691BD0655734027B89895FF1F3E7C2FBF5FD (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16 (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_gshared_inline)(method);
}
inline intptr_t SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A52D522A0DF772DE00FBB3B1A8DE153863926C7_inline (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A52D522A0DF772DE00FBB3B1A8DE153863926C7_gshared_inline)(___0_start, ___1_index, method);
}
inline void ReadOnlySpan_1__ctor_m07F606949D668E9239DB87B7C29C0DE92FDC584C_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507*, Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530*, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m07F606949D668E9239DB87B7C29C0DE92FDC584C_gshared_inline)(__this, ___0_pinnable, ___1_byteOffset, ___2_length, method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_gshared_inline)(method);
}
inline intptr_t SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8C2E96471A665DA0C9366A58A54F154B82A7E787_inline (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8C2E96471A665DA0C9366A58A54F154B82A7E787_gshared_inline)(___0_start, ___1_index, method);
}
inline void Span_1__ctor_mA29C794D4B1BEF366A11C2B9EFD3C17D6244E19F_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F*, Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD*, intptr_t, int32_t, const RuntimeMethod*))Span_1__ctor_mA29C794D4B1BEF366A11C2B9EFD3C17D6244E19F_gshared_inline)(__this, ___0_pinnable, ___1_byteOffset, ___2_length, method);
}
inline void Span_1__ctor_mFD602335C0CC4673A79F88058D6BE87930370C3E_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4*, Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530*, intptr_t, int32_t, const RuntimeMethod*))Span_1__ctor_mFD602335C0CC4673A79F88058D6BE87930370C3E_gshared_inline)(__this, ___0_pinnable, ___1_byteOffset, ___2_length, method);
}
inline void ReadOnlySpan_1__ctor_mF79E11F51B396ACFD1F12C93216500B94C652E8C_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD*, Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD*, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mF79E11F51B396ACFD1F12C93216500B94C652E8C_gshared_inline)(__this, ___0_pinnable, ___1_byteOffset, ___2_length, method);
}
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m256EFA800095D067A2E5C6565CE4A59C6580653F (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m256EFA800095D067A2E5C6565CE4A59C6580653F_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
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
// Method Definition Index: 42299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m2828E60E079EE6E040B89A08335CFA7F06458EDF (EmbeddedAttribute_tF0E860A4BBBA69FFB48B7F47BB7BB48F0D28FCC2* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 42300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m8CE1ABBC87BF3A50A48B8E97D45F3D61209EFE9D (IsReadOnlyAttribute_tDF5C3BB2AD588B81245233F93B2479CC2A2173F2* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 42301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m03804BFB9130CF166FA9DBCD9F6A247D99FAFBEE (NullableAttribute_t7ACA933D9BF4B05F1B7585E6D15B0BF372F1AB36* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___0_p;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags), (void*)L_1);
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
// Method Definition Index: 42302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m66D6B0B64DB3B2909DAA7B6249D94442757C2D59 (NullableContextAttribute_tFC7292EAD6256CECBB9E027765DBB23BDFAFAD29* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = ___0_p;
		__this->___Flag = L_0;
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
// Method Definition Index: 42303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m816FC9C29AB8911029EB4052011EBFF64A483FE5 (NullablePublicOnlyAttribute_t035C33422D56AC6A55740D3995D83A491DF722F8* __this, bool ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___0_p;
		__this->___IncludesInternals = L_0;
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
// Method Definition Index: 42304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeIntegerAttribute__ctor_mE1C72FE07489EA69658446E8401C4A7AF880D231 (NativeIntegerAttribute_t8CCDA978820C7385EEE55B72041459C48A98EC7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)1);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		__this->___TransformFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TransformFlags), (void*)L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 42305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexConverter_ToBytesBuffer_mBE2517764F9EF6F0E8FD9AD19B2C23E66266535F (uint8_t ___0_value, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___1_buffer, int32_t ___2_startingIndex, uint32_t ___3_casing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___0_value;
		uint8_t L_1 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___3_casing;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)(((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___2_startingIndex;
		uint8_t* L_6;
		L_6 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_5, 1)), Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_7 = V_1;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		int32_t L_8 = ___2_startingIndex;
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___1_buffer), L_8, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_10 = V_1;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8)));
		return;
	}
}
// Method Definition Index: 42306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexConverter_ToCharsBuffer_mB047CE531CA06177F520AC0395523C2F3BCB7622 (uint8_t ___0_value, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_buffer, int32_t ___2_startingIndex, uint32_t ___3_casing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___0_value;
		uint8_t L_1 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___3_casing;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)(((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___2_startingIndex;
		Il2CppChar* L_6;
		L_6 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_5, 1)), Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		uint32_t L_7 = V_1;
		*((int16_t*)L_6) = (int16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_7&((int32_t)255))));
		int32_t L_8 = ___2_startingIndex;
		Il2CppChar* L_9;
		L_9 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___1_buffer), L_8, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		uint32_t L_10 = V_1;
		*((int16_t*)L_9) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)L_10>>8)));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 42307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m5AEA0C4E1F8B6E3291B0F839F9B91C18C6EA3B91 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_StaticFields*)il2cpp_codegen_static_fields_for(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var))->___s_usingResourceKeys;
		return L_0;
	}
}
// Method Definition Index: 42308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mB89D93B40ECA2B334204C2B48200BBDB5A356B2F (String_t* ___0_resourceKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m5AEA0C4E1F8B6E3291B0F839F9B91C18C6EA3B91_inline(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ___0_resourceKey;
		return L_1;
	}

IL_0009:
	{
		V_0 = (String_t*)NULL;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_2;
		L_2 = SR_get_ResourceManager_mB9938ABF4732361E82D7F83817779FDC7FB55A15(NULL);
		String_t* L_3 = ___0_resourceKey;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7, L_2, L_3);
		V_0 = L_4;
		goto IL_001c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD* L_5 = ((MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001c;
	}

IL_001c:
	{
		String_t* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 42309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mB9938ABF4732361E82D7F83817779FDC7FB55A15 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0D9D61234E36918C53353CAFA00A7CDB372C9942_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_StaticFields*)il2cpp_codegen_static_fields_for(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var))->___s_resourceManager;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
		G_B1_0 = L_1;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_t0D9D61234E36918C53353CAFA00A7CDB372C9942_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_4, L_3, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		((SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_StaticFields*)il2cpp_codegen_static_fields_for(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var))->___s_resourceManager = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_StaticFields*)il2cpp_codegen_static_fields_for(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var))->___s_resourceManager), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// Method Definition Index: 42310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_TextEncoderDoesNotImplementMaxOutputCharsPerInputChar_m83FA414045AF2AA9E9AA3B7E7C82A9BE78BDBC7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8AD0F59C87E26DB328E73CE5878FFD76F11C3D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mB89D93B40ECA2B334204C2B48200BBDB5A356B2F(_stringLiteralE8AD0F59C87E26DB328E73CE5878FFD76F11C3D3, NULL);
		return L_0;
	}
}
// Method Definition Index: 42311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m50185D4A41B164F1E25AB6E425C01728B7340D64 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78(_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6, (&V_0), NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		bool L_1 = V_0;
		G_B3_0 = ((int32_t)(L_1));
	}

IL_0012:
	{
		((SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_StaticFields*)il2cpp_codegen_static_fields_for(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var))->___s_usingResourceKeys = (bool)G_B3_0;
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
// Method Definition Index: 42312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_mC13D5097FF623F741DBD2317F895A92BF87A0643 (NotNullAttribute_t6226457535CBC72E0BA5E67E52E095D65B4114A8* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 42313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullWhenAttribute__ctor_mF0815960C42FA0A9C8AF0C0C3E6DD7BF53678260 (NotNullWhenAttribute_tF1E120995BB8898B23CDEE9CD8C1A61E69F267DD* __this, bool ___0_returnValue, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___0_returnValue;
		__this->___U3CReturnValueU3Ek__BackingField = L_0;
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
// Method Definition Index: 42314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnAttribute__ctor_m2617F1452203471035B03A395AD7E8CF7F3AF84F (DoesNotReturnAttribute_t67176C691A18FEB431E738F1A0647B74B0ADBB9C* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 42315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeUtility_GetUtf16SequenceLength_mAD0FD6B80BD934A998CD7A1A8518376744177B98 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		___0_value = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)65536)));
		uint32_t L_1 = ___0_value;
		___0_value = ((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)33554432)));
		uint32_t L_2 = ___0_value;
		___0_value = ((int32_t)((uint32_t)L_2>>((int32_t)24)));
		uint32_t L_3 = ___0_value;
		return L_3;
	}
}
// Method Definition Index: 42316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeUtility_GetUtf16SurrogatesFromSupplementaryPlaneScalar_mFBE463401A83EBF4C2320407D9075A5A4AE47B2C (uint32_t ___0_value, Il2CppChar* ___1_highSurrogateCodePoint, Il2CppChar* ___2_lowSurrogateCodePoint, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___1_highSurrogateCodePoint;
		uint32_t L_1 = ___0_value;
		*((int16_t*)L_0) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)56557568)))>>((int32_t)10))));
		Il2CppChar* L_2 = ___2_lowSurrogateCodePoint;
		uint32_t L_3 = ___0_value;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)1023))), ((int32_t)56320))));
		return;
	}
}
// Method Definition Index: 42317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_m320F22FD432DEB4C7F80F22E070F14ECFA655C1F (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 42318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsBmpCodePoint_m855EA7F47FC5B33ED1C73EDD123C0389051C8EF2 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)65535))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 42319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_mFEE5B207F59389C23704FAEA79B52FFF4E192BAB (uint32_t ___0_value, uint32_t ___1_lowerBound, uint32_t ___2_upperBound, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		uint32_t L_1 = ___1_lowerBound;
		uint32_t L_2 = ___2_upperBound;
		uint32_t L_3 = ___1_lowerBound;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 42320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsSurrogateCodePoint_m6514E52F8C314F967DBA1CB00A1CD53BBA8DC670 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_mFEE5B207F59389C23704FAEA79B52FFF4E192BAB_inline(L_0, ((int32_t)55296), ((int32_t)57343), NULL);
		return L_1;
	}
}
// Method Definition Index: 42321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnicodeUtility_IsValidUnicodeScalar_m01999FC776A7A53CF0F6F919AE08225884F7EEE7 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)1114112)))^((int32_t)55296)))) >= ((uint32_t)((int32_t)-1112064))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// Method Definition Index: 42322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_m9CA9A74626056DC7B7D16417742FAC8DFA056DA5 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		bool L_1;
		L_1 = UnicodeUtility_IsValidUnicodeScalar_m01999FC776A7A53CF0F6F919AE08225884F7EEE7_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m33015D9CAAF113EFE8202E853C2CA3D987A97528(0, NULL);
	}

IL_000e:
	{
		uint32_t L_2 = ___0_value;
		__this->____value = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Rune__ctor_m9CA9A74626056DC7B7D16417742FAC8DFA056DA5_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	Rune__ctor_m9CA9A74626056DC7B7D16417742FAC8DFA056DA5(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 42323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_mC511E9B0882FA9359750E73B70E73F8FA7D0911F (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		Rune__ctor_m9CA9A74626056DC7B7D16417742FAC8DFA056DA5(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Rune__ctor_mC511E9B0882FA9359750E73B70E73F8FA7D0911F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	Rune__ctor_mC511E9B0882FA9359750E73B70E73F8FA7D0911F(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 42324
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rune__ctor_m6D5BD73487D41925DE0B776F9646E60373DA4923 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, uint32_t ___0_scalarValue, bool ___1_unused, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_scalarValue;
		__this->____value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Rune__ctor_m6D5BD73487D41925DE0B776F9646E60373DA4923_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_scalarValue, bool ___1_unused, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	Rune__ctor_m6D5BD73487D41925DE0B776F9646E60373DA4923_inline(_thisAdjusted, ___0_scalarValue, ___1_unused, method);
}
// Method Definition Index: 42325
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_get_IsAscii_m7F2E10EF934516BCE9920CD3C6402ED142A3993B (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____value;
		bool L_1;
		L_1 = UnicodeUtility_IsAsciiCodePoint_m320F22FD432DEB4C7F80F22E070F14ECFA655C1F_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Rune_get_IsAscii_m7F2E10EF934516BCE9920CD3C6402ED142A3993B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_get_IsAscii_m7F2E10EF934516BCE9920CD3C6402ED142A3993B(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 42326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_get_IsBmp_m645688C36A81DF49B3C238042A21611F1F4D981B (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____value;
		bool L_1;
		L_1 = UnicodeUtility_IsBmpCodePoint_m855EA7F47FC5B33ED1C73EDD123C0389051C8EF2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Rune_get_IsBmp_m645688C36A81DF49B3C238042A21611F1F4D981B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_get_IsBmp_m645688C36A81DF49B3C238042A21611F1F4D981B(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 42327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_op_Equality_m2B5A84292FEE94C02E80850C962BBBB0136D79C5 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_left, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___1_right, const RuntimeMethod* method) 
{
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_0 = ___0_left;
		uint32_t L_1 = L_0.____value;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_2 = ___1_right;
		uint32_t L_3 = L_2.____value;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// Method Definition Index: 42328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_IsControl_mF0FC16C54F3E33C734B3C3F52D79C2EF961D9A00 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_value, const RuntimeMethod* method) 
{
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_0 = ___0_value;
		uint32_t L_1 = L_0.____value;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, 1))&((int32_t)-129)))) <= ((uint32_t)((int32_t)32))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 42329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F Rune_get_ReplacementChar_mE7DA425C57DB5D6879BEF1E6A7440499F27122A7 (const RuntimeMethod* method) 
{
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_0;
		L_0 = Rune_UnsafeCreate_m16BA4411AE09ABDDA83E43F4D918CE651E06794F_inline(((int32_t)65533), NULL);
		return L_0;
	}
}
// Method Definition Index: 42330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_get_Utf16SequenceLength_m05639C5CC19044C21FEC4E7D57B2B29D40022973 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = __this->____value;
		int32_t L_1;
		L_1 = UnicodeUtility_GetUtf16SequenceLength_mAD0FD6B80BD934A998CD7A1A8518376744177B98(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t Rune_get_Utf16SequenceLength_m05639C5CC19044C21FEC4E7D57B2B29D40022973_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rune_get_Utf16SequenceLength_m05639C5CC19044C21FEC4E7D57B2B29D40022973(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 42331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____value;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 42332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_DecodeFromUtf16_mA1721E120027218B984163DE7E65AA613CCDAB3D (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_source, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* ___1_result, int32_t* ___2_charsConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	{
		bool L_0;
		L_0 = ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88((&___0_source), ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_RuntimeMethod_var);
		int32_t L_2 = *((uint16_t*)L_1);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_4 = ___1_result;
		bool L_5;
		L_5 = Rune_TryCreate_mBFAA07BF4298DFCD516A8C62CB4E1C39B926FA7E(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		int32_t* L_6 = ___2_charsConsumed;
		*((int32_t*)L_6) = (int32_t)1;
		return (int32_t)(0);
	}

IL_0021:
	{
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_source), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		if ((!(((uint32_t)1) < ((uint32_t)L_7))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar* L_8;
		L_8 = ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_inline((&___0_source), 1, ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_RuntimeMethod_var);
		int32_t L_9 = *((uint16_t*)L_8);
		V_1 = L_9;
		Il2CppChar L_10 = V_0;
		Il2CppChar L_11 = V_1;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_12 = ___1_result;
		bool L_13;
		L_13 = Rune_TryCreate_m5DCEE15CF2F8CFB0B059BE7421671AA0459A4D0E(L_10, L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		int32_t* L_14 = ___2_charsConsumed;
		*((int32_t*)L_14) = (int32_t)2;
		return (int32_t)(0);
	}

IL_0044:
	{
		Il2CppChar L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_16;
		L_16 = Char_IsHighSurrogate_mED1E5FB863528ABB0D7D3DC4DE0FAB4517760658(L_15, NULL);
		if (!L_16)
		{
			goto IL_0062;
		}
	}

IL_004c:
	{
		int32_t* L_17 = ___2_charsConsumed;
		int32_t L_18;
		L_18 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_source), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		*((int32_t*)L_17) = (int32_t)L_18;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_19 = ___1_result;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_20;
		L_20 = Rune_get_ReplacementChar_mE7DA425C57DB5D6879BEF1E6A7440499F27122A7(NULL);
		*(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*)L_19 = L_20;
		return (int32_t)(2);
	}

IL_0062:
	{
		int32_t* L_21 = ___2_charsConsumed;
		*((int32_t*)L_21) = (int32_t)1;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_22 = ___1_result;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_23;
		L_23 = Rune_get_ReplacementChar_mE7DA425C57DB5D6879BEF1E6A7440499F27122A7(NULL);
		*(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*)L_22 = L_23;
		return (int32_t)(3);
	}
}
// Method Definition Index: 42333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_DecodeFromUtf8_mA26A377DDDB4BBB698378511691E091577D1F62B (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_source, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* ___1_result, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_2 = V_0;
		uint8_t* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_inline((&___0_source), L_2, ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_RuntimeMethod_var);
		int32_t L_4 = *((uint8_t*)L_3);
		V_1 = L_4;
		uint32_t L_5 = V_1;
		bool L_6;
		L_6 = UnicodeUtility_IsAsciiCodePoint_m320F22FD432DEB4C7F80F22E070F14ECFA655C1F_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}

IL_0021:
	{
		int32_t* L_7 = ___2_bytesConsumed;
		int32_t L_8 = V_0;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_9 = ___1_result;
		uint32_t L_10 = V_1;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_11;
		L_11 = Rune_UnsafeCreate_m16BA4411AE09ABDDA83E43F4D918CE651E06794F_inline(L_10, NULL);
		*(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*)L_9 = L_11;
		return (int32_t)(0);
	}

IL_0034:
	{
		uint32_t L_12 = V_1;
		bool L_13;
		L_13 = UnicodeUtility_IsInRangeInclusive_mFEE5B207F59389C23704FAEA79B52FFF4E192BAB_inline(L_12, ((int32_t)194), ((int32_t)244), NULL);
		if (!L_13)
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_14 = V_1;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)194)))<<6));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		if ((!(((uint32_t)L_16) < ((uint32_t)L_17))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_18 = V_0;
		uint8_t* L_19;
		L_19 = ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_inline((&___0_source), L_18, ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_RuntimeMethod_var);
		int32_t L_20 = *((uint8_t*)L_19);
		V_2 = ((int8_t)L_20);
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_22 = V_1;
		int32_t L_23 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, L_23));
		uint32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, ((int32_t)128)));
		uint32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, ((int32_t)128)));
		uint32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) >= ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_27 = V_1;
		bool L_28;
		L_28 = UnicodeUtility_IsInRangeInclusive_mFEE5B207F59389C23704FAEA79B52FFF4E192BAB_inline(L_27, ((int32_t)2080), ((int32_t)3343), NULL);
		if (!L_28)
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_29 = V_1;
		bool L_30;
		L_30 = UnicodeUtility_IsInRangeInclusive_mFEE5B207F59389C23704FAEA79B52FFF4E192BAB_inline(L_29, ((int32_t)2912), ((int32_t)2943), NULL);
		if (L_30)
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_31 = V_1;
		bool L_32;
		L_32 = UnicodeUtility_IsInRangeInclusive_mFEE5B207F59389C23704FAEA79B52FFF4E192BAB_inline(L_31, ((int32_t)3072), ((int32_t)3087), NULL);
		if (L_32)
		{
			goto IL_0153;
		}
	}
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		if ((!(((uint32_t)L_34) < ((uint32_t)L_35))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_36 = V_0;
		uint8_t* L_37;
		L_37 = ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_inline((&___0_source), L_36, ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_RuntimeMethod_var);
		int32_t L_38 = *((uint8_t*)L_37);
		V_2 = ((int8_t)L_38);
		int32_t L_39 = V_2;
		if ((((int32_t)L_39) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_40 = V_1;
		V_1 = ((int32_t)((int32_t)L_40<<6));
		uint32_t L_41 = V_1;
		int32_t L_42 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, L_42));
		uint32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, ((int32_t)128)));
		uint32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, ((int32_t)131072)));
		uint32_t L_45 = V_1;
		if ((!(((uint32_t)L_45) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_46 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		if ((!(((uint32_t)L_47) < ((uint32_t)L_48))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_49 = V_0;
		uint8_t* L_50;
		L_50 = ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_inline((&___0_source), L_49, ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_RuntimeMethod_var);
		int32_t L_51 = *((uint8_t*)L_50);
		V_2 = ((int8_t)L_51);
		int32_t L_52 = V_2;
		if ((((int32_t)L_52) >= ((int32_t)((int32_t)-64))))
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_53 = V_1;
		V_1 = ((int32_t)((int32_t)L_53<<6));
		uint32_t L_54 = V_1;
		int32_t L_55 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, L_55));
		uint32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, ((int32_t)128)));
		uint32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, ((int32_t)4194304)));
		goto IL_0021;
	}

IL_0151:
	{
		V_0 = 1;
	}

IL_0153:
	{
		int32_t* L_58 = ___2_bytesConsumed;
		int32_t L_59 = V_0;
		*((int32_t*)L_58) = (int32_t)L_59;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_60 = ___1_result;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_61;
		L_61 = Rune_get_ReplacementChar_mE7DA425C57DB5D6879BEF1E6A7440499F27122A7(NULL);
		*(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*)L_60 = L_61;
		return (int32_t)(3);
	}

IL_0163:
	{
		int32_t* L_62 = ___2_bytesConsumed;
		int32_t L_63 = V_0;
		*((int32_t*)L_62) = (int32_t)L_63;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_64 = ___1_result;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_65;
		L_65 = Rune_get_ReplacementChar_mE7DA425C57DB5D6879BEF1E6A7440499F27122A7(NULL);
		*(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*)L_64 = L_65;
		return (int32_t)(2);
	}
}
// Method Definition Index: 42334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_Equals_m70B96965EC32689B6E5D2E19143D77F676032193 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*)UnBox(L_1, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F_il2cpp_TypeInfo_var)));
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_2 = V_0;
		bool L_3;
		L_3 = Rune_Equals_mB1DF17C10FB746A0775193C67BFA3CDA1836D898(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rune_Equals_m70B96965EC32689B6E5D2E19143D77F676032193_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_Equals_m70B96965EC32689B6E5D2E19143D77F676032193(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 42335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_Equals_mB1DF17C10FB746A0775193C67BFA3CDA1836D898 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_other, const RuntimeMethod* method) 
{
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_0 = (*(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*)__this);
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_1 = ___0_other;
		bool L_2;
		L_2 = Rune_op_Equality_m2B5A84292FEE94C02E80850C962BBBB0136D79C5(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Rune_Equals_mB1DF17C10FB746A0775193C67BFA3CDA1836D898_AdjustorThunk (RuntimeObject* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_other, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_Equals_mB1DF17C10FB746A0775193C67BFA3CDA1836D898(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 42336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rune_GetHashCode_mA4D43BF6E932790A30110B19E6B9E98FDFF0DB7B (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rune_GetHashCode_mA4D43BF6E932790A30110B19E6B9E98FDFF0DB7B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rune_GetHashCode_mA4D43BF6E932790A30110B19E6B9E98FDFF0DB7B(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 42337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryCreate_mBFAA07BF4298DFCD516A8C62CB4E1C39B926FA7E (Il2CppChar ___0_ch, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* ___1_result, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___0_ch;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		bool L_2;
		L_2 = UnicodeUtility_IsSurrogateCodePoint_m6514E52F8C314F967DBA1CB00A1CD53BBA8DC670_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_3 = ___1_result;
		uint32_t L_4 = V_0;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_5;
		L_5 = Rune_UnsafeCreate_m16BA4411AE09ABDDA83E43F4D918CE651E06794F_inline(L_4, NULL);
		*(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*)L_3 = L_5;
		return (bool)1;
	}

IL_0018:
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_6 = ___1_result;
		il2cpp_codegen_initobj(L_6, sizeof(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F));
		return (bool)0;
	}
}
// Method Definition Index: 42338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryCreate_m5DCEE15CF2F8CFB0B059BE7421671AA0459A4D0E (Il2CppChar ___0_highSurrogate, Il2CppChar ___1_lowSurrogate, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* ___2_result, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___0_highSurrogate;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)55296)));
		Il2CppChar L_1 = ___1_lowSurrogate;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)56320)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2|(int32_t)L_3))) <= ((uint32_t)((int32_t)1023)))))
		{
			goto IL_0039;
		}
	}
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_4 = ___2_result;
		uint32_t L_5 = V_0;
		Il2CppChar L_6 = ___1_lowSurrogate;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_7;
		L_7 = Rune_UnsafeCreate_m16BA4411AE09ABDDA83E43F4D918CE651E06794F_inline(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_5<<((int32_t)10))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)56320))))), ((int32_t)65536))), NULL);
		*(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*)L_4 = L_7;
		return (bool)1;
	}

IL_0039:
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* L_8 = ___2_result;
		il2cpp_codegen_initobj(L_8, sizeof(Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F));
		return (bool)0;
	}
}
// Method Definition Index: 42339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryEncodeToUtf16_m7D60E83815F9069CA4137113E02B792F6164A51B (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_destination, int32_t* ___1_charsWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline((&___0_destination), Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		bool L_1;
		L_1 = Rune_get_IsBmp_m645688C36A81DF49B3C238042A21611F1F4D981B(__this, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar* L_2;
		L_2 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___0_destination), 0, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		uint32_t L_3 = __this->____value;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)L_3);
		int32_t* L_4 = ___1_charsWritten;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}

IL_0027:
	{
		int32_t L_5;
		L_5 = Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline((&___0_destination), Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0051;
		}
	}
	{
		uint32_t L_6 = __this->____value;
		Il2CppChar* L_7;
		L_7 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___0_destination), 0, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		Il2CppChar* L_8;
		L_8 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___0_destination), 1, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		UnicodeUtility_GetUtf16SurrogatesFromSupplementaryPlaneScalar_mFBE463401A83EBF4C2320407D9075A5A4AE47B2C_inline(L_6, L_7, L_8, NULL);
		int32_t* L_9 = ___1_charsWritten;
		*((int32_t*)L_9) = (int32_t)2;
		return (bool)1;
	}

IL_0051:
	{
		int32_t* L_10 = ___1_charsWritten;
		*((int32_t*)L_10) = (int32_t)0;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rune_TryEncodeToUtf16_m7D60E83815F9069CA4137113E02B792F6164A51B_AdjustorThunk (RuntimeObject* __this, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_destination, int32_t* ___1_charsWritten, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_TryEncodeToUtf16_m7D60E83815F9069CA4137113E02B792F6164A51B(_thisAdjusted, ___0_destination, ___1_charsWritten, method);
	return _returnValue;
}
// Method Definition Index: 42340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rune_TryEncodeToUtf8_m73B938111E53C7AC0850BFFAEAB720718D081CA4 (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_destination, int32_t* ___1_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___0_destination), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0167;
		}
	}
	{
		bool L_1;
		L_1 = Rune_get_IsAscii_m7F2E10EF934516BCE9920CD3C6402ED142A3993B(__this, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t* L_2;
		L_2 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 0, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_3 = __this->____value;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)L_3);
		int32_t* L_4 = ___1_bytesWritten;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}

IL_002a:
	{
		int32_t L_5;
		L_5 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___0_destination), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0167;
		}
	}
	{
		uint32_t L_6 = __this->____value;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)2047)))))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t* L_7;
		L_7 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 0, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_8 = __this->____value;
		*((int8_t*)L_7) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, ((int32_t)12288)))>>6)));
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 1, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_10 = __this->____value;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_10&((int32_t)63))), ((int32_t)128))));
		int32_t* L_11 = ___1_bytesWritten;
		*((int32_t*)L_11) = (int32_t)2;
		return (bool)1;
	}

IL_007a:
	{
		int32_t L_12;
		L_12 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___0_destination), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)3)))
		{
			goto IL_0167;
		}
	}
	{
		uint32_t L_13 = __this->____value;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)65535)))))
		{
			goto IL_00e9;
		}
	}
	{
		uint8_t* L_14;
		L_14 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 0, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_15 = __this->____value;
		*((int8_t*)L_14) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, ((int32_t)917504)))>>((int32_t)12))));
		uint8_t* L_16;
		L_16 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 1, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_17 = __this->____value;
		*((int8_t*)L_16) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)L_17&((int32_t)4032)))>>6)), ((int32_t)128))));
		uint8_t* L_18;
		L_18 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 2, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_19 = __this->____value;
		*((int8_t*)L_18) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_19&((int32_t)63))), ((int32_t)128))));
		int32_t* L_20 = ___1_bytesWritten;
		*((int32_t*)L_20) = (int32_t)3;
		return (bool)1;
	}

IL_00e9:
	{
		int32_t L_21;
		L_21 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___0_destination), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)4)))
		{
			goto IL_0167;
		}
	}
	{
		uint8_t* L_22;
		L_22 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 0, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_23 = __this->____value;
		*((int8_t*)L_22) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, ((int32_t)62914560)))>>((int32_t)18))));
		uint8_t* L_24;
		L_24 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 1, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_25 = __this->____value;
		*((int8_t*)L_24) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)L_25&((int32_t)258048)))>>((int32_t)12))), ((int32_t)128))));
		uint8_t* L_26;
		L_26 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 2, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_27 = __this->____value;
		*((int8_t*)L_26) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)((int32_t)L_27&((int32_t)4032)))>>6)), ((int32_t)128))));
		uint8_t* L_28;
		L_28 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___0_destination), 3, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_29 = __this->____value;
		*((int8_t*)L_28) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_29&((int32_t)63))), ((int32_t)128))));
		int32_t* L_30 = ___1_bytesWritten;
		*((int32_t*)L_30) = (int32_t)4;
		return (bool)1;
	}

IL_0167:
	{
		int32_t* L_31 = ___1_bytesWritten;
		*((int32_t*)L_31) = (int32_t)0;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rune_TryEncodeToUtf8_m73B938111E53C7AC0850BFFAEAB720718D081CA4_AdjustorThunk (RuntimeObject* __this, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_destination, int32_t* ___1_bytesWritten, const RuntimeMethod* method)
{
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rune_TryEncodeToUtf8_m73B938111E53C7AC0850BFFAEAB720718D081CA4(_thisAdjusted, ___0_destination, ___1_bytesWritten, method);
	return _returnValue;
}
// Method Definition Index: 42341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F Rune_UnsafeCreate_m16BA4411AE09ABDDA83E43F4D918CE651E06794F (uint32_t ___0_scalarValue, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_scalarValue;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rune__ctor_m6D5BD73487D41925DE0B776F9646E60373DA4923_inline((&L_1), L_0, (bool)0, NULL);
		return L_1;
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
// Method Definition Index: 42342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 UnicodeHelpers_GetDefinedBmpCodePointsBitmapLittleEndian_mE10AB64E3FF5716A3B0C3B674543242026044747 (const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_0;
		L_0 = UnicodeHelpers_get_DefinedCharsBitmapSpan_mC3E40C81137E786F28AA598CD5F14841B6F69C72(NULL);
		return L_0;
	}
}
// Method Definition Index: 42343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mBD46BC0E9A2B84A2F85569B7ABC79AB19FA64423 (uint32_t ___0_scalar, Il2CppChar* ___1_highSurrogate, Il2CppChar* ___2_lowSurrogate, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___1_highSurrogate;
		uint32_t L_1 = ___0_scalar;
		*((int16_t*)L_0) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)56557568)))>>((int32_t)10))));
		Il2CppChar* L_2 = ___2_lowSurrogate;
		uint32_t L_3 = ___0_scalar;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)1023))), ((int32_t)56320))));
		return;
	}
}
// Method Definition Index: 42344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeHelpers_GetUtf8RepresentationForScalarValue_mFA681D8DC4256D0432289941E3619FA8F71960AD (uint32_t ___0_scalar, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	uint8_t V_9 = 0x0;
	{
		uint32_t L_0 = ___0_scalar;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127)))))
		{
			goto IL_000a;
		}
	}
	{
		uint32_t L_1 = ___0_scalar;
		V_0 = (uint8_t)((int32_t)(uint8_t)L_1);
		uint8_t L_2 = V_0;
		return L_2;
	}

IL_000a:
	{
		uint32_t L_3 = ___0_scalar;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)2047)))))
		{
			goto IL_002f;
		}
	}
	{
		uint32_t L_4 = ___0_scalar;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)192)|((int32_t)((uint32_t)L_4>>6)))));
		uint32_t L_5 = ___0_scalar;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)((int32_t)L_5&((int32_t)63))))));
		uint8_t L_6 = V_2;
		uint8_t L_7 = V_1;
		return ((int32_t)(((int32_t)((int32_t)L_6<<8))|(int32_t)L_7));
	}

IL_002f:
	{
		uint32_t L_8 = ___0_scalar;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)65535)))))
		{
			goto IL_006b;
		}
	}
	{
		uint32_t L_9 = ___0_scalar;
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)224)|((int32_t)((uint32_t)L_9>>((int32_t)12))))));
		uint32_t L_10 = ___0_scalar;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)(((int32_t)((uint32_t)L_10>>6))&((int32_t)63))))));
		uint32_t L_11 = ___0_scalar;
		V_5 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)((int32_t)L_11&((int32_t)63))))));
		uint8_t L_12 = V_5;
		uint8_t L_13 = V_4;
		uint8_t L_14 = V_3;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_12<<8))|(int32_t)L_13))<<8))|(int32_t)L_14));
	}

IL_006b:
	{
		uint32_t L_15 = ___0_scalar;
		V_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)240)|((int32_t)((uint32_t)L_15>>((int32_t)18))))));
		uint32_t L_16 = ___0_scalar;
		V_7 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)(((int32_t)((uint32_t)L_16>>((int32_t)12)))&((int32_t)63))))));
		uint32_t L_17 = ___0_scalar;
		V_8 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)(((int32_t)((uint32_t)L_17>>6))&((int32_t)63))))));
		uint32_t L_18 = ___0_scalar;
		V_9 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)((int32_t)L_18&((int32_t)63))))));
		uint8_t L_19 = V_9;
		uint8_t L_20 = V_8;
		uint8_t L_21 = V_7;
		uint8_t L_22 = V_6;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_19<<8))|(int32_t)L_20))<<8))|(int32_t)L_21))<<8))|(int32_t)L_22));
	}
}
// Method Definition Index: 42345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 UnicodeHelpers_get_DefinedCharsBitmapSpan_mC3E40C81137E786F28AA598CD5F14841B6F69C72 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m6BEA29F375B04D61FEA8DD79A7B77194EDE238CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t74BFFA1E67A22B43F6A71D81CD99899FA2814CBE_StaticFields____8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_RVAStorage);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_0;
		memset((&L_0), 0, sizeof(L_0));
		ReadOnlySpan_1__ctor_m6BEA29F375B04D61FEA8DD79A7B77194EDE238CA_inline((&L_0), (void*)((__StaticArrayInitTypeSizeU3D8192_tF233F7E636930C977963482261B4EBEE2573512C*)U3CPrivateImplementationDetailsU3E_t74BFFA1E67A22B43F6A71D81CD99899FA2814CBE_StaticFields____8B30AFDCF07C4ABDFE0FAF65F79FC40A2E9AC497C42B1BA5C996BDFB3F6EC2F6_RVAStorage), ((int32_t)8192), ReadOnlySpan_1__ctor_m6BEA29F375B04D61FEA8DD79A7B77194EDE238CA_RuntimeMethod_var);
		return L_0;
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
// Method Definition Index: 42346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange__ctor_mE703FAECF78AE16E5422C06BC395FE0DD96A531F (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, int32_t ___0_firstCodePoint, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_firstCodePoint;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_firstCodePoint;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09EAD6A50C87B14995000A914300979F01096C97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange__ctor_mE703FAECF78AE16E5422C06BC395FE0DD96A531F_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = ___0_firstCodePoint;
		int32_t L_5 = ___1_length;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)L_4), ((int64_t)L_5)))) <= ((int64_t)((int64_t)((int32_t)65536)))))
		{
			goto IL_0039;
		}
	}

IL_002e:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange__ctor_mE703FAECF78AE16E5422C06BC395FE0DD96A531F_RuntimeMethod_var)));
	}

IL_0039:
	{
		int32_t L_7 = ___0_firstCodePoint;
		UnicodeRange_set_FirstCodePoint_m42FD1ED8249621B6259965C360453856118383CB_inline(__this, L_7, NULL);
		int32_t L_8 = ___1_length;
		UnicodeRange_set_Length_m3B39C98498D5FC82DC3F401987300AB44EBDF7B4_inline(__this, L_8, NULL);
		return;
	}
}
// Method Definition Index: 42347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_m8F0E6509E72EE287E5F8827CBCEAA8EE0F85BF12 (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFirstCodePointU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 42348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m42FD1ED8249621B6259965C360453856118383CB (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFirstCodePointU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 42349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_mCE666A2C567AA63B583810061F92AA25413FC1B3 (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 42350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m3B39C98498D5FC82DC3F401987300AB44EBDF7B4 (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLengthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 42351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* UnicodeRange_Create_m10FCA80BBBF64D2D6AD90664DC096EE56DBD9775 (Il2CppChar ___0_firstCharacter, Il2CppChar ___1_lastCharacter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___1_lastCharacter;
		Il2CppChar L_1 = ___0_firstCharacter;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7724F58887AE658863220F8D9138F5AC5532B2C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeRange_Create_m10FCA80BBBF64D2D6AD90664DC096EE56DBD9775_RuntimeMethod_var)));
	}

IL_000f:
	{
		Il2CppChar L_3 = ___0_firstCharacter;
		Il2CppChar L_4 = ___1_lastCharacter;
		Il2CppChar L_5 = ___0_firstCharacter;
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_6 = (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD*)il2cpp_codegen_object_new(UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD_il2cpp_TypeInfo_var);
		UnicodeRange__ctor_mE703FAECF78AE16E5422C06BC395FE0DD96A531F(L_6, L_3, ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)))), NULL);
		return L_6;
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
// Method Definition Index: 42352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* UnicodeRanges_get_All_mD9CD17ACAE1CF216979A72F3EE32420555A16DAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* G_B2_0 = NULL;
	UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* G_B1_0 = NULL;
	{
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_0 = ((UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_il2cpp_TypeInfo_var))->____all;
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_2;
		L_2 = UnicodeRanges_CreateRange_m7AE1E6C5870B5F57F156A0D62523C6AC5C2E4E03((&((UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_il2cpp_TypeInfo_var))->____all), 0, ((int32_t)65535), NULL);
		G_B2_0 = L_2;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// Method Definition Index: 42353
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* UnicodeRanges_CreateRange_m7AE1E6C5870B5F57F156A0D62523C6AC5C2E4E03 (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD** ___0_range, Il2CppChar ___1_first, Il2CppChar ___2_last, const RuntimeMethod* method) 
{
	{
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD** L_0 = ___0_range;
		Il2CppChar L_1 = ___1_first;
		Il2CppChar L_2 = ___2_last;
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_3;
		L_3 = UnicodeRange_Create_m10FCA80BBBF64D2D6AD90664DC096EE56DBD9775(L_1, L_2, NULL);
		VolatileWrite((UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD**)L_0, (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD*)L_3);
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD** L_4 = ___0_range;
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_5 = *((UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD**)L_4);
		return L_5;
	}
}
// Method Definition Index: 42354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* UnicodeRanges_get_BasicLatin_m7145E34B74CBD2462ED01A989E6AA302E1878477 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* G_B2_0 = NULL;
	UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* G_B1_0 = NULL;
	{
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_0 = ((UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_il2cpp_TypeInfo_var))->____u0000;
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
		G_B1_0 = L_1;
	}
	{
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_2;
		L_2 = UnicodeRanges_CreateRange_m7AE1E6C5870B5F57F156A0D62523C6AC5C2E4E03((&((UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_StaticFields*)il2cpp_codegen_static_fields_for(UnicodeRanges_t54E0C7E6647F54B3355E26A53DA02DA39360DE78_il2cpp_TypeInfo_var))->____u0000), 0, ((int32_t)127), NULL);
		G_B2_0 = L_2;
	}

IL_0016:
	{
		return G_B2_0;
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
// Method Definition Index: 42355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* __this, Il2CppChar ___0_key, uint8_t ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_key;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0017;
		}
	}
	{
		U3CBufferU3Ee__FixedBuffer_tB1330CD0855BB622D9F7382731EF4EA9DFD9F62D* L_1 = (U3CBufferU3Ee__FixedBuffer_tB1330CD0855BB622D9F7382731EF4EA9DFD9F62D*)(&__this->___Buffer);
		uint8_t* L_2 = (uint8_t*)(&L_1->___FixedElementField);
		Il2CppChar L_3 = ___0_key;
		uint8_t L_4 = ___1_value;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, (int32_t)L_3))) = (int8_t)L_4;
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___0_key, uint8_t ___1_value, const RuntimeMethod* method)
{
	AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*>(__this + _offset);
	AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B(_thisAdjusted, ___0_key, ___1_value, method);
}
// Method Definition Index: 42356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsciiByteMap_TryLookup_m2045F16F64FEC435CDCA248AFA3D4EA0EDED2100 (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_key, uint8_t* ___1_value, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		bool L_0;
		L_0 = Rune_get_IsAscii_m7F2E10EF934516BCE9920CD3C6402ED142A3993B((&___0_key), NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		U3CBufferU3Ee__FixedBuffer_tB1330CD0855BB622D9F7382731EF4EA9DFD9F62D* L_1 = (U3CBufferU3Ee__FixedBuffer_tB1330CD0855BB622D9F7382731EF4EA9DFD9F62D*)(&__this->___Buffer);
		uint8_t* L_2 = (uint8_t*)(&L_1->___FixedElementField);
		int32_t L_3;
		L_3 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___0_key), NULL);
		int32_t L_4 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)L_3))));
		V_0 = (uint8_t)L_4;
		uint8_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t* L_6 = ___1_value;
		uint8_t L_7 = V_0;
		*((int8_t*)L_6) = (int8_t)L_7;
		return (bool)1;
	}

IL_0027:
	{
		uint8_t* L_8 = ___1_value;
		*((int8_t*)L_8) = (int8_t)0;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AsciiByteMap_TryLookup_m2045F16F64FEC435CDCA248AFA3D4EA0EDED2100_AdjustorThunk (RuntimeObject* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_key, uint8_t* ___1_value, const RuntimeMethod* method)
{
	AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsciiByteMap_TryLookup_m2045F16F64FEC435CDCA248AFA3D4EA0EDED2100_inline(_thisAdjusted, ___0_key, ___1_value, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 42357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_AllowChar_m20439C3829232D0D2F7E4F7AB7A59CA8D818D9B2 (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___0_value;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6* L_1 = (U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6*)(&__this->___Bitmap);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		uintptr_t L_3 = V_0;
		uint32_t* L_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4))))));
		int32_t L_5 = *((uint32_t*)L_4);
		int32_t L_6 = V_1;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5|((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedBmpCodePointsBitmap_AllowChar_m20439C3829232D0D2F7E4F7AB7A59CA8D818D9B2_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___0_value, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*>(__this + _offset);
	AllowedBmpCodePointsBitmap_AllowChar_m20439C3829232D0D2F7E4F7AB7A59CA8D818D9B2_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 42358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0 (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___0_value;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6* L_1 = (U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6*)(&__this->___Bitmap);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		uintptr_t L_3 = V_0;
		uint32_t* L_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4))))));
		int32_t L_5 = *((uint32_t*)L_4);
		int32_t L_6 = V_1;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5&((~((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))));
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___0_value, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*>(__this + _offset);
	AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 42359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8A221E2F98F0FE0D68C2C4DF50FD8488F129BB09 (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, const RuntimeMethod* method) 
{
	{
		AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline(__this, ((int32_t)60), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline(__this, ((int32_t)62), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline(__this, ((int32_t)38), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline(__this, ((int32_t)39), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline(__this, ((int32_t)34), NULL);
		AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline(__this, ((int32_t)43), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8A221E2F98F0FE0D68C2C4DF50FD8488F129BB09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*>(__this + _offset);
	AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8A221E2F98F0FE0D68C2C4DF50FD8488F129BB09(_thisAdjusted, method);
}
// Method Definition Index: 42360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_m0F31C0A448F7E7A8333724C5E806561DAC13BD9F (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mCD1B124CDC6B59DAF17F6A3BB52EC14D77A17148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m58CBA4AE57A7D59CD5B69FBFD0609C6C28A45C8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mACFB9A8C4B9ED50E54C5071AAE84DC41BDD7D34A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Span_1_t52E8D6CE4051868EF02A556436D822434F573789 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6* L_0 = (U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6*)(&__this->___Bitmap);
		uint32_t* L_1 = (uint32_t*)(&L_0->___FixedElementField);
		V_1 = L_1;
		uint32_t* L_2 = V_1;
		V_0 = (uint32_t*)((uintptr_t)L_2);
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_3;
		L_3 = UnicodeHelpers_GetDefinedBmpCodePointsBitmapLittleEndian_mE10AB64E3FF5716A3B0C3B674543242026044747(NULL);
		V_2 = L_3;
		uint32_t* L_4 = V_0;
		Span_1__ctor_mCD1B124CDC6B59DAF17F6A3BB52EC14D77A17148_inline((&V_3), (void*)L_4, ((int32_t)2048), Span_1__ctor_mCD1B124CDC6B59DAF17F6A3BB52EC14D77A17148_RuntimeMethod_var);
		V_4 = 0;
		goto IL_004a;
	}

IL_0027:
	{
		int32_t L_5 = V_4;
		uint32_t* L_6;
		L_6 = Span_1_get_Item_m58CBA4AE57A7D59CD5B69FBFD0609C6C28A45C8F_inline((&V_3), L_5, Span_1_get_Item_m58CBA4AE57A7D59CD5B69FBFD0609C6C28A45C8F_RuntimeMethod_var);
		uint32_t* L_7 = L_6;
		int32_t L_8 = *((uint32_t*)L_7);
		int32_t L_9 = V_4;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_10;
		L_10 = ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_inline((&V_2), ((int32_t)il2cpp_codegen_multiply(L_9, 4)), ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		uint32_t L_11;
		L_11 = BinaryPrimitives_ReadUInt32LittleEndian_mA66C5A31FBA4E74D472679C36CB4E5685E27654C_inline(L_10, NULL);
		*((int32_t*)L_7) = (int32_t)((int32_t)(L_8&(int32_t)L_11));
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004a:
	{
		int32_t L_13 = V_4;
		int32_t L_14;
		L_14 = Span_1_get_Length_mACFB9A8C4B9ED50E54C5071AAE84DC41BDD7D34A_inline((&V_3), Span_1_get_Length_mACFB9A8C4B9ED50E54C5071AAE84DC41BDD7D34A_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0027;
		}
	}
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_m0F31C0A448F7E7A8333724C5E806561DAC13BD9F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*>(__this + _offset);
	AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_m0F31C0A448F7E7A8333724C5E806561DAC13BD9F(_thisAdjusted, method);
}
// Method Definition Index: 42361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4 (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___0_value;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6* L_1 = (U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6*)(&__this->___Bitmap);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		uintptr_t L_3 = V_0;
		int32_t L_4 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4)))))));
		int32_t L_5 = V_1;
		if (!((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))))))
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___0_value, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*>(__this + _offset);
	bool _returnValue;
	_returnValue = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
// Method Definition Index: 42362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCodePointAllowed_mE8C77B539C520F0C5E3FBE79A9523BDF37B99A0F (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		bool L_1;
		L_1 = UnicodeUtility_IsBmpCodePoint_m855EA7F47FC5B33ED1C73EDD123C0389051C8EF2_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		uint32_t L_2 = ___0_value;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline(L_2, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6* L_3 = (U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6*)(&__this->___Bitmap);
		uint32_t* L_4 = (uint32_t*)(&L_3->___FixedElementField);
		uintptr_t L_5 = V_0;
		int32_t L_6 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_5), ((int64_t)4)))))));
		int32_t L_7 = V_1;
		if (!((int32_t)(L_6&((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AllowedBmpCodePointsBitmap_IsCodePointAllowed_mE8C77B539C520F0C5E3FBE79A9523BDF37B99A0F_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*>(__this + _offset);
	bool _returnValue;
	_returnValue = AllowedBmpCodePointsBitmap_IsCodePointAllowed_mE8C77B539C520F0C5E3FBE79A9523BDF37B99A0F_inline(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
// Method Definition Index: 42363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532 (uint32_t ___0_value, uintptr_t* ___1_index, int32_t* ___2_offset, const RuntimeMethod* method) 
{
	{
		uintptr_t* L_0 = ___1_index;
		uint32_t L_1 = ___0_value;
		*((intptr_t*)L_0) = (intptr_t)((uintptr_t)((int32_t)((uint32_t)L_1>>5)));
		int32_t* L_2 = ___2_offset;
		uint32_t L_3 = ___0_value;
		*((int32_t*)L_2) = (int32_t)((int32_t)((int32_t)L_3&((int32_t)31)));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 42364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__ctor_m9F15F7BBE6D0D3C923A832D9B3DE865F2D7A33AB (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* ___0_scalarEscaper, AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* ___1_allowedCodePointsBmp, bool ___2_forbidHtmlSensitiveCharacters, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___3_extraCharactersToEscape, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* L_0 = ___0_scalarEscaper;
		__this->____scalarEscaper = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scalarEscaper), (void*)L_0);
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_1 = ___1_allowedCodePointsBmp;
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2 L_2 = (*(AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)L_1);
		__this->____allowedBmpCodePoints = L_2;
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_3 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		AllowedBmpCodePointsBitmap_ForbidUndefinedCharacters_m0F31C0A448F7E7A8333724C5E806561DAC13BD9F(L_3, NULL);
		bool L_4 = ___2_forbidHtmlSensitiveCharacters;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_5 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		AllowedBmpCodePointsBitmap_ForbidHtmlCharacters_m8A221E2F98F0FE0D68C2C4DF50FD8488F129BB09(L_5, NULL);
	}

IL_0032:
	{
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_6 = ___3_extraCharactersToEscape;
		V_0 = L_6;
		V_1 = 0;
		goto IL_0053;
	}

IL_0039:
	{
		int32_t L_7 = V_1;
		Il2CppChar* L_8;
		L_8 = ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_inline((&V_0), L_7, ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_RuntimeMethod_var);
		int32_t L_9 = *((uint16_t*)L_8);
		V_2 = L_9;
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_10 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar L_11 = V_2;
		AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline(L_10, L_11, NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0053:
	{
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&V_0), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0039;
		}
	}
	{
		AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* L_15 = (AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E*)(&__this->____asciiPreescapedData);
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_16 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* L_17 = ___0_scalarEscaper;
		AsciiPreescapedData_PopulatePreescapedData_mF28EAAE5A8F49C81C0644D409F004634AB66FBE5(L_15, L_16, L_17, NULL);
		AllowedAsciiCodePoints_tFFFD8C74BE909C8EA9A27124F51DDCC7F6729800* L_18 = (AllowedAsciiCodePoints_tFFFD8C74BE909C8EA9A27124F51DDCC7F6729800*)(&__this->____allowedAsciiCodePoints);
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_19 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		AllowedAsciiCodePoints_PopulateAllowedCodePoints_mCABB548D824C8F0A722198B16638FA170F1518C4(L_18, L_19, NULL);
		return;
	}
}
// Method Definition Index: 42365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_FindFirstCharacterToEncode_mD80BEE36341F2B33EFA4C39676DDDA0A9605CD4E (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, Il2CppChar* ___0_text, int32_t ___1_textLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar* L_0 = ___0_text;
		int32_t L_1 = ___1_textLength;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_inline((&L_2), (void*)L_0, L_1, ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_RuntimeMethod_var);
		int32_t L_3;
		L_3 = OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_mF7BC5130E4B27BECD08A2267839D49C547901267(__this, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 42366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_TryEncodeUnicodeScalar_m4F79E08B67CD84D7AF357C546FB7A69745934AEB (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, int32_t ___0_unicodeScalar, Il2CppChar* ___1_buffer, int32_t ___2_bufferLength, int32_t* ___3_numberOfCharactersWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tB3916DFC764DF153B19342195C5137E7904A154F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar* L_0 = ___1_buffer;
		int32_t L_1 = ___2_bufferLength;
		Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_inline((&V_0), (void*)L_0, L_1, Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var);
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_2 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		int32_t L_3 = ___0_unicodeScalar;
		bool L_4;
		L_4 = AllowedBmpCodePointsBitmap_IsCodePointAllowed_mE8C77B539C520F0C5E3FBE79A9523BDF37B99A0F_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		bool L_5;
		L_5 = Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE((&V_0), Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar* L_6;
		L_6 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&V_0), 0, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		int32_t L_7 = ___0_unicodeScalar;
		*((int16_t*)L_6) = (int16_t)((int32_t)(uint16_t)L_7);
		int32_t* L_8 = ___3_numberOfCharactersWritten;
		*((int32_t*)L_8) = (int32_t)1;
		return (bool)1;
	}

IL_0031:
	{
		ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* L_9 = __this->____scalarEscaper;
		int32_t L_10 = ___0_unicodeScalar;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rune__ctor_mC511E9B0882FA9359750E73B70E73F8FA7D0911F((&L_11), L_10, NULL);
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_12 = V_0;
		NullCheck(L_9);
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F >::Invoke(4, L_9, L_11, L_12);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t* L_15 = ___3_numberOfCharactersWritten;
		int32_t L_16 = V_1;
		*((int32_t*)L_15) = (int32_t)L_16;
		return (bool)1;
	}

IL_004e:
	{
		int32_t* L_17 = ___3_numberOfCharactersWritten;
		*((int32_t*)L_17) = (int32_t)0;
		return (bool)0;
	}
}
// Method Definition Index: 42367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_Encode_m5E8120EE0FE5B44BBA40A416EF3B38E9981D9FD7 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_source, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_destination, int32_t* ___2_charsConsumed, int32_t* ___3_charsWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		OptimizedInboxTextEncoder__AssertThisNotNull_m9FA07FA45698B9DE907687961B31C68D83E8C1E3_inline(__this, NULL);
		V_0 = 0;
		V_1 = 0;
	}

IL_000a:
	{
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_0 = ___0_source;
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_inline(L_0, L_1, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_inline((&___0_source), L_3, ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_RuntimeMethod_var);
		int32_t L_5 = *((uint16_t*)L_4);
		V_3 = L_5;
		AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* L_6 = (AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E*)(&__this->____asciiPreescapedData);
		Il2CppChar L_7 = V_3;
		bool L_8;
		L_8 = AsciiPreescapedData_TryGetPreescapedData_mE56B12B506C0C97ED3E466022FB028D03C4AA318_inline(L_6, L_7, (&V_4), NULL);
		if (!L_8)
		{
			goto IL_009d;
		}
	}
	{
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_9 = ___1_destination;
		int32_t L_10 = V_1;
		bool L_11;
		L_11 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_inline(L_9, L_10, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_12 = V_1;
		Il2CppChar* L_13;
		L_13 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___1_destination), L_12, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		uint64_t L_14 = V_4;
		*((int16_t*)L_13) = (int16_t)((int32_t)(uint8_t)L_14);
		uint64_t L_15 = V_4;
		if (((int32_t)(((int32_t)(uint32_t)L_15)&((int32_t)65280))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		goto IL_000a;
	}

IL_005d:
	{
		uint64_t L_18 = V_4;
		V_4 = ((int64_t)((uint64_t)L_18>>8));
		int32_t L_19 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0068:
	{
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_20 = ___1_destination;
		int32_t L_21 = V_5;
		bool L_22;
		L_22 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_inline(L_20, L_21, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		Il2CppChar* L_25;
		L_25 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___1_destination), L_24, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		uint64_t L_26 = V_4;
		*((int16_t*)L_25) = (int16_t)((int32_t)(uint8_t)L_26);
		uint64_t L_27 = V_4;
		int64_t L_28 = ((int64_t)((uint64_t)L_27>>8));
		V_4 = L_28;
		if (((int32_t)(uint8_t)L_28))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_29 = V_5;
		V_1 = L_29;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_000a;
	}

IL_009d:
	{
		Il2CppChar L_31 = V_3;
		bool L_32;
		L_32 = Rune_TryCreate_mBFAA07BF4298DFCD516A8C62CB4E1C39B926FA7E(L_31, (&V_6), NULL);
		if (L_32)
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_33 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_34 = ___0_source;
		int32_t L_35 = V_8;
		bool L_36;
		L_36 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_inline(L_34, L_35, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_RuntimeMethod_var);
		if (!L_36)
		{
			goto IL_00cc;
		}
	}
	{
		Il2CppChar L_37 = V_3;
		int32_t L_38 = V_8;
		Il2CppChar* L_39;
		L_39 = ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_inline((&___0_source), L_38, ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_RuntimeMethod_var);
		int32_t L_40 = *((uint16_t*)L_39);
		bool L_41;
		L_41 = Rune_TryCreate_m5DCEE15CF2F8CFB0B059BE7421671AA0459A4D0E(L_37, L_40, (&V_6), NULL);
		if (!L_41)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_00e1;
	}

IL_00cc:
	{
		bool L_42 = ___4_isFinalBlock;
		if (L_42)
		{
			goto IL_00d8;
		}
	}
	{
		Il2CppChar L_43 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_44;
		L_44 = Char_IsHighSurrogate_mED1E5FB863528ABB0D7D3DC4DE0FAB4517760658(L_43, NULL);
		if (L_44)
		{
			goto IL_014c;
		}
	}

IL_00d8:
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_45;
		L_45 = Rune_get_ReplacementChar_mE7DA425C57DB5D6879BEF1E6A7440499F27122A7(NULL);
		V_6 = L_45;
		goto IL_010d;
	}

IL_00e1:
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_46 = V_6;
		bool L_47;
		L_47 = OptimizedInboxTextEncoder_IsScalarValueAllowed_m44BD8F7EA7549D7208F5A1A20D7683D960ECD004_inline(__this, L_46, NULL);
		if (!L_47)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_48 = V_1;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_49;
		L_49 = Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_inline((&___1_destination), L_48, Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		bool L_50;
		L_50 = Rune_TryEncodeToUtf16_m7D60E83815F9069CA4137113E02B792F6164A51B((&V_6), L_49, (&V_9), NULL);
		if (!L_50)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_51 = V_1;
		int32_t L_52 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		int32_t L_53 = V_0;
		int32_t L_54 = V_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
		goto IL_000a;
	}

IL_010d:
	{
		ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* L_55 = __this->____scalarEscaper;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_56 = V_6;
		int32_t L_57 = V_1;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_58;
		L_58 = Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_inline((&___1_destination), L_57, Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		NullCheck(L_55);
		int32_t L_59;
		L_59 = VirtualFuncInvoker2< int32_t, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F >::Invoke(4, L_55, L_56, L_58);
		V_7 = L_59;
		int32_t L_60 = V_7;
		if ((((int32_t)L_60) < ((int32_t)0)))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_61 = V_1;
		int32_t L_62 = V_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
		int32_t L_63 = V_0;
		int32_t L_64;
		L_64 = Rune_get_Utf16SequenceLength_m05639C5CC19044C21FEC4E7D57B2B29D40022973((&V_6), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_63, L_64));
		goto IL_000a;
	}

IL_013d:
	{
		V_2 = 0;
	}

IL_013f:
	{
		int32_t* L_65 = ___2_charsConsumed;
		int32_t L_66 = V_0;
		*((int32_t*)L_65) = (int32_t)L_66;
		int32_t* L_67 = ___3_charsWritten;
		int32_t L_68 = V_1;
		*((int32_t*)L_67) = (int32_t)L_68;
		int32_t L_69 = V_2;
		return L_69;
	}

IL_0148:
	{
		V_2 = 1;
		goto IL_013f;
	}

IL_014c:
	{
		V_2 = 2;
		goto IL_013f;
	}
}
// Method Definition Index: 42368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_EncodeUtf8_mE4FFC3CFCBDA0720DB9C65393314F2CDED856C94 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_source, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___1_destination, int32_t* ___2_bytesConsumed, int32_t* ___3_bytesWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m348013E76A9B43A149AEDF4068BDD33716372542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		OptimizedInboxTextEncoder__AssertThisNotNull_m9FA07FA45698B9DE907687961B31C68D83E8C1E3_inline(__this, NULL);
		V_0 = 0;
		V_1 = 0;
	}

IL_000a:
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_0 = ___0_source;
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m348013E76A9B43A149AEDF4068BDD33716372542_inline(L_0, L_1, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m348013E76A9B43A149AEDF4068BDD33716372542_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_inline((&___0_source), L_3, ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_RuntimeMethod_var);
		int32_t L_5 = *((uint8_t*)L_4);
		V_3 = L_5;
		AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* L_6 = (AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E*)(&__this->____asciiPreescapedData);
		uint32_t L_7 = V_3;
		bool L_8;
		L_8 = AsciiPreescapedData_TryGetPreescapedData_mE56B12B506C0C97ED3E466022FB028D03C4AA318_inline(L_6, L_7, (&V_4), NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_9 = ___1_destination;
		int32_t L_10 = V_1;
		uint64_t L_11 = V_4;
		bool L_12;
		L_12 = SpanUtility_TryWriteUInt64LittleEndian_mA57339C96051A7EF676D56ABAFDA9A7BF4E27F34_inline(L_9, L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_13 = V_1;
		uint64_t L_14 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)((int64_t)((uint64_t)L_14>>((int32_t)56))))));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_000a;
	}

IL_004a:
	{
		int32_t L_16 = V_1;
		V_5 = L_16;
	}

IL_004d:
	{
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_17 = ___1_destination;
		int32_t L_18 = V_5;
		bool L_19;
		L_19 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_inline(L_17, L_18, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_20 = V_5;
		int32_t L_21 = L_20;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		uint8_t* L_22;
		L_22 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___1_destination), L_21, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint64_t L_23 = V_4;
		*((int8_t*)L_22) = (int8_t)((int32_t)(uint8_t)L_23);
		uint64_t L_24 = V_4;
		int64_t L_25 = ((int64_t)((uint64_t)L_24>>8));
		V_4 = L_25;
		if (((int32_t)(uint8_t)L_25))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_26 = V_5;
		V_1 = L_26;
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		goto IL_000a;
	}

IL_007f:
	{
		int32_t L_28 = V_0;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_29;
		L_29 = ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_inline((&___0_source), L_28, ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		int32_t L_30;
		L_30 = Rune_DecodeFromUtf8_mA26A377DDDB4BBB698378511691E091577D1F62B(L_29, (&V_7), (&V_8), NULL);
		V_6 = L_30;
		int32_t L_31 = V_6;
		if (!L_31)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_32 = ___4_isFinalBlock;
		if (L_32)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_33 = V_6;
		if ((!(((uint32_t)L_33) == ((uint32_t)2))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_0107;
	}

IL_00a1:
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_34 = V_7;
		bool L_35;
		L_35 = OptimizedInboxTextEncoder_IsScalarValueAllowed_m44BD8F7EA7549D7208F5A1A20D7683D960ECD004_inline(__this, L_34, NULL);
		if (!L_35)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_36 = V_1;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_37;
		L_37 = Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_inline((&___1_destination), L_36, Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_RuntimeMethod_var);
		bool L_38;
		L_38 = Rune_TryEncodeToUtf8_m73B938111E53C7AC0850BFFAEAB720718D081CA4((&V_7), L_37, (&V_10), NULL);
		if (!L_38)
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_39 = V_1;
		int32_t L_40 = V_10;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		int32_t L_41 = V_0;
		int32_t L_42 = V_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_000a;
	}

IL_00cd:
	{
		ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* L_43 = __this->____scalarEscaper;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_44 = V_7;
		int32_t L_45 = V_1;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_46;
		L_46 = Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_inline((&___1_destination), L_45, Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_RuntimeMethod_var);
		NullCheck(L_43);
		int32_t L_47;
		L_47 = VirtualFuncInvoker2< int32_t, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 >::Invoke(5, L_43, L_44, L_46);
		V_9 = L_47;
		int32_t L_48 = V_9;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_49 = V_1;
		int32_t L_50 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
		int32_t L_51 = V_0;
		int32_t L_52 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		goto IL_000a;
	}

IL_00f8:
	{
		V_2 = 0;
	}

IL_00fa:
	{
		int32_t* L_53 = ___2_bytesConsumed;
		int32_t L_54 = V_0;
		*((int32_t*)L_53) = (int32_t)L_54;
		int32_t* L_55 = ___3_bytesWritten;
		int32_t L_56 = V_1;
		*((int32_t*)L_55) = (int32_t)L_56;
		int32_t L_57 = V_2;
		return L_57;
	}

IL_0103:
	{
		V_2 = 1;
		goto IL_00fa;
	}

IL_0107:
	{
		V_2 = 2;
		goto IL_00fa;
	}
}
// Method Definition Index: 42369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_GetIndexOfFirstByteToEncode_m9478485A199BCDE1CA9D9F8E1B24D603C5808994 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_data), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_003b;
	}

IL_000a:
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_1 = ___0_data;
		int32_t L_2;
		L_2 = Rune_DecodeFromUtf8_mA26A377DDDB4BBB698378511691E091577D1F62B(L_1, (&V_2), (&V_3), NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_4 = V_3;
		if ((((int32_t)L_4) >= ((int32_t)4)))
		{
			goto IL_0044;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_5 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		int32_t L_6;
		L_6 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&V_2), NULL);
		bool L_7;
		L_7 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_5, ((int32_t)(uint16_t)L_6), NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_8 = V_3;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_9;
		L_9 = ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_inline((&___0_data), L_8, ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		___0_data = L_9;
	}

IL_003b:
	{
		bool L_10;
		L_10 = ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07((&___0_data), ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_000a;
		}
	}

IL_0044:
	{
		bool L_11;
		L_11 = ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07((&___0_data), ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_data), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
	}

IL_0057:
	{
		return (-1);
	}
}
// Method Definition Index: 42370
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_mF7BC5130E4B27BECD08A2267839D49C547901267 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mA911EEB64EE0CC596ED4B9483C873E3D67E8957D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	uintptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	uintptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		Il2CppChar* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_mA911EEB64EE0CC596ED4B9483C873E3D67E8957D((&___0_data), ReadOnlySpan_1_GetPinnableReference_mA911EEB64EE0CC596ED4B9483C873E3D67E8957D_RuntimeMethod_var);
		V_1 = L_0;
		Il2CppChar* L_1 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_1);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_data), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		V_2 = ((uintptr_t)L_2);
		V_3 = ((intptr_t)0);
		uintptr_t L_3 = V_3;
		uintptr_t L_4 = V_2;
		if ((!(((uintptr_t)L_3) < ((uintptr_t)L_4))))
		{
			goto IL_016f;
		}
	}
	{
		OptimizedInboxTextEncoder__AssertThisNotNull_m9FA07FA45698B9DE907687961B31C68D83E8C1E3_inline(__this, NULL);
		V_5 = ((intptr_t)0);
		goto IL_013d;
	}

IL_002d:
	{
		V_5 = ((intptr_t)(-1));
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_5 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar* L_6 = V_0;
		uintptr_t L_7 = V_3;
		intptr_t L_8 = V_5;
		intptr_t L_9 = ((intptr_t)il2cpp_codegen_add(L_8, 1));
		V_5 = L_9;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((uintptr_t)L_9))))), ((int64_t)2)))))));
		bool L_11;
		L_11 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_5, L_10, NULL);
		if (!L_11)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_12 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar* L_13 = V_0;
		uintptr_t L_14 = V_3;
		intptr_t L_15 = V_5;
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_add(L_15, 1));
		V_5 = L_16;
		int32_t L_17 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((uintptr_t)L_16))))), ((int64_t)2)))))));
		bool L_18;
		L_18 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_12, L_17, NULL);
		if (!L_18)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_19 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar* L_20 = V_0;
		uintptr_t L_21 = V_3;
		intptr_t L_22 = V_5;
		intptr_t L_23 = ((intptr_t)il2cpp_codegen_add(L_22, 1));
		V_5 = L_23;
		int32_t L_24 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_21, (intptr_t)((uintptr_t)L_23))))), ((int64_t)2)))))));
		bool L_25;
		L_25 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_19, L_24, NULL);
		if (!L_25)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_26 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar* L_27 = V_0;
		uintptr_t L_28 = V_3;
		intptr_t L_29 = V_5;
		intptr_t L_30 = ((intptr_t)il2cpp_codegen_add(L_29, 1));
		V_5 = L_30;
		int32_t L_31 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_27, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_28, (intptr_t)((uintptr_t)L_30))))), ((int64_t)2)))))));
		bool L_32;
		L_32 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_26, L_31, NULL);
		if (!L_32)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_33 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar* L_34 = V_0;
		uintptr_t L_35 = V_3;
		intptr_t L_36 = V_5;
		intptr_t L_37 = ((intptr_t)il2cpp_codegen_add(L_36, 1));
		V_5 = L_37;
		int32_t L_38 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_35, (intptr_t)((uintptr_t)L_37))))), ((int64_t)2)))))));
		bool L_39;
		L_39 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_33, L_38, NULL);
		if (!L_39)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_40 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar* L_41 = V_0;
		uintptr_t L_42 = V_3;
		intptr_t L_43 = V_5;
		intptr_t L_44 = ((intptr_t)il2cpp_codegen_add(L_43, 1));
		V_5 = L_44;
		int32_t L_45 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_41, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_42, (intptr_t)((uintptr_t)L_44))))), ((int64_t)2)))))));
		bool L_46;
		L_46 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_40, L_45, NULL);
		if (!L_46)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_47 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar* L_48 = V_0;
		uintptr_t L_49 = V_3;
		intptr_t L_50 = V_5;
		intptr_t L_51 = ((intptr_t)il2cpp_codegen_add(L_50, 1));
		V_5 = L_51;
		int32_t L_52 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_48, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_49, (intptr_t)((uintptr_t)L_51))))), ((int64_t)2)))))));
		bool L_53;
		L_53 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_47, L_52, NULL);
		if (!L_53)
		{
			goto IL_0169;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_54 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar* L_55 = V_0;
		uintptr_t L_56 = V_3;
		intptr_t L_57 = V_5;
		intptr_t L_58 = ((intptr_t)il2cpp_codegen_add(L_57, 1));
		V_5 = L_58;
		int32_t L_59 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_55, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_56, (intptr_t)((uintptr_t)L_58))))), ((int64_t)2)))))));
		bool L_60;
		L_60 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_54, L_59, NULL);
		if (!L_60)
		{
			goto IL_0169;
		}
	}
	{
		uintptr_t L_61 = V_3;
		V_3 = ((intptr_t)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)8)));
	}

IL_013d:
	{
		uintptr_t L_62 = V_2;
		uintptr_t L_63 = V_3;
		if ((!(((uintptr_t)((intptr_t)il2cpp_codegen_subtract((intptr_t)L_62, (intptr_t)L_63))) < ((uintptr_t)((intptr_t)8)))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0163;
	}

IL_0149:
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_64 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		Il2CppChar* L_65 = V_0;
		uintptr_t L_66 = V_3;
		int32_t L_67 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_65, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_66), ((int64_t)2)))))));
		bool L_68;
		L_68 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_64, L_67, NULL);
		if (!L_68)
		{
			goto IL_016f;
		}
	}
	{
		uintptr_t L_69 = V_3;
		V_3 = ((intptr_t)il2cpp_codegen_add((intptr_t)L_69, 1));
	}

IL_0163:
	{
		uintptr_t L_70 = V_3;
		uintptr_t L_71 = V_2;
		if ((!(((uintptr_t)L_70) >= ((uintptr_t)L_71))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_016f;
	}

IL_0169:
	{
		uintptr_t L_72 = V_3;
		intptr_t L_73 = V_5;
		V_3 = ((intptr_t)il2cpp_codegen_add((intptr_t)L_72, (intptr_t)((uintptr_t)L_73)));
	}

IL_016f:
	{
		uintptr_t L_74 = V_3;
		V_4 = ((int32_t)L_74);
		int32_t L_75 = V_4;
		uintptr_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)L_76)))))
		{
			goto IL_017c;
		}
	}
	{
		V_4 = (-1);
	}

IL_017c:
	{
		int32_t L_77 = V_4;
		return L_77;
	}
}
// Method Definition Index: 42371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_IsScalarValueAllowed_m44BD8F7EA7549D7208F5A1A20D7683D960ECD004 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_value, const RuntimeMethod* method) 
{
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_0 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		int32_t L_1;
		L_1 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___0_value), NULL);
		bool L_2;
		L_2 = AllowedBmpCodePointsBitmap_IsCodePointAllowed_mE8C77B539C520F0C5E3FBE79A9523BDF37B99A0F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 42372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__AssertThisNotNull_m9FA07FA45698B9DE907687961B31C68D83E8C1E3 (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
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
// Method Definition Index: 42373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowedAsciiCodePoints_PopulateAllowedCodePoints_mCABB548D824C8F0A722198B16638FA170F1518C4 (AllowedAsciiCodePoints_tFFFD8C74BE909C8EA9A27124F51DDCC7F6729800* __this, AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* ___0_allowedBmpCodePoints, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(AllowedAsciiCodePoints_tFFFD8C74BE909C8EA9A27124F51DDCC7F6729800));
		V_0 = ((int32_t)32);
		goto IL_0038;
	}

IL_000c:
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_0 = ___0_allowedBmpCodePoints;
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_0, ((int32_t)(uint16_t)L_1), NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		U3CAsBytesU3Ee__FixedBuffer_t52B6D47E193D021EDB6B843B6605CB180A08F8EC* L_3 = (U3CAsBytesU3Ee__FixedBuffer_t52B6D47E193D021EDB6B843B6605CB180A08F8EC*)(&__this->___AsBytes);
		uint8_t* L_4 = (uint8_t*)(&L_3->___FixedElementField);
		int32_t L_5 = V_0;
		uint8_t* L_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((int32_t)(L_5&((int32_t)15)))));
		int32_t L_7 = *((uint8_t*)L_6);
		int32_t L_8 = V_0;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_7|((int32_t)(uint8_t)((int32_t)(1<<((int32_t)(((int32_t)(L_8>>4))&((int32_t)31)))))))));
	}

IL_0034:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)127))))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AllowedAsciiCodePoints_PopulateAllowedCodePoints_mCABB548D824C8F0A722198B16638FA170F1518C4_AdjustorThunk (RuntimeObject* __this, AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* ___0_allowedBmpCodePoints, const RuntimeMethod* method)
{
	AllowedAsciiCodePoints_tFFFD8C74BE909C8EA9A27124F51DDCC7F6729800* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllowedAsciiCodePoints_tFFFD8C74BE909C8EA9A27124F51DDCC7F6729800*>(__this + _offset);
	AllowedAsciiCodePoints_PopulateAllowedCodePoints_mCABB548D824C8F0A722198B16638FA170F1518C4(_thisAdjusted, ___0_allowedBmpCodePoints, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Method Definition Index: 42374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsciiPreescapedData_PopulatePreescapedData_mF28EAAE5A8F49C81C0644D409F004634AB66FBE5 (AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* __this, AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* ___0_allowedCodePointsBmp, ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* ___1_innerEncoder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Clear_m206891C9B92AA06957C270529BC9FB7C0E6F716C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tB3916DFC764DF153B19342195C5137E7904A154F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_tB3916DFC764DF153B19342195C5137E7904A154F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E));
		uintptr_t L_0 = ((uintptr_t)((int32_t)16));
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		il2cpp_codegen_memset(L_2, 0, ((int32_t)16));
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_inline((&L_3), (void*)L_2, 8, Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var);
		V_1 = L_3;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_4 = V_1;
		V_0 = L_4;
		V_2 = 0;
		goto IL_00b0;
	}

IL_0022:
	{
		int32_t L_5 = V_2;
		Rune__ctor_mC511E9B0882FA9359750E73B70E73F8FA7D0911F((&V_5), L_5, NULL);
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_6 = V_5;
		bool L_7;
		L_7 = Rune_IsControl_mF0FC16C54F3E33C734B3C3F52D79C2EF961D9A00(L_6, NULL);
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_8 = ___0_allowedCodePointsBmp;
		int32_t L_9 = V_2;
		bool L_10;
		L_10 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_8, ((int32_t)(uint16_t)L_9), NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = V_2;
		V_3 = ((int64_t)(uint64_t)((uint32_t)L_11));
		V_4 = 1;
		goto IL_0093;
	}

IL_0045:
	{
		ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* L_12 = ___1_innerEncoder;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_13 = V_5;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_14;
		L_14 = Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_inline((&V_0), 0, 6, Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_15;
		L_15 = VirtualFuncInvoker2< int32_t, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F >::Invoke(4, L_12, L_13, L_14);
		V_4 = L_15;
		V_3 = ((int64_t)0);
		int32_t L_16 = V_4;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_17;
		L_17 = Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_inline((&V_0), L_16, Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		V_1 = L_17;
		Span_1_Clear_m206891C9B92AA06957C270529BC9FB7C0E6F716C((&V_1), Span_1_Clear_m206891C9B92AA06957C270529BC9FB7C0E6F716C_RuntimeMethod_var);
		int32_t L_18 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		goto IL_008e;
	}

IL_0074:
	{
		int32_t L_19 = V_6;
		Il2CppChar* L_20;
		L_20 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&V_0), L_19, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		int32_t L_21 = *((uint16_t*)L_20);
		V_7 = L_21;
		uint64_t L_22 = V_3;
		uint32_t L_23 = V_7;
		V_3 = ((int64_t)(((int64_t)((int64_t)L_22<<8))|((int64_t)(uint64_t)L_23)));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
	}

IL_008e:
	{
		int32_t L_25 = V_6;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}

IL_0093:
	{
		U3CDataU3Ee__FixedBuffer_t0DE3A00F75479702BFD16FDA286F2FF154E8A494* L_26 = (U3CDataU3Ee__FixedBuffer_t0DE3A00F75479702BFD16FDA286F2FF154E8A494*)(&__this->___Data);
		uint64_t* L_27 = (uint64_t*)(&L_26->___FixedElementField);
		int32_t L_28 = V_2;
		uint64_t L_29 = V_3;
		int32_t L_30 = V_4;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 8))))) = (int64_t)((int64_t)((int64_t)L_29|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_30))<<((int32_t)56)))));
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b0:
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)128))))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsciiPreescapedData_PopulatePreescapedData_mF28EAAE5A8F49C81C0644D409F004634AB66FBE5_AdjustorThunk (RuntimeObject* __this, AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* ___0_allowedCodePointsBmp, ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* ___1_innerEncoder, const RuntimeMethod* method)
{
	AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E*>(__this + _offset);
	AsciiPreescapedData_PopulatePreescapedData_mF28EAAE5A8F49C81C0644D409F004634AB66FBE5(_thisAdjusted, ___0_allowedCodePointsBmp, ___1_innerEncoder, method);
}
// Method Definition Index: 42375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsciiPreescapedData_TryGetPreescapedData_mE56B12B506C0C97ED3E466022FB028D03C4AA318 (AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* __this, uint32_t ___0_codePoint, uint64_t* ___1_preescapedData, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_codePoint;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127)))))
		{
			goto IL_001c;
		}
	}
	{
		uint64_t* L_1 = ___1_preescapedData;
		U3CDataU3Ee__FixedBuffer_t0DE3A00F75479702BFD16FDA286F2FF154E8A494* L_2 = (U3CDataU3Ee__FixedBuffer_t0DE3A00F75479702BFD16FDA286F2FF154E8A494*)(&__this->___Data);
		uint64_t* L_3 = (uint64_t*)(&L_2->___FixedElementField);
		uint32_t L_4 = ___0_codePoint;
		int64_t L_5 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_4), ((int64_t)8)))))));
		*((int64_t*)L_1) = (int64_t)L_5;
		return (bool)1;
	}

IL_001c:
	{
		uint64_t* L_6 = ___1_preescapedData;
		*((int64_t*)L_6) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AsciiPreescapedData_TryGetPreescapedData_mE56B12B506C0C97ED3E466022FB028D03C4AA318_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_codePoint, uint64_t* ___1_preescapedData, const RuntimeMethod* method)
{
	AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsciiPreescapedData_TryGetPreescapedData_mE56B12B506C0C97ED3E466022FB028D03C4AA318_inline(_thisAdjusted, ___0_codePoint, ___1_preescapedData, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 42376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_m76A7C16E13846ECAF064FE972804B0FE26D7C2B9 (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* ___0_settings, const RuntimeMethod* method) 
{
	{
		TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* L_0 = ___0_settings;
		DefaultJavaScriptEncoder__ctor_mC8F27D4E775D368AA433FD9FBAFDE4D6C041B22D(__this, L_0, (bool)0, NULL);
		return;
	}
}
// Method Definition Index: 42377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__ctor_mC8F27D4E775D368AA433FD9FBAFDE4D6C041B22D (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* ___0_settings, bool ___1_allowMinimalJsonEscaping, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* V_0 = NULL;
	ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* V_1 = NULL;
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* V_2 = NULL;
	Span_1_tB3916DFC764DF153B19342195C5137E7904A154F V_3;
	memset((&V_3), 0, sizeof(V_3));
	ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* V_4 = NULL;
	AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* V_5 = NULL;
	{
		JavaScriptEncoder__ctor_m2F59ACB8329419E25ADF69BCB0AAACDD9FFED033(__this, NULL);
		TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* L_0 = ___0_settings;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultJavaScriptEncoder__ctor_mC8F27D4E775D368AA433FD9FBAFDE4D6C041B22D_RuntimeMethod_var)));
	}

IL_0014:
	{
		bool L_2 = ___1_allowMinimalJsonEscaping;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* L_3 = ((EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var))->___SingletonMinimallyEscaped;
		V_1 = L_3;
		TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* L_4 = ___0_settings;
		NullCheck(L_4);
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_5;
		L_5 = TextEncoderSettings_GetAllowedCodePointsBitmap_mDCE8D36FBD81A450F8BE47571FDA633769888427(L_4, NULL);
		V_2 = L_5;
		uintptr_t L_6 = ((uintptr_t)4);
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int8_t* L_8 = (L_7);
		*((int16_t*)L_8) = (int16_t)((int32_t)34);
		int8_t* L_9 = L_8;
		*((int16_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_9, 2))) = (int16_t)((int32_t)92);
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_inline((&L_10), (void*)L_9, 2, Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var);
		V_3 = L_10;
		ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* L_11 = V_1;
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_12 = V_2;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_13 = V_3;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_14;
		L_14 = Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669(L_13, Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669_RuntimeMethod_var);
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_15 = (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3*)il2cpp_codegen_object_new(OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3_il2cpp_TypeInfo_var);
		OptimizedInboxTextEncoder__ctor_m9F15F7BBE6D0D3C923A832D9B3DE865F2D7A33AB(L_15, L_11, L_12, (bool)0, L_14, NULL);
		V_0 = L_15;
		goto IL_007f;
	}

IL_004a:
	{
		il2cpp_codegen_runtime_class_init_inline(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* L_16 = ((EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var))->___Singleton;
		V_4 = L_16;
		TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* L_17 = ___0_settings;
		NullCheck(L_17);
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_18;
		L_18 = TextEncoderSettings_GetAllowedCodePointsBitmap_mDCE8D36FBD81A450F8BE47571FDA633769888427(L_17, NULL);
		V_5 = L_18;
		uintptr_t L_19 = ((uintptr_t)4);
		int8_t* L_20 = (int8_t*) (L_19 ? alloca(L_19) : NULL);
		memset(L_20, 0, L_19);
		int8_t* L_21 = (L_20);
		*((int16_t*)L_21) = (int16_t)((int32_t)92);
		int8_t* L_22 = L_21;
		*((int16_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_22, 2))) = (int16_t)((int32_t)96);
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_23;
		memset((&L_23), 0, sizeof(L_23));
		Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_inline((&L_23), (void*)L_22, 2, Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var);
		V_3 = L_23;
		ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* L_24 = V_4;
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_25 = V_5;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_26 = V_3;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_27;
		L_27 = Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669(L_26, Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669_RuntimeMethod_var);
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_28 = (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3*)il2cpp_codegen_object_new(OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3_il2cpp_TypeInfo_var);
		OptimizedInboxTextEncoder__ctor_m9F15F7BBE6D0D3C923A832D9B3DE865F2D7A33AB(L_28, L_24, L_25, (bool)1, L_27, NULL);
		V_0 = L_28;
	}

IL_007f:
	{
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_29 = V_0;
		__this->____innerEncoder = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerEncoder), (void*)L_29);
		return;
	}
}
// Method Definition Index: 42378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_EncodeCore_m9814EB21CD2AF703949912FA0B04DDC2FEB2EEDC (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_source, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_destination, int32_t* ___2_charsConsumed, int32_t* ___3_charsWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_0 = __this->____innerEncoder;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_1 = ___0_source;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_2 = ___1_destination;
		int32_t* L_3 = ___2_charsConsumed;
		int32_t* L_4 = ___3_charsWritten;
		bool L_5 = ___4_isFinalBlock;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = OptimizedInboxTextEncoder_Encode_m5E8120EE0FE5B44BBA40A416EF3B38E9981D9FD7(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 42379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_EncodeUtf8Core_m8D4F607F83BD50B2770698645342B1157C38F8CD (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_utf8Source, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___1_utf8Destination, int32_t* ___2_bytesConsumed, int32_t* ___3_bytesWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_0 = __this->____innerEncoder;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_1 = ___0_utf8Source;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_2 = ___1_utf8Destination;
		int32_t* L_3 = ___2_bytesConsumed;
		int32_t* L_4 = ___3_bytesWritten;
		bool L_5 = ___4_isFinalBlock;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = OptimizedInboxTextEncoder_EncodeUtf8_mE4FFC3CFCBDA0720DB9C65393314F2CDED856C94(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 42380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_FindFirstCharacterToEncode_m5D311408FC471525970B8D7095BBDD2DF54A2BD1 (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_text, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_0 = __this->____innerEncoder;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_1 = ___0_text;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_mF7BC5130E4B27BECD08A2267839D49C547901267(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 42381
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_FindFirstCharacterToEncode_m35256286F724D33FFE7F05EA352E96FC437E8652 (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, Il2CppChar* ___0_text, int32_t ___1_textLength, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_0 = __this->____innerEncoder;
		Il2CppChar* L_1 = ___0_text;
		int32_t L_2 = ___1_textLength;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = OptimizedInboxTextEncoder_FindFirstCharacterToEncode_mD80BEE36341F2B33EFA4C39676DDDA0A9605CD4E_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 42382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultJavaScriptEncoder_FindFirstCharacterToEncodeUtf8_m22551AEC9595BB4FBCC2A60EC23BB62E5924A908 (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_utf8Text, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_0 = __this->____innerEncoder;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_1 = ___0_utf8Text;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = OptimizedInboxTextEncoder_GetIndexOfFirstByteToEncode_m9478485A199BCDE1CA9D9F8E1B24D603C5808994(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 42383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_TryEncodeUnicodeScalar_mE11F8D779AD89B5176D57EF58C120FBE33CB836E (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, int32_t ___0_unicodeScalar, Il2CppChar* ___1_buffer, int32_t ___2_bufferLength, int32_t* ___3_numberOfCharactersWritten, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_0 = __this->____innerEncoder;
		int32_t L_1 = ___0_unicodeScalar;
		Il2CppChar* L_2 = ___1_buffer;
		int32_t L_3 = ___2_bufferLength;
		int32_t* L_4 = ___3_numberOfCharactersWritten;
		NullCheck(L_0);
		bool L_5;
		L_5 = OptimizedInboxTextEncoder_TryEncodeUnicodeScalar_m4F79E08B67CD84D7AF357C546FB7A69745934AEB(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 42384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultJavaScriptEncoder_WillEncode_m340E8A88BDBB25E73FFD665611160355FEDA10D8 (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* __this, int32_t ___0_unicodeScalar, const RuntimeMethod* method) 
{
	{
		OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* L_0 = __this->____innerEncoder;
		int32_t L_1 = ___0_unicodeScalar;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rune__ctor_mC511E9B0882FA9359750E73B70E73F8FA7D0911F((&L_2), L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = OptimizedInboxTextEncoder_IsScalarValueAllowed_m44BD8F7EA7549D7208F5A1A20D7683D960ECD004_inline(L_0, L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 42385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultJavaScriptEncoder__cctor_mFED9BD252AEF7FE72891233E825CC123D46AD0BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* L_0 = (UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9*)(UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9*)SZArrayNew(UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9_il2cpp_TypeInfo_var, (uint32_t)1);
		UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* L_1 = L_0;
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_2;
		L_2 = UnicodeRanges_get_BasicLatin_m7145E34B74CBD2462ED01A989E6AA302E1878477(NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD*)L_2);
		TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* L_3 = (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A*)il2cpp_codegen_object_new(TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A_il2cpp_TypeInfo_var);
		TextEncoderSettings__ctor_m906A6B6E63A7B6CF25716E95E67BE0C148F19DE5(L_3, L_1, NULL);
		DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* L_4 = (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F*)il2cpp_codegen_object_new(DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var);
		DefaultJavaScriptEncoder__ctor_m76A7C16E13846ECAF064FE972804B0FE26D7C2B9(L_4, L_3, NULL);
		((DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var))->___BasicLatinSingleton = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var))->___BasicLatinSingleton), (void*)L_4);
		UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* L_5 = (UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9*)(UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9*)SZArrayNew(UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9_il2cpp_TypeInfo_var, (uint32_t)1);
		UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* L_6 = L_5;
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_7;
		L_7 = UnicodeRanges_get_All_mD9CD17ACAE1CF216979A72F3EE32420555A16DAE(NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD*)L_7);
		TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* L_8 = (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A*)il2cpp_codegen_object_new(TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A_il2cpp_TypeInfo_var);
		TextEncoderSettings__ctor_m906A6B6E63A7B6CF25716E95E67BE0C148F19DE5(L_8, L_6, NULL);
		DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* L_9 = (DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F*)il2cpp_codegen_object_new(DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var);
		DefaultJavaScriptEncoder__ctor_mC8F27D4E775D368AA433FD9FBAFDE4D6C041B22D(L_9, L_8, (bool)1, NULL);
		((DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var))->___UnsafeRelaxedEscapingSingleton = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var))->___UnsafeRelaxedEscapingSingleton), (void*)L_9);
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
// Method Definition Index: 42386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscaperImplementation__ctor_m73003932F4F503C9D5556298FA6FD7239FE88BE7 (EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* __this, bool ___0_allowMinimalEscaping, const RuntimeMethod* method) 
{
	{
		ScalarEscaperBase__ctor_m0DE57B1FCEE6A59F5066C7313D1DAB8E07D85F56(__this, NULL);
		AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* L_0 = (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*)(&__this->____preescapedMap);
		AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B(L_0, 8, (uint8_t)((int32_t)98), NULL);
		AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* L_1 = (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*)(&__this->____preescapedMap);
		AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B(L_1, ((int32_t)9), (uint8_t)((int32_t)116), NULL);
		AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* L_2 = (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*)(&__this->____preescapedMap);
		AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B(L_2, ((int32_t)10), (uint8_t)((int32_t)110), NULL);
		AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* L_3 = (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*)(&__this->____preescapedMap);
		AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B(L_3, ((int32_t)12), (uint8_t)((int32_t)102), NULL);
		AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* L_4 = (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*)(&__this->____preescapedMap);
		AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B(L_4, ((int32_t)13), (uint8_t)((int32_t)114), NULL);
		AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* L_5 = (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*)(&__this->____preescapedMap);
		AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B(L_5, ((int32_t)92), (uint8_t)((int32_t)92), NULL);
		bool L_6 = ___0_allowMinimalEscaping;
		if (!L_6)
		{
			goto IL_0071;
		}
	}
	{
		AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* L_7 = (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*)(&__this->____preescapedMap);
		AsciiByteMap_InsertAsciiChar_m2C3AD286597313A156F88BDC0A97BEBEF96D053B(L_7, ((int32_t)34), (uint8_t)((int32_t)34), NULL);
	}

IL_0071:
	{
		return;
	}
}
// Method Definition Index: 42387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_EncodeUtf8_m4455C0D0A2E8895B0B0D164E091C37308362C8E5 (EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_value, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* L_0 = (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*)(&__this->____preescapedMap);
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_1 = ___0_value;
		bool L_2;
		L_2 = AsciiByteMap_TryLookup_m2045F16F64FEC435CDCA248AFA3D4EA0EDED2100_inline(L_0, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_3 = ___1_destination;
		bool L_4;
		L_4 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_inline(L_3, 1, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_5;
		L_5 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___1_destination), 0, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		*((int8_t*)L_5) = (int8_t)((int32_t)92);
		uint8_t* L_6;
		L_6 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___1_destination), 1, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint8_t L_7 = V_0;
		*((int8_t*)L_6) = (int8_t)L_7;
		return 2;
	}

IL_0030:
	{
		return (-1);
	}

IL_0032:
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_8 = ___0_value;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_9 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = EscaperImplementation_U3CEncodeUtf8U3Eg__TryEncodeScalarAsHexU7C4_0_mF9DBEC142287CB6ED542816883FAD1E890DDD784(__this, L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 42388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_EncodeUtf16_m553B254DE8D556C43452CCC7B51E23F063A5FF93 (EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_value, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* L_0 = (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0*)(&__this->____preescapedMap);
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_1 = ___0_value;
		bool L_2;
		L_2 = AsciiByteMap_TryLookup_m2045F16F64FEC435CDCA248AFA3D4EA0EDED2100_inline(L_0, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_3 = ___1_destination;
		bool L_4;
		L_4 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_inline(L_3, 1, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar* L_5;
		L_5 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___1_destination), 0, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		*((int16_t*)L_5) = (int16_t)((int32_t)92);
		Il2CppChar* L_6;
		L_6 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___1_destination), 1, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		uint8_t L_7 = V_0;
		*((int16_t*)L_6) = (int16_t)L_7;
		return 2;
	}

IL_0030:
	{
		return (-1);
	}

IL_0032:
	{
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_8 = ___0_value;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_9 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = EscaperImplementation_U3CEncodeUtf16U3Eg__TryEncodeScalarAsHexU7C5_0_m649BEA6ED6A78281C939C3E70AD915B21A245579(__this, L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 42389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscaperImplementation__cctor_m1D19A2FFC065113A6401808AF6E27F06767255C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* L_0 = (EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E*)il2cpp_codegen_object_new(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		EscaperImplementation__ctor_m73003932F4F503C9D5556298FA6FD7239FE88BE7(L_0, (bool)0, NULL);
		((EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var))->___Singleton = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var))->___Singleton), (void*)L_0);
		EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E* L_1 = (EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E*)il2cpp_codegen_object_new(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var);
		EscaperImplementation__ctor_m73003932F4F503C9D5556298FA6FD7239FE88BE7(L_1, (bool)1, NULL);
		((EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var))->___SingletonMinimallyEscaped = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_StaticFields*)il2cpp_codegen_static_fields_for(EscaperImplementation_tBF512AB2E4AC1548BA64A117E272835FB5DC569E_il2cpp_TypeInfo_var))->___SingletonMinimallyEscaped), (void*)L_1);
		return;
	}
}
// Method Definition Index: 42390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_U3CEncodeUtf8U3Eg__TryEncodeScalarAsHexU7C4_0_mF9DBEC142287CB6ED542816883FAD1E890DDD784 (RuntimeObject* ___0_this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___1_value, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___2_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	{
		bool L_0;
		L_0 = Rune_get_IsBmp_m645688C36A81DF49B3C238042A21611F1F4D981B((&___1_value), NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_1 = ___2_destination;
		bool L_2;
		L_2 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_inline(L_1, 5, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_00c5;
		}
	}
	{
		uint8_t* L_3;
		L_3 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___2_destination), 0, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		*((int8_t*)L_3) = (int8_t)((int32_t)92);
		uint8_t* L_4;
		L_4 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___2_destination), 1, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		*((int8_t*)L_4) = (int8_t)((int32_t)117);
		int32_t L_5;
		L_5 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___1_value), NULL);
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_6 = ___2_destination;
		HexConverter_ToBytesBuffer_mBE2517764F9EF6F0E8FD9AD19B2C23E66266535F_inline((uint8_t)((int32_t)(uint8_t)L_5), L_6, 4, 0, NULL);
		int32_t L_7;
		L_7 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___1_value), NULL);
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_8 = ___2_destination;
		HexConverter_ToBytesBuffer_mBE2517764F9EF6F0E8FD9AD19B2C23E66266535F_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_7>>8))), L_8, 2, 0, NULL);
		return 6;
	}

IL_004f:
	{
		int32_t L_9;
		L_9 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___1_value), NULL);
		UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mBD46BC0E9A2B84A2F85569B7ABC79AB19FA64423_inline(L_9, (&V_0), (&V_1), NULL);
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_10 = ___2_destination;
		bool L_11;
		L_11 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_inline(L_10, ((int32_t)11), SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_00c5;
		}
	}
	{
		uint8_t* L_12;
		L_12 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___2_destination), 0, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		*((int8_t*)L_12) = (int8_t)((int32_t)92);
		uint8_t* L_13;
		L_13 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___2_destination), 1, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		*((int8_t*)L_13) = (int8_t)((int32_t)117);
		Il2CppChar L_14 = V_0;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_15 = ___2_destination;
		HexConverter_ToBytesBuffer_mBE2517764F9EF6F0E8FD9AD19B2C23E66266535F_inline((uint8_t)((int32_t)(uint8_t)L_14), L_15, 4, 0, NULL);
		Il2CppChar L_16 = V_0;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_17 = ___2_destination;
		HexConverter_ToBytesBuffer_mBE2517764F9EF6F0E8FD9AD19B2C23E66266535F_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_16>>8))), L_17, 2, 0, NULL);
		uint8_t* L_18;
		L_18 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___2_destination), 6, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		*((int8_t*)L_18) = (int8_t)((int32_t)92);
		uint8_t* L_19;
		L_19 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___2_destination), 7, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		*((int8_t*)L_19) = (int8_t)((int32_t)117);
		Il2CppChar L_20 = V_1;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_21 = ___2_destination;
		HexConverter_ToBytesBuffer_mBE2517764F9EF6F0E8FD9AD19B2C23E66266535F_inline((uint8_t)((int32_t)(uint8_t)L_20), L_21, ((int32_t)10), 0, NULL);
		Il2CppChar L_22 = V_1;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_23 = ___2_destination;
		HexConverter_ToBytesBuffer_mBE2517764F9EF6F0E8FD9AD19B2C23E66266535F_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_22>>8))), L_23, 8, 0, NULL);
		return ((int32_t)12);
	}

IL_00c5:
	{
		return (-1);
	}
}
// Method Definition Index: 42391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EscaperImplementation_U3CEncodeUtf16U3Eg__TryEncodeScalarAsHexU7C5_0_m649BEA6ED6A78281C939C3E70AD915B21A245579 (RuntimeObject* ___0_this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___1_value, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___2_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	{
		bool L_0;
		L_0 = Rune_get_IsBmp_m645688C36A81DF49B3C238042A21611F1F4D981B((&___1_value), NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_1 = ___2_destination;
		bool L_2;
		L_2 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_inline(L_1, 5, SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_00c5;
		}
	}
	{
		Il2CppChar* L_3;
		L_3 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___2_destination), 0, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		*((int16_t*)L_3) = (int16_t)((int32_t)92);
		Il2CppChar* L_4;
		L_4 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___2_destination), 1, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		*((int16_t*)L_4) = (int16_t)((int32_t)117);
		int32_t L_5;
		L_5 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___1_value), NULL);
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_6 = ___2_destination;
		HexConverter_ToCharsBuffer_mB047CE531CA06177F520AC0395523C2F3BCB7622_inline((uint8_t)((int32_t)(uint8_t)L_5), L_6, 4, 0, NULL);
		int32_t L_7;
		L_7 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___1_value), NULL);
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_8 = ___2_destination;
		HexConverter_ToCharsBuffer_mB047CE531CA06177F520AC0395523C2F3BCB7622_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_7>>8))), L_8, 2, 0, NULL);
		return 6;
	}

IL_004f:
	{
		int32_t L_9;
		L_9 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___1_value), NULL);
		UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mBD46BC0E9A2B84A2F85569B7ABC79AB19FA64423_inline(L_9, (&V_0), (&V_1), NULL);
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_10 = ___2_destination;
		bool L_11;
		L_11 = SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_inline(L_10, ((int32_t)11), SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_00c5;
		}
	}
	{
		Il2CppChar* L_12;
		L_12 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___2_destination), 0, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		*((int16_t*)L_12) = (int16_t)((int32_t)92);
		Il2CppChar* L_13;
		L_13 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___2_destination), 1, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		*((int16_t*)L_13) = (int16_t)((int32_t)117);
		Il2CppChar L_14 = V_0;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_15 = ___2_destination;
		HexConverter_ToCharsBuffer_mB047CE531CA06177F520AC0395523C2F3BCB7622_inline((uint8_t)((int32_t)(uint8_t)L_14), L_15, 4, 0, NULL);
		Il2CppChar L_16 = V_0;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_17 = ___2_destination;
		HexConverter_ToCharsBuffer_mB047CE531CA06177F520AC0395523C2F3BCB7622_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_16>>8))), L_17, 2, 0, NULL);
		Il2CppChar* L_18;
		L_18 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___2_destination), 6, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		*((int16_t*)L_18) = (int16_t)((int32_t)92);
		Il2CppChar* L_19;
		L_19 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___2_destination), 7, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		*((int16_t*)L_19) = (int16_t)((int32_t)117);
		Il2CppChar L_20 = V_1;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_21 = ___2_destination;
		HexConverter_ToCharsBuffer_mB047CE531CA06177F520AC0395523C2F3BCB7622_inline((uint8_t)((int32_t)(uint8_t)L_20), L_21, ((int32_t)10), 0, NULL);
		Il2CppChar L_22 = V_1;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_23 = ___2_destination;
		HexConverter_ToCharsBuffer_mB047CE531CA06177F520AC0395523C2F3BCB7622_inline((uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_22>>8))), L_23, 8, 0, NULL);
		return ((int32_t)12);
	}

IL_00c5:
	{
		return (-1);
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
// Method Definition Index: 42394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanUtility_TryWriteUInt64LittleEndian_mA57339C96051A7EF676D56ABAFDA9A7BF4E27F34 (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_span, int32_t ___1_offset, uint64_t ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___0_span), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		int32_t L_1 = ___1_offset;
		bool L_2;
		L_2 = SpanUtility_AreValidIndexAndLength_m63E10B641EC532EA7DC9DC69D4BC92DBC7B81407_inline(L_0, L_1, 8, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_3 = ___2_value;
		uint64_t L_4;
		L_4 = BinaryPrimitives_ReverseEndianness_mE3620A212E4DCE9334F6EFA6518F286FFD00A5E1_inline(L_3, NULL);
		___2_value = L_4;
	}

IL_001f:
	{
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_5 = ___0_span;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450_RuntimeMethod_var);
		int32_t L_7 = ___1_offset;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_6, (intptr_t)((uintptr_t)L_7));
		uint64_t L_9 = ___2_value;
		il2cpp_unsafe_write_unaligned(L_8, L_9);
		return (bool)1;
	}

IL_0034:
	{
		return (bool)0;
	}
}
// Method Definition Index: 42395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanUtility_AreValidIndexAndLength_m63E10B641EC532EA7DC9DC69D4BC92DBC7B81407 (int32_t ___0_spanRealLength, int32_t ___1_requestedOffset, int32_t ___2_requestedLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_requestedOffset;
		int32_t L_2 = ___0_spanRealLength;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_3 = ___2_requestedLength;
		int32_t L_4 = ___0_spanRealLength;
		int32_t L_5 = ___1_requestedOffset;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		int32_t L_6 = ___0_spanRealLength;
		int32_t L_7 = ___1_requestedOffset;
		int32_t L_8 = ___2_requestedLength;
		if ((!(((uint64_t)((int64_t)(uint64_t)((uint32_t)L_6))) < ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_7)), ((int64_t)(uint64_t)((uint32_t)L_8))))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		return (bool)1;
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
// Method Definition Index: 42398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalarEscaperBase__ctor_m0DE57B1FCEE6A59F5066C7313D1DAB8E07D85F56 (ScalarEscaperBase_tA530E7CF8CC7A1B28947770263B0D21E24779069* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 42399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JavaScriptEncoder_t7E17468B89805B21C42FA58190749ABB41A13AD8* JavaScriptEncoder_get_Default_m8E44C08949B5DA3E3ABD1261D3BAA3E74913D425 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var);
		DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F* L_0 = ((DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_tC15338098F4656F7246750663583E8BCC753AE9F_il2cpp_TypeInfo_var))->___BasicLatinSingleton;
		return L_0;
	}
}
// Method Definition Index: 42400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptEncoder__ctor_m2F59ACB8329419E25ADF69BCB0AAACDD9FFED033 (JavaScriptEncoder_t7E17468B89805B21C42FA58190749ABB41A13AD8* __this, const RuntimeMethod* method) 
{
	{
		TextEncoder__ctor_mC23A8564B67C43255BF415B71C016DA4BB354683(__this, NULL);
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
// Method Definition Index: 42402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalar_m32F1C002E4923112744BDCE29E6D5136D6F76D01 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, uint32_t ___0_unicodeScalar, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_buffer, int32_t* ___2_charsWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	{
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_0 = ___1_buffer;
		Il2CppChar* L_1;
		L_1 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD(L_0, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD_RuntimeMethod_var);
		V_1 = L_1;
		Il2CppChar* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		uint32_t L_3 = ___0_unicodeScalar;
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline((&___1_buffer), Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		int32_t* L_6 = ___2_charsWritten;
		bool L_7;
		L_7 = VirtualFuncInvoker4< bool, int32_t, Il2CppChar*, int32_t, int32_t* >::Invoke(4, __this, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// Method Definition Index: 42403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalarUtf8_m313F5116E0CBF64D14D0A24130A43B5748C3CE61 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, uint32_t ___0_unicodeScalar, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_utf16ScratchBuffer, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___2_utf8Destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		uint32_t L_0 = ___0_unicodeScalar;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_1 = ___1_utf16ScratchBuffer;
		bool L_2;
		L_2 = TextEncoder_TryEncodeUnicodeScalar_m32F1C002E4923112744BDCE29E6D5136D6F76D01_inline(__this, L_0, L_1, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_m8D51FF9E9FDFF79624B3AE3C0B656F47CCAAE62B(NULL);
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_4;
		L_4 = Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_inline((&___1_utf16ScratchBuffer), 0, L_3, Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_RuntimeMethod_var);
		___1_utf16ScratchBuffer = L_4;
		V_1 = 0;
		goto IL_0078;
	}

IL_0020:
	{
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_5 = ___1_utf16ScratchBuffer;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_6;
		L_6 = Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669(L_5, Span_1_op_Implicit_m25AC36817100AD489789F43FDF547C7A1F286669_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Rune_DecodeFromUtf16_mA1721E120027218B984163DE7E65AA613CCDAB3D(L_6, (&V_2), (&V_3), NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_m8D51FF9E9FDFF79624B3AE3C0B656F47CCAAE62B(NULL);
	}

IL_0036:
	{
		int32_t L_8;
		L_8 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&V_2), NULL);
		int32_t L_9;
		L_9 = UnicodeHelpers_GetUtf8RepresentationForScalarValue_mFA681D8DC4256D0432289941E3619FA8F71960AD(L_8, NULL);
		V_4 = L_9;
	}

IL_0044:
	{
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_10 = ___2_utf8Destination;
		int32_t L_11 = V_1;
		bool L_12;
		L_12 = SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_inline(L_10, L_11, SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		uint8_t* L_15;
		L_15 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___2_utf8Destination), L_14, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_16 = V_4;
		*((int8_t*)L_15) = (int8_t)((int32_t)(uint8_t)L_16);
		goto IL_0065;
	}

IL_005f:
	{
		int32_t* L_17 = ___3_bytesWritten;
		*((int32_t*)L_17) = (int32_t)0;
		return (bool)0;
	}

IL_0065:
	{
		uint32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)((uint32_t)L_18>>8));
		V_4 = L_19;
		if (L_19)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_20 = V_3;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_21;
		L_21 = Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_inline((&___1_utf16ScratchBuffer), L_20, Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		___1_utf16ScratchBuffer = L_21;
	}

IL_0078:
	{
		bool L_22;
		L_22 = Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE((&___1_utf16ScratchBuffer), Span_1_get_IsEmpty_mD39B7563F587EEA0FE2DC3D7709A3A97903059CE_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0020;
		}
	}
	{
		int32_t* L_23 = ___3_bytesWritten;
		int32_t L_24 = V_1;
		*((int32_t*)L_23) = (int32_t)L_24;
		return (bool)1;
	}
}
// Method Definition Index: 42406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeUtf8_m08F1FD9AE6FB6A54249A8E4DB26B8B99E6EB9378 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_utf8Source, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___1_utf8Destination, int32_t* ___2_bytesConsumed, int32_t* ___3_bytesWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m241969C86B1304681C79B554EBB56ACE408064B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_0 = ___0_utf8Source;
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___1_utf8Destination), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_utf8Source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3;
		L_3 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___1_utf8Destination), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_4;
		L_4 = ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_inline((&___0_utf8Source), 0, L_3, ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0022:
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_5 = V_0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 >::Invoke(12, __this, L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&V_0), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0036:
	{
		int32_t L_9 = V_1;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_10;
		L_10 = ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_inline((&___0_utf8Source), 0, L_9, ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_RuntimeMethod_var);
		V_5 = L_10;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_11 = ___1_utf8Destination;
		ReadOnlySpan_1_CopyTo_m241969C86B1304681C79B554EBB56ACE408064B9((&V_5), L_11, ReadOnlySpan_1_CopyTo_m241969C86B1304681C79B554EBB56ACE408064B9_RuntimeMethod_var);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_utf8Source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t* L_14 = ___2_bytesConsumed;
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_utf8Source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		*((int32_t*)L_14) = (int32_t)L_15;
		int32_t* L_16 = ___3_bytesWritten;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_utf8Source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		*((int32_t*)L_16) = (int32_t)L_17;
		return (int32_t)(0);
	}

IL_0068:
	{
		int32_t L_18 = V_1;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_19;
		L_19 = ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_inline((&___0_utf8Source), L_18, ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		int32_t L_20 = V_1;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_21;
		L_21 = Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_inline((&___1_utf8Destination), L_20, Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_RuntimeMethod_var);
		bool L_22 = ___4_isFinalBlock;
		int32_t L_23;
		L_23 = VirtualFuncInvoker5< int32_t, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4, int32_t*, int32_t*, bool >::Invoke(8, __this, L_19, L_21, (&V_3), (&V_4), L_22);
		V_2 = L_23;
		int32_t* L_24 = ___2_bytesConsumed;
		int32_t L_25 = V_1;
		int32_t L_26 = V_3;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_25, L_26));
		int32_t* L_27 = ___3_bytesWritten;
		int32_t L_28 = V_1;
		int32_t L_29 = V_4;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, L_29));
		int32_t L_30 = V_2;
		return L_30;
	}
}
// Method Definition Index: 42407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeUtf8Core_m260060F6491E0687152DF1DF4734B4A4F81E03A6 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_utf8Source, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___1_utf8Destination, int32_t* ___2_bytesConsumed, int32_t* ___3_bytesWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tB3916DFC764DF153B19342195C5137E7904A154F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tB3916DFC764DF153B19342195C5137E7904A154F V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_utf8Source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___1_utf8Destination), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		V_1 = L_1;
		uintptr_t L_2 = ((uintptr_t)((int32_t)48));
		int8_t* L_3 = (int8_t*) (L_2 ? alloca(L_2) : NULL);
		memset(L_3, 0, L_2);
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_inline((&L_4), (void*)(L_3), ((int32_t)24), Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_RuntimeMethod_var);
		V_4 = L_4;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_5 = V_4;
		V_2 = L_5;
		goto IL_00ce;
	}

IL_0026:
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_6 = ___0_utf8Source;
		int32_t L_7;
		L_7 = Rune_DecodeFromUtf8_mA26A377DDDB4BBB698378511691E091577D1F62B(L_6, (&V_6), (&V_7), NULL);
		V_5 = L_7;
		int32_t L_8 = V_5;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		bool L_9 = ___4_isFinalBlock;
		if (L_9)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_10 = V_5;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_00f5;
	}

IL_0044:
	{
		int32_t L_11;
		L_11 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&V_6), NULL);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6, __this, L_11);
		if (L_12)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_13;
		L_13 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&V_6), NULL);
		int32_t L_14;
		L_14 = UnicodeHelpers_GetUtf8RepresentationForScalarValue_mFA681D8DC4256D0432289941E3619FA8F71960AD(L_13, NULL);
		V_9 = L_14;
		V_10 = 0;
	}

IL_0064:
	{
		int32_t L_15 = V_10;
		int32_t L_16;
		L_16 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___1_utf8Destination), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		if ((!(((uint32_t)L_15) < ((uint32_t)L_16))))
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_17 = V_10;
		int32_t L_18 = L_17;
		V_10 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint8_t* L_19;
		L_19 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___1_utf8Destination), L_18, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_20 = V_9;
		*((int8_t*)L_19) = (int8_t)((int32_t)(uint8_t)L_20);
		uint32_t L_21 = V_9;
		int32_t L_22 = ((int32_t)((uint32_t)L_21>>8));
		V_9 = L_22;
		if (L_22)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_23 = V_7;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_24;
		L_24 = ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_inline((&___0_utf8Source), L_23, ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		___0_utf8Source = L_24;
		int32_t L_25 = V_10;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_26;
		L_26 = Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_inline((&___1_utf8Destination), L_25, Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_RuntimeMethod_var);
		___1_utf8Destination = L_26;
		goto IL_00ce;
	}

IL_00a5:
	{
		int32_t L_27;
		L_27 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&V_6), NULL);
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_28 = V_2;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_29 = ___1_utf8Destination;
		bool L_30;
		L_30 = TextEncoder_TryEncodeUnicodeScalarUtf8_m313F5116E0CBF64D14D0A24130A43B5748C3CE61(__this, L_27, L_28, L_29, (&V_8), NULL);
		if (!L_30)
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_31 = V_7;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_32;
		L_32 = ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_inline((&___0_utf8Source), L_31, ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		___0_utf8Source = L_32;
		int32_t L_33 = V_8;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_34;
		L_34 = Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_inline((&___1_utf8Destination), L_33, Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_RuntimeMethod_var);
		___1_utf8Destination = L_34;
	}

IL_00ce:
	{
		bool L_35;
		L_35 = ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07((&___0_utf8Source), ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_0026;
		}
	}
	{
		V_3 = 0;
	}

IL_00dc:
	{
		int32_t* L_36 = ___2_bytesConsumed;
		int32_t L_37 = V_0;
		int32_t L_38;
		L_38 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_utf8Source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		*((int32_t*)L_36) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_37, L_38));
		int32_t* L_39 = ___3_bytesWritten;
		int32_t L_40 = V_1;
		int32_t L_41;
		L_41 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___1_utf8Destination), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_40, L_41));
		int32_t L_42 = V_3;
		return L_42;
	}

IL_00f5:
	{
		V_3 = 2;
		goto IL_00dc;
	}

IL_00f9:
	{
		V_3 = 1;
		goto IL_00dc;
	}
}
// Method Definition Index: 42408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_Encode_m286E4E9DB4651136BFF445BC5362E1704CCE0700 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_source, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_destination, int32_t* ___2_charsConsumed, int32_t* ___3_charsWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m6007619FD172571DFEE0D74D7FC36B8A19818D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_0 = ___0_source;
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline((&___1_destination), Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_source), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3;
		L_3 = Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline((&___1_destination), Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_4;
		L_4 = ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_inline((&___0_source), 0, L_3, ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0022:
	{
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_5 = V_0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD >::Invoke(11, __this, L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&V_0), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0036:
	{
		int32_t L_9 = V_1;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_10;
		L_10 = ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_inline((&___0_source), 0, L_9, ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_RuntimeMethod_var);
		V_5 = L_10;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_11 = ___1_destination;
		ReadOnlySpan_1_CopyTo_m6007619FD172571DFEE0D74D7FC36B8A19818D51((&V_5), L_11, ReadOnlySpan_1_CopyTo_m6007619FD172571DFEE0D74D7FC36B8A19818D51_RuntimeMethod_var);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_source), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t* L_14 = ___2_charsConsumed;
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_source), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		*((int32_t*)L_14) = (int32_t)L_15;
		int32_t* L_16 = ___3_charsWritten;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_source), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		*((int32_t*)L_16) = (int32_t)L_17;
		return (int32_t)(0);
	}

IL_0068:
	{
		int32_t L_18 = V_1;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_19;
		L_19 = ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_inline((&___0_source), L_18, ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_RuntimeMethod_var);
		int32_t L_20 = V_1;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_21;
		L_21 = Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_inline((&___1_destination), L_20, Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		bool L_22 = ___4_isFinalBlock;
		int32_t L_23;
		L_23 = VirtualFuncInvoker5< int32_t, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F, int32_t*, int32_t*, bool >::Invoke(10, __this, L_19, L_21, (&V_3), (&V_4), L_22);
		V_2 = L_23;
		int32_t* L_24 = ___2_charsConsumed;
		int32_t L_25 = V_1;
		int32_t L_26 = V_3;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_25, L_26));
		int32_t* L_27 = ___3_charsWritten;
		int32_t L_28 = V_1;
		int32_t L_29 = V_4;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, L_29));
		int32_t L_30 = V_2;
		return L_30;
	}
}
// Method Definition Index: 42409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_EncodeCore_m8ED110F30772E85C5F6B690516BAE3D3F0D1228D (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_source, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_destination, int32_t* ___2_charsConsumed, int32_t* ___3_charsWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_source), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline((&___1_destination), Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_0085;
	}

IL_0012:
	{
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_2 = ___0_source;
		int32_t L_3;
		L_3 = Rune_DecodeFromUtf16_mA1721E120027218B984163DE7E65AA613CCDAB3D(L_2, (&V_4), (&V_5), NULL);
		V_3 = L_3;
		int32_t L_4 = V_3;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		bool L_5 = ___4_isFinalBlock;
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_6 = V_3;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00a9;
	}

IL_002a:
	{
		int32_t L_7;
		L_7 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&V_4), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6, __this, L_7);
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_9 = ___1_destination;
		bool L_10;
		L_10 = Rune_TryEncodeToUtf16_m7D60E83815F9069CA4137113E02B792F6164A51B((&V_4), L_9, (&V_7), NULL);
		if (!L_10)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_11 = V_5;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_12;
		L_12 = ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_inline((&___0_source), L_11, ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_RuntimeMethod_var);
		___0_source = L_12;
		int32_t L_13 = V_5;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_14;
		L_14 = Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_inline((&___1_destination), L_13, Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		___1_destination = L_14;
		goto IL_0085;
	}

IL_005d:
	{
		int32_t L_15;
		L_15 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&V_4), NULL);
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_16 = ___1_destination;
		bool L_17;
		L_17 = TextEncoder_TryEncodeUnicodeScalar_m32F1C002E4923112744BDCE29E6D5136D6F76D01_inline(__this, L_15, L_16, (&V_6), NULL);
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_5;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_19;
		L_19 = ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_inline((&___0_source), L_18, ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_RuntimeMethod_var);
		___0_source = L_19;
		int32_t L_20 = V_6;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_21;
		L_21 = Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_inline((&___1_destination), L_20, Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_RuntimeMethod_var);
		___1_destination = L_21;
	}

IL_0085:
	{
		bool L_22;
		L_22 = ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88((&___0_source), ReadOnlySpan_1_get_IsEmpty_m00AF4465CE24BF8D1602BB98D23CD035A9A4ED88_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0012;
		}
	}
	{
		V_2 = 0;
	}

IL_0090:
	{
		int32_t* L_23 = ___2_charsConsumed;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_source), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		int32_t* L_26 = ___3_charsWritten;
		int32_t L_27 = V_1;
		int32_t L_28;
		L_28 = Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline((&___1_destination), Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		*((int32_t*)L_26) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_27, L_28));
		int32_t L_29 = V_2;
		return L_29;
	}

IL_00a9:
	{
		V_2 = 2;
		goto IL_0090;
	}

IL_00ad:
	{
		V_2 = 1;
		goto IL_0090;
	}
}
// Method Definition Index: 42410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_FindFirstCharacterToEncode_mA3DDCF7D0F04CA9FB531C9A64012477C96B87791 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m50EB7DF4A31D500A07B28EAA5503665CE259D880_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	{
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_0 = ___0_text;
		Il2CppChar* L_1;
		L_1 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m50EB7DF4A31D500A07B28EAA5503665CE259D880(L_0, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m50EB7DF4A31D500A07B28EAA5503665CE259D880_RuntimeMethod_var);
		V_1 = L_1;
		Il2CppChar* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_text), ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_RuntimeMethod_var);
		int32_t L_5;
		L_5 = VirtualFuncInvoker2< int32_t, Il2CppChar*, int32_t >::Invoke(5, __this, L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 42411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEncoder_FindFirstCharacterToEncodeUtf8_mAD59895E8B00894847EC5499192EC0A438248AA8 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_utf8Text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_utf8Text), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0031;
	}

IL_000a:
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_1 = ___0_utf8Text;
		int32_t L_2;
		L_2 = Rune_DecodeFromUtf8_mA26A377DDDB4BBB698378511691E091577D1F62B(L_1, (&V_2), (&V_3), NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_4;
		L_4 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&V_2), NULL);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, int32_t >::Invoke(6, __this, L_4);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = V_3;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_7;
		L_7 = ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_inline((&___0_utf8Text), L_6, ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_RuntimeMethod_var);
		___0_utf8Text = L_7;
	}

IL_0031:
	{
		bool L_8;
		L_8 = ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07((&___0_utf8Text), ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_000a;
		}
	}

IL_003a:
	{
		bool L_9;
		L_9 = ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07((&___0_utf8Text), ReadOnlySpan_1_get_IsEmpty_m1E2D492314874249390B9CBF268EF293F1F84F07_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_utf8Text), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
	}

IL_004d:
	{
		return (-1);
	}
}
// Method Definition Index: 42412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_m8D51FF9E9FDFF79624B3AE3C0B656F47CCAAE62B (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var)));
		String_t* L_0;
		L_0 = SR_get_TextEncoderDoesNotImplementMaxOutputCharsPerInputChar_m83FA414045AF2AA9E9AA3B7E7C82A9BE78BDBC7C(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoder_ThrowArgumentException_MaxOutputCharsPerInputChar_m8D51FF9E9FDFF79624B3AE3C0B656F47CCAAE62B_RuntimeMethod_var)));
	}
}
// Method Definition Index: 42413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoder__ctor_mC23A8564B67C43255BF415B71C016DA4BB354683 (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 42414
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings__ctor_m906A6B6E63A7B6CF25716E95E67BE0C148F19DE5 (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* __this, UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* ___0_allowedRanges, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* L_0 = ___0_allowedRanges;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3D7E554C2FD3D52D9690E3D5BB7B7321C3FA52B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings__ctor_m906A6B6E63A7B6CF25716E95E67BE0C148F19DE5_RuntimeMethod_var)));
	}

IL_0014:
	{
		UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* L_2 = ___0_allowedRanges;
		VirtualActionInvoker1< UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* >::Invoke(5, __this, L_2);
		return;
	}
}
// Method Definition Index: 42415
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings_AllowRange_m52B7E8FBBCAB9B1356C70BE19CCE4635F7446512 (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* __this, UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* ___0_range, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_0 = ___0_range;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings_AllowRange_m52B7E8FBBCAB9B1356C70BE19CCE4635F7446512_RuntimeMethod_var)));
	}

IL_000e:
	{
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_2 = ___0_range;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnicodeRange_get_FirstCodePoint_m8F0E6509E72EE287E5F8827CBCEAA8EE0F85BF12_inline(L_2, NULL);
		V_0 = L_3;
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_4 = ___0_range;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnicodeRange_get_Length_mCE666A2C567AA63B583810061F92AA25413FC1B3_inline(L_4, NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0035;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_8 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedCodePointsBitmap);
		int32_t L_9 = V_3;
		AllowedBmpCodePointsBitmap_AllowChar_m20439C3829232D0D2F7E4F7AB7A59CA8D818D9B2_inline(L_8, ((int32_t)(uint16_t)L_9), NULL);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42416
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEncoderSettings_AllowRanges_m18D3171E80119C94092B52370EC341417EA46817 (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* __this, UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* ___0_ranges, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* L_0 = ___0_ranges;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FC0613DB074A9C5DAB592FE3F86B3EDD439F7E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextEncoderSettings_AllowRanges_m18D3171E80119C94092B52370EC341417EA46817_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* L_2 = ___0_ranges;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		VirtualActionInvoker1< UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* >::Invoke(4, __this, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		UnicodeRangeU5BU5D_tF0DBA9AC44C1FABF3EE26551B3AEDC11D1B360E9* L_8 = ___0_ranges;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42417
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextEncoderSettings_GetAllowedCodePoints_mA93C8787749B0345AFB1B375BD3D15B7E0F54075 (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* L_0 = (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162*)il2cpp_codegen_object_new(U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162_il2cpp_TypeInfo_var);
		U3CGetAllowedCodePointsU3Ed__14__ctor_m338B063DC020BBDEF38D48BA792CAF553534EB9B(L_0, ((int32_t)-2), NULL);
		U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 42418
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* TextEncoderSettings_GetAllowedCodePointsBitmap_mDCE8D36FBD81A450F8BE47571FDA633769888427 (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrongBox_1__ctor_mB7531301FF1AE723E399FAB9D8A4DA4095636000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_4 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedCodePointsBitmap);
		return L_4;
	}

IL_001e:
	{
		StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2* L_5 = (StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2*)il2cpp_codegen_object_new(StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2_il2cpp_TypeInfo_var);
		StrongBox_1__ctor_mB7531301FF1AE723E399FAB9D8A4DA4095636000(L_5, StrongBox_1__ctor_mB7531301FF1AE723E399FAB9D8A4DA4095636000_RuntimeMethod_var);
		V_0 = L_5;
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, __this);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{
				{
					RuntimeObject* L_8 = V_1;
					if (!L_8)
					{
						goto IL_0061;
					}
				}
				{
					RuntimeObject* L_9 = V_1;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0061:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_004e_1;
			}

IL_0032_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				int32_t L_11;
				L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_10);
				V_2 = L_11;
				int32_t L_12 = V_2;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)65535)))))
				{
					goto IL_004e_1;
				}
			}
			{
				StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2* L_13 = V_0;
				NullCheck(L_13);
				AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_14 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&L_13->___Value);
				int32_t L_15 = V_2;
				AllowedBmpCodePointsBitmap_AllowChar_m20439C3829232D0D2F7E4F7AB7A59CA8D818D9B2_inline(L_14, ((int32_t)(uint16_t)L_15), NULL);
			}

IL_004e_1:
			{
				RuntimeObject* L_16 = V_1;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0062;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		StrongBox_1_t42A1B698A1AF890C44F8E44C86242776418ABCD2* L_18 = V_0;
		NullCheck(L_18);
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_19 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&L_18->___Value);
		return L_19;
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
// Method Definition Index: 42419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllowedCodePointsU3Ed__14__ctor_m338B063DC020BBDEF38D48BA792CAF553534EB9B (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
// Method Definition Index: 42420
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllowedCodePointsU3Ed__14_System_IDisposable_Dispose_m193CE874F90788C60D520D3F2C8CABA4C5D7A9E0 (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 42421
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllowedCodePointsU3Ed__14_MoveNext_m01EBF2CA522BFE60BD8BDE8C0937A2AEAFCA4DCA (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		__this->___U3CiU3E5__2 = 0;
		goto IL_0067;
	}

IL_0027:
	{
		TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* L_4 = V_1;
		NullCheck(L_4);
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_5 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&L_4->____allowedCodePointsBitmap);
		int32_t L_6 = __this->___U3CiU3E5__2;
		bool L_7;
		L_7 = AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline(L_5, ((int32_t)(uint16_t)L_6), NULL);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_8 = __this->___U3CiU3E5__2;
		__this->___U3CU3E2__current = L_8;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_0057:
	{
		int32_t L_9 = __this->___U3CiU3E5__2;
		V_2 = L_9;
		int32_t L_10 = V_2;
		__this->___U3CiU3E5__2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0067:
	{
		int32_t L_11 = __this->___U3CiU3E5__2;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}
}
// Method Definition Index: 42422
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CGetAllowedCodePointsU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_mE16FA3BEDF6B9162BF327BB17CC53F3742DF06FA (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 42423
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerator_Reset_mE4B04768C26D71261EE723B23612C0DC08D8251B (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerator_Reset_mE4B04768C26D71261EE723B23612C0DC08D8251B_RuntimeMethod_var)));
	}
}
// Method Definition Index: 42424
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerator_get_Current_m9D21633AB9CD4135405121AFD08D12F8F0E6E1BC (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_defaults.int32_class, &L_1);
		return L_2;
	}
}
// Method Definition Index: 42425
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllowedCodePointsU3Ed__14_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m2409964593274011FBBEC621B958135EDD619887 (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* L_3 = (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162*)il2cpp_codegen_object_new(U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162_il2cpp_TypeInfo_var);
		U3CGetAllowedCodePointsU3Ed__14__ctor_m338B063DC020BBDEF38D48BA792CAF553534EB9B(L_3, 0, NULL);
		V_0 = L_3;
		U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* L_4 = V_0;
		TextEncoderSettings_t2FC9876C4D665A567C5C221FA524A599681FF84A* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 42426
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllowedCodePointsU3Ed__14_System_Collections_IEnumerable_GetEnumerator_mDBA9CCBF22DD74E45740ECD36CBFCD50F398F620 (U3CGetAllowedCodePointsU3Ed__14_tE145229E2C2997C8CECF3DA30508317EF2B00162* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllowedCodePointsU3Ed__14_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m2409964593274011FBBEC621B958135EDD619887(__this, NULL);
		return L_0;
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
// Method Definition Index: 42427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m33015D9CAAF113EFE8202E853C2CA3D987A97528 (int32_t ___0_argument, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_argument;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_m577311F50B3B7AAD3EB247FB0BD9FF18D71E9197(L_0, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m33015D9CAAF113EFE8202E853C2CA3D987A97528_RuntimeMethod_var)));
	}
}
// Method Definition Index: 42428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_m577311F50B3B7AAD3EB247FB0BD9FF18D71E9197 (int32_t ___0_argument, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t75C3A39AAB3BE63446FA835E1135612398956793_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_t75C3A39AAB3BE63446FA835E1135612398956793_il2cpp_TypeInfo_var, (&___0_argument));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 42307
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m5AEA0C4E1F8B6E3291B0F839F9B91C18C6EA3B91_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_StaticFields*)il2cpp_codegen_static_fields_for(SR_t367D9780B2BF2D71DC4A953FC5CA645AABB42A88_il2cpp_TypeInfo_var))->___s_usingResourceKeys;
		return L_0;
	}
}
// Method Definition Index: 42319
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsInRangeInclusive_mFEE5B207F59389C23704FAEA79B52FFF4E192BAB_inline (uint32_t ___0_value, uint32_t ___1_lowerBound, uint32_t ___2_upperBound, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		uint32_t L_1 = ___1_lowerBound;
		uint32_t L_2 = ___2_upperBound;
		uint32_t L_3 = ___1_lowerBound;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 42321
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsValidUnicodeScalar_m01999FC776A7A53CF0F6F919AE08225884F7EEE7_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)1114112)))^((int32_t)55296)))) >= ((uint32_t)((int32_t)-1112064))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 42324
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rune__ctor_m6D5BD73487D41925DE0B776F9646E60373DA4923_inline (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, uint32_t ___0_scalarValue, bool ___1_unused, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_scalarValue;
		__this->____value = L_0;
		return;
	}
}
// Method Definition Index: 42317
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsAsciiCodePoint_m320F22FD432DEB4C7F80F22E070F14ECFA655C1F_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 42318
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsBmpCodePoint_m855EA7F47FC5B33ED1C73EDD123C0389051C8EF2_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		return (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)65535))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 42341
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F Rune_UnsafeCreate_m16BA4411AE09ABDDA83E43F4D918CE651E06794F_inline (uint32_t ___0_scalarValue, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_scalarValue;
		Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rune__ctor_m6D5BD73487D41925DE0B776F9646E60373DA4923_inline((&L_1), L_0, (bool)0, NULL);
		return L_1;
	}
}
// Method Definition Index: 42331
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline (Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____value;
		return L_0;
	}
}
// Method Definition Index: 42320
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnicodeUtility_IsSurrogateCodePoint_m6514E52F8C314F967DBA1CB00A1CD53BBA8DC670_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		bool L_1;
		L_1 = UnicodeUtility_IsInRangeInclusive_mFEE5B207F59389C23704FAEA79B52FFF4E192BAB_inline(L_0, ((int32_t)55296), ((int32_t)57343), NULL);
		return L_1;
	}
}
// Method Definition Index: 42316
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeUtility_GetUtf16SurrogatesFromSupplementaryPlaneScalar_mFBE463401A83EBF4C2320407D9075A5A4AE47B2C_inline (uint32_t ___0_value, Il2CppChar* ___1_highSurrogateCodePoint, Il2CppChar* ___2_lowSurrogateCodePoint, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___1_highSurrogateCodePoint;
		uint32_t L_1 = ___0_value;
		*((int16_t*)L_0) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)56557568)))>>((int32_t)10))));
		Il2CppChar* L_2 = ___2_lowSurrogateCodePoint;
		uint32_t L_3 = ___0_value;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)1023))), ((int32_t)56320))));
		return;
	}
}
// Method Definition Index: 42348
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_FirstCodePoint_m42FD1ED8249621B6259965C360453856118383CB_inline (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFirstCodePointU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 42350
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeRange_set_Length_m3B39C98498D5FC82DC3F401987300AB44EBDF7B4_inline (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLengthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 42356
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsciiByteMap_TryLookup_m2045F16F64FEC435CDCA248AFA3D4EA0EDED2100_inline (AsciiByteMap_t12154141010A4A7ACA8AC234EAB78520103061A0* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_key, uint8_t* ___1_value, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		bool L_0;
		L_0 = Rune_get_IsAscii_m7F2E10EF934516BCE9920CD3C6402ED142A3993B((&___0_key), NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		U3CBufferU3Ee__FixedBuffer_tB1330CD0855BB622D9F7382731EF4EA9DFD9F62D* L_1 = (U3CBufferU3Ee__FixedBuffer_tB1330CD0855BB622D9F7382731EF4EA9DFD9F62D*)(&__this->___Buffer);
		uint8_t* L_2 = (uint8_t*)(&L_1->___FixedElementField);
		int32_t L_3;
		L_3 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___0_key), NULL);
		int32_t L_4 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)L_3))));
		V_0 = (uint8_t)L_4;
		uint8_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t* L_6 = ___1_value;
		uint8_t L_7 = V_0;
		*((int8_t*)L_6) = (int8_t)L_7;
		return (bool)1;
	}

IL_0027:
	{
		uint8_t* L_8 = ___1_value;
		*((int8_t*)L_8) = (int8_t)0;
		return (bool)0;
	}
}
// Method Definition Index: 42363
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline (uint32_t ___0_value, uintptr_t* ___1_index, int32_t* ___2_offset, const RuntimeMethod* method) 
{
	{
		uintptr_t* L_0 = ___1_index;
		uint32_t L_1 = ___0_value;
		*((intptr_t*)L_0) = (intptr_t)((uintptr_t)((int32_t)((uint32_t)L_1>>5)));
		int32_t* L_2 = ___2_offset;
		uint32_t L_3 = ___0_value;
		*((int32_t*)L_2) = (int32_t)((int32_t)((int32_t)L_3&((int32_t)31)));
		return;
	}
}
// Method Definition Index: 42357
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_AllowChar_m20439C3829232D0D2F7E4F7AB7A59CA8D818D9B2_inline (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___0_value;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6* L_1 = (U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6*)(&__this->___Bitmap);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		uintptr_t L_3 = V_0;
		uint32_t* L_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4))))));
		int32_t L_5 = *((uint32_t*)L_4);
		int32_t L_6 = V_1;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5|((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))));
		return;
	}
}
// Method Definition Index: 42358
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllowedBmpCodePointsBitmap_ForbidChar_mE2D1973355114AA237256F73698024E53B26E3E0_inline (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___0_value;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6* L_1 = (U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6*)(&__this->___Bitmap);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		uintptr_t L_3 = V_0;
		uint32_t* L_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4))))));
		int32_t L_5 = *((uint32_t*)L_4);
		int32_t L_6 = V_1;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5&((~((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))));
		return;
	}
}
// Method Definition Index: 41343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_mA66C5A31FBA4E74D472679C36CB4E5685E27654C_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3783728D84CC56FF496B01B411C5C44F5CD27683_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_0 = ___0_source;
		uint32_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3783728D84CC56FF496B01B411C5C44F5CD27683_inline(L_0, MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3783728D84CC56FF496B01B411C5C44F5CD27683_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		uint32_t L_2 = V_0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m498A761DCA181928B228594D43E9A01B40B3DC6A_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 42361
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCharAllowed_mCFD02FA1B63F429F3A881D23C471DA37304FC7A4_inline (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppChar L_0 = ___0_value;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline(L_0, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6* L_1 = (U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6*)(&__this->___Bitmap);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		uintptr_t L_3 = V_0;
		int32_t L_4 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_3), ((int64_t)4)))))));
		int32_t L_5 = V_1;
		if (!((int32_t)(L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))))))
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		return (bool)0;
	}
}
// Method Definition Index: 42362
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AllowedBmpCodePointsBitmap_IsCodePointAllowed_mE8C77B539C520F0C5E3FBE79A9523BDF37B99A0F_inline (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		bool L_1;
		L_1 = UnicodeUtility_IsBmpCodePoint_m855EA7F47FC5B33ED1C73EDD123C0389051C8EF2_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		uint32_t L_2 = ___0_value;
		AllowedBmpCodePointsBitmap__GetIndexAndOffset_mE327086431D3FEEE3AF9A99B407E91FCEF329532_inline(L_2, (&V_0), (&V_1), NULL);
		U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6* L_3 = (U3CBitmapU3Ee__FixedBuffer_t7D08340468DCF3687FF7575636F35CD12A439FF6*)(&__this->___Bitmap);
		uint32_t* L_4 = (uint32_t*)(&L_3->___FixedElementField);
		uintptr_t L_5 = V_0;
		int32_t L_6 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_5), ((int64_t)4)))))));
		int32_t L_7 = V_1;
		if (!((int32_t)(L_6&((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		return (bool)0;
	}
}
// Method Definition Index: 42372
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptimizedInboxTextEncoder__AssertThisNotNull_m9FA07FA45698B9DE907687961B31C68D83E8C1E3_inline (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 42375
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsciiPreescapedData_TryGetPreescapedData_mE56B12B506C0C97ED3E466022FB028D03C4AA318_inline (AsciiPreescapedData_t6F4BC00446787C4CD2660FF3D10C50E82E76723E* __this, uint32_t ___0_codePoint, uint64_t* ___1_preescapedData, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_codePoint;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)127)))))
		{
			goto IL_001c;
		}
	}
	{
		uint64_t* L_1 = ___1_preescapedData;
		U3CDataU3Ee__FixedBuffer_t0DE3A00F75479702BFD16FDA286F2FF154E8A494* L_2 = (U3CDataU3Ee__FixedBuffer_t0DE3A00F75479702BFD16FDA286F2FF154E8A494*)(&__this->___Data);
		uint64_t* L_3 = (uint64_t*)(&L_2->___FixedElementField);
		uint32_t L_4 = ___0_codePoint;
		int64_t L_5 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_4), ((int64_t)8)))))));
		*((int64_t*)L_1) = (int64_t)L_5;
		return (bool)1;
	}

IL_001c:
	{
		uint64_t* L_6 = ___1_preescapedData;
		*((int64_t*)L_6) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
// Method Definition Index: 42371
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OptimizedInboxTextEncoder_IsScalarValueAllowed_m44BD8F7EA7549D7208F5A1A20D7683D960ECD004_inline (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, Rune_t3A6E744A7F5E93BC6E83A8C5C1ED913894AE483F ___0_value, const RuntimeMethod* method) 
{
	{
		AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2* L_0 = (AllowedBmpCodePointsBitmap_t404E272D63585052CF80C0734B4666DE9E2246A2*)(&__this->____allowedBmpCodePoints);
		int32_t L_1;
		L_1 = Rune_get_Value_m35CC6BF5CD59D9EF381D978F4D23B1A74C79B7F3_inline((&___0_value), NULL);
		bool L_2;
		L_2 = AllowedBmpCodePointsBitmap_IsCodePointAllowed_mE8C77B539C520F0C5E3FBE79A9523BDF37B99A0F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 42394
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_TryWriteUInt64LittleEndian_mA57339C96051A7EF676D56ABAFDA9A7BF4E27F34_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_span, int32_t ___1_offset, uint64_t ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___0_span), Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_RuntimeMethod_var);
		int32_t L_1 = ___1_offset;
		bool L_2;
		L_2 = SpanUtility_AreValidIndexAndLength_m63E10B641EC532EA7DC9DC69D4BC92DBC7B81407_inline(L_0, L_1, 8, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_3 = ___2_value;
		uint64_t L_4;
		L_4 = BinaryPrimitives_ReverseEndianness_mE3620A212E4DCE9334F6EFA6518F286FFD00A5E1_inline(L_3, NULL);
		___2_value = L_4;
	}

IL_001f:
	{
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_5 = ___0_span;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9ECE855A27F4089EAA3F450F1442A38D8070C450_RuntimeMethod_var);
		int32_t L_7 = ___1_offset;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_6, (intptr_t)((uintptr_t)L_7));
		uint64_t L_9 = ___2_value;
		il2cpp_unsafe_write_unaligned(L_8, L_9);
		return (bool)1;
	}

IL_0034:
	{
		return (bool)0;
	}
}
// Method Definition Index: 42365
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OptimizedInboxTextEncoder_FindFirstCharacterToEncode_mD80BEE36341F2B33EFA4C39676DDDA0A9605CD4E_inline (OptimizedInboxTextEncoder_tE887530427A5362DDED2F96656E0F33EC27A81F3* __this, Il2CppChar* ___0_text, int32_t ___1_textLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar* L_0 = ___0_text;
		int32_t L_1 = ___1_textLength;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_inline((&L_2), (void*)L_0, L_1, ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_RuntimeMethod_var);
		int32_t L_3;
		L_3 = OptimizedInboxTextEncoder_GetIndexOfFirstCharToEncode_mF7BC5130E4B27BECD08A2267839D49C547901267(__this, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 42305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexConverter_ToBytesBuffer_mBE2517764F9EF6F0E8FD9AD19B2C23E66266535F_inline (uint8_t ___0_value, Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___1_buffer, int32_t ___2_startingIndex, uint32_t ___3_casing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___0_value;
		uint8_t L_1 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___3_casing;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)(((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___2_startingIndex;
		uint8_t* L_6;
		L_6 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_5, 1)), Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_7 = V_1;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		int32_t L_8 = ___2_startingIndex;
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_inline((&___1_buffer), L_8, Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_RuntimeMethod_var);
		uint32_t L_10 = V_1;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8)));
		return;
	}
}
// Method Definition Index: 42343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnicodeHelpers_GetUtf16SurrogatePairFromAstralScalarValue_mBD46BC0E9A2B84A2F85569B7ABC79AB19FA64423_inline (uint32_t ___0_scalar, Il2CppChar* ___1_highSurrogate, Il2CppChar* ___2_lowSurrogate, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___1_highSurrogate;
		uint32_t L_1 = ___0_scalar;
		*((int16_t*)L_0) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)56557568)))>>((int32_t)10))));
		Il2CppChar* L_2 = ___2_lowSurrogate;
		uint32_t L_3 = ___0_scalar;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)1023))), ((int32_t)56320))));
		return;
	}
}
// Method Definition Index: 42306
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexConverter_ToCharsBuffer_mB047CE531CA06177F520AC0395523C2F3BCB7622_inline (uint8_t ___0_value, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_buffer, int32_t ___2_startingIndex, uint32_t ___3_casing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___0_value;
		uint8_t L_1 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___3_casing;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)(((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___2_startingIndex;
		Il2CppChar* L_6;
		L_6 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_5, 1)), Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		uint32_t L_7 = V_1;
		*((int16_t*)L_6) = (int16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_7&((int32_t)255))));
		int32_t L_8 = ___2_startingIndex;
		Il2CppChar* L_9;
		L_9 = Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_inline((&___1_buffer), L_8, Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_RuntimeMethod_var);
		uint32_t L_10 = V_1;
		*((int16_t*)L_9) = (int16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)L_10>>8)));
		return;
	}
}
// Method Definition Index: 42395
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_AreValidIndexAndLength_m63E10B641EC532EA7DC9DC69D4BC92DBC7B81407_inline (int32_t ___0_spanRealLength, int32_t ___1_requestedOffset, int32_t ___2_requestedLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_requestedOffset;
		int32_t L_2 = ___0_spanRealLength;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_3 = ___2_requestedLength;
		int32_t L_4 = ___0_spanRealLength;
		int32_t L_5 = ___1_requestedOffset;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		int32_t L_6 = ___0_spanRealLength;
		int32_t L_7 = ___1_requestedOffset;
		int32_t L_8 = ___2_requestedLength;
		if ((!(((uint64_t)((int64_t)(uint64_t)((uint32_t)L_6))) < ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_7)), ((int64_t)(uint64_t)((uint32_t)L_8))))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		return (bool)1;
	}
}
// Method Definition Index: 41342
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_mE3620A212E4DCE9334F6EFA6518F286FFD00A5E1_inline (uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m498A761DCA181928B228594D43E9A01B40B3DC6A_inline(((int32_t)(uint32_t)L_0), NULL);
		uint64_t L_2 = ___0_value;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m498A761DCA181928B228594D43E9A01B40B3DC6A_inline(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), NULL);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_1)<<((int32_t)32))), ((int64_t)(uint64_t)L_3)));
	}
}
// Method Definition Index: 42402
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextEncoder_TryEncodeUnicodeScalar_m32F1C002E4923112744BDCE29E6D5136D6F76D01_inline (TextEncoder_t260D9F161B8FCCBA4AB465F6C8C7543291670E38* __this, uint32_t ___0_unicodeScalar, Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___1_buffer, int32_t* ___2_charsWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	{
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_0 = ___1_buffer;
		Il2CppChar* L_1;
		L_1 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD(L_0, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8BD283850E331CB73F88745BF1751E43C7559CAD_RuntimeMethod_var);
		V_1 = L_1;
		Il2CppChar* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		uint32_t L_3 = ___0_unicodeScalar;
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline((&___1_buffer), Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_RuntimeMethod_var);
		int32_t* L_6 = ___2_charsWritten;
		bool L_7;
		L_7 = VirtualFuncInvoker4< bool, int32_t, Il2CppChar*, int32_t, int32_t* >::Invoke(4, __this, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// Method Definition Index: 42347
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_FirstCodePoint_m8F0E6509E72EE287E5F8827CBCEAA8EE0F85BF12_inline (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFirstCodePointU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 42349
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnicodeRange_get_Length_mCE666A2C567AA63B583810061F92AA25413FC1B3_inline (UnicodeRange_t6E32DAD02DDE51F1D6B496D81A20D2F5C995BDAD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 41149
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_m9B2D2091174825F81084AE839FC258219A681A36_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m83C73BAC53EC40A8FD75953BFDF2C0A02BBEF926(NULL);
	}

IL_000e:
	{
		Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* L_2 = __this->____pinnable;
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = __this->____byteOffset;
		V_0 = L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6 = ___0_index;
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, L_6);
		return L_7;
	}

IL_0030:
	{
		Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* L_8 = __this->____pinnable;
		NullCheck(L_8);
		uint8_t* L_9 = (uint8_t*)(&L_8->___Data);
		intptr_t L_10 = __this->____byteOffset;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_9, L_10);
		int32_t L_12 = ___0_index;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		return L_13;
	}
}
// Method Definition Index: 41149
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_m7BEE853AE199BF7DDBA4841547EC77FB91D33526_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m83C73BAC53EC40A8FD75953BFDF2C0A02BBEF926(NULL);
	}

IL_000e:
	{
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_2 = __this->____pinnable;
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = __this->____byteOffset;
		V_0 = L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppChar>(L_4);
		int32_t L_6 = ___0_index;
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_5, L_6);
		return L_7;
	}

IL_0030:
	{
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_8 = __this->____pinnable;
		NullCheck(L_8);
		Il2CppChar* L_9 = (Il2CppChar*)(&L_8->___Data);
		intptr_t L_10 = __this->____byteOffset;
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_add_byte_offset<Il2CppChar,intptr_t>(L_9, L_10);
		int32_t L_12 = ___0_index;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		return L_13;
	}
}
// Method Definition Index: 41128
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_get_Item_m483D1154304B8682BF6957FA84991E5CFA32CFA5_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m83C73BAC53EC40A8FD75953BFDF2C0A02BBEF926(NULL);
	}

IL_000e:
	{
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_2 = __this->____pinnable;
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = __this->____byteOffset;
		V_0 = L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppChar>(L_4);
		int32_t L_6 = ___0_index;
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_5, L_6);
		return L_7;
	}

IL_0030:
	{
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_8 = __this->____pinnable;
		NullCheck(L_8);
		Il2CppChar* L_9 = (Il2CppChar*)(&L_8->___Data);
		intptr_t L_10 = __this->____byteOffset;
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_add_byte_offset<Il2CppChar,intptr_t>(L_9, L_10);
		int32_t L_12 = ___0_index;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		return L_13;
	}
}
// Method Definition Index: 41118
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 41118
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 41128
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_mD7D3B4E5E527ADD3AA8F593FFE3295F32F826EDF_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m83C73BAC53EC40A8FD75953BFDF2C0A02BBEF926(NULL);
	}

IL_000e:
	{
		Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* L_2 = __this->____pinnable;
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = __this->____byteOffset;
		V_0 = L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6 = ___0_index;
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, L_6);
		return L_7;
	}

IL_0030:
	{
		Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* L_8 = __this->____pinnable;
		NullCheck(L_8);
		uint8_t* L_9 = (uint8_t*)(&L_8->___Data);
		intptr_t L_10 = __this->____byteOffset;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_9, L_10);
		int32_t L_12 = ___0_index;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		return L_13;
	}
}
// Method Definition Index: 41139
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 41139
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 41126
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6BEA29F375B04D61FEA8DD79A7B77194EDE238CA_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 8)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m07A6691BD0655734027B89895FF1F3E7C2FBF5FD(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_0020:
	{
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		__this->____pinnable = (Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)(Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530*)NULL);
		void* L_5 = ___0_pointer;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, NULL);
		__this->____byteOffset = L_6;
		return;
	}
}
// Method Definition Index: 41147
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCD1B124CDC6B59DAF17F6A3BB52EC14D77A17148_gshared_inline (Span_1_t52E8D6CE4051868EF02A556436D822434F573789* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m07A6691BD0655734027B89895FF1F3E7C2FBF5FD(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_0020:
	{
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		__this->____pinnable = (Pinnable_1_tE8646790C70B7BE55702280E40D5A4A99313EB4F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)(Pinnable_1_tE8646790C70B7BE55702280E40D5A4A99313EB4F*)NULL);
		void* L_5 = ___0_pointer;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, NULL);
		__this->____byteOffset = L_6;
		return;
	}
}
// Method Definition Index: 41149
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t* Span_1_get_Item_m58CBA4AE57A7D59CD5B69FBFD0609C6C28A45C8F_gshared_inline (Span_1_t52E8D6CE4051868EF02A556436D822434F573789* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m83C73BAC53EC40A8FD75953BFDF2C0A02BBEF926(NULL);
	}

IL_000e:
	{
		Pinnable_1_tE8646790C70B7BE55702280E40D5A4A99313EB4F* L_2 = __this->____pinnable;
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = __this->____byteOffset;
		V_0 = L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint32_t>(L_4);
		int32_t L_6 = ___0_index;
		uint32_t* L_7;
		L_7 = il2cpp_unsafe_add<uint32_t,int32_t>(L_5, L_6);
		return L_7;
	}

IL_0030:
	{
		Pinnable_1_tE8646790C70B7BE55702280E40D5A4A99313EB4F* L_8 = __this->____pinnable;
		NullCheck(L_8);
		uint32_t* L_9 = (uint32_t*)(&L_8->___Data);
		intptr_t L_10 = __this->____byteOffset;
		uint32_t* L_11;
		L_11 = il2cpp_unsafe_add_byte_offset<uint32_t,intptr_t>(L_9, L_10);
		int32_t L_12 = ___0_index;
		uint32_t* L_13;
		L_13 = il2cpp_unsafe_add<uint32_t,int32_t>(L_11, L_12);
		return L_13;
	}
}
// Method Definition Index: 41133
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ReadOnlySpan_1_Slice_m2C3C5F1C5C93E9613E72BE9FF788D7AEBE4C04DB_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_000f:
	{
		intptr_t L_2 = __this->____byteOffset;
		int32_t L_3 = ___0_start;
		intptr_t L_4;
		L_4 = SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A52D522A0DF772DE00FBB3B1A8DE153863926C7_inline(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = L_4;
		int32_t L_5 = __this->____length;
		int32_t L_6 = ___0_start;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* L_7 = __this->____pinnable;
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m07F606949D668E9239DB87B7C29C0DE92FDC584C_inline((&L_10), L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_10;
	}
}
// Method Definition Index: 41139
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mACFB9A8C4B9ED50E54C5071AAE84DC41BDD7D34A_gshared_inline (Span_1_t52E8D6CE4051868EF02A556436D822434F573789* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 41126
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFFA3E360DEF5A98D7FFFAE11DB5849669A21D389_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 8)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m07A6691BD0655734027B89895FF1F3E7C2FBF5FD(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_0020:
	{
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		__this->____pinnable = (Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)(Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD*)NULL);
		void* L_5 = ___0_pointer;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, NULL);
		__this->____byteOffset = L_6;
		return;
	}
}
// Method Definition Index: 41147
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3F86F19C079D2E1F21445B608C4F5BC28EDCD00D_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m07A6691BD0655734027B89895FF1F3E7C2FBF5FD(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_0020:
	{
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		__this->____pinnable = (Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)(Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD*)NULL);
		void* L_5 = ___0_pointer;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, NULL);
		__this->____byteOffset = L_6;
		return;
	}
}
// Method Definition Index: 42392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA98A45A8AA6612D2865835668353CCEF18F5EAA0_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ___0_span, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_index;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_mB075CD8249E32E8098DE04A08C0D4E254B921896_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		return (bool)1;
	}
}
// Method Definition Index: 42393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB1C35B41EE2B35049EBC0259E6B7EEE778891CA6_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F ___0_span, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_index;
		int32_t L_1;
		L_1 = Span_1_get_Length_m717251C60C093B5C14FFF7459D29E9F8B5B04381_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		return (bool)1;
	}
}
// Method Definition Index: 41157
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tB3916DFC764DF153B19342195C5137E7904A154F Span_1_Slice_mEFE1E90E15AF4967F35B350D2DC656523CFD7CFF_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_000f:
	{
		intptr_t L_2 = __this->____byteOffset;
		int32_t L_3 = ___0_start;
		intptr_t L_4;
		L_4 = SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8C2E96471A665DA0C9366A58A54F154B82A7E787_inline(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_0 = L_4;
		int32_t L_5 = __this->____length;
		int32_t L_6 = ___0_start;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_7 = __this->____pinnable;
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA29C794D4B1BEF366A11C2B9EFD3C17D6244E19F_inline((&L_10), L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return L_10;
	}
}
// Method Definition Index: 42392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m348013E76A9B43A149AEDF4068BDD33716372542_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_span, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_index;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		return (bool)1;
	}
}
// Method Definition Index: 42393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanUtility_IsValidIndex_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2B7C3B61771C6A50065DEE6E0C66054332011D43_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 ___0_span, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_index;
		int32_t L_1;
		L_1 = Span_1_get_Length_mA39A033138A363999730414EAEDAEC34B59FA796_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		return (bool)1;
	}
}
// Method Definition Index: 41157
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 Span_1_Slice_m3EE55F36995895E3A9D79FE52D84A411371E5659_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_000f:
	{
		intptr_t L_2 = __this->____byteOffset;
		int32_t L_3 = ___0_start;
		intptr_t L_4;
		L_4 = SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A52D522A0DF772DE00FBB3B1A8DE153863926C7_inline(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_0 = L_4;
		int32_t L_5 = __this->____length;
		int32_t L_6 = ___0_start;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* L_7 = __this->____pinnable;
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mFD602335C0CC4673A79F88058D6BE87930370C3E_inline((&L_10), L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return L_10;
	}
}
// Method Definition Index: 41158
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tB3916DFC764DF153B19342195C5137E7904A154F Span_1_Slice_m05798CEA1717DDAE3A112907F0E559A6F512E582_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_001a:
	{
		intptr_t L_5 = __this->____byteOffset;
		int32_t L_6 = ___0_start;
		intptr_t L_7;
		L_7 = SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8C2E96471A665DA0C9366A58A54F154B82A7E787_inline(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_0 = L_7;
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_8 = __this->____pinnable;
		intptr_t L_9 = V_0;
		int32_t L_10 = ___1_length;
		Span_1_tB3916DFC764DF153B19342195C5137E7904A154F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Span_1__ctor_mA29C794D4B1BEF366A11C2B9EFD3C17D6244E19F_inline((&L_11), L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return L_11;
	}
}
// Method Definition Index: 41134
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ReadOnlySpan_1_Slice_mF0EC083A3F6AEA9DD03FAEFBEEC46B7F9FB22A13_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_001a:
	{
		intptr_t L_5 = __this->____byteOffset;
		int32_t L_6 = ___0_start;
		intptr_t L_7;
		L_7 = SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A52D522A0DF772DE00FBB3B1A8DE153863926C7_inline(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = L_7;
		Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* L_8 = __this->____pinnable;
		intptr_t L_9 = V_0;
		int32_t L_10 = ___1_length;
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_m07F606949D668E9239DB87B7C29C0DE92FDC584C_inline((&L_11), L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_11;
	}
}
// Method Definition Index: 41134
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ReadOnlySpan_1_Slice_mE814E288176D0029751EB56FF412FAE3421D40D5_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_001a:
	{
		intptr_t L_5 = __this->____byteOffset;
		int32_t L_6 = ___0_start;
		intptr_t L_7;
		L_7 = SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8C2E96471A665DA0C9366A58A54F154B82A7E787_inline(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = L_7;
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_8 = __this->____pinnable;
		intptr_t L_9 = V_0;
		int32_t L_10 = ___1_length;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_mF79E11F51B396ACFD1F12C93216500B94C652E8C_inline((&L_11), L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_11;
	}
}
// Method Definition Index: 41133
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD ReadOnlySpan_1_Slice_m0B3D82BA9393AF24DF0A8BC9FBECE40B72365595_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)1, NULL);
	}

IL_000f:
	{
		intptr_t L_2 = __this->____byteOffset;
		int32_t L_3 = ___0_start;
		intptr_t L_4;
		L_4 = SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8C2E96471A665DA0C9366A58A54F154B82A7E787_inline(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = L_4;
		int32_t L_5 = __this->____length;
		int32_t L_6 = ___0_start;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_7 = __this->____pinnable;
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mF79E11F51B396ACFD1F12C93216500B94C652E8C_inline((&L_10), L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_10;
	}
}
// Method Definition Index: 41341
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m498A761DCA181928B228594D43E9A01B40B3DC6A_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
// Method Definition Index: 3750
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
// Method Definition Index: 3743
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
// Method Definition Index: 41211
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3783728D84CC56FF496B01B411C5C44F5CD27683_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 ___0_source, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m256EFA800095D067A2E5C6565CE4A59C6580653F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m07A6691BD0655734027B89895FF1F3E7C2FBF5FD(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_inline((&___0_source), ReadOnlySpan_1_get_Length_m788213BAEBE96573606B14E60EA7E252E1B5F2DA_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBC688D2CF306DD5D2A41836B706568E98870AD16((int32_t)0, NULL);
	}

IL_002a:
	{
		ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507 L_5 = ___0_source;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m256EFA800095D067A2E5C6565CE4A59C6580653F(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m256EFA800095D067A2E5C6565CE4A59C6580653F_RuntimeMethod_var);
		uint32_t L_7;
		L_7 = il2cpp_unsafe_read_unaligned<uint32_t>(L_6);
		return L_7;
	}
}
// Method Definition Index: 41177
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tED776BA07B921050D08D92A9FB9AC262FF51C42F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 41177
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t932E035F990BA84CB197B79D0DD828CC5F475287_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 41176
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A52D522A0DF772DE00FBB3B1A8DE153863926C7_gshared_inline (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<uint8_t>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint8_t>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 41127
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m07F606949D668E9239DB87B7C29C0DE92FDC584C_gshared_inline (ReadOnlySpan_1_tF8DD22D378D32F9DB54EB859D8B9D754FE128507* __this, Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_length;
		__this->____length = L_0;
		Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* L_1 = ___0_pinnable;
		__this->____pinnable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)L_1);
		intptr_t L_2 = ___1_byteOffset;
		__this->____byteOffset = L_2;
		return;
	}
}
// Method Definition Index: 41177
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t0B8019F3E6AB4E0DA6368DE83FE051815AF8EDC3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 41176
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8C2E96471A665DA0C9366A58A54F154B82A7E787_gshared_inline (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 41148
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA29C794D4B1BEF366A11C2B9EFD3C17D6244E19F_gshared_inline (Span_1_tB3916DFC764DF153B19342195C5137E7904A154F* __this, Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_length;
		__this->____length = L_0;
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_1 = ___0_pinnable;
		__this->____pinnable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)L_1);
		intptr_t L_2 = ___1_byteOffset;
		__this->____byteOffset = L_2;
		return;
	}
}
// Method Definition Index: 41148
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFD602335C0CC4673A79F88058D6BE87930370C3E_gshared_inline (Span_1_t6D806D5F68A82CC7EFD63B6A159BC0185F7931C4* __this, Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_length;
		__this->____length = L_0;
		Pinnable_1_t4AB6531C02D3CE62CDDFD6B3B631B885DC2CA530* L_1 = ___0_pinnable;
		__this->____pinnable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)L_1);
		intptr_t L_2 = ___1_byteOffset;
		__this->____byteOffset = L_2;
		return;
	}
}
// Method Definition Index: 41127
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF79E11F51B396ACFD1F12C93216500B94C652E8C_gshared_inline (ReadOnlySpan_1_t445DEE97CD4426BEE748524476148B02EEC060BD* __this, Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_length;
		__this->____length = L_0;
		Pinnable_1_tADCB1A75C73D09237600DBBC3B91A17A36F25EFD* L_1 = ___0_pinnable;
		__this->____pinnable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)L_1);
		intptr_t L_2 = ___1_byteOffset;
		__this->____byteOffset = L_2;
		return;
	}
}
