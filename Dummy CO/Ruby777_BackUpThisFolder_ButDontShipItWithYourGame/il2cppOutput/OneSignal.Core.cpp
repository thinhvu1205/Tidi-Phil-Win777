#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<OneSignalSDK.ActionButton>
struct List_1_tBD3D5DE492DB6E8472E966342E2BE6A082F6D4F7;
// System.Collections.Generic.List`1<OneSignalSDK.Notification>
struct List_1_tC08D2F537F1A02BE216FE66A2D75BA6E87EB2005;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// OneSignalSDK.ActionButton
struct ActionButton_tAD39CFA7201CA72B52F90C9C5B345303E8B27FB7;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// OneSignalSDK.BackgroundImageLayout
struct BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// OneSignalSDK.EmailSubscriptionState
struct EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// OneSignalSDK.InAppMessage
struct InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557;
// OneSignalSDK.InAppMessageAction
struct InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// OneSignalSDK.Notification
struct Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F;
// OneSignalSDK.NotificationAction
struct NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99;
// OneSignalSDK.NotificationOpenedResult
struct NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// OneSignalSDK.OneSignal
struct OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85;
// OneSignalSDK.OneSignalBehaviour
struct OneSignalBehaviour_t984420F12C8E067001F23C636606C6B3A395AFD7;
// OneSignalSDK.PushSubscriptionState
struct PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635;
// OneSignalSDK.SMSSubscriptionState
struct SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// OneSignalSDK.Json/Parser
struct Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C;
// OneSignalSDK.Json/Serializer
struct Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5;
// OneSignalSDK.OneSignal/InAppMessageActionDelegate
struct InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8;
// OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate
struct InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF;
// OneSignalSDK.OneSignal/NotificationActionDelegate
struct NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D;
// OneSignalSDK.OneSignal/NotificationWillShowDelegate
struct NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral526C999F139627F5A148FB7032812E83F8AEFC82;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC762363E16C7B48A45F7AD0379382854A5AAC7;
IL2CPP_EXTERN_C String_t* _stringLiteral91F7E6F20B6646D90CD184646336FEFB5B3FCC2F;
IL2CPP_EXTERN_C String_t* _stringLiteral94672909F51EA6867CBD4D94D2F92A0929C2009E;
IL2CPP_EXTERN_C String_t* _stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBFB5DAA5265160CE753212EA77C3196536EF9342;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m7BBA4F80C8B53665B5FCA75BF605458437997622_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t68C32C04644151B6D2857B11559C9F0880906353 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// OneSignalSDK.ActionButton
struct ActionButton_tAD39CFA7201CA72B52F90C9C5B345303E8B27FB7  : public RuntimeObject
{
	// System.String OneSignalSDK.ActionButton::id
	String_t* ___id_0;
	// System.String OneSignalSDK.ActionButton::text
	String_t* ___text_1;
	// System.String OneSignalSDK.ActionButton::icon
	String_t* ___icon_2;
};
struct Il2CppArrayBounds;

