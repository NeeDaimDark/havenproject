#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,VivoxUnity.AsyncResult`1<vx_resp_base_t>>
struct Dictionary_2_tD8BBE259C7E6FD61AD9381C7499473B5E4E2FC90;
// System.EventHandler`1<VivoxUnity.KeyEventArg`1<System.String>>
struct EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003;
// System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>>
struct EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199;
// System.EventHandler`1<VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>>
struct EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<VivoxUnity.IChannelSession,System.Boolean>
struct Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560;
// System.Func`2<VivoxUnity.ITTSVoice,System.Boolean>
struct Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA;
// System.Func`2<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<RosterItem,System.Boolean>
struct Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<VivoxUnity.ChannelId>
struct IEnumerable_1_tECF2D7CDFD4255BC4F6CC614F4FF6B3DE14BC660;
// System.Collections.Generic.IEnumerable`1<VivoxUnity.IChannelSession>
struct IEnumerable_1_t7447999AE08C57D5E927EB3FBFEC81E653DCE7AA;
// System.Collections.Generic.IEnumerable`1<VivoxUnity.ITTSVoice>
struct IEnumerable_1_t58DBA6FF91F82D16FB76A25AABA1A340EC610BEF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<RosterItem>
struct IEnumerable_1_tDE28F7461EC763F44198F9A192E3F63E80CBE560;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Dropdown/OptionData>
struct IEnumerable_1_t48D22DF1140C37CEBB51C4E365703A607B2A4F07;
// System.Collections.Generic.IEqualityComparer`1<VivoxUnity.ChannelId>
struct IEqualityComparer_1_tB803645520F68827C20A2A2104523875AB52CD9E;
// System.Collections.Generic.IList`1<VivoxUnity.ITTSVoice>
struct IList_1_tC7FE9F3E0ED9E449901ABC86E6008538EF327B60;
// VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>
struct IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7;
// System.Collections.Generic.Dictionary`2/KeyCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct KeyCollection_t899ECEE87BDA2B23993BC60F1F09195DB74BCD3E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// VivoxUnity.KeyEventArg`1<System.Object>
struct KeyEventArg_1_t89A2EFF3F6BA86A1A7C679AC90F511B469301ADC;
// VivoxUnity.KeyEventArg`1<System.String>
struct KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<RosterItem>
struct List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>
struct Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A;
// VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>
struct QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F;
// VivoxUnity.QueueItemAddedEventArgs`1<System.Object>
struct QueueItemAddedEventArgs_1_t64C712687947974CEFCD6FA1A0C5F431B34BA962;
// System.Collections.Generic.Queue`1<System.IAsyncResult>
struct Queue_1_t743B3EE70937096E881F123BA206A7E669A90D09;
// VivoxUnity.Common.ReadWriteDictionary`3<VivoxUnity.AccountId,VivoxUnity.ILoginSession,VivoxUnity.Private.LoginSession>
struct ReadWriteDictionary_3_t8B56E807D7964CF0B393CF66BF2CAA1699DEE758;
// VivoxUnity.Common.ReadWriteDictionary`3<System.String,VivoxUnity.IAudioDevice,VivoxUnity.Private.AudioDevice>
struct ReadWriteDictionary_3_t1DD2D76DB83434DE9C779326477FA9C17621DC76;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`2<VivoxUnity.IParticipant,System.ComponentModel.PropertyChangedEventArgs>
struct UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// System.Collections.Generic.Dictionary`2/ValueCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct ValueCollection_t5977521002F72615B597B917BB8F205DFC498C24;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// VivoxUnity.ValueEventArg`2<System.Object,System.Object>
struct ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42;
// VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>
struct ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803;
// System.Collections.Generic.Dictionary`2/Entry<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>[]
struct EntryU5BU5D_t57554BDF99706E96DDD35F956F9B4B55C25AC9DA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// RosterItem[]
struct RosterItemU5BU5D_t4B9209CF4C52DFBBA67B80883C542A00451E5C71;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// Unity.Services.Vivox.Account
struct Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B;
// VivoxUnity.AccountId
struct AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// VivoxUnity.Private.AudioDevice
struct AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4;
// VivoxUnity.Private.AudioInputDevices
struct AudioInputDevices_t66A64D6B01AB65F996E324DCC390DA3F4517728D;
// VivoxUnity.Private.AudioOutputDevices
struct AudioOutputDevices_t091838B20322C11B563F81CBBFC501F950C92FC6;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ButtonState
struct ButtonState_t2F5D9F9D7AEC00E04175652AB76CF937EE97D190;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Unity.Services.Vivox.Channel
struct Channel_t9072FB76D421DBB4723F10DF254F1674140350C5;
// VivoxUnity.Channel3DProperties
struct Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA;
// VivoxUnity.ChannelId
struct ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E;
// VivoxUnity.Client
struct Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_t64184C006C4074F97882298B620A6A13A72087A9;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Tanks.UI.HUDMultiplayerScore
struct HUDMultiplayerScore_t66C0F62C87BEF4707FB8957FD80F3DDD2051AF61;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// VivoxUnity.IAudioDevices
struct IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97;
// Unity.Services.Authentication.IAuthenticationService
struct IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737;
// VivoxUnity.IChannelSession
struct IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614;
// VivoxUnity.IChannelTextMessage
struct IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// VivoxUnity.ILoginSession
struct ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152;
// VivoxUnity.IParticipant
struct IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD;
// VivoxUnity.ITTSVoice
struct ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116;
// VivoxUnity.ITextToSpeech
struct ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49;
// Unity.Services.Vivox.IVivoxService
struct IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LobbyScreenUI
struct LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4;
// LoginScreenUI
struct LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C;
// MainMenuOptions
struct MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// PositionalVoice
struct PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RosterItem
struct RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A;
// RosterManager
struct RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// VivoxUnity.TTSMessage
struct TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// TextChatUI
struct TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UIDirectionControl
struct UIDirectionControl_t45A7A354EB147D9974E6846DA65311EEF66970AC;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VivoxUnity.VivoxDebug
struct VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D;
// VivoxVoiceManager
struct VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VivoxUnity.VxClient
struct VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583;
// VivoxUnity.VxTokenGen
struct VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// vx_sdk_config_t
struct vx_sdk_config_t_tB3B1C8F939BA20DD0C196892DA093C3011564FDD;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// GameManager/<StartBuffer>d__10
struct U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// LobbyScreenUI/<>c
struct U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117;
// MainMenuOptions/<>c
struct U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PositionalVoice/OnParticipantProperty
struct OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// RosterManager/<>c
struct U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB;
// RosterManager/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// TextChatUI/<>c
struct U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9;
// TextChatUI/<SendScrollRectToBottom>d__20
struct U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// VivoxVoiceManager/<>c
struct U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540;
// VivoxVoiceManager/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357;
// VivoxVoiceManager/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C;
// VivoxVoiceManager/<Start>d__58
struct U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE;
// VivoxVoiceManager/ChannelTextMessageChangedHandler
struct ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB;
// VivoxVoiceManager/LoginStatusChangedHandler
struct LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A;
// VivoxVoiceManager/ParticipantStatusChangedHandler
struct ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D;
// VivoxVoiceManager/ParticipantValueChangedHandler
struct ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B;
// VivoxVoiceManager/ParticipantValueUpdatedHandler
struct ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56;
// VivoxVoiceManager/RecoveryStateChangedHandler
struct RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C;
// VivoxUnity.VxClient/HandleEventMessage
struct HandleEventMessage_t1C4D47B6ECA4CC02E505F31A583E432388A6FC3A;

IL2CPP_EXTERN_C RuntimeClass* Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Channel_t9072FB76D421DBB4723F10DF254F1674140350C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionRecoveryState_tC35647D67DBA7EE1ED0EDB3E93D41043C4FC8AE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t64184C006C4074F97882298B620A6A13A72087A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7447999AE08C57D5E927EB3FBFEC81E653DCE7AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2679F53F451E7C1669158B0255B7E39A2EEC2739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyedItemNotifyPropertyChanged_1_tBEDC8697E50901BE98E4B60602E8C465B04BBB76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral09DF0F4EA30887D5D6E2833D4C620AAAB11E1C34;
IL2CPP_EXTERN_C String_t* _stringLiteral09FF7F74F0F90C892E57933991F15B128305B1B3;
IL2CPP_EXTERN_C String_t* _stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911;
IL2CPP_EXTERN_C String_t* _stringLiteral18C19EF752E49234ADAF000130F1B8C0E533D1C2;
IL2CPP_EXTERN_C String_t* _stringLiteral18CE668E20774CC9AAEA72AB947CECE1BD372D6A;
IL2CPP_EXTERN_C String_t* _stringLiteral1960C5DA4F11A477B1648C5AE8A9A6CD7D3AA277;
IL2CPP_EXTERN_C String_t* _stringLiteral209D6C95315F539F036E51E085C33C40C40878D0;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26DDDA1B466C36EAF63ACFA7687FAC59D13AB0B8;
IL2CPP_EXTERN_C String_t* _stringLiteral282CB43FF4408CF43337C7A755263A1653212341;
IL2CPP_EXTERN_C String_t* _stringLiteral2D69CAE0AC1651DB4F092E55B86400B20FA0ECBB;
IL2CPP_EXTERN_C String_t* _stringLiteral2F40939B6CDDD36215CEF4124FF4F34AA9D77261;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral3A78E8CC1D676269140A4C0540A77A03A816A051;
IL2CPP_EXTERN_C String_t* _stringLiteral4A931BAD21B30C92ED8BBF021BCB27387AC5BF4D;
IL2CPP_EXTERN_C String_t* _stringLiteral50FD7BF6C27C395B9804B3F9FDD503078D1DADE5;
IL2CPP_EXTERN_C String_t* _stringLiteral598FD815901C07C96F51F94285D0E6575675E0FE;
IL2CPP_EXTERN_C String_t* _stringLiteral6020785A926649CF038C7965768B025B64B74D66;
IL2CPP_EXTERN_C String_t* _stringLiteral696330D1E2AB3205FE1000DD6FD10D31CD721E3B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748;
IL2CPP_EXTERN_C String_t* _stringLiteral7A5BC02F1D1CB47F566CF7BDA2F8B9269E32B73A;
IL2CPP_EXTERN_C String_t* _stringLiteral7AED3CB487C10B345B79E6F1F11EFB4CC9D12723;
IL2CPP_EXTERN_C String_t* _stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846;
IL2CPP_EXTERN_C String_t* _stringLiteral861698B5BDD391BC46A7D641FEBD491AFBB82D39;
IL2CPP_EXTERN_C String_t* _stringLiteral88C27C9252BDD577AD8270EB246D1191CC7C3091;
IL2CPP_EXTERN_C String_t* _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E;
IL2CPP_EXTERN_C String_t* _stringLiteral95F8B627CF4695408981A5FA5E7908623ADE1956;
IL2CPP_EXTERN_C String_t* _stringLiteral9642B44EBCCC7FCFC1D79B11E62750696304CB81;
IL2CPP_EXTERN_C String_t* _stringLiteral9677373A0B351941BE702A287F0B29AB6FC8B438;
IL2CPP_EXTERN_C String_t* _stringLiteralB00436C38DF6739F15950C8C6C451CD5028B7DB7;
IL2CPP_EXTERN_C String_t* _stringLiteralB47D0C69E9096A29CC82A6719ABF53C3AE403776;
IL2CPP_EXTERN_C String_t* _stringLiteralC9E369BE80D93F75A8B15354C47AF689AF0AA656;
IL2CPP_EXTERN_C String_t* _stringLiteralCC129F07568E30D7C8F3475EF183E33F17BAEBF3;
IL2CPP_EXTERN_C String_t* _stringLiteralD152B0B6FC8958AF2AF053D8F465DA919F4ED017;
IL2CPP_EXTERN_C String_t* _stringLiteralD31F238E2BFDF2B26F149401362C247796BED93E;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D6FD59178F3010F1AB669541164B6651F97367;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE158875ED390F9488AC132A775BB0C1A63CBB4D7;
IL2CPP_EXTERN_C String_t* _stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F23301F43FAF9CE1C2CD40E552B9952348975D;
IL2CPP_EXTERN_C String_t* _stringLiteralE9DB762CCB331794CDC9C04C10E3F770EEC07040;
IL2CPP_EXTERN_C String_t* _stringLiteralEADCFF2F9527E00370498BA0B164417E77D2B663;
IL2CPP_EXTERN_C String_t* _stringLiteralEB5B5DC2248D49B73508E62B24DC71BBDDA0B4E0;
IL2CPP_EXTERN_C String_t* _stringLiteralEEAED6BA2FFAC91E74FA8CC2645691A5D41227E2;
IL2CPP_EXTERN_C String_t* _stringLiteralF3ED7812E5EBC284BAA9EF0CE704248361EEDD50;
IL2CPP_EXTERN_C String_t* _stringLiteralF7AB9A490B68662219B76EACAAC39DCF86D23E73;
IL2CPP_EXTERN_C String_t* _stringLiteralFC7505A1CB0C67064B665F5E18561565AE8EADF3;
IL2CPP_EXTERN_C String_t* _stringLiteralFF5911A90ECA2D7170D6A38695A7121E94F4037D;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_mFB6FC843B03697EFCFB3F2FA296B170D7F85FA6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_m00CF8C3DD7C8F228B4FAD2518C64343A1438075F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m80B873016BFBD4CA756E1179F271D0A3446A4D5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mA12B6B8ADE4714303C03E3002FFC553F2D92F507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m99C1AE60C6647032B2DACDD7248041B45374D79E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mA94025B4480D270787527FF60CCEF6109A925979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m28B58285D91DEC9DAFB8C1570FBF1D4A85296D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE0935D7665A52F5DF75F29E901D240B3C66EF0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mBA328C325711912D1B7D815C3A0C8AAECB5E4069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m3F73BDAD0FB4134E3F592D22F6898D83B238EBFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE38088334EE217421E675493089AE687F9E878D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mE039A3D32B9732B76A00B30C847FF779CAFE1690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mE5B273E5A695F2577F3A5343D2929D4587400D3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m8BDBF3A604B887B002E157578E40EA37BB428438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mCC82E270837E891C22C02A37E2D1AEA0D5492D02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m37507257107483D44093E3C39B6BF56184D89E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4ED1BDB4002DD7041E65993BC64BAD6E53ACF1BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m976B7A02101938A597F99D0240D18FF5F2367F02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m768C18F4C7FC02B4F0C585994AABE2839361B19A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB88C349ED6D833C20D3C50D8BF4164EC9CB974D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3D9154E33397B472B684878675A3F464E2E480FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEB6DACE30961DF6238D736A85431AE262101EC67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_mA9E49D06D58039AB0CC79AD3D7CA5A7E7FB3CF6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mC1D001FF32AEFF2E4040D0641FDFD361499B1204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m68AA3007C82665F3A7DDD56EE1AC65DD6BDF7536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m56803F1970724ABB38CDE8EE4F82AC42C463CD83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7C854FFC39566069F60C62D248088A1824E5CC6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9CC1C8DBCE24FFAB49237FE01D15AF7BCCF6B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9F8EF6FDD70A658BAF2A40A092182FF05832126A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m93B48C383F31BF590CD78FA325887DEFD1FD5759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_OnRecoveryStateChanged_m589FF2AA095D4C564939B4A591C2907C46F33B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_OnUserLoggedIn_m3CA894613EB6CC17DC688735AA3571DFDA846893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_OnUserLoggedOut_m4A3DF929DF521AA9AD7D9C82C475EC4CBC24D1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_U3CAwakeU3Eb__9_0_m25975DB7367458BCC641D99C77941BBBB7FBF253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_U3COnUserLoggedInU3Eb__14_0_m3B1E5B83F09AC263EABB854298823C2D8FA5AA55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m885159A43D5C99EAA87158A2ED7DD5E00135F928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenUI_OnUserLoggedIn_m0982E3B306565E26B0698C94B8896D5A8C3924C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenUI_OnUserLoggedOut_m67148B50C6953A548AB198855ED8816574986EFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenUI_U3CAwakeU3Eb__7_0_mC8222DA5A14AA2EBB3FD3E77EFB385A4CE24C259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenUI_U3CAwakeU3Eb__7_1_m71A690C79B40883F66DE43C06CDC8300A732C652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_ConfirmNoAction_m9AA8F3811960D7FDB105530118E4501258254AB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_ConfirmYesButtonAction_m537123668D5A97E146AB5037BB67851B5DB0E3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_QuitButtonAction_m7C1B50B5DCFC7D8189A01A6A56A7AD96C24EDFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_SaveAction_m5AB02529BEB77E555EFB758FD9B1247771EA8C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_U3CSaveActionU3Eb__25_0_mB813462BA5FC0E8EE58A9D67CB62583C785B89E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_U3CSelectOptionFromSavedSettingsU3Eb__21_0_m6C5D14B4E1A82ED8E917E852D88ABA5A861BB6D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_U3CStartU3Eb__15_0_m973EB40C6E829FAF4267CEFE712064851D54A658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PositionalVoice_Participant_PropertyChanged_m60EF8B708DF9D3912B9B824F16746EF0A83E8864_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterItem_U3CSetupRosterItemU3Eb__16_0_m0F01EE38A68EC8726DC4E20E1DDD456D310CD8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterItem_U3CSetupRosterItemU3Eb__16_1_m413E8842BF977B500C623FAB86675A52E5077409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterManager_OnParticipantAdded_m6F3D9C12DEFC2ED89E990A1C3E284CC4A5AEB018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterManager_OnParticipantRemoved_mFDE9FBA5A3DF9159BECDDB104A7B515725D61199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterManager_OnUserLoggedOut_m87A6E8D8AB9716F07B0BC7650040D3DAC13A7D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_OnParticipantAdded_mD2FF955AB53A16A4C741904B47B417822F8E4D2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_OnTextMessageLogReceivedEvent_mD7818E299D73D53A62A20DADC200C8F18463FEE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_SubmitTTSMessageToVivox_m0AB700BABC5E9A9788FF34CB40A340BF0D11A67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_SubmitTextToVivox_m7B9B206D60B19BAF5B50FA7CB5674B5C4CAFCC38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_TTSToggleValueChanged_mE802273C12518AA2214B46A5C3628DAFC82E9A27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_U3CAwakeU3Eb__11_0_m7AF99EF21787F7E3B18AA059ADE40CCF3F6D66EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendScrollRectToBottomU3Ed__20_System_Collections_IEnumerator_Reset_m81D13ABA9089F34D0874B6C6A6BE8BC7D4874F78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartBufferU3Ed__10_System_Collections_IEnumerator_Reset_m4FCC8606C9F7230356638E5B79E475AFF48C0D0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAddAllTTSVoicesU3Eb__20_0_m12C384C3AE437DD314583D4D44468F8A661084EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__11_1_m7AA7B389D1DE9F7E6216964D82A4FDA7A355FE9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__5_0_m6610B537D793769510736E3C6DB3542351AA6690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnUserLoggedInU3Eb__14_1_mE907F25C303CDC95EB99DEE4E322D6D76600D8F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_TransmittingSessionU3Eb__55_0_m6E5629A1321C4493EA809DBB995DBB37155FE55C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CUpdateParticipantRosterU3Eb__0_m7E7D42B29D68D59D90AFE489285376865D909E7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass62_0_U3CJoinChannelU3Eb__0_m2F9D5968EB3CC645C00F8CB560724ACE2FE32ABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass63_0_U3CSendTextMessageU3Eb__0_mD343F83700D635B0DA0FC1783994D8E393F32956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mE645ECD3DC0357BA8FD50344CD1F1895D61F5760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnChannelPropertyChanged_mC9711AB2CA9A7BDFB69049333F5EA808B0A52293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnLoginSessionPropertyChanged_m25A7D5E05437DEF4425857BF7DC33166FC258CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnMessageLogRecieved_m03B6DDAE3A2BD0D646CDD822C0C8D8D55E60E1E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnParticipantAdded_mC6B84E338DEB9319174E852C7423F1FE63C6FDFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnParticipantRemoved_m4767180E28D2F9001F622F1F5A3F0D3CD36FB5FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnParticipantValueUpdated_m41A8A4FA37B1FF0B908EB392ACBACD2E48C613A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_SendTextMessage_m6DCB9204B2E090F922442DFB278ACABEBD35EAB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_U3CLoginU3Eb__60_0_m173270823375563322271A8E44F41071A6163D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_ValidateArgs_m079B602985CACF718FDBB996A980A55C8854F5D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_get_TransmittingSession_mFA8CDBFD2109D365FA8C061C51DF4EDCC18F5208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4BFA92127D90F8B6D0EFB94AB1D810F3CF97CA68 
{
};

// System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t57554BDF99706E96DDD35F956F9B4B55C25AC9DA* ____entries_1;
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
	KeyCollection_t899ECEE87BDA2B23993BC60F1F09195DB74BCD3E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5977521002F72615B597B917BB8F205DFC498C24* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct KeyCollection_t899ECEE87BDA2B23993BC60F1F09195DB74BCD3E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* ____dictionary_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<RosterItem>
struct List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RosterItemU5BU5D_t4B9209CF4C52DFBBA67B80883C542A00451E5C71* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RosterItemU5BU5D_t4B9209CF4C52DFBBA67B80883C542A00451E5C71* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<VivoxUnity.ITTSVoice>
struct ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct ValueCollection_t5977521002F72615B597B917BB8F205DFC498C24  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// VivoxUnity.AccountId
struct AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368  : public RuntimeObject
{
	// System.String VivoxUnity.AccountId::_domain
	String_t* ____domain_1;
	// System.String VivoxUnity.AccountId::_name
	String_t* ____name_2;
	// System.String VivoxUnity.AccountId::_issuer
	String_t* ____issuer_3;
	// System.String VivoxUnity.AccountId::_displayname
	String_t* ____displayname_4;
	// System.String VivoxUnity.AccountId::_environmentId
	String_t* ____environmentId_5;
	// System.String[] VivoxUnity.AccountId::_spokenLanguages
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____spokenLanguages_6;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// VivoxUnity.Private.AudioInputDevices
struct AudioInputDevices_t66A64D6B01AB65F996E324DCC390DA3F4517728D  : public RuntimeObject
{
	// System.String VivoxUnity.Private.AudioInputDevices::DefaultSystemDevice
	String_t* ___DefaultSystemDevice_0;
	// System.String VivoxUnity.Private.AudioInputDevices::DefaultCommunicationDevice
	String_t* ___DefaultCommunicationDevice_1;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_defaultSystemDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____defaultSystemDevice_2;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_defaultCommunicationDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____defaultCommunicationDevice_3;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_currentSystemDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____currentSystemDevice_4;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_currentCommunicationDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____currentCommunicationDevice_5;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_activeDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____activeDevice_6;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_effectiveDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____effectiveDevice_7;
	// System.Int32 VivoxUnity.Private.AudioInputDevices::_audioGain
	int32_t ____audioGain_8;
	// System.Boolean VivoxUnity.Private.AudioInputDevices::_muted
	bool ____muted_9;
	// System.Double VivoxUnity.Private.AudioInputDevices::_deviceEnergy
	double ____deviceEnergy_10;
	// VivoxUnity.VxClient VivoxUnity.Private.AudioInputDevices::_client
	VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* ____client_11;
	// VivoxUnity.Common.ReadWriteDictionary`3<System.String,VivoxUnity.IAudioDevice,VivoxUnity.Private.AudioDevice> VivoxUnity.Private.AudioInputDevices::_devices
	ReadWriteDictionary_3_t1DD2D76DB83434DE9C779326477FA9C17621DC76* ____devices_12;
	// System.ComponentModel.PropertyChangedEventHandler VivoxUnity.Private.AudioInputDevices::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_13;
};

// VivoxUnity.Private.AudioOutputDevices
struct AudioOutputDevices_t091838B20322C11B563F81CBBFC501F950C92FC6  : public RuntimeObject
{
	// System.String VivoxUnity.Private.AudioOutputDevices::DefaultSystemDevice
	String_t* ___DefaultSystemDevice_0;
	// System.String VivoxUnity.Private.AudioOutputDevices::DefaultCommunicationDevice
	String_t* ___DefaultCommunicationDevice_1;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_defaultSystemDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____defaultSystemDevice_2;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_defaultCommunicationDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____defaultCommunicationDevice_3;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_currentSystemDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____currentSystemDevice_4;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_currentCommunicationDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____currentCommunicationDevice_5;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_activeDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____activeDevice_6;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_effectiveDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____effectiveDevice_7;
	// System.Int32 VivoxUnity.Private.AudioOutputDevices::_volumeAdjustment
	int32_t ____volumeAdjustment_8;
	// System.Boolean VivoxUnity.Private.AudioOutputDevices::_muted
	bool ____muted_9;
	// System.Double VivoxUnity.Private.AudioOutputDevices::_deviceEnergy
	double ____deviceEnergy_10;
	// VivoxUnity.VxClient VivoxUnity.Private.AudioOutputDevices::_client
	VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* ____client_11;
	// VivoxUnity.Common.ReadWriteDictionary`3<System.String,VivoxUnity.IAudioDevice,VivoxUnity.Private.AudioDevice> VivoxUnity.Private.AudioOutputDevices::_devices
	ReadWriteDictionary_3_t1DD2D76DB83434DE9C779326477FA9C17621DC76* ____devices_12;
	// System.ComponentModel.PropertyChangedEventHandler VivoxUnity.Private.AudioOutputDevices::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_13;
};

// VivoxUnity.Channel3DProperties
struct Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA  : public RuntimeObject
{
	// System.Int32 VivoxUnity.Channel3DProperties::_audibleDistance
	int32_t ____audibleDistance_0;
	// System.Int32 VivoxUnity.Channel3DProperties::_conversationalDistance
	int32_t ____conversationalDistance_1;
	// System.Single VivoxUnity.Channel3DProperties::_audioFadeIntensityByDistance
	float ____audioFadeIntensityByDistance_2;
	// VivoxUnity.AudioFadeModel VivoxUnity.Channel3DProperties::_audioFadeModel
	int32_t ____audioFadeModel_3;
};

// VivoxUnity.ChannelId
struct ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E  : public RuntimeObject
{
	// System.String VivoxUnity.ChannelId::_domain
	String_t* ____domain_0;
	// System.String VivoxUnity.ChannelId::_name
	String_t* ____name_1;
	// System.String VivoxUnity.ChannelId::_issuer
	String_t* ____issuer_2;
	// System.String VivoxUnity.ChannelId::_environmentId
	String_t* ____environmentId_3;
	// VivoxUnity.ChannelType VivoxUnity.ChannelId::_type
	int32_t ____type_4;
	// VivoxUnity.Channel3DProperties VivoxUnity.ChannelId::_properties
	Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ____properties_5;
};

// VivoxUnity.Client
struct Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF  : public RuntimeObject
{
	// VivoxUnity.Common.ReadWriteDictionary`3<VivoxUnity.AccountId,VivoxUnity.ILoginSession,VivoxUnity.Private.LoginSession> VivoxUnity.Client::_loginSessions
	ReadWriteDictionary_3_t8B56E807D7964CF0B393CF66BF2CAA1699DEE758* ____loginSessions_0;
	// VivoxUnity.Private.AudioInputDevices VivoxUnity.Client::_inputDevices
	AudioInputDevices_t66A64D6B01AB65F996E324DCC390DA3F4517728D* ____inputDevices_1;
	// VivoxUnity.Private.AudioOutputDevices VivoxUnity.Client::_outputDevices
	AudioOutputDevices_t091838B20322C11B563F81CBBFC501F950C92FC6* ____outputDevices_2;
	// System.Uri VivoxUnity.Client::_serverUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____serverUri_3;
	// System.String VivoxUnity.Client::_connectorHandle
	String_t* ____connectorHandle_5;
	// System.Collections.Generic.Queue`1<System.IAsyncResult> VivoxUnity.Client::_pendingConnectorCreateRequests
	Queue_1_t743B3EE70937096E881F123BA206A7E669A90D09* ____pendingConnectorCreateRequests_6;
	// System.Boolean VivoxUnity.Client::_ttsIsInitialized
	bool ____ttsIsInitialized_7;
	// System.UInt32 VivoxUnity.Client::_ttsManagerId
	uint32_t ____ttsManagerId_8;
};

struct Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF_StaticFields
{
	// System.Int32 VivoxUnity.Client::_nextHandle
	int32_t ____nextHandle_4;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::<Values>k__BackingField
	RuntimeObject* ___U3CValuesU3Ek__BackingField_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Services.Authentication.SignInOptions
struct SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291  : public RuntimeObject
{
	// System.Boolean Unity.Services.Authentication.SignInOptions::<CreateAccount>k__BackingField
	bool ___U3CCreateAccountU3Ek__BackingField_0;
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

// VivoxUnity.TTSMessage
struct TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E  : public RuntimeObject
{
	// System.String VivoxUnity.TTSMessage::_text
	String_t* ____text_0;
	// VivoxUnity.TTSDestination VivoxUnity.TTSMessage::_destination
	int32_t ____destination_1;
	// VivoxUnity.ITTSVoice VivoxUnity.TTSMessage::_voice
	RuntimeObject* ____voice_2;
	// VivoxUnity.TTSMessageState VivoxUnity.TTSMessage::_state
	int32_t ____state_3;
	// System.UInt32 VivoxUnity.TTSMessage::_numConsumers
	uint32_t ____numConsumers_4;
	// System.Double VivoxUnity.TTSMessage::_duration
	double ____duration_5;
	// System.UInt32 VivoxUnity.TTSMessage::_key
	uint32_t ____key_6;
	// VivoxUnity.ITextToSpeech VivoxUnity.TTSMessage::_ttsSubSystem
	RuntimeObject* ____ttsSubSystem_7;
	// System.ComponentModel.PropertyChangedEventHandler VivoxUnity.TTSMessage::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_8;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// VivoxUnity.VivoxConfig
struct VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47  : public RuntimeObject
{
	// vx_sdk_config_t VivoxUnity.VivoxConfig::vx_sdk_config
	vx_sdk_config_t_tB3B1C8F939BA20DD0C196892DA093C3011564FDD* ___vx_sdk_config_0;
	// System.Boolean VivoxUnity.VivoxConfig::<SkipPrepareForVivox>k__BackingField
	bool ___U3CSkipPrepareForVivoxU3Ek__BackingField_1;
};

// VivoxUnity.VivoxDebug
struct VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D  : public RuntimeObject
{
	// System.Int32 VivoxUnity.VivoxDebug::debugLocation
	int32_t ___debugLocation_1;
	// System.Boolean VivoxUnity.VivoxDebug::throwInternalExcepetions
	bool ___throwInternalExcepetions_2;
};

struct VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D_StaticFields
{
	// VivoxUnity.VivoxDebug VivoxUnity.VivoxDebug::_instance
	VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D* ____instance_0;
};

// Unity.Services.Vivox.VivoxService
struct VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07  : public RuntimeObject
{
};

struct VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_StaticFields
{
	// Unity.Services.Vivox.IVivoxService Unity.Services.Vivox.VivoxService::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
};

// VivoxUnity.VxClient
struct VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,VivoxUnity.AsyncResult`1<vx_resp_base_t>> VivoxUnity.VxClient::_pendingRequests
	Dictionary_2_tD8BBE259C7E6FD61AD9381C7499473B5E4E2FC90* ____pendingRequests_1;
	// System.Int64 VivoxUnity.VxClient::_nextRequestId
	int64_t ____nextRequestId_2;
	// System.Int32 VivoxUnity.VxClient::_startCount
	int32_t ____startCount_3;
	// System.String VivoxUnity.VxClient::defaultRealm
	String_t* ___defaultRealm_5;
	// VivoxUnity.VivoxDebug VivoxUnity.VxClient::vivoxDebug
	VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D* ___vivoxDebug_6;
	// VivoxUnity.VxTokenGen VivoxUnity.VxClient::tokenGen
	VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95* ___tokenGen_7;
	// VivoxUnity.VxClient/HandleEventMessage VivoxUnity.VxClient::EventMessageReceived
	HandleEventMessage_t1C4D47B6ECA4CC02E505F31A583E432388A6FC3A* ___EventMessageReceived_8;
	// System.Boolean VivoxUnity.VxClient::disposed
	bool ___disposed_9;
};

struct VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583_StaticFields
{
	// VivoxUnity.VxClient VivoxUnity.VxClient::_instance
	VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* ____instance_0;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F  : public RuntimeObject
{
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// GameManager/<StartBuffer>d__10
struct U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F  : public RuntimeObject
{
	// System.Int32 GameManager/<StartBuffer>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<StartBuffer>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<StartBuffer>d__10::<>4__this
	GameManager_t64184C006C4074F97882298B620A6A13A72087A9* ___U3CU3E4__this_2;
};

// LobbyScreenUI/<>c
struct U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117  : public RuntimeObject
{
};

struct U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_StaticFields
{
	// LobbyScreenUI/<>c LobbyScreenUI/<>c::<>9
	U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117* ___U3CU3E9_0;
	// System.AsyncCallback LobbyScreenUI/<>c::<>9__14_1
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___U3CU3E9__14_1_1;
};

// MainMenuOptions/<>c
struct U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755  : public RuntimeObject
{
};

struct U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_StaticFields
{
	// MainMenuOptions/<>c MainMenuOptions/<>c::<>9
	U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755* ___U3CU3E9_0;
	// System.Func`2<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData> MainMenuOptions/<>c::<>9__20_0
	Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* ___U3CU3E9__20_0_1;
};

// RosterManager/<>c
struct U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB  : public RuntimeObject
{
};

struct U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_StaticFields
{
	// RosterManager/<>c RosterManager/<>c::<>9
	U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB* ___U3CU3E9_0;
	// System.Func`2<VivoxUnity.IChannelSession,System.Boolean> RosterManager/<>c::<>9__5_0
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* ___U3CU3E9__5_0_1;
};

// RosterManager/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A  : public RuntimeObject
{
	// VivoxUnity.IParticipant RosterManager/<>c__DisplayClass12_0::participant
	RuntimeObject* ___participant_0;
};

// TextChatUI/<>c
struct U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9  : public RuntimeObject
{
};

struct U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_StaticFields
{
	// TextChatUI/<>c TextChatUI/<>c::<>9
	U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9* ___U3CU3E9_0;
	// System.Func`2<VivoxUnity.IChannelSession,System.Boolean> TextChatUI/<>c::<>9__11_1
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* ___U3CU3E9__11_1_1;
};

// TextChatUI/<SendScrollRectToBottom>d__20
struct U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC  : public RuntimeObject
{
	// System.Int32 TextChatUI/<SendScrollRectToBottom>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TextChatUI/<SendScrollRectToBottom>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TextChatUI TextChatUI/<SendScrollRectToBottom>d__20::<>4__this
	TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* ___U3CU3E4__this_2;
};

// VivoxVoiceManager/<>c
struct U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540  : public RuntimeObject
{
};

struct U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_StaticFields
{
	// VivoxVoiceManager/<>c VivoxVoiceManager/<>c::<>9
	U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540* ___U3CU3E9_0;
	// System.Func`2<VivoxUnity.IChannelSession,System.Boolean> VivoxVoiceManager/<>c::<>9__55_0
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* ___U3CU3E9__55_0_1;
};

// VivoxVoiceManager/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357  : public RuntimeObject
{
	// VivoxUnity.IChannelSession VivoxVoiceManager/<>c__DisplayClass62_0::channelSession
	RuntimeObject* ___channelSession_0;
	// VivoxVoiceManager VivoxVoiceManager/<>c__DisplayClass62_0::<>4__this
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ___U3CU3E4__this_1;
};

// VivoxVoiceManager/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C  : public RuntimeObject
{
	// VivoxUnity.IChannelSession VivoxVoiceManager/<>c__DisplayClass63_0::channelSession
	RuntimeObject* ___channelSession_0;
	// VivoxVoiceManager VivoxVoiceManager/<>c__DisplayClass63_0::<>4__this
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ___U3CU3E4__this_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<RosterItem>
struct Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// VivoxUnity.KeyEventArg`1<System.Object>
struct KeyEventArg_1_t89A2EFF3F6BA86A1A7C679AC90F511B469301ADC  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// TK VivoxUnity.KeyEventArg`1::<Key>k__BackingField
	RuntimeObject* ___U3CKeyU3Ek__BackingField_1;
};

// VivoxUnity.KeyEventArg`1<System.String>
struct KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// TK VivoxUnity.KeyEventArg`1::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_1;
};

// VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>
struct QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// T VivoxUnity.QueueItemAddedEventArgs`1::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// VivoxUnity.QueueItemAddedEventArgs`1<System.Object>
struct QueueItemAddedEventArgs_1_t64C712687947974CEFCD6FA1A0C5F431B34BA962  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// T VivoxUnity.QueueItemAddedEventArgs`1::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<VivoxUnity.IParticipant,System.ComponentModel.PropertyChangedEventArgs>
struct UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// VivoxUnity.ValueEventArg`2<System.Object,System.Object>
struct ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// TK VivoxUnity.ValueEventArg`2::<Key>k__BackingField
	RuntimeObject* ___U3CKeyU3Ek__BackingField_1;
	// TV VivoxUnity.ValueEventArg`2::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_2;
	// System.String VivoxUnity.ValueEventArg`2::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_3;
};

// VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>
struct ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// TK VivoxUnity.ValueEventArg`2::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_1;
	// TV VivoxUnity.ValueEventArg`2::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_2;
	// System.String VivoxUnity.ValueEventArg`2::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_3;
};

