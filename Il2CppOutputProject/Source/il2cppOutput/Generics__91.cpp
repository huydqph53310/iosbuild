#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194;
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD;
struct Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB;
struct Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2;
struct Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB;
struct Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812;
struct Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9;
struct Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58;
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB;
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1;
struct Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A;
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
struct Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76;
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D;
struct Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE;
struct IEnumerable_1_tBB3CA0C45F12D05BC85F39B2B1320B37F17836A9;
struct IEnumerable_1_tF1728A83D51A4E2E13A310C284DEEF7EC59293B3;
struct IEnumerable_1_tCE8ADB0B15EA7493B4381908846BC62307C137C3;
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_tE925592D6CE31E7FA5349FCEE9007F3DF53409FD;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t9C73E2DA2A24734B7BEE3997930B156A82172C56;
struct IEnumerator_1_t97F735EEDAEF171C04912900C50BD67549E7C34C;
struct IEnumerator_1_tDFDA733A40523681099DF822E97AA4397205F8E5;
struct IEnumerator_1_t402833552EE251A8377359B2B083EB70C4FF7A48;
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
struct IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t4CA3732E083480E40018894623B3C184576E5EFD;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5;
struct Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B;
struct Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831;
struct List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85;
struct List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB;
struct List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154;
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255;
struct WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D;
struct WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94;
struct WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2;
struct WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121;
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0;
struct WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719;
struct WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0;
struct WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788;
struct WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059;
struct WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F;
struct WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520;
struct WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689;
struct WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A;
struct WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16;
struct WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7;
struct WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1;
struct WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7;
struct WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674;
struct WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375;
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174;
struct WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D;
struct WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2;
struct WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255;
struct WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620;
struct WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D;
struct WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49;
struct WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69;
struct WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0;
struct WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349;
struct WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF;
struct WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7;
struct WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339;
struct WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C;
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C;
struct WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46;
struct WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2;
struct WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9;
struct WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46;
struct WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4;
struct WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE;
struct WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936;
struct WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E;
struct WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338;
struct WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4;
struct WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1;
struct WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673;
struct WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95;
struct WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3;
struct XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402;
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D;
struct XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD;
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0;
struct EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MethodInfo_t;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	bool ___current;
};
struct Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	uint8_t ___current;
};
struct Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Il2CppSharedGenericObject* ___current;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	int32_t ___current;
};
struct List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154  : public RuntimeObject
{
	ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255  : public RuntimeObject
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95  : public RuntimeObject
{
	int32_t ____headIndex;
	int32_t ____tailIndex;
	ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ____array;
	int32_t ____mask;
	int32_t ____addTakeCount;
	int32_t ____stealCount;
	int32_t ____currentOp;
	bool ____frozen;
	WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* ____nextQueue;
	int32_t ____ownerThreadId;
};
struct WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3  : public RuntimeObject
{
	int32_t ____headIndex;
	int32_t ____tailIndex;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____mask;
	int32_t ____addTakeCount;
	int32_t ____stealCount;
	int32_t ____currentOp;
	bool ____frozen;
	WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* ____nextQueue;
	int32_t ____ownerThreadId;
};
struct XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ____extractKey;
};
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ____extractKey;
};
struct XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD  : public RuntimeObject
{
	XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* ____state;
};
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0  : public RuntimeObject
{
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* ____state;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 
{
	Il2CppSharedGenericObject* ___Value;
	int32_t ___HashCode;
	int32_t ___Next;
};
typedef Il2CppFullySharedGenericStruct Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E;
struct Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA 
{
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ____list;
	int32_t ____index;
	int32_t ____version;
	uint8_t ____current;
};
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 
{
	Il2CppSharedGenericObject* ___key;
	bool ___value;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
struct ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A 
{
	Il2CppSharedGenericObject* ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	RuntimeObject* ___source;
	Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94  : public Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B
{
	RuntimeObject* ___source;
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___source;
	Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___predicate;
	Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___source;
	Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___predicate;
	Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___source;
	Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___predicate;
	Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___source;
	Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___predicate;
	Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___source;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___predicate;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___source;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___predicate;
	Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A  : public Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source;
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate;
	Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174 : public RuntimeObject {};
struct WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	RuntimeObject* ___source;
	Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___predicate;
	Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___predicate;
	Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	RuntimeObject* ___source;
	Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___predicate;
	Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___predicate;
	Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	RuntimeObject* ___source;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___predicate;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___predicate;
	Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69  : public Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B
{
	RuntimeObject* ___source;
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate;
	Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	RuntimeObject* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	RuntimeObject* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	RuntimeObject* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C : public RuntimeObject {};
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
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D 
{
	List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* ____list;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ____current;
};
struct Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119 
{
	List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* ____list;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ____current;
};
struct Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707 
{
	List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* ____list;
	int32_t ____index;
	int32_t ____version;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ____current;
};
struct WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ___enumerator;
};
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0 : public RuntimeObject {};
struct WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719  : public Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936  : public Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B
{
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___source;
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate;
	Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___selector;
	Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA ___enumerator;
};
struct WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___selector;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator;
};
struct WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___selector;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator;
};
struct WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___selector;
	Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ___enumerator;
};
struct WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___selector;
	Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ___enumerator;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct StyleSelectorType_t425962DE6D175F785FA2B5554D793B71D39430A3 
{
	int32_t ___value__;
};
struct WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* ___source;
	Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___predicate;
	Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___selector;
	Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D ___enumerator;
};
struct WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* ___source;
	Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___predicate;
	Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___selector;
	Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D ___enumerator;
};
struct WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* ___source;
	Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___predicate;
	Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___selector;
	Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119 ___enumerator;
};
struct WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* ___source;
	Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___predicate;
	Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___selector;
	Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119 ___enumerator;
};
struct WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* ___source;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___predicate;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___selector;
	Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707 ___enumerator;
};
struct WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* ___source;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___predicate;
	Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___selector;
	Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707 ___enumerator;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value;
	int32_t ___m_Type;
	RuntimeObject* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list;
	int32_t ____index;
	int32_t ____version;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current;
};
struct ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194  : public MulticastDelegate_t
{
};
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD  : public MulticastDelegate_t
{
};
struct Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB  : public MulticastDelegate_t
{
};
struct Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2  : public MulticastDelegate_t
{
};
struct Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB  : public MulticastDelegate_t
{
};
struct Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812  : public MulticastDelegate_t
{
};
struct Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9  : public MulticastDelegate_t
{
};
struct Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58  : public MulticastDelegate_t
{
};
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB  : public MulticastDelegate_t
{
};
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1  : public MulticastDelegate_t
{
};
struct Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D  : public MulticastDelegate_t
{
};
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};
struct Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A  : public MulticastDelegate_t
{
};
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};
struct Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76  : public MulticastDelegate_t
{
};
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D  : public MulticastDelegate_t
{
};
struct Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE  : public MulticastDelegate_t
{
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator;
};
struct WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___selector;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85_StaticFields
{
	KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___s_emptyArray;
};
struct List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB_StaticFields
{
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___s_emptyArray;
};
struct List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154_StaticFields
{
	ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___s_emptyArray;
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255_StaticFields
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 m_Items[1];

	inline KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 m_Items[1];

	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A m_Items[1];