// OneSignalSDK.BackgroundImageLayout
struct BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8  : public RuntimeObject
{
	// System.String OneSignalSDK.BackgroundImageLayout::image
	String_t* ___image_0;
	// System.String OneSignalSDK.BackgroundImageLayout::titleTextColor
	String_t* ___titleTextColor_1;
	// System.String OneSignalSDK.BackgroundImageLayout::bodyTextColor
	String_t* ___bodyTextColor_2;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// OneSignalSDK.EmailSubscriptionState
struct EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01  : public RuntimeObject
{
	// System.String OneSignalSDK.EmailSubscriptionState::emailUserId
	String_t* ___emailUserId_0;
	// System.Boolean OneSignalSDK.EmailSubscriptionState::isSubscribed
	bool ___isSubscribed_1;
	// System.String OneSignalSDK.EmailSubscriptionState::emailAddress
	String_t* ___emailAddress_2;
};

// OneSignalSDK.InAppMessage
struct InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557  : public RuntimeObject
{
	// System.String OneSignalSDK.InAppMessage::messageId
	String_t* ___messageId_0;
};

// OneSignalSDK.InAppMessageAction
struct InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB  : public RuntimeObject
{
	// System.String OneSignalSDK.InAppMessageAction::clickName
	String_t* ___clickName_0;
	// System.String OneSignalSDK.InAppMessageAction::clickUrl
	String_t* ___clickUrl_1;
	// System.Boolean OneSignalSDK.InAppMessageAction::firstClick
	bool ___firstClick_2;
	// System.Boolean OneSignalSDK.InAppMessageAction::closesMessage
	bool ___closesMessage_3;
	// System.String OneSignalSDK.InAppMessageAction::click_name
	String_t* ___click_name_4;
	// System.String OneSignalSDK.InAppMessageAction::click_url
	String_t* ___click_url_5;
	// System.Boolean OneSignalSDK.InAppMessageAction::first_click
	bool ___first_click_6;
	// System.Boolean OneSignalSDK.InAppMessageAction::closes_message
	bool ___closes_message_7;
};

// OneSignalSDK.Json
struct Json_tCC41D098E71C9750C8C409790108D1635F2D3BFC  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// OneSignalSDK.Notification
struct Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F  : public RuntimeObject
{
	// System.String OneSignalSDK.Notification::notificationId
	String_t* ___notificationId_0;
	// System.String OneSignalSDK.Notification::templateName
	String_t* ___templateName_1;
	// System.String OneSignalSDK.Notification::templateId
	String_t* ___templateId_2;
	// System.String OneSignalSDK.Notification::title
	String_t* ___title_3;
	// System.String OneSignalSDK.Notification::body
	String_t* ___body_4;
	// System.String OneSignalSDK.Notification::launchURL
	String_t* ___launchURL_5;
	// System.String OneSignalSDK.Notification::sound
	String_t* ___sound_6;
	// System.String OneSignalSDK.Notification::collapseId
	String_t* ___collapseId_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> OneSignalSDK.Notification::additionalData
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___additionalData_8;
	// System.Collections.Generic.List`1<OneSignalSDK.ActionButton> OneSignalSDK.Notification::actionButtons
	List_1_tBD3D5DE492DB6E8472E966342E2BE6A082F6D4F7* ___actionButtons_9;
	// System.String OneSignalSDK.Notification::rawPayload
	String_t* ___rawPayload_10;
	// System.Int32 OneSignalSDK.Notification::androidNotificationId
	int32_t ___androidNotificationId_11;
	// System.String OneSignalSDK.Notification::smallIcon
	String_t* ___smallIcon_12;
	// System.String OneSignalSDK.Notification::largeIcon
	String_t* ___largeIcon_13;
	// System.String OneSignalSDK.Notification::bigPicture
	String_t* ___bigPicture_14;
	// System.String OneSignalSDK.Notification::smallIconAccentColor
	String_t* ___smallIconAccentColor_15;
	// System.String OneSignalSDK.Notification::ledColor
	String_t* ___ledColor_16;
	// OneSignalSDK.LockScreenVisibility OneSignalSDK.Notification::lockScreenVisibility
	int32_t ___lockScreenVisibility_17;
	// System.String OneSignalSDK.Notification::groupKey
	String_t* ___groupKey_18;
	// System.String OneSignalSDK.Notification::groupMessage
	String_t* ___groupMessage_19;
	// System.String OneSignalSDK.Notification::fromProjectNumber
	String_t* ___fromProjectNumber_20;
	// System.Int32 OneSignalSDK.Notification::priority
	int32_t ___priority_21;
	// System.Collections.Generic.List`1<OneSignalSDK.Notification> OneSignalSDK.Notification::groupedNotifications
	List_1_tC08D2F537F1A02BE216FE66A2D75BA6E87EB2005* ___groupedNotifications_22;
	// OneSignalSDK.BackgroundImageLayout OneSignalSDK.Notification::backgroundImageLayout
	BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8* ___backgroundImageLayout_23;
	// System.String OneSignalSDK.Notification::subtitle
	String_t* ___subtitle_24;
	// System.Boolean OneSignalSDK.Notification::contentAvailable
	bool ___contentAvailable_25;
	// System.Boolean OneSignalSDK.Notification::mutableContent
	bool ___mutableContent_26;
	// System.String OneSignalSDK.Notification::category
	String_t* ___category_27;
	// System.Int32 OneSignalSDK.Notification::badge
	int32_t ___badge_28;
	// System.Int32 OneSignalSDK.Notification::badgeIncrement
	int32_t ___badgeIncrement_29;
	// System.String OneSignalSDK.Notification::threadId
	String_t* ___threadId_30;
	// System.Double OneSignalSDK.Notification::relevanceScore
	double ___relevanceScore_31;
	// System.String OneSignalSDK.Notification::interruptionLevel
	String_t* ___interruptionLevel_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> OneSignalSDK.Notification::attachments
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___attachments_33;
};

// OneSignalSDK.NotificationAction
struct NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99  : public RuntimeObject
{
	// System.String OneSignalSDK.NotificationAction::actionID
	String_t* ___actionID_0;
	// OneSignalSDK.NotificationActionType OneSignalSDK.NotificationAction::type
	int32_t ___type_1;
};

// OneSignalSDK.NotificationOpenedResult
struct NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01  : public RuntimeObject
{
	// OneSignalSDK.NotificationAction OneSignalSDK.NotificationOpenedResult::action
	NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99* ___action_0;
	// OneSignalSDK.Notification OneSignalSDK.NotificationOpenedResult::notification
	Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification_1;
};

// OneSignalSDK.OneSignal
struct OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85  : public RuntimeObject
{
	// OneSignalSDK.LogLevel OneSignalSDK.OneSignal::_logLevel
	int32_t ____logLevel_4;
	// OneSignalSDK.LogLevel OneSignalSDK.OneSignal::_alertLevel
	int32_t ____alertLevel_5;
};

struct OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields
{
	// System.String OneSignalSDK.OneSignal::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_1;
	// System.Boolean OneSignalSDK.OneSignal::<DidInitialize>k__BackingField
	bool ___U3CDidInitializeU3Ek__BackingField_2;
	// System.Action`1<System.String> OneSignalSDK.OneSignal::OnInitialize
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnInitialize_3;
	// OneSignalSDK.OneSignal OneSignalSDK.OneSignal::_default
	OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* ____default_6;
};

// OneSignalSDK.PushSubscriptionState
struct PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635  : public RuntimeObject
{
	// System.String OneSignalSDK.PushSubscriptionState::userId
	String_t* ___userId_0;
	// System.Boolean OneSignalSDK.PushSubscriptionState::isSubscribed
	bool ___isSubscribed_1;
	// System.String OneSignalSDK.PushSubscriptionState::pushToken
	String_t* ___pushToken_2;
	// System.Boolean OneSignalSDK.PushSubscriptionState::isPushDisabled
	bool ___isPushDisabled_3;
};

// OneSignalSDK.ReflectionHelpers
struct ReflectionHelpers_t8B5D5000145D2CF5596CF272724D4A7A324AE0F0  : public RuntimeObject
{
};

// OneSignalSDK.SDKDebug
struct SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6  : public RuntimeObject
{
};

struct SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields
{
	// System.Action`1<System.Object> OneSignalSDK.SDKDebug::LogIntercept
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___LogIntercept_0;
	// System.Action`1<System.Object> OneSignalSDK.SDKDebug::WarnIntercept
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___WarnIntercept_1;
	// System.Action`1<System.Object> OneSignalSDK.SDKDebug::ErrorIntercept
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___ErrorIntercept_2;
};

// OneSignalSDK.SMSSubscriptionState
struct SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC  : public RuntimeObject
{
	// System.String OneSignalSDK.SMSSubscriptionState::smsUserId
	String_t* ___smsUserId_0;
	// System.Boolean OneSignalSDK.SMSSubscriptionState::isSubscribed
	bool ___isSubscribed_1;
	// System.String OneSignalSDK.SMSSubscriptionState::smsNumber
	String_t* ___smsNumber_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// OneSignalSDK.UnityMainThreadDispatch
struct UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12  : public RuntimeObject
{
};

struct UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields
{
	// System.Threading.SynchronizationContext OneSignalSDK.UnityMainThreadDispatch::_context
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____context_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// OneSignalSDK.Json/Parser
struct Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C  : public RuntimeObject
{
	// System.IO.StringReader OneSignalSDK.Json/Parser::json
	StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* ___json_1;
};

// OneSignalSDK.Json/Serializer
struct Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5  : public RuntimeObject
{
	// System.Text.StringBuilder OneSignalSDK.Json/Serializer::builder
	StringBuilder_t* ___builder_0;
	// System.Boolean OneSignalSDK.Json/Serializer::humanReadable
	bool ___humanReadable_1;
	// System.Int32 OneSignalSDK.Json/Serializer::indentSpaces
	int32_t ___indentSpaces_2;
	// System.Int32 OneSignalSDK.Json/Serializer::indentLevel
	int32_t ___indentLevel_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/InAppMessageActionDelegate
struct InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate
struct InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/NotificationActionDelegate
struct NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/NotificationWillShowDelegate
struct NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// OneSignalSDK.OneSignalBehaviour
struct OneSignalBehaviour_t984420F12C8E067001F23C636606C6B3A395AFD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String OneSignalSDK.OneSignalBehaviour::AppId
	String_t* ___AppId_4;
	// OneSignalSDK.LogLevel OneSignalSDK.OneSignalBehaviour::LogLevel
	int32_t ___LogLevel_5;
	// OneSignalSDK.LogLevel OneSignalSDK.OneSignalBehaviour::AlertLevel
	int32_t ___AlertLevel_6;
	// System.Boolean OneSignalSDK.OneSignalBehaviour::RequireUserConsent
	bool ___RequireUserConsent_7;
	// System.Boolean OneSignalSDK.OneSignalBehaviour::ShareLocation
	bool ___ShareLocation_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Type> OneSignalSDK.ReflectionHelpers::FindAllAssignableTypes<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionHelpers_FindAllAssignableTypes_TisRuntimeObject_m73F4BF4E25A8A895DE1F342D31BFB4143D02CCBE_gshared (String_t* ___assemblyFilter0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// OneSignalSDK.OneSignal OneSignalSDK.OneSignal::_getDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* OneSignal__getDefaultInstance_m834472A6A5979CCD98EE20C688BBDDED8B13F460 (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.OneSignal::set_AppId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneSignal_set_AppId_mEF4FA0B42E20FBF5472625313F15E5FA34B76FA7_inline (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.OneSignal::set_DidInitialize(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneSignal_set_DidInitialize_m079405FD214706F1F8A0966D0FE6FF2CAF11A9E8_inline (bool ___value0, const RuntimeMethod* method) ;
// System.String OneSignalSDK.OneSignal::get_AppId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OneSignal_get_AppId_m9C021E0C13BA0E9B19710DDF8FE1C9025F3714DE_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Collections.Generic.IEnumerable`1<System.Type> OneSignalSDK.ReflectionHelpers::FindAllAssignableTypes<OneSignalSDK.OneSignal>(System.String)
inline RuntimeObject* ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m7BBA4F80C8B53665B5FCA75BF605458437997622 (String_t* ___assemblyFilter0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, const RuntimeMethod*))ReflectionHelpers_FindAllAssignableTypes_TisRuntimeObject_m73F4BF4E25A8A895DE1F342D31BFB4143D02CCBE_gshared)(___assemblyFilter0, method);
}
// TSource System.Linq.Enumerable::First<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Type_t* Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared)(___source0, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.SDKDebug::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_Info_mD81B56D781D2CC2383DCA277D32D347E9A1C65E3 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// OneSignalSDK.OneSignal OneSignalSDK.OneSignal::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Object OneSignalSDK.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m767322EC3AE7869CF1BE64A418C47FCE357EC8FC (String_t* ___jsonString0, const RuntimeMethod* method) ;
// System.String OneSignalSDK.Json/Serializer::MakeSerialization(System.Object,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_MakeSerialization_m67B2B5FFEF2561859D50B2809272E0B9581F5A05 (RuntimeObject* ___obj0, bool ___humanReadable1, int32_t ___indentSpaces2, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m9BE59139F16DFAC491D3A03DCB162B051070807C (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, String_t* ___jsonString0, const RuntimeMethod* method) ;
// System.Object OneSignalSDK.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m1B7E05DCE0B6435C7679A4878A0371B990764B41 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// OneSignalSDK.Json/Parser/TOKEN OneSignalSDK.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.String OneSignalSDK.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mB3FF8B4C52AF5BC6279CE7DD5FD058B874E0078B (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Object OneSignalSDK.Json/Parser::ParseByToken(OneSignalSDK.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_mC26F86B5A9BB6DC7A8F419619B74B628F3C9F738 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, int32_t ___token0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Object OneSignalSDK.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_m2C0B8EAD7D8ED45A37E1FB2ACD5E7A8212A2C714 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> OneSignalSDK.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mC129607C90BA628D70512884CD7410E92EC7493D (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Object> OneSignalSDK.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m91F6F3E6E84BA32CF62544967F412C86A6C940F1 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char OneSignalSDK.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8881C26C9DC63CBE2186F7180F780706A10283F6 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method) ;
// System.String OneSignalSDK.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m523714E46B1A48A04432D11FF5FC181B9CEE638C (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m280F0E3C898A7C3A57F35E3B136D4BFACE12122A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method) ;
// System.Char OneSignalSDK.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean OneSignalSDK.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m05444C0460A11F4D35D86FE4B434D9051AC143CF (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mD5146E17EF15AFE2DF0C64426301D1EE6513C0A3 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.Json/Serializer::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m99E1E12C48B39230E7488D02026BF2572D0792DF (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, bool ___humanReadable0, int32_t ___indentSpaces1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m9D612F968FC32957BBCEA48C7554FB8B73CE6021 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m752864D4085775CF21F8A9866C857DCC72614491 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mFFB73E1A04876CD6A2625EDD360AAC8B30DF155A (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3 (StringBuilder_t* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.Json/Serializer::AppendNewLineFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m7B23BC2572EEB2B03EDAA26D2D9232C4A00DA00C (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.String OneSignalSDK.SDKDebug::_formatMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SDKDebug__formatMessage_m6D424D45A431D94B5E5858826E5E3CDEAC444007 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A (const RuntimeMethod* method) ;
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
// System.Void OneSignalSDK.EmailSubscriptionState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmailSubscriptionState__ctor_m8D51A71CE9F558E5BFFBA6E255A592AE3B010E35 (EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01* __this, const RuntimeMethod* method) 
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
// System.Void OneSignalSDK.InAppMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessage__ctor_m4E1D29570F3BE1D3FB0CFFDFA38A0D247621F524 (InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* __this, const RuntimeMethod* method) 
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
// System.Void OneSignalSDK.InAppMessageAction::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageAction_OnBeforeSerialize_m025FB732E4FD5351F5DCAC4657A831B965B7F5A6 (InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OneSignalSDK.InAppMessageAction::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageAction_OnAfterDeserialize_mD11F71307FA76BE4D3389E8279E0F2C64F116F34 (InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* __this, const RuntimeMethod* method) 
{
	{
		// clickName     = click_name;
		String_t* L_0 = __this->___click_name_4;
		__this->___clickName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickName_0), (void*)L_0);
		// clickUrl      = click_url;
		String_t* L_1 = __this->___click_url_5;
		__this->___clickUrl_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickUrl_1), (void*)L_1);
		// firstClick    = first_click;
		bool L_2 = __this->___first_click_6;
		__this->___firstClick_2 = L_2;
		// closesMessage = closes_message;
		bool L_3 = __this->___closes_message_7;
		__this->___closesMessage_3 = L_3;
		// }
		return;
	}
}
// System.Void OneSignalSDK.InAppMessageAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageAction__ctor_m6E236F034D28D6669DE24ECD4470C6507D9F93A6 (InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* __this, const RuntimeMethod* method) 
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
// System.Void OneSignalSDK.ActionButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionButton__ctor_mEB9403A992891320FFF3E1AA744F784DF2E8D426 (ActionButton_tAD39CFA7201CA72B52F90C9C5B345303E8B27FB7* __this, const RuntimeMethod* method) 
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
// System.Void OneSignalSDK.BackgroundImageLayout::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundImageLayout__ctor_m7EFD1A5889EA10264B3B285D1BC1BADC6D8D4D10 (BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8* __this, const RuntimeMethod* method) 
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
// System.Void OneSignalSDK.Notification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification__ctor_mA5090CDD38836D26AFDEB00E1C099C14A0482579 (Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* __this, const RuntimeMethod* method) 
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
// System.Void OneSignalSDK.NotificationAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationAction__ctor_mAA54CD01853DB91D9A6721922A3C5A07ADE6660A (NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99* __this, const RuntimeMethod* method) 
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
// System.Void OneSignalSDK.NotificationOpenedResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationOpenedResult__ctor_mB10B54426A370622B293AFE0AD0DD3EB5AFDD667 (NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* __this, const RuntimeMethod* method) 
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
// System.Void OneSignalSDK.PushSubscriptionState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushSubscriptionState__ctor_m1772F14184CC1B7937B27C0CE9D0B3E260F44503 (PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635* __this, const RuntimeMethod* method) 
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
// System.Void OneSignalSDK.SMSSubscriptionState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMSSubscriptionState__ctor_m8863E786D65256D104A54B820CB28089B86E2C07 (SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC* __this, const RuntimeMethod* method) 
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
// OneSignalSDK.OneSignal OneSignalSDK.OneSignal::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166 (const RuntimeMethod* method) 
{
	{
		// get => _getDefaultInstance();
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal__getDefaultInstance_m834472A6A5979CCD98EE20C688BBDDED8B13F460(NULL);
		return L_0;
	}
}
// System.Void OneSignalSDK.OneSignal::set_Default(OneSignalSDK.OneSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_set_Default_mC90B2BB00D4679DF53E302C62D563EE92930499B (OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94672909F51EA6867CBD4D94D2F92A0929C2009E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[OneSignal] OneSignal.Default set to platform SDK {value.GetType()}. Current version is {Version}");
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0 = ___value0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral94672909F51EA6867CBD4D94D2F92A0929C2009E, L_1, _stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// _default = value;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_3 = ___value0;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default_6), (void*)L_3);
		// }
		return;
	}
}
// System.String OneSignalSDK.OneSignal::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneSignal_get_AppId_m9C021E0C13BA0E9B19710DDF8FE1C9025F3714DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static string AppId { get; private set; }
		String_t* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void OneSignalSDK.OneSignal::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_set_AppId_mEF4FA0B42E20FBF5472625313F15E5FA34B76FA7 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static string AppId { get; private set; }
		String_t* L_0 = ___value0;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean OneSignalSDK.OneSignal::get_DidInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneSignal_get_DidInitialize_mFC0AE1E2F2F99649542B20D66F1A961534A34351 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static bool DidInitialize { get; private set; }
		bool L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CDidInitializeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void OneSignalSDK.OneSignal::set_DidInitialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_set_DidInitialize_m079405FD214706F1F8A0966D0FE6FF2CAF11A9E8 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static bool DidInitialize { get; private set; }
		bool L_0 = ___value0;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CDidInitializeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void OneSignalSDK.OneSignal::add_OnInitialize(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_add_OnInitialize_mA3E5145F399ECC68F4D8659C721EB88651C6DE81 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize_3;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>((&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize_3), L_5, L_6);
		V_0 = L_7;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_8) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void OneSignalSDK.OneSignal::remove_OnInitialize(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal_remove_OnInitialize_m4FDDEE959A8158C4AE74804CEDBB90B9310C1C76 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize_3;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>((&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize_3), L_5, L_6);
		V_0 = L_7;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_8) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void OneSignalSDK.OneSignal::_completedInit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal__completedInit_m0C02F43F275F94BD0D880ECCDC6919C6DDED73F5 (String_t* ___appId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	{
		// AppId         = appId;
		String_t* L_0 = ___appId0;
		OneSignal_set_AppId_mEF4FA0B42E20FBF5472625313F15E5FA34B76FA7_inline(L_0, NULL);
		// DidInitialize = true;
		OneSignal_set_DidInitialize_m079405FD214706F1F8A0966D0FE6FF2CAF11A9E8_inline((bool)1, NULL);
		// OnInitialize?.Invoke(AppId);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___OnInitialize_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		String_t* L_3;
		L_3 = OneSignal_get_AppId_m9C021E0C13BA0E9B19710DDF8FE1C9025F3714DE_inline(NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// OneSignalSDK.OneSignal OneSignalSDK.OneSignal::_getDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* OneSignal__getDefaultInstance_m834472A6A5979CCD98EE20C688BBDDED8B13F460 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m7BBA4F80C8B53665B5FCA75BF605458437997622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral526C999F139627F5A148FB7032812E83F8AEFC82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DC762363E16C7B48A45F7AD0379382854A5AAC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91F7E6F20B6646D90CD184646336FEFB5B3FCC2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A);
		s_Il2CppMethodInitialized = true;
	}
	OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* V_0 = NULL;
	{
		// if (_default != null)
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default_6;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return _default;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_1 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default_6;
		return L_1;
	}

IL_000d:
	{
		// var availableSDKs = ReflectionHelpers.FindAllAssignableTypes<OneSignal>("OneSignal");
		RuntimeObject* L_2;
		L_2 = ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m7BBA4F80C8B53665B5FCA75BF605458437997622(_stringLiteral91F7E6F20B6646D90CD184646336FEFB5B3FCC2F, ReflectionHelpers_FindAllAssignableTypes_TisOneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_m7BBA4F80C8B53665B5FCA75BF605458437997622_RuntimeMethod_var);
		// if (Activator.CreateInstance(availableSDKs.First()) is OneSignal sdk) {
		Type_t* L_3;
		L_3 = Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE(L_2, Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE_RuntimeMethod_var);
		RuntimeObject* L_4;
		L_4 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_3, NULL);
		V_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85*)IsInstClass((RuntimeObject*)L_4, OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var));
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_5 = V_0;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// _default = sdk;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_6 = V_0;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default_6), (void*)L_6);
		// SDKDebug.Info($"OneSignal.Default set to platform SDK {sdk.GetType()}. Current version is {Version}");
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7 = V_0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		String_t* L_9;
		L_9 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral8DC762363E16C7B48A45F7AD0379382854A5AAC7, L_8, _stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A, NULL);
		SDKDebug_Info_mD81B56D781D2CC2383DCA277D32D347E9A1C65E3(L_9, NULL);
		goto IL_0056;
	}