// Unity.Services.Vivox.Account
struct Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B  : public AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368
{
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// Unity.Services.Vivox.Channel
struct Channel_t9072FB76D421DBB4723F10DF254F1674140350C5  : public ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E
{
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String System.ComponentModel.PropertyChangedEventArgs::_propertyName
	String_t* ____propertyName_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// PositionalVoice/OnParticipantProperty
struct OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F  : public UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// VivoxVoiceManager/<Start>d__58
struct U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE  : public RuntimeObject
{
	// System.Int32 VivoxVoiceManager/<Start>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder VivoxVoiceManager/<Start>d__58::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// VivoxVoiceManager VivoxVoiceManager/<Start>d__58::<>4__this
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ___U3CU3E4__this_2;
	// Unity.Services.Core.InitializationOptions VivoxVoiceManager/<Start>d__58::<options>5__1
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___U3CoptionsU3E5__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter VivoxVoiceManager/<Start>d__58::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// System.EventHandler`1<VivoxUnity.KeyEventArg`1<System.String>>
struct EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003  : public MulticastDelegate_t
{
};

// System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>>
struct EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199  : public MulticastDelegate_t
{
};

// System.EventHandler`1<VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>>
struct EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01  : public MulticastDelegate_t
{
};

// System.Func`2<VivoxUnity.IChannelSession,System.Boolean>
struct Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560  : public MulticastDelegate_t
{
};

// System.Func`2<VivoxUnity.ITTSVoice,System.Boolean>
struct Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA  : public MulticastDelegate_t
{
};

// System.Func`2<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6  : public MulticastDelegate_t
{
};

// System.Func`2<RosterItem,System.Boolean>
struct Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332  : public MulticastDelegate_t
{
};

// System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>
struct Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/ChannelTextMessageChangedHandler
struct ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/LoginStatusChangedHandler
struct LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/ParticipantStatusChangedHandler
struct ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/ParticipantValueChangedHandler
struct ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/ParticipantValueUpdatedHandler
struct ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/RecoveryStateChangedHandler
struct RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// ButtonState
struct ButtonState_t2F5D9F9D7AEC00E04175652AB76CF937EE97D190  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ButtonState::_isPressed
	bool ____isPressed_4;
	// System.Boolean ButtonState::_isDown
	bool ____isDown_5;
	// System.Boolean ButtonState::_isUp
	bool ____isUp_6;
};

// GameManager
struct GameManager_t64184C006C4074F97882298B620A6A13A72087A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::localTank
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___localTank_5;
	// UnityEngine.UI.Button GameManager::BoostButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BoostButton_6;
	// UnityEngine.UI.Button GameManager::ShootButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ShootButton_7;
	// System.Boolean GameManager::IsGameInputEnabled
	bool ___IsGameInputEnabled_8;
	// System.Int32 GameManager::RedTeamScore
	int32_t ___RedTeamScore_9;
	// System.Int32 GameManager::BlueTeamScore
	int32_t ___BlueTeamScore_10;
};

struct GameManager_t64184C006C4074F97882298B620A6A13A72087A9_StaticFields
{
	// GameManager GameManager::s_Instance
	GameManager_t64184C006C4074F97882298B620A6A13A72087A9* ___s_Instance_4;
};

// Tanks.UI.HUDMultiplayerScore
struct HUDMultiplayerScore_t66C0F62C87BEF4707FB8957FD80F3DDD2051AF61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Tanks.UI.HUDMultiplayerScore::m_TargetValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TargetValue_4;
	// UnityEngine.GameObject[] Tanks.UI.HUDMultiplayerScore::m_ScoreParent
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_ScoreParent_5;
	// UnityEngine.UI.Image[] Tanks.UI.HUDMultiplayerScore::m_TeamIcons
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___m_TeamIcons_6;
	// UnityEngine.UI.Text[] Tanks.UI.HUDMultiplayerScore::m_TeamScores
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___m_TeamScores_7;
};

// LobbyScreenUI
struct LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager LobbyScreenUI::_vivoxVoiceManager
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ____vivoxVoiceManager_4;
	// System.String LobbyScreenUI::LobbyChannelName
	String_t* ___LobbyChannelName_5;
	// UnityEngine.EventSystems.EventSystem LobbyScreenUI::_evtSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ____evtSystem_6;
	// UnityEngine.UI.Button LobbyScreenUI::LogoutButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___LogoutButton_7;
	// UnityEngine.GameObject LobbyScreenUI::LobbyScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LobbyScreen_8;
	// UnityEngine.GameObject LobbyScreenUI::ConnectionIndicatorDot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConnectionIndicatorDot_9;
	// UnityEngine.GameObject LobbyScreenUI::ConnectionIndicatorText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConnectionIndicatorText_10;
	// UnityEngine.UI.Image LobbyScreenUI::_connectionIndicatorDotImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____connectionIndicatorDotImage_11;
	// UnityEngine.UI.Text LobbyScreenUI::_connectionIndicatorDotText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____connectionIndicatorDotText_12;
};

// LoginScreenUI
struct LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager LoginScreenUI::_vivoxVoiceManager
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ____vivoxVoiceManager_4;
	// UnityEngine.UI.Button LoginScreenUI::LoginButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___LoginButton_5;
	// UnityEngine.UI.InputField LoginScreenUI::DisplayNameInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___DisplayNameInput_6;
	// UnityEngine.GameObject LoginScreenUI::LoginScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LoginScreen_7;
	// System.Int32 LoginScreenUI::defaultMaxStringLength
	int32_t ___defaultMaxStringLength_8;
	// System.Int32 LoginScreenUI::PermissionAskedCount
	int32_t ___PermissionAskedCount_9;
	// UnityEngine.EventSystems.EventSystem LoginScreenUI::_evtSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ____evtSystem_10;
};

// MainMenuOptions
struct MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button MainMenuOptions::SaveButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___SaveButton_4;
	// UnityEngine.UI.Button MainMenuOptions::QuitButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___QuitButton_5;
	// UnityEngine.UI.Dropdown MainMenuOptions::TTSVoiceDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___TTSVoiceDropdown_6;
	// UnityEngine.GameObject MainMenuOptions::ConfirmationMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConfirmationMenu_7;
	// UnityEngine.UI.Button MainMenuOptions::ConfirmYesButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ConfirmYesButton_8;
	// UnityEngine.UI.Button MainMenuOptions::ConfirmNoButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ConfirmNoButton_9;
	// UnityEngine.EventSystems.EventSystem MainMenuOptions::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_10;
	// System.Int32 MainMenuOptions::_selected_tts_voice_index
	int32_t ____selected_tts_voice_index_11;
	// System.String MainMenuOptions::tts_voice_setting
	String_t* ___tts_voice_setting_12;
};

// PositionalVoice
struct PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PositionalVoice/OnParticipantProperty PositionalVoice::m_ParticipantPropertyEvent
	OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F* ___m_ParticipantPropertyEvent_4;
	// UnityEngine.GameObject PositionalVoice::PositionalGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PositionalGameObject_5;
	// System.Boolean PositionalVoice::<isSpeaking>k__BackingField
	bool ___U3CisSpeakingU3Ek__BackingField_6;
	// VivoxUnity.Channel3DProperties PositionalVoice::<ChannelProperties>k__BackingField
	Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___U3CChannelPropertiesU3Ek__BackingField_7;
	// VivoxUnity.IChannelSession PositionalVoice::ChannelSession
	RuntimeObject* ___ChannelSession_8;
	// System.String PositionalVoice::positionalChannelName
	String_t* ___positionalChannelName_9;
	// VivoxUnity.IParticipant PositionalVoice::_participant
	RuntimeObject* ____participant_10;
};

// RosterItem
struct RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager RosterItem::_vivoxVoiceManager
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ____vivoxVoiceManager_4;
	// VivoxUnity.IParticipant RosterItem::Participant
	RuntimeObject* ___Participant_5;
	// UnityEngine.UI.Text RosterItem::PlayerNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PlayerNameText_6;
	// UnityEngine.UI.Image RosterItem::ChatStateImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ChatStateImage_7;
	// UnityEngine.Sprite RosterItem::MutedImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___MutedImage_8;
	// UnityEngine.Sprite RosterItem::SpeakingImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___SpeakingImage_9;
	// UnityEngine.Sprite RosterItem::NotSpeakingImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___NotSpeakingImage_10;
	// System.Boolean RosterItem::isMuted
	bool ___isMuted_11;
	// System.Boolean RosterItem::isSpeaking
	bool ___isSpeaking_12;
};

// RosterManager
struct RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager RosterManager::_vivoxVoiceManager
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ____vivoxVoiceManager_5;
	// System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>> RosterManager::rosterObjects
	Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* ___rosterObjects_6;
	// UnityEngine.GameObject RosterManager::rosterItemPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rosterItemPrefab_7;
};

// TextChatUI
struct TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager TextChatUI::_vivoxVoiceManager
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ____vivoxVoiceManager_4;
	// VivoxUnity.ChannelId TextChatUI::_lobbyChannelId
	ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ____lobbyChannelId_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TextChatUI::_messageObjPool
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____messageObjPool_7;
	// UnityEngine.UI.ScrollRect TextChatUI::_textChatScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ____textChatScrollRect_8;
	// UnityEngine.GameObject TextChatUI::ChatContentObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ChatContentObj_9;
	// UnityEngine.GameObject TextChatUI::MessageObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MessageObject_10;
	// UnityEngine.UI.Button TextChatUI::EnterButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___EnterButton_11;
	// UnityEngine.UI.Button TextChatUI::SendTTSMessageButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___SendTTSMessageButton_12;
	// UnityEngine.UI.InputField TextChatUI::MessageInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___MessageInputField_13;
	// UnityEngine.UI.Toggle TextChatUI::ToggleTTS
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___ToggleTTS_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIDirectionControl
struct UIDirectionControl_t45A7A354EB147D9974E6846DA65311EEF66970AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VivoxVoiceManager
struct VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager/ParticipantValueChangedHandler VivoxVoiceManager::OnSpeechDetectedEvent
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* ___OnSpeechDetectedEvent_4;
	// VivoxVoiceManager/ParticipantValueUpdatedHandler VivoxVoiceManager::OnAudioEnergyChangedEvent
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* ___OnAudioEnergyChangedEvent_5;
	// VivoxVoiceManager/ParticipantStatusChangedHandler VivoxVoiceManager::OnParticipantAddedEvent
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___OnParticipantAddedEvent_6;
	// VivoxVoiceManager/ParticipantStatusChangedHandler VivoxVoiceManager::OnParticipantRemovedEvent
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___OnParticipantRemovedEvent_7;
	// VivoxVoiceManager/ChannelTextMessageChangedHandler VivoxVoiceManager::OnTextMessageLogReceivedEvent
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* ___OnTextMessageLogReceivedEvent_8;
	// VivoxVoiceManager/LoginStatusChangedHandler VivoxVoiceManager::OnUserLoggedInEvent
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___OnUserLoggedInEvent_9;
	// VivoxVoiceManager/LoginStatusChangedHandler VivoxVoiceManager::OnUserLoggedOutEvent
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___OnUserLoggedOutEvent_10;
	// VivoxVoiceManager/RecoveryStateChangedHandler VivoxVoiceManager::OnRecoveryStateChangedEvent
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* ___OnRecoveryStateChangedEvent_11;
	// Unity.Services.Vivox.Account VivoxVoiceManager::m_Account
	Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* ___m_Account_12;
	// System.String VivoxVoiceManager::_key
	String_t* ____key_15;
	// System.String VivoxVoiceManager::_issuer
	String_t* ____issuer_16;
	// System.String VivoxVoiceManager::_domain
	String_t* ____domain_17;
	// System.String VivoxVoiceManager::_server
	String_t* ____server_18;
	// VivoxUnity.LoginState VivoxVoiceManager::<LoginState>k__BackingField
	int32_t ___U3CLoginStateU3Ek__BackingField_19;
	// VivoxUnity.ILoginSession VivoxVoiceManager::LoginSession
	RuntimeObject* ___LoginSession_20;
};