	inline ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
	}
};
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
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 m_Items[1];

	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData), (void*)NULL);
		#endif
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData), (void*)NULL);
		#endif
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 m_Items[1];

	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
};
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD_gshared (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_gshared_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5_gshared (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate1, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316_gshared (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mA969D1F08B62BF76FE8F1C4E4AD9EFE40326F44E_gshared (WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8_gshared (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A_gshared (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* Enumerable_CombinePredicates_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m711AB0DB076468280391F6A8C14CA922E03CF7A7_gshared (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___0_predicate1, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96_gshared (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m11394A44515B0DEB51F103E7D6A168FF8F0E33F9_gshared (WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0* __this, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_gshared_inline (Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* __this, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C_gshared (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* __this, RuntimeObject* ___0_source, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m741E5DD3C378F8BEBE7B2CC8DCE14226E17E6D56_gshared (WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788* __this, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m199273DF90D39F9281A028004DA68CF7C53184D6_gshared_inline (Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* __this, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377_gshared (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m2C4DF03098D82A2864FCFD8600CE33C89CDF6B04_gshared (WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_gshared_inline (Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m22325966138CF40690DD3977CF3516138FCBACE9_gshared (WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m937F3F4E6DFC5793AFD912D15538BD0FE200196D_gshared_inline (Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m783368D28105B4D1E2663978058FC7BE8ABD8877_gshared (WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520* __this, ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_gshared_inline (Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m056192E672853576A125F7C911B7D51858DA9779_gshared (WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689* __this, ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m1BA22D2F48FFC9B4E1F90CB3C0EC126BB62A7867_gshared_inline (Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261_gshared (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mC498D4BB6CD48ECCB50142D3A001F2E9BA77221F_gshared (WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_gshared_inline (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* __this, uint8_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_gshared_inline (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* __this, uint8_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0_gshared (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94* __this, RuntimeObject* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m560D3BD02BF12CFDF7F6D76F842ECD082DE75D55_gshared (WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m29CB86EEB00E7418201DB40C0268CD4E3BE32D60_gshared (WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m1E7394D019C1A78F2140C6768774D7544461D2E1_gshared_inline (Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m523C5F336DD50476B9AD3426CAE1F9E8D7D1057B_gshared (WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m7FA46E216E6C6F344CA4F2EFDAED7C1ECB2608C3_gshared (WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mFA1BD30AA44BC4B0A9A749D71A987E6039436F53_gshared_inline (Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m4A2FC7E07F117CF402F9073324A0EBEAAF9E74DB_gshared (WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mB45F63051CA8364CCB5F7C4A34833850E20D4ED6_gshared (WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D* __this, RuntimeObject* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1_Dispose_m698F7131EF72E59DEFEB0AE247767235B5E8A417_gshared (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2C5BE8B06143A7AF0F504ADC78340C2A52D5998A_gshared (WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2* __this, RuntimeObject* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100_gshared (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m7E0D08EC63A5B4491A365480D6E51597410EEAB2_gshared (WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255* __this, RuntimeObject* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9E83795F89417AA4B2582469B6F98CB7745E00E0_gshared (WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620* __this, RuntimeObject* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m43F4BC2C132AC4B645988899B612110DCC80617C_gshared (WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D* __this, RuntimeObject* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m7DA759B6F3E1D6F9B708276A6F94F8EFD38CAE48_gshared (WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49* __this, RuntimeObject* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m32AC442EA447272F3B69D2C7C5053D98D83E73F4_gshared (WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69* __this, RuntimeObject* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1_Dispose_m0CA28FED9FB032D69DAABD40F9DC1EC210ACB963_gshared (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m5A424849BCC09B907E3A1D3895EB748598CF5938_gshared (WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m46E79626A6692CEE1C96AB3C559F7F7C3ED0977E_gshared (WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9409087BF300848C4CF451850DAA35BD37D8CB64_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2405C69F4B379D95DB5A0CD878DE173EF4EFC01B_gshared (WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mF602706A028408FFA3F65D18E915E8E10B0B2032_gshared (WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D1F33F590D70945993C2EEC1D210CB3D59253C4_gshared (WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46* __this, List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D List_1_GetEnumerator_m741A46459D0412942038A30B1B6505BE0871D4AC_gshared (List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 Enumerator_get_Current_m36BFE58761FCC0A168674CE56A009D3ED6350F00_gshared_inline (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA1460D5C90BE9B70717108DC15580C56DC079EAA_gshared (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDD443664497FE7FADC96AE103CEF3545186929EE_gshared (WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2* __this, List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCFADE7EE91440DEBCC5E0A873C75918BFAD0A6D4_gshared (WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9* __this, List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119 List_1_GetEnumerator_mFCEA46176146CA11E138909045D5A362CD6A34B5_gshared (List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Enumerator_get_Current_mC21B10741E52CD02297D62E713DAB517BD456BF0_gshared_inline (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8787F5390BEAE2D65D550B1C471A0A7C8F7541E9_gshared (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8BB5DA2CF27EED705845A6D3B453A1F00300900A_gshared (WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46* __this, List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2945457F47B5A7D917925C80D216695DB552A0D5_gshared (WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4* __this, List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707 List_1_GetEnumerator_m1E6173E67D663AE2AEAFB557691F367B6FB04E25_gshared (List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A Enumerator_get_Current_mE6329055437A55ABC932F03B3D1D0CEA72627349_gshared_inline (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE153B84BDC42E3A83453BE873E6F6D4A731CE00A_gshared (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8AD3881012C8ABEDB46BFD4B30F49C5B214E3635_gshared (WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE* __this, List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_gshared (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8CF44D99456496CDD71D6A92B387ACE3FE0D22A5_gshared (WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4E5213AEA3F49172211F4EFA18DF14269D3DCEFE_gshared (WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m39D8BE211B705F5296D108A8683B4523FB16A1CE_gshared (WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_mA940114F22FCD5D2BEC0B264321BAC3044A99A52_gshared (WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_gshared_inline (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, Il2CppSharedGenericObject* ___0_value, Il2CppSharedGenericObject** ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, const RuntimeMethod* method) ;

inline void Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*, const RuntimeMethod*))Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD_gshared)(__this, method);
}
inline void WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, const RuntimeMethod*))Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25 (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, const RuntimeMethod*))Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared)(__this, method);
}
inline Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5 (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate1, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate2, const RuntimeMethod* method)
{
	return ((  Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* (*) (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5_gshared)(___0_predicate1, ___1_predicate2, method);
}
inline void Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316 (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*, const RuntimeMethod*))Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316_gshared)(__this, method);
}
inline void WhereListIterator_1__ctor_mA969D1F08B62BF76FE8F1C4E4AD9EFE40326F44E (WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, const RuntimeMethod*))WhereListIterator_1__ctor_mA969D1F08B62BF76FE8F1C4E4AD9EFE40326F44E_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8 (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 (*) (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, const RuntimeMethod*))List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*, const RuntimeMethod*))Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, int32_t, const RuntimeMethod*))Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*, const RuntimeMethod*))Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A_gshared)(__this, method);
}
inline Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* Enumerable_CombinePredicates_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m711AB0DB076468280391F6A8C14CA922E03CF7A7 (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___0_predicate1, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate2, const RuntimeMethod* method)
{
	return ((  Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* (*) (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, const RuntimeMethod*))Enumerable_CombinePredicates_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m711AB0DB076468280391F6A8C14CA922E03CF7A7_gshared)(___0_predicate1, ___1_predicate2, method);
}
inline void Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96 (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96_gshared)(__this, method);
}
inline void WhereSelectArrayIterator_2__ctor_m11394A44515B0DEB51F103E7D6A168FF8F0E33F9 (WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0* __this, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0*, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE*, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m11394A44515B0DEB51F103E7D6A168FF8F0E33F9_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline bool Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline (Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* __this, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453, const RuntimeMethod*))Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* __this, RuntimeObject* ___0_source, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectArrayIterator_2__ctor_m741E5DD3C378F8BEBE7B2CC8DCE14226E17E6D56 (WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788* __this, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788*, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE*, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m741E5DD3C378F8BEBE7B2CC8DCE14226E17E6D56_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m199273DF90D39F9281A028004DA68CF7C53184D6_inline (Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* __this, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2*, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453, const RuntimeMethod*))Func_2_Invoke_m199273DF90D39F9281A028004DA68CF7C53184D6_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377 (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*, RuntimeObject*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectArrayIterator_2__ctor_m2C4DF03098D82A2864FCFD8600CE33C89CDF6B04 (WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059*, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m2C4DF03098D82A2864FCFD8600CE33C89CDF6B04_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline bool Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline (Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, const RuntimeMethod*))Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m22325966138CF40690DD3977CF3516138FCBACE9 (WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F*, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m22325966138CF40690DD3977CF3516138FCBACE9_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m937F3F4E6DFC5793AFD912D15538BD0FE200196D_inline (Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, const RuntimeMethod*))Func_2_Invoke_m937F3F4E6DFC5793AFD912D15538BD0FE200196D_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m783368D28105B4D1E2663978058FC7BE8ABD8877 (WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520* __this, ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520*, ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m783368D28105B4D1E2663978058FC7BE8ABD8877_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline bool Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline (Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m056192E672853576A125F7C911B7D51858DA9779 (WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689* __this, ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689*, ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m056192E672853576A125F7C911B7D51858DA9779_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m1BA22D2F48FFC9B4E1F90CB3C0EC126BB62A7867_inline (Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))Func_2_Invoke_m1BA22D2F48FFC9B4E1F90CB3C0EC126BB62A7867_gshared_inline)(__this, ___0_arg, method);
}
inline void Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261 (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*, const RuntimeMethod*))Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261_gshared)(__this, method);
}
inline void WhereSelectArrayIterator_2__ctor_mC498D4BB6CD48ECCB50142D3A001F2E9BA77221F (WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_mC498D4BB6CD48ECCB50142D3A001F2E9BA77221F_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline bool Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_inline (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* __this, uint8_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, uint8_t, const RuntimeMethod*))Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_gshared_inline)(__this, ___0_arg, method);
}
inline uint8_t Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_inline (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* __this, uint8_t ___0_arg, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*, uint8_t, const RuntimeMethod*))Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0 (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94* __this, RuntimeObject* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94*, RuntimeObject*, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectArrayIterator_2__ctor_m560D3BD02BF12CFDF7F6D76F842ECD082DE75D55 (WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m560D3BD02BF12CFDF7F6D76F842ECD082DE75D55_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, int32_t, const RuntimeMethod*))Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m29CB86EEB00E7418201DB40C0268CD4E3BE32D60 (WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m29CB86EEB00E7418201DB40C0268CD4E3BE32D60_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m1E7394D019C1A78F2140C6768774D7544461D2E1_inline (Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A*, int32_t, const RuntimeMethod*))Func_2_Invoke_m1E7394D019C1A78F2140C6768774D7544461D2E1_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m523C5F336DD50476B9AD3426CAE1F9E8D7D1057B (WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1*, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m523C5F336DD50476B9AD3426CAE1F9E8D7D1057B_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m7FA46E216E6C6F344CA4F2EFDAED7C1ECB2608C3 (WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7*, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m7FA46E216E6C6F344CA4F2EFDAED7C1ECB2608C3_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_mFA1BD30AA44BC4B0A9A749D71A987E6039436F53_inline (Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_mFA1BD30AA44BC4B0A9A749D71A987E6039436F53_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m4A2FC7E07F117CF402F9073324A0EBEAAF9E74DB (WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m4A2FC7E07F117CF402F9073324A0EBEAAF9E74DB_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120 (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_mB45F63051CA8364CCB5F7C4A34833850E20D4ED6 (WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D* __this, RuntimeObject* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D*, RuntimeObject*, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_mB45F63051CA8364CCB5F7C4A34833850E20D4ED6_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void Iterator_1_Dispose_m698F7131EF72E59DEFEB0AE247767235B5E8A417 (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))Iterator_1_Dispose_m698F7131EF72E59DEFEB0AE247767235B5E8A417_gshared)(__this, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m2C5BE8B06143A7AF0F504ADC78340C2A52D5998A (WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2* __this, RuntimeObject* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2*, RuntimeObject*, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m2C5BE8B06143A7AF0F504ADC78340C2A52D5998A_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100 (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*, const RuntimeMethod*))Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100_gshared)(__this, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m7E0D08EC63A5B4491A365480D6E51597410EEAB2 (WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255* __this, RuntimeObject* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255*, RuntimeObject*, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m7E0D08EC63A5B4491A365480D6E51597410EEAB2_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m9E83795F89417AA4B2582469B6F98CB7745E00E0 (WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620* __this, RuntimeObject* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620*, RuntimeObject*, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m9E83795F89417AA4B2582469B6F98CB7745E00E0_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m43F4BC2C132AC4B645988899B612110DCC80617C (WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D* __this, RuntimeObject* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D*, RuntimeObject*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m43F4BC2C132AC4B645988899B612110DCC80617C_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m7DA759B6F3E1D6F9B708276A6F94F8EFD38CAE48 (WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49* __this, RuntimeObject* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49*, RuntimeObject*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m7DA759B6F3E1D6F9B708276A6F94F8EFD38CAE48_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m32AC442EA447272F3B69D2C7C5053D98D83E73F4 (WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69* __this, RuntimeObject* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69*, RuntimeObject*, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m32AC442EA447272F3B69D2C7C5053D98D83E73F4_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void Iterator_1_Dispose_m0CA28FED9FB032D69DAABD40F9DC1EC210ACB963 (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*, const RuntimeMethod*))Iterator_1_Dispose_m0CA28FED9FB032D69DAABD40F9DC1EC210ACB963_gshared)(__this, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m5A424849BCC09B907E3A1D3895EB748598CF5938 (WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m5A424849BCC09B907E3A1D3895EB748598CF5938_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m46E79626A6692CEE1C96AB3C559F7F7C3ED0977E (WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m46E79626A6692CEE1C96AB3C559F7F7C3ED0977E_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m9409087BF300848C4CF451850DAA35BD37D8CB64 (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF*, RuntimeObject*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m9409087BF300848C4CF451850DAA35BD37D8CB64_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m2405C69F4B379D95DB5A0CD878DE173EF4EFC01B (WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7*, RuntimeObject*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m2405C69F4B379D95DB5A0CD878DE173EF4EFC01B_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_mF602706A028408FFA3F65D18E915E8E10B0B2032 (WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339*, RuntimeObject*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_mF602706A028408FFA3F65D18E915E8E10B0B2032_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384 (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C*, RuntimeObject*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_m6D1F33F590D70945993C2EEC1D210CB3D59253C4 (WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46* __this, List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46*, List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85*, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6D1F33F590D70945993C2EEC1D210CB3D59253C4_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D List_1_GetEnumerator_m741A46459D0412942038A30B1B6505BE0871D4AC (List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D (*) (List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85*, const RuntimeMethod*))List_1_GetEnumerator_m741A46459D0412942038A30B1B6505BE0871D4AC_gshared)(__this, method);
}
inline KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 Enumerator_get_Current_m36BFE58761FCC0A168674CE56A009D3ED6350F00_inline (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 (*) (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D*, const RuntimeMethod*))Enumerator_get_Current_m36BFE58761FCC0A168674CE56A009D3ED6350F00_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mA1460D5C90BE9B70717108DC15580C56DC079EAA (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D*, const RuntimeMethod*))Enumerator_MoveNext_mA1460D5C90BE9B70717108DC15580C56DC079EAA_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mDD443664497FE7FADC96AE103CEF3545186929EE (WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2* __this, List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2*, List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85*, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB*, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDD443664497FE7FADC96AE103CEF3545186929EE_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_mCFADE7EE91440DEBCC5E0A873C75918BFAD0A6D4 (WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9* __this, List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9*, List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB*, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mCFADE7EE91440DEBCC5E0A873C75918BFAD0A6D4_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119 List_1_GetEnumerator_mFCEA46176146CA11E138909045D5A362CD6A34B5 (List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119 (*) (List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB*, const RuntimeMethod*))List_1_GetEnumerator_mFCEA46176146CA11E138909045D5A362CD6A34B5_gshared)(__this, method);
}
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Enumerator_get_Current_mC21B10741E52CD02297D62E713DAB517BD456BF0_inline (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119*, const RuntimeMethod*))Enumerator_get_Current_mC21B10741E52CD02297D62E713DAB517BD456BF0_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m8787F5390BEAE2D65D550B1C471A0A7C8F7541E9 (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119*, const RuntimeMethod*))Enumerator_MoveNext_m8787F5390BEAE2D65D550B1C471A0A7C8F7541E9_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m8BB5DA2CF27EED705845A6D3B453A1F00300900A (WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46* __this, List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46*, List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB*, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB*, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8BB5DA2CF27EED705845A6D3B453A1F00300900A_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_m2945457F47B5A7D917925C80D216695DB552A0D5 (WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4* __this, List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4*, List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2945457F47B5A7D917925C80D216695DB552A0D5_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707 List_1_GetEnumerator_m1E6173E67D663AE2AEAFB557691F367B6FB04E25 (List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707 (*) (List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154*, const RuntimeMethod*))List_1_GetEnumerator_m1E6173E67D663AE2AEAFB557691F367B6FB04E25_gshared)(__this, method);
}
inline ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A Enumerator_get_Current_mE6329055437A55ABC932F03B3D1D0CEA72627349_inline (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A (*) (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707*, const RuntimeMethod*))Enumerator_get_Current_mE6329055437A55ABC932F03B3D1D0CEA72627349_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mE153B84BDC42E3A83453BE873E6F6D4A731CE00A (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707*, const RuntimeMethod*))Enumerator_MoveNext_mE153B84BDC42E3A83453BE873E6F6D4A731CE00A_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m8AD3881012C8ABEDB46BFD4B30F49C5B214E3635 (WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE* __this, List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE*, List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8AD3881012C8ABEDB46BFD4B30F49C5B214E3635_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936*, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1_gshared)(__this, method);
}
inline uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*, const RuntimeMethod*))Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7 (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*, const RuntimeMethod*))Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m8CF44D99456496CDD71D6A92B387ACE3FE0D22A5 (WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8CF44D99456496CDD71D6A92B387ACE3FE0D22A5_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639 (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751 (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared)(__this, method);
}
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m4E5213AEA3F49172211F4EFA18DF14269D3DCEFE (WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m4E5213AEA3F49172211F4EFA18DF14269D3DCEFE_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_m39D8BE211B705F5296D108A8683B4523FB16A1CE (WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m39D8BE211B705F5296D108A8683B4523FB16A1CE_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868 (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0 (int64_t* ___0_location, const RuntimeMethod* method) ;
inline int32_t WorkStealingQueue_get_DangerousCount_mA940114F22FCD5D2BEC0B264321BAC3044A99A52 (WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95*, const RuntimeMethod*))WorkStealingQueue_get_DangerousCount_mA940114F22FCD5D2BEC0B264321BAC3044A99A52_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
inline String_t* ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194*, Il2CppSharedGenericObject*, const RuntimeMethod*))ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
inline void XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method)
{
	((  void (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194*, int32_t, const RuntimeMethod*))XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0_gshared)(__this, ___0_extractKey, ___1_capacity, method);
}
inline bool XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, Il2CppSharedGenericObject* ___0_value, Il2CppSharedGenericObject** ___1_newValue, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject**, const RuntimeMethod*))XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA_gshared)(__this, ___0_value, ___1_newValue, method);
}
inline int32_t XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40 (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40_gshared)(___0_key, ___1_index, ___2_count, method);
}
inline bool XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350_gshared)(__this, ___0_hashCode, ___1_key, ___2_index, ___3_count, ___4_entryIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, String_t*, int32_t, int32_t, Il2CppSharedGenericObject**, const RuntimeMethod*))XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00_gshared)(__this, ___0_key, ___1_index, ___2_count, ___3_value, method);
}
inline XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, const RuntimeMethod* method)
{
	return ((  XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, const RuntimeMethod*))XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereListIterator_1_Clone_mD1DC0907762FD59A96CDD4DDC5DF1C2BB20818A8_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* L_2 = (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mA5874C778A5BE1094329ADAA040BFD8EDD1FBCE0_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_4;
		L_4 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_5 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		Il2CppSharedGenericObject* L_6;
		L_6 = Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		Il2CppSharedGenericObject* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Il2CppSharedGenericObject* L_10 = V_1;
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_11 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		bool L_12;
		L_12 = Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m14EE1FAA82AE63BE42B030236807F4DA4B8D5520_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = ___0_predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_3;
		L_3 = Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* L_4 = (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereListIterator_1_Clone_mAA3ED56493E5FF2F49FE37EB7CDF6C0A957698B5_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_2 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mB5E4EB089AD8CF7156B8972C7FB61739C466ED5E_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	memset(V_1, 0, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_4, SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		return (bool)1;
	}

IL_004e:
	{
		bool L_10;
		L_10 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_10)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mC767815DE2249E70B38D6D172A0C61B028D7A44B_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_4 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mA969D1F08B62BF76FE8F1C4E4AD9EFE40326F44E_gshared (WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831* WhereListIterator_1_Clone_m626531F049094D4A3B096E852619990115F3CF05_gshared (WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719* L_2 = (WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_mA969D1F08B62BF76FE8F1C4E4AD9EFE40326F44E(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m3DE648F737D8E6E27D67A6B088A5D6193E8BB0C4_gshared (WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this)->___current = L_10;
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_11 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_12;
		L_12 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1A8F831559459F891FABBA7BEFB87033DCCF2B36_gshared (WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719* __this, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_2 = ___0_predicate;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_3;
		L_3 = Enumerable_CombinePredicates_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m711AB0DB076468280391F6A8C14CA922E03CF7A7(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719* L_4 = (WhereListIterator_1_t6C3EBDCE0C73928F77D92677FAF73AE41C205719*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_mA969D1F08B62BF76FE8F1C4E4AD9EFE40326F44E(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m11394A44515B0DEB51F103E7D6A168FF8F0E33F9_gshared (WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0* __this, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectArrayIterator_2_Clone_mF7876F0BD82BEA90CA6B125054FB6E36D8BB2384_gshared (WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_0 = __this->___source;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = __this->___predicate;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0* L_3 = (WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m11394A44515B0DEB51F103E7D6A168FF8F0E33F9(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m3A099DC7CF1182545FA76BB0DD5AA5FC0FF65050_gshared (WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_7 = __this->___predicate;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_10 = __this->___selector;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mAF97D579A1B46FBA388DFE4611B23999F5CBA56C_gshared (WhereSelectArrayIterator_2_t5616FCB684A0C0F4972A6C409542FE12FD7969D0* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m741E5DD3C378F8BEBE7B2CC8DCE14226E17E6D56_gshared (WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788* __this, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectArrayIterator_2_Clone_m61C58D797F4111B12DC6F1E6508927CE43B47C5C_gshared (WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_0 = __this->___source;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = __this->___predicate;
		Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788* L_3 = (WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m741E5DD3C378F8BEBE7B2CC8DCE14226E17E6D56(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mA24133BD69F5ADE03779BD592C31939CBF7EFF03_gshared (WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_7 = __this->___predicate;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* L_10 = __this->___selector;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_11 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12;
		L_12 = Func_2_Invoke_m199273DF90D39F9281A028004DA68CF7C53184D6_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m46377E26B3013FB6CCD6E534E5334ACDDC3F3217_gshared (WhereSelectArrayIterator_2_t1AC2030819C8DC6920A852C8D2E3D48BAAAEB788* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m2C4DF03098D82A2864FCFD8600CE33C89CDF6B04_gshared (WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectArrayIterator_2_Clone_m9233080406F212BD33A2EE9BBA217D62C90D5940_gshared (WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = __this->___source;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = __this->___predicate;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059* L_3 = (WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m2C4DF03098D82A2864FCFD8600CE33C89CDF6B04(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m122DEF51243897C304ED1235D967ABFDFF64C2BF_gshared (WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_7 = __this->___predicate;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_10 = __this->___selector;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mEE8A84A383B98969EAEF7799D653363BA708CC45_gshared (WhereSelectArrayIterator_2_t641FEED76EC9A81717723FBC2698398F875F3059* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m22325966138CF40690DD3977CF3516138FCBACE9_gshared (WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectArrayIterator_2_Clone_mF694E51FA395A0202A42FE70D02BA98120DC8315_gshared (WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = __this->___source;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = __this->___predicate;
		Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F* L_3 = (WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m22325966138CF40690DD3977CF3516138FCBACE9(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m935845D70A4093FF76F55BB6764BF505B4F8F08C_gshared (WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_7 = __this->___predicate;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* L_10 = __this->___selector;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_11 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12;
		L_12 = Func_2_Invoke_m937F3F4E6DFC5793AFD912D15538BD0FE200196D_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD4EE6C748D96CB9F7355E62B5D56684F718CE3B9_gshared (WhereSelectArrayIterator_2_t1D4E74FD0E1A2A2D5FEEA749C34CD3A76620418F* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m783368D28105B4D1E2663978058FC7BE8ABD8877_gshared (WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520* __this, ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectArrayIterator_2_Clone_m566274285F730D987E8DA2883F2599CC9B74F10D_gshared (WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_0 = __this->___source;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = __this->___predicate;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520* L_3 = (WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m783368D28105B4D1E2663978058FC7BE8ABD8877(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEADC9E2511F779AB83B3A1D63150CBAD409E57B4_gshared (WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520* __this, const RuntimeMethod* method) 
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_7 = __this->___predicate;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_10 = __this->___selector;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m35B373C18507AF95625E2D35D0E34DF3939E825A_gshared (WhereSelectArrayIterator_2_tE395FFDE87FDCE2C4628945C43F06147B221A520* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m056192E672853576A125F7C911B7D51858DA9779_gshared (WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689* __this, ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectArrayIterator_2_Clone_m3E8BCFF031886941B48C83B0436F0DC2CFD68C3C_gshared (WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_0 = __this->___source;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = __this->___predicate;
		Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689* L_3 = (WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m056192E672853576A125F7C911B7D51858DA9779(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m4DF9C4403AD23AEF046126190F131F73EC06EDD2_gshared (WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689* __this, const RuntimeMethod* method) 
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_7 = __this->___predicate;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* L_10 = __this->___selector;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_11 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12;
		L_12 = Func_2_Invoke_m1BA22D2F48FFC9B4E1F90CB3C0EC126BB62A7867_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m3F786B6BFBE6C42B084909E72A1768A9C030C4F2_gshared (WhereSelectArrayIterator_2_tEEDBCD089FB2543C65DED1612C3321D4DAB6F689* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mC498D4BB6CD48ECCB50142D3A001F2E9BA77221F_gshared (WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* WhereSelectArrayIterator_2_Clone_mAD81F3C4F5B10D834DD6C6CE7FBEB08CD0AED6E7_gshared (WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___source;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = __this->___predicate;
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A* L_3 = (WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_mC498D4BB6CD48ECCB50142D3A001F2E9BA77221F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m5427922C9360F5F30C20A55DFF549101DAC84FE6_gshared (WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_7 = __this->___predicate;
		uint8_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_10 = __this->___selector;
		uint8_t L_11 = V_0;
		NullCheck(L_10);
		uint8_t L_12;
		L_12 = Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m1F957027F9603927B1375000356080A86F0A0200_gshared (WhereSelectArrayIterator_2_t437842A3685FBF4DD8A59C14429FA3DC090E609A* __this, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94* L_1 = (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m560D3BD02BF12CFDF7F6D76F842ECD082DE75D55_gshared (WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectArrayIterator_2_Clone_mAF281873DD15DF1B102A72FDAC1123F5BCAA7900_gshared (WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16* L_3 = (WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m560D3BD02BF12CFDF7F6D76F842ECD082DE75D55(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m2602A440EF0697670020F295BB3C6A553C1D66A1_gshared (WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_10 = __this->___selector;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mDD765B4ABC20563A15A759DE18394C39F9524DB1_gshared (WhereSelectArrayIterator_2_tB1EC8D9D0F9A04611CB368289E3F023AE346FF16* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m29CB86EEB00E7418201DB40C0268CD4E3BE32D60_gshared (WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectArrayIterator_2_Clone_m5D1FF92205D2ACF9D62A4A42658FC94D1F3058C8_gshared (WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7* L_3 = (WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m29CB86EEB00E7418201DB40C0268CD4E3BE32D60(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mB3089082BD10BDB6F41726398C708FAC358BB5E3_gshared (WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* L_10 = __this->___selector;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12;
		L_12 = Func_2_Invoke_m1E7394D019C1A78F2140C6768774D7544461D2E1_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m7EA1C06F27EC9FEF207889B74C9960E16E798751_gshared (WhereSelectArrayIterator_2_t62B4A2F293893EB111D0C762A539386D39762DB7* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m523C5F336DD50476B9AD3426CAE1F9E8D7D1057B_gshared (WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectArrayIterator_2_Clone_m56E77AD3714BDC6411483E281146CA94E10AD3AC_gshared (WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1* L_3 = (WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m523C5F336DD50476B9AD3426CAE1F9E8D7D1057B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mD5D406131DC370717DD8494778FA4BA69A3D4FFE_gshared (WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1* __this, const RuntimeMethod* method) 
{
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_10 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m1264FBA6561B554CD58FF543A3C56A8041BD8D02_gshared (WhereSelectArrayIterator_2_t1B6D2DB5C88350671B21EFCEDFDEE2D4D6B018E1* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m7FA46E216E6C6F344CA4F2EFDAED7C1ECB2608C3_gshared (WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectArrayIterator_2_Clone_m3467557D0FA634488D739EEAD4BFBF333EA857D6_gshared (WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7* L_3 = (WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m7FA46E216E6C6F344CA4F2EFDAED7C1ECB2608C3(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m4BCA7A2CBEF1084B57B7065883CE0A9DD9DE09C0_gshared (WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7* __this, const RuntimeMethod* method) 
{
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* L_10 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_11 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12;
		L_12 = Func_2_Invoke_mFA1BD30AA44BC4B0A9A749D71A987E6039436F53_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mDC960E8E8D846BDC150427E7B570FA8F37E2884A_gshared (WhereSelectArrayIterator_2_tFC46B82974F3EC3860FA22FD22178C86245A64D7* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m4A2FC7E07F117CF402F9073324A0EBEAAF9E74DB_gshared (WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectArrayIterator_2_Clone_m4ED7D55C86B08DFC6BB46E240BF12B4E6B1E1626_gshared (WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674* __this, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674* L_3 = (WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m4A2FC7E07F117CF402F9073324A0EBEAAF9E74DB(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m02636E795E59BFC57730242255C0863C63EB2364_gshared (WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		Il2CppSharedGenericObject* L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_10 = __this->___selector;
		Il2CppSharedGenericObject* L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m6567DBF82C1925EF370AF4E3F8C9533F4CB0C815_gshared (WhereSelectArrayIterator_2_tA7233C570E3D267B92401E6907D07FB7F622D674* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectArrayIterator_2_Clone_m129509AA57628EC2BAACE1BAD0FE298C284E14FA_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* L_3 = (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m2D19DEC399673E08D0C217881BF0416EEE5356E9_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		Il2CppSharedGenericObject* L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_10 = __this->___selector;
		Il2CppSharedGenericObject* L_11 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12;
		L_12 = Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mFB641A55162A05D1965399C37BE6A3C15EA3992F_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectArrayIterator_2_Clone_mFBF81AE0E2B6F7A7A79FC98398E7A6AC0FD330E9_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* L_3 = (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEF7E8E7B117D6D1147C53CAE838836974171392C_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	memset(V_0, 0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD81DB59B1D07BC8DDB099A652B22BA9C1538D7A3_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mB45F63051CA8364CCB5F7C4A34833850E20D4ED6_gshared (WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D* __this, RuntimeObject* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectEnumerableIterator_2_Clone_m66CF72A87732C925EBE3409E232C614972A82A3E_gshared (WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = __this->___predicate;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D* L_3 = (WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_mB45F63051CA8364CCB5F7C4A34833850E20D4ED6(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mF4FC26B2EF1E0C91A057024F8CB1C6B35338CFE7_gshared (WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		Iterator_1_Dispose_m698F7131EF72E59DEFEB0AE247767235B5E8A417((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m64C26B7B4A584B386B7022B32EB3A6A821AB211E_gshared (WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_8 = __this->___predicate;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_11 = __this->___selector;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m48EF6B608386DA7686503E0AE69E7C9C32278BCF_gshared (WhereSelectEnumerableIterator_2_tFA99F5D5A642AA581BC5CDFB510CD397ECA9610D* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2C5BE8B06143A7AF0F504ADC78340C2A52D5998A_gshared (WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2* __this, RuntimeObject* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectEnumerableIterator_2_Clone_m22B4EB977BA18BAA612E462F49DF9DF9419131C2_gshared (WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = __this->___predicate;
		Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2* L_3 = (WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m2C5BE8B06143A7AF0F504ADC78340C2A52D5998A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m68D43665C9B72B47001F20127683EB09CDC208F1_gshared (WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mEA684BCCD796E2A25F7CE99F1BA9E4F3B52F3922_gshared (WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_8 = __this->___predicate;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* L_11 = __this->___selector;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m199273DF90D39F9281A028004DA68CF7C53184D6_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m4D37A6DAB7B03B7D9A4AD1CB9CA6E415D135D2AD_gshared (WhereSelectEnumerableIterator_2_tC4A7B055CFE9215093CB998D8F6BC98497C3BEB2* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m7E0D08EC63A5B4491A365480D6E51597410EEAB2_gshared (WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255* __this, RuntimeObject* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectEnumerableIterator_2_Clone_m10F2FF104021CE483553A5345EA14AB27266EBA3_gshared (WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = __this->___predicate;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255* L_3 = (WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m7E0D08EC63A5B4491A365480D6E51597410EEAB2(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m7C5151373370F74AE729A600F145595EADB675AF_gshared (WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		Iterator_1_Dispose_m698F7131EF72E59DEFEB0AE247767235B5E8A417((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mBBADF3E3150C2741A3A0D9E4803A3F234C70BE8E_gshared (WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_8 = __this->___predicate;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_11 = __this->___selector;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mED168C1C16D40F58C5707387C5F0D2C92C11D6DC_gshared (WhereSelectEnumerableIterator_2_t28335D446B1EB127A7C7E78044DC575191989255* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9E83795F89417AA4B2582469B6F98CB7745E00E0_gshared (WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620* __this, RuntimeObject* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectEnumerableIterator_2_Clone_mC2946040D9263FBA97C8E73A4F9B47375B08F6B4_gshared (WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = __this->___predicate;
		Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620* L_3 = (WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m9E83795F89417AA4B2582469B6F98CB7745E00E0(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mB6D638A985D552A354E14A7A3B5C6DCE2B86D473_gshared (WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m925B0AD52F16D59DF6802339197AAD848610196C_gshared (WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_8 = __this->___predicate;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* L_11 = __this->___selector;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m937F3F4E6DFC5793AFD912D15538BD0FE200196D_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m94C18AE5A1E1C61A91738328D8A4EF82C7DF5054_gshared (WhereSelectEnumerableIterator_2_t9228911AAA960DCB117B6C34060FFBA8D0DA2620* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m43F4BC2C132AC4B645988899B612110DCC80617C_gshared (WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D* __this, RuntimeObject* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectEnumerableIterator_2_Clone_mD3A3E7E69FFA7918543BD36AAF5286FF54F0FC08_gshared (WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = __this->___predicate;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D* L_3 = (WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m43F4BC2C132AC4B645988899B612110DCC80617C(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m441E587A0C9E75B5B3B9A7F55FA7FBDA4911402D_gshared (WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		Iterator_1_Dispose_m698F7131EF72E59DEFEB0AE247767235B5E8A417((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m7C23945D65BBBB43930AF488400D0D4A8AC14E4F_gshared (WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_6;
		L_6 = InterfaceFuncInvoker0< ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_8 = __this->___predicate;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_11 = __this->___selector;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mA48248B0789206FDE0DE114CB51330801203E314_gshared (WhereSelectEnumerableIterator_2_tCCEF461BD166644C4267D442E3EA376A9EAEB90D* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m7DA759B6F3E1D6F9B708276A6F94F8EFD38CAE48_gshared (WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49* __this, RuntimeObject* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectEnumerableIterator_2_Clone_m42FC9A2E06DFB3F31CE84AF0C6DA42BC66B5D23E_gshared (WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = __this->___predicate;
		Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49* L_3 = (WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m7DA759B6F3E1D6F9B708276A6F94F8EFD38CAE48(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m857A4825C864E93488E8C2AA2746901B31D2696E_gshared (WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mA3F4A4994EB63B07075F1F87F41FF5B7F6C3B32C_gshared (WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_6;
		L_6 = InterfaceFuncInvoker0< ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_8 = __this->___predicate;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* L_11 = __this->___selector;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m1BA22D2F48FFC9B4E1F90CB3C0EC126BB62A7867_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m97C6938DC2F20DBC831FFE3D0F805DC65EFBD9B1_gshared (WhereSelectEnumerableIterator_2_t8C0C11F420E5A6DA849B16675856F35DFFC0BC49* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m32AC442EA447272F3B69D2C7C5053D98D83E73F4_gshared (WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69* __this, RuntimeObject* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* WhereSelectEnumerableIterator_2_Clone_mB9ABF701E95798AA0AF02AAC059E17FE26ED6327_gshared (WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = __this->___predicate;
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69* L_3 = (WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m32AC442EA447272F3B69D2C7C5053D98D83E73F4(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m9468DC4AC70C5F45CE8760EE00CA91ACD478915F_gshared (WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
		Iterator_1_Dispose_m0CA28FED9FB032D69DAABD40F9DC1EC210ACB963((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mAD2AE1A09699FA8AB81B01D9E39B4095A9CE83B7_gshared (WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = InterfaceFuncInvoker0< uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_8 = __this->___predicate;
		uint8_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_11 = __this->___selector;
		uint8_t L_12 = V_1;
		NullCheck(L_11);
		uint8_t L_13;
		L_13 = Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m1229BF899F2447E599CC9287FA66DFC157D54B84_gshared (WhereSelectEnumerableIterator_2_tC059A844D317BDC92C627B28032386200B135C69* __this, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94* L_1 = (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m5A424849BCC09B907E3A1D3895EB748598CF5938_gshared (WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectEnumerableIterator_2_Clone_mA37E0E7E9F7904B26F43D7B8A2C82337C60BD377_gshared (WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0* L_3 = (WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m5A424849BCC09B907E3A1D3895EB748598CF5938(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mEF71ECE42660D1868C0BEAABE1AB3D0F38013494_gshared (WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		Iterator_1_Dispose_m698F7131EF72E59DEFEB0AE247767235B5E8A417((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m7E238DBDC70AA2CE46F92F9B7FAFB6E087332143_gshared (WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mF201B9259E3BCB6BC88B3D58D5F426A23E55F9D0_gshared (WhereSelectEnumerableIterator_2_t4B9A7BE8A877E0B8C7AA11B1306232F52C22C1A0* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m46E79626A6692CEE1C96AB3C559F7F7C3ED0977E_gshared (WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectEnumerableIterator_2_Clone_mEFF3D38B3FEE7A2DE2399EEB6E9A3F758AA6B91B_gshared (WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349* L_3 = (WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m46E79626A6692CEE1C96AB3C559F7F7C3ED0977E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m90A0D1D4E2C3B2E8A1DBEF1BFF28D783A71D4D80_gshared (WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m0CD5BBD15049D7E9CDE48B17536A377F2ECAE11E_gshared (WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m1E7394D019C1A78F2140C6768774D7544461D2E1_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mF9A21087EE93AFF3820639A8F70ACF8B27BCFF9F_gshared (WhereSelectEnumerableIterator_2_t177F98B13F0B91A987C23E6BF374F93C75AA3349* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9409087BF300848C4CF451850DAA35BD37D8CB64_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectEnumerableIterator_2_Clone_mF73FAC5DDA6706DA4A7648CA411BC5CA9A65B71D_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* L_3 = (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m9409087BF300848C4CF451850DAA35BD37D8CB64(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m5B906ED3507FC458FBB384C68D660BDB968CCEFC_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		Iterator_1_Dispose_m698F7131EF72E59DEFEB0AE247767235B5E8A417((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m6C6C464F9772E042DFD80F05ABDED4B3094F120B_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = InterfaceFuncInvoker0< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mE3661D87CE1634EF830D396740BFE8BDA25CEF0D_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2405C69F4B379D95DB5A0CD878DE173EF4EFC01B_gshared (WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectEnumerableIterator_2_Clone_m58B2298AA013CDAAC8D4B31F583BD70B3488A67D_gshared (WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7* L_3 = (WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m2405C69F4B379D95DB5A0CD878DE173EF4EFC01B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m13A888DAF2892215F23E65D37A73A912B5975AE1_gshared (WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m4889020D4D7790A7592BEAE08468A92C0B581EFA_gshared (WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = InterfaceFuncInvoker0< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_mFA1BD30AA44BC4B0A9A749D71A987E6039436F53_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m1D3DF3A3BD6C18C33E856E648DA220AC4C596B52_gshared (WhereSelectEnumerableIterator_2_t1D5E4F81F10AFCC1C7EFDA831FD664F7FDC9A0D7* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mF602706A028408FFA3F65D18E915E8E10B0B2032_gshared (WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectEnumerableIterator_2_Clone_mAB7EC88B0915E4B02BF90D969455143464D21C7B_gshared (WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339* L_3 = (WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_mF602706A028408FFA3F65D18E915E8E10B0B2032(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mC559BBC1AA516E875F70070D44B3569971323862_gshared (WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		Iterator_1_Dispose_m698F7131EF72E59DEFEB0AE247767235B5E8A417((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m4D5ACE49B7B2C6BDBB4815E1530ADFEFDB94B4DF_gshared (WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6;
		L_6 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_8 = __this->___predicate;
		Il2CppSharedGenericObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_11 = __this->___selector;
		Il2CppSharedGenericObject* L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mE6C6EBCEBDDA46A24A9CC6C9DF70BB2E95724039_gshared (WhereSelectEnumerableIterator_2_t434F5928574A800F03B431582FFAD38DB0B23339* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectEnumerableIterator_2_Clone_m820E73DBEE027CB08633E586A635098AAD4B0243_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* L_3 = (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m811F2ABD9BC8A5CEEA64C0123A2887B865BF5823_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m1504811E695B69625751EA73048935D19FA8114E_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6;
		L_6 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_8 = __this->___predicate;
		Il2CppSharedGenericObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_11 = __this->___selector;
		Il2CppSharedGenericObject* L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mC9CB40941D1E86FB75CBB2F3A1101759C942F24F_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectEnumerableIterator_2_Clone_mD773B8B24D1459B11BA4462A6DD68865514ADC9E_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* L_3 = (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m640FAC111BC786414B40480BB03E4F84B2FFB179_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB384EFAF6366166F28EDFDBA272EEC1089E1A115_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_12 = L_6;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	memset(V_1, 0, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_11);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_13, SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB8ACBBFA48460E67B18647EF16E6EE4D0BE08679_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D1F33F590D70945993C2EEC1D210CB3D59253C4_gshared (WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46* __this, List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m197273788F60C1EEAEE1BD6CADBB90FDAA1E1D63_gshared (WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46* __this, const RuntimeMethod* method) 
{
	{
		List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* L_0 = __this->___source;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = __this->___predicate;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_2 = __this->___selector;
		WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46* L_3 = (WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6D1F33F590D70945993C2EEC1D210CB3D59253C4(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE880D2019EA52BC764562315009C721D7ACBFAC_gshared (WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D L_4;
		L_4 = List_1_GetEnumerator_m741A46459D0412942038A30B1B6505BE0871D4AC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___key), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D* L_5 = (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D*)(&__this->___enumerator);
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_6;
		L_6 = Enumerator_get_Current_m36BFE58761FCC0A168674CE56A009D3ED6350F00_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_8 = __this->___predicate;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_11 = __this->___selector;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D* L_14 = (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mA1460D5C90BE9B70717108DC15580C56DC079EAA(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m679731FD0FED87EB77D165058815CE87413BC825_gshared (WhereSelectListIterator_2_tC48D48F4E0FFDAC621EDCFA5BEAF323266B29A46* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDD443664497FE7FADC96AE103CEF3545186929EE_gshared (WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2* __this, List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* ___0_source, Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* ___1_predicate, Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_m5C731F46861C4C8575C86848EC7FFA8F850888BF_gshared (WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2* __this, const RuntimeMethod* method) 
{
	{
		List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* L_0 = __this->___source;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_1 = __this->___predicate;
		Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* L_2 = __this->___selector;
		WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2* L_3 = (WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mDD443664497FE7FADC96AE103CEF3545186929EE(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA568201255B133EB02A26EECAD382573E07FBA95_gshared (WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tAD07D03717C7AA1A007702BFE3864E1A3B407F85* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D L_4;
		L_4 = List_1_GetEnumerator_m741A46459D0412942038A30B1B6505BE0871D4AC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___key), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D* L_5 = (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D*)(&__this->___enumerator);
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_6;
		L_6 = Enumerator_get_Current_m36BFE58761FCC0A168674CE56A009D3ED6350F00_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* L_8 = __this->___predicate;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* L_11 = __this->___selector;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m199273DF90D39F9281A028004DA68CF7C53184D6_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D* L_14 = (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mA1460D5C90BE9B70717108DC15580C56DC079EAA(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC7B62A3A1AEF9D78C3B333392190C99FC9D5D8BC_gshared (WhereSelectListIterator_2_t1031430437100B9B64461AFD9CAE16D618D38FB2* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCFADE7EE91440DEBCC5E0A873C75918BFAD0A6D4_gshared (WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9* __this, List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m56230820568D4C4EEE5010D0DB14C469E8A7075E_gshared (WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* L_0 = __this->___source;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = __this->___predicate;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_2 = __this->___selector;
		WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9* L_3 = (WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mCFADE7EE91440DEBCC5E0A873C75918BFAD0A6D4(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB440F4ABBB1DC52701CC9E48930B9507D3120D2_gshared (WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119 L_4;
		L_4 = List_1_GetEnumerator_mFCEA46176146CA11E138909045D5A362CD6A34B5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___value), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119* L_5 = (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119*)(&__this->___enumerator);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_6;
		L_6 = Enumerator_get_Current_mC21B10741E52CD02297D62E713DAB517BD456BF0_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_8 = __this->___predicate;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_11 = __this->___selector;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119* L_14 = (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8787F5390BEAE2D65D550B1C471A0A7C8F7541E9(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m96B31C5B89F4EBD8776B330FB3BA48D15E49D248_gshared (WhereSelectListIterator_2_t8C01A8A38C7FC4A62E1E1DA62F419C1EA92A3FD9* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8BB5DA2CF27EED705845A6D3B453A1F00300900A_gshared (WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46* __this, List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* ___0_source, Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* ___1_predicate, Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_m7D82110AADB2AF03299E0F7BF08776B74D22C2EC_gshared (WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* L_0 = __this->___source;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_1 = __this->___predicate;
		Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* L_2 = __this->___selector;
		WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46* L_3 = (WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m8BB5DA2CF27EED705845A6D3B453A1F00300900A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1E0660D15F0EC3AD783B97FFFC8DAE8B4B7370F5_gshared (WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB43312EFB3560D121D0484B9AD48C5793385F7FB* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119 L_4;
		L_4 = List_1_GetEnumerator_mFCEA46176146CA11E138909045D5A362CD6A34B5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___value), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119* L_5 = (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119*)(&__this->___enumerator);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_6;
		L_6 = Enumerator_get_Current_mC21B10741E52CD02297D62E713DAB517BD456BF0_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* L_8 = __this->___predicate;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* L_11 = __this->___selector;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m937F3F4E6DFC5793AFD912D15538BD0FE200196D_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119* L_14 = (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8787F5390BEAE2D65D550B1C471A0A7C8F7541E9(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mEFCB76806E851D69B01A4200F766F44D2C888211_gshared (WhereSelectListIterator_2_tA6193F6F96ABFB93F8005024EB2F073F3988EF46* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2945457F47B5A7D917925C80D216695DB552A0D5_gshared (WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4* __this, List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m3162C39BCA659869E7BA10AF2307EECFBCD142C8_gshared (WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* L_0 = __this->___source;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = __this->___predicate;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_2 = __this->___selector;
		WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4* L_3 = (WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m2945457F47B5A7D917925C80D216695DB552A0D5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB999A83289AC06E9C93C7F9330B860DCCC1B15D6_gshared (WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707 L_4;
		L_4 = List_1_GetEnumerator_m1E6173E67D663AE2AEAFB557691F367B6FB04E25(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Item1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Item2), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707* L_5 = (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707*)(&__this->___enumerator);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_6;
		L_6 = Enumerator_get_Current_mE6329055437A55ABC932F03B3D1D0CEA72627349_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_8 = __this->___predicate;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_11 = __this->___selector;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707* L_14 = (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE153B84BDC42E3A83453BE873E6F6D4A731CE00A(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m251D60CAD16C48EE4A6F30CF18156AC03005115B_gshared (WhereSelectListIterator_2_t46D27315B3C1071707600393FC45E87F20BF68B4* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8AD3881012C8ABEDB46BFD4B30F49C5B214E3635_gshared (WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE* __this, List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_m1A75E08BA20B6B096E2B940D1ECA431E7D77DB6F_gshared (WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE* __this, const RuntimeMethod* method) 
{
	{
		List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* L_0 = __this->___source;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_1 = __this->___predicate;
		Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* L_2 = __this->___selector;
		WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE* L_3 = (WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m8AD3881012C8ABEDB46BFD4B30F49C5B214E3635(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m444D9572C4B85E81B5E703DC2F329952963D3072_gshared (WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707 L_4;
		L_4 = List_1_GetEnumerator_m1E6173E67D663AE2AEAFB557691F367B6FB04E25(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Item1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Item2), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707* L_5 = (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707*)(&__this->___enumerator);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_6;
		L_6 = Enumerator_get_Current_mE6329055437A55ABC932F03B3D1D0CEA72627349_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_8 = __this->___predicate;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* L_11 = __this->___selector;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m1BA22D2F48FFC9B4E1F90CB3C0EC126BB62A7867_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707* L_14 = (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE153B84BDC42E3A83453BE873E6F6D4A731CE00A(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m18FF65E3D57F38C274F6FEA49968435A5D3C83F7_gshared (WhereSelectListIterator_2_t98FFCE0A60798780F2940D4861DE11B8476955BE* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2D0598FFAFCF279F57972865E8773D5FE8EF8261((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* WhereSelectListIterator_2_Clone_m82F7E6B50E0300CC5A4E05623ACE0BFFADA71572_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = __this->___source;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = __this->___predicate;
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = __this->___selector;
		WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* L_3 = (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE2F935A0A9843B35F25DA7D8CE6C9548A06E08E6_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA L_4;
		L_4 = List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* L_5 = (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*)(&__this->___enumerator);
		uint8_t L_6;
		L_6 = Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_8 = __this->___predicate;
		uint8_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_11 = __this->___selector;
		uint8_t L_12 = V_1;
		NullCheck(L_11);
		uint8_t L_13;
		L_13 = Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* L_14 = (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3EE5C6996B41DAD65C62B3B2716B00031DF2682C_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94* L_1 = (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mA8C37C7B3AEE799A94626937614604F677F084F0(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_mEC0FD6BA0A8779337053CF3CB98EBC43432DB91C_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = __this->___selector;
		WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* L_3 = (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DD045E59F76B9A18DF2C650093B21AAB9AB7285_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAE917FDB31CC9CFAFF8F10B8C092034908387DB3_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8CF44D99456496CDD71D6A92B387ACE3FE0D22A5_gshared (WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_m1DBDE97B621F6B3FEC1576F6DAB8EA10F4AD053F_gshared (WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* L_2 = __this->___selector;
		WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338* L_3 = (WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m8CF44D99456496CDD71D6A92B387ACE3FE0D22A5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE44EE016D61AE9217BFDA62F9A22D768318B9C0C_gshared (WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m1E7394D019C1A78F2140C6768774D7544461D2E1_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBE3E41C73D58ADB89A7AEA623CA4C88535B97F48_gshared (WhereSelectListIterator_2_t409CF849900955B2DC67C4207F5D68613076F338* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m1BD042108A23C683E5C01A3D2B8EFFA6D3516AB5_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = __this->___selector;
		WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* L_3 = (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m57DA93BD1760AA63C3AAE74D529A1ABE038705E6_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_Value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___tempData), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF9B99EFA637F1E3276411928BC2FFF4F6DE34D34_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4E5213AEA3F49172211F4EFA18DF14269D3DCEFE_gshared (WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_m3D551BAA9B503C37E69101F9E6762C6CDEAE28A9_gshared (WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* L_2 = __this->___selector;
		WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1* L_3 = (WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m4E5213AEA3F49172211F4EFA18DF14269D3DCEFE(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m76BCFD689F5A1DEFB96F737A185862A2A8DAEBEC_gshared (WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_Value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___tempData), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_mFA1BD30AA44BC4B0A9A749D71A987E6039436F53_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m5690D7E5591C6EACE4C1565766169D29108A381B_gshared (WhereSelectListIterator_2_t875258CFE39A44D5FA3789786E8AED4CE77BC5A1* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m39D8BE211B705F5296D108A8683B4523FB16A1CE_gshared (WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_mA7BB214811C37BB593499617FEEAF557CB7C7949_gshared (WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = __this->___selector;
		WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673* L_3 = (WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m39D8BE211B705F5296D108A8683B4523FB16A1CE(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m28A53A39A6A5546822690231E08DB0EC185A50CF_gshared (WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_4;
		L_4 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_5 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		Il2CppSharedGenericObject* L_6;
		L_6 = Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_8 = __this->___predicate;
		Il2CppSharedGenericObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_11 = __this->___selector;
		Il2CppSharedGenericObject* L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_14 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m92349BEC4C28AA1186BCA08DD0A80769AC7E5EBA_gshared (WhereSelectListIterator_2_tFE5F272E45ED9AA6C5619B8BF8E406A358857673* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_mA526287F988AD67F1AFD8DDA6ED50D6223EB1F01_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = __this->___selector;
		WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* L_3 = (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m330FDD6ED7F4BEE49DCBC8A651E09A6A353C395E_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_4;
		L_4 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_5 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		Il2CppSharedGenericObject* L_6;
		L_6 = Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_8 = __this->___predicate;
		Il2CppSharedGenericObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_11 = __this->___selector;
		Il2CppSharedGenericObject* L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_14 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m188F9A25121C29C31230434548BA57C395C1C9DE_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_mD46BD4F47FABA43314688B7A2012171C43F48086_gshared (WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* __this, WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* ___0_nextQueue, const RuntimeMethod* method) 
{
	{
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_0 = (ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30*)(ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		__this->____mask = ((int32_t)31);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->____ownerThreadId = L_1;
		WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* L_2 = ___0_nextQueue;
		__this->____nextQueue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextQueue), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_mF346039E14480E98E040E44B74C4A24DF74B92A6_gshared (WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_item, int64_t* ___1_emptyToNonEmptyListTransitionCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* V_6 = NULL;
	int32_t V_7 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0203:
			{
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp = 0;
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0215;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0215:
				{
					return;
				}
			}
		});
		try
		{
			{
				int32_t* L_1 = (int32_t*)(&__this->____currentOp);
				il2cpp_codegen_memory_barrier();
				int32_t L_2;
				L_2 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_1, 1, NULL);
				int32_t L_3 = __this->____tailIndex;
				il2cpp_codegen_memory_barrier();
				V_1 = L_3;
				int32_t L_4 = V_1;
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				V_3 = __this;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0072_1:
					{
						{
							bool L_5 = V_4;
							if (!L_5)
							{
								goto IL_007c_1;
							}
						}
						{
							WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* L_6 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_6, NULL);
						}

IL_007c_1:
						{
							return;
						}
					}
				});
				try
				{
					WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* L_7 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_7, (&V_4), NULL);
					int32_t L_8 = __this->____headIndex;
					il2cpp_codegen_memory_barrier();
					int32_t L_9 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					il2cpp_codegen_memory_barrier();
					__this->____headIndex = ((int32_t)(L_8&L_9));
					int32_t L_10 = V_1;
					int32_t L_11 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					int32_t L_12 = ((int32_t)(L_10&L_11));
					V_1 = L_12;
					il2cpp_codegen_memory_barrier();
					__this->____tailIndex = L_12;
					int32_t* L_13 = (int32_t*)(&__this->____currentOp);
					il2cpp_codegen_memory_barrier();
					int32_t L_14;
					L_14 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_13, 1, NULL);
					goto IL_007d_1;
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007d_1:
			{
				int32_t L_15 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_15;
				bool L_16 = __this->____frozen;
				if (L_16)
				{
					goto IL_00cc_1;
				}
			}
			{
				int32_t L_17 = V_2;
				int32_t L_18 = V_1;
				int32_t L_19 = V_1;
				int32_t L_20 = V_2;
				int32_t L_21 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if (!((int32_t)(((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))? 1 : 0)&((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0))))
				{
					goto IL_00cc_1;
				}
			}
			{
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_22 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_23 = V_1;
				int32_t L_24 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_25 = ___0_item;
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24))), (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A)L_25);
				int32_t L_26 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_01f3_1;
			}

IL_00cc_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_0), NULL);
				int32_t L_27 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_27;
				int32_t L_28 = V_1;
				int32_t L_29 = V_2;
				V_5 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
				int32_t L_30 = V_5;
				int32_t L_31 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_01ab_1;
				}
			}
			{
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_32 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_32);
				int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_34 = (ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30*)(ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), (uint32_t)((int32_t)(L_33<<1)));
				V_6 = L_34;
				int32_t L_35 = V_2;
				int32_t L_36 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				V_7 = ((int32_t)(L_35&L_36));
				int32_t L_37 = V_7;
				if (L_37)
				{
					goto IL_013a_1;
				}
			}
			{
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_38 = __this->____array;
				il2cpp_codegen_memory_barrier();
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_39 = V_6;
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_40 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_40);
				int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_38, 0, (RuntimeArray*)L_39, 0, L_41, NULL);
				goto IL_0178_1;
			}

IL_013a_1:
			{
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_42 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_43 = V_7;
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_44 = V_6;
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_45 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_45);
				int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
				int32_t L_47 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_42, L_43, (RuntimeArray*)L_44, 0, ((int32_t)il2cpp_codegen_subtract(L_46, L_47)), NULL);
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_48 = __this->____array;
				il2cpp_codegen_memory_barrier();
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_49 = V_6;
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_50 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_50);
				int32_t L_51 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_50)->max_length),NULL));
				int32_t L_52 = V_7;
				int32_t L_53 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_48, 0, (RuntimeArray*)L_49, ((int32_t)il2cpp_codegen_subtract(L_51, L_52)), L_53, NULL);
			}

IL_0178_1:
			{
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_54 = V_6;
				il2cpp_codegen_memory_barrier();
				__this->____array = L_54;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_54);
				il2cpp_codegen_memory_barrier();
				__this->____headIndex = 0;
				int32_t L_55 = V_5;
				int32_t L_56 = L_55;
				V_1 = L_56;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = L_56;
				int32_t L_57 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memory_barrier();
				__this->____mask = ((int32_t)(((int32_t)(L_57<<1))|1));
			}

IL_01ab_1:
			{
				ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_58 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_59 = V_1;
				int32_t L_60 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_61 = ___0_item;
				NullCheck(L_58);
				(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_59&L_60))), (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A)L_61);
				int32_t L_62 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_62, 1));
				int32_t L_63 = V_5;
				if (L_63)
				{
					goto IL_01d9_1;
				}
			}
			{
				int64_t* L_64 = ___1_emptyToNonEmptyListTransitionCount;
				int64_t L_65;
				L_65 = Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0(L_64, NULL);
			}

IL_01d9_1:
			{
				int32_t L_66 = __this->____addTakeCount;
				int32_t L_67 = __this->____stealCount;
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_subtract(L_66, L_67));
				__this->____stealCount = 0;
			}

IL_01f3_1:
			{
				int32_t L_68 = __this->____addTakeCount;
				if (((int64_t)L_68 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_68 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_add(L_68, 1));
				goto IL_0216;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0216:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_DangerousCopyTo_m3BF55C037C4EE6CA9950A4CA9EE0C1B338229220_gshared (WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* __this, ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____headIndex;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1;
		L_1 = WorkStealingQueue_get_DangerousCount_mA940114F22FCD5D2BEC0B264321BAC3044A99A52(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_1 = L_1;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		goto IL_003e;
	}

IL_0018:
	{
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_4 = ___0_array;
		int32_t L_5 = V_2;
		ValueTuple_2U5BU5D_t14B49D3FEF67CBC376374065CA30D764F833ED30* L_6 = __this->____array;
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = __this->____mask;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)(L_8&L_9));
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___1_arrayIndex;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_mA940114F22FCD5D2BEC0B264321BAC3044A99A52_gshared (WorkStealingQueue_t3811EC2500DC24C3D2C5A3257C66280C523CDB95* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____addTakeCount;
		int32_t L_1 = __this->____stealCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_mE0C0D6BEE2FB579DFAB968AEDB4BF1373A811EF1_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* ___0_nextQueue, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		__this->____mask = ((int32_t)31);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->____ownerThreadId = L_1;
		WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* L_2 = ___0_nextQueue;
		__this->____nextQueue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextQueue), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_m3DD3B524B0B5334F07A5826E44963BBA0FD6ABAD_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, Il2CppFullySharedGenericAny ___0_item, int64_t* ___1_emptyToNonEmptyListTransitionCount, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
	const Il2CppFullySharedGenericAny L_61 = L_25;
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_6 = NULL;
	int32_t V_7 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0203:
			{
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp = 0;
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0215;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0215:
				{
					return;
				}
			}
		});
		try
		{
			{
				int32_t* L_1 = (int32_t*)(&__this->____currentOp);
				il2cpp_codegen_memory_barrier();
				int32_t L_2;
				L_2 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_1, 1, NULL);
				int32_t L_3 = __this->____tailIndex;
				il2cpp_codegen_memory_barrier();
				V_1 = L_3;
				int32_t L_4 = V_1;
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				V_3 = __this;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0072_1:
					{
						{
							bool L_5 = V_4;
							if (!L_5)
							{
								goto IL_007c_1;
							}
						}
						{
							WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* L_6 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_6, NULL);
						}

IL_007c_1:
						{
							return;
						}
					}
				});
				try
				{
					WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* L_7 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_7, (&V_4), NULL);
					int32_t L_8 = __this->____headIndex;
					il2cpp_codegen_memory_barrier();
					int32_t L_9 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					il2cpp_codegen_memory_barrier();
					__this->____headIndex = ((int32_t)(L_8&L_9));
					int32_t L_10 = V_1;
					int32_t L_11 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					int32_t L_12 = ((int32_t)(L_10&L_11));
					V_1 = L_12;
					il2cpp_codegen_memory_barrier();
					__this->____tailIndex = L_12;
					int32_t* L_13 = (int32_t*)(&__this->____currentOp);
					il2cpp_codegen_memory_barrier();
					int32_t L_14;
					L_14 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_13, 1, NULL);
					goto IL_007d_1;
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007d_1:
			{
				int32_t L_15 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_15;
				bool L_16 = __this->____frozen;
				if (L_16)
				{
					goto IL_00cc_1;
				}
			}
			{
				int32_t L_17 = V_2;
				int32_t L_18 = V_1;
				int32_t L_19 = V_1;
				int32_t L_20 = V_2;
				int32_t L_21 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if (!((int32_t)(((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))? 1 : 0)&((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0))))
				{
					goto IL_00cc_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_23 = V_1;
				int32_t L_24 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_item : &___0_item), SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				NullCheck(L_22);
				il2cpp_codegen_memcpy((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24)))), L_25, SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (void**)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24)))), (void*)L_25);
				int32_t L_26 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_01f3_1;
			}

IL_00cc_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_0), NULL);
				int32_t L_27 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_27;
				int32_t L_28 = V_1;
				int32_t L_29 = V_2;
				V_5 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
				int32_t L_30 = V_5;
				int32_t L_31 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_01ab_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_32);
				int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), (uint32_t)((int32_t)(L_33<<1)));
				V_6 = L_34;
				int32_t L_35 = V_2;
				int32_t L_36 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				V_7 = ((int32_t)(L_35&L_36));
				int32_t L_37 = V_7;
				if (L_37)
				{
					goto IL_013a_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = __this->____array;
				il2cpp_codegen_memory_barrier();
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = V_6;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_40);
				int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_38, 0, (RuntimeArray*)L_39, 0, L_41, NULL);
				goto IL_0178_1;
			}

IL_013a_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_43 = V_7;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_44 = V_6;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_45);
				int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
				int32_t L_47 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_42, L_43, (RuntimeArray*)L_44, 0, ((int32_t)il2cpp_codegen_subtract(L_46, L_47)), NULL);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_48 = __this->____array;
				il2cpp_codegen_memory_barrier();
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_49 = V_6;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_50 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_50);
				int32_t L_51 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_50)->max_length),NULL));
				int32_t L_52 = V_7;
				int32_t L_53 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_48, 0, (RuntimeArray*)L_49, ((int32_t)il2cpp_codegen_subtract(L_51, L_52)), L_53, NULL);
			}

IL_0178_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_54 = V_6;
				il2cpp_codegen_memory_barrier();
				__this->____array = L_54;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_54);
				il2cpp_codegen_memory_barrier();
				__this->____headIndex = 0;
				int32_t L_55 = V_5;
				int32_t L_56 = L_55;
				V_1 = L_56;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = L_56;
				int32_t L_57 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memory_barrier();
				__this->____mask = ((int32_t)(((int32_t)(L_57<<1))|1));
			}

IL_01ab_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_58 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_59 = V_1;
				int32_t L_60 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memcpy(L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_item : &___0_item), SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				NullCheck(L_58);
				il2cpp_codegen_memcpy((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_59&L_60)))), L_61, SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (void**)(L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_59&L_60)))), (void*)L_61);
				int32_t L_62 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_62, 1));
				int32_t L_63 = V_5;
				if (L_63)
				{
					goto IL_01d9_1;
				}
			}
			{
				int64_t* L_64 = ___1_emptyToNonEmptyListTransitionCount;
				int64_t L_65;
				L_65 = Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0(L_64, NULL);
			}

IL_01d9_1:
			{
				int32_t L_66 = __this->____addTakeCount;
				int32_t L_67 = __this->____stealCount;
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_subtract(L_66, L_67));
				__this->____stealCount = 0;
			}

IL_01f3_1:
			{
				int32_t L_68 = __this->____addTakeCount;
				if (((int64_t)L_68 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_68 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_add(L_68, 1));
				goto IL_0216;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0216:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_DangerousCopyTo_m45F80B1FF0D38F1BE0A0315B1F48501D81284F06_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____headIndex;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_1 = L_1;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		goto IL_003e;
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		int32_t L_5 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = __this->____mask;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)(L_8&L_9));
		il2cpp_codegen_memcpy(L_11, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_11, SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___1_arrayIndex;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m1BC6D29975BB205B49F508FF41A9C4AE59E0F6FA_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____addTakeCount;
		int32_t L_1 = __this->____stealCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_3 = (EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9*)(EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), (-1), 0, NULL);
		V_3 = L_10;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_11 = __this->____extractKey;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_12 = __this->____entries;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Il2CppSharedGenericObject* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___Value;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline(L_11, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005f:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_17 = __this->____entries;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___Next;
		if (L_19)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_20 = __this->____entries;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t* L_22 = (int32_t*)(&((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___Next);
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_22, (-1), 0, NULL);
		V_3 = L_23;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_24 = __this->____entries;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___Next;
		V_3 = L_26;
	}

IL_009f:
	{
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a7:
	{
		int32_t L_29 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_32 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->____buckets;
		NullCheck(L_33);
		int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
		if ((((int32_t)L_32) >= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->____buckets;
		NullCheck(L_35);
		int32_t L_36 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_35)->max_length),NULL));
		V_0 = L_36;
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->____buckets;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_38, 2));
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_40 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_40, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_41 = __this->____extractKey;
		int32_t L_42 = V_0;
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_43 = (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0(L_43, L_41, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_43;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = __this->____buckets;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_5 = L_47;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_48 = V_1;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_49 = __this->____entries;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		Il2CppSharedGenericObject* L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___Value;
		NullCheck(L_48);
		bool L_52;
		L_52 = XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA(L_48, L_51, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_53 = __this->____entries;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___Next;
		V_5 = L_55;
	}

IL_0130:
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_013b:
	{
		int32_t L_58 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = __this->____buckets;
		NullCheck(L_59);
		int32_t L_60 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_59)->max_length),NULL));
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_61 = V_1;
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppSharedGenericObject** L_9 = ___3_value;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value;
		*(Il2CppSharedGenericObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppSharedGenericObject** L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, Il2CppSharedGenericObject* ___0_value, Il2CppSharedGenericObject** ___1_newValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppSharedGenericObject** L_0 = ___1_newValue;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		*(Il2CppSharedGenericObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_2 = __this->____extractKey;
		Il2CppSharedGenericObject* L_3 = ___0_value;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_16 = __this->____entries;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ___0_value;
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Value = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Value), (void*)L_18);
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_19 = __this->____entries;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = V_3;
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___HashCode = L_21;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____buckets;
		int32_t L_24 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->____buckets;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		NullCheck(L_23);
		int32_t L_27 = V_0;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)il2cpp_codegen_subtract(L_26, 1))))))), L_27, 0, NULL);
		V_1 = L_28;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_29 = __this->____entries;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t* L_31 = (int32_t*)(&((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___Next);
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_31, L_32, 0, NULL);
		V_1 = L_33;
	}

IL_00ae:
	{
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_35 = V_1;
		return (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_36 = V_3;
		String_t* L_37 = V_2;
		String_t* L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		bool L_40;
		L_40 = XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350(__this, L_36, L_37, 0, L_39, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_40)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppSharedGenericObject** L_41 = ___1_newValue;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_42 = __this->____entries;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		Il2CppSharedGenericObject* L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___Value;
		*(Il2CppSharedGenericObject**)L_41 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_41, (void*)L_44);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(L_6, 1))));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_9 = V_0;
		V_1 = L_9;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___HashCode;
		int32_t L_13 = ___0_hashCode;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_14 = __this->____extractKey;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_15 = __this->____entries;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value;
		NullCheck(L_14);
		String_t* L_18;
		L_18 = ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_18;
		String_t* L_19 = V_2;
		if (L_19)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_20 = __this->____entries;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___Next;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_23 = __this->____entries;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppSharedGenericObject** L_25 = (Il2CppSharedGenericObject**)(&((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Value);
		il2cpp_codegen_initobj(L_25, sizeof(Il2CppSharedGenericObject*));
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_26 = __this->____entries;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___Next;
		V_1 = L_28;
		int32_t L_29 = V_0;
		if (L_29)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
		int32_t L_34 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_31&((int32_t)il2cpp_codegen_subtract(L_33, 1))))), (int32_t)L_34);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_35 = __this->____entries;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = V_1;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___Next = L_37;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_38 = ___3_count;
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)L_40))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_41 = ___1_key;
		int32_t L_42 = ___2_index;
		String_t* L_43 = V_2;
		int32_t L_44 = ___3_count;
		int32_t L_45;
		L_45 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_41, L_42, L_43, 0, L_44, NULL);
		if (L_45)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_46 = ___4_entryIndex;
		int32_t L_47 = V_1;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_48 = V_1;
		V_0 = L_48;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_49 = __this->____entries;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___Next;
		V_1 = L_51;
	}

IL_00f9:
	{
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_53 = ___4_entryIndex;
		int32_t L_54 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_53, (int32_t)L_54);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_3 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)(EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_50 = L_14;
	int32_t V_0 = 0;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	memset(V_6, 0, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), (-1), 0, NULL);
		V_3 = L_10;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_11 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_12 = __this->____entries;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_11);
		String_t* L_15;
		L_15 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_14: *(void**)L_14));
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_17 = __this->____entries;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if (L_19)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_20 = __this->____entries;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), (-1), 0, NULL);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_23 = __this->____entries;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		NullCheck(L_29);
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)(L_33/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->____buckets;
		NullCheck(L_34);
		int32_t L_35 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_34)->max_length),NULL));
		V_0 = L_35;
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____buckets;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_37, 2));
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_39 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_40 = __this->____extractKey;
		int32_t L_41 = V_0;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_42 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_42, L_40, L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_42;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->____buckets;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = L_46;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_47 = V_1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_48 = __this->____entries;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		il2cpp_codegen_memcpy(L_50, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_47);
		bool L_51;
		L_51 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_50: *(void**)L_50), (Il2CppFullySharedGenericAny*)V_6);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_52 = __this->____entries;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_5 = L_54;
	}

IL_0130:
	{
		int32_t L_55 = V_5;
		if ((((int32_t)L_55) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_013b:
	{
		int32_t L_57 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->____buckets;
		NullCheck(L_58);
		int32_t L_59 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_58)->max_length),NULL));
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_60 = V_1;
		return L_60;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___3_value;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_12, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppFullySharedGenericAny* L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* ___1_newValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_18 = L_1;
	const Il2CppFullySharedGenericAny L_43 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_newValue;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_2 = __this->____extractKey;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_16 = __this->____entries;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_write_instance_field_data(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_18, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = __this->____entries;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), L_21);
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____buckets;
		int32_t L_24 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->____buckets;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		NullCheck(L_23);
		int32_t L_27 = V_0;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)il2cpp_codegen_subtract(L_26, 1))))))), L_27, 0, NULL);
		V_1 = L_28;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_29 = __this->____entries;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = V_0;
		int32_t L_32;
		L_32 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), L_31, 0, NULL);
		V_1 = L_32;
	}

IL_00ae:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_34 = V_1;
		return (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_35 = V_3;
		String_t* L_36 = V_2;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		bool L_39;
		L_39 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_35, L_36, 0, L_38, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_39)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_40 = ___1_newValue;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_41 = __this->____entries;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_40, L_43, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_40, (void*)L_43);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(L_6, 1))));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_9 = V_0;
		V_1 = L_9;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		int32_t L_13 = ___0_hashCode;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_14 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_15 = __this->____entries;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_14);
		String_t* L_18;
		L_18 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_17: *(void**)L_17));
		V_2 = L_18;
		String_t* L_19 = V_2;
		if (L_19)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_20 = __this->____entries;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_23 = __this->____entries;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)))), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_25 = __this->____entries;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		int32_t L_30 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		int32_t L_33 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(L_32, 1))))), (int32_t)L_33);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_34 = __this->____entries;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2), L_36);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_37 = ___3_count;
		String_t* L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)L_39))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_40 = ___1_key;
		int32_t L_41 = ___2_index;
		String_t* L_42 = V_2;
		int32_t L_43 = ___3_count;
		int32_t L_44;
		L_44 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_40, L_41, L_42, 0, L_43, NULL);
		if (L_44)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_45 = ___4_entryIndex;
		int32_t L_46 = V_1;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_45, (int32_t)L_46);
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_47 = V_1;
		V_0 = L_47;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_48 = __this->____entries;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		int32_t L_50 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_50;
	}

IL_00f9:
	{
		int32_t L_51 = V_1;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_52 = ___4_entryIndex;
		int32_t L_53 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_52, (int32_t)L_53);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m3D1E3EE0309A2609621BEADA5C0A6B8E848411F7_gshared (XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_2 = (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2EA323EB26019A10072366BE80F4B4C6DB10AD0B_gshared (XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppSharedGenericObject** L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* XHashtable_1_Add_m44F5FEBEB616A2641A3BE7655190A82DA593563A_gshared (XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_0 = __this->____state;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		Il2CppSharedGenericObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_8;
			L_8 = XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m76AD29BB3D4A65A3071FDFCC0AD7F927FC6051B7_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_2 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2AE37A0F57ADCA202E17A64CCAF4D0F37A070A24_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppFullySharedGenericAny* L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, String_t*, int32_t, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1_Add_mB4B8BF6CA81EE97D92FEE9D365A8FFB15168AE00_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	memset(V_0, 0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_value : &___0_value), SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		return;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_8;
			L_8 = ((  XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_gshared_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m65ED50A4BE81F817875C7BE40D571ED1C5C14159_gshared_inline (Func_2_t7D95403601443E60392B2545CD3CE0E5E9DB87FB* __this, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m199273DF90D39F9281A028004DA68CF7C53184D6_gshared_inline (Func_2_t14BB77805AE83A28A8975E4AC9373C8FBA8598E2* __this, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ___0_arg, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m913A2D1CF0C0BD4B4BF9B6F3D73AA7D181F0C1C4_gshared_inline (Func_2_t360643DED60D182115B68AC1D31549969BE0BBFB* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m937F3F4E6DFC5793AFD912D15538BD0FE200196D_gshared_inline (Func_2_tAD4E550DF54762703335B5DB904241F4E8B94812* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_arg, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mBD6C2432D89E8CE3E4F75FB04CD60AD91A2609A4_gshared_inline (Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m1BA22D2F48FFC9B4E1F90CB3C0EC126BB62A7867_gshared_inline (Func_2_t49A18E358D7CE7AE3A886D3A2119103E8B9EFD58* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_arg, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m61576CC501E5780E453E784D1E32CAC6026DDB33_gshared_inline (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* __this, uint8_t ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint8_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Func_2_Invoke_m2C91B8C607DE26628CC21F2F6ECC9FA742FCFD39_gshared_inline (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* __this, uint8_t ___0_arg, const RuntimeMethod* method) 
{
	typedef uint8_t (*FunctionPointerType) (RuntimeObject*, uint8_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m1E7394D019C1A78F2140C6768774D7544461D2E1_gshared_inline (Func_2_t8D1CDC1953F408CBE801D1954A3A00249853A94A* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mFA1BD30AA44BC4B0A9A749D71A987E6039436F53_gshared_inline (Func_2_t7A8BAB775E0F660CBF09C94C4C4676035EB49C76* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 Enumerator_get_Current_m36BFE58761FCC0A168674CE56A009D3ED6350F00_gshared_inline (Enumerator_tB4FE0083F0EB896C3644333201854EDB2D9F1F8D* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Enumerator_get_Current_mC21B10741E52CD02297D62E713DAB517BD456BF0_gshared_inline (Enumerator_t78924C3D07FFC7657665D0B2874195C1CCAE3119* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A Enumerator_get_Current_mE6329055437A55ABC932F03B3D1D0CEA72627349_gshared_inline (Enumerator_tE552E4B9A903EC8C8676AF7F8F1B42407A615707* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_gshared_inline (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