IL_004c:
	{
		// Debug.LogError("[OneSignal] Could not find an implementation of OneSignal SDK to use!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral526C999F139627F5A148FB7032812E83F8AEFC82, NULL);
	}

IL_0056:
	{
		// return _default;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_10 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->____default_6;
		return L_10;
	}
}
// System.Void OneSignalSDK.OneSignal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignal__ctor_m182500A027110E66DD2443D6E8A22C96AA03F9DB (OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* __this, const RuntimeMethod* method) 
{
	{
		// protected LogLevel _logLevel = LogLevel.Fatal;
		__this->____logLevel_4 = 1;
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
Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_Multicast(NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* currentDelegate = reinterpret_cast<NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758*>(delegatesToInvoke[i]);
		typedef Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* (*FunctionPointerType) (RuntimeObject*, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___notification0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_Open(NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification0, const RuntimeMethod* method)
{
	typedef Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* (*FunctionPointerType) (Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___notification0, method);
}
Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_OpenStaticInvoker(NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* >::Invoke(__this->___method_ptr_0, method, NULL, ___notification0);
}
Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_ClosedStaticInvoker(NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*, RuntimeObject*, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___notification0);
}
// System.Void OneSignalSDK.OneSignal/NotificationWillShowDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationWillShowDelegate__ctor_m8DEE6C41B02776A21A042F416981705000627B68 (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4_Multicast;
}
// OneSignalSDK.Notification OneSignalSDK.OneSignal/NotificationWillShowDelegate::Invoke(OneSignalSDK.Notification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_Invoke_m865EF82C9367CD6E54E00BF49361A40DF1BED4D4 (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification0, const RuntimeMethod* method) 
{
	typedef Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* (*FunctionPointerType) (RuntimeObject*, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___notification0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult OneSignalSDK.OneSignal/NotificationWillShowDelegate::BeginInvoke(OneSignalSDK.Notification,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationWillShowDelegate_BeginInvoke_m41C6CD8E93AB34E42C80632D83245CFD0FDBFD99 (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___notification0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// OneSignalSDK.Notification OneSignalSDK.OneSignal/NotificationWillShowDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* NotificationWillShowDelegate_EndInvoke_mD4CE56260AE75927F8B7DEBE5DD4FE54ECEADBA9 (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_Multicast(NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___result0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* currentDelegate = reinterpret_cast<NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___result0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_Open(NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___result0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, method);
}
void NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_OpenStaticInvoker(NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___result0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* >::Invoke(__this->___method_ptr_0, method, NULL, ___result0);
}
void NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_ClosedStaticInvoker(NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___result0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___result0);
}
// System.Void OneSignalSDK.OneSignal/NotificationActionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationActionDelegate__ctor_m408F5A9D3FDB19D0D9C832ACA6218A31E01D5E3C (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7_Multicast;
}
// System.Void OneSignalSDK.OneSignal/NotificationActionDelegate::Invoke(OneSignalSDK.NotificationOpenedResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationActionDelegate_Invoke_m356D618DF09032EA7F1D5EA127E91E900EEAE6A7 (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___result0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult OneSignalSDK.OneSignal/NotificationActionDelegate::BeginInvoke(OneSignalSDK.NotificationOpenedResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationActionDelegate_BeginInvoke_m7D2C6E38308DF0EB3747CA40B5DBC87F49EE8332 (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___result0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void OneSignalSDK.OneSignal/NotificationActionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationActionDelegate_EndInvoke_mCBC8DD0FCAEA7248D2B78E1434611FD60588D9EB (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_Multicast(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* currentDelegate = reinterpret_cast<InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_Open(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_OpenStaticInvoker(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_ClosedStaticInvoker(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
// System.Void OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageLifecycleDelegate__ctor_mE43EDDA4DEB69661B8A715F0C9B3DB86EFAC58EF (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989_Multicast;
}
// System.Void OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate::Invoke(OneSignalSDK.InAppMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageLifecycleDelegate_Invoke_mDCCCBF256F623C00CEA3E933A5FD074FA1507989 (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate::BeginInvoke(OneSignalSDK.InAppMessage,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InAppMessageLifecycleDelegate_BeginInvoke_m700E9AECBA0143D085E3AB46A431082BEF310233 (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageLifecycleDelegate_EndInvoke_m8B97651C120C52C1BF6FA9C98EC1009429C72FC2 (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_Multicast(InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___action0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* currentDelegate = reinterpret_cast<InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_Open(InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___action0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___action0, method);
}
void InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_OpenStaticInvoker(InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___action0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* >::Invoke(__this->___method_ptr_0, method, NULL, ___action0);
}
void InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_ClosedStaticInvoker(InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___action0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___action0);
}
// System.Void OneSignalSDK.OneSignal/InAppMessageActionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageActionDelegate__ctor_m5A77E086CC360AD6369972267DCBEB50CE147E84 (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2_Multicast;
}
// System.Void OneSignalSDK.OneSignal/InAppMessageActionDelegate::Invoke(OneSignalSDK.InAppMessageAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageActionDelegate_Invoke_m77062EEFFB8FB6E3060388D30CBDBC5DD1B334A2 (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___action0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult OneSignalSDK.OneSignal/InAppMessageActionDelegate::BeginInvoke(OneSignalSDK.InAppMessageAction,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InAppMessageActionDelegate_BeginInvoke_mD60B5535B898DDA10115E1CE0FCDC7B4766CE1B8 (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___action0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___action0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void OneSignalSDK.OneSignal/InAppMessageActionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageActionDelegate_EndInvoke_m9C1369ABCDD73C63DF221708789ED1C1D48A04A1 (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalSDK.OneSignalBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalBehaviour_Start_mD43BDABE484924BE18E2533D414CF14BE822D668 (OneSignalBehaviour_t984420F12C8E067001F23C636606C6B3A395AFD7* __this, const RuntimeMethod* method) 
{
	{
		// OneSignal.Default.LogLevel               = LogLevel;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		int32_t L_1 = __this->___LogLevel_5;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(27 /* System.Void OneSignalSDK.OneSignal::set_LogLevel(OneSignalSDK.LogLevel) */, L_0, L_1);
		// OneSignal.Default.AlertLevel             = AlertLevel;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_2;
		L_2 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		int32_t L_3 = __this->___AlertLevel_6;
		NullCheck(L_2);
		VirtualActionInvoker1< int32_t >::Invoke(29 /* System.Void OneSignalSDK.OneSignal::set_AlertLevel(OneSignalSDK.LogLevel) */, L_2, L_3);
		// OneSignal.Default.RequiresPrivacyConsent = RequireUserConsent;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_4;
		L_4 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		bool L_5 = __this->___RequireUserConsent_7;
		NullCheck(L_4);
		VirtualActionInvoker1< bool >::Invoke(33 /* System.Void OneSignalSDK.OneSignal::set_RequiresPrivacyConsent(System.Boolean) */, L_4, L_5);
		// OneSignal.Default.ShareLocation          = ShareLocation;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_6;
		L_6 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		bool L_7 = __this->___ShareLocation_8;
		NullCheck(L_6);
		VirtualActionInvoker1< bool >::Invoke(67 /* System.Void OneSignalSDK.OneSignal::set_ShareLocation(System.Boolean) */, L_6, L_7);
		// OneSignal.Default.Initialize(AppId);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_8;
		L_8 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		String_t* L_9 = __this->___AppId_4;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(35 /* System.Void OneSignalSDK.OneSignal::Initialize(System.String) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void OneSignalSDK.OneSignalBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalBehaviour__ctor_mC493B1BE2CD99B4C7CDD5CEDCB93E3D0C484040F (OneSignalBehaviour_t984420F12C8E067001F23C636606C6B3A395AFD7* __this, const RuntimeMethod* method) 
{
	{
		// public LogLevel LogLevel = LogLevel.Warn;
		__this->___LogLevel_5 = 3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Object OneSignalSDK.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m3FCAF599F803C31CB427BD1430E948E5ACDE8237 (String_t* ___json0, const RuntimeMethod* method) 
{
	{
		// if (json == null)
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse(json);
		String_t* L_1 = ___json0;
		RuntimeObject* L_2;
		L_2 = Parser_Parse_m767322EC3AE7869CF1BE64A418C47FCE357EC8FC(L_1, NULL);
		return L_2;
	}
}
// System.String OneSignalSDK.Json::Serialize(System.Object,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mA6BDF705EEE0769F09C6A3F8D5712884541A2B96 (RuntimeObject* ___obj0, bool ___humanReadable1, int32_t ___indentSpaces2, const RuntimeMethod* method) 
{
	{
		// return Serializer.MakeSerialization(obj, humanReadable, indentSpaces);
		RuntimeObject* L_0 = ___obj0;
		bool L_1 = ___humanReadable1;
		int32_t L_2 = ___indentSpaces2;
		String_t* L_3;
		L_3 = Serializer_MakeSerialization_m67B2B5FFEF2561859D50B2809272E0B9581F5A05(L_0, L_1, L_2, NULL);
		return L_3;
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
// System.Boolean OneSignalSDK.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m05444C0460A11F4D35D86FE4B434D9051AC143CF (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void OneSignalSDK.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m9BE59139F16DFAC491D3A03DCB162B051070807C (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		__this->___json_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_1), (void*)L_1);
		// }
		return;
	}
}
// System.Object OneSignalSDK.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m767322EC3AE7869CF1BE64A418C47FCE357EC8FC (String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// using (var instance = new Parser(jsonString))
		String_t* L_0 = ___jsonString0;
		Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* L_1 = (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C*)il2cpp_codegen_object_new(Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Parser__ctor_m9BE59139F16DFAC491D3A03DCB162B051070807C(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				{
					Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return instance.ParseValue();
			Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Parser_ParseValue_m1B7E05DCE0B6435C7679A4878A0371B990764B41(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		// }
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.Void OneSignalSDK.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_mC393F1F7B2BE6DAD7B54A9B07175D06683004616 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	{
		// json.Dispose();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_0, NULL);
		// json = null;
		__this->___json_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_1), (void*)(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> OneSignalSDK.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mC129607C90BA628D70512884CD7410E92EC7493D (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken)
		int32_t L_3;
		L_3 = Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_8;
		L_8 = Parser_ParseString_mB3FF8B4C52AF5BC6279CE7DD5FD058B874E0078B(__this, NULL);
		V_1 = L_8;
		// if (name == null)
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON)
		int32_t L_10;
		L_10 = Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6(__this, NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// table[name] = ParseValue();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject* L_15;
		L_15 = Parser_ParseValue_m1B7E05DCE0B6435C7679A4878A0371B990764B41(__this, NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_13, L_14, L_15, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> OneSignalSDK.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m91F6F3E6E84BA32CF62544967F412C86A6C940F1 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_3;
		L_3 = Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_7 = V_2;
		RuntimeObject* L_8;
		L_8 = Parser_ParseByToken_mC26F86B5A9BB6DC7A8F419619B74B628F3C9F738(__this, L_7, NULL);
		V_3 = L_8;
		// array.Add(value);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_0;
		RuntimeObject* L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_9, L_10, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing)
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = V_0;
		return L_12;
	}
}
// System.Object OneSignalSDK.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m1B7E05DCE0B6435C7679A4878A0371B990764B41 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0;
		L_0 = Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6(__this, NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = Parser_ParseByToken_mC26F86B5A9BB6DC7A8F419619B74B628F3C9F738(__this, L_1, NULL);
		return L_2;
	}
}
// System.Object OneSignalSDK.Json/Parser::ParseByToken(OneSignalSDK.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_mC26F86B5A9BB6DC7A8F419619B74B628F3C9F738 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, int32_t ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1;
		L_1 = Parser_ParseString_mB3FF8B4C52AF5BC6279CE7DD5FD058B874E0078B(__this, NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject* L_2;
		L_2 = Parser_ParseNumber_m2C0B8EAD7D8ED45A37E1FB2ACD5E7A8212A2C714(__this, NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3;
		L_3 = Parser_ParseObject_mC129607C90BA628D70512884CD7410E92EC7493D(__this, NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4;
		L_4 = Parser_ParseArray_m91F6F3E6E84BA32CF62544967F412C86A6C940F1(__this, NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String OneSignalSDK.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mB3FF8B4C52AF5BC6279CE7DD5FD058B874E0078B (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_013d;
	}

IL_0019:
	{
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_3 = __this->___json_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0143;
		}
	}
	{
		// c = NextChar;
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF(__this, NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0135;
	}

IL_0040:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_0047:
	{
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_8 = __this->___json_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_005c;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_005c:
	{
		// c = NextChar;
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF(__this, NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_007c;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_012b;
	}

IL_007c:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0090;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00bd;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_012b;
	}

IL_0090:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d2;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_00dd;
			}
			case 1:
			{
				goto IL_012b;
			}
			case 2:
			{
				goto IL_00e8;
			}
			case 3:
			{
				goto IL_00f3;
			}
		}
	}
	{
		goto IL_012b;
	}

IL_00b0:
	{
		// s.Append(c);
		StringBuilder_t* L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_21, NULL);
		// break;
		goto IL_013d;
	}

IL_00bd:
	{
		// s.Append('\b');
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, 8, NULL);
		// break;
		goto IL_013d;
	}

IL_00c7:
	{
		// s.Append('\f');
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_25, ((int32_t)12), NULL);
		// break;
		goto IL_013d;
	}

IL_00d2:
	{
		// s.Append('\n');
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)10), NULL);
		// break;
		goto IL_013d;
	}

IL_00dd:
	{
		// s.Append('\r');
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, ((int32_t)13), NULL);
		// break;
		goto IL_013d;
	}

IL_00e8:
	{
		// s.Append('\t');
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)9), NULL);
		// break;
		goto IL_013d;
	}

IL_00f3:
	{
		// var hex = new char[4];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_33;
		// for (int i = 0; i < 4; i++)
		V_4 = 0;
		goto IL_010f;
	}

IL_00ff:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = V_3;
		int32_t L_35 = V_4;
		Il2CppChar L_36;
		L_36 = Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF(__this, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)L_36);
		// for (int i = 0; i < 4; i++)
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_010f:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_00ff;
		}
	}
	{
		// s.Append((char) Convert.ToInt32(new string(hex), 16));
		StringBuilder_t* L_39 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = V_3;
		String_t* L_41;
		L_41 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_m8881C26C9DC63CBE2186F7180F780706A10283F6(L_41, ((int32_t)16), NULL);
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		// break;
		goto IL_013d;
	}

IL_012b:
	{
		// s.Append(c);
		StringBuilder_t* L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, L_45, NULL);
		// break;
		goto IL_013d;
	}

IL_0135:
	{
		// s.Append(c);
		StringBuilder_t* L_47 = V_0;
		Il2CppChar L_48 = V_1;
		NullCheck(L_47);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_47, L_48, NULL);
	}

IL_013d:
	{
		// while (parsing)
		bool L_50 = V_2;
		if (L_50)
		{
			goto IL_0019;
		}
	}

IL_0143:
	{
		// return s.ToString();
		StringBuilder_t* L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_51);
		return L_52;
	}
}
// System.Object OneSignalSDK.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_m2C0B8EAD7D8ED45A37E1FB2ACD5E7A8212A2C714 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0;
		L_0 = Parser_get_NextWord_m523714E46B1A48A04432D11FF5FC181B9CEE638C(__this, NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1 && number.IndexOf('E') == -1 && number.IndexOf('e') == -1)
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_1, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)69), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_5, ((int32_t)101), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		// Int64.TryParse(number, System.Globalization.NumberStyles.Any,
		//     System.Globalization.CultureInfo.InvariantCulture, out parsedInt);
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_9;
		L_9 = Int64_TryParse_m280F0E3C898A7C3A57F35E3B136D4BFACE12122A(L_7, ((int32_t)511), L_8, (&V_2), NULL);
		// return parsedInt;
		int64_t L_10 = V_2;
		int64_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}

IL_0042:
	{
		// Double.TryParse(number, System.Globalization.NumberStyles.Any,
		//     System.Globalization.CultureInfo.InvariantCulture, out parsedDouble);
		String_t* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_15;
		L_15 = Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718(L_13, ((int32_t)511), L_14, (&V_1), NULL);
		// return parsedDouble;
		double L_16 = V_1;
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_17);
		return L_18;
	}
}
// System.Void OneSignalSDK.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mD5146E17EF15AFE2DF0C64426301D1EE6513C0A3 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = __this->___json_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (Char.IsWhiteSpace(PeekChar))
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_4, NULL);
		if (L_5)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char OneSignalSDK.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Convert.ToChar(json.Peek()); }
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_1, NULL);
		return L_2;
	}
}
// System.Char OneSignalSDK.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Convert.ToChar(json.Read()); }
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_1, NULL);
		return L_2;
	}
}
// System.String OneSignalSDK.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m523714E46B1A48A04432D11FF5FC181B9CEE638C (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t* L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_mB5FC1831EF72916E114ECA94FBCB3D8CA1056ACF(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, L_2, NULL);
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_4 = __this->___json_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		// while (!IsWordBreak(PeekChar))
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571(__this, NULL);
		bool L_7;
		L_7 = Parser_IsWordBreak_m05444C0460A11F4D35D86FE4B434D9051AC143CF(L_6, NULL);
		if (!L_7)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		// return word.ToString();
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// OneSignalSDK.Json/Parser/TOKEN OneSignalSDK.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mE11FFDBF97BAC9AD22EE729FD0D55364388325D6 (Parser_t6F2C17AE4B45A0B404D1881D47B2AA8B2981D38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_mD5146E17EF15AFE2DF0C64426301D1EE6513C0A3(__this, NULL);
		// if (json.Peek() == -1)
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar)
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_mA1D0A3B252CDD78BEA07DB4E6F898C66F71A7571(__this, NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_9 = __this->___json_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_13 = __this->___json_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord)
		String_t* L_15;
		L_15 = Parser_get_NextWord_m523714E46B1A48A04432D11FF5FC181B9CEE638C(__this, NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_17)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_19)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (L_21)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void OneSignalSDK.Json/Serializer::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m99E1E12C48B39230E7488D02026BF2572D0792DF (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, bool ___humanReadable0, int32_t ___indentSpaces1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer(bool humanReadable, int indentSpaces)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___builder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder_0), (void*)L_0);
		// this.humanReadable = humanReadable;
		bool L_1 = ___humanReadable0;
		__this->___humanReadable_1 = L_1;
		// this.indentSpaces = indentSpaces;
		int32_t L_2 = ___indentSpaces1;
		__this->___indentSpaces_2 = L_2;
		// indentLevel = 0;
		__this->___indentLevel_3 = 0;
		// }
		return;
	}
}
// System.String OneSignalSDK.Json/Serializer::MakeSerialization(System.Object,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_MakeSerialization_m67B2B5FFEF2561859D50B2809272E0B9581F5A05 (RuntimeObject* ___obj0, bool ___humanReadable1, int32_t ___indentSpaces2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer(humanReadable, indentSpaces);
		bool L_0 = ___humanReadable1;
		int32_t L_1 = ___indentSpaces2;
		Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* L_2 = (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5*)il2cpp_codegen_object_new(Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Serializer__ctor_m99E1E12C48B39230E7488D02026BF2572D0792DF(L_2, L_0, L_1, NULL);
		// instance.SerializeValue(obj);
		Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* L_3 = L_2;
		RuntimeObject* L_4 = ___obj0;
		NullCheck(L_3);
		Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847(L_3, L_4, NULL);
		// return instance.builder.ToString();
		NullCheck(L_3);
		StringBuilder_t* L_5 = L_3->___builder_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		return L_6;
	}
}
// System.Void OneSignalSDK.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* G_B7_0 = NULL;
	StringBuilder_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	{
		// if (value == null)
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t* L_1 = __this->___builder_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		return;
	}

IL_0015:
	{
		// else if ((asStr = value as string) != null)
		RuntimeObject* L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511(__this, L_5, NULL);
		return;
	}

IL_0027:
	{
		// else if (value is bool)
		RuntimeObject* L_6 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool) value ? "true" : "false");
		StringBuilder_t* L_7 = __this->___builder_0;
		RuntimeObject* L_8 = ___value0;
		G_B6_0 = L_7;
		if (((*(bool*)((bool*)(bool*)UnBox(L_8, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_7;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B8_1, G_B8_0, NULL);
		return;
	}

IL_0050:
	{
		// else if ((asList = value as IList) != null)
		RuntimeObject* L_10 = ___value0;
		RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_12 = V_0;
		Serializer_SerializeArray_m9D612F968FC32957BBCEA48C7554FB8B73CE6021(__this, L_12, NULL);
		return;
	}

IL_0062:
	{
		// else if ((asDict = value as IDictionary) != null)
		RuntimeObject* L_13 = ___value0;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_15 = V_1;
		Serializer_SerializeObject_m752864D4085775CF21F8A9866C857DCC72614491(__this, L_15, NULL);
		return;
	}

IL_0074:
	{
		// else if (value is char)
		RuntimeObject* L_16 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_16, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char) value, 1));
		RuntimeObject* L_17 = ___value0;
		String_t* L_18;
		L_18 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_17, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), 1, NULL);
		Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511(__this, L_18, NULL);
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject* L_19 = ___value0;
		Serializer_SerializeOther_mFFB73E1A04876CD6A2625EDD360AAC8B30DF155A(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Void OneSignalSDK.Json/Serializer::AppendNewLineFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, const RuntimeMethod* method) 
{
	{
		// builder.AppendLine();
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_0, NULL);
		// builder.Append(' ', indentSpaces * indentLevel);
		StringBuilder_t* L_2 = __this->___builder_0;
		int32_t L_3 = __this->___indentSpaces_2;
		int32_t L_4 = __this->___indentLevel_3;
		NullCheck(L_2);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_2, ((int32_t)32), ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		// }
		return;
	}
}
// System.Void OneSignalSDK.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m752864D4085775CF21F8A9866C857DCC72614491 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		// ++indentLevel;
		int32_t L_2 = __this->___indentLevel_3;
		__this->___indentLevel_3 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// foreach (object e in obj.Keys)
		RuntimeObject* L_3 = ___obj0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ab:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_3;
					if (!L_7)
					{
						goto IL_00bb;
					}
				}
				{
					RuntimeObject* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_00bb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a1_1;
			}

IL_002c_1:
			{
				// foreach (object e in obj.Keys)
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				// if (first)
				bool L_11 = V_0;
				if (!L_11)
				{
					goto IL_0046_1;
				}
			}
			{
				// if (humanReadable) AppendNewLineFunc();
				bool L_12 = __this->___humanReadable_1;
				if (!L_12)
				{
					goto IL_0062_1;
				}
			}
			{
				// if (humanReadable) AppendNewLineFunc();
				Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
				goto IL_0062_1;
			}

IL_0046_1:
			{
				// builder.Append(',');
				StringBuilder_t* L_13 = __this->___builder_0;
				NullCheck(L_13);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)44), NULL);
				// if (humanReadable) AppendNewLineFunc();
				bool L_15 = __this->___humanReadable_1;
				if (!L_15)
				{
					goto IL_0062_1;
				}
			}
			{
				// if (humanReadable) AppendNewLineFunc();
				Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
			}

IL_0062_1:
			{
				// SerializeString(e.ToString());
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
				Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511(__this, L_17, NULL);
				// builder.Append(':');
				StringBuilder_t* L_18 = __this->___builder_0;
				NullCheck(L_18);
				StringBuilder_t* L_19;
				L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)58), NULL);
				// if (humanReadable) builder.Append(' ');
				bool L_20 = __this->___humanReadable_1;
				if (!L_20)
				{
					goto IL_0092_1;
				}
			}
			{
				// if (humanReadable) builder.Append(' ');
				StringBuilder_t* L_21 = __this->___builder_0;
				NullCheck(L_21);
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, ((int32_t)32), NULL);
			}

IL_0092_1:
			{
				// SerializeValue(obj[e]);
				RuntimeObject* L_23 = ___obj0;
				RuntimeObject* L_24 = V_2;
				NullCheck(L_23);
				RuntimeObject* L_25;
				L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_23, L_24);
				Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847(__this, L_25, NULL);
				// first = false;
				V_0 = (bool)0;
			}

IL_00a1_1:
			{
				// foreach (object e in obj.Keys)
				RuntimeObject* L_26 = V_1;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_00bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		// --indentLevel;
		int32_t L_28 = __this->___indentLevel_3;
		__this->___indentLevel_3 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		// if (humanReadable && obj.Count > 0) AppendNewLineFunc();
		bool L_29 = __this->___humanReadable_1;
		if (!L_29)
		{
			goto IL_00e1;
		}
	}
	{
		RuntimeObject* L_30 = ___obj0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_30);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		// if (humanReadable && obj.Count > 0) AppendNewLineFunc();
		Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
	}

IL_00e1:
	{
		// builder.Append('}');
		StringBuilder_t* L_32 = __this->___builder_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)125), NULL);
		// }
		return;
	}
}
// System.Void OneSignalSDK.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m9D612F968FC32957BBCEA48C7554FB8B73CE6021 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// builder.Append('[');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// ++indentLevel;
		int32_t L_2 = __this->___indentLevel_3;
		__this->___indentLevel_3 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// bool first = true;
		V_0 = (bool)1;
		// for (int i = 0; i < anArray.Count; i++)
		V_1 = 0;
		goto IL_0066;
	}

IL_0022:
	{
		// object obj = anArray[i];
		RuntimeObject* L_3 = ___anArray0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3, L_4);
		V_2 = L_5;
		// if (first)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// if (humanReadable) AppendNewLineFunc();
		bool L_7 = __this->___humanReadable_1;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// if (humanReadable) AppendNewLineFunc();
		Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
		goto IL_0059;
	}

IL_003d:
	{
		// builder.Append(',');
		StringBuilder_t* L_8 = __this->___builder_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)44), NULL);
		// if (humanReadable) AppendNewLineFunc();
		bool L_10 = __this->___humanReadable_1;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// if (humanReadable) AppendNewLineFunc();
		Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
	}

IL_0059:
	{
		// SerializeValue(obj);
		RuntimeObject* L_11 = V_2;
		Serializer_SerializeValue_m05F48CBD03A0580F94083F0EC60ACC24025F9847(__this, L_11, NULL);
		// first = false;
		V_0 = (bool)0;
		// for (int i = 0; i < anArray.Count; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0066:
	{
		// for (int i = 0; i < anArray.Count; i++)
		int32_t L_13 = V_1;
		RuntimeObject* L_14 = ___anArray0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0022;
		}
	}
	{
		// --indentLevel;
		int32_t L_16 = __this->___indentLevel_3;
		__this->___indentLevel_3 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		// if (humanReadable && anArray.Count > 0) AppendNewLineFunc();
		bool L_17 = __this->___humanReadable_1;
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_18 = ___anArray0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		// if (humanReadable && anArray.Count > 0) AppendNewLineFunc();
		Serializer_AppendNewLineFunc_m1C3D039E09D1EBB75C8E5016A7754802E882CF26(__this, NULL);
	}

IL_0094:
	{
		// builder.Append(']');
		StringBuilder_t* L_20 = __this->___builder_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, ((int32_t)93), NULL);
		// }
		return;
	}
}
// System.Void OneSignalSDK.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511 (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		V_0 = L_3;
		// for (int i = 0; i < charArray.Length; i++)
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// char c = charArray[i];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t* L_11 = __this->___builder_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t* L_13 = __this->___builder_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t* L_17 = __this->___builder_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t* L_19 = __this->___builder_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t* L_21 = __this->___builder_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t* L_23 = __this->___builder_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m7B23BC2572EEB2B03EDAA26D2D9232C4A00DA00C(L_25, NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126))
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t* L_29 = __this->___builder_0;
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, L_30, NULL);
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t* L_32 = __this->___builder_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t* L_34 = __this->___builder_0;
		String_t* L_35;
		L_35 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
	}

IL_0129:
	{
		// for (int i = 0; i < charArray.Length; i++)
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012d:
	{
		// for (int i = 0; i < charArray.Length; i++)
		int32_t L_38 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t* L_40 = __this->___builder_0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Void OneSignalSDK.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mFFB73E1A04876CD6A2625EDD360AAC8B30DF155A (Serializer_t99E9F0C039FC8B46E85C6D18EDBE2EFC68781CF5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float)
		RuntimeObject* L_0 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		// builder.Append(((float) value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t* L_1 = __this->___builder_0;
		RuntimeObject* L_2 = ___value0;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_4;
		L_4 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_3, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_4, NULL);
		return;
	}

IL_002d:
	{
		// else if (value is int
		//          || value is uint
		//          || value is long
		//          || value is sbyte
		//          || value is byte
		//          || value is short
		//          || value is ushort
		//          || value is ulong)
		RuntimeObject* L_6 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_7 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_8 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_9 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_10 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_11 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_12 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_13 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}

IL_006d:
	{
		// builder.Append(value);
		StringBuilder_t* L_14 = __this->___builder_0;
		RuntimeObject* L_15 = ___value0;
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_14, L_15, NULL);
		return;
	}

IL_007b:
	{
		// else if (value is double
		//          || value is decimal)
		RuntimeObject* L_17 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_18 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_18, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}

IL_008b:
	{
		// builder.Append(Convert.ToDouble(value)
		//     .ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t* L_19 = __this->___builder_0;
		RuntimeObject* L_20 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A(L_20, NULL);
		V_1 = L_21;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_22;
		L_22 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_23;
		L_23 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789((&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_22, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, L_23, NULL);
		return;
	}

IL_00b0:
	{
		// SerializeString(value.ToString());
		RuntimeObject* L_25 = ___value0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		Serializer_SerializeString_mDC5E9C2B126BF45E499655700E82D80929FA3511(__this, L_26, NULL);
		// }
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
// System.Void OneSignalSDK.SDKDebug::add_LogIntercept(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_add_LogIntercept_mC8383950F821E903035ED0CA387D2E73405110EF (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept_0), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void OneSignalSDK.SDKDebug::remove_LogIntercept(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_remove_LogIntercept_m8F10FE5D8F33CA1A08B23B39D9A607051D656D1B (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept_0), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void OneSignalSDK.SDKDebug::add_WarnIntercept(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_add_WarnIntercept_m1443CD0CE2AB0A8853E77AE7B9644D5D94A88BDB (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept_1), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void OneSignalSDK.SDKDebug::remove_WarnIntercept(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_remove_WarnIntercept_mDE379B4C551CF133F11FEB7EBDD102B7BB4C6282 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept_1), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void OneSignalSDK.SDKDebug::add_ErrorIntercept(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_add_ErrorIntercept_mD47A358068E0EB7F42B5A34DBE9E2F63A1A75535 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept_2;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept_2), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void OneSignalSDK.SDKDebug::remove_ErrorIntercept(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_remove_ErrorIntercept_mFBEA0B75E98F83EFF5651535F5F4B83426476615 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept_2;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_4, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = V_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>((&((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept_2), L_5, L_6);
		V_0 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_8) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void OneSignalSDK.SDKDebug::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_Info_mD81B56D781D2CC2383DCA277D32D347E9A1C65E3 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LogIntercept != null)
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// LogIntercept(message);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___LogIntercept_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_1, L_2, NULL);
		return;
	}

IL_0013:
	{
		// else if (OneSignal.Default.LogLevel >= LogLevel.Info)
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_3;
		L_3 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(26 /* OneSignalSDK.LogLevel OneSignalSDK.OneSignal::get_LogLevel() */, L_3);
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_002b;
		}
	}
	{
		// Debug.Log(_formatMessage(message));
		String_t* L_5 = ___message0;
		String_t* L_6;
		L_6 = SDKDebug__formatMessage_m6D424D45A431D94B5E5858826E5E3CDEAC444007(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void OneSignalSDK.SDKDebug::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_Warn_mDFBA6826C62DDBA1D57BC24DD575E8CA7A123B41 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WarnIntercept != null)
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WarnIntercept(message);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___WarnIntercept_1;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_1, L_2, NULL);
		return;
	}