struct VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields
{
	// System.Object VivoxVoiceManager::m_Lock
	RuntimeObject* ___m_Lock_13;
	// VivoxVoiceManager VivoxVoiceManager::m_Instance
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ___m_Instance_14;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___source0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T VivoxUnity.QueueItemAddedEventArgs`1<System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* QueueItemAddedEventArgs_1_get_Value_m139FA2D84818BAB6E3013D07AF409D656AD1A2E1_gshared_inline (QueueItemAddedEventArgs_1_t64C712687947974CEFCD6FA1A0C5F431B34BA962* __this, const RuntimeMethod* method) ;
// TK VivoxUnity.KeyEventArg`1<System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyEventArg_1_get_Key_m5A6721BC9397CFD07BBD5E71D877CF4B2208B895_gshared_inline (KeyEventArg_1_t89A2EFF3F6BA86A1A7C679AC90F511B469301ADC* __this, const RuntimeMethod* method) ;
// TK VivoxUnity.ValueEventArg`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueEventArg_2_get_Key_m50FABB89833DC4941E8089DD37E5371F409A5C77_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) ;
// TV VivoxUnity.ValueEventArg`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueEventArg_2_get_Value_mD755E0B4406560927FCB160D66ABE2CAEB288F5D_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) ;
// System.String VivoxUnity.ValueEventArg`2<System.Object,System.Object>::get_PropertyName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueEventArg_2_get_PropertyName_m8A88DE4C4BA8719F3F0B390A70FDB487D27A3FB5_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;

// System.Collections.IEnumerator GameManager::StartBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartBuffer_m34B519F26EDD1A1804EB228CD8206B81DC035C31 (GameManager_t64184C006C4074F97882298B620A6A13A72087A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GameManager/<StartBuffer>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBufferU3Ed__10__ctor_mDA6F3E8DC3944EDC7F0545CC3728CEC7074E779A (U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// VivoxVoiceManager VivoxVoiceManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject MainMenuOptions::get_m_optionsMenuPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MainMenuOptions_get_m_optionsMenuPanel_m79F7B2B37DBF20BDA115B29CECA0DB58A7D23903 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// VivoxVoiceManager MainMenuOptions::get__vivoxVoiceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* MainMenuOptions_get__vivoxVoiceManager_mE02094ADA4BA09C239953F53D020FFF037642F2F (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::AddAllTTSVoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_AddAllTTSVoices_m485EF3A8E0E2D746D736ADCEDDEC0F049285F371 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___call0, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1 (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Clear()
inline void List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Func`2<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0C8B23ADA9BE8C9E7D2C61431B35D4B84DEFE28F (Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m37507257107483D44093E3C39B6BF56184D89E4F (RuntimeObject* ___source0, Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void MainMenuOptions::SelectOptionFromSavedSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_SelectOptionFromSavedSettings_m276BCB92AC2FBEBCD7F8F92556D053A5C9B464FE (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m7A84E959305036F80FCD7B6544C987F1B27784E8 (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean MainMenuOptions::get_isDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainMenuOptions_get_isDirty_m5D41815D6B858105A4F38EC1B800723BB795A7A6 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::ShowConfirmMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ShowConfirmMenu_m40969D0A94809378CC47354799F8620D79675B9A (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, bool ___showMenu0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::ShowOptionsMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ShowOptionsMenu_m1496721B6C9FD1ED1C92DCC75576F7BC037482C0 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, bool ___showMenu0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<VivoxUnity.ITTSVoice,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6C3CCBA146B66D9CF90AA91673F10B351850BF32 (Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<VivoxUnity.ITTSVoice>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m8BDBF3A604B887B002E157578E40EA37BB428438 (RuntimeObject* ___source0, Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::SaveAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_SaveAction_m5AB02529BEB77E555EFB758FD9B1247771EA8C27 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::ttsDropdownValueChangedHandler(UnityEngine.UI.Dropdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ttsDropdownValueChangedHandler_m1FEB2491EDE400722AFD7D867EEF82FE5686F2C6 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void MainMenuOptions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC170517A4813A334AFD7EFF6E43962D0DBEE118 (U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m6321993E5D83F3A7E52ADC14C9276508D1129166 (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown/OptionData::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData_set_text_mA6022A455FC38025B0CA97B4E3629DA10FDE259E (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void PositionalVoice::SetupParticipantHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_SetupParticipantHandlers_mAA438099B934A16992F7F8F3960283A9AED99B91 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// VivoxUnity.IParticipant PositionalVoice::get_Participant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PositionalVoice_get_Participant_mC00527A1E0C2E67DE3AC6BB15C236E90DF59F4D4 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82 (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<VivoxUnity.IParticipant,System.ComponentModel.PropertyChangedEventArgs>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F (UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA* __this, RuntimeObject* ___arg00, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA*, RuntimeObject*, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void PositionalVoice::set_isSpeaking(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PositionalVoice_set_isSpeaking_mA2813DDB7AB4F7438FAE8F1F7967477954391652_inline (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// VivoxUnity.VxClient VivoxUnity.VxClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* VxClient_get_Instance_m2167C416B6C44B9635D97097549D905C162AA991 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void PositionalVoice::Update3dPosition(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_Update3dPosition_m0E83E5C79FC4C7EB7716B4D6CC51B09B492F04A3 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___listener0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___speaker1, const RuntimeMethod* method) ;
// System.Void PositionalVoice/OnParticipantProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnParticipantProperty__ctor_m9CD98E077D53449C5AD8A80FF899EAEA45DAC63F (OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<VivoxUnity.IParticipant,System.ComponentModel.PropertyChangedEventArgs>::.ctor()
inline void UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F (UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93 (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedInEvent_m122BC18E88C658CA3E2A567C2F6F63376A6226DA (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedOutEvent_m7B4C5C147E0C3CE56ED83FC221725EFBE3A985EE (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/RecoveryStateChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecoveryStateChangedHandler__ctor_m9D0CB80AB3E1A4BE1CEEF59C1D8D91CF02A4077A (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnRecoveryStateChangedEvent(VivoxVoiceManager/RecoveryStateChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnRecoveryStateChangedEvent_m7670B4C1B64E81428DE4CA1640051535223143BF (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* ___value0, const RuntimeMethod* method) ;
// VivoxUnity.LoginState VivoxVoiceManager::get_LoginState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedIn_m3CA894613EB6CC17DC688735AA3571DFDA846893 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedOut_m4A3DF929DF521AA9AD7D9C82C475EC4CBC24D1D8 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedInEvent_m4768F3A7333950D81B3F391FEB774916F8521DC0 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedOutEvent_m86E7F2338ED713C773A8312A45424F7FAF2014D6 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382 (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnParticipantAddedEvent_mC785A9129D168B94236E2FFD6B16612989850835 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnRecoveryStateChangedEvent(VivoxVoiceManager/RecoveryStateChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnRecoveryStateChangedEvent_mEFB931AC3E545A929368715AC967B339CF2FEB2F (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnParticipantAddedEvent_mDC497D3B47DF4B7005942B12C9BD2E5B2FFCDC54 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::JoinChannel(System.String,VivoxUnity.ChannelType,VivoxVoiceManager/ChatCapability,System.Boolean,VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_JoinChannel_m3484C2A5717B0EF776AEFFBF3DDEB22F5ED58278 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___channelName0, int32_t ___channelType1, int32_t ___chatCapability2, bool ___transmissionSwitch3, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___properties4, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::DisconnectAllChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_DisconnectAllChannels_mC9A5113DEEFA5C1428E73AF0C907170440AA55E7 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Logout_m33F0A5F36923650407DAEA2AEC5D7204880175DC (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// System.String VivoxUnity.ChannelId::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___pointer1, const RuntimeMethod* method) ;
// VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession> VivoxVoiceManager::get_ActiveChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<VivoxUnity.IChannelSession,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133 (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<VivoxUnity.IChannelSession>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F (RuntimeObject* ___source0, Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void LobbyScreenUI::JoinLobbyChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_JoinLobbyChannel_m6D57FF6AD2627BEC0730F074B19DA0778BF28360 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI::LogoutOfVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_LogoutOfVivoxService_mED036E3D468771E9B7595CB8F158EF446D67E20C (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC89B0EFFF6DB0FDBB4785C93A21618CC837D85B2 (U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4 (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::get_onEndEdit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void LoginScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnUserLoggedIn_m0982E3B306565E26B0698C94B8896D5A8C3924C5 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// System.String VivoxUnity.AccountId::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountId_get_DisplayName_m4B65701915D56093AB5E02F1DFA943C7883D3E92 (AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnUserLoggedOut_m67148B50C6953A548AB198855ED8816574986EFE (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Environment::get_MachineName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_MachineName_m9DA8870A9A245AC7F13AC3EFE4E566A0CEFBA9A5 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
inline int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared)(__this, ___fieldName0, method);
}
// System.Boolean LoginScreenUI::IsAndroid12AndUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoginScreenUI_IsAndroid12AndUp_mCB9ED306247715CDBA600A3C2C356D89E6829F9A (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.String>(System.String)
inline String_t* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___permission0, const RuntimeMethod* method) ;
// System.String LoginScreenUI::GetBluetoothConnectPermissionCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoginScreenUI_GetBluetoothConnectPermissionCode_mBCF295E7B36230E5FA11B70D0FAEB28FBC613115 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Boolean LoginScreenUI::IsMicPermissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoginScreenUI_IsMicPermissionGranted_m0A08A253A3E34B816EBAC62CC7A7028C01D0045F (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::LoginToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_LoginToVivox_m555DEC63EC64487F16C3A45DC4F8A3E83AE1EF1E (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// System.Boolean LoginScreenUI::IsPermissionsDenied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoginScreenUI_IsPermissionsDenied_mC9B57E81BB8F0EDF868C44DDE24A653E8EB1FC20 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::AskForPermissions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_AskForPermissions_mE5166B3A3A5D18F44CC81D68F069F98244D97876 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::Login(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Login_mA9C1F55B55E06E4B4794129C6D717529C28AD93A (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___displayName0, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::HideLoginUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_HideLoginUI_m0A24770A04130CED16FF62C5E208732822472DB7 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::ShowLoginUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_ShowLoginUI_m7F789E066B33D6D9EA66A98B9F097EFCAC2118CC (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::LoginToVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_LoginToVivoxService_m8EDAE241BED07AEE0110CEDCD8D6A577945487AC (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) ;
// VivoxUnity.IAudioDevices VivoxVoiceManager::get_AudioInputDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_AudioInputDevices_m7C758F157ADBB28EF3A9685DDEF916A9903FFFF7 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// System.Void RosterItem::UpdateChatStateImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_UpdateChatStateImage_m261C33B0D89E12364C4678D03442548BCA549AFD (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, const RuntimeMethod* method) ;
// System.Boolean RosterItem::get_IsMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RosterItem_get_IsMuted_m18242EA3E3AA66B42952AA365F3109DEE6A9E90E (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void RosterItem::set_IsMuted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_set_IsMuted_mEC2E52A724AAA86AD3A49EC72F42F9830D2FB2D0 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void RosterItem::set_IsSpeaking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_set_IsSpeaking_m7C301D74B49E8FBCEB0131C0A0E7025CBAB0C8B8 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void VivoxVoiceManager::add_OnParticipantRemovedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnParticipantRemovedEvent_m2D31C4537C6A2339D06406427BEC87A958DD2C94 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) ;
// System.Void RosterManager::UpdateParticipantRoster(VivoxUnity.IParticipant,VivoxUnity.ChannelId,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_UpdateParticipantRoster_mD672A6BBA8FE75DDC6BBD0333A2C2AF15C5EC012 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, RuntimeObject* ___participant0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___isAddParticipant2, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnParticipantRemovedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnParticipantRemovedEvent_mD352301B7A564BD2CD3ED3E38FEC100D5C5D0201 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::get_Values()
inline ValueCollection_t5977521002F72615B597B917BB8F205DFC498C24* Dictionary_2_get_Values_m3F73BDAD0FB4134E3F592D22F6898D83B238EBFB (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t5977521002F72615B597B917BB8F205DFC498C24* (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::GetEnumerator()
inline Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5 ValueCollection_GetEnumerator_mE645ECD3DC0357BA8FD50344CD1F1895D61F5760 (ValueCollection_t5977521002F72615B597B917BB8F205DFC498C24* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5 (*) (ValueCollection_t5977521002F72615B597B917BB8F205DFC498C24*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::Dispose()
inline void Enumerator_Dispose_m976B7A02101938A597F99D0240D18FF5F2367F02 (Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::get_Current()
inline List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* Enumerator_get_Current_mEB6DACE30961DF6238D736A85431AE262101EC67_inline (Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5* __this, const RuntimeMethod* method)
{
	return ((  List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* (*) (Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RosterItem>::GetEnumerator()
inline Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396 List_1_GetEnumerator_m7C854FFC39566069F60C62D248088A1824E5CC6E (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396 (*) (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<RosterItem>::Dispose()
inline void Enumerator_Dispose_m4ED1BDB4002DD7041E65993BC64BAD6E53ACF1BE (Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<RosterItem>::get_Current()
inline RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* Enumerator_get_Current_m3D9154E33397B472B684878675A3F464E2E480FA_inline (Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396* __this, const RuntimeMethod* method)
{
	return ((  RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* (*) (Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<RosterItem>::MoveNext()
inline bool Enumerator_MoveNext_mB88C349ED6D833C20D3C50D8BF4164EC9CB974D9 (Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RosterItem>::Clear()
inline void List_1_Clear_m56803F1970724ABB38CDE8EE4F82AC42C463CD83_inline (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::MoveNext()
inline bool Enumerator_MoveNext_m768C18F4C7FC02B4F0C585994AABE2839361B19A (Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::Clear()
inline void Dictionary_2_Clear_mA12B6B8ADE4714303C03E3002FFC553F2D92F507 (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::get_Item(TKey)
inline List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5 (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::Remove(TKey)
inline bool Dictionary_2_Remove_mA94025B4480D270787527FF60CCEF6109A925979 (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<RosterItem>::get_Count()
inline int32_t List_1_get_Count_m93B48C383F31BF590CD78FA325887DEFD1FD5759_inline (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::get_Keys()
inline KeyCollection_t899ECEE87BDA2B23993BC60F1F09195DB74BCD3E* Dictionary_2_get_Keys_mBA328C325711912D1B7D815C3A0C8AAECB5E4069 (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t899ECEE87BDA2B23993BC60F1F09195DB74BCD3E* (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Boolean System.Linq.Enumerable::Contains<VivoxUnity.ChannelId>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mE039A3D32B9732B76A00B30C847FF779CAFE1690 (RuntimeObject* ___source0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___source0, ___value1, method);
}
// System.Void RosterManager::ClearChannelRoster(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_ClearChannelRoster_mECFD273FF923C3AFA76ED9DD30A495D99CCC9574 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, const RuntimeMethod* method) ;
// System.Void RosterManager::ClearAllRosters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_ClearAllRosters_mFB1B44435CB39D7335CCBB724901170C181B5346 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, const RuntimeMethod* method) ;
// System.Void RosterManager/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mDB75E2BE1EB6794E5000794E21F34D5DCB31DB92 (U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<RosterItem>()
inline RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* GameObject_GetComponent_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mC1D001FF32AEFF2E4040D0641FDFD361499B1204 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m99C1AE60C6647032B2DACDD7248041B45374D79E (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m28B58285D91DEC9DAFB8C1570FBF1D4A85296D75 (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void RosterItem::SetupRosterItem(VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_SetupRosterItem_m3D8F6B8C9A4F30ACD243C797DD0214B8794A9E26 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, RuntimeObject* ___participant0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RosterItem>::Add(T)
inline void List_1_Add_m68AA3007C82665F3A7DDD56EE1AC65DD6BDF7536_inline (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* __this, RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC*, RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mE38088334EE217421E675493089AE687F9E878D5 (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<RosterItem>::.ctor()
inline void List_1__ctor_m9F8EF6FDD70A658BAF2A40A092182FF05832126A (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m80B873016BFBD4CA756E1179F271D0A3446A4D5B (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void RosterManager::CleanRoster(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_CleanRoster_mB35677854627AF11A98D950F25DEE14BA6F867D8 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, const RuntimeMethod* method) ;
// System.Void System.Func`2<RosterItem,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m55A71C90E497DB2A0D51DE1E1D4BC4FFB1ADF624 (Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<RosterItem>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* Enumerable_FirstOrDefault_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mCC82E270837E891C22C02A37E2D1AEA0D5492D02 (RuntimeObject* ___source0, Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332* ___predicate1, const RuntimeMethod* method)
{
	return ((  RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* (*) (RuntimeObject*, Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Collections.Generic.List`1<RosterItem>::Remove(T)
inline bool List_1_Remove_mD9CC1C8DBCE24FFAB49237FE01D15AF7BCCF6B13 (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* __this, RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC*, RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.String VivoxUnity.AccountId::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline (AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::.ctor()
inline void Dictionary_2__ctor_mE0935D7665A52F5DF75F29E901D240B3C66EF0B6 (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void RosterManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9E7B35CD5635F98BF3496DF1B1FC1E733DB33D2E (U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void TextChatUI::ClearMessageObjectPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_ClearMessageObjectPool_mB3409D29D2E96050A3100A693AE50E98E5594E47 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) ;
// System.Void TextChatUI::ClearOutTextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_ClearOutTextField_m151D125AE66BF8C5E70C1C5C475A0C29C24E11A0 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler__ctor_mE91A3921F329752BE931AF3742027510B9BECB8A (ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnTextMessageLogReceivedEvent(VivoxVoiceManager/ChannelTextMessageChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnTextMessageLogReceivedEvent_mCD7781C25065A36C923ABCC8915C8723DD3762AC (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void VivoxVoiceManager::remove_OnTextMessageLogReceivedEvent(VivoxVoiceManager/ChannelTextMessageChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnTextMessageLogReceivedEvent_mA9BD8115871492D15DD42DA6ABECB2DAAA8ABF2B (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.InputField::ActivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void TextChatUI::SubmitTextToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_SubmitTextToVivox_m7B9B206D60B19BAF5B50FA7CB5674B5C4CAFCC38 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::SendTextMessage(System.String,VivoxUnity.ChannelId,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_SendTextMessage_m6DCB9204B2E090F922442DFB278ACABEBD35EAB0 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___messageToSend0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, String_t* ___applicationStanzaNamespace2, String_t* ___applicationStanzaBody3, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void VivoxUnity.TTSMessage::.ctor(System.String,VivoxUnity.TTSDestination)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSMessage__ctor_m4476A00818F82EDCCCB43DB82874E027CE2D10DA (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* __this, String_t* ___text0, int32_t ___destination1, const RuntimeMethod* method) ;
// System.Void TextChatUI/<SendScrollRectToBottom>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScrollRectToBottomU3Ed__20__ctor_mCFE47C12134461725F2F0ACF401447834E5D2D3C (U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<VivoxUnity.IChannelSession>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mE5B273E5A695F2577F3A5343D2929D4587400D3A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared)(___source0, method);
}
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TextChatUI::SendScrollRectToBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextChatUI_SendScrollRectToBottom_mF560885125BFBDC8282D34823845BD4988614876 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.TTSMessage::Speak(VivoxUnity.ILoginSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSMessage_Speak_m92E6065934822C57329E81D4091624E79F24A5E6 (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* __this, RuntimeObject* ___userSpeaking0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TextChatUI::EnterKeyOnTextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_EnterKeyOnTextField_m843CC7C468FE308A614278DE851B5D20C794A0FF (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) ;
// System.Void TextChatUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7BE51724EF4A24AD1CF30AA6FA3461F024D14CE (U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_normalizedPosition_m8CFC50007450856E3B1FEB9E61A6311FBC0E709E (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<VivoxVoiceManager>()
inline VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* GameObject_AddComponent_TisVivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_mA9E49D06D58039AB0CC79AD3D7CA5A7E7FB3CF6F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// Unity.Services.Vivox.IVivoxService Unity.Services.Vivox.VivoxService::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline (const RuntimeMethod* method) ;
// VivoxUnity.Client VivoxVoiceManager::get__client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// VivoxUnity.IAudioDevices VivoxUnity.Client::get_AudioInputDevices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_AudioInputDevices_mEF09E43DA815E02795AD6E7A265CB6397DC6910A_inline (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) ;
// VivoxUnity.IAudioDevices VivoxUnity.Client::get_AudioOutputDevices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_AudioOutputDevices_m54D7860B92185C76D3E1E2A3EFAC8C8E955D3C52_inline (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// VivoxUnity.ILoginSession VivoxUnity.Client::GetLoginSession(VivoxUnity.AccountId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* ___accountId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/<Start>d__58::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__58__ctor_m8B7BB67DAD521DEB8AC32013551F6C489BDCFE4C (U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<VivoxVoiceManager/<Start>d__58>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_m00CF8C3DD7C8F228B4FAD2518C64343A1438075F (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Void VivoxUnity.Client::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Cleanup_m9BC1EF655CCF9370A9A4F4E1237CE458AA03A8F4 (const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::VivoxLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void VivoxUnity.Client::Uninitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Uninitialize_mEC913D45A5B61D0929FECC5AF33E991514458DFB (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.Account::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account__ctor_m65C5A10DE23840F87471D9A863D8ADF69F5059CA (Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* __this, String_t* ___displayname0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___spokenLanguages1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m0640375FBF1ACE40A21715458C99EC06B12B305F (U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.Channel::.ctor(System.String,VivoxUnity.ChannelType,VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Channel__ctor_m37D2FBE2DCB84B7A1C3C9480EFAC9B63C5879777 (Channel_t9072FB76D421DBB4723F10DF254F1674140350C5* __this, String_t* ___name0, int32_t ___type1, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___properties2, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<VivoxUnity.KeyEventArg`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107 (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m1E224F97ED4FD1D72AAB2B981A1F4A339572D067 (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m5E06C11418535612DF07937D3529081C2316F474 (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void VivoxVoiceManager::VivoxLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_VivoxLogError_mA9371A5B0285FA790A432CAC112C850F16991D8A (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_m4883BDF78B2526CECBE1465B3DEAB497EC12976F (U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C* __this, const RuntimeMethod* method) ;
// System.Boolean VivoxUnity.ChannelId::IsNullOrEmpty(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelId_IsNullOrEmpty_m6C2661D762C1348BA4C7C32176059BBFF7A4C135 (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___id0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::ValidateArgs(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_ValidateArgs_m079B602985CACF718FDBB996A980A55C8854F5D5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs0, const RuntimeMethod* method) ;
// T VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>::get_Value()
inline RuntimeObject* QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_inline (QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F*, const RuntimeMethod*))QueueItemAddedEventArgs_1_get_Value_m139FA2D84818BAB6E3013D07AF409D656AD1A2E1_gshared_inline)(__this, method);
}
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::Invoke(System.String,VivoxUnity.IChannelTextMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_inline (ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/RecoveryStateChangedHandler::Invoke(VivoxUnity.ConnectionRecoveryState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_inline (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::set_LoginState(VivoxUnity.LoginState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxVoiceManager_set_LoginState_m08DE1AEE872722FB7827D0F87B066E8205F46D83_inline (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_inline (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, const RuntimeMethod* method) ;
// TK VivoxUnity.KeyEventArg`1<System.String>::get_Key()
inline String_t* KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_inline (KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6*, const RuntimeMethod*))KeyEventArg_1_get_Key_m5A6721BC9397CFD07BBD5E71D877CF4B2208B895_gshared_inline)(__this, method);
}
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::Invoke(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_inline (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// TK VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>::get_Key()
inline String_t* ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_inline (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803*, const RuntimeMethod*))ValueEventArg_2_get_Key_m50FABB89833DC4941E8089DD37E5371F409A5C77_gshared_inline)(__this, method);
}
// TV VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>::get_Value()
inline RuntimeObject* ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803*, const RuntimeMethod*))ValueEventArg_2_get_Value_mD755E0B4406560927FCB160D66ABE2CAEB288F5D_gshared_inline)(__this, method);
}
// System.String VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>::get_PropertyName()
inline String_t* ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_inline (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803*, const RuntimeMethod*))ValueEventArg_2_get_PropertyName_m8A88DE4C4BA8719F3F0B390A70FDB487D27A3FB5_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/ParticipantValueChangedHandler::Invoke(System.String,VivoxUnity.ChannelId,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_inline (ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/ParticipantValueUpdatedHandler::Invoke(System.String,VivoxUnity.ChannelId,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_inline (ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m79026F3FE563686E869E75F3D14AD149BF718F2B (U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.InitializationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) ;
// System.Boolean VivoxVoiceManager::CheckManualCredentials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VivoxVoiceManager_CheckManualCredentials_m46813F3C0EF72163DAC36F7C73746C2D7A8E5604 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.InitializationOptions Unity.Services.Vivox.InitializationOptionsExtensions::SetVivoxCredentials(Unity.Services.Core.InitializationOptions,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptionsExtensions_SetVivoxCredentials_m22920E3B9F9BF55B226A95CC487B8999989B8B9E (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___self0, String_t* ___server1, String_t* ___domain2, String_t* ___issuer3, String_t* ___tokenKey4, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,VivoxVoiceManager/<Start>d__58>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_mFB6FC843B03697EFCFB3F2FA296B170D7F85FA6A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.IAuthenticationService Unity.Services.Authentication.AuthenticationService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_mC103E68114FAB5AA103D2846A1D4216E093E9362 (GameManager_t64184C006C4074F97882298B620A6A13A72087A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t64184C006C4074F97882298B620A6A13A72087A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Instance = this;
		((GameManager_t64184C006C4074F97882298B620A6A13A72087A9_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t64184C006C4074F97882298B620A6A13A72087A9_il2cpp_TypeInfo_var))->___s_Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_t64184C006C4074F97882298B620A6A13A72087A9_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t64184C006C4074F97882298B620A6A13A72087A9_il2cpp_TypeInfo_var))->___s_Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m5DF093BEC228508F49FD98092DB5864D861661E0 (GameManager_t64184C006C4074F97882298B620A6A13A72087A9* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(StartBuffer());
		RuntimeObject* L_0;
		L_0 = GameManager_StartBuffer_m34B519F26EDD1A1804EB228CD8206B81DC035C31(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7519AB54782EDAA3794500A142E79CE3A69A4C33 (GameManager_t64184C006C4074F97882298B620A6A13A72087A9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::StartBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartBuffer_m34B519F26EDD1A1804EB228CD8206B81DC035C31 (GameManager_t64184C006C4074F97882298B620A6A13A72087A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F* L_0 = (U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F*)il2cpp_codegen_object_new(U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartBufferU3Ed__10__ctor_mDA6F3E8DC3944EDC7F0545CC3728CEC7074E779A(L_0, 0, NULL);
		U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::RemoveTank(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RemoveTank_m428E8356753CEF5350F65834630C2AE1044F196A (GameManager_t64184C006C4074F97882298B620A6A13A72087A9* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tank0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(tank);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___tank0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mA4941C8681D202523AA8A6D5E2BD6DB764C9FD4A (GameManager_t64184C006C4074F97882298B620A6A13A72087A9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGameInputEnabled = false;
		__this->___IsGameInputEnabled_8 = (bool)0;
		// public int RedTeamScore = 0;
		__this->___RedTeamScore_9 = 0;
		// public int BlueTeamScore = 0;
		__this->___BlueTeamScore_10 = 0;
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
// System.Void GameManager/<StartBuffer>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBufferU3Ed__10__ctor_mDA6F3E8DC3944EDC7F0545CC3728CEC7074E779A (U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<StartBuffer>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBufferU3Ed__10_System_IDisposable_Dispose_m5CE040B6A60FB3D6A48A5E9864A95F327BFE512E (U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<StartBuffer>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartBufferU3Ed__10_MoveNext_mDB970F6AD924AF7195636622AAB4D2779EC88998 (U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// IsGameInputEnabled = true;
		GameManager_t64184C006C4074F97882298B620A6A13A72087A9* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		L_4->___IsGameInputEnabled_8 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<StartBuffer>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartBufferU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m066052920D1189C51D3CF3E9B3E70C621C553010 (U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<StartBuffer>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBufferU3Ed__10_System_Collections_IEnumerator_Reset_m4FCC8606C9F7230356638E5B79E475AFF48C0D0D (U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartBufferU3Ed__10_System_Collections_IEnumerator_Reset_m4FCC8606C9F7230356638E5B79E475AFF48C0D0D_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<StartBuffer>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartBufferU3Ed__10_System_Collections_IEnumerator_get_Current_m9A00B615667FD86ABBAD6A210690653B731CC670 (U3CStartBufferU3Ed__10_t85D3FA692EF515A08F6475AB21E12C545476A15F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// UnityEngine.GameObject MainMenuOptions::get_m_optionsMenuPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MainMenuOptions_get_m_optionsMenuPanel_m79F7B2B37DBF20BDA115B29CECA0DB58A7D23903 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	{
		// private GameObject m_optionsMenuPanel => gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_0;
	}
}
// VivoxVoiceManager MainMenuOptions::get__vivoxVoiceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* MainMenuOptions_get__vivoxVoiceManager_mE02094ADA4BA09C239953F53D020FFF037642F2F (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private VivoxVoiceManager _vivoxVoiceManager => VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0;
		L_0 = VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B(NULL);
		return L_0;
	}
}
// System.Void MainMenuOptions::ttsDropdownValueChangedHandler(UnityEngine.UI.Dropdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ttsDropdownValueChangedHandler_m1FEB2491EDE400722AFD7D867EEF82FE5686F2C6 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A78E8CC1D676269140A4C0540A77A03A816A051);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("selected: " + target.value);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A78E8CC1D676269140A4C0540A77A03A816A051, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// _selected_tts_voice_index = target.value;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = ___target0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C(L_4, NULL);
		__this->____selected_tts_voice_index_11 = L_5;
		// }
		return;
	}
}
// System.Void MainMenuOptions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_Awake_m8FAA8762C588ABE8E0393DD6C8F84452EF5D2EC8 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D6FD59178F3010F1AB669541164B6651F97367);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_optionsMenuPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = MainMenuOptions_get_m_optionsMenuPanel_m79F7B2B37DBF20BDA115B29CECA0DB58A7D23903(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (!_vivoxVoiceManager)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_1;
		L_1 = MainMenuOptions_get__vivoxVoiceManager_mE02094ADA4BA09C239953F53D020FFF037642F2F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogError("Unable to find VivoxVoiceManager object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD3D6FD59178F3010F1AB669541164B6651F97367, NULL);
	}

IL_002d:
	{
		// AddAllTTSVoices();
		MainMenuOptions_AddAllTTSVoices_m485EF3A8E0E2D746D736ADCEDDEC0F049285F371(__this, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_Start_mC6B64B6644457871F895FFA87BADDB3F3295C634 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_ConfirmNoAction_m9AA8F3811960D7FDB105530118E4501258254AB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_ConfirmYesButtonAction_m537123668D5A97E146AB5037BB67851B5DB0E3A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_QuitButtonAction_m7C1B50B5DCFC7D8189A01A6A56A7AD96C24EDFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_SaveAction_m5AB02529BEB77E555EFB758FD9B1247771EA8C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_U3CStartU3Eb__15_0_m973EB40C6E829FAF4267CEFE712064851D54A658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_EventSystem = EventSystem.current;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		__this->___m_EventSystem_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventSystem_10), (void*)L_0);
		// TTSVoiceDropdown.onValueChanged.AddListener(delegate {
		//     ttsDropdownValueChangedHandler(TTSVoiceDropdown);
		// });
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_1);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_2;
		L_2 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_1, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_3 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_3, __this, (intptr_t)((void*)MainMenuOptions_U3CStartU3Eb__15_0_m973EB40C6E829FAF4267CEFE712064851D54A658_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_2, L_3, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// SaveButton.onClick.AddListener(SaveAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___SaveButton_4;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)MainMenuOptions_SaveAction_m5AB02529BEB77E555EFB758FD9B1247771EA8C27_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// QuitButton.onClick.AddListener(QuitButtonAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___QuitButton_5;
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)MainMenuOptions_QuitButtonAction_m7C1B50B5DCFC7D8189A01A6A56A7AD96C24EDFDA_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// ConfirmYesButton.onClick.AddListener(ConfirmYesButtonAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___ConfirmYesButton_8;
		NullCheck(L_10);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_11;
		L_11 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_10, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_12 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_12, __this, (intptr_t)((void*)MainMenuOptions_ConfirmYesButtonAction_m537123668D5A97E146AB5037BB67851B5DB0E3A6_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_11, L_12, NULL);
		// ConfirmNoButton.onClick.AddListener(ConfirmNoAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___ConfirmNoButton_9;
		NullCheck(L_13);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_13, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_15, __this, (intptr_t)((void*)MainMenuOptions_ConfirmNoAction_m9AA8F3811960D7FDB105530118E4501258254AB4_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_OnDestroy_mA1BD3EC73ACE8A566606C6BE93F611A1ED562DE1 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_ConfirmNoAction_m9AA8F3811960D7FDB105530118E4501258254AB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_ConfirmYesButtonAction_m537123668D5A97E146AB5037BB67851B5DB0E3A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_QuitButtonAction_m7C1B50B5DCFC7D8189A01A6A56A7AD96C24EDFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_SaveAction_m5AB02529BEB77E555EFB758FD9B1247771EA8C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TTSVoiceDropdown.onValueChanged.RemoveAllListeners();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_0);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_1;
		L_1 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_0, NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_1, NULL);
		// SaveButton.onClick.RemoveListener(SaveAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___SaveButton_4;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)MainMenuOptions_SaveAction_m5AB02529BEB77E555EFB758FD9B1247771EA8C27_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_3, L_4, NULL);
		// QuitButton.onClick.RemoveListener(QuitButtonAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___QuitButton_5;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)MainMenuOptions_QuitButtonAction_m7C1B50B5DCFC7D8189A01A6A56A7AD96C24EDFDA_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_6, L_7, NULL);
		// ConfirmYesButton.onClick.RemoveListener(ConfirmYesButtonAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___ConfirmYesButton_8;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_8, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)MainMenuOptions_ConfirmYesButtonAction_m537123668D5A97E146AB5037BB67851B5DB0E3A6_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_9, L_10, NULL);
		// ConfirmNoButton.onClick.RemoveListener(ConfirmNoAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___ConfirmNoButton_9;
		NullCheck(L_11);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_12;
		L_12 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_11, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, __this, (intptr_t)((void*)MainMenuOptions_ConfirmNoAction_m9AA8F3811960D7FDB105530118E4501258254AB4_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_Update_mC5C0086C94EB4CDBD4636CCC0209636CBD541F21 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean MainMenuOptions::get_isDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainMenuOptions_get_isDirty_m5D41815D6B858105A4F38EC1B800723BB795A7A6 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return TTSVoiceDropdown.options[_selected_tts_voice_index].text != PlayerPrefs.GetString(tts_voice_setting, _vivoxVoiceManager.LoginSession.TTS.CurrentVoice.Name);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_0);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_1;
		L_1 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_0, NULL);
		int32_t L_2 = __this->____selected_tts_voice_index_11;
		NullCheck(L_1);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_3;
		L_3 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_1, L_2, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1(L_3, NULL);
		String_t* L_5 = __this->___tts_voice_setting_12;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_6;
		L_6 = MainMenuOptions_get__vivoxVoiceManager_mE02094ADA4BA09C239953F53D020FFF037642F2F(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___LoginSession_20;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.ITTSVoice VivoxUnity.ITextToSpeech::get_CurrentVoice() */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String VivoxUnity.ITTSVoice::get_Name() */, ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var, L_9);
		String_t* L_11;
		L_11 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(L_5, L_10, NULL);
		bool L_12;
		L_12 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, L_11, NULL);
		V_0 = L_12;
		goto IL_0049;
	}

IL_0049:
	{
		// }
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void MainMenuOptions::AddAllTTSVoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_AddAllTTSVoices_m485EF3A8E0E2D746D736ADCEDDEC0F049285F371 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m37507257107483D44093E3C39B6BF56184D89E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAddAllTTSVoicesU3Eb__20_0_m12C384C3AE437DD314583D4D44468F8A661084EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* V_0 = NULL;
	Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* G_B2_0 = NULL;
	ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* G_B2_1 = NULL;
	List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* G_B2_2 = NULL;
	Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* G_B1_0 = NULL;
	ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* G_B1_1 = NULL;
	List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* G_B1_2 = NULL;
	{
		// var all_voices = _vivoxVoiceManager.LoginSession.TTS.AvailableVoices;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0;
		L_0 = MainMenuOptions_get__vivoxVoiceManager_mE02094ADA4BA09C239953F53D020FFF037642F2F(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___LoginSession_20;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* L_3;
		L_3 = InterfaceFuncInvoker0< ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* >::Invoke(0 /* System.Collections.ObjectModel.ReadOnlyCollection`1<VivoxUnity.ITTSVoice> VivoxUnity.ITextToSpeech::get_AvailableVoices() */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		// TTSVoiceDropdown.options.Clear();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_4);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_5;
		L_5 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_4, NULL);
		NullCheck(L_5);
		List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline(L_5, List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
		// TTSVoiceDropdown.options.AddRange(all_voices.Select(
		//     // Fill the dropdown menu options with all voices
		//     v => new Dropdown.OptionData() { text = v.Name })
		//     );
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_6);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_7;
		L_7 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_6, NULL);
		ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var);
		Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* L_9 = ((U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1;
		Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		G_B1_2 = L_7;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			G_B2_2 = L_7;
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var);
		U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755* L_11 = ((U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* L_12 = (Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6*)il2cpp_codegen_object_new(Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m0C8B23ADA9BE8C9E7D2C61431B35D4B84DEFE28F(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CAddAllTTSVoicesU3Eb__20_0_m12C384C3AE437DD314583D4D44468F8A661084EF_RuntimeMethod_var), NULL);
		Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* L_13 = L_12;
		((U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1), (void*)L_13);
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0053:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m37507257107483D44093E3C39B6BF56184D89E4F(G_B2_1, G_B2_0, Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_m37507257107483D44093E3C39B6BF56184D89E4F_RuntimeMethod_var);
		NullCheck(G_B2_2);
		List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6(G_B2_2, L_14, List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var);
		// SelectOptionFromSavedSettings();
		MainMenuOptions_SelectOptionFromSavedSettings_m276BCB92AC2FBEBCD7F8F92556D053A5C9B464FE(__this, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::SelectOptionFromSavedSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_SelectOptionFromSavedSettings_m276BCB92AC2FBEBCD7F8F92556D053A5C9B464FE (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_U3CSelectOptionFromSavedSettingsU3Eb__21_0_m6C5D14B4E1A82ED8E917E852D88ABA5A861BB6D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var voiceToSelect = TTSVoiceDropdown.options.FindIndex((i) => { return i.text.Equals(PlayerPrefs.GetString(tts_voice_setting, _vivoxVoiceManager.LoginSession.TTS.CurrentVoice.Name)); });
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_0);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_1;
		L_1 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_0, NULL);
		Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* L_2 = (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*)il2cpp_codegen_object_new(Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Predicate_1__ctor_m7A84E959305036F80FCD7B6544C987F1B27784E8(L_2, __this, (intptr_t)((void*)MainMenuOptions_U3CSelectOptionFromSavedSettingsU3Eb__21_0_m6C5D14B4E1A82ED8E917E852D88ABA5A861BB6D7_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767(L_1, L_2, List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var);
		V_0 = L_3;
		// TTSVoiceDropdown.value = voiceToSelect;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = __this->___TTSVoiceDropdown_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_4, L_5, NULL);
		// _selected_tts_voice_index = voiceToSelect;
		int32_t L_6 = V_0;
		__this->____selected_tts_voice_index_11 = L_6;
		// }
		return;
	}
}
// System.Void MainMenuOptions::ShowOptionsMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ShowOptionsMenu_m1496721B6C9FD1ED1C92DCC75576F7BC037482C0 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, bool ___showMenu0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (showMenu == false && isDirty)
		bool L_0 = ___showMenu0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		bool L_1;
		L_1 = MainMenuOptions_get_isDirty_m5D41815D6B858105A4F38EC1B800723BB795A7A6(__this, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// ShowConfirmMenu(true);
		MainMenuOptions_ShowConfirmMenu_m40969D0A94809378CC47354799F8620D79675B9A(__this, (bool)1, NULL);
		goto IL_0034;
	}

IL_001d:
	{
		// ShowConfirmMenu(false);
		MainMenuOptions_ShowConfirmMenu_m40969D0A94809378CC47354799F8620D79675B9A(__this, (bool)0, NULL);
		// m_optionsMenuPanel.SetActive(showMenu);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = MainMenuOptions_get_m_optionsMenuPanel_m79F7B2B37DBF20BDA115B29CECA0DB58A7D23903(__this, NULL);
		bool L_4 = ___showMenu0;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void MainMenuOptions::ShowConfirmMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ShowConfirmMenu_m40969D0A94809378CC47354799F8620D79675B9A (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, bool ___showMenu0, const RuntimeMethod* method) 
{
	{
		// ConfirmationMenu.SetActive(showMenu);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ConfirmationMenu_7;
		bool L_1 = ___showMenu0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::MenuInputAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_MenuInputAction_m7965F7830CB7DFB6E865CAA0D9C59FF22858E1EA (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (m_optionsMenuPanel.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = MainMenuOptions_get_m_optionsMenuPanel_m79F7B2B37DBF20BDA115B29CECA0DB58A7D23903(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// ShowOptionsMenu(false);
		MainMenuOptions_ShowOptionsMenu_m1496721B6C9FD1ED1C92DCC75576F7BC037482C0(__this, (bool)0, NULL);
		goto IL_0026;
	}

IL_001c:
	{
		// ShowOptionsMenu(true);
		MainMenuOptions_ShowOptionsMenu_m1496721B6C9FD1ED1C92DCC75576F7BC037482C0(__this, (bool)1, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void MainMenuOptions::SaveAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_SaveAction_m5AB02529BEB77E555EFB758FD9B1247771EA8C27 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m8BDBF3A604B887B002E157578E40EA37BB428438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_U3CSaveActionU3Eb__25_0_mB813462BA5FC0E8EE58A9D67CB62583C785B89E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(tts_voice_setting, TTSVoiceDropdown.options[_selected_tts_voice_index].text);
		String_t* L_0 = __this->___tts_voice_setting_12;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_1);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_2;
		L_2 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_1, NULL);
		int32_t L_3 = __this->____selected_tts_voice_index_11;
		NullCheck(L_2);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_4;
		L_4 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_2, L_3, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1(L_4, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_5, NULL);
		// _vivoxVoiceManager.LoginSession.TTS.CurrentVoice = _vivoxVoiceManager.LoginSession.TTS.AvailableVoices.FirstOrDefault(v => v.Name == TTSVoiceDropdown.options[_selected_tts_voice_index].text);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_6;
		L_6 = MainMenuOptions_get__vivoxVoiceManager_mE02094ADA4BA09C239953F53D020FFF037642F2F(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___LoginSession_20;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_7);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_9;
		L_9 = MainMenuOptions_get__vivoxVoiceManager_mE02094ADA4BA09C239953F53D020FFF037642F2F(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___LoginSession_20;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* L_12;
		L_12 = InterfaceFuncInvoker0< ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* >::Invoke(0 /* System.Collections.ObjectModel.ReadOnlyCollection`1<VivoxUnity.ITTSVoice> VivoxUnity.ITextToSpeech::get_AvailableVoices() */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_11);
		Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA* L_13 = (Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA*)il2cpp_codegen_object_new(Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m6C3CCBA146B66D9CF90AA91673F10B351850BF32(L_13, __this, (intptr_t)((void*)MainMenuOptions_U3CSaveActionU3Eb__25_0_mB813462BA5FC0E8EE58A9D67CB62583C785B89E8_RuntimeMethod_var), NULL);
		RuntimeObject* L_14;
		L_14 = Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m8BDBF3A604B887B002E157578E40EA37BB428438(L_12, L_13, Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m8BDBF3A604B887B002E157578E40EA37BB428438_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void VivoxUnity.ITextToSpeech::set_CurrentVoice(VivoxUnity.ITTSVoice) */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_8, L_14);
		// ShowOptionsMenu(false);
		MainMenuOptions_ShowOptionsMenu_m1496721B6C9FD1ED1C92DCC75576F7BC037482C0(__this, (bool)0, NULL);
		// m_EventSystem.SetSelectedGameObject(null);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_15 = __this->___m_EventSystem_10;
		NullCheck(L_15);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_15, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::QuitButtonAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_QuitButtonAction_m7C1B50B5DCFC7D8189A01A6A56A7AD96C24EDFDA (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	{
		// ShowOptionsMenu(false);
		MainMenuOptions_ShowOptionsMenu_m1496721B6C9FD1ED1C92DCC75576F7BC037482C0(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::ConfirmYesButtonAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ConfirmYesButtonAction_m537123668D5A97E146AB5037BB67851B5DB0E3A6 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	{
		// SaveAction();
		MainMenuOptions_SaveAction_m5AB02529BEB77E555EFB758FD9B1247771EA8C27(__this, NULL);
		// ShowConfirmMenu(false);
		MainMenuOptions_ShowConfirmMenu_m40969D0A94809378CC47354799F8620D79675B9A(__this, (bool)0, NULL);
		// ShowOptionsMenu(false);
		MainMenuOptions_ShowOptionsMenu_m1496721B6C9FD1ED1C92DCC75576F7BC037482C0(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::ConfirmNoAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ConfirmNoAction_m9AA8F3811960D7FDB105530118E4501258254AB4 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	{
		// ShowConfirmMenu(false);
		MainMenuOptions_ShowConfirmMenu_m40969D0A94809378CC47354799F8620D79675B9A(__this, (bool)0, NULL);
		// ShowConfirmMenu(false);
		MainMenuOptions_ShowConfirmMenu_m40969D0A94809378CC47354799F8620D79675B9A(__this, (bool)0, NULL);
		// m_optionsMenuPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = MainMenuOptions_get_m_optionsMenuPanel_m79F7B2B37DBF20BDA115B29CECA0DB58A7D23903(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// SelectOptionFromSavedSettings();
		MainMenuOptions_SelectOptionFromSavedSettings_m276BCB92AC2FBEBCD7F8F92556D053A5C9B464FE(__this, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions__ctor_m710D6679F081739E6F85D1245D7E3ACE354D5AF2 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1960C5DA4F11A477B1648C5AE8A9A6CD7D3AA277);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string tts_voice_setting = "VivoxTTSVoice";
		__this->___tts_voice_setting_12 = _stringLiteral1960C5DA4F11A477B1648C5AE8A9A6CD7D3AA277;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tts_voice_setting_12), (void*)_stringLiteral1960C5DA4F11A477B1648C5AE8A9A6CD7D3AA277);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void MainMenuOptions::<Start>b__15_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_U3CStartU3Eb__15_0_m973EB40C6E829FAF4267CEFE712064851D54A658 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// ttsDropdownValueChangedHandler(TTSVoiceDropdown);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___TTSVoiceDropdown_6;
		MainMenuOptions_ttsDropdownValueChangedHandler_m1FEB2491EDE400722AFD7D867EEF82FE5686F2C6(__this, L_0, NULL);
		// });
		return;
	}
}
// System.Boolean MainMenuOptions::<SelectOptionFromSavedSettings>b__21_0(UnityEngine.UI.Dropdown/OptionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainMenuOptions_U3CSelectOptionFromSavedSettingsU3Eb__21_0_m6C5D14B4E1A82ED8E917E852D88ABA5A861BB6D7 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var voiceToSelect = TTSVoiceDropdown.options.FindIndex((i) => { return i.text.Equals(PlayerPrefs.GetString(tts_voice_setting, _vivoxVoiceManager.LoginSession.TTS.CurrentVoice.Name)); });
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_0 = ___i0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1(L_0, NULL);
		String_t* L_2 = __this->___tts_voice_setting_12;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_3;
		L_3 = MainMenuOptions_get__vivoxVoiceManager_mE02094ADA4BA09C239953F53D020FFF037642F2F(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___LoginSession_20;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.ITTSVoice VivoxUnity.ITextToSpeech::get_CurrentVoice() */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String VivoxUnity.ITTSVoice::get_Name() */, ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(L_2, L_7, NULL);
		NullCheck(L_1);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_8, NULL);
		V_0 = L_9;
		goto IL_0034;
	}

IL_0034:
	{
		// var voiceToSelect = TTSVoiceDropdown.options.FindIndex((i) => { return i.text.Equals(PlayerPrefs.GetString(tts_voice_setting, _vivoxVoiceManager.LoginSession.TTS.CurrentVoice.Name)); });
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean MainMenuOptions::<SaveAction>b__25_0(VivoxUnity.ITTSVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainMenuOptions_U3CSaveActionU3Eb__25_0_mB813462BA5FC0E8EE58A9D67CB62583C785B89E8 (MainMenuOptions_tC5CD708A15F62D520CC360CE5FDD15F9BBDC2214* __this, RuntimeObject* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.LoginSession.TTS.CurrentVoice = _vivoxVoiceManager.LoginSession.TTS.AvailableVoices.FirstOrDefault(v => v.Name == TTSVoiceDropdown.options[_selected_tts_voice_index].text);
		RuntimeObject* L_0 = ___v0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String VivoxUnity.ITTSVoice::get_Name() */, ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var, L_0);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_2);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_3;
		L_3 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_2, NULL);
		int32_t L_4 = __this->____selected_tts_voice_index_11;
		NullCheck(L_3);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_5;
		L_5 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_3, L_4, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_6, NULL);
		return L_7;
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
// System.Void MainMenuOptions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFD153C15CEC3CC8B95CBCFB39300AB12043C08B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755* L_0 = (U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755*)il2cpp_codegen_object_new(U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFC170517A4813A334AFD7EFF6E43962D0DBEE118(L_0, NULL);
		((U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void MainMenuOptions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC170517A4813A334AFD7EFF6E43962D0DBEE118 (U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.UI.Dropdown/OptionData MainMenuOptions/<>c::<AddAllTTSVoices>b__20_0(VivoxUnity.ITTSVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* U3CU3Ec_U3CAddAllTTSVoicesU3Eb__20_0_m12C384C3AE437DD314583D4D44468F8A661084EF (U3CU3Ec_t10A4B683DFA32C190F27A07A8F6C4E4882D94755* __this, RuntimeObject* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// v => new Dropdown.OptionData() { text = v.Name })
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_0 = (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*)il2cpp_codegen_object_new(OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OptionData__ctor_m6321993E5D83F3A7E52ADC14C9276508D1129166(L_0, NULL);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_1 = L_0;
		RuntimeObject* L_2 = ___v0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String VivoxUnity.ITTSVoice::get_Name() */, ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		OptionData_set_text_mA6022A455FC38025B0CA97B4E3629DA10FDE259E(L_1, L_3, NULL);
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
// System.Void UIDirectionControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Start_mEAAE0EDBDAA20DD322C4DE6479472F93B0DEAD69 (UIDirectionControl_t45A7A354EB147D9974E6846DA65311EEF66970AC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIDirectionControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Update_mFE13486F9F798719F0A475DAD3B5448E7C47C644 (UIDirectionControl_t45A7A354EB147D9974E6846DA65311EEF66970AC* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.transform.LookAt(Camera.main.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_1);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void UIDirectionControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl__ctor_mB33320F143A17C6CDEEC13C8AF37195B6ADAA851 (UIDirectionControl_t45A7A354EB147D9974E6846DA65311EEF66970AC* __this, const RuntimeMethod* method) 
{
	{
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
// System.Boolean ButtonState::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonState_get_isPressed_mF67D67907E7E1696EE84A2275DB28F3E0706AD65 (ButtonState_t2F5D9F9D7AEC00E04175652AB76CF937EE97D190* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return _isPressed;
		bool L_0 = __this->____isPressed_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean ButtonState::get_isDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonState_get_isDown_m7C9597D9EFD56B60076D05A760B56046CB6540CE (ButtonState_t2F5D9F9D7AEC00E04175652AB76CF937EE97D190* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// var currentIsDown = _isDown;
		bool L_0 = __this->____isDown_5;
		V_0 = L_0;
		// _isDown = false;
		__this->____isDown_5 = (bool)0;
		// return currentIsDown;
		bool L_1 = V_0;
		V_1 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Boolean ButtonState::get_isUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonState_get_isUp_m6CED12F4A72033244D44F85D070FAB4E0DFAA86F (ButtonState_t2F5D9F9D7AEC00E04175652AB76CF937EE97D190* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// var currentIsUp = _isUp;
		bool L_0 = __this->____isUp_6;
		V_0 = L_0;
		// _isUp = false;
		__this->____isUp_6 = (bool)0;
		// return currentIsUp;
		bool L_1 = V_0;
		V_1 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Void ButtonState::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState_OnPointerDown_mEE031BD3C5691D8F1B1563FEB818A39E49EB7A60 (ButtonState_t2F5D9F9D7AEC00E04175652AB76CF937EE97D190* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _isDown = true;
		__this->____isDown_5 = (bool)1;
		// _isPressed = true;
		__this->____isPressed_4 = (bool)1;
		// _isUp = false;
		__this->____isUp_6 = (bool)0;
		// }
		return;
	}
}
// System.Void ButtonState::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState_OnPointerUp_m982684ABFF045A7A4657DC1EF6534D8CBE5825B9 (ButtonState_t2F5D9F9D7AEC00E04175652AB76CF937EE97D190* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _isDown = false;
		__this->____isDown_5 = (bool)0;
		// _isPressed = false;
		__this->____isPressed_4 = (bool)0;
		// _isUp = true;
		__this->____isUp_6 = (bool)1;
		// }
		return;
	}
}
// System.Void ButtonState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState__ctor_mEB32BC0EA8E4F8849DF7474D4D6C72D6A749F229 (ButtonState_t2F5D9F9D7AEC00E04175652AB76CF937EE97D190* __this, const RuntimeMethod* method) 
{
	{
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
// System.Boolean PositionalVoice::get_isSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PositionalVoice_get_isSpeaking_m1C7F504ECFE9B32B6CEDEAA6E62B075378527AC0 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, const RuntimeMethod* method) 
{
	{
		// public bool isSpeaking { get; private set; }
		bool L_0 = __this->___U3CisSpeakingU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void PositionalVoice::set_isSpeaking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_set_isSpeaking_mA2813DDB7AB4F7438FAE8F1F7967477954391652 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isSpeaking { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisSpeakingU3Ek__BackingField_6 = L_0;
		return;
	}
}
// VivoxUnity.Channel3DProperties PositionalVoice::get_ChannelProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* PositionalVoice_get_ChannelProperties_m76272BDA2A057C2C8FFB7D0DCA952E6538ED50C3 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, const RuntimeMethod* method) 
{
	{
		// public Channel3DProperties ChannelProperties { get; private set; }
		Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* L_0 = __this->___U3CChannelPropertiesU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void PositionalVoice::set_ChannelProperties(VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_set_ChannelProperties_m198440EF0F9C28E4F27E61B9CAD7E58201699E91 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___value0, const RuntimeMethod* method) 
{
	{
		// public Channel3DProperties ChannelProperties { get; private set; }
		Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* L_0 = ___value0;
		__this->___U3CChannelPropertiesU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChannelPropertiesU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// VivoxUnity.IParticipant PositionalVoice::get_Participant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PositionalVoice_get_Participant_mC00527A1E0C2E67DE3AC6BB15C236E90DF59F4D4 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return _participant;
		RuntimeObject* L_0 = __this->____participant_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void PositionalVoice::set_Participant(VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_set_Participant_mC4F009908C918365CAB043DA5DAF99CAA4C40AB3 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _participant = value;
		RuntimeObject* L_2 = ___value0;
		__this->____participant_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____participant_10), (void*)L_2);
		// SetupParticipantHandlers();
		PositionalVoice_SetupParticipantHandlers_mAA438099B934A16992F7F8F3960283A9AED99B91(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void PositionalVoice::SetupParticipantHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_SetupParticipantHandlers_mAA438099B934A16992F7F8F3960283A9AED99B91 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionalVoice_Participant_PropertyChanged_m60EF8B708DF9D3912B9B824F16746EF0A83E8864_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* G_B2_0 = NULL;
	PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* G_B3_1 = NULL;
	{
		// PositionalGameObject = PositionalGameObject != null ? PositionalGameObject : gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PositionalGameObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___PositionalGameObject_5;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___PositionalGameObject_5 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___PositionalGameObject_5), (void*)G_B3_0);
		// ChannelSession = Participant.ParentChannelSession;
		RuntimeObject* L_4;
		L_4 = PositionalVoice_get_Participant_mC00527A1E0C2E67DE3AC6BB15C236E90DF59F4D4(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_4);
		__this->___ChannelSession_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ChannelSession_8), (void*)L_5);
		// Participant.PropertyChanged -= Participant_PropertyChanged;
		RuntimeObject* L_6;
		L_6 = PositionalVoice_get_Participant_mC00527A1E0C2E67DE3AC6BB15C236E90DF59F4D4(__this, NULL);
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_7 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_7, __this, (intptr_t)((void*)PositionalVoice_Participant_PropertyChanged_m60EF8B708DF9D3912B9B824F16746EF0A83E8864_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_6, L_7);
		// Participant.PropertyChanged += Participant_PropertyChanged;
		RuntimeObject* L_8;
		L_8 = PositionalVoice_get_Participant_mC00527A1E0C2E67DE3AC6BB15C236E90DF59F4D4(__this, NULL);
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_9 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_9, __this, (intptr_t)((void*)PositionalVoice_Participant_PropertyChanged_m60EF8B708DF9D3912B9B824F16746EF0A83E8864_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(0 /* System.Void System.ComponentModel.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_8, L_9);
		// }
		return;
	}
}
// System.Void PositionalVoice::Participant_PropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_Participant_PropertyChanged_m60EF8B708DF9D3912B9B824F16746EF0A83E8864 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, RuntimeObject* ___sender0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6020785A926649CF038C7965768B025B64B74D66);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// IParticipant participant = (IParticipant)sender;
		RuntimeObject* L_0 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var));
		// m_ParticipantPropertyEvent.Invoke(participant, e);
		OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F* L_1 = __this->___m_ParticipantPropertyEvent_4;
		RuntimeObject* L_2 = V_0;
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_3 = ___e1;
		NullCheck(L_1);
		UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F(L_1, L_2, L_3, UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F_RuntimeMethod_var);
		// switch (e.PropertyName)
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_4 = ___e1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_4);
		V_2 = L_5;
		String_t* L_6 = V_2;
		V_1 = L_6;
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral6020785A926649CF038C7965768B025B64B74D66, NULL);
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_003d;
	}

IL_002e:
	{
		// isSpeaking = participant.SpeechDetected;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean VivoxUnity.IParticipantProperties::get_SpeechDetected() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_9);
		PositionalVoice_set_isSpeaking_mA2813DDB7AB4F7438FAE8F1F7967477954391652_inline(__this, L_10, NULL);
		// break;
		goto IL_003f;
	}

IL_003d:
	{
		// break;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void PositionalVoice::Update3dPosition(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_Update3dPosition_m0E83E5C79FC4C7EB7716B4D6CC51B09B492F04A3 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___listener0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___speaker1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC129F07568E30D7C8F3475EF183E33F17BAEBF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (listener == null || speaker == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___listener0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___speaker1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// VxClient.Instance.vivoxDebug.DebugMessage("Cannot set 3D position: Either speaker or listener is null", vx_log_level.log_error);
		VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* L_5;
		L_5 = VxClient_get_Instance_m2167C416B6C44B9635D97097549D905C162AA991(NULL);
		NullCheck(L_5);
		VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D* L_6 = L_5->___vivoxDebug_6;
		NullCheck(L_6);
		VirtualActionInvoker2< RuntimeObject*, int32_t >::Invoke(4 /* System.Void VivoxUnity.VivoxDebug::DebugMessage(System.Object,vx_log_level) */, L_6, _stringLiteralCC129F07568E30D7C8F3475EF183E33F17BAEBF3, 0);
		// return;
		goto IL_008e;
	}

IL_0031:
	{
		// if (ChannelSession != null && ChannelSession.AudioState == ConnectionState.Connected)
		RuntimeObject* L_7 = __this->___ChannelSession_8;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_8 = __this->___ChannelSession_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_8);
		G_B8_0 = ((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B8_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B8_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// ChannelSession.Set3DPosition(speaker.position, listener.position, listener.forward, listener.up);
		RuntimeObject* L_11 = __this->___ChannelSession_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___speaker1;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___listener0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___listener0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ___listener0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_18, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(28 /* System.Void VivoxUnity.IChannelSession::Set3DPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_11, L_13, L_15, L_17, L_19);
		goto IL_008e;
	}

IL_0076:
	{
		// VxClient.Instance.vivoxDebug.DebugMessage("Cannot set 3D position: Either speaker or listener is null", vx_log_level.log_info);
		VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* L_20;
		L_20 = VxClient_get_Instance_m2167C416B6C44B9635D97097549D905C162AA991(NULL);
		NullCheck(L_20);
		VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D* L_21 = L_20->___vivoxDebug_6;
		NullCheck(L_21);
		VirtualActionInvoker2< RuntimeObject*, int32_t >::Invoke(4 /* System.Void VivoxUnity.VivoxDebug::DebugMessage(System.Object,vx_log_level) */, L_21, _stringLiteralCC129F07568E30D7C8F3475EF183E33F17BAEBF3, 2);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void PositionalVoice::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_Update_m2E5B6BBC6BFE14FDB41FF9914C0F9301BEE82E45 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// if (PositionalGameObject && PositionalGameObject.transform && ChannelSession != null && ChannelSession.AudioState == ConnectionState.Connected)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PositionalGameObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___PositionalGameObject_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_5 = __this->___ChannelSession_8;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_6 = __this->___ChannelSession_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_6);
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)2))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 0;
	}

IL_0039:
	{
		V_0 = (bool)G_B5_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// Update3dPosition(PositionalGameObject.transform, PositionalGameObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___PositionalGameObject_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___PositionalGameObject_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		PositionalVoice_Update3dPosition_m0E83E5C79FC4C7EB7716B4D6CC51B09B492F04A3(__this, L_10, L_12, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void PositionalVoice::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_OnDestroy_m9EE357BD50FFA12A8E82A305C7C93ABE511F837E (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, const RuntimeMethod* method) 
{
	{
		// m_ParticipantPropertyEvent.RemoveAllListeners();
		OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F* L_0 = __this->___m_ParticipantPropertyEvent_4;
		NullCheck(L_0);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_0, NULL);
		// }
		return;
	}
}
// System.Void PositionalVoice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice__ctor_m387CB7005E81695E88D97B86581E5E8F236CA161 (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OnParticipantProperty m_ParticipantPropertyEvent = new OnParticipantProperty();
		OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F* L_0 = (OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F*)il2cpp_codegen_object_new(OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnParticipantProperty__ctor_m9CD98E077D53449C5AD8A80FF899EAEA45DAC63F(L_0, NULL);
		__this->___m_ParticipantPropertyEvent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticipantPropertyEvent_4), (void*)L_0);
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
// System.Void PositionalVoice/OnParticipantProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnParticipantProperty__ctor_m9CD98E077D53449C5AD8A80FF899EAEA45DAC63F (OnParticipantProperty_t67890466585236981589DFE2F72FA1C9C1795B8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F(__this, UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F_RuntimeMethod_var);
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
// System.Void LobbyScreenUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_Awake_m18CC7F40C737582EE667E4580879450F8FD30B2E (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnRecoveryStateChanged_m589FF2AA095D4C564939B4A591C2907C46F33B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedIn_m3CA894613EB6CC17DC688735AA3571DFDA846893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedOut_m4A3DF929DF521AA9AD7D9C82C475EC4CBC24D1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_U3CAwakeU3Eb__9_0_m25975DB7367458BCC641D99C77941BBBB7FBF253_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BC02F1D1CB47F566CF7BDA2F8B9269E32B73A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9642B44EBCCC7FCFC1D79B11E62750696304CB81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC7505A1CB0C67064B665F5E18561565AE8EADF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// _evtSystem = EventSystem.current;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		__this->____evtSystem_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____evtSystem_6), (void*)L_0);
		// if (!_evtSystem)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1 = __this->____evtSystem_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogError("Unable to find EventSystem object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9642B44EBCCC7FCFC1D79B11E62750696304CB81, NULL);
	}

IL_002b:
	{
		// _connectionIndicatorDotImage = ConnectionIndicatorDot.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___ConnectionIndicatorDot_9;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->____connectionIndicatorDotImage_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectionIndicatorDotImage_11), (void*)L_5);
		// if (!_connectionIndicatorDotImage)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->____connectionIndicatorDotImage_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// Debug.LogError("Unable to find ConnectionIndicatorDot Image object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7A5BC02F1D1CB47F566CF7BDA2F8B9269E32B73A, NULL);
	}

IL_005b:
	{
		// _connectionIndicatorDotText = ConnectionIndicatorText.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___ConnectionIndicatorText_10;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10;
		L_10 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_9, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->____connectionIndicatorDotText_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectionIndicatorDotText_12), (void*)L_10);
		// if (!_connectionIndicatorDotText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->____connectionIndicatorDotText_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		// Debug.LogError("Unable to find ConnectionIndicatorText Text object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFC7505A1CB0C67064B665F5E18561565AE8EADF3, NULL);
	}

IL_008b:
	{
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_14;
		L_14 = VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B(NULL);
		__this->____vivoxVoiceManager_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_4), (void*)L_14);
		// _vivoxVoiceManager.OnUserLoggedInEvent += OnUserLoggedIn;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_15 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_16 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_16, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedIn_m3CA894613EB6CC17DC688735AA3571DFDA846893_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		VivoxVoiceManager_add_OnUserLoggedInEvent_m122BC18E88C658CA3E2A567C2F6F63376A6226DA(L_15, L_16, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent += OnUserLoggedOut;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_17 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_18 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_18, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedOut_m4A3DF929DF521AA9AD7D9C82C475EC4CBC24D1D8_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		VivoxVoiceManager_add_OnUserLoggedOutEvent_m7B4C5C147E0C3CE56ED83FC221725EFBE3A985EE(L_17, L_18, NULL);
		// _vivoxVoiceManager.OnRecoveryStateChangedEvent += OnRecoveryStateChanged;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_19 = __this->____vivoxVoiceManager_4;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_20 = (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)il2cpp_codegen_object_new(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		RecoveryStateChangedHandler__ctor_m9D0CB80AB3E1A4BE1CEEF59C1D8D91CF02A4077A(L_20, __this, (intptr_t)((void*)LobbyScreenUI_OnRecoveryStateChanged_m589FF2AA095D4C564939B4A591C2907C46F33B4C_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		VivoxVoiceManager_add_OnRecoveryStateChangedEvent_m7670B4C1B64E81428DE4CA1640051535223143BF(L_19, L_20, NULL);
		// LogoutButton.onClick.AddListener(() => { LogoutOfVivoxService(); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = __this->___LogoutButton_7;
		NullCheck(L_21);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_22;
		L_22 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_21, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_23, __this, (intptr_t)((void*)LobbyScreenUI_U3CAwakeU3Eb__9_0_m25975DB7367458BCC641D99C77941BBBB7FBF253_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_22, L_23, NULL);
		// if (_vivoxVoiceManager.LoginState == LoginState.LoggedIn)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_24 = __this->____vivoxVoiceManager_4;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline(L_24, NULL);
		V_3 = (bool)((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_0118;
		}
	}
	{
		// OnUserLoggedIn();
		LobbyScreenUI_OnUserLoggedIn_m3CA894613EB6CC17DC688735AA3571DFDA846893(__this, NULL);
		goto IL_0121;
	}

IL_0118:
	{
		// OnUserLoggedOut();
		LobbyScreenUI_OnUserLoggedOut_m4A3DF929DF521AA9AD7D9C82C475EC4CBC24D1D8(__this, NULL);
	}

IL_0121:
	{
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnDestroy_m894AACFEE7C811B33BAEE1BED2243FB3DE650340 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnRecoveryStateChanged_m589FF2AA095D4C564939B4A591C2907C46F33B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedIn_m3CA894613EB6CC17DC688735AA3571DFDA846893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedOut_m4A3DF929DF521AA9AD7D9C82C475EC4CBC24D1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m885159A43D5C99EAA87158A2ED7DD5E00135F928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnUserLoggedInEvent -= OnUserLoggedIn;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_1 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_1, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedIn_m3CA894613EB6CC17DC688735AA3571DFDA846893_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_remove_OnUserLoggedInEvent_m4768F3A7333950D81B3F391FEB774916F8521DC0(L_0, L_1, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent -= OnUserLoggedOut;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_3 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_3, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedOut_m4A3DF929DF521AA9AD7D9C82C475EC4CBC24D1D8_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_remove_OnUserLoggedOutEvent_m86E7F2338ED713C773A8312A45424F7FAF2014D6(L_2, L_3, NULL);
		// _vivoxVoiceManager.OnParticipantAddedEvent -= VivoxVoiceManager_OnParticipantAddedEvent;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_4 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_5 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_5, __this, (intptr_t)((void*)LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m885159A43D5C99EAA87158A2ED7DD5E00135F928_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VivoxVoiceManager_remove_OnParticipantAddedEvent_mC785A9129D168B94236E2FFD6B16612989850835(L_4, L_5, NULL);
		// _vivoxVoiceManager.OnRecoveryStateChangedEvent -= OnRecoveryStateChanged;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_6 = __this->____vivoxVoiceManager_4;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_7 = (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)il2cpp_codegen_object_new(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RecoveryStateChangedHandler__ctor_m9D0CB80AB3E1A4BE1CEEF59C1D8D91CF02A4077A(L_7, __this, (intptr_t)((void*)LobbyScreenUI_OnRecoveryStateChanged_m589FF2AA095D4C564939B4A591C2907C46F33B4C_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		VivoxVoiceManager_remove_OnRecoveryStateChangedEvent_mEFB931AC3E545A929368715AC967B339CF2FEB2F(L_6, L_7, NULL);
		// LogoutButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___LogoutButton_7;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_8, NULL);
		NullCheck(L_9);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_9, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::JoinLobbyChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_JoinLobbyChannel_m6D57FF6AD2627BEC0730F074B19DA0778BF28360 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m885159A43D5C99EAA87158A2ED7DD5E00135F928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnParticipantAddedEvent += VivoxVoiceManager_OnParticipantAddedEvent;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_1 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_1, __this, (intptr_t)((void*)LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m885159A43D5C99EAA87158A2ED7DD5E00135F928_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_add_OnParticipantAddedEvent_mDC497D3B47DF4B7005942B12C9BD2E5B2FFCDC54(L_0, L_1, NULL);
		// _vivoxVoiceManager.JoinChannel(LobbyChannelName, ChannelType.NonPositional, VivoxVoiceManager.ChatCapability.TextAndAudio);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_4;
		String_t* L_3 = __this->___LobbyChannelName_5;
		NullCheck(L_2);
		VivoxVoiceManager_JoinChannel_m3484C2A5717B0EF776AEFFBF3DDEB22F5ED58278(L_2, L_3, 0, 2, (bool)1, (Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA*)NULL, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::LogoutOfVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_LogoutOfVivoxService_mED036E3D468771E9B7595CB8F158EF446D67E20C (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) 
{
	{
		// LogoutButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___LogoutButton_7;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// _vivoxVoiceManager.DisconnectAllChannels();
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_1 = __this->____vivoxVoiceManager_4;
		NullCheck(L_1);
		VivoxVoiceManager_DisconnectAllChannels_mC9A5113DEEFA5C1428E73AF0C907170440AA55E7(L_1, NULL);
		// _vivoxVoiceManager.Logout();
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_4;
		NullCheck(L_2);
		VivoxVoiceManager_Logout_m33F0A5F36923650407DAEA2AEC5D7204880175DC(L_2, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::VivoxVoiceManager_OnParticipantAddedEvent(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m885159A43D5C99EAA87158A2ED7DD5E00135F928 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (channel.Name == LobbyChannelName && participant.IsSelf)
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_0 = ___channel1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_0, NULL);
		String_t* L_2 = __this->___LobbyChannelName_5;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_4 = ___participant2;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VivoxUnity.IParticipantProperties::get_IsSelf() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedIn_m3CA894613EB6CC17DC688735AA3571DFDA846893 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_U3COnUserLoggedInU3Eb__14_0_m3B1E5B83F09AC263EABB854298823C2D8FA5AA55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnUserLoggedInU3Eb__14_1_mE907F25C303CDC95EB99DEE4E322D6D76600D8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject* G_B9_3 = NULL;
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	int32_t G_B8_2 = 0;
	RuntimeObject* G_B8_3 = NULL;
	{
		// LobbyScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LobbyScreen_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// LogoutButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___LogoutButton_7;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// _evtSystem.SetSelectedGameObject(LogoutButton.gameObject, null);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2 = __this->____evtSystem_6;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___LogoutButton_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_2);
		EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173(L_2, L_4, (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*)NULL, NULL);
		// var lobbychannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_5 = __this->____vivoxVoiceManager_4;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_5, NULL);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_7 = (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*)il2cpp_codegen_object_new(Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133(L_7, __this, (intptr_t)((void*)LobbyScreenUI_U3COnUserLoggedInU3Eb__14_0_m3B1E5B83F09AC263EABB854298823C2D8FA5AA55_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F(L_6, L_7, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		V_0 = L_8;
		// if ((_vivoxVoiceManager && _vivoxVoiceManager.ActiveChannels.Count == 0)
		//     || lobbychannel == null)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_9 = __this->____vivoxVoiceManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_11 = __this->____vivoxVoiceManager_4;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_0075;
		}
	}

IL_006f:
	{
		RuntimeObject* L_14 = V_0;
		G_B4_0 = ((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0076;
	}

IL_0075:
	{
		G_B4_0 = 1;
	}

IL_0076:
	{
		V_1 = (bool)G_B4_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0085;
		}
	}
	{
		// JoinLobbyChannel();
		LobbyScreenUI_JoinLobbyChannel_m6D57FF6AD2627BEC0730F074B19DA0778BF28360(__this, NULL);
		goto IL_00be;
	}

IL_0085:
	{
		// if (lobbychannel.AudioState == ConnectionState.Disconnected)
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_16);
		V_2 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00bd;
		}
	}
	{
		// lobbychannel.BeginSetAudioConnected(true, true, ar =>
		// {
		//     Debug.Log("Now transmitting into lobby channel");
		// });
		RuntimeObject* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ((U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_1;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_21 = L_20;
		G_B8_0 = L_21;
		G_B8_1 = 1;
		G_B8_2 = 1;
		G_B8_3 = L_19;
		if (L_21)
		{
			G_B9_0 = L_21;
			G_B9_1 = 1;
			G_B9_2 = 1;
			G_B9_3 = L_19;
			goto IL_00b6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var);
		U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117* L_22 = ((U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_23 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3COnUserLoggedInU3Eb__14_1_mE907F25C303CDC95EB99DEE4E322D6D76600D8F7_RuntimeMethod_var), NULL);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_24 = L_23;
		((U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_1), (void*)L_24);
		G_B9_0 = L_24;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_00b6:
	{
		NullCheck(G_B9_3);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, bool, bool, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(17 /* System.IAsyncResult VivoxUnity.IChannelSession::BeginSetAudioConnected(System.Boolean,System.Boolean,System.AsyncCallback) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, G_B9_3, (bool)G_B9_2, (bool)G_B9_1, G_B9_0);
	}

IL_00bd:
	{
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedOut_m4A3DF929DF521AA9AD7D9C82C475EC4CBC24D1D8 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) 
{
	{
		// _vivoxVoiceManager.DisconnectAllChannels();
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_4;
		NullCheck(L_0);
		VivoxVoiceManager_DisconnectAllChannels_mC9A5113DEEFA5C1428E73AF0C907170440AA55E7(L_0, NULL);
		// LobbyScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LobbyScreen_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnRecoveryStateChanged(VivoxUnity.ConnectionRecoveryState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnRecoveryStateChanged_m589FF2AA095D4C564939B4A591C2907C46F33B4C (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, int32_t ___recoveryState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRecoveryState_tC35647D67DBA7EE1ED0EDB3E93D41043C4FC8AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (recoveryState)
		int32_t L_0 = ___recoveryState0;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_0035;
			}
			case 5:
			{
				goto IL_003d;
			}
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// indicatorColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		V_0 = L_3;
		// break;
		goto IL_0055;
	}

IL_002d:
	{
		// indicatorColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		V_0 = L_4;
		// break;
		goto IL_0055;
	}

IL_0035:
	{
		// indicatorColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		V_0 = L_5;
		// break;
		goto IL_0055;
	}

IL_003d:
	{
		// indicatorColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		V_0 = L_6;
		// break;
		goto IL_0055;
	}

IL_0045:
	{
		// indicatorColor = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		V_0 = L_7;
		// break;
		goto IL_0055;
	}

IL_004d:
	{
		// indicatorColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_8;
		// break;
		goto IL_0055;
	}

IL_0055:
	{
		// _connectionIndicatorDotImage.color = indicatorColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->____connectionIndicatorDotImage_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// _connectionIndicatorDotText.text = recoveryState.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->____connectionIndicatorDotText_12;
		Il2CppFakeBox<int32_t> L_12(ConnectionRecoveryState_tC35647D67DBA7EE1ED0EDB3E93D41043C4FC8AE0_il2cpp_TypeInfo_var, (&___recoveryState0));
		String_t* L_13;
		L_13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_12), NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI__ctor_m6C672DB56A14D4CEDC7C65E2C7F5B5153B972B0E (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string LobbyChannelName = "lobbyChannel";
		__this->___LobbyChannelName_5 = _stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LobbyChannelName_5), (void*)_stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LobbyScreenUI::<Awake>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_U3CAwakeU3Eb__9_0_m25975DB7367458BCC641D99C77941BBBB7FBF253 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, const RuntimeMethod* method) 
{
	{
		// LogoutButton.onClick.AddListener(() => { LogoutOfVivoxService(); });
		LobbyScreenUI_LogoutOfVivoxService_mED036E3D468771E9B7595CB8F158EF446D67E20C(__this, NULL);
		// LogoutButton.onClick.AddListener(() => { LogoutOfVivoxService(); });
		return;
	}
}
// System.Boolean LobbyScreenUI::<OnUserLoggedIn>b__14_0(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LobbyScreenUI_U3COnUserLoggedInU3Eb__14_0_m3B1E5B83F09AC263EABB854298823C2D8FA5AA55 (LobbyScreenUI_t6E6689F97C785DFA27438DF9AE8FB650CE76E2A4* __this, RuntimeObject* ___ac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var lobbychannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName);
		RuntimeObject* L_0 = ___ac0;
		NullCheck(L_0);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_1;
		L_1 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_1, NULL);
		String_t* L_3 = __this->___LobbyChannelName_5;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_3, NULL);
		return L_4;
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
// System.Void LobbyScreenUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF97493CDF25E77A6A04331D23FB8917F7FF96C85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117* L_0 = (U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117*)il2cpp_codegen_object_new(U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC89B0EFFF6DB0FDBB4785C93A21618CC837D85B2(L_0, NULL);
		((U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void LobbyScreenUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC89B0EFFF6DB0FDBB4785C93A21618CC837D85B2 (U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LobbyScreenUI/<>c::<OnUserLoggedIn>b__14_1(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnUserLoggedInU3Eb__14_1_mE907F25C303CDC95EB99DEE4E322D6D76600D8F7 (U3CU3Ec_t3C079363868C1D49C0546922DF167DECB8D5B117* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209D6C95315F539F036E51E085C33C40C40878D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Now transmitting into lobby channel");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral209D6C95315F539F036E51E085C33C40C40878D0, NULL);
		// });
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
// System.Void LoginScreenUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_Awake_m02B21D3AFE8A779C69A0AD834339D3DCCA9D6C9D (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_tBEDC8697E50901BE98E4B60602E8C465B04BBB76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_OnUserLoggedIn_m0982E3B306565E26B0698C94B8896D5A8C3924C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_OnUserLoggedOut_m67148B50C6953A548AB198855ED8816574986EFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_U3CAwakeU3Eb__7_0_mC8222DA5A14AA2EBB3FD3E77EFB385A4CE24C259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_U3CAwakeU3Eb__7_1_m71A690C79B40883F66DE43C06CDC8300A732C652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// _evtSystem = FindObjectOfType<EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		__this->____evtSystem_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____evtSystem_10), (void*)L_0);
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_1;
		L_1 = VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B(NULL);
		__this->____vivoxVoiceManager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_4), (void*)L_1);
		// _vivoxVoiceManager.OnUserLoggedInEvent += OnUserLoggedIn;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_3 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_3, __this, (intptr_t)((void*)LoginScreenUI_OnUserLoggedIn_m0982E3B306565E26B0698C94B8896D5A8C3924C5_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_add_OnUserLoggedInEvent_m122BC18E88C658CA3E2A567C2F6F63376A6226DA(L_2, L_3, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent += OnUserLoggedOut;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_4 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_5 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_5, __this, (intptr_t)((void*)LoginScreenUI_OnUserLoggedOut_m67148B50C6953A548AB198855ED8816574986EFE_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VivoxVoiceManager_add_OnUserLoggedOutEvent_m7B4C5C147E0C3CE56ED83FC221725EFBE3A985EE(L_4, L_5, NULL);
		// DisplayNameInput.onEndEdit.AddListener((string text) => { LoginToVivoxService(); });
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___DisplayNameInput_6;
		NullCheck(L_6);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_7;
		L_7 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3(L_6, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_8 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_8, __this, (intptr_t)((void*)LoginScreenUI_U3CAwakeU3Eb__7_0_mC8222DA5A14AA2EBB3FD3E77EFB385A4CE24C259_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_7, L_8, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// LoginButton.onClick.AddListener(() => { LoginToVivoxService(); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___LoginButton_5;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)LoginScreenUI_U3CAwakeU3Eb__7_1_m71A690C79B40883F66DE43C06CDC8300A732C652_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// if (_vivoxVoiceManager.LoginState == VivoxUnity.LoginState.LoggedIn)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_12 = __this->____vivoxVoiceManager_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline(L_12, NULL);
		V_0 = (bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0);
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_00bf;
		}
	}
	{
		// OnUserLoggedIn();
		LoginScreenUI_OnUserLoggedIn_m0982E3B306565E26B0698C94B8896D5A8C3924C5(__this, NULL);
		// DisplayNameInput.text = _vivoxVoiceManager.LoginSession.Key.DisplayName;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = __this->___DisplayNameInput_6;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_16 = __this->____vivoxVoiceManager_4;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___LoginSession_20;
		NullCheck(L_17);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_18;
		L_18 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.AccountId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_tBEDC8697E50901BE98E4B60602E8C465B04BBB76_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = AccountId_get_DisplayName_m4B65701915D56093AB5E02F1DFA943C7883D3E92(L_18, NULL);
		NullCheck(L_15);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_15, L_19, NULL);
		goto IL_010d;
	}

IL_00bf:
	{
		// OnUserLoggedOut();
		LoginScreenUI_OnUserLoggedOut_m67148B50C6953A548AB198855ED8816574986EFE(__this, NULL);
		// var systInfoDeviceName = String.IsNullOrWhiteSpace(SystemInfo.deviceName) == false ? SystemInfo.deviceName : Environment.MachineName;
		String_t* L_20;
		L_20 = SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E(NULL);
		bool L_21;
		L_21 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_20, NULL);
		if (!L_21)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_22;
		L_22 = Environment_get_MachineName_m9DA8870A9A245AC7F13AC3EFE4E566A0CEFBA9A5(NULL);
		G_B5_0 = L_22;
		goto IL_00df;
	}

IL_00da:
	{
		String_t* L_23;
		L_23 = SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E(NULL);
		G_B5_0 = L_23;
	}

IL_00df:
	{
		V_1 = G_B5_0;
		// DisplayNameInput.text = Environment.MachineName.Substring(0, Math.Min(defaultMaxStringLength, Environment.MachineName.Length));
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_24 = __this->___DisplayNameInput_6;
		String_t* L_25;
		L_25 = Environment_get_MachineName_m9DA8870A9A245AC7F13AC3EFE4E566A0CEFBA9A5(NULL);
		int32_t L_26 = __this->___defaultMaxStringLength_8;
		String_t* L_27;
		L_27 = Environment_get_MachineName_m9DA8870A9A245AC7F13AC3EFE4E566A0CEFBA9A5(NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_26, L_28, NULL);
		NullCheck(L_25);
		String_t* L_30;
		L_30 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_25, 0, L_29, NULL);
		NullCheck(L_24);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_24, L_30, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void LoginScreenUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnDestroy_m9BEEF21209D944BD0B415F92645D0EFD1FD139DE (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_OnUserLoggedIn_m0982E3B306565E26B0698C94B8896D5A8C3924C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_OnUserLoggedOut_m67148B50C6953A548AB198855ED8816574986EFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnUserLoggedInEvent -= OnUserLoggedIn;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_1 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_1, __this, (intptr_t)((void*)LoginScreenUI_OnUserLoggedIn_m0982E3B306565E26B0698C94B8896D5A8C3924C5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_remove_OnUserLoggedInEvent_m4768F3A7333950D81B3F391FEB774916F8521DC0(L_0, L_1, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent -= OnUserLoggedOut;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_3 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_3, __this, (intptr_t)((void*)LoginScreenUI_OnUserLoggedOut_m67148B50C6953A548AB198855ED8816574986EFE_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_remove_OnUserLoggedOutEvent_m86E7F2338ED713C773A8312A45424F7FAF2014D6(L_2, L_3, NULL);
		// LoginButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___LoginButton_5;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_4, NULL);
		NullCheck(L_5);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_5, NULL);
		// DisplayNameInput.onEndEdit.RemoveAllListeners();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___DisplayNameInput_6;
		NullCheck(L_6);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_7;
		L_7 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3(L_6, NULL);
		NullCheck(L_7);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_7, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenUI::ShowLoginUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_ShowLoginUI_m7F789E066B33D6D9EA66A98B9F097EFCAC2118CC (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	{
		// LoginScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LoginScreen_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// LoginButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___LoginButton_5;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// _evtSystem.SetSelectedGameObject(LoginButton.gameObject, null);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2 = __this->____evtSystem_10;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___LoginButton_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_2);
		EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173(L_2, L_4, (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*)NULL, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenUI::HideLoginUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_HideLoginUI_m0A24770A04130CED16FF62C5E208732822472DB7 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	{
		// LoginScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LoginScreen_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean LoginScreenUI::IsAndroid12AndUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoginScreenUI_IsAndroid12AndUp_mCB9ED306247715CDBA600A3C2C356D89E6829F9A (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09DF0F4EA30887D5D6E2833D4C620AAAB11E1C34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD31F238E2BFDF2B26F149401362C247796BED93E);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// AndroidJavaClass buildVersionClass = new AndroidJavaClass("android.os.Build$VERSION");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteralD31F238E2BFDF2B26F149401362C247796BED93E, NULL);
		V_0 = L_0;
		// int buildSdkVersion = buildVersionClass.GetStatic<int>("SDK_INT");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC(L_1, _stringLiteral09DF0F4EA30887D5D6E2833D4C620AAAB11E1C34, AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
		V_1 = L_2;
		// return buildSdkVersion >= android12VersionCode;
		int32_t L_3 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.String LoginScreenUI::GetBluetoothConnectPermissionCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoginScreenUI_GetBluetoothConnectPermissionCode_mBCF295E7B36230E5FA11B70D0FAEB28FBC613115 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18CE668E20774CC9AAEA72AB947CECE1BD372D6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD152B0B6FC8958AF2AF053D8F465DA919F4ED017);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// if (IsAndroid12AndUp())
		bool L_0;
		L_0 = LoginScreenUI_IsAndroid12AndUp_mCB9ED306247715CDBA600A3C2C356D89E6829F9A(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// AndroidJavaClass manifestPermissionClass = new AndroidJavaClass("android.Manifest$permission");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral18CE668E20774CC9AAEA72AB947CECE1BD372D6A, NULL);
		V_1 = L_2;
		// string permissionCode = manifestPermissionClass.GetStatic<string>("BLUETOOTH_CONNECT");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_3, _stringLiteralD152B0B6FC8958AF2AF053D8F465DA919F4ED017, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		V_2 = L_4;
		// return permissionCode;
		String_t* L_5 = V_2;
		V_3 = L_5;
		goto IL_002f;
	}

IL_0027:
	{
		// return "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		String_t* L_6 = V_3;
		return L_6;
	}
}
// System.Boolean LoginScreenUI::IsMicPermissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoginScreenUI_IsMicPermissionGranted_m0A08A253A3E34B816EBAC62CC7A7028C01D0045F (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool isGranted = Permission.HasUserAuthorizedPermission(Permission.Microphone);
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
		V_0 = L_0;
		// if (IsAndroid12AndUp())
		bool L_1;
		L_1 = LoginScreenUI_IsAndroid12AndUp_mCB9ED306247715CDBA600A3C2C356D89E6829F9A(__this, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// isGranted &= Permission.HasUserAuthorizedPermission(GetBluetoothConnectPermissionCode());
		bool L_3 = V_0;
		String_t* L_4;
		L_4 = LoginScreenUI_GetBluetoothConnectPermissionCode_mBCF295E7B36230E5FA11B70D0FAEB28FBC613115(__this, NULL);
		bool L_5;
		L_5 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(L_4, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_3&(int32_t)L_5));
	}

IL_0026:
	{
		// return isGranted;
		bool L_6 = V_0;
		V_2 = L_6;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void LoginScreenUI::AskForPermissions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_AskForPermissions_mE5166B3A3A5D18F44CC81D68F069F98244D97876 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// string permissionCode = Permission.Microphone;
		V_0 = _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748;
		// if (PermissionAskedCount == 1 && IsAndroid12AndUp())
		int32_t L_0 = __this->___PermissionAskedCount_9;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = LoginScreenUI_IsAndroid12AndUp_mCB9ED306247715CDBA600A3C2C356D89E6829F9A(__this, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// permissionCode = GetBluetoothConnectPermissionCode();
		String_t* L_3;
		L_3 = LoginScreenUI_GetBluetoothConnectPermissionCode_mBCF295E7B36230E5FA11B70D0FAEB28FBC613115(__this, NULL);
		V_0 = L_3;
	}

IL_0026:
	{
		// PermissionAskedCount++;
		int32_t L_4 = __this->___PermissionAskedCount_9;
		__this->___PermissionAskedCount_9 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// Permission.RequestUserPermission(permissionCode);
		String_t* L_5 = V_0;
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(L_5, NULL);
		// }
		return;
	}
}
// System.Boolean LoginScreenUI::IsPermissionsDenied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoginScreenUI_IsPermissionsDenied_mC9B57E81BB8F0EDF868C44DDE24A653E8EB1FC20 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (IsAndroid12AndUp())
		bool L_0;
		L_0 = LoginScreenUI_IsAndroid12AndUp_mCB9ED306247715CDBA600A3C2C356D89E6829F9A(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return PermissionAskedCount == 2;
		int32_t L_2 = __this->___PermissionAskedCount_9;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0024;
	}

IL_0018:
	{
		// return PermissionAskedCount == 1;
		int32_t L_3 = __this->___PermissionAskedCount_9;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void LoginScreenUI::LoginToVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_LoginToVivoxService_m8EDAE241BED07AEE0110CEDCD8D6A577945487AC (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (IsMicPermissionGranted())
		bool L_0;
		L_0 = LoginScreenUI_IsMicPermissionGranted_m0A08A253A3E34B816EBAC62CC7A7028C01D0045F(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// LoginToVivox();
		LoginScreenUI_LoginToVivox_m555DEC63EC64487F16C3A45DC4F8A3E83AE1EF1E(__this, NULL);
		goto IL_003d;
	}

IL_0016:
	{
		// if (IsPermissionsDenied())
		bool L_2;
		L_2 = LoginScreenUI_IsPermissionsDenied_mC9B57E81BB8F0EDF868C44DDE24A653E8EB1FC20(__this, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// PermissionAskedCount = 0;
		__this->___PermissionAskedCount_9 = 0;
		// LoginToVivox();
		LoginScreenUI_LoginToVivox_m555DEC63EC64487F16C3A45DC4F8A3E83AE1EF1E(__this, NULL);
		goto IL_003c;
	}

IL_0033:
	{
		// AskForPermissions();
		LoginScreenUI_AskForPermissions_mE5166B3A3A5D18F44CC81D68F069F98244D97876(__this, NULL);
	}

IL_003c:
	{
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void LoginScreenUI::LoginToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_LoginToVivox_m555DEC63EC64487F16C3A45DC4F8A3E83AE1EF1E (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FF7F74F0F90C892E57933991F15B128305B1B3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// LoginButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___LoginButton_5;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// if (string.IsNullOrEmpty(DisplayNameInput.text))
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___DisplayNameInput_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_1, NULL);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("Please enter a display name.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral09FF7F74F0F90C892E57933991F15B128305B1B3, NULL);
		// return;
		goto IL_0047;
	}

IL_0030:
	{
		// _vivoxVoiceManager.Login(DisplayNameInput.text);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_5 = __this->____vivoxVoiceManager_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___DisplayNameInput_6;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_6, NULL);
		NullCheck(L_5);
		VivoxVoiceManager_Login_mA9C1F55B55E06E4B4794129C6D717529C28AD93A(L_5, L_7, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void LoginScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnUserLoggedIn_m0982E3B306565E26B0698C94B8896D5A8C3924C5 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	{
		// HideLoginUI();
		LoginScreenUI_HideLoginUI_m0A24770A04130CED16FF62C5E208732822472DB7(__this, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnUserLoggedOut_m67148B50C6953A548AB198855ED8816574986EFE (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	{
		// ShowLoginUI();
		LoginScreenUI_ShowLoginUI_m7F789E066B33D6D9EA66A98B9F097EFCAC2118CC(__this, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI__ctor_m07B4C0F1B7A9E588B62EB1C5834692585AB0CD72 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	{
		// private int defaultMaxStringLength = 9;
		__this->___defaultMaxStringLength_8 = ((int32_t)9);
		// private int PermissionAskedCount = 0;
		__this->___PermissionAskedCount_9 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LoginScreenUI::<Awake>b__7_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_U3CAwakeU3Eb__7_0_mC8222DA5A14AA2EBB3FD3E77EFB385A4CE24C259 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// DisplayNameInput.onEndEdit.AddListener((string text) => { LoginToVivoxService(); });
		LoginScreenUI_LoginToVivoxService_m8EDAE241BED07AEE0110CEDCD8D6A577945487AC(__this, NULL);
		// DisplayNameInput.onEndEdit.AddListener((string text) => { LoginToVivoxService(); });
		return;
	}
}
// System.Void LoginScreenUI::<Awake>b__7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_U3CAwakeU3Eb__7_1_m71A690C79B40883F66DE43C06CDC8300A732C652 (LoginScreenUI_tFA1C4C1653D11F802F63831D04CF74953E9F506C* __this, const RuntimeMethod* method) 
{
	{
		// LoginButton.onClick.AddListener(() => { LoginToVivoxService(); });
		LoginScreenUI_LoginToVivoxService_m8EDAE241BED07AEE0110CEDCD8D6A577945487AC(__this, NULL);
		// LoginButton.onClick.AddListener(() => { LoginToVivoxService(); });
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
// System.Boolean RosterItem::get_IsMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RosterItem_get_IsMuted_m18242EA3E3AA66B42952AA365F3109DEE6A9E90E (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return isMuted; }
		bool L_0 = __this->___isMuted_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return isMuted; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void RosterItem::set_IsMuted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_set_IsMuted_mEC2E52A724AAA86AD3A49EC72F42F9830D2FB2D0 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Participant.IsSelf)
		RuntimeObject* L_0 = __this->___Participant_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VivoxUnity.IParticipantProperties::get_IsSelf() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _vivoxVoiceManager.AudioInputDevices.Muted = value;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_3 = __this->____vivoxVoiceManager_4;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VivoxVoiceManager_get_AudioInputDevices_m7C758F157ADBB28EF3A9685DDEF916A9903FFFF7(L_3, NULL);
		bool L_5 = ___value0;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void VivoxUnity.IAudioDevices::set_Muted(System.Boolean) */, IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var, L_4, L_5);
		goto IL_0046;
	}

IL_0026:
	{
		// if (Participant.InAudio)
		RuntimeObject* L_6 = __this->___Participant_5;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean VivoxUnity.IParticipantProperties::get_InAudio() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// Participant.LocalMute = value;
		RuntimeObject* L_9 = __this->___Participant_5;
		bool L_10 = ___value0;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(10 /* System.Void VivoxUnity.IParticipantProperties::set_LocalMute(System.Boolean) */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_9, L_10);
	}

IL_0045:
	{
	}

IL_0046:
	{
		// isMuted = value;
		bool L_11 = ___value0;
		__this->___isMuted_11 = L_11;
		// UpdateChatStateImage();
		RosterItem_UpdateChatStateImage_m261C33B0D89E12364C4678D03442548BCA549AFD(__this, NULL);
		// }
		return;
	}
}
// System.Boolean RosterItem::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RosterItem_get_IsSpeaking_m6AAF08BEE348E6A796545BF1C3F3BC47CDC1CFD6 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return isSpeaking; }
		bool L_0 = __this->___isSpeaking_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return isSpeaking; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void RosterItem::set_IsSpeaking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_set_IsSpeaking_m7C301D74B49E8FBCEB0131C0A0E7025CBAB0C8B8 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if  (ChatStateImage && !IsMuted)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___ChatStateImage_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2;
		L_2 = RosterItem_get_IsMuted_m18242EA3E3AA66B42952AA365F3109DEE6A9E90E(__this, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// isSpeaking = value;
		bool L_4 = ___value0;
		__this->___isSpeaking_12 = L_4;
		// UpdateChatStateImage();
		RosterItem_UpdateChatStateImage_m261C33B0D89E12364C4678D03442548BCA549AFD(__this, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void RosterItem::UpdateChatStateImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_UpdateChatStateImage_m261C33B0D89E12364C4678D03442548BCA549AFD (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (IsMuted)
		bool L_0;
		L_0 = RosterItem_get_IsMuted_m18242EA3E3AA66B42952AA365F3109DEE6A9E90E(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// ChatStateImage.sprite = MutedImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___ChatStateImage_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___MutedImage_8;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// ChatStateImage.gameObject.transform.localScale = Vector3.one;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___ChatStateImage_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_7, NULL);
		goto IL_008d;
	}

IL_003c:
	{
		// if (isSpeaking)
		bool L_8 = __this->___isSpeaking_12;
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		// ChatStateImage.sprite = SpeakingImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___ChatStateImage_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___SpeakingImage_9;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_11, NULL);
		// ChatStateImage.gameObject.transform.localScale = Vector3.one;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___ChatStateImage_7;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_15, NULL);
		goto IL_008c;
	}

IL_0078:
	{
		// ChatStateImage.sprite = NotSpeakingImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___ChatStateImage_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = __this->___NotSpeakingImage_10;
		NullCheck(L_16);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_16, L_17, NULL);
	}

IL_008c:
	{
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void RosterItem::SetupRosterItem(VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_SetupRosterItem_m3D8F6B8C9A4F30ACD243C797DD0214B8794A9E26 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, RuntimeObject* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterItem_U3CSetupRosterItemU3Eb__16_0_m0F01EE38A68EC8726DC4E20E1DDD456D310CD8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterItem_U3CSetupRosterItemU3Eb__16_1_m413E8842BF977B500C623FAB86675A52E5077409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* G_B2_0 = NULL;
	RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* G_B1_0 = NULL;
	bool G_B3_0 = false;
	RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* G_B3_1 = NULL;
	{
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0;
		L_0 = VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B(NULL);
		__this->____vivoxVoiceManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_4), (void*)L_0);
		// Participant = participant;
		RuntimeObject* L_1 = ___participant0;
		__this->___Participant_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Participant_5), (void*)L_1);
		// PlayerNameText.text = Participant.Account.DisplayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___PlayerNameText_6;
		RuntimeObject* L_3 = __this->___Participant_5;
		NullCheck(L_3);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_4;
		L_4 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = AccountId_get_DisplayName_m4B65701915D56093AB5E02F1DFA943C7883D3E92(L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// IsMuted = participant.IsSelf ? _vivoxVoiceManager.AudioInputDevices.Muted : Participant.LocalMute;
		RuntimeObject* L_6 = ___participant0;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VivoxUnity.IParticipantProperties::get_IsSelf() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_6);
		G_B1_0 = __this;
		if (L_7)
		{
			G_B2_0 = __this;
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_8 = __this->___Participant_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean VivoxUnity.IParticipantProperties::get_LocalMute() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_8);
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_0055;
	}

IL_0045:
	{
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_10 = __this->____vivoxVoiceManager_4;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VivoxVoiceManager_get_AudioInputDevices_m7C758F157ADBB28EF3A9685DDEF916A9903FFFF7(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean VivoxUnity.IAudioDevices::get_Muted() */, IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var, L_11);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
	}

IL_0055:
	{
		NullCheck(G_B3_1);
		RosterItem_set_IsMuted_mEC2E52A724AAA86AD3A49EC72F42F9830D2FB2D0(G_B3_1, G_B3_0, NULL);
		// IsSpeaking = participant.SpeechDetected;
		RuntimeObject* L_13 = ___participant0;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean VivoxUnity.IParticipantProperties::get_SpeechDetected() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_13);
		RosterItem_set_IsSpeaking_m7C301D74B49E8FBCEB0131C0A0E7025CBAB0C8B8(__this, L_14, NULL);
		// gameObject.GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     IsMuted = !IsMuted;
		// });
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_15);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16;
		L_16 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_15, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_16);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_17;
		L_17 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_16, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_18 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_18, __this, (intptr_t)((void*)RosterItem_U3CSetupRosterItemU3Eb__16_0_m0F01EE38A68EC8726DC4E20E1DDD456D310CD8C7_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_17, L_18, NULL);
		// Participant.PropertyChanged += (obj, args) =>
		// {
		//     switch (args.PropertyName)
		//     {
		//         case "SpeechDetected":
		//             IsSpeaking = Participant.SpeechDetected;
		//             break;
		//     }
		// };
		RuntimeObject* L_19 = __this->___Participant_5;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_20 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_20, __this, (intptr_t)((void*)RosterItem_U3CSetupRosterItemU3Eb__16_1_m413E8842BF977B500C623FAB86675A52E5077409_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(0 /* System.Void System.ComponentModel.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_19, L_20);
		// }
		return;
	}
}
// System.Void RosterItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem__ctor_m14A902579CA8E5B6D129784316BEDDE2C945D4E2 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void RosterItem::<SetupRosterItem>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_U3CSetupRosterItemU3Eb__16_0_m0F01EE38A68EC8726DC4E20E1DDD456D310CD8C7 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, const RuntimeMethod* method) 
{
	{
		// IsMuted = !IsMuted;
		bool L_0;
		L_0 = RosterItem_get_IsMuted_m18242EA3E3AA66B42952AA365F3109DEE6A9E90E(__this, NULL);
		RosterItem_set_IsMuted_mEC2E52A724AAA86AD3A49EC72F42F9830D2FB2D0(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// });
		return;
	}
}
// System.Void RosterItem::<SetupRosterItem>b__16_1(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_U3CSetupRosterItemU3Eb__16_1_m413E8842BF977B500C623FAB86675A52E5077409 (RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* __this, RuntimeObject* ___obj0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6020785A926649CF038C7965768B025B64B74D66);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// switch (args.PropertyName)
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_0 = ___args1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_0);
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral6020785A926649CF038C7965768B025B64B74D66, NULL);
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_002d;
	}

IL_0019:
	{
		// IsSpeaking = Participant.SpeechDetected;
		RuntimeObject* L_5 = __this->___Participant_5;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean VivoxUnity.IParticipantProperties::get_SpeechDetected() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_5);
		RosterItem_set_IsSpeaking_m7C301D74B49E8FBCEB0131C0A0E7025CBAB0C8B8(__this, L_6, NULL);
		// break;
		goto IL_002d;
	}

IL_002d:
	{
		// };
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
// System.Void RosterManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_Start_m49804ADA39AC8B6169E3E86B7AC321766C6A2E14 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RosterManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_Awake_m725C287FB6DF35062A490C579BAE8DE1204D97F9 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnParticipantAdded_m6F3D9C12DEFC2ED89E990A1C3E284CC4A5AEB018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnParticipantRemoved_mFDE9FBA5A3DF9159BECDDB104A7B515725D61199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnUserLoggedOut_m87A6E8D8AB9716F07B0BC7650040D3DAC13A7D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__5_0_m6610B537D793769510736E3C6DB3542351AA6690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t G_B3_0 = 0;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	{
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0;
		L_0 = VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B(NULL);
		__this->____vivoxVoiceManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_5), (void*)L_0);
		// _vivoxVoiceManager.OnParticipantAddedEvent += OnParticipantAdded;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_1 = __this->____vivoxVoiceManager_5;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_2 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_2, __this, (intptr_t)((void*)RosterManager_OnParticipantAdded_m6F3D9C12DEFC2ED89E990A1C3E284CC4A5AEB018_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		VivoxVoiceManager_add_OnParticipantAddedEvent_mDC497D3B47DF4B7005942B12C9BD2E5B2FFCDC54(L_1, L_2, NULL);
		// _vivoxVoiceManager.OnParticipantRemovedEvent += OnParticipantRemoved;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_3 = __this->____vivoxVoiceManager_5;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_4 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_4, __this, (intptr_t)((void*)RosterManager_OnParticipantRemoved_mFDE9FBA5A3DF9159BECDDB104A7B515725D61199_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		VivoxVoiceManager_add_OnParticipantRemovedEvent_m2D31C4537C6A2339D06406427BEC87A958DD2C94(L_3, L_4, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent += OnUserLoggedOut;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_5 = __this->____vivoxVoiceManager_5;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_6 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_6, __this, (intptr_t)((void*)RosterManager_OnUserLoggedOut_m87A6E8D8AB9716F07B0BC7650040D3DAC13A7D11_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		VivoxVoiceManager_add_OnUserLoggedOutEvent_m7B4C5C147E0C3CE56ED83FC221725EFBE3A985EE(L_5, L_6, NULL);
		// if (_vivoxVoiceManager &&  _vivoxVoiceManager.ActiveChannels.Count > 0)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_7 = __this->____vivoxVoiceManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0076;
		}
	}
	{
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_9 = __this->____vivoxVoiceManager_5;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, L_10);
		G_B3_0 = ((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B3_0 = 0;
	}

IL_0077:
	{
		V_0 = (bool)G_B3_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0106;
		}
	}
	{
		// var LobbyChannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_13 = __this->____vivoxVoiceManager_5;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_15 = ((U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_16 = L_15;
		G_B5_0 = L_16;
		G_B5_1 = L_14;
		if (L_16)
		{
			G_B6_0 = L_16;
			G_B6_1 = L_14;
			goto IL_00a9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var);
		U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB* L_17 = ((U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_18 = (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*)il2cpp_codegen_object_new(Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__5_0_m6610B537D793769510736E3C6DB3542351AA6690_RuntimeMethod_var), NULL);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_19 = L_18;
		((U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_19);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_1;
	}

IL_00a9:
	{
		RuntimeObject* L_20;
		L_20 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F(G_B6_1, G_B6_0, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		V_1 = L_20;
		// foreach (var participant in _vivoxVoiceManager.LoginSession.GetChannelSession(LobbyChannel.Channel).Participants)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_21 = __this->____vivoxVoiceManager_5;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->___LoginSession_20;
		RuntimeObject* L_23 = V_1;
		NullCheck(L_23);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_24;
		L_24 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_22);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(28 /* VivoxUnity.IChannelSession VivoxUnity.ILoginSession::GetChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_22, L_24);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<VivoxUnity.IParticipant>::GetEnumerator() */, IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var, L_26);
		V_2 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fa:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_2;
					if (!L_28)
					{
						goto IL_0104;
					}
				}
				{
					RuntimeObject* L_29 = V_2;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_0104:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f0_1;
			}

IL_00d3_1:
			{
				// foreach (var participant in _vivoxVoiceManager.LoginSession.GetChannelSession(LobbyChannel.Channel).Participants)
				RuntimeObject* L_30 = V_2;
				NullCheck(L_30);
				RuntimeObject* L_31;
				L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<VivoxUnity.IParticipant>::get_Current() */, IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var, L_30);
				V_3 = L_31;
				// UpdateParticipantRoster(participant, participant.ParentChannelSession.Channel, true);
				RuntimeObject* L_32 = V_3;
				RuntimeObject* L_33 = V_3;
				NullCheck(L_33);
				RuntimeObject* L_34;
				L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_33);
				NullCheck(L_34);
				ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_35;
				L_35 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_34);
				RosterManager_UpdateParticipantRoster_mD672A6BBA8FE75DDC6BBD0333A2C2AF15C5EC012(__this, L_32, L_35, (bool)1, NULL);
			}

IL_00f0_1:
			{
				// foreach (var participant in _vivoxVoiceManager.LoginSession.GetChannelSession(LobbyChannel.Channel).Participants)
				RuntimeObject* L_36 = V_2;
				NullCheck(L_36);
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_00d3_1;
				}
			}
			{
				goto IL_0105;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0105:
	{
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void RosterManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnDestroy_mA1EDBE71C5DF5BA48FBE6E1E28F45E2027E90D5F (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnParticipantAdded_m6F3D9C12DEFC2ED89E990A1C3E284CC4A5AEB018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnParticipantRemoved_mFDE9FBA5A3DF9159BECDDB104A7B515725D61199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnUserLoggedOut_m87A6E8D8AB9716F07B0BC7650040D3DAC13A7D11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnParticipantAddedEvent -= OnParticipantAdded;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_5;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_1 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_1, __this, (intptr_t)((void*)RosterManager_OnParticipantAdded_m6F3D9C12DEFC2ED89E990A1C3E284CC4A5AEB018_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_remove_OnParticipantAddedEvent_mC785A9129D168B94236E2FFD6B16612989850835(L_0, L_1, NULL);
		// _vivoxVoiceManager.OnParticipantRemovedEvent -= OnParticipantRemoved;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_5;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_3 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_3, __this, (intptr_t)((void*)RosterManager_OnParticipantRemoved_mFDE9FBA5A3DF9159BECDDB104A7B515725D61199_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_remove_OnParticipantRemovedEvent_mD352301B7A564BD2CD3ED3E38FEC100D5C5D0201(L_2, L_3, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent -= OnUserLoggedOut;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_4 = __this->____vivoxVoiceManager_5;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_5 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_5, __this, (intptr_t)((void*)RosterManager_OnUserLoggedOut_m87A6E8D8AB9716F07B0BC7650040D3DAC13A7D11_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VivoxVoiceManager_remove_OnUserLoggedOutEvent_m86E7F2338ED713C773A8312A45424F7FAF2014D6(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::ClearAllRosters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_ClearAllRosters_mFB1B44435CB39D7335CCBB724901170C181B5346 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mA12B6B8ADE4714303C03E3002FFC553F2D92F507_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m3F73BDAD0FB4134E3F592D22F6898D83B238EBFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4ED1BDB4002DD7041E65993BC64BAD6E53ACF1BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m976B7A02101938A597F99D0240D18FF5F2367F02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m768C18F4C7FC02B4F0C585994AABE2839361B19A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB88C349ED6D833C20D3C50D8BF4164EC9CB974D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3D9154E33397B472B684878675A3F464E2E480FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEB6DACE30961DF6238D736A85431AE262101EC67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m56803F1970724ABB38CDE8EE4F82AC42C463CD83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C854FFC39566069F60C62D248088A1824E5CC6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mE645ECD3DC0357BA8FD50344CD1F1895D61F5760_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* V_1 = NULL;
	Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* V_3 = NULL;
	{
		// foreach(List<RosterItem> rosterList in rosterObjects.Values)
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_0 = __this->___rosterObjects_6;
		NullCheck(L_0);
		ValueCollection_t5977521002F72615B597B917BB8F205DFC498C24* L_1;
		L_1 = Dictionary_2_get_Values_m3F73BDAD0FB4134E3F592D22F6898D83B238EBFB(L_0, Dictionary_2_get_Values_m3F73BDAD0FB4134E3F592D22F6898D83B238EBFB_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t4071C3BE3629F864CFB3B54432B67F32BECFC7A5 L_2;
		L_2 = ValueCollection_GetEnumerator_mE645ECD3DC0357BA8FD50344CD1F1895D61F5760(L_1, ValueCollection_GetEnumerator_mE645ECD3DC0357BA8FD50344CD1F1895D61F5760_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m976B7A02101938A597F99D0240D18FF5F2367F02((&V_0), Enumerator_Dispose_m976B7A02101938A597F99D0240D18FF5F2367F02_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_0015_1:
			{
				// foreach(List<RosterItem> rosterList in rosterObjects.Values)
				List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_3;
				L_3 = Enumerator_get_Current_mEB6DACE30961DF6238D736A85431AE262101EC67_inline((&V_0), Enumerator_get_Current_mEB6DACE30961DF6238D736A85431AE262101EC67_RuntimeMethod_var);
				V_1 = L_3;
				// foreach(RosterItem item in rosterList)
				List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_4 = V_1;
				NullCheck(L_4);
				Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396 L_5;
				L_5 = List_1_GetEnumerator_m7C854FFC39566069F60C62D248088A1824E5CC6E(L_4, List_1_GetEnumerator_m7C854FFC39566069F60C62D248088A1824E5CC6E_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0049_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m4ED1BDB4002DD7041E65993BC64BAD6E53ACF1BE((&V_2), Enumerator_Dispose_m4ED1BDB4002DD7041E65993BC64BAD6E53ACF1BE_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_003e_2;
					}

IL_0028_2:
					{
						// foreach(RosterItem item in rosterList)
						RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_6;
						L_6 = Enumerator_get_Current_m3D9154E33397B472B684878675A3F464E2E480FA_inline((&V_2), Enumerator_get_Current_m3D9154E33397B472B684878675A3F464E2E480FA_RuntimeMethod_var);
						V_3 = L_6;
						// Destroy(item.gameObject);
						RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_7 = V_3;
						NullCheck(L_7);
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
						L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
					}

IL_003e_2:
					{
						// foreach(RosterItem item in rosterList)
						bool L_9;
						L_9 = Enumerator_MoveNext_mB88C349ED6D833C20D3C50D8BF4164EC9CB974D9((&V_2), Enumerator_MoveNext_mB88C349ED6D833C20D3C50D8BF4164EC9CB974D9_RuntimeMethod_var);
						if (L_9)
						{
							goto IL_0028_2;
						}
					}
					{
						goto IL_0058_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0058_1:
			{
				// rosterList.Clear();
				List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_10 = V_1;
				NullCheck(L_10);
				List_1_Clear_m56803F1970724ABB38CDE8EE4F82AC42C463CD83_inline(L_10, List_1_Clear_m56803F1970724ABB38CDE8EE4F82AC42C463CD83_RuntimeMethod_var);
			}

IL_0060_1:
			{
				// foreach(List<RosterItem> rosterList in rosterObjects.Values)
				bool L_11;
				L_11 = Enumerator_MoveNext_m768C18F4C7FC02B4F0C585994AABE2839361B19A((&V_0), Enumerator_MoveNext_m768C18F4C7FC02B4F0C585994AABE2839361B19A_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// rosterObjects.Clear();
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_12 = __this->___rosterObjects_6;
		NullCheck(L_12);
		Dictionary_2_Clear_mA12B6B8ADE4714303C03E3002FFC553F2D92F507(L_12, Dictionary_2_Clear_mA12B6B8ADE4714303C03E3002FFC553F2D92F507_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RosterManager::ClearChannelRoster(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_ClearChannelRoster_mECFD273FF923C3AFA76ED9DD30A495D99CCC9574 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mA94025B4480D270787527FF60CCEF6109A925979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4ED1BDB4002DD7041E65993BC64BAD6E53ACF1BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB88C349ED6D833C20D3C50D8BF4164EC9CB974D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3D9154E33397B472B684878675A3F464E2E480FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m56803F1970724ABB38CDE8EE4F82AC42C463CD83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C854FFC39566069F60C62D248088A1824E5CC6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* V_0 = NULL;
	Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* V_2 = NULL;
	{
		// List<RosterItem> rosterList = rosterObjects[channel];
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_0 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_1 = ___channel0;
		NullCheck(L_0);
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_2;
		L_2 = Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5(L_0, L_1, Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5_RuntimeMethod_var);
		V_0 = L_2;
		// foreach(RosterItem item in rosterList)
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t9B84B8EF13E835309F10667DA92F07036D175396 L_4;
		L_4 = List_1_GetEnumerator_m7C854FFC39566069F60C62D248088A1824E5CC6E(L_3, List_1_GetEnumerator_m7C854FFC39566069F60C62D248088A1824E5CC6E_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4ED1BDB4002DD7041E65993BC64BAD6E53ACF1BE((&V_1), Enumerator_Dispose_m4ED1BDB4002DD7041E65993BC64BAD6E53ACF1BE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0018_1:
			{
				// foreach(RosterItem item in rosterList)
				RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_5;
				L_5 = Enumerator_get_Current_m3D9154E33397B472B684878675A3F464E2E480FA_inline((&V_1), Enumerator_get_Current_m3D9154E33397B472B684878675A3F464E2E480FA_RuntimeMethod_var);
				V_2 = L_5;
				// Destroy(item.gameObject);
				RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_6 = V_2;
				NullCheck(L_6);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_002e_1:
			{
				// foreach(RosterItem item in rosterList)
				bool L_8;
				L_8 = Enumerator_MoveNext_mB88C349ED6D833C20D3C50D8BF4164EC9CB974D9((&V_1), Enumerator_MoveNext_mB88C349ED6D833C20D3C50D8BF4164EC9CB974D9_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// rosterList.Clear();
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_9 = V_0;
		NullCheck(L_9);
		List_1_Clear_m56803F1970724ABB38CDE8EE4F82AC42C463CD83_inline(L_9, List_1_Clear_m56803F1970724ABB38CDE8EE4F82AC42C463CD83_RuntimeMethod_var);
		// rosterObjects.Remove(channel);
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_10 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_11 = ___channel0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_Remove_mA94025B4480D270787527FF60CCEF6109A925979(L_10, L_11, Dictionary_2_Remove_mA94025B4480D270787527FF60CCEF6109A925979_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RosterManager::CleanRoster(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_CleanRoster_mB35677854627AF11A98D950F25DEE14BA6F867D8 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m93B48C383F31BF590CD78FA325887DEFD1FD5759_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	{
		// RectTransform rt = this.gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		V_0 = L_1;
		// rt.sizeDelta = new Vector2(0, rosterObjects[channel].Count * 50);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = V_0;
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_3 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_4 = ___channel0;
		NullCheck(L_3);
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_5;
		L_5 = Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5(L_3, L_4, Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m93B48C383F31BF590CD78FA325887DEFD1FD5759_inline(L_5, List_1_get_Count_m93B48C383F31BF590CD78FA325887DEFD1FD5759_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), ((float)((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)50)))), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_2, L_7, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::OnChannelDisconnected(VivoxUnity.ChannelId,VivoxUnity.ConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnChannelDisconnected_m8092E1C9DE94F05028BC836DAB70BDD24472B299 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, int32_t ___audioConnectionState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mBA328C325711912D1B7D815C3A0C8AAECB5E4069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mE039A3D32B9732B76A00B30C847FF779CAFE1690_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(rosterObjects.Keys.Contains(channel))
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_0 = __this->___rosterObjects_6;
		NullCheck(L_0);
		KeyCollection_t899ECEE87BDA2B23993BC60F1F09195DB74BCD3E* L_1;
		L_1 = Dictionary_2_get_Keys_mBA328C325711912D1B7D815C3A0C8AAECB5E4069(L_0, Dictionary_2_get_Keys_mBA328C325711912D1B7D815C3A0C8AAECB5E4069_RuntimeMethod_var);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_2 = ___channel0;
		bool L_3;
		L_3 = Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mE039A3D32B9732B76A00B30C847FF779CAFE1690(L_1, L_2, Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mE039A3D32B9732B76A00B30C847FF779CAFE1690_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// ClearChannelRoster(channel);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_5 = ___channel0;
		RosterManager_ClearChannelRoster_mECFD273FF923C3AFA76ED9DD30A495D99CCC9574(__this, L_5, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void RosterManager::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnUserLoggedOut_m87A6E8D8AB9716F07B0BC7650040D3DAC13A7D11 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, const RuntimeMethod* method) 
{
	{
		// ClearAllRosters();
		RosterManager_ClearAllRosters_mFB1B44435CB39D7335CCBB724901170C181B5346(__this, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::UpdateParticipantRoster(VivoxUnity.IParticipant,VivoxUnity.ChannelId,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_UpdateParticipantRoster_mD672A6BBA8FE75DDC6BBD0333A2C2AF15C5EC012 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, RuntimeObject* ___participant0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___isAddParticipant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m80B873016BFBD4CA756E1179F271D0A3446A4D5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m99C1AE60C6647032B2DACDD7248041B45374D79E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m28B58285D91DEC9DAFB8C1570FBF1D4A85296D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE38088334EE217421E675493089AE687F9E878D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mCC82E270837E891C22C02A37E2D1AEA0D5492D02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mC1D001FF32AEFF2E4040D0641FDFD361499B1204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m68AA3007C82665F3A7DDD56EE1AC65DD6BDF7536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9CC1C8DBCE24FFAB49237FE01D15AF7BCCF6B13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9F8EF6FDD70A658BAF2A40A092182FF05832126A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CUpdateParticipantRosterU3Eb__0_m7E7D42B29D68D59D90AFE489285376865D909E7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEAED6BA2FFAC91E74FA8CC2645691A5D41227E2);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* V_3 = NULL;
	List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* V_7 = NULL;
	bool V_8 = false;
	{
		U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A* L_0 = (U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_mDB75E2BE1EB6794E5000794E21F34D5DCB31DB92(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A* L_1 = V_0;
		RuntimeObject* L_2 = ___participant0;
		NullCheck(L_1);
		L_1->___participant_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___participant_0), (void*)L_2);
		// if (isAddParticipant)
		bool L_3 = ___isAddParticipant2;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00b8;
		}
	}
	{
		// GameObject newRosterObject = GameObject.Instantiate(rosterItemPrefab, this.gameObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___rosterItemPrefab_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_2 = L_8;
		// RosterItem newRosterItem = newRosterObject.GetComponent<RosterItem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		NullCheck(L_9);
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_10;
		L_10 = GameObject_GetComponent_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mC1D001FF32AEFF2E4040D0641FDFD361499B1204(L_9, GameObject_GetComponent_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mC1D001FF32AEFF2E4040D0641FDFD361499B1204_RuntimeMethod_var);
		V_3 = L_10;
		// if (rosterObjects.ContainsKey(channel))
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_11 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_12 = ___channel1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_m99C1AE60C6647032B2DACDD7248041B45374D79E(L_11, L_12, Dictionary_2_ContainsKey_m99C1AE60C6647032B2DACDD7248041B45374D79E_RuntimeMethod_var);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007f;
		}
	}
	{
		// rosterObjects.TryGetValue(channel, out thisChannelList);
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_15 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_16 = ___channel1;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_TryGetValue_m28B58285D91DEC9DAFB8C1570FBF1D4A85296D75(L_15, L_16, (&V_4), Dictionary_2_TryGetValue_m28B58285D91DEC9DAFB8C1570FBF1D4A85296D75_RuntimeMethod_var);
		// newRosterItem.SetupRosterItem(participant);
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_18 = V_3;
		U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A* L_19 = V_0;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___participant_0;
		NullCheck(L_18);
		RosterItem_SetupRosterItem_m3D8F6B8C9A4F30ACD243C797DD0214B8794A9E26(L_18, L_20, NULL);
		// thisChannelList.Add(newRosterItem);
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_21 = V_4;
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_22 = V_3;
		NullCheck(L_21);
		List_1_Add_m68AA3007C82665F3A7DDD56EE1AC65DD6BDF7536_inline(L_21, L_22, List_1_Add_m68AA3007C82665F3A7DDD56EE1AC65DD6BDF7536_RuntimeMethod_var);
		// rosterObjects[channel] = thisChannelList;
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_23 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_24 = ___channel1;
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_25 = V_4;
		NullCheck(L_23);
		Dictionary_2_set_Item_mE38088334EE217421E675493089AE687F9E878D5(L_23, L_24, L_25, Dictionary_2_set_Item_mE38088334EE217421E675493089AE687F9E878D5_RuntimeMethod_var);
		goto IL_00ad;
	}

IL_007f:
	{
		// thisChannelList = new List<RosterItem>();
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_26 = (List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC*)il2cpp_codegen_object_new(List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_m9F8EF6FDD70A658BAF2A40A092182FF05832126A(L_26, List_1__ctor_m9F8EF6FDD70A658BAF2A40A092182FF05832126A_RuntimeMethod_var);
		V_4 = L_26;
		// thisChannelList.Add(newRosterItem);
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_27 = V_4;
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_28 = V_3;
		NullCheck(L_27);
		List_1_Add_m68AA3007C82665F3A7DDD56EE1AC65DD6BDF7536_inline(L_27, L_28, List_1_Add_m68AA3007C82665F3A7DDD56EE1AC65DD6BDF7536_RuntimeMethod_var);
		// newRosterItem.SetupRosterItem(participant);
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_29 = V_3;
		U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A* L_30 = V_0;
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->___participant_0;
		NullCheck(L_29);
		RosterItem_SetupRosterItem_m3D8F6B8C9A4F30ACD243C797DD0214B8794A9E26(L_29, L_31, NULL);
		// rosterObjects.Add(channel, thisChannelList);
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_32 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_33 = ___channel1;
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_34 = V_4;
		NullCheck(L_32);
		Dictionary_2_Add_m80B873016BFBD4CA756E1179F271D0A3446A4D5B(L_32, L_33, L_34, Dictionary_2_Add_m80B873016BFBD4CA756E1179F271D0A3446A4D5B_RuntimeMethod_var);
	}

IL_00ad:
	{
		// CleanRoster(channel);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_35 = ___channel1;
		RosterManager_CleanRoster_mB35677854627AF11A98D950F25DEE14BA6F867D8(__this, L_35, NULL);
		goto IL_0135;
	}

IL_00b8:
	{
		// if (rosterObjects.ContainsKey(channel))
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_36 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_37 = ___channel1;
		NullCheck(L_36);
		bool L_38;
		L_38 = Dictionary_2_ContainsKey_m99C1AE60C6647032B2DACDD7248041B45374D79E(L_36, L_37, Dictionary_2_ContainsKey_m99C1AE60C6647032B2DACDD7248041B45374D79E_RuntimeMethod_var);
		V_6 = L_38;
		bool L_39 = V_6;
		if (!L_39)
		{
			goto IL_0134;
		}
	}
	{
		// RosterItem removedItem = rosterObjects[channel].FirstOrDefault(p => p.Participant.Account.Name == participant.Account.Name);
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_40 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_41 = ___channel1;
		NullCheck(L_40);
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_42;
		L_42 = Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5(L_40, L_41, Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5_RuntimeMethod_var);
		U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A* L_43 = V_0;
		Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332* L_44 = (Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332*)il2cpp_codegen_object_new(Func_2_t8482AAF6E42ED3133B24CAC016C80007B9F37332_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Func_2__ctor_m55A71C90E497DB2A0D51DE1E1D4BC4FFB1ADF624(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CUpdateParticipantRosterU3Eb__0_m7E7D42B29D68D59D90AFE489285376865D909E7F_RuntimeMethod_var), NULL);
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_45;
		L_45 = Enumerable_FirstOrDefault_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mCC82E270837E891C22C02A37E2D1AEA0D5492D02(L_42, L_44, Enumerable_FirstOrDefault_TisRosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A_mCC82E270837E891C22C02A37E2D1AEA0D5492D02_RuntimeMethod_var);
		V_7 = L_45;
		// if (removedItem != null)
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_46 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_0126;
		}
	}
	{
		// rosterObjects[channel].Remove(removedItem);
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_49 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_50 = ___channel1;
		NullCheck(L_49);
		List_1_t5D9A09A4C3611FBF34B7832B4832A41D0A92CBEC* L_51;
		L_51 = Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5(L_49, L_50, Dictionary_2_get_Item_m307CD978D64E37B2040E35D07303CBC7B4ED6FD5_RuntimeMethod_var);
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_52 = V_7;
		NullCheck(L_51);
		bool L_53;
		L_53 = List_1_Remove_mD9CC1C8DBCE24FFAB49237FE01D15AF7BCCF6B13(L_51, L_52, List_1_Remove_mD9CC1C8DBCE24FFAB49237FE01D15AF7BCCF6B13_RuntimeMethod_var);
		// Destroy(removedItem.gameObject);
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_54 = V_7;
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_55, NULL);
		// CleanRoster(channel);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_56 = ___channel1;
		RosterManager_CleanRoster_mB35677854627AF11A98D950F25DEE14BA6F867D8(__this, L_56, NULL);
		goto IL_0133;
	}

IL_0126:
	{
		// Debug.LogError("Trying to remove a participant that has no roster item.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEEAED6BA2FFAC91E74FA8CC2645691A5D41227E2, NULL);
	}

IL_0133:
	{
	}

IL_0134:
	{
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void RosterManager::OnParticipantAdded(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnParticipantAdded_m6F3D9C12DEFC2ED89E990A1C3E284CC4A5AEB018 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, String_t* ___userName0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AED3CB487C10B345B79E6F1F11EFB4CC9D12723);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnPartAdded: " + userName);
		String_t* L_0 = ___userName0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7AED3CB487C10B345B79E6F1F11EFB4CC9D12723, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// UpdateParticipantRoster(participant, channel, true);
		RuntimeObject* L_2 = ___participant2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_3 = ___channel1;
		RosterManager_UpdateParticipantRoster_mD672A6BBA8FE75DDC6BBD0333A2C2AF15C5EC012(__this, L_2, L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::OnParticipantRemoved(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnParticipantRemoved_mFDE9FBA5A3DF9159BECDDB104A7B515725D61199 (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, String_t* ___userName0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A931BAD21B30C92ED8BBF021BCB27387AC5BF4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnPartRemoved: " + participant.Account.Name);
		RuntimeObject* L_0 = ___participant2;
		NullCheck(L_0);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_1;
		L_1 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4A931BAD21B30C92ED8BBF021BCB27387AC5BF4D, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// UpdateParticipantRoster(participant, channel, false);
		RuntimeObject* L_4 = ___participant2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_5 = ___channel1;
		RosterManager_UpdateParticipantRoster_mD672A6BBA8FE75DDC6BBD0333A2C2AF15C5EC012(__this, L_4, L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager__ctor_m728809A6351825580F684ECB6381DC49AF9A85AF (RosterManager_tFC73F66DFA1B3048648454EABBFDE5C1F25EFD4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE0935D7665A52F5DF75F29E901D240B3C66EF0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<ChannelId, List<RosterItem>> rosterObjects = new Dictionary<ChannelId, List<RosterItem>>();
		Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624* L_0 = (Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624*)il2cpp_codegen_object_new(Dictionary_2_tA66E09F9CE463529B4C490A0DCE389E58D340624_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mE0935D7665A52F5DF75F29E901D240B3C66EF0B6(L_0, Dictionary_2__ctor_mE0935D7665A52F5DF75F29E901D240B3C66EF0B6_RuntimeMethod_var);
		__this->___rosterObjects_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rosterObjects_6), (void*)L_0);
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
// System.Void RosterManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9A51A9EC0EC6C781FA3078A548818EA120C9409E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB* L_0 = (U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB*)il2cpp_codegen_object_new(U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9E7B35CD5635F98BF3496DF1B1FC1E733DB33D2E(L_0, NULL);
		((U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void RosterManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9E7B35CD5635F98BF3496DF1B1FC1E733DB33D2E (U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean RosterManager/<>c::<Awake>b__5_0(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__5_0_m6610B537D793769510736E3C6DB3542351AA6690 (U3CU3Ec_tFDB29075D8645322E742B7F25015E116005EB2DB* __this, RuntimeObject* ___ac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var LobbyChannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName);
		RuntimeObject* L_0 = ___ac0;
		NullCheck(L_0);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_1;
		L_1 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE, NULL);
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
// System.Void RosterManager/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mDB75E2BE1EB6794E5000794E21F34D5DCB31DB92 (U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean RosterManager/<>c__DisplayClass12_0::<UpdateParticipantRoster>b__0(RosterItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CUpdateParticipantRosterU3Eb__0_m7E7D42B29D68D59D90AFE489285376865D909E7F (U3CU3Ec__DisplayClass12_0_tADB7F75C424941BB082806ABB7054B583225962A* __this, RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RosterItem removedItem = rosterObjects[channel].FirstOrDefault(p => p.Participant.Account.Name == participant.Account.Name);
		RosterItem_tEBE22C8C21F10142BD9DF94A8FB539FBC8E8A09A* L_0 = ___p0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___Participant_5;
		NullCheck(L_1);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_2;
		L_2 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_2, NULL);
		RuntimeObject* L_4 = __this->___participant_0;
		NullCheck(L_4);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_5;
		L_5 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_6, NULL);
		return L_7;
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
// System.Void TextChatUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_Awake_mDB8395D305ABF1EACA6EF29EEAB6776C21CEF897 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_OnParticipantAdded_mD2FF955AB53A16A4C741904B47B417822F8E4D2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_OnTextMessageLogReceivedEvent_mD7818E299D73D53A62A20DADC200C8F18463FEE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_SubmitTTSMessageToVivox_m0AB700BABC5E9A9788FF34CB40A340BF0D11A67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_SubmitTextToVivox_m7B9B206D60B19BAF5B50FA7CB5674B5C4CAFCC38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_TTSToggleValueChanged_mE802273C12518AA2214B46A5C3628DAFC82E9A27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_U3CAwakeU3Eb__11_0_m7AF99EF21787F7E3B18AA059ADE40CCF3F6D66EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__11_1_m7AA7B389D1DE9F7E6216964D82A4FDA7A355FE9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* G_B5_2 = NULL;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* G_B4_2 = NULL;
	{
		// _textChatScrollRect = GetComponent<ScrollRect>();
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518(__this, Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		__this->____textChatScrollRect_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textChatScrollRect_8), (void*)L_0);
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_1;
		L_1 = VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B(NULL);
		__this->____vivoxVoiceManager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_4), (void*)L_1);
		// if (_messageObjPool.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->____messageObjPool_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// ClearMessageObjectPool();
		TextChatUI_ClearMessageObjectPool_mB3409D29D2E96050A3100A693AE50E98E5594E47(__this, NULL);
	}

IL_0033:
	{
		// ClearOutTextField();
		TextChatUI_ClearOutTextField_m151D125AE66BF8C5E70C1C5C475A0C29C24E11A0(__this, NULL);
		// _vivoxVoiceManager.OnParticipantAddedEvent += OnParticipantAdded;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_5 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_6 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_6, __this, (intptr_t)((void*)TextChatUI_OnParticipantAdded_mD2FF955AB53A16A4C741904B47B417822F8E4D2A_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		VivoxVoiceManager_add_OnParticipantAddedEvent_mDC497D3B47DF4B7005942B12C9BD2E5B2FFCDC54(L_5, L_6, NULL);
		// _vivoxVoiceManager.OnTextMessageLogReceivedEvent += OnTextMessageLogReceivedEvent;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_7 = __this->____vivoxVoiceManager_4;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_8 = (ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*)il2cpp_codegen_object_new(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ChannelTextMessageChangedHandler__ctor_mE91A3921F329752BE931AF3742027510B9BECB8A(L_8, __this, (intptr_t)((void*)TextChatUI_OnTextMessageLogReceivedEvent_mD7818E299D73D53A62A20DADC200C8F18463FEE3_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		VivoxVoiceManager_add_OnTextMessageLogReceivedEvent_mCD7781C25065A36C923ABCC8915C8723DD3762AC(L_7, L_8, NULL);
		// EnterButton.onClick.AddListener(SubmitTextToVivox);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___EnterButton_11;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)TextChatUI_SubmitTextToVivox_m7B9B206D60B19BAF5B50FA7CB5674B5C4CAFCC38_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// MessageInputField.onEndEdit.AddListener((string text) => { EnterKeyOnTextField(); });
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = __this->___MessageInputField_13;
		NullCheck(L_12);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_13;
		L_13 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3(L_12, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_14 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_14, __this, (intptr_t)((void*)TextChatUI_U3CAwakeU3Eb__11_0_m7AF99EF21787F7E3B18AA059ADE40CCF3F6D66EE_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_13, L_14, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// SendTTSMessageButton.onClick.AddListener(SubmitTTSMessageToVivox);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = __this->___SendTTSMessageButton_12;
		NullCheck(L_15);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_16;
		L_16 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_15, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_17 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_17, __this, (intptr_t)((void*)TextChatUI_SubmitTTSMessageToVivox_m0AB700BABC5E9A9788FF34CB40A340BF0D11A67A_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_16, L_17, NULL);
		// ToggleTTS.onValueChanged.AddListener(TTSToggleValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_18 = __this->___ToggleTTS_14;
		NullCheck(L_18);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_19 = L_18->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_20 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_20, __this, (intptr_t)((void*)TextChatUI_TTSToggleValueChanged_mE802273C12518AA2214B46A5C3628DAFC82E9A27_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_19, L_20, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// if (_vivoxVoiceManager.ActiveChannels.Count > 0)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_21 = __this->____vivoxVoiceManager_4;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_21, NULL);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, L_22);
		V_1 = (bool)((((int32_t)L_23) > ((int32_t)0))? 1 : 0);
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_0131;
		}
	}
	{
		// _lobbyChannelId = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName).Key;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_25 = __this->____vivoxVoiceManager_4;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_27 = ((U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_1;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_28 = L_27;
		G_B4_0 = L_28;
		G_B4_1 = L_26;
		G_B4_2 = __this;
		if (L_28)
		{
			G_B5_0 = L_28;
			G_B5_1 = L_26;
			G_B5_2 = __this;
			goto IL_0121;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var);
		U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9* L_29 = ((U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_30 = (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*)il2cpp_codegen_object_new(Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133(L_30, L_29, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__11_1_m7AA7B389D1DE9F7E6216964D82A4FDA7A355FE9D_RuntimeMethod_var), NULL);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_31 = L_30;
		((U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_1), (void*)L_31);
		G_B5_0 = L_31;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_0121:
	{
		RuntimeObject* L_32;
		L_32 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F(G_B5_1, G_B5_0, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		NullCheck(L_32);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_33;
		L_33 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_32);
		NullCheck(G_B5_2);
		G_B5_2->____lobbyChannelId_6 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_2->____lobbyChannelId_6), (void*)L_33);
	}

IL_0131:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_OnDestroy_m01895A15C9D9EFF091E2FA492D856D84682DF506 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_OnParticipantAdded_mD2FF955AB53A16A4C741904B47B417822F8E4D2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_OnTextMessageLogReceivedEvent_mD7818E299D73D53A62A20DADC200C8F18463FEE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnParticipantAddedEvent -= OnParticipantAdded;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_1 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_1, __this, (intptr_t)((void*)TextChatUI_OnParticipantAdded_mD2FF955AB53A16A4C741904B47B417822F8E4D2A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_remove_OnParticipantAddedEvent_mC785A9129D168B94236E2FFD6B16612989850835(L_0, L_1, NULL);
		// _vivoxVoiceManager.OnTextMessageLogReceivedEvent -= OnTextMessageLogReceivedEvent;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_4;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_3 = (ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*)il2cpp_codegen_object_new(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ChannelTextMessageChangedHandler__ctor_mE91A3921F329752BE931AF3742027510B9BECB8A(L_3, __this, (intptr_t)((void*)TextChatUI_OnTextMessageLogReceivedEvent_mD7818E299D73D53A62A20DADC200C8F18463FEE3_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_remove_OnTextMessageLogReceivedEvent_mA9BD8115871492D15DD42DA6ABECB2DAAA8ABF2B(L_2, L_3, NULL);
		// EnterButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___EnterButton_11;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_4, NULL);
		NullCheck(L_5);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_5, NULL);
		// MessageInputField.onEndEdit.RemoveAllListeners();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___MessageInputField_13;
		NullCheck(L_6);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_7;
		L_7 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3(L_6, NULL);
		NullCheck(L_7);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_7, NULL);
		// SendTTSMessageButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___SendTTSMessageButton_12;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_8, NULL);
		NullCheck(L_9);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_9, NULL);
		// ToggleTTS.onValueChanged.RemoveAllListeners();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = __this->___ToggleTTS_14;
		NullCheck(L_10);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_11 = L_10->___onValueChanged_23;
		NullCheck(L_11);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_11, NULL);
		// }
		return;
	}
}
// System.Void TextChatUI::TTSToggleValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_TTSToggleValueChanged_mE802273C12518AA2214B46A5C3628DAFC82E9A27 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, bool ___toggleTTS0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!ToggleTTS.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___ToggleTTS_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// _vivoxVoiceManager.LoginSession.TTS.CancelDestination(TTSDestination.QueuedLocalPlayback);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_3 = __this->____vivoxVoiceManager_4;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___LoginSession_20;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void VivoxUnity.ITextToSpeech::CancelDestination(VivoxUnity.TTSDestination) */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_5, 4);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::ClearMessageObjectPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_ClearMessageObjectPool_mB3409D29D2E96050A3100A693AE50E98E5594E47 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < _messageObjPool.Count; i++)
		V_0 = 0;
		goto IL_001d;
	}

IL_0005:
	{
		// Destroy(_messageObjPool[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____messageObjPool_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// for (int i = 0; i < _messageObjPool.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < _messageObjPool.Count; i++)
		int32_t L_4 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____messageObjPool_7;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// _messageObjPool.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->____messageObjPool_7;
		NullCheck(L_8);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_8, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TextChatUI::ClearOutTextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_ClearOutTextField_m151D125AE66BF8C5E70C1C5C475A0C29C24E11A0 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageInputField.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___MessageInputField_13;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// MessageInputField.Select();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___MessageInputField_13;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(38 /* System.Void UnityEngine.UI.Selectable::Select() */, L_2);
		// MessageInputField.ActivateInputField();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___MessageInputField_13;
		NullCheck(L_3);
		InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05(L_3, NULL);
		// }
		return;
	}
}
// System.Void TextChatUI::EnterKeyOnTextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_EnterKeyOnTextField_m843CC7C468FE308A614278DE851B5D20C794A0FF (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(!Input.GetKeyDown(KeyCode.Return))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)13), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		goto IL_0019;
	}

IL_0012:
	{
		// SubmitTextToVivox();
		TextChatUI_SubmitTextToVivox_m7B9B206D60B19BAF5B50FA7CB5674B5C4CAFCC38(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::SubmitTextToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_SubmitTextToVivox_m7B9B206D60B19BAF5B50FA7CB5674B5C4CAFCC38 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (string.IsNullOrEmpty(MessageInputField.text))
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___MessageInputField_13;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_003e;
	}

IL_0018:
	{
		// _vivoxVoiceManager.SendTextMessage(MessageInputField.text, _lobbyChannelId);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_4 = __this->____vivoxVoiceManager_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___MessageInputField_13;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_5, NULL);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_7 = __this->____lobbyChannelId_6;
		NullCheck(L_4);
		VivoxVoiceManager_SendTextMessage_m6DCB9204B2E090F922442DFB278ACABEBD35EAB0(L_4, L_6, L_7, (String_t*)NULL, (String_t*)NULL, NULL);
		// ClearOutTextField();
		TextChatUI_ClearOutTextField_m151D125AE66BF8C5E70C1C5C475A0C29C24E11A0(__this, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.String TextChatUI::TruncateAtWord(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextChatUI_TruncateAtWord_m77E9EE189F86BBE513490AC2F3E73C63C2DEE09D (String_t* ___value0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		// if (value == null || value.Length < length || value.IndexOf(" ", length) == -1)
		String_t* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = ___value0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		int32_t L_3 = ___length1;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_4 = ___value0;
		int32_t L_5 = ___length1;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_4, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_5, NULL);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B4_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B4_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		// return value;
		String_t* L_8 = ___value0;
		V_1 = L_8;
		goto IL_003d;
	}

IL_0027:
	{
		// return value.Substring(0, value.IndexOf(" ", length));
		String_t* L_9 = ___value0;
		String_t* L_10 = ___value0;
		int32_t L_11 = ___length1;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_11, NULL);
		NullCheck(L_9);
		String_t* L_13;
		L_13 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_9, 0, L_12, NULL);
		V_1 = L_13;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		String_t* L_14 = V_1;
		return L_14;
	}
}
// System.Void TextChatUI::SubmitTTSMessageToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_SubmitTTSMessageToVivox_m0AB700BABC5E9A9788FF34CB40A340BF0D11A67A (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* V_0 = NULL;
	bool V_1 = false;
	{
		// if (string.IsNullOrEmpty(MessageInputField.text))
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___MessageInputField_13;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_0048;
	}

IL_0018:
	{
		// var ttsMessage = new TTSMessage(MessageInputField.text, TTSDestination.QueuedRemoteTransmissionWithLocalPlayback);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___MessageInputField_13;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_4, NULL);
		TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* L_6 = (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E*)il2cpp_codegen_object_new(TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TTSMessage__ctor_m4476A00818F82EDCCCB43DB82874E027CE2D10DA(L_6, L_5, 5, NULL);
		V_0 = L_6;
		// _vivoxVoiceManager.LoginSession.TTS.Speak(ttsMessage);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_7 = __this->____vivoxVoiceManager_4;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___LoginSession_20;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_8);
		TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* L_10 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* >::Invoke(3 /* System.Void VivoxUnity.ITextToSpeech::Speak(VivoxUnity.TTSMessage) */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_9, L_10);
		// ClearOutTextField();
		TextChatUI_ClearOutTextField_m151D125AE66BF8C5E70C1C5C475A0C29C24E11A0(__this, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TextChatUI::SendScrollRectToBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextChatUI_SendScrollRectToBottom_mF560885125BFBDC8282D34823845BD4988614876 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC* L_0 = (U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC*)il2cpp_codegen_object_new(U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendScrollRectToBottomU3Ed__20__ctor_mCFE47C12134461725F2F0ACF401447834E5D2D3C(L_0, 0, NULL);
		U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TextChatUI::DisplayHostingMessage(VivoxUnity.IChannelTextMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_DisplayHostingMessage_mD050C4F208A693139630842F4127DC23B43513E7 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, RuntimeObject* ___channelTextMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_1 = NULL;
	{
		// var newMessageObj = Instantiate(MessageObject, ChatContentObj.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MessageObject_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___ChatContentObj_9;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_3;
		// _messageObjPool.Add(newMessageObj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____messageObjPool_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_5, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// Text newMessageText = newMessageObj.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7;
		L_7 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_6, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		V_1 = L_7;
		// }
		return;
	}
}
// System.Void TextChatUI::OnParticipantAdded(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_OnParticipantAdded_mD2FF955AB53A16A4C741904B47B417822F8E4D2A (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mE5B273E5A695F2577F3A5343D2929D4587400D3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_vivoxVoiceManager.ActiveChannels.Count > 0)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, L_1);
		V_0 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// _lobbyChannelId = _vivoxVoiceManager.ActiveChannels.FirstOrDefault().Channel;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_4 = __this->____vivoxVoiceManager_4;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_4, NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mE5B273E5A695F2577F3A5343D2929D4587400D3A(L_5, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mE5B273E5A695F2577F3A5343D2929D4587400D3A_RuntimeMethod_var);
		NullCheck(L_6);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_7;
		L_7 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_6);
		__this->____lobbyChannelId_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lobbyChannelId_6), (void*)L_7);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::OnTextMessageLogReceivedEvent(System.String,VivoxUnity.IChannelTextMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_OnTextMessageLogReceivedEvent_mD7818E299D73D53A62A20DADC200C8F18463FEE3 (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral861698B5BDD391BC46A7D641FEBD491AFBB82D39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F8B627CF4695408981A5FA5E7908623ADE1956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADCFF2F9527E00370498BA0B164417E77D2B663);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// if (!String.IsNullOrEmpty(channelTextMessage.ApplicationStanzaNamespace))
		RuntimeObject* L_0 = ___channelTextMessage1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String VivoxUnity.IChannelTextMessage::get_ApplicationStanzaNamespace() */, IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0129;
	}

IL_0019:
	{
		// var newMessageObj = Instantiate(MessageObject, ChatContentObj.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___MessageObject_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___ChatContentObj_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_7;
		// _messageObjPool.Add(newMessageObj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->____messageObjPool_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_8);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_8, L_9, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// Text newMessageText = newMessageObj.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11;
		L_11 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_10, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		V_1 = L_11;
		// if (channelTextMessage.FromSelf)
		RuntimeObject* L_12 = ___channelTextMessage1;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean VivoxUnity.IChannelTextMessage::get_FromSelf() */, IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var, L_12);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0097;
		}
	}
	{
		// newMessageText.alignment = TextAnchor.MiddleRight;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = V_1;
		NullCheck(L_15);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_15, 5, NULL);
		// newMessageText.text = string.Format($"{channelTextMessage.Message} :<color=blue>{sender} </color>\n<color=#5A5A5A><size=8>{channelTextMessage.ReceivedTime}</size></color>");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = V_1;
		RuntimeObject* L_17 = ___channelTextMessage1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String VivoxUnity.ITextMessage::get_Message() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_17);
		String_t* L_19 = ___sender0;
		RuntimeObject* L_20 = ___channelTextMessage1;
		NullCheck(L_20);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21;
		L_21 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime VivoxUnity.ITextMessage::get_ReceivedTime() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_20);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_22 = L_21;
		RuntimeObject* L_23 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralEADCFF2F9527E00370498BA0B164417E77D2B663, L_18, L_19, L_23, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25;
		L_25 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_26;
		L_26 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_24, L_25, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_26);
		// StartCoroutine(SendScrollRectToBottom());
		RuntimeObject* L_27;
		L_27 = TextChatUI_SendScrollRectToBottom_mF560885125BFBDC8282D34823845BD4988614876(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_28;
		L_28 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_27, NULL);
		goto IL_0129;
	}

IL_0097:
	{
		// newMessageText.alignment = TextAnchor.MiddleLeft;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = V_1;
		NullCheck(L_29);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_29, 3, NULL);
		// newMessageText.text = string.Format($"<color=green>{sender} </color>: {channelTextMessage.Message}\n<color=#5A5A5A><size=8>{channelTextMessage.ReceivedTime}</size></color>");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = V_1;
		String_t* L_31 = ___sender0;
		RuntimeObject* L_32 = ___channelTextMessage1;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String VivoxUnity.ITextMessage::get_Message() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_32);
		RuntimeObject* L_34 = ___channelTextMessage1;
		NullCheck(L_34);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_35;
		L_35 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime VivoxUnity.ITextMessage::get_ReceivedTime() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_34);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_36 = L_35;
		RuntimeObject* L_37 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_36);
		String_t* L_38;
		L_38 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral861698B5BDD391BC46A7D641FEBD491AFBB82D39, L_31, L_33, L_37, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39;
		L_39 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_40;
		L_40 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_38, L_39, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_40);
		// if (ToggleTTS.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_41 = __this->___ToggleTTS_14;
		NullCheck(L_41);
		bool L_42;
		L_42 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_41, NULL);
		V_4 = L_42;
		bool L_43 = V_4;
		if (!L_43)
		{
			goto IL_0128;
		}
	}
	{
		// new TTSMessage($"{sender} said,", TTSDestination.QueuedLocalPlayback).Speak(_vivoxVoiceManager.LoginSession);
		String_t* L_44 = ___sender0;
		String_t* L_45;
		L_45 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_44, _stringLiteral95F8B627CF4695408981A5FA5E7908623ADE1956, NULL);
		TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* L_46 = (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E*)il2cpp_codegen_object_new(TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		TTSMessage__ctor_m4476A00818F82EDCCCB43DB82874E027CE2D10DA(L_46, L_45, 4, NULL);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_47 = __this->____vivoxVoiceManager_4;
		NullCheck(L_47);
		RuntimeObject* L_48 = L_47->___LoginSession_20;
		NullCheck(L_46);
		TTSMessage_Speak_m92E6065934822C57329E81D4091624E79F24A5E6(L_46, L_48, NULL);
		// new TTSMessage($"{channelTextMessage.Message}", TTSDestination.QueuedLocalPlayback).Speak(_vivoxVoiceManager.LoginSession);
		RuntimeObject* L_49 = ___channelTextMessage1;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String VivoxUnity.ITextMessage::get_Message() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_49);
		String_t* L_51 = L_50;
		G_B6_0 = L_51;
		if (L_51)
		{
			G_B7_0 = L_51;
			goto IL_0110;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0110:
	{
		TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* L_52 = (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E*)il2cpp_codegen_object_new(TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		TTSMessage__ctor_m4476A00818F82EDCCCB43DB82874E027CE2D10DA(L_52, G_B7_0, 4, NULL);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_53 = __this->____vivoxVoiceManager_4;
		NullCheck(L_53);
		RuntimeObject* L_54 = L_53->___LoginSession_20;
		NullCheck(L_52);
		TTSMessage_Speak_m92E6065934822C57329E81D4091624E79F24A5E6(L_52, L_54, NULL);
	}

IL_0128:
	{
	}

IL_0129:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI__ctor_mD8D358B8C116D2841DE4427264BE0D077F7F8BAA (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> _messageObjPool = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____messageObjPool_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____messageObjPool_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void TextChatUI::<Awake>b__11_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_U3CAwakeU3Eb__11_0_m7AF99EF21787F7E3B18AA059ADE40CCF3F6D66EE (TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// MessageInputField.onEndEdit.AddListener((string text) => { EnterKeyOnTextField(); });
		TextChatUI_EnterKeyOnTextField_m843CC7C468FE308A614278DE851B5D20C794A0FF(__this, NULL);
		// MessageInputField.onEndEdit.AddListener((string text) => { EnterKeyOnTextField(); });
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
// System.Void TextChatUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAE2F9A5BC8A32AABE60D11D3D0870CBC04035A15 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9* L_0 = (U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9*)il2cpp_codegen_object_new(U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE7BE51724EF4A24AD1CF30AA6FA3461F024D14CE(L_0, NULL);
		((U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TextChatUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7BE51724EF4A24AD1CF30AA6FA3461F024D14CE (U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TextChatUI/<>c::<Awake>b__11_1(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__11_1_m7AA7B389D1DE9F7E6216964D82A4FDA7A355FE9D (U3CU3Ec_t74655C0FFF7CE863CA0ABCAEA9533E39C8FD95C9* __this, RuntimeObject* ___ac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lobbyChannelId = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName).Key;
		RuntimeObject* L_0 = ___ac0;
		NullCheck(L_0);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_1;
		L_1 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE, NULL);
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
// System.Void TextChatUI/<SendScrollRectToBottom>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScrollRectToBottomU3Ed__20__ctor_mCFE47C12134461725F2F0ACF401447834E5D2D3C (U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TextChatUI/<SendScrollRectToBottom>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScrollRectToBottomU3Ed__20_System_IDisposable_Dispose_mE0A538ADCB4BC3F8EF8C255B0A525BC468C7B03D (U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TextChatUI/<SendScrollRectToBottom>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendScrollRectToBottomU3Ed__20_MoveNext_m38C9C44F5CAB26D62A03B12395380F7FF9A9A7C7 (U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_003f;
	}

IL_001f:
	{
		goto IL_0076;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_2 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_2, NULL);
		__this->___U3CU3E2__current_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_2);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _textChatScrollRect.normalizedPosition = new Vector2(0, 0);
		TextChatUI_t230605397A83804345D2EE7BF040E28BE43CAD45* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = L_3->____textChatScrollRect_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		ScrollRect_set_normalizedPosition_m8CFC50007450856E3B1FEB9E61A6311FBC0E709E(L_4, L_5, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0076:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object TextChatUI/<SendScrollRectToBottom>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendScrollRectToBottomU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAEEF4591743A9B01E237E204AE0F213A6FE27FA1 (U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TextChatUI/<SendScrollRectToBottom>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScrollRectToBottomU3Ed__20_System_Collections_IEnumerator_Reset_m81D13ABA9089F34D0874B6C6A6BE8BC7D4874F78 (U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendScrollRectToBottomU3Ed__20_System_Collections_IEnumerator_Reset_m81D13ABA9089F34D0874B6C6A6BE8BC7D4874F78_RuntimeMethod_var)));
	}
}
// System.Object TextChatUI/<SendScrollRectToBottom>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendScrollRectToBottomU3Ed__20_System_Collections_IEnumerator_get_Current_m9B1E46595AEAF80930990C33F5F0F882EA82C57D (U3CSendScrollRectToBottomU3Ed__20_tF36900864BF0464F8E832AC20AC49E282043AAEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void VivoxVoiceManager::add_OnSpeechDetectedEvent(VivoxVoiceManager/ParticipantValueChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnSpeechDetectedEvent_m364C651092504880DE20112B2FC5D3F76F5437F2 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* V_0 = NULL;
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* V_1 = NULL;
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* V_2 = NULL;
	{
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_0 = __this->___OnSpeechDetectedEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_1 = V_0;
		V_1 = L_1;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_2 = V_1;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B*)CastclassSealed((RuntimeObject*)L_4, ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B_il2cpp_TypeInfo_var));
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B** L_5 = (&__this->___OnSpeechDetectedEvent_4);
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_6 = V_2;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_7 = V_1;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_9 = V_0;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B*)L_9) == ((RuntimeObject*)(ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnSpeechDetectedEvent(VivoxVoiceManager/ParticipantValueChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnSpeechDetectedEvent_mC11770A1F6D015909BC1B9AE3FD137676635281D (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* V_0 = NULL;
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* V_1 = NULL;
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* V_2 = NULL;
	{
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_0 = __this->___OnSpeechDetectedEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_1 = V_0;
		V_1 = L_1;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_2 = V_1;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B*)CastclassSealed((RuntimeObject*)L_4, ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B_il2cpp_TypeInfo_var));
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B** L_5 = (&__this->___OnSpeechDetectedEvent_4);
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_6 = V_2;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_7 = V_1;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_9 = V_0;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B*)L_9) == ((RuntimeObject*)(ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnAudioEnergyChangedEvent(VivoxVoiceManager/ParticipantValueUpdatedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnAudioEnergyChangedEvent_mFA180D65017832615AE901633A255C30FA0C2075 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* V_0 = NULL;
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* V_1 = NULL;
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* V_2 = NULL;
	{
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_0 = __this->___OnAudioEnergyChangedEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_1 = V_0;
		V_1 = L_1;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_2 = V_1;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56*)CastclassSealed((RuntimeObject*)L_4, ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56_il2cpp_TypeInfo_var));
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56** L_5 = (&__this->___OnAudioEnergyChangedEvent_5);
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_6 = V_2;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_7 = V_1;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_9 = V_0;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56*)L_9) == ((RuntimeObject*)(ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnAudioEnergyChangedEvent(VivoxVoiceManager/ParticipantValueUpdatedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnAudioEnergyChangedEvent_m7BF31D9A3A0BB5E38102A6B946E83FEFD3FFE98E (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* V_0 = NULL;
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* V_1 = NULL;
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* V_2 = NULL;
	{
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_0 = __this->___OnAudioEnergyChangedEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_1 = V_0;
		V_1 = L_1;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_2 = V_1;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56*)CastclassSealed((RuntimeObject*)L_4, ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56_il2cpp_TypeInfo_var));
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56** L_5 = (&__this->___OnAudioEnergyChangedEvent_5);
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_6 = V_2;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_7 = V_1;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_9 = V_0;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56*)L_9) == ((RuntimeObject*)(ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnParticipantAddedEvent_mDC497D3B47DF4B7005942B12C9BD2E5B2FFCDC54 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_0 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_1 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_2 = NULL;
	{
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_0 = __this->___OnParticipantAddedEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_1 = V_0;
		V_1 = L_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_2 = V_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)CastclassSealed((RuntimeObject*)L_4, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var));
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D** L_5 = (&__this->___OnParticipantAddedEvent_6);
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_6 = V_2;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_7 = V_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_9 = V_0;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)L_9) == ((RuntimeObject*)(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnParticipantAddedEvent_mC785A9129D168B94236E2FFD6B16612989850835 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_0 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_1 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_2 = NULL;
	{
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_0 = __this->___OnParticipantAddedEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_1 = V_0;
		V_1 = L_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_2 = V_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)CastclassSealed((RuntimeObject*)L_4, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var));
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D** L_5 = (&__this->___OnParticipantAddedEvent_6);
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_6 = V_2;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_7 = V_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_9 = V_0;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)L_9) == ((RuntimeObject*)(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnParticipantRemovedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnParticipantRemovedEvent_m2D31C4537C6A2339D06406427BEC87A958DD2C94 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_0 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_1 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_2 = NULL;
	{
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_0 = __this->___OnParticipantRemovedEvent_7;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_1 = V_0;
		V_1 = L_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_2 = V_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)CastclassSealed((RuntimeObject*)L_4, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var));
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D** L_5 = (&__this->___OnParticipantRemovedEvent_7);
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_6 = V_2;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_7 = V_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_9 = V_0;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)L_9) == ((RuntimeObject*)(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnParticipantRemovedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnParticipantRemovedEvent_mD352301B7A564BD2CD3ED3E38FEC100D5C5D0201 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_0 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_1 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* V_2 = NULL;
	{
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_0 = __this->___OnParticipantRemovedEvent_7;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_1 = V_0;
		V_1 = L_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_2 = V_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)CastclassSealed((RuntimeObject*)L_4, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var));
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D** L_5 = (&__this->___OnParticipantRemovedEvent_7);
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_6 = V_2;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_7 = V_1;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_9 = V_0;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)L_9) == ((RuntimeObject*)(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnTextMessageLogReceivedEvent(VivoxVoiceManager/ChannelTextMessageChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnTextMessageLogReceivedEvent_mCD7781C25065A36C923ABCC8915C8723DD3762AC (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* V_0 = NULL;
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* V_1 = NULL;
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* V_2 = NULL;
	{
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_0 = __this->___OnTextMessageLogReceivedEvent_8;
		V_0 = L_0;
	}

IL_0007:
	{
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_1 = V_0;
		V_1 = L_1;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_2 = V_1;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*)CastclassSealed((RuntimeObject*)L_4, ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB_il2cpp_TypeInfo_var));
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB** L_5 = (&__this->___OnTextMessageLogReceivedEvent_8);
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_6 = V_2;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_7 = V_1;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_8;
		L_8 = InterlockedCompareExchangeImpl<ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*>(L_5, L_6, L_7);
		V_0 = L_8;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_9 = V_0;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_10 = V_1;
		if ((!(((RuntimeObject*)(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*)L_9) == ((RuntimeObject*)(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnTextMessageLogReceivedEvent(VivoxVoiceManager/ChannelTextMessageChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnTextMessageLogReceivedEvent_mA9BD8115871492D15DD42DA6ABECB2DAAA8ABF2B (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* V_0 = NULL;
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* V_1 = NULL;
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* V_2 = NULL;
	{
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_0 = __this->___OnTextMessageLogReceivedEvent_8;
		V_0 = L_0;
	}

IL_0007:
	{
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_1 = V_0;
		V_1 = L_1;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_2 = V_1;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*)CastclassSealed((RuntimeObject*)L_4, ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB_il2cpp_TypeInfo_var));
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB** L_5 = (&__this->___OnTextMessageLogReceivedEvent_8);
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_6 = V_2;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_7 = V_1;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_8;
		L_8 = InterlockedCompareExchangeImpl<ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*>(L_5, L_6, L_7);
		V_0 = L_8;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_9 = V_0;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_10 = V_1;
		if ((!(((RuntimeObject*)(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*)L_9) == ((RuntimeObject*)(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedInEvent_m122BC18E88C658CA3E2A567C2F6F63376A6226DA (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_0 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_1 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_2 = NULL;
	{
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_0 = __this->___OnUserLoggedInEvent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_1 = V_0;
		V_1 = L_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_2 = V_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)CastclassSealed((RuntimeObject*)L_4, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var));
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A** L_5 = (&__this->___OnUserLoggedInEvent_9);
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_6 = V_2;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_7 = V_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_8;
		L_8 = InterlockedCompareExchangeImpl<LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*>(L_5, L_6, L_7);
		V_0 = L_8;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_9 = V_0;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_10 = V_1;
		if ((!(((RuntimeObject*)(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)L_9) == ((RuntimeObject*)(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedInEvent_m4768F3A7333950D81B3F391FEB774916F8521DC0 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_0 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_1 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_2 = NULL;
	{
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_0 = __this->___OnUserLoggedInEvent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_1 = V_0;
		V_1 = L_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_2 = V_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)CastclassSealed((RuntimeObject*)L_4, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var));
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A** L_5 = (&__this->___OnUserLoggedInEvent_9);
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_6 = V_2;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_7 = V_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_8;
		L_8 = InterlockedCompareExchangeImpl<LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*>(L_5, L_6, L_7);
		V_0 = L_8;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_9 = V_0;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_10 = V_1;
		if ((!(((RuntimeObject*)(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)L_9) == ((RuntimeObject*)(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedOutEvent_m7B4C5C147E0C3CE56ED83FC221725EFBE3A985EE (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_0 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_1 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_2 = NULL;
	{
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_0 = __this->___OnUserLoggedOutEvent_10;
		V_0 = L_0;
	}

IL_0007:
	{
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_1 = V_0;
		V_1 = L_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_2 = V_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)CastclassSealed((RuntimeObject*)L_4, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var));
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A** L_5 = (&__this->___OnUserLoggedOutEvent_10);
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_6 = V_2;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_7 = V_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_8;
		L_8 = InterlockedCompareExchangeImpl<LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*>(L_5, L_6, L_7);
		V_0 = L_8;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_9 = V_0;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_10 = V_1;
		if ((!(((RuntimeObject*)(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)L_9) == ((RuntimeObject*)(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedOutEvent_m86E7F2338ED713C773A8312A45424F7FAF2014D6 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_0 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_1 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* V_2 = NULL;
	{
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_0 = __this->___OnUserLoggedOutEvent_10;
		V_0 = L_0;
	}

IL_0007:
	{
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_1 = V_0;
		V_1 = L_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_2 = V_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)CastclassSealed((RuntimeObject*)L_4, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var));
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A** L_5 = (&__this->___OnUserLoggedOutEvent_10);
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_6 = V_2;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_7 = V_1;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_8;
		L_8 = InterlockedCompareExchangeImpl<LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*>(L_5, L_6, L_7);
		V_0 = L_8;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_9 = V_0;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_10 = V_1;
		if ((!(((RuntimeObject*)(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)L_9) == ((RuntimeObject*)(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnRecoveryStateChangedEvent(VivoxVoiceManager/RecoveryStateChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnRecoveryStateChangedEvent_m7670B4C1B64E81428DE4CA1640051535223143BF (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* V_0 = NULL;
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* V_1 = NULL;
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* V_2 = NULL;
	{
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_0 = __this->___OnRecoveryStateChangedEvent_11;
		V_0 = L_0;
	}

IL_0007:
	{
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_1 = V_0;
		V_1 = L_1;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_2 = V_1;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)CastclassSealed((RuntimeObject*)L_4, RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var));
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C** L_5 = (&__this->___OnRecoveryStateChangedEvent_11);
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_6 = V_2;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_7 = V_1;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_8;
		L_8 = InterlockedCompareExchangeImpl<RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*>(L_5, L_6, L_7);
		V_0 = L_8;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_9 = V_0;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_10 = V_1;
		if ((!(((RuntimeObject*)(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)L_9) == ((RuntimeObject*)(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnRecoveryStateChangedEvent(VivoxVoiceManager/RecoveryStateChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnRecoveryStateChangedEvent_mEFB931AC3E545A929368715AC967B339CF2FEB2F (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* V_0 = NULL;
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* V_1 = NULL;
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* V_2 = NULL;
	{
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_0 = __this->___OnRecoveryStateChangedEvent_11;
		V_0 = L_0;
	}

IL_0007:
	{
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_1 = V_0;
		V_1 = L_1;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_2 = V_1;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)CastclassSealed((RuntimeObject*)L_4, RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var));
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C** L_5 = (&__this->___OnRecoveryStateChangedEvent_11);
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_6 = V_2;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_7 = V_1;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_8;
		L_8 = InterlockedCompareExchangeImpl<RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*>(L_5, L_6, L_7);
		V_0 = L_8;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_9 = V_0;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_10 = V_1;
		if ((!(((RuntimeObject*)(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)L_9) == ((RuntimeObject*)(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// VivoxVoiceManager VivoxVoiceManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_mA9E49D06D58039AB0CC79AD3D7CA5A7E7FB3CF6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE158875ED390F9488AC132A775BB0C1A63CBB4D7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* V_5 = NULL;
	{
		// lock (m_Lock)
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Lock_13;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00a5;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00a5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (m_Instance == null)
				il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
				VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_4 = ((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_2 = L_5;
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0082_1;
				}
			}
			{
				// m_Instance = (VivoxVoiceManager)FindObjectOfType(typeof(VivoxVoiceManager));
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_8;
				L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9;
				L_9 = Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E(L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
				((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14 = ((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A*)CastclassClass((RuntimeObject*)L_9, VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14), (void*)((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A*)CastclassClass((RuntimeObject*)L_9, VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var)));
				// if (m_Instance == null)
				VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_10 = ((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14;
				bool L_11;
				L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_0081_1;
				}
			}
			{
				// var singletonObject = new GameObject();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_13, NULL);
				V_4 = L_13;
				// m_Instance = singletonObject.AddComponent<VivoxVoiceManager>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_4;
				NullCheck(L_14);
				VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_15;
				L_15 = GameObject_AddComponent_TisVivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_mA9E49D06D58039AB0CC79AD3D7CA5A7E7FB3CF6F(L_14, GameObject_AddComponent_TisVivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_mA9E49D06D58039AB0CC79AD3D7CA5A7E7FB3CF6F_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
				((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14), (void*)L_15);
				// singletonObject.name = typeof(VivoxVoiceManager).ToString() + " (Singleton)";
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				NullCheck(L_18);
				String_t* L_19;
				L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
				String_t* L_20;
				L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, _stringLiteralE158875ED390F9488AC132A775BB0C1A63CBB4D7, NULL);
				NullCheck(L_16);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_16, L_20, NULL);
			}

IL_0081_1:
			{
			}

IL_0082_1:
			{
				// DontDestroyOnLoad(m_Instance.gameObject);
				il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
				VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_21 = ((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14;
				NullCheck(L_21);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
				L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_22, NULL);
				// return m_Instance;
				VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_23 = ((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14;
				V_5 = L_23;
				goto IL_00a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a6:
	{
		// }
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_24 = V_5;
		return L_24;
	}
}
// VivoxUnity.Client VivoxVoiceManager::get__client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Client _client => VivoxService.Instance.Client;
		RuntimeObject* L_0;
		L_0 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_0);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_1;
		L_1 = InterfaceFuncInvoker0< Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* >::Invoke(0 /* VivoxUnity.Client Unity.Services.Vivox.IVivoxService::get_Client() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// VivoxUnity.LoginState VivoxVoiceManager::get_LoginState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	{
		// public LoginState LoginState { get; private set; }
		int32_t L_0 = __this->___U3CLoginStateU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void VivoxVoiceManager::set_LoginState(VivoxUnity.LoginState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_set_LoginState_m08DE1AEE872722FB7827D0F87B066E8205F46D83 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public LoginState LoginState { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CLoginStateU3Ek__BackingField_19 = L_0;
		return;
	}
}
// VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession> VivoxVoiceManager::get_ActiveChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// public VivoxUnity.IReadOnlyDictionary<ChannelId, IChannelSession> ActiveChannels => LoginSession?.ChannelSessions;
		RuntimeObject* L_0 = __this->___LoginSession_20;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession> VivoxUnity.ILoginSession::get_ChannelSessions() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// VivoxUnity.IAudioDevices VivoxVoiceManager::get_AudioInputDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_AudioInputDevices_m7C758F157ADBB28EF3A9685DDEF916A9903FFFF7 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	{
		// public IAudioDevices AudioInputDevices => _client.AudioInputDevices;
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0;
		L_0 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Client_get_AudioInputDevices_mEF09E43DA815E02795AD6E7A265CB6397DC6910A_inline(L_0, NULL);
		return L_1;
	}
}
// VivoxUnity.IAudioDevices VivoxVoiceManager::get_AudioOutputDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_AudioOutputDevices_m0328BE21F5BDE67C26DB42272EB810D2F0DA0926 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	{
		// public IAudioDevices AudioOutputDevices => _client.AudioOutputDevices;
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0;
		L_0 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Client_get_AudioOutputDevices_m54D7860B92185C76D3E1E2A3EFAC8C8E955D3C52_inline(L_0, NULL);
		return L_1;
	}
}
// VivoxUnity.IChannelSession VivoxVoiceManager::get_TransmittingSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_TransmittingSession_mFA8CDBFD2109D365FA8C061C51DF4EDCC18F5208 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_TransmittingSessionU3Eb__55_0_m6E5629A1321C4493EA809DBB995DBB37155FE55C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// if (_client == null)
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0;
		L_0 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new NullReferenceException("client");
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_get_TransmittingSession_mFA8CDBFD2109D365FA8C061C51DF4EDCC18F5208_RuntimeMethod_var)));
	}

IL_0019:
	{
		// return _client.GetLoginSession(m_Account).ChannelSessions.FirstOrDefault(x => x.IsTransmitting);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_3;
		L_3 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* L_4 = __this->___m_Account_12;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_3, L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession> VivoxUnity.ILoginSession::get_ChannelSessions() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_5);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_7 = ((U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var))->___U3CU3E9__55_0_1;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var);
		U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540* L_9 = ((U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_10 = (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*)il2cpp_codegen_object_new(Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3Cget_TransmittingSessionU3Eb__55_0_m6E5629A1321C4493EA809DBB995DBB37155FE55C_RuntimeMethod_var), NULL);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_11 = L_10;
		((U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var))->___U3CU3E9__55_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var))->___U3CU3E9__55_0_1), (void*)L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_004e:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F(G_B4_1, G_B4_0, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		V_1 = L_12;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		RuntimeObject* L_13 = V_1;
		return L_13;
	}
}
// System.Void VivoxVoiceManager::set_TransmittingSession(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_set_TransmittingSession_mCA2A8335F68BD57EDCB52875EAA162EE64627616 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// _client.GetLoginSession(m_Account).SetTransmissionMode(TransmissionMode.Single, value.Channel);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_2;
		L_2 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* L_3 = __this->___m_Account_12;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_2, L_3, NULL);
		RuntimeObject* L_5 = ___value0;
		NullCheck(L_5);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_6;
		L_6 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_4);
		InterfaceActionInvoker2< int32_t, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(47 /* System.Void VivoxUnity.ILoginSession::SetTransmissionMode(VivoxUnity.TransmissionMode,VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_4, 1, L_6);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Awake_m386B383100FA8B69DA6BF7A565731EACCDD06F08 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral282CB43FF4408CF43337C7A755263A1653212341);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (m_Instance != this && m_Instance != null)
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = ((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = ((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Instance_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.LogWarning("Multiple VivoxVoiceManager detected in the scene. Only one VivoxVoiceManager can exist at a time. The duplicate VivoxVoiceManager will be destroyed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral282CB43FF4408CF43337C7A755263A1653212341, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// return;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Start_mF479C74CEC7937AB85707A4284A006FBBF82CD92 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_m00CF8C3DD7C8F228B4FAD2518C64343A1438075F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* V_0 = NULL;
	{
		U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* L_0 = (U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE*)il2cpp_codegen_object_new(U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__58__ctor_m8B7BB67DAD521DEB8AC32013551F6C489BDCFE4C(L_0, NULL);
		V_0 = L_0;
		U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_m00CF8C3DD7C8F228B4FAD2518C64343A1438075F(L_6, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_m00CF8C3DD7C8F228B4FAD2518C64343A1438075F_RuntimeMethod_var);
		return;
	}
}
// System.Void VivoxVoiceManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnApplicationQuit_mB094E87AF525BF5C16D3CB45FD0C5742CAC4C7FB (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9677373A0B351941BE702A287F0B29AB6FC8B438);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Client.Cleanup();
		Client_Cleanup_m9BC1EF655CCF9370A9A4F4E1237CE458AA03A8F4(NULL);
		// if (_client != null)
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0;
		L_0 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// VivoxLog("Uninitializing client.");
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, _stringLiteral9677373A0B351941BE702A287F0B29AB6FC8B438, NULL);
		// _client.Uninitialize();
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_2;
		L_2 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		NullCheck(L_2);
		Client_Uninitialize_mEC913D45A5B61D0929FECC5AF33E991514458DFB(L_2, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::Login(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Login_mA9C1F55B55E06E4B4794129C6D717529C28AD93A (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___displayName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnLoginSessionPropertyChanged_m25A7D5E05437DEF4425857BF7DC33166FC258CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_U3CLoginU3Eb__60_0_m173270823375563322271A8E44F41071A6163D65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Account = new Account(displayName);
		String_t* L_0 = ___displayName0;
		Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* L_1 = (Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B*)il2cpp_codegen_object_new(Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Account__ctor_m65C5A10DE23840F87471D9A863D8ADF69F5059CA(L_1, L_0, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		__this->___m_Account_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Account_12), (void*)L_1);
		// LoginSession = _client.GetLoginSession(m_Account);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_2;
		L_2 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* L_3 = __this->___m_Account_12;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_2, L_3, NULL);
		__this->___LoginSession_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LoginSession_20), (void*)L_4);
		// LoginSession.PropertyChanged += OnLoginSessionPropertyChanged;
		RuntimeObject* L_5 = __this->___LoginSession_20;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_6 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_6, __this, (intptr_t)((void*)VivoxVoiceManager_OnLoginSessionPropertyChanged_m25A7D5E05437DEF4425857BF7DC33166FC258CE6_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(0 /* System.Void System.ComponentModel.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_5, L_6);
		// LoginSession.BeginLogin(LoginSession.GetLoginToken(), SubscriptionMode.Accept, null, null, null, ar =>
		// {
		//     try
		//     {
		//         LoginSession.EndLogin(ar);
		//     }
		//     catch (Exception e)
		//     {
		//         // Handle error
		//         VivoxLogError(nameof(e));
		//         // Unbind if we failed to login.
		//         LoginSession.PropertyChanged -= OnLoginSessionPropertyChanged;
		//         return;
		//     }
		// });
		RuntimeObject* L_7 = __this->___LoginSession_20;
		RuntimeObject* L_8 = __this->___LoginSession_20;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272));
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker1< String_t*, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 >::Invoke(49 /* System.String VivoxUnity.ILoginSession::GetLoginToken(System.Nullable`1<System.TimeSpan>) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_8, L_9);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_11 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_11, __this, (intptr_t)((void*)VivoxVoiceManager_U3CLoginU3Eb__60_0_m173270823375563322271A8E44F41071A6163D65_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker6< RuntimeObject*, String_t*, int32_t, RuntimeObject*, RuntimeObject*, RuntimeObject*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(22 /* System.IAsyncResult VivoxUnity.ILoginSession::BeginLogin(System.String,VivoxUnity.SubscriptionMode,VivoxUnity.IReadOnlyHashSet`1<VivoxUnity.AccountId>,VivoxUnity.IReadOnlyHashSet`1<VivoxUnity.AccountId>,VivoxUnity.IReadOnlyHashSet`1<VivoxUnity.AccountId>,System.AsyncCallback) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_7, L_10, 0, (RuntimeObject*)NULL, (RuntimeObject*)NULL, (RuntimeObject*)NULL, L_11);
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Logout_m33F0A5F36923650407DAEA2AEC5D7204880175DC (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if (LoginSession != null && LoginState != LoginState.LoggedOut && LoginState != LoginState.LoggingOut)
		RuntimeObject* L_0 = __this->___LoginSession_20;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1;
		L_1 = VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2;
		L_2 = VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline(__this, NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// LoginSession.Logout();
		RuntimeObject* L_4 = __this->___LoginSession_20;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(48 /* System.Void VivoxUnity.ILoginSession::Logout() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_4);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::JoinChannel(System.String,VivoxUnity.ChannelType,VivoxVoiceManager/ChatCapability,System.Boolean,VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_JoinChannel_m3484C2A5717B0EF776AEFFBF3DDEB22F5ED58278 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___channelName0, int32_t ___channelType1, int32_t ___chatCapability2, bool ___transmissionSwitch3, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___properties4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_t9072FB76D421DBB4723F10DF254F1674140350C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass62_0_U3CJoinChannelU3Eb__0_m2F9D5968EB3CC645C00F8CB560724ACE2FE32ABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnChannelPropertyChanged_mC9711AB2CA9A7BDFB69049333F5EA808B0A52293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnMessageLogRecieved_m03B6DDAE3A2BD0D646CDD822C0C8D8D55E60E1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantAdded_mC6B84E338DEB9319174E852C7423F1FE63C6FDFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantRemoved_m4767180E28D2F9001F622F1F5A3F0D3CD36FB5FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantValueUpdated_m41A8A4FA37B1FF0B908EB392ACBACD2E48C613A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C27C9252BDD577AD8270EB246D1191CC7C3091);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* V_1 = NULL;
	Channel_t9072FB76D421DBB4723F10DF254F1674140350C5* V_2 = NULL;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (LoginState == LoginState.LoggedIn)
		int32_t L_0;
		L_0 = VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0103;
		}
	}
	{
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_2 = (U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass62_0__ctor_m0640375FBF1ACE40A21715458C99EC06B12B305F(L_2, NULL);
		V_1 = L_2;
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_3 = V_1;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// Channel channel = new Channel(channelName, channelType, properties);
		String_t* L_4 = ___channelName0;
		int32_t L_5 = ___channelType1;
		Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* L_6 = ___properties4;
		Channel_t9072FB76D421DBB4723F10DF254F1674140350C5* L_7 = (Channel_t9072FB76D421DBB4723F10DF254F1674140350C5*)il2cpp_codegen_object_new(Channel_t9072FB76D421DBB4723F10DF254F1674140350C5_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Channel__ctor_m37D2FBE2DCB84B7A1C3C9480EFAC9B63C5879777(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		// IChannelSession channelSession = LoginSession.GetChannelSession(channel);
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_8 = V_1;
		RuntimeObject* L_9 = __this->___LoginSession_20;
		Channel_t9072FB76D421DBB4723F10DF254F1674140350C5* L_10 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(28 /* VivoxUnity.IChannelSession VivoxUnity.ILoginSession::GetChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_9, L_10);
		NullCheck(L_8);
		L_8->___channelSession_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___channelSession_0), (void*)L_11);
		// channelSession.PropertyChanged += OnChannelPropertyChanged;
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___channelSession_0;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_14 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_14, __this, (intptr_t)((void*)VivoxVoiceManager_OnChannelPropertyChanged_mC9711AB2CA9A7BDFB69049333F5EA808B0A52293_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(0 /* System.Void System.ComponentModel.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_13, L_14);
		// channelSession.Participants.AfterKeyAdded += OnParticipantAdded;
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_15 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___channelSession_0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_16);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_18 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_18, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantAdded_mC6B84E338DEB9319174E852C7423F1FE63C6FDFC_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(0 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::add_AfterKeyAdded(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_17, L_18);
		// channelSession.Participants.BeforeKeyRemoved += OnParticipantRemoved;
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_19 = V_1;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___channelSession_0;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_20);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_22 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_22, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantRemoved_m4767180E28D2F9001F622F1F5A3F0D3CD36FB5FB_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(2 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::add_BeforeKeyRemoved(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_21, L_22);
		// channelSession.Participants.AfterValueUpdated += OnParticipantValueUpdated;
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___channelSession_0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_24);
		EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* L_26 = (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01*)il2cpp_codegen_object_new(EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		EventHandler_1__ctor_m1E224F97ED4FD1D72AAB2B981A1F4A339572D067(L_26, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantValueUpdated_m41A8A4FA37B1FF0B908EB392ACBACD2E48C613A8_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* >::Invoke(4 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::add_AfterValueUpdated(System.EventHandler`1<VivoxUnity.ValueEventArg`2<TK,T>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_25, L_26);
		// channelSession.MessageLog.AfterItemAdded += OnMessageLogRecieved;
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_27 = V_1;
		NullCheck(L_27);
		RuntimeObject* L_28 = L_27->___channelSession_0;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage> VivoxUnity.IChannelSession::get_MessageLog() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_28);
		EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* L_30 = (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199*)il2cpp_codegen_object_new(EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		EventHandler_1__ctor_m5E06C11418535612DF07937D3529081C2316F474(L_30, __this, (intptr_t)((void*)VivoxVoiceManager_OnMessageLogRecieved_m03B6DDAE3A2BD0D646CDD822C0C8D8D55E60E1E8_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* >::Invoke(0 /* System.Void VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage>::add_AfterItemAdded(System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<T>>) */, IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var, L_29, L_30);
		// channelSession.BeginConnect(chatCapability != ChatCapability.TextOnly, chatCapability != ChatCapability.AudioOnly, transmissionSwitch, channelSession.GetConnectToken(), ar =>
		// {
		//     try
		//     {
		//         channelSession.EndConnect(ar);
		//     }
		//     catch (Exception e)
		//     {
		//         // Handle error
		//         VivoxLogError($"Could not connect to voice channel: {e.Message}");
		//         return;
		//     }
		// });
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_31 = V_1;
		NullCheck(L_31);
		RuntimeObject* L_32 = L_31->___channelSession_0;
		int32_t L_33 = ___chatCapability2;
		int32_t L_34 = ___chatCapability2;
		bool L_35 = ___transmissionSwitch3;
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_36 = V_1;
		NullCheck(L_36);
		RuntimeObject* L_37 = L_36->___channelSession_0;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272));
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_38 = V_3;
		NullCheck(L_37);
		String_t* L_39;
		L_39 = InterfaceFuncInvoker1< String_t*, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 >::Invoke(26 /* System.String VivoxUnity.IChannelSession::GetConnectToken(System.Nullable`1<System.TimeSpan>) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_37, L_38);
		U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* L_40 = V_1;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_41 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_41, L_40, (intptr_t)((void*)U3CU3Ec__DisplayClass62_0_U3CJoinChannelU3Eb__0_m2F9D5968EB3CC645C00F8CB560724ACE2FE32ABB_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker5< RuntimeObject*, bool, bool, bool, String_t*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(14 /* System.IAsyncResult VivoxUnity.IChannelSession::BeginConnect(System.Boolean,System.Boolean,System.Boolean,System.String,System.AsyncCallback) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_32, (bool)((!(((uint32_t)L_33) <= ((uint32_t)0)))? 1 : 0), (bool)((((int32_t)((((int32_t)L_34) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_35, L_39, L_41);
		goto IL_0111;
	}

IL_0103:
	{
		// VivoxLogError("Cannot join a channel when not logged in.");
		VivoxVoiceManager_VivoxLogError_mA9371A5B0285FA790A432CAC112C850F16991D8A(__this, _stringLiteral88C27C9252BDD577AD8270EB246D1191CC7C3091, NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::SendTextMessage(System.String,VivoxUnity.ChannelId,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_SendTextMessage_m6DCB9204B2E090F922442DFB278ACABEBD35EAB0 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___messageToSend0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, String_t* ___applicationStanzaNamespace2, String_t* ___applicationStanzaBody3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_U3CSendTextMessageU3Eb__0_mD343F83700D635B0DA0FC1783994D8E393F32956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C* L_0 = (U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass63_0__ctor_m4883BDF78B2526CECBE1465B3DEAB497EC12976F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		// if (ChannelId.IsNullOrEmpty(channel))
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_2 = ___channel1;
		bool L_3;
		L_3 = ChannelId_IsNullOrEmpty_m6C2661D762C1348BA4C7C32176059BBFF7A4C135(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentException("Must provide a valid ChannelId");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F23301F43FAF9CE1C2CD40E552B9952348975D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_SendTextMessage_m6DCB9204B2E090F922442DFB278ACABEBD35EAB0_RuntimeMethod_var)));
	}

IL_0024:
	{
		// if (string.IsNullOrEmpty(messageToSend))
		String_t* L_6 = ___messageToSend0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		// throw new ArgumentException("Must provide a message to send");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral696330D1E2AB3205FE1000DD6FD10D31CD721E3B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_SendTextMessage_m6DCB9204B2E090F922442DFB278ACABEBD35EAB0_RuntimeMethod_var)));
	}

IL_003a:
	{
		// var channelSession = LoginSession.GetChannelSession(channel);
		U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C* L_10 = V_0;
		RuntimeObject* L_11 = __this->___LoginSession_20;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_12 = ___channel1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(28 /* VivoxUnity.IChannelSession VivoxUnity.ILoginSession::GetChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_11, L_12);
		NullCheck(L_10);
		L_10->___channelSession_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___channelSession_0), (void*)L_13);
		// channelSession.BeginSendText(null, messageToSend, applicationStanzaNamespace, applicationStanzaBody, ar =>
		// {
		//     try
		//     {
		//         channelSession.EndSendText(ar);
		//     }
		//     catch (Exception e)
		//     {
		//         VivoxLog($"SendTextMessage failed with exception {e.Message}");
		//     }
		// });
		U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___channelSession_0;
		String_t* L_16 = ___messageToSend0;
		String_t* L_17 = ___applicationStanzaNamespace2;
		String_t* L_18 = ___applicationStanzaBody3;
		U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C* L_19 = V_0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass63_0_U3CSendTextMessageU3Eb__0_mD343F83700D635B0DA0FC1783994D8E393F32956_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker5< RuntimeObject*, String_t*, String_t*, String_t*, String_t*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(22 /* System.IAsyncResult VivoxUnity.IChannelSession::BeginSendText(System.String,System.String,System.String,System.String,System.AsyncCallback) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_15, (String_t*)NULL, L_16, L_17, L_18, L_20);
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::DisconnectAllChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_DisconnectAllChannels_mC9A5113DEEFA5C1428E73AF0C907170440AA55E7 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7447999AE08C57D5E927EB3FBFEC81E653DCE7AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2679F53F451E7C1669158B0255B7E39A2EEC2739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (ActiveChannels?.Count > 0)
		RuntimeObject* L_0;
		L_0 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		// foreach (var channelSession in ActiveChannels)
		RuntimeObject* L_4;
		L_4 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<VivoxUnity.IChannelSession>::GetEnumerator() */, IEnumerable_1_t7447999AE08C57D5E927EB3FBFEC81E653DCE7AA_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_1;
					if (!L_6)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_7 = V_1;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040_1;
			}

IL_002a_1:
			{
				// foreach (var channelSession in ActiveChannels)
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<VivoxUnity.IChannelSession>::get_Current() */, IEnumerator_1_t2679F53F451E7C1669158B0255B7E39A2EEC2739_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				// channelSession?.Disconnect();
				RuntimeObject* L_10 = V_2;
				if (L_10)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_003f_1;
			}

IL_0037_1:
			{
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker1< RuntimeObject*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(16 /* System.IAsyncResult VivoxUnity.IChannelSession::Disconnect(System.AsyncCallback) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_11, (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)NULL);
			}

IL_003f_1:
			{
			}

IL_0040_1:
			{
				// foreach (var channelSession in ActiveChannels)
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_002a_1;
				}
			}
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Boolean VivoxVoiceManager::CheckManualCredentials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VivoxVoiceManager_CheckManualCredentials_m46813F3C0EF72163DAC36F7C73746C2D7A8E5604 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return !(string.IsNullOrEmpty(_key) && string.IsNullOrEmpty(_issuer) && string.IsNullOrEmpty(_domain) && string.IsNullOrEmpty(_server));
		String_t* L_0 = __this->____key_15;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_2 = __this->____issuer_16;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_4 = __this->____domain_17;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_6 = __this->____server_18;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 1;
	}

IL_0039:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Void VivoxVoiceManager::OnMessageLogRecieved(System.Object,VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnMessageLogRecieved_m03B6DDAE3A2BD0D646CDD822C0C8D8D55E60E1E8 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RuntimeObject* ___sender0, QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F* ___textMessage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* G_B2_0 = NULL;
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* G_B1_0 = NULL;
	{
		// ValidateArgs(new object[] { sender, textMessage });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F* L_4 = ___textMessage1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_m079B602985CACF718FDBB996A980A55C8854F5D5(L_3, NULL);
		// IChannelTextMessage channelTextMessage = textMessage.Value;
		QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F* L_5 = ___textMessage1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_inline(L_5, QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_RuntimeMethod_var);
		V_0 = L_6;
		// VivoxLog(channelTextMessage.Message);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String VivoxUnity.ITextMessage::get_Message() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_7);
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, L_8, NULL);
		// OnTextMessageLogReceivedEvent?.Invoke(channelTextMessage.Sender.DisplayName, channelTextMessage);
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_9 = __this->___OnTextMessageLogReceivedEvent_8;
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* L_10 = L_9;
		G_B1_0 = L_10;
		if (L_10)
		{
			G_B2_0 = L_10;
			goto IL_0035;
		}
	}
	{
		goto IL_0047;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_12;
		L_12 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(1 /* VivoxUnity.AccountId VivoxUnity.IChannelTextMessage::get_Sender() */, IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = AccountId_get_DisplayName_m4B65701915D56093AB5E02F1DFA943C7883D3E92(L_12, NULL);
		RuntimeObject* L_14 = V_0;
		NullCheck(G_B2_0);
		ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_inline(G_B2_0, L_13, L_14, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnLoginSessionPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnLoginSessionPropertyChanged_m25A7D5E05437DEF4425857BF7DC33166FC258CE6 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RuntimeObject* ___sender0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___propertyChangedEventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnLoginSessionPropertyChanged_m25A7D5E05437DEF4425857BF7DC33166FC258CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18C19EF752E49234ADAF000130F1B8C0E533D1C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DDDA1B466C36EAF63ACFA7687FAC59D13AB0B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50FD7BF6C27C395B9804B3F9FDD503078D1DADE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB00436C38DF6739F15950C8C6C451CD5028B7DB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9E369BE80D93F75A8B15354C47AF689AF0AA656);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB5B5DC2248D49B73508E62B24DC71BBDDA0B4E0);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* G_B3_0 = NULL;
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* G_B2_0 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* G_B12_0 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* G_B11_0 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* G_B17_0 = NULL;
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* G_B16_0 = NULL;
	{
		// if (propertyChangedEventArgs.PropertyName == "RecoveryState")
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_0 = ___propertyChangedEventArgs1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral18C19EF752E49234ADAF000130F1B8C0E533D1C2, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// OnRecoveryStateChangedEvent?.Invoke(LoginSession.RecoveryState);
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_4 = __this->___OnRecoveryStateChangedEvent_11;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0022;
		}
	}
	{
		goto IL_0033;
	}

IL_0022:
	{
		RuntimeObject* L_6 = __this->___LoginSession_20;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(21 /* VivoxUnity.ConnectionRecoveryState VivoxUnity.ILoginSession::get_RecoveryState() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_6);
		NullCheck(G_B3_0);
		RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_inline(G_B3_0, L_7, NULL);
	}

IL_0033:
	{
		// return;
		goto IL_010f;
	}

IL_0038:
	{
		// if (propertyChangedEventArgs.PropertyName != "State")
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_8 = ___propertyChangedEventArgs1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_8);
		bool L_10;
		L_10 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_9, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		// return;
		goto IL_010f;
	}

IL_0052:
	{
		// var loginSession = (ILoginSession)sender;
		RuntimeObject* L_12 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_12, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var));
		// LoginState = loginSession.State;
		RuntimeObject* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* VivoxUnity.LoginState VivoxUnity.ILoginSession::get_State() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_13);
		VivoxVoiceManager_set_LoginState_m08DE1AEE872722FB7827D0F87B066E8205F46D83_inline(__this, L_14, NULL);
		// VivoxLog("Detecting login session change");
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, _stringLiteral50FD7BF6C27C395B9804B3F9FDD503078D1DADE5, NULL);
		// switch (LoginState)
		int32_t L_15;
		L_15 = VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline(__this, NULL);
		V_4 = L_15;
		int32_t L_16 = V_4;
		V_3 = L_16;
		int32_t L_17 = V_3;
		switch (L_17)
		{
			case 0:
			{
				goto IL_00d4;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_0095;
			}
			case 3:
			{
				goto IL_00c5;
			}
		}
	}
	{
		goto IL_010d;
	}

IL_0095:
	{
		// VivoxLog("Logging in");
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, _stringLiteralB00436C38DF6739F15950C8C6C451CD5028B7DB7, NULL);
		// break;
		goto IL_010f;
	}

IL_00a4:
	{
		// VivoxLog("Connected to voice server and logged in.");
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, _stringLiteralEB5B5DC2248D49B73508E62B24DC71BBDDA0B4E0, NULL);
		// OnUserLoggedInEvent?.Invoke();
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_18 = __this->___OnUserLoggedInEvent_9;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_19 = L_18;
		G_B11_0 = L_19;
		if (L_19)
		{
			G_B12_0 = L_19;
			goto IL_00bd;
		}
	}
	{
		goto IL_00c3;
	}

IL_00bd:
	{
		NullCheck(G_B12_0);
		LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_inline(G_B12_0, NULL);
	}

IL_00c3:
	{
		// break;
		goto IL_010f;
	}

IL_00c5:
	{
		// VivoxLog("Logging out");
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, _stringLiteralC9E369BE80D93F75A8B15354C47AF689AF0AA656, NULL);
		// break;
		goto IL_010f;
	}

IL_00d4:
	{
		// VivoxLog("Logged out");
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, _stringLiteral26DDDA1B466C36EAF63ACFA7687FAC59D13AB0B8, NULL);
		// OnUserLoggedOutEvent?.Invoke();
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_20 = __this->___OnUserLoggedOutEvent_10;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_21 = L_20;
		G_B16_0 = L_21;
		if (L_21)
		{
			G_B17_0 = L_21;
			goto IL_00ed;
		}
	}
	{
		goto IL_00f3;
	}

IL_00ed:
	{
		NullCheck(G_B17_0);
		LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_inline(G_B17_0, NULL);
	}

IL_00f3:
	{
		// LoginSession.PropertyChanged -= OnLoginSessionPropertyChanged;
		RuntimeObject* L_22 = __this->___LoginSession_20;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_23 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_23, __this, (intptr_t)((void*)VivoxVoiceManager_OnLoginSessionPropertyChanged_m25A7D5E05437DEF4425857BF7DC33166FC258CE6_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_22, L_23);
		// break;
		goto IL_010f;
	}

IL_010d:
	{
		// break;
		goto IL_010f;
	}

IL_010f:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnParticipantAdded(System.Object,VivoxUnity.KeyEventArg`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnParticipantAdded_mC6B84E338DEB9319174E852C7423F1FE63C6FDFC (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RuntimeObject* ___sender0, KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* ___keyEventArg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* G_B2_0 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* G_B1_0 = NULL;
	{
		// ValidateArgs(new object[] { sender, keyEventArg });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* L_4 = ___keyEventArg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_m079B602985CACF718FDBB996A980A55C8854F5D5(L_3, NULL);
		// var source = (VivoxUnity.IReadOnlyDictionary<string, IParticipant>)sender;
		RuntimeObject* L_5 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var));
		// var participant = source[keyEventArg.Key];
		RuntimeObject* L_6 = V_0;
		KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* L_7 = ___keyEventArg1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_inline(L_7, KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(7 /* T VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::get_Item(TK) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_6, L_8);
		V_1 = L_9;
		// var username = participant.Account.Name;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_11;
		L_11 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_11, NULL);
		V_2 = L_12;
		// var channel = participant.ParentChannelSession.Key;
		RuntimeObject* L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_15;
		L_15 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_14);
		V_3 = L_15;
		// var channelSession = participant.ParentChannelSession;
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_16);
		V_4 = L_17;
		// OnParticipantAddedEvent?.Invoke(username, channel, participant);
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_18 = __this->___OnParticipantAddedEvent_6;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_19 = L_18;
		G_B1_0 = L_19;
		if (L_19)
		{
			G_B2_0 = L_19;
			goto IL_0055;
		}
	}
	{
		goto IL_005e;
	}

IL_0055:
	{
		String_t* L_20 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_21 = V_3;
		RuntimeObject* L_22 = V_1;
		NullCheck(G_B2_0);
		ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_inline(G_B2_0, L_20, L_21, L_22, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnParticipantRemoved(System.Object,VivoxUnity.KeyEventArg`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnParticipantRemoved_m4767180E28D2F9001F622F1F5A3F0D3CD36FB5FB (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RuntimeObject* ___sender0, KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* ___keyEventArg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnChannelPropertyChanged_mC9711AB2CA9A7BDFB69049333F5EA808B0A52293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnMessageLogRecieved_m03B6DDAE3A2BD0D646CDD822C0C8D8D55E60E1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantAdded_mC6B84E338DEB9319174E852C7423F1FE63C6FDFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantRemoved_m4767180E28D2F9001F622F1F5A3F0D3CD36FB5FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantValueUpdated_m41A8A4FA37B1FF0B908EB392ACBACD2E48C613A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* G_B4_0 = NULL;
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* G_B3_0 = NULL;
	{
		// ValidateArgs(new object[] { sender, keyEventArg });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* L_4 = ___keyEventArg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_m079B602985CACF718FDBB996A980A55C8854F5D5(L_3, NULL);
		// var source = (VivoxUnity.IReadOnlyDictionary<string, IParticipant>)sender;
		RuntimeObject* L_5 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var));
		// var participant = source[keyEventArg.Key];
		RuntimeObject* L_6 = V_0;
		KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* L_7 = ___keyEventArg1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_inline(L_7, KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(7 /* T VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::get_Item(TK) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_6, L_8);
		V_1 = L_9;
		// var username = participant.Account.Name;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_11;
		L_11 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_11, NULL);
		V_2 = L_12;
		// var channel = participant.ParentChannelSession.Key;
		RuntimeObject* L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_15;
		L_15 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_14);
		V_3 = L_15;
		// var channelSession = participant.ParentChannelSession;
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_16);
		V_4 = L_17;
		// if (participant.IsSelf)
		RuntimeObject* L_18 = V_1;
		NullCheck(L_18);
		bool L_19;
		L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VivoxUnity.IParticipantProperties::get_IsSelf() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_18);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0111;
		}
	}
	{
		// VivoxLog($"Unsubscribing from: {channelSession.Key.Name}");
		RuntimeObject* L_21 = V_4;
		NullCheck(L_21);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_22;
		L_22 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594, L_23, NULL);
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, L_24, NULL);
		// channelSession.PropertyChanged -= OnChannelPropertyChanged;
		RuntimeObject* L_25 = V_4;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_26 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_26, __this, (intptr_t)((void*)VivoxVoiceManager_OnChannelPropertyChanged_mC9711AB2CA9A7BDFB69049333F5EA808B0A52293_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_25, L_26);
		// channelSession.Participants.AfterKeyAdded -= OnParticipantAdded;
		RuntimeObject* L_27 = V_4;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_27);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_29 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_29, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantAdded_mC6B84E338DEB9319174E852C7423F1FE63C6FDFC_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(1 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_AfterKeyAdded(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_28, L_29);
		// channelSession.Participants.BeforeKeyRemoved -= OnParticipantRemoved;
		RuntimeObject* L_30 = V_4;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_30);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_32 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_32, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantRemoved_m4767180E28D2F9001F622F1F5A3F0D3CD36FB5FB_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(3 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_BeforeKeyRemoved(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_31, L_32);
		// channelSession.Participants.AfterValueUpdated -= OnParticipantValueUpdated;
		RuntimeObject* L_33 = V_4;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_33);
		EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* L_35 = (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01*)il2cpp_codegen_object_new(EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		EventHandler_1__ctor_m1E224F97ED4FD1D72AAB2B981A1F4A339572D067(L_35, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantValueUpdated_m41A8A4FA37B1FF0B908EB392ACBACD2E48C613A8_RuntimeMethod_var), NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* >::Invoke(5 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_AfterValueUpdated(System.EventHandler`1<VivoxUnity.ValueEventArg`2<TK,T>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_34, L_35);
		// channelSession.MessageLog.AfterItemAdded -= OnMessageLogRecieved;
		RuntimeObject* L_36 = V_4;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage> VivoxUnity.IChannelSession::get_MessageLog() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_36);
		EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* L_38 = (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199*)il2cpp_codegen_object_new(EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		EventHandler_1__ctor_m5E06C11418535612DF07937D3529081C2316F474(L_38, __this, (intptr_t)((void*)VivoxVoiceManager_OnMessageLogRecieved_m03B6DDAE3A2BD0D646CDD822C0C8D8D55E60E1E8_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* >::Invoke(1 /* System.Void VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage>::remove_AfterItemAdded(System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<T>>) */, IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var, L_37, L_38);
		// var user = _client.GetLoginSession(m_Account);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_39;
		L_39 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* L_40 = __this->___m_Account_12;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_39, L_40, NULL);
		V_6 = L_41;
		// user.DeleteChannelSession(channelSession.Channel);
		RuntimeObject* L_42 = V_6;
		RuntimeObject* L_43 = V_4;
		NullCheck(L_43);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_44;
		L_44 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_43);
		NullCheck(L_42);
		InterfaceActionInvoker1< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(29 /* System.Void VivoxUnity.ILoginSession::DeleteChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_42, L_44);
	}

IL_0111:
	{
		// OnParticipantRemovedEvent?.Invoke(username, channel, participant);
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_45 = __this->___OnParticipantRemovedEvent_7;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_46 = L_45;
		G_B3_0 = L_46;
		if (L_46)
		{
			G_B4_0 = L_46;
			goto IL_011d;
		}
	}
	{
		goto IL_0126;
	}

IL_011d:
	{
		String_t* L_47 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_48 = V_3;
		RuntimeObject* L_49 = V_1;
		NullCheck(G_B4_0);
		ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_inline(G_B4_0, L_47, L_48, L_49, NULL);
	}

IL_0126:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::ValidateArgs(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_ValidateArgs_m079B602985CACF718FDBB996A980A55C8854F5D5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		// foreach (var obj in objs)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___objs0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0030;
	}

IL_0008:
	{
		// foreach (var obj in objs)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (obj == null)
		RuntimeObject* L_5 = V_2;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// throw new ArgumentNullException(obj.GetType().ToString(), "Specify a non-null/non-empty argument.");
		RuntimeObject* L_7 = V_2;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_10 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_10, L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral598FD815901C07C96F51F94285D0E6575675E0FE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_ValidateArgs_m079B602985CACF718FDBB996A980A55C8854F5D5_RuntimeMethod_var)));
	}

IL_002b:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0030:
	{
		// foreach (var obj in objs)
		int32_t L_12 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnParticipantValueUpdated(System.Object,VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnParticipantValueUpdated_m41A8A4FA37B1FF0B908EB392ACBACD2E48C613A8 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RuntimeObject* ___sender0, ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* ___valueEventArg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F40939B6CDDD36215CEF4124FF4F34AA9D77261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6020785A926649CF038C7965768B025B64B74D66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7AB9A490B68662219B76EACAAC39DCF86D23E73);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* G_B5_0 = NULL;
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* G_B4_0 = NULL;
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* G_B9_0 = NULL;
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* G_B8_0 = NULL;
	{
		// ValidateArgs(new object[] { sender, valueEventArg });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_4 = ___valueEventArg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_m079B602985CACF718FDBB996A980A55C8854F5D5(L_3, NULL);
		// var source = (VivoxUnity.IReadOnlyDictionary<string, IParticipant>)sender;
		RuntimeObject* L_5 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var));
		// var participant = source[valueEventArg.Key];
		RuntimeObject* L_6 = V_0;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_7 = ___valueEventArg1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_inline(L_7, ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(7 /* T VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::get_Item(TK) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_6, L_8);
		V_1 = L_9;
		// string username = valueEventArg.Value.Account.Name;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_10 = ___valueEventArg1;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline(L_10, ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		NullCheck(L_11);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_12;
		L_12 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_12, NULL);
		V_2 = L_13;
		// ChannelId channel = valueEventArg.Value.ParentChannelSession.Key;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_14 = ___valueEventArg1;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline(L_14, ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_17;
		L_17 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
		// string property = valueEventArg.PropertyName;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_18 = ___valueEventArg1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_inline(L_18, ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_RuntimeMethod_var);
		V_4 = L_19;
		// switch (property)
		String_t* L_20 = V_4;
		V_6 = L_20;
		String_t* L_21 = V_6;
		V_5 = L_21;
		String_t* L_22 = V_5;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral6020785A926649CF038C7965768B025B64B74D66, NULL);
		if (L_23)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_24 = V_5;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF7AB9A490B68662219B76EACAAC39DCF86D23E73, NULL);
		if (L_25)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_00d0;
	}

IL_0079:
	{
		// VivoxLog($"OnSpeechDetectedEvent: {username} in {channel}.");
		String_t* L_26 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_27 = V_3;
		String_t* L_28;
		L_28 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2F40939B6CDDD36215CEF4124FF4F34AA9D77261, L_26, L_27, NULL);
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, L_28, NULL);
		// OnSpeechDetectedEvent?.Invoke(username, channel, valueEventArg.Value.SpeechDetected);
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_29 = __this->___OnSpeechDetectedEvent_4;
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_30 = L_29;
		G_B4_0 = L_30;
		if (L_30)
		{
			G_B5_0 = L_30;
			goto IL_0099;
		}
	}
	{
		goto IL_00ac;
	}

IL_0099:
	{
		String_t* L_31 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_32 = V_3;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_33 = ___valueEventArg1;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline(L_33, ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		NullCheck(L_34);
		bool L_35;
		L_35 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean VivoxUnity.IParticipantProperties::get_SpeechDetected() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_34);
		NullCheck(G_B5_0);
		ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_inline(G_B5_0, L_31, L_32, L_35, NULL);
	}

IL_00ac:
	{
		// break;
		goto IL_00d2;
	}

IL_00ae:
	{
		// OnAudioEnergyChangedEvent?.Invoke(username, channel, valueEventArg.Value.AudioEnergy);
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_36 = __this->___OnAudioEnergyChangedEvent_5;
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* L_37 = L_36;
		G_B8_0 = L_37;
		if (L_37)
		{
			G_B9_0 = L_37;
			goto IL_00bb;
		}
	}
	{
		goto IL_00ce;
	}

IL_00bb:
	{
		String_t* L_38 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_39 = V_3;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_40 = ___valueEventArg1;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline(L_40, ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		NullCheck(L_41);
		double L_42;
		L_42 = InterfaceFuncInvoker0< double >::Invoke(6 /* System.Double VivoxUnity.IParticipantProperties::get_AudioEnergy() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_41);
		NullCheck(G_B9_0);
		ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_inline(G_B9_0, L_38, L_39, L_42, NULL);
	}

IL_00ce:
	{
		// break;
		goto IL_00d2;
	}

IL_00d0:
	{
		// break;
		goto IL_00d2;
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnChannelPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnChannelPropertyChanged_mC9711AB2CA9A7BDFB69049333F5EA808B0A52293 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RuntimeObject* ___sender0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___propertyChangedEventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnChannelPropertyChanged_mC9711AB2CA9A7BDFB69049333F5EA808B0A52293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnMessageLogRecieved_m03B6DDAE3A2BD0D646CDD822C0C8D8D55E60E1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantAdded_mC6B84E338DEB9319174E852C7423F1FE63C6FDFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantRemoved_m4767180E28D2F9001F622F1F5A3F0D3CD36FB5FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantValueUpdated_m41A8A4FA37B1FF0B908EB392ACBACD2E48C613A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB47D0C69E9096A29CC82A6719ABF53C3AE403776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3ED7812E5EBC284BAA9EF0CE704248361EEDD50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF5911A90ECA2D7170D6A38695A7121E94F4037D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* G_B8_0 = NULL;
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* G_B7_0 = NULL;
	int32_t G_B21_0 = 0;
	{
		// ValidateArgs(new object[] { sender, propertyChangedEventArgs });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_4 = ___propertyChangedEventArgs1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_m079B602985CACF718FDBB996A980A55C8854F5D5(L_3, NULL);
		// var channelSession = (IChannelSession)sender;
		RuntimeObject* L_5 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var));
		// if (propertyChangedEventArgs.PropertyName == "AudioState" && channelSession.AudioState == ConnectionState.Disconnected)
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_6 = ___propertyChangedEventArgs1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_6);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralB47D0C69E9096A29CC82A6719ABF53C3AE403776, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_9);
		G_B3_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 0;
	}

IL_003a:
	{
		V_1 = (bool)G_B3_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00ad;
		}
	}
	{
		// VivoxLog($"Audio disconnected from: {channelSession.Key.Name}");
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_13;
		L_13 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFF5911A90ECA2D7170D6A38695A7121E94F4037D, L_14, NULL);
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, L_15, NULL);
		// foreach (var participant in channelSession.Participants)
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<VivoxUnity.IParticipant>::GetEnumerator() */, IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var, L_17);
		V_2 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_19 = V_2;
					if (!L_19)
					{
						goto IL_00ab;
					}
				}
				{
					RuntimeObject* L_20 = V_2;
					NullCheck(L_20);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
				}

IL_00ab:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0097_1;
			}

IL_006a_1:
			{
				// foreach (var participant in channelSession.Participants)
				RuntimeObject* L_21 = V_2;
				NullCheck(L_21);
				RuntimeObject* L_22;
				L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<VivoxUnity.IParticipant>::get_Current() */, IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var, L_21);
				V_3 = L_22;
				// OnSpeechDetectedEvent?.Invoke(participant.Account.Name, channelSession.Channel, false);
				ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_23 = __this->___OnSpeechDetectedEvent_4;
				ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* L_24 = L_23;
				G_B7_0 = L_24;
				if (L_24)
				{
					G_B8_0 = L_24;
					goto IL_007e_1;
				}
			}
			{
				goto IL_0096_1;
			}

IL_007e_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_26;
				L_26 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_25);
				NullCheck(L_26);
				String_t* L_27;
				L_27 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_26, NULL);
				RuntimeObject* L_28 = V_0;
				NullCheck(L_28);
				ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_29;
				L_29 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_28);
				NullCheck(G_B8_0);
				ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_inline(G_B8_0, L_27, L_29, (bool)0, NULL);
			}

IL_0096_1:
			{
			}

IL_0097_1:
			{
				// foreach (var participant in channelSession.Participants)
				RuntimeObject* L_30 = V_2;
				NullCheck(L_30);
				bool L_31;
				L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
				if (L_31)
				{
					goto IL_006a_1;
				}
			}
			{
				goto IL_00ac;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ac:
	{
	}

IL_00ad:
	{
		// if ((propertyChangedEventArgs.PropertyName == "AudioState" || propertyChangedEventArgs.PropertyName == "TextState") &&
		//     channelSession.AudioState == ConnectionState.Disconnected &&
		//     channelSession.TextState == ConnectionState.Disconnected)
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_32 = ___propertyChangedEventArgs1;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_32);
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteralB47D0C69E9096A29CC82A6719ABF53C3AE403776, NULL);
		if (L_34)
		{
			goto IL_00d1;
		}
	}
	{
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_35 = ___propertyChangedEventArgs1;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_35);
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralF3ED7812E5EBC284BAA9EF0CE704248361EEDD50, NULL);
		if (!L_37)
		{
			goto IL_00e4;
		}
	}

IL_00d1:
	{
		RuntimeObject* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_38);
		if (L_39)
		{
			goto IL_00e4;
		}
	}
	{
		RuntimeObject* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_TextState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_40);
		G_B21_0 = ((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		goto IL_00e5;
	}

IL_00e4:
	{
		G_B21_0 = 0;
	}

IL_00e5:
	{
		V_4 = (bool)G_B21_0;
		bool L_42 = V_4;
		if (!L_42)
		{
			goto IL_01a0;
		}
	}
	{
		// VivoxLog($"Unsubscribing from: {channelSession.Key.Name}");
		RuntimeObject* L_43 = V_0;
		NullCheck(L_43);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_44;
		L_44 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_43);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_44, NULL);
		String_t* L_46;
		L_46 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594, L_45, NULL);
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(__this, L_46, NULL);
		// channelSession.PropertyChanged -= OnChannelPropertyChanged;
		RuntimeObject* L_47 = V_0;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_48 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_48, __this, (intptr_t)((void*)VivoxVoiceManager_OnChannelPropertyChanged_mC9711AB2CA9A7BDFB69049333F5EA808B0A52293_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_47, L_48);
		// channelSession.Participants.AfterKeyAdded -= OnParticipantAdded;
		RuntimeObject* L_49 = V_0;
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_49);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_51 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_51, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantAdded_mC6B84E338DEB9319174E852C7423F1FE63C6FDFC_RuntimeMethod_var), NULL);
		NullCheck(L_50);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(1 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_AfterKeyAdded(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_50, L_51);
		// channelSession.Participants.BeforeKeyRemoved -= OnParticipantRemoved;
		RuntimeObject* L_52 = V_0;
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_52);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_54 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_54, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantRemoved_m4767180E28D2F9001F622F1F5A3F0D3CD36FB5FB_RuntimeMethod_var), NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(3 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_BeforeKeyRemoved(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_53, L_54);
		// channelSession.Participants.AfterValueUpdated -= OnParticipantValueUpdated;
		RuntimeObject* L_55 = V_0;
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_55);
		EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* L_57 = (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01*)il2cpp_codegen_object_new(EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		EventHandler_1__ctor_m1E224F97ED4FD1D72AAB2B981A1F4A339572D067(L_57, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantValueUpdated_m41A8A4FA37B1FF0B908EB392ACBACD2E48C613A8_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		InterfaceActionInvoker1< EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* >::Invoke(5 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_AfterValueUpdated(System.EventHandler`1<VivoxUnity.ValueEventArg`2<TK,T>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_56, L_57);
		// channelSession.MessageLog.AfterItemAdded -= OnMessageLogRecieved;
		RuntimeObject* L_58 = V_0;
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage> VivoxUnity.IChannelSession::get_MessageLog() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_58);
		EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* L_60 = (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199*)il2cpp_codegen_object_new(EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		EventHandler_1__ctor_m5E06C11418535612DF07937D3529081C2316F474(L_60, __this, (intptr_t)((void*)VivoxVoiceManager_OnMessageLogRecieved_m03B6DDAE3A2BD0D646CDD822C0C8D8D55E60E1E8_RuntimeMethod_var), NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* >::Invoke(1 /* System.Void VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage>::remove_AfterItemAdded(System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<T>>) */, IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var, L_59, L_60);
		// var user = _client.GetLoginSession(m_Account);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_61;
		L_61 = VivoxVoiceManager_get__client_m3939E3A4D145AB1A4805F332D37716C9CAB147F6(__this, NULL);
		Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* L_62 = __this->___m_Account_12;
		NullCheck(L_61);
		RuntimeObject* L_63;
		L_63 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_61, L_62, NULL);
		V_5 = L_63;
		// user.DeleteChannelSession(channelSession.Channel);
		RuntimeObject* L_64 = V_5;
		RuntimeObject* L_65 = V_0;
		NullCheck(L_65);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_66;
		L_66 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_64);
		InterfaceActionInvoker1< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(29 /* System.Void VivoxUnity.ILoginSession::DeleteChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_64, L_66);
	}

IL_01a0:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::VivoxLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("<color=green>VivoxVoice: </color>: " + msg);
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::VivoxLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_VivoxLogError_mA9371A5B0285FA790A432CAC112C850F16991D8A (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("<color=green>VivoxVoice: </color>: " + msg);
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_1, NULL);
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager__ctor_m559B56DFE0FA2DF4A6ED186379B413CE3A3D2D87 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void VivoxVoiceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager__cctor_mC093DF0456206FB6F54CAEE58CF5BDB2B73F2685 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static object m_Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Lock_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var))->___m_Lock_13), (void*)L_0);
		return;
	}
}
// System.Void VivoxVoiceManager::<Login>b__60_0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_U3CLoginU3Eb__60_0_m173270823375563322271A8E44F41071A6163D65 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// LoginSession.EndLogin(ar);
		RuntimeObject* L_0 = __this->___LoginSession_20;
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(25 /* System.Void VivoxUnity.ILoginSession::EndLogin(System.IAsyncResult) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_0, L_1);
		goto IL_003a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VivoxLogError(nameof(e));
		VivoxVoiceManager_VivoxLogError_mA9371A5B0285FA790A432CAC112C850F16991D8A(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), NULL);
		// LoginSession.PropertyChanged -= OnLoginSessionPropertyChanged;
		RuntimeObject* L_2 = __this->___LoginSession_20;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_3 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_3, __this, (intptr_t)((void*)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_OnLoginSessionPropertyChanged_m25A7D5E05437DEF4425857BF7DC33166FC258CE6_RuntimeMethod_var))), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var)), L_2, L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003a;
	}// end catch (depth: 1)

IL_003a:
	{
		// });
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
void ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_Multicast(ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* currentDelegate = reinterpret_cast<ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_OpenInst(ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method)
{
	NullCheck(___username0);
	typedef void (*FunctionPointerType) (String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___username0, ___channel1, ___value2, method);
}
void ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_OpenStatic(ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___username0, ___channel1, ___value2, method);
}
void ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_OpenStaticInvoker(ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___username0, ___channel1, ___value2);
}
void ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_ClosedStaticInvoker(ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___username0, ___channel1, ___value2);
}
// System.Void VivoxVoiceManager/ParticipantValueChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler__ctor_m33BE304ED6E832C149CD7E2A4ADCAA17A7309704 (ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_Multicast;
}
// System.Void VivoxVoiceManager/ParticipantValueChangedHandler::Invoke(System.String,VivoxUnity.ChannelId,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8 (ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/ParticipantValueChangedHandler::BeginInvoke(System.String,VivoxUnity.ChannelId,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParticipantValueChangedHandler_BeginInvoke_m12766180DEEEAED8A73C16C8B7727B7D70BB04E2 (ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___username0;
	__d_args[1] = ___channel1;
	__d_args[2] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___value2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void VivoxVoiceManager/ParticipantValueChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler_EndInvoke_m6BB577875A138B70143E69678854CA388D412AEE (ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_Multicast(ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* currentDelegate = reinterpret_cast<ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_OpenInst(ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method)
{
	NullCheck(___username0);
	typedef void (*FunctionPointerType) (String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___username0, ___channel1, ___value2, method);
}
void ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_OpenStatic(ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___username0, ___channel1, ___value2, method);
}
void ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_OpenStaticInvoker(ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double >::Invoke(__this->___method_ptr_0, method, NULL, ___username0, ___channel1, ___value2);
}
void ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_ClosedStaticInvoker(ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___username0, ___channel1, ___value2);
}
// System.Void VivoxVoiceManager/ParticipantValueUpdatedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler__ctor_m879BCD8A8E40756919412A236CB6FFA4AAAE8A2A (ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_Multicast;
}
// System.Void VivoxVoiceManager/ParticipantValueUpdatedHandler::Invoke(System.String,VivoxUnity.ChannelId,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F (ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/ParticipantValueUpdatedHandler::BeginInvoke(System.String,VivoxUnity.ChannelId,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParticipantValueUpdatedHandler_BeginInvoke_m4149FBA90CE8E767CD69CEDF817D83FA2A264B6E (ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___username0;
	__d_args[1] = ___channel1;
	__d_args[2] = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &___value2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void VivoxVoiceManager/ParticipantValueUpdatedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler_EndInvoke_m5A97E6F71E18E281AE8C7869AE5C209B87618B62 (ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_Multicast(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* currentDelegate = reinterpret_cast<ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___username0, ___channel1, ___participant2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_OpenInst(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method)
{
	NullCheck(___username0);
	typedef void (*FunctionPointerType) (String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___username0, ___channel1, ___participant2, method);
}
void ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_OpenStatic(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___username0, ___channel1, ___participant2, method);
}
void ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_OpenStaticInvoker(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___username0, ___channel1, ___participant2);
}
void ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_ClosedStaticInvoker(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___username0, ___channel1, ___participant2);
}
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382 (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_Multicast;
}
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::Invoke(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___participant2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/ParticipantStatusChangedHandler::BeginInvoke(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParticipantStatusChangedHandler_BeginInvoke_m87DBBA6006EA5B00C2CD528DEEEC1D2BFC0AC8BF (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___username0;
	__d_args[1] = ___channel1;
	__d_args[2] = ___participant2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler_EndInvoke_m064A42D66F65F3F09E1AA18FDD0567441B661A30 (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_Multicast(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* currentDelegate = reinterpret_cast<ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___channelTextMessage1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_OpenInst(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	typedef void (*FunctionPointerType) (String_t*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___channelTextMessage1, method);
}
void ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_OpenStatic(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___channelTextMessage1, method);
}
void ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_OpenStaticInvoker(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___channelTextMessage1);
}
void ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_ClosedStaticInvoker(ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___channelTextMessage1);
}
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler__ctor_mE91A3921F329752BE931AF3742027510B9BECB8A (ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_Multicast;
}
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::Invoke(System.String,VivoxUnity.IChannelTextMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694 (ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___channelTextMessage1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/ChannelTextMessageChangedHandler::BeginInvoke(System.String,VivoxUnity.IChannelTextMessage,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChannelTextMessageChangedHandler_BeginInvoke_mFB6D07B3060934B06904396586ADF31A71CE51AA (ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___channelTextMessage1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler_EndInvoke_mE65DB64B9D7D2450B7DB2B9D4013CE5FB2FC6C88 (ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_Multicast(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* currentDelegate = reinterpret_cast<LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_OpenInst(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_OpenStatic(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_OpenStaticInvoker(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_ClosedStaticInvoker(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93 (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_Multicast;
}
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/LoginStatusChangedHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoginStatusChangedHandler_BeginInvoke_mC107FE79741AFAA70211611D195F24DB3FC44FB5 (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginStatusChangedHandler_EndInvoke_m0295E1E13CB964F0EF2803EF8D4D9E3754557842 (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_Multicast(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* currentDelegate = reinterpret_cast<RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___recoveryState0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_OpenInst(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___recoveryState0, method);
}
void RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_OpenStatic(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___recoveryState0, method);
}
void RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_OpenStaticInvoker(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___recoveryState0);
}
void RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_ClosedStaticInvoker(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___recoveryState0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___recoveryState0);

}
// System.Void VivoxVoiceManager/RecoveryStateChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecoveryStateChangedHandler__ctor_m9D0CB80AB3E1A4BE1CEEF59C1D8D91CF02A4077A (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_Multicast;
}
// System.Void VivoxVoiceManager/RecoveryStateChangedHandler::Invoke(VivoxUnity.ConnectionRecoveryState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29 (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___recoveryState0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/RecoveryStateChangedHandler::BeginInvoke(VivoxUnity.ConnectionRecoveryState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecoveryStateChangedHandler_BeginInvoke_m83E80D2C20AD9270D967A786713E6BED875BC278 (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRecoveryState_tC35647D67DBA7EE1ED0EDB3E93D41043C4FC8AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ConnectionRecoveryState_tC35647D67DBA7EE1ED0EDB3E93D41043C4FC8AE0_il2cpp_TypeInfo_var, &___recoveryState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VivoxVoiceManager/RecoveryStateChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecoveryStateChangedHandler_EndInvoke_m5F5B6C488E1BD290C1AADEB814DA03620D07778E (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void VivoxVoiceManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m090C9530A9A010E200ED310CF9EE51DA372A11ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540* L_0 = (U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540*)il2cpp_codegen_object_new(U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m79026F3FE563686E869E75F3D14AD149BF718F2B(L_0, NULL);
		((U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void VivoxVoiceManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m79026F3FE563686E869E75F3D14AD149BF718F2B (U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean VivoxVoiceManager/<>c::<get_TransmittingSession>b__55_0(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_TransmittingSessionU3Eb__55_0_m6E5629A1321C4493EA809DBB995DBB37155FE55C (U3CU3Ec_tAEAB5639CAF2DE83E6343A2FCFDBDB1600FDD540* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _client.GetLoginSession(m_Account).ChannelSessions.FirstOrDefault(x => x.IsTransmitting);
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean VivoxUnity.IChannelSession::get_IsTransmitting() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0);
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
// System.Void VivoxVoiceManager/<Start>d__58::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__58__ctor_m8B7BB67DAD521DEB8AC32013551F6C489BDCFE4C (U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VivoxVoiceManager/<Start>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__58_MoveNext_m84D0A8886210DF8F75C554AF441EFA04F7008EC5 (U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_mFB6FC843B03697EFCFB3F2FA296B170D7F85FA6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* V_3 = NULL;
	bool V_4 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_00b2_1;
		}

IL_0017_1:
		{
			goto IL_012b_1;
		}

IL_001c_1:
		{
			// var options = new InitializationOptions();
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_3 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)il2cpp_codegen_object_new(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0(L_3, NULL);
			__this->___U3CoptionsU3E5__1_3 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoptionsU3E5__1_3), (void*)L_3);
			// if (CheckManualCredentials())
			VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_4 = __this->___U3CU3E4__this_2;
			NullCheck(L_4);
			bool L_5;
			L_5 = VivoxVoiceManager_CheckManualCredentials_m46813F3C0EF72163DAC36F7C73746C2D7A8E5604(L_4, NULL);
			V_1 = L_5;
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0071_1;
			}
		}
		{
			// options.SetVivoxCredentials(_server, _domain, _issuer, _key);
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_7 = __this->___U3CoptionsU3E5__1_3;
			VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_8 = __this->___U3CU3E4__this_2;
			NullCheck(L_8);
			String_t* L_9 = L_8->____server_18;
			VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_10 = __this->___U3CU3E4__this_2;
			NullCheck(L_10);
			String_t* L_11 = L_10->____domain_17;
			VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_12 = __this->___U3CU3E4__this_2;
			NullCheck(L_12);
			String_t* L_13 = L_12->____issuer_16;
			VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_14 = __this->___U3CU3E4__this_2;
			NullCheck(L_14);
			String_t* L_15 = L_14->____key_15;
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_16;
			L_16 = InitializationOptionsExtensions_SetVivoxCredentials_m22920E3B9F9BF55B226A95CC487B8999989B8B9E(L_7, L_9, L_11, L_13, L_15, NULL);
		}

IL_0071_1:
		{
			// await UnityServices.InitializeAsync(options);
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_17 = __this->___U3CoptionsU3E5__1_3;
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
			L_18 = UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F(L_17, NULL);
			NullCheck(L_18);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_19;
			L_19 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_18, NULL);
			V_2 = L_19;
			bool L_20;
			L_20 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_20)
			{
				goto IL_00ce_1;
			}
		}
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_22 = V_2;
			__this->___U3CU3Eu__1_4 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_23 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_mFB6FC843B03697EFCFB3F2FA296B170D7F85FA6A(L_23, (&V_2), (&V_3), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_mFB6FC843B03697EFCFB3F2FA296B170D7F85FA6A_RuntimeMethod_var);
			goto IL_019b;
		}

IL_00b2_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_24 = __this->___U3CU3Eu__1_4;
			V_2 = L_24;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_25 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_00ce_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// if(!CheckManualCredentials())
			VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_27 = __this->___U3CU3E4__this_2;
			NullCheck(L_27);
			bool L_28;
			L_28 = VivoxVoiceManager_CheckManualCredentials_m46813F3C0EF72163DAC36F7C73746C2D7A8E5604(L_27, NULL);
			V_4 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
			bool L_29 = V_4;
			if (!L_29)
			{
				goto IL_0151_1;
			}
		}
		{
			// await AuthenticationService.Instance.SignInAnonymouslyAsync();
			RuntimeObject* L_30;
			L_30 = AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1(NULL);
			NullCheck(L_30);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_31;
			L_31 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* >::Invoke(16 /* System.Threading.Tasks.Task Unity.Services.Authentication.IAuthenticationService::SignInAnonymouslyAsync(Unity.Services.Authentication.SignInOptions) */, IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var, L_30, (SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291*)NULL);
			NullCheck(L_31);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_32;
			L_32 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_31, NULL);
			V_5 = L_32;
			bool L_33;
			L_33 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_5), NULL);
			if (L_33)
			{
				goto IL_0148_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_35 = V_5;
			__this->___U3CU3Eu__1_4 = L_35;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_36 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_mFB6FC843B03697EFCFB3F2FA296B170D7F85FA6A(L_36, (&V_5), (&V_3), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE_mFB6FC843B03697EFCFB3F2FA296B170D7F85FA6A_RuntimeMethod_var);
			goto IL_019b;
		}

IL_012b_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_37 = __this->___U3CU3Eu__1_4;
			V_5 = L_37;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_38 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_38, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
		}

IL_0148_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_5), NULL);
		}

IL_0151_1:
		{
			// VivoxService.Instance.Initialize();
			RuntimeObject* L_40;
			L_40 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
			NullCheck(L_40);
			InterfaceActionInvoker1< VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47* >::Invoke(9 /* System.Void Unity.Services.Vivox.IVivoxService::Initialize(VivoxUnity.VivoxConfig) */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_40, (VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47*)NULL);
			goto IL_0180;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015f;
		}
		throw e;
	}

CATCH_015f:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CoptionsU3E5__1_3 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoptionsU3E5__1_3), (void*)(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_41 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_42 = V_6;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_41, L_42, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019b;
	}// end catch (depth: 1)

IL_0180:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CoptionsU3E5__1_3 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoptionsU3E5__1_3), (void*)(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_43 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_43, NULL);
	}

IL_019b:
	{
		return;
	}
}
// System.Void VivoxVoiceManager/<Start>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__58_SetStateMachine_m1E2D3BB0AD6627732F04F00B2B4715B9219D1150 (U3CStartU3Ed__58_t060252ED4EE03623EA0364492342D9FED2BDF5EE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void VivoxVoiceManager/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m0640375FBF1ACE40A21715458C99EC06B12B305F (U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VivoxVoiceManager/<>c__DisplayClass62_0::<JoinChannel>b__0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CJoinChannelU3Eb__0_m2F9D5968EB3CC645C00F8CB560724ACE2FE32ABB (U3CU3Ec__DisplayClass62_0_t0B986CA32AE0C6782B07EB25DDA1EDDB9EF4D357* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// channelSession.EndConnect(ar);
		RuntimeObject* L_0 = __this->___channelSession_0;
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(15 /* System.Void VivoxUnity.IChannelSession::EndConnect(System.IAsyncResult) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0, L_1);
		goto IL_0032;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VivoxLogError($"Could not connect to voice channel: {e.Message}");
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->___U3CU3E4__this_1;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9DB762CCB331794CDC9C04C10E3F770EEC07040)), L_4, NULL);
		NullCheck(L_2);
		VivoxVoiceManager_VivoxLogError_mA9371A5B0285FA790A432CAC112C850F16991D8A(L_2, L_5, NULL);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0032;
	}// end catch (depth: 1)

IL_0032:
	{
		// });
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
// System.Void VivoxVoiceManager/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_m4883BDF78B2526CECBE1465B3DEAB497EC12976F (U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VivoxVoiceManager/<>c__DisplayClass63_0::<SendTextMessage>b__0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CSendTextMessageU3Eb__0_mD343F83700D635B0DA0FC1783994D8E393F32956 (U3CU3Ec__DisplayClass63_0_t022A12233A7B7B549A6014B8198D255FEF76991C* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// channelSession.EndSendText(ar);
		RuntimeObject* L_0 = __this->___channelSession_0;
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(23 /* System.Void VivoxUnity.IChannelSession::EndSendText(System.IAsyncResult) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0, L_1);
		goto IL_0033;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VivoxLog($"SendTextMessage failed with exception {e.Message}");
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->___U3CU3E4__this_1;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2D69CAE0AC1651DB4F092E55B86400B20FA0ECBB)), L_4, NULL);
		NullCheck(L_2);
		VivoxVoiceManager_VivoxLog_mC21A6BD1F3A85979ABE38E51A4025F5E06E43B23(L_2, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0033;
	}// end catch (depth: 1)

IL_0033:
	{
		// });
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
// System.Void Tanks.UI.HUDMultiplayerScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDMultiplayerScore_Start_m40B8B7C3413125DC5B3575AE33F7928E5ED0EF9E (HUDMultiplayerScore_t66C0F62C87BEF4707FB8957FD80F3DDD2051AF61* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Tanks.UI.HUDMultiplayerScore::UpdateScoreDisplay(UnityEngine.Color[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDMultiplayerScore_UpdateScoreDisplay_m0B38B0CDBF9B35C44431D88F3805161913F768C3 (HUDMultiplayerScore_t66C0F62C87BEF4707FB8957FD80F3DDD2051AF61* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colours0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scores1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// for (int i = 0; i < m_ScoreParent.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// m_ScoreParent[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___m_ScoreParent_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < m_ScoreParent.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < m_ScoreParent.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___m_ScoreParent_5;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// for (int i = 0; i < colours.Length; i++)
		V_2 = 0;
		goto IL_0071;
	}

IL_002d:
	{
		// m_ScoreParent[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___m_ScoreParent_5;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// m_TeamIcons[i].color = colours[i];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_12 = __this->___m_TeamIcons_6;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_16 = ___colours0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_19);
		// m_TeamScores[i].text = scores[i].ToString();
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_20 = __this->___m_TeamScores_7;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___scores1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
		// for (int i = 0; i < colours.Length; i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0071:
	{
		// for (int i = 0; i < colours.Length; i++)
		int32_t L_28 = V_2;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_29 = ___colours0;
		NullCheck(L_29);
		V_3 = (bool)((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_002d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Tanks.UI.HUDMultiplayerScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDMultiplayerScore__ctor_m6BDB0DAFCA6219E79F654BF290A493AD7A920815 (HUDMultiplayerScore_t66C0F62C87BEF4707FB8957FD80F3DDD2051AF61* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PositionalVoice_set_isSpeaking_mA2813DDB7AB4F7438FAE8F1F7967477954391652_inline (PositionalVoice_tCF8018E121C97F9337A22731C3C5D40BCDEE953F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isSpeaking { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisSpeakingU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	{
		// public LoginState LoginState { get; private set; }
		int32_t L_0 = __this->___U3CLoginStateU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => _name;
		String_t* L_0 = __this->____name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline (AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => _name;
		String_t* L_0 = __this->____name_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IVivoxService Instance { get; internal set; }
		RuntimeObject* L_0 = ((VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_StaticFields*)il2cpp_codegen_static_fields_for(VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_AudioInputDevices_mEF09E43DA815E02795AD6E7A265CB6397DC6910A_inline (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) 
{
	{
		// public IAudioDevices AudioInputDevices => _inputDevices;
		AudioInputDevices_t66A64D6B01AB65F996E324DCC390DA3F4517728D* L_0 = __this->____inputDevices_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_AudioOutputDevices_m54D7860B92185C76D3E1E2A3EFAC8C8E955D3C52_inline (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) 
{
	{
		// public IAudioDevices AudioOutputDevices => _outputDevices;
		AudioOutputDevices_t091838B20322C11B563F81CBBFC501F950C92FC6* L_0 = __this->____outputDevices_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler_Invoke_m904AF7EB748C791AA3E0306B81C374441F7DC694_inline (ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___channelTextMessage1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecoveryStateChangedHandler_Invoke_m09BA307ABD1ADD89631EDE7C4E1D113B7E99DB29_inline (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, int32_t ___recoveryState0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___recoveryState0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxVoiceManager_set_LoginState_m08DE1AEE872722FB7827D0F87B066E8205F46D83_inline (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public LoginState LoginState { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CLoginStateU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoginStatusChangedHandler_Invoke_mF988141CAF637856B6AD1730DD519A05DF77D85A_inline (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler_Invoke_m203116F9E2F8D827322654F8F6DB47C533F9B2CD_inline (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___participant2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler_Invoke_m9DF75B67C4C4EE42A0848FBD5EEE472E37B86AF8_inline (ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler_Invoke_mC4ADD49A9E0AF9E479F736D70BB7FA695CC7193F_inline (ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* QueueItemAddedEventArgs_1_get_Value_m139FA2D84818BAB6E3013D07AF409D656AD1A2E1_gshared_inline (QueueItemAddedEventArgs_1_t64C712687947974CEFCD6FA1A0C5F431B34BA962* __this, const RuntimeMethod* method) 
{
	{
		// public T Value { get; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyEventArg_1_get_Key_m5A6721BC9397CFD07BBD5E71D877CF4B2208B895_gshared_inline (KeyEventArg_1_t89A2EFF3F6BA86A1A7C679AC90F511B469301ADC* __this, const RuntimeMethod* method) 
{
	{
		// public TK Key { get; set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CKeyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueEventArg_2_get_Key_m50FABB89833DC4941E8089DD37E5371F409A5C77_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) 
{
	{
		// public TK Key { get; set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CKeyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueEventArg_2_get_Value_mD755E0B4406560927FCB160D66ABE2CAEB288F5D_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) 
{
	{
		// public TV Value { get; set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueEventArg_2_get_PropertyName_m8A88DE4C4BA8719F3F0B390A70FDB487D27A3FB5_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) 
{
	{
		// public string PropertyName { get; set; }
		String_t* L_0 = (String_t*)__this->___U3CPropertyNameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