IL_0013:
	{
		// else if (OneSignal.Default.LogLevel >= LogLevel.Warn)
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_3;
		L_3 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(26 /* OneSignalSDK.LogLevel OneSignalSDK.OneSignal::get_LogLevel() */, L_3);
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogWarning(_formatMessage(message));
		String_t* L_5 = ___message0;
		String_t* L_6;
		L_6 = SDKDebug__formatMessage_m6D424D45A431D94B5E5858826E5E3CDEAC444007(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_6, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void OneSignalSDK.SDKDebug::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_Error_mD7AE7852A8EF05C33B1848FD9442C2AA82E4461C (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ErrorIntercept != null)
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept_2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// ErrorIntercept(message);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ((SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_StaticFields*)il2cpp_codegen_static_fields_for(SDKDebug_tF8D13EFEF2CFB61B0862388919A7481BBED893B6_il2cpp_TypeInfo_var))->___ErrorIntercept_2;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_1, L_2, NULL);
		return;
	}

IL_0013:
	{
		// else  if (OneSignal.Default.LogLevel >= LogLevel.Error)
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_3;
		L_3 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(26 /* OneSignalSDK.LogLevel OneSignalSDK.OneSignal::get_LogLevel() */, L_3);
		if ((((int32_t)L_4) < ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogError(_formatMessage(message));
		String_t* L_5 = ___message0;
		String_t* L_6;
		L_6 = SDKDebug__formatMessage_m6D424D45A431D94B5E5858826E5E3CDEAC444007(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_6, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.String OneSignalSDK.SDKDebug::_formatMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SDKDebug__formatMessage_m6D424D45A431D94B5E5858826E5E3CDEAC444007 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFB5DAA5265160CE753212EA77C3196536EF9342);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string _formatMessage(string message) => "[OneSignal] " + message;
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBFB5DAA5265160CE753212EA77C3196536EF9342, L_0, NULL);
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
// System.Void OneSignalSDK.UnityMainThreadDispatch::Send(System.Threading.SendOrPostCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatch_Send_mDD7478EBBD606183341FD07EED911F94753207FE (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void Send(SendOrPostCallback callback) => _context.Send(callback, null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = ___callback0;
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(4 /* System.Void System.Threading.SynchronizationContext::Send(System.Threading.SendOrPostCallback,System.Object) */, L_0, L_1, NULL);
		return;
	}
}
// System.Void OneSignalSDK.UnityMainThreadDispatch::Post(System.Threading.SendOrPostCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatch_Post_m5542BEE7356E29CDE42AA39D02D49A57C893A3E6 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void Post(SendOrPostCallback callback) => _context.Post(callback, null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = ___callback0;
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_0, L_1, NULL);
		return;
	}
}
// System.Void OneSignalSDK.UnityMainThreadDispatch::_initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatch__initialize_m319BA51B89FB7B59C40820DE648CB372C5EEA345 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B2_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B1_0 = NULL;
	{
		// private static void _initialize() => _context = _context ?? SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context_0;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_2;
		L_2 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		G_B2_0 = L_2;
	}

IL_000e:
	{
		((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatch_t2791D12B08651D1F1325AA78B06CFAA969DF7A12_il2cpp_TypeInfo_var))->____context_0), (void*)G_B2_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneSignal_set_AppId_mEF4FA0B42E20FBF5472625313F15E5FA34B76FA7_inline (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static string AppId { get; private set; }
		String_t* L_0 = ___value0;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OneSignal_set_DidInitialize_m079405FD214706F1F8A0966D0FE6FF2CAF11A9E8_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static bool DidInitialize { get; private set; }
		bool L_0 = ___value0;
		((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CDidInitializeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OneSignal_get_AppId_m9C021E0C13BA0E9B19710DDF8FE1C9025F3714DE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static string AppId { get; private set; }
		String_t* L_0 = ((OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields*)il2cpp_codegen_static_fields_for(OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_il2cpp_TypeInfo_var))->___U3CAppIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
