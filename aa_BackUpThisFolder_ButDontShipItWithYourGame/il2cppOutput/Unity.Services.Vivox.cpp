#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<System.IAsyncResult>
struct Queue_1_t743B3EE70937096E881F123BA206A7E669A90D09;
// VivoxUnity.Common.ReadWriteDictionary`3<VivoxUnity.AccountId,VivoxUnity.ILoginSession,VivoxUnity.Private.LoginSession>
struct ReadWriteDictionary_3_t8B56E807D7964CF0B393CF66BF2CAA1699DEE758;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.Services.Vivox.AccessToken
struct AccessToken_t6636992EAA549D3B44D6CABDAB3952F9851A7209;
// Unity.Services.Vivox.Account
struct Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B;
// VivoxUnity.AccountId
struct AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// VivoxUnity.Private.AudioInputDevices
struct AudioInputDevices_t66A64D6B01AB65F996E324DCC390DA3F4517728D;
// VivoxUnity.Private.AudioOutputDevices
struct AudioOutputDevices_t091838B20322C11B563F81CBBFC501F950C92FC6;
// Unity.Services.Vivox.Channel
struct Channel_t9072FB76D421DBB4723F10DF254F1674140350C5;
// VivoxUnity.Channel3DProperties
struct Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA;
// VivoxUnity.ChannelId
struct ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E;
// VivoxUnity.Client
struct Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA;
// System.Delegate
struct Delegate_t;
// Unity.Services.Authentication.Internal.IAccessToken
struct IAccessToken_t8A8955010FD3200218D16D50699C60F922877720;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Authentication.Internal.IEnvironmentId
struct IEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2;
// Unity.Services.Authentication.Internal.IPlayerId
struct IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2;
// Unity.Services.Vivox.IVivoxService
struct IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// Unity.Services.Vivox.JwtDecoder
struct JwtDecoder_tF3CFC78A5FD7DC9B7ABF8B11F159C92233689B24;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// VivoxUnity.VivoxConfig
struct VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47;
// Unity.Services.Vivox.VivoxJWTTokenGen
struct VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7;
// Unity.Services.Vivox.VivoxPackageInitializer
struct VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434;
// Unity.Services.Vivox.VivoxServiceInternal
struct VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VivoxUnity.VxTokenGen
struct VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95;
// vx_sdk_config_t
struct vx_sdk_config_t_tB3B1C8F939BA20DD0C196892DA093C3011564FDD;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04A197F74565A2B23BD5DED590D63CC25BCB3F3C;
IL2CPP_EXTERN_C String_t* _stringLiteral11E42B7A5E1CF74E4375D71D8CE94F3D8D446DBA;
IL2CPP_EXTERN_C String_t* _stringLiteral1D89B0D256B935BA48BE9AB9C82F7B774B5B2668;
IL2CPP_EXTERN_C String_t* _stringLiteral252DC2333B15FD239EF9AA36B5C783CFD8DB0B18;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C;
IL2CPP_EXTERN_C String_t* _stringLiteral32443E32E6F14F8466A44B95613267F7F67A645D;
IL2CPP_EXTERN_C String_t* _stringLiteral39EB95F1C974039FC81DCFEB8859C4718C0515A2;
IL2CPP_EXTERN_C String_t* _stringLiteral406EF0ECD457A43CE572FD18458D0489E0E2CBC0;
IL2CPP_EXTERN_C String_t* _stringLiteral4D3322BCFDA826FBA132522C70E702DB53C4EF71;
IL2CPP_EXTERN_C String_t* _stringLiteral582E7A2CC217FE5C6D0A5388E37A10E4744ACC74;
IL2CPP_EXTERN_C String_t* _stringLiteral5C30CBC2453C5C51EF3D28592333F51BEC634276;
IL2CPP_EXTERN_C String_t* _stringLiteral7AC4A92D9FD850634883871035A7FD5ED2111ED7;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralB21877861074A08221A4F0AF4BAC646EC59760AA;
IL2CPP_EXTERN_C String_t* _stringLiteralB281C44DFAFDB0D6CE36DF10A9E882F86382B95C;
IL2CPP_EXTERN_C String_t* _stringLiteralB628C1574D231AEE92EF9C35D158B695B7BA6B35;
IL2CPP_EXTERN_C String_t* _stringLiteralF7018CAA888BC1EBA46D5590E671D5AC60A6819D;
IL2CPP_EXTERN_C String_t* _stringLiteralFD73EE4CFE5FBC340737C212C8A1D781669B73CB;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_OptionallyDependsOn_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_mEBA4559576E86CCF4F0832F053B1F76A44990139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_OptionallyDependsOn_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m2C543CB36CF755F26993C947FA6C41DAA647065A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m4125AAF16E0C255FB3B1560FAEB5D04A1BFF1D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m02C0B2B67186662D0D385092A14556708E38987C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisVivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434_m0EB7456368F66D5F850FC70983BA95DF29FE2560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxServiceInternal_SetCredentials_mBE35DDDE0046BD2596DBAF43556E19ED0E41E150_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t87BE663C7BEC0B385EBE7E69A19F2A038850E4B8 
{
};

// Unity.Services.Vivox.AccessToken
struct AccessToken_t6636992EAA549D3B44D6CABDAB3952F9851A7209  : public RuntimeObject
{
	// System.String[] Unity.Services.Vivox.AccessToken::aud
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aud_0;
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
struct Il2CppArrayBounds;

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

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_1;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_2;
};

struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::<Values>k__BackingField
	RuntimeObject* ___U3CValuesU3Ek__BackingField_0;
};

// Unity.Services.Vivox.InitializationOptionsExtensions
struct InitializationOptionsExtensions_tD0984BB861CAA25CF0F3DF71911B3209C5C942A1  : public RuntimeObject
{
};

// Unity.Services.Vivox.JwtDecoder
struct JwtDecoder_tF3CFC78A5FD7DC9B7ABF8B11F159C92233689B24  : public RuntimeObject
{
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
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

// Unity.Services.Vivox.VivoxPackageInitializer
struct VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434  : public RuntimeObject
{
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

// Unity.Services.Vivox.VivoxServiceInternal
struct VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B  : public RuntimeObject
{
	// System.Boolean Unity.Services.Vivox.VivoxServiceInternal::<IsTestMode>k__BackingField
	bool ___U3CIsTestModeU3Ek__BackingField_6;
	// VivoxUnity.Client Unity.Services.Vivox.VivoxServiceInternal::<Client>k__BackingField
	Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* ___U3CClientU3Ek__BackingField_7;
	// System.String Unity.Services.Vivox.VivoxServiceInternal::<Server>k__BackingField
	String_t* ___U3CServerU3Ek__BackingField_8;
	// System.String Unity.Services.Vivox.VivoxServiceInternal::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_9;
	// System.String Unity.Services.Vivox.VivoxServiceInternal::<Issuer>k__BackingField
	String_t* ___U3CIssuerU3Ek__BackingField_10;
	// System.String Unity.Services.Vivox.VivoxServiceInternal::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_11;
	// System.Boolean Unity.Services.Vivox.VivoxServiceInternal::<IsEnvironmentCustom>k__BackingField
	bool ___U3CIsEnvironmentCustomU3Ek__BackingField_12;
	// Unity.Services.Authentication.Internal.IAccessToken Unity.Services.Vivox.VivoxServiceInternal::<AccessTokenComponent>k__BackingField
	RuntimeObject* ___U3CAccessTokenComponentU3Ek__BackingField_13;
	// Unity.Services.Authentication.Internal.IPlayerId Unity.Services.Vivox.VivoxServiceInternal::<PlayerIdComponent>k__BackingField
	RuntimeObject* ___U3CPlayerIdComponentU3Ek__BackingField_14;
	// Unity.Services.Authentication.Internal.IEnvironmentId Unity.Services.Vivox.VivoxServiceInternal::<EnvironmentIdComponent>k__BackingField
	RuntimeObject* ___U3CEnvironmentIdComponentU3Ek__BackingField_15;
};

// Unity.Services.Vivox.Account
struct Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B  : public AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368
{
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

// Unity.Services.Vivox.Channel
struct Channel_t9072FB76D421DBB4723F10DF254F1674140350C5  : public ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E
{
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

// Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistration::m_Registry
	RuntimeObject* ___m_Registry_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistration::m_PackageHash
	int32_t ___m_PackageHash_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
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

// VivoxUnity.VxTokenGen
struct VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95  : public RuntimeObject
{
};

struct VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95_StaticFields
{
	// System.Int32 VivoxUnity.VxTokenGen::defaultExpiration
	int32_t ___defaultExpiration_0;
	// System.String VivoxUnity.VxTokenGen::key
	String_t* ___key_1;
	// System.DateTime VivoxUnity.VxTokenGen::unixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___unixEpoch_2;
	// System.UInt64 VivoxUnity.VxTokenGen::serialNumber
	uint64_t ___serialNumber_3;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Unity.Services.Vivox.VivoxJWTTokenGen
struct VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7  : public VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
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


// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<System.Object>(TPackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___package0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisRuntimeObject_m665878F2DB1DB7696E4B4AB9F508D27F40DCBFE5_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;

// Unity.Services.Vivox.IVivoxService Unity.Services.Vivox.VivoxService::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.AccountId::.ctor(System.String,System.String,System.String,System.String,System.String[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountId__ctor_mB279FB07A8A4BC88151184652C563D5BCF82E624 (AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* __this, String_t* ___issuer0, String_t* ___name1, String_t* ___domain2, String_t* ___displayname3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___spokenLanguages4, String_t* ___environmentId5, const RuntimeMethod* method) ;
// System.Void VivoxUnity.ChannelId::.ctor(System.String,System.String,System.String,VivoxUnity.ChannelType,VivoxUnity.Channel3DProperties,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelId__ctor_m845292B77ADB700E847BC390A1B3D33558205CCE (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* __this, String_t* ___issuer0, String_t* ___name1, String_t* ___domain2, int32_t ___type3, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___properties4, String_t* ___environmentId5, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_mC6DE295515F91B4CE53D8A636A6C2D0153B192CF (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxPackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxPackageInitializer__ctor_m7B9A69AFA29B35579816CAC8254BA4C561253828 (VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Unity.Services.Vivox.VivoxPackageInitializer>(TPackage)
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisVivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434_m0EB7456368F66D5F850FC70983BA95DF29FE2560 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434* ___package0, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434*, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared)(__this, ___package0, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<Unity.Services.Authentication.Internal.IAccessToken>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_mEBA4559576E86CCF4F0832F053B1F76A44990139 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_OptionallyDependsOn_TisRuntimeObject_m665878F2DB1DB7696E4B4AB9F508D27F40DCBFE5_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<Unity.Services.Authentication.Internal.IPlayerId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_OptionallyDependsOn_TisRuntimeObject_m665878F2DB1DB7696E4B4AB9F508D27F40DCBFE5_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<Unity.Services.Authentication.Internal.IEnvironmentId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m2C543CB36CF755F26993C947FA6C41DAA647065A (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_OptionallyDependsOn_TisRuntimeObject_m665878F2DB1DB7696E4B4AB9F508D27F40DCBFE5_gshared)(__this, method);
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal__ctor_mD3370C00F04C12D159158C9A88191640164D4C63 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxService::set_Instance(Unity.Services.Vivox.IVivoxService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxService_set_Instance_mDFF21AF04CDCCD5A738F72A3FE623D9F84CAD1FE_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::SetCredentials(System.String,System.String,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_SetCredentials_mBE35DDDE0046BD2596DBAF43556E19ED0E41E150 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___server0, String_t* ___domain1, String_t* ___issuer2, String_t* ___token3, bool ___customEnvironment4, bool ___isTestMode5, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Authentication.Internal.IPlayerId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Authentication.Internal.IAccessToken>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m4125AAF16E0C255FB3B1560FAEB5D04A1BFF1D66 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Authentication.Internal.IEnvironmentId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m02C0B2B67186662D0D385092A14556708E38987C (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::SetAuthenticationComponents(Unity.Services.Authentication.Internal.IPlayerId,Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Authentication.Internal.IEnvironmentId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_SetAuthenticationComponents_mF967F4D7F52ED18E14A2FCBE7B709950394A82C6 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___playerIdComponent0, RuntimeObject* ___accessTokenComponent1, RuntimeObject* ___environmentIdComponent2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_Server()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_Server_m9F544C1735C743156C0BAD46F08F68197A5872FC_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// Unity.Services.Authentication.Internal.IAccessToken Unity.Services.Vivox.VivoxServiceInternal::get_AccessTokenComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VivoxServiceInternal_get_AccessTokenComponent_mA8A4AA82CB2171F53F26003ADE059C53A845876D_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.Internal.IPlayerId Unity.Services.Vivox.VivoxServiceInternal::get_PlayerIdComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VivoxServiceInternal_get_PlayerIdComponent_m950BDAD287A3554DC6F51383CCDD0A0B7143289D_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.Internal.IEnvironmentId Unity.Services.Vivox.VivoxServiceInternal::get_EnvironmentIdComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VivoxServiceInternal_get_EnvironmentIdComponent_m640EA031742D95BEF72240B4A81ACF13219A9A21_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_PlayerId_m8CABA0B88D21E816583EAC7A58F1F20A361E9BBE (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_EnvironmentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_EnvironmentId_m05C4E633A970EB41F6B20CDF5F32D0827B63CD28 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Vivox.VivoxServiceInternal::get_IsEnvironmentCustom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VivoxServiceInternal_get_IsEnvironmentCustom_mB091D452A109F7A5950F30AC694CB4CC5672F583_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.Client::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m77E399B2638EBCB426359D649AEAB2389FDB2FA9 (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___serverUri0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Client(VivoxUnity.Client)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Client_mDF66310BC82DFAB8EC044BF52E2530508FEC747E_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* ___value0, const RuntimeMethod* method) ;
// VivoxUnity.Client Unity.Services.Vivox.VivoxServiceInternal::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* VivoxServiceInternal_get_Client_m052F0C9615F0AE1C533ED8F05B2422288E1E855D_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.Client::Initialize(VivoxUnity.VivoxConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Initialize_m88F73EF0AE28DBFB33E413911CEC03ACA6F339AE (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47* ___config0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Vivox.VivoxServiceInternal::get_IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VivoxServiceInternal_get_IsAuthenticated_m8154C3F4D8226C48032B99C973D0863627DF6DC8 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Vivox.VivoxServiceInternal::get_IsTestMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VivoxServiceInternal_get_IsTestMode_m0D6F75312C76ABCB43835D77F2501A7E1CFE22EC_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxJWTTokenGen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxJWTTokenGen__ctor_m7A8FA9C6E852510C8150B23482F555D0F3648461 (VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.Client::set_tokenGen(VivoxUnity.VxTokenGen)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_set_tokenGen_m8D40699D47D518B2B18A783D7A5522C4089EE73C (VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_Key_m1EBDD1EF9987AD3BD5C3A1077A5F12DF9834B8C1_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// VivoxUnity.VxTokenGen VivoxUnity.Client::get_tokenGen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95* Client_get_tokenGen_m528F82B68A3BB68F7BF721EFAF44F9BDF9CC8F24 (const RuntimeMethod* method) ;
// System.Void VivoxUnity.VxTokenGen::set_IssuerKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VxTokenGen_set_IssuerKey_m4BF7ADE57E4D3A33A680D1F21DB21AA9014BDE80 (VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Server(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Server_m867FC2F72F081C726B75CADE5C7D205363DA8CAF_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Domain(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Domain_m7664E08F79F80A1CC84711D71969FA900AD20DFD_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Issuer(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Issuer_mA399DCB0B47E1238C38DB0012F09FBA9369DD06D_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Key(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Key_m8311A4EC2627E895403F9F402671A0B10C0B7535_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_IsEnvironmentCustom(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_IsEnvironmentCustom_mDC769ACF7076BFA08137EAEF53C55A991D6C6A80_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_IsTestMode(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_IsTestMode_m407EC648F7C7175A55EB9B56B58DC6F920B1C4A7_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_PlayerIdComponent(Unity.Services.Authentication.Internal.IPlayerId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_PlayerIdComponent_m3A29DC6B724F8B3C4B351758C794DF9765A07552_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_AccessTokenComponent(Unity.Services.Authentication.Internal.IAccessToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_AccessTokenComponent_m68E9540A7AB6868426007E650F76939BB2D8CEB2_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_EnvironmentIdComponent(Unity.Services.Authentication.Internal.IEnvironmentId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_EnvironmentIdComponent_m6F75F1CDE3A75C67D99CAC0EAEE70B407A990F51_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxUnity.VxTokenGen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VxTokenGen__ctor_m2BEC6F19A4BCD86D0BC129517C8FCFC9943BC03F (VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95* __this, const RuntimeMethod* method) ;
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
// System.Void Unity.Services.Vivox.Account::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account__ctor_m65C5A10DE23840F87471D9A863D8ADF69F5059CA (Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* __this, String_t* ___displayname0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___spokenLanguages1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* G_B2_0 = NULL;
	Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* G_B3_2 = NULL;
	{
		// base
		// (
		//     VivoxService.Instance.Issuer,
		//     string.IsNullOrEmpty(VivoxService.Instance.PlayerId) ? Guid.NewGuid().ToString() : VivoxService.Instance.PlayerId,
		//     VivoxService.Instance.Domain,
		//     displayname,
		//     spokenLanguages,
		//     VivoxService.Instance.EnvironmentId
		// )
		RuntimeObject* L_0;
		L_0 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Unity.Services.Vivox.IVivoxService::get_Issuer() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2;
		L_2 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String Unity.Services.Vivox.IVivoxService::get_PlayerId() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_4)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String Unity.Services.Vivox.IVivoxService::get_PlayerId() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_5);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_003b;
	}

IL_0028:
	{
		Guid_t L_7;
		L_7 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_003b:
	{
		RuntimeObject* L_9;
		L_9 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Unity.Services.Vivox.IVivoxService::get_Domain() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_9);
		String_t* L_11 = ___displayname0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___spokenLanguages1;
		RuntimeObject* L_13;
		L_13 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Unity.Services.Vivox.IVivoxService::get_EnvironmentId() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_13);
		AccountId__ctor_mB279FB07A8A4BC88151184652C563D5BCF82E624(G_B3_2, G_B3_1, G_B3_0, L_10, L_11, L_12, L_14, NULL);
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
// System.Void Unity.Services.Vivox.Channel::.ctor(System.String,VivoxUnity.ChannelType,VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Channel__ctor_m37D2FBE2DCB84B7A1C3C9480EFAC9B63C5879777 (Channel_t9072FB76D421DBB4723F10DF254F1674140350C5* __this, String_t* ___name0, int32_t ___type1, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___properties2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(VivoxService.Instance.Issuer, name, VivoxService.Instance.Domain, type, properties, VivoxService.Instance.EnvironmentId) {}
		RuntimeObject* L_0;
		L_0 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Unity.Services.Vivox.IVivoxService::get_Issuer() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___name0;
		RuntimeObject* L_3;
		L_3 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Unity.Services.Vivox.IVivoxService::get_Domain() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___type1;
		Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* L_6 = ___properties2;
		RuntimeObject* L_7;
		L_7 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Unity.Services.Vivox.IVivoxService::get_EnvironmentId() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_7);
		ChannelId__ctor_m845292B77ADB700E847BC390A1B3D33558205CCE(__this, L_1, L_2, L_4, L_5, L_6, L_8, NULL);
		// : base(VivoxService.Instance.Issuer, name, VivoxService.Instance.Domain, type, properties, VivoxService.Instance.EnvironmentId) {}
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
// System.Void Unity.Services.Vivox.AccessToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessToken__ctor_m4B461FA9BDB221575FEFC554F60266A962E09668 (AccessToken_t6636992EAA549D3B44D6CABDAB3952F9851A7209* __this, const RuntimeMethod* method) 
{
	{
		// public AccessToken() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AccessToken() { }
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
// System.Byte[] Unity.Services.Vivox.JwtDecoder::Base64UrlDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* JwtDecoder_Base64UrlDecode_m4E0CA8055B0B05349D7CEA486893E435702D4C62 (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		// var output = input;
		String_t* L_0 = ___input0;
		V_0 = L_0;
		// output = output.Replace('-', '+'); // 62nd char of encoding
		String_t* L_1 = V_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_1, ((int32_t)45), ((int32_t)43), NULL);
		V_0 = L_2;
		// output = output.Replace('_', '/'); // 63rd char of encoding
		String_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_3, ((int32_t)95), ((int32_t)47), NULL);
		V_0 = L_4;
		// var mod4 = input.Length % 4;
		String_t* L_5 = ___input0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_1 = ((int32_t)(L_6%4));
		// if (mod4 > 0)
		int32_t L_7 = V_1;
		V_3 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		// output += new string('=', 4 - mod4);
		String_t* L_9 = V_0;
		int32_t L_10 = V_1;
		String_t* L_11;
		L_11 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)61), ((int32_t)il2cpp_codegen_subtract(4, L_10)), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, L_11, NULL);
		V_0 = L_12;
	}

IL_003d:
	{
		// var converted = Convert.FromBase64String(output); // Standard base64 decoder
		String_t* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_13, NULL);
		V_2 = L_14;
		// return converted;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_4 = L_15;
		goto IL_0049;
	}

IL_0049:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_4;
		return L_16;
	}
}
// System.Void Unity.Services.Vivox.JwtDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JwtDecoder__ctor_m4A8706C7C0806F7AE08FA7DD938CA1DFCCA34D4C (JwtDecoder_tF3CFC78A5FD7DC9B7ABF8B11F159C92233689B24* __this, const RuntimeMethod* method) 
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
// Unity.Services.Core.InitializationOptions Unity.Services.Vivox.InitializationOptionsExtensions::SetVivoxCredentials(Unity.Services.Core.InitializationOptions,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptionsExtensions_SetVivoxCredentials_m22920E3B9F9BF55B226A95CC487B8999989B8B9E (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___self0, String_t* ___server1, String_t* ___domain2, String_t* ___issuer3, String_t* ___tokenKey4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A197F74565A2B23BD5DED590D63CC25BCB3F3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral252DC2333B15FD239EF9AA36B5C783CFD8DB0B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39EB95F1C974039FC81DCFEB8859C4718C0515A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582E7A2CC217FE5C6D0A5388E37A10E4744ACC74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB21877861074A08221A4F0AF4BAC646EC59760AA);
		s_Il2CppMethodInitialized = true;
	}
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* V_0 = NULL;
	{
		// self.SetOption(VivoxServiceInternal.k_ServerKey, server);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = ___self0;
		String_t* L_1 = ___server1;
		NullCheck(L_0);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_2;
		L_2 = InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1(L_0, _stringLiteralB21877861074A08221A4F0AF4BAC646EC59760AA, L_1, NULL);
		// self.SetOption(VivoxServiceInternal.k_DomainKey, domain);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_3 = ___self0;
		String_t* L_4 = ___domain2;
		NullCheck(L_3);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_5;
		L_5 = InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1(L_3, _stringLiteral39EB95F1C974039FC81DCFEB8859C4718C0515A2, L_4, NULL);
		// self.SetOption(VivoxServiceInternal.k_IssuerKey, issuer);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_6 = ___self0;
		String_t* L_7 = ___issuer3;
		NullCheck(L_6);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_8;
		L_8 = InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1(L_6, _stringLiteral582E7A2CC217FE5C6D0A5388E37A10E4744ACC74, L_7, NULL);
		// self.SetOption(VivoxServiceInternal.k_TokenKey, tokenKey);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_9 = ___self0;
		String_t* L_10 = ___tokenKey4;
		NullCheck(L_9);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_11;
		L_11 = InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1(L_9, _stringLiteral04A197F74565A2B23BD5DED590D63CC25BCB3F3C, L_10, NULL);
		// self.SetOption(VivoxServiceInternal.k_EnvironmentCustomKey, true);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_12 = ___self0;
		NullCheck(L_12);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_13;
		L_13 = InitializationOptions_SetOption_mC6DE295515F91B4CE53D8A636A6C2D0153B192CF(L_12, _stringLiteral252DC2333B15FD239EF9AA36B5C783CFD8DB0B18, (bool)1, NULL);
		// return self;
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_14 = ___self0;
		V_0 = L_14;
		goto IL_0047;
	}

IL_0047:
	{
		// }
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_15 = V_0;
		return L_15;
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
// System.Void Unity.Services.Vivox.VivoxPackageInitializer::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxPackageInitializer_Register_mD04832D776B9F6A62F09253BA6B91AD14CF18D41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_OptionallyDependsOn_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_mEBA4559576E86CCF4F0832F053B1F76A44990139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_OptionallyDependsOn_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m2C543CB36CF755F26993C947FA6C41DAA647065A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisVivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434_m0EB7456368F66D5F850FC70983BA95DF29FE2560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CoreRegistry.Instance.RegisterPackage(new VivoxPackageInitializer())
		//     .DependsOn<IProjectConfiguration>()
		//     .OptionallyDependsOn<IAccessToken>()
		//     .OptionallyDependsOn<IPlayerId>()
		//     .OptionallyDependsOn<IEnvironmentId>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0;
		L_0 = CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline(NULL);
		VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434* L_1 = (VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434*)il2cpp_codegen_object_new(VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VivoxPackageInitializer__ctor_m7B9A69AFA29B35579816CAC8254BA4C561253828(L_1, NULL);
		NullCheck(L_0);
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_2;
		L_2 = CoreRegistry_RegisterPackage_TisVivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434_m0EB7456368F66D5F850FC70983BA95DF29FE2560(L_0, L_1, CoreRegistry_RegisterPackage_TisVivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434_m0EB7456368F66D5F850FC70983BA95DF29FE2560_RuntimeMethod_var);
		V_0 = L_2;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_3;
		L_3 = CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10((&V_0), CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		V_0 = L_3;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_4;
		L_4 = CoreRegistration_OptionallyDependsOn_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_mEBA4559576E86CCF4F0832F053B1F76A44990139((&V_0), CoreRegistration_OptionallyDependsOn_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_mEBA4559576E86CCF4F0832F053B1F76A44990139_RuntimeMethod_var);
		V_0 = L_4;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_5;
		L_5 = CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286((&V_0), CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var);
		V_0 = L_5;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_6;
		L_6 = CoreRegistration_OptionallyDependsOn_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m2C543CB36CF755F26993C947FA6C41DAA647065A((&V_0), CoreRegistration_OptionallyDependsOn_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m2C543CB36CF755F26993C947FA6C41DAA647065A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Vivox.VivoxPackageInitializer::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* VivoxPackageInitializer_Initialize_m67C9EBD6E1CFF52DC548549EA01D33C31B0B5BFF (VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m4125AAF16E0C255FB3B1560FAEB5D04A1BFF1D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m02C0B2B67186662D0D385092A14556708E38987C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A197F74565A2B23BD5DED590D63CC25BCB3F3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral252DC2333B15FD239EF9AA36B5C783CFD8DB0B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39EB95F1C974039FC81DCFEB8859C4718C0515A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582E7A2CC217FE5C6D0A5388E37A10E4744ACC74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AC4A92D9FD850634883871035A7FD5ED2111ED7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB21877861074A08221A4F0AF4BAC646EC59760AA);
		s_Il2CppMethodInitialized = true;
	}
	VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// var vivoxService = new VivoxServiceInternal();
		VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* L_0 = (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B*)il2cpp_codegen_object_new(VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VivoxServiceInternal__ctor_mD3370C00F04C12D159158C9A88191640164D4C63(L_0, NULL);
		V_0 = L_0;
		// VivoxService.Instance = vivoxService;
		VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* L_1 = V_0;
		VivoxService_set_Instance_mDFF21AF04CDCCD5A738F72A3FE623D9F84CAD1FE_inline(L_1, NULL);
		// var config = registry.GetServiceComponent<IProjectConfiguration>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_2 = ___registry0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312(L_2, CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
		V_1 = L_3;
		// var server = config.GetString(VivoxServiceInternal.k_ServerKey);
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_4, _stringLiteralB21877861074A08221A4F0AF4BAC646EC59760AA, (String_t*)NULL);
		V_2 = L_5;
		// var domain = config.GetString(VivoxServiceInternal.k_DomainKey);
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_6, _stringLiteral39EB95F1C974039FC81DCFEB8859C4718C0515A2, (String_t*)NULL);
		V_3 = L_7;
		// var issuer = config.GetString(VivoxServiceInternal.k_IssuerKey);
		RuntimeObject* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_8, _stringLiteral582E7A2CC217FE5C6D0A5388E37A10E4744ACC74, (String_t*)NULL);
		V_4 = L_9;
		// var token = config.GetString(VivoxServiceInternal.k_TokenKey);
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_10, _stringLiteral04A197F74565A2B23BD5DED590D63CC25BCB3F3C, (String_t*)NULL);
		V_5 = L_11;
		// var isEnvironmentCustom = config.GetBool(VivoxServiceInternal.k_EnvironmentCustomKey);
		RuntimeObject* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker2< bool, String_t*, bool >::Invoke(0 /* System.Boolean Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetBool(System.String,System.Boolean) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_12, _stringLiteral252DC2333B15FD239EF9AA36B5C783CFD8DB0B18, (bool)0);
		V_6 = L_13;
		// var isTestMode = config.GetBool(VivoxServiceInternal.k_TestModeKey);
		RuntimeObject* L_14 = V_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker2< bool, String_t*, bool >::Invoke(0 /* System.Boolean Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetBool(System.String,System.Boolean) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_14, _stringLiteral7AC4A92D9FD850634883871035A7FD5ED2111ED7, (bool)0);
		V_7 = L_15;
		// vivoxService.SetCredentials(server, domain, issuer, token, isEnvironmentCustom, isTestMode);
		VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* L_16 = V_0;
		String_t* L_17 = V_2;
		String_t* L_18 = V_3;
		String_t* L_19 = V_4;
		String_t* L_20 = V_5;
		bool L_21 = V_6;
		bool L_22 = V_7;
		NullCheck(L_16);
		VivoxServiceInternal_SetCredentials_mBE35DDDE0046BD2596DBAF43556E19ED0E41E150(L_16, L_17, L_18, L_19, L_20, L_21, L_22, NULL);
		// vivoxService.SetAuthenticationComponents(registry.GetServiceComponent<IPlayerId>(), registry.GetServiceComponent<IAccessToken>(), registry.GetServiceComponent<IEnvironmentId>());
		VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* L_23 = V_0;
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_24 = ___registry0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC(L_24, CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_26 = ___registry0;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = CoreRegistry_GetServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m4125AAF16E0C255FB3B1560FAEB5D04A1BFF1D66(L_26, CoreRegistry_GetServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m4125AAF16E0C255FB3B1560FAEB5D04A1BFF1D66_RuntimeMethod_var);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_28 = ___registry0;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = CoreRegistry_GetServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m02C0B2B67186662D0D385092A14556708E38987C(L_28, CoreRegistry_GetServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m02C0B2B67186662D0D385092A14556708E38987C_RuntimeMethod_var);
		NullCheck(L_23);
		VivoxServiceInternal_SetAuthenticationComponents_mF967F4D7F52ED18E14A2FCBE7B709950394A82C6(L_23, L_25, L_27, L_29, NULL);
		goto IL_00a4;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{// begin catch(System.Object)
		// catch
		// Debug.LogError($"[Vivox]: Unable to initialize Vivox. "
		//     + "\nPlease ensure that a project is properly linked at \"Edit > Project Settings > Services > Vivox\" if you intend to use Unity Game Services. "
		//     + "\nIf you would like to use custom credentials, you can set them by creating an InitializationOptions instance, calling SetVivoxCredentials(...) on it while providing your credentials, and passing the object into UnityServices.InitializeAsync(...)");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral406EF0ECD457A43CE572FD18458D0489E0E2CBC0)), NULL);
		// throw;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_00a4:
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		V_8 = L_30;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_31 = V_8;
		return L_31;
	}
}
// System.Void Unity.Services.Vivox.VivoxPackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxPackageInitializer__ctor_m7B9A69AFA29B35579816CAC8254BA4C561253828 (VivoxPackageInitializer_t6604DBF4C55FA76FB1F6910AFF62879FAD220434* __this, const RuntimeMethod* method) 
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
// Unity.Services.Vivox.IVivoxService Unity.Services.Vivox.VivoxService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF (const RuntimeMethod* method) 
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
// System.Void Unity.Services.Vivox.VivoxService::set_Instance(Unity.Services.Vivox.IVivoxService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxService_set_Instance_mDFF21AF04CDCCD5A738F72A3FE623D9F84CAD1FE (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IVivoxService Instance { get; internal set; }
		RuntimeObject* L_0 = ___value0;
		((VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_StaticFields*)il2cpp_codegen_static_fields_for(VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_StaticFields*)il2cpp_codegen_static_fields_for(VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
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
// System.Boolean Unity.Services.Vivox.VivoxServiceInternal::get_IsTestMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VivoxServiceInternal_get_IsTestMode_m0D6F75312C76ABCB43835D77F2501A7E1CFE22EC (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// internal bool IsTestMode { get; set; }
		bool L_0 = __this->___U3CIsTestModeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_IsTestMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_IsTestMode_m407EC648F7C7175A55EB9B56B58DC6F920B1C4A7 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool IsTestMode { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsTestModeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// VivoxUnity.Client Unity.Services.Vivox.VivoxServiceInternal::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* VivoxServiceInternal_get_Client_m052F0C9615F0AE1C533ED8F05B2422288E1E855D (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public Client Client { get; internal set; }
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0 = __this->___U3CClientU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Client(VivoxUnity.Client)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Client_mDF66310BC82DFAB8EC044BF52E2530508FEC747E (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* ___value0, const RuntimeMethod* method) 
{
	{
		// public Client Client { get; internal set; }
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0 = ___value0;
		__this->___U3CClientU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_Server()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_Server_m9F544C1735C743156C0BAD46F08F68197A5872FC (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public string Server { get; internal set; }
		String_t* L_0 = __this->___U3CServerU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Server(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Server_m867FC2F72F081C726B75CADE5C7D205363DA8CAF (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Server { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CServerU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServerU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_Domain_mFDD90B593526A16BA019C484304BF57744E617B8 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; internal set; }
		String_t* L_0 = __this->___U3CDomainU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Domain_m7664E08F79F80A1CC84711D71969FA900AD20DFD (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CDomainU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDomainU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_Issuer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_Issuer_mD1B887DBFC9AEB99701B43C6EC5BDBD657AFACF5 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public string Issuer { get; internal set; }
		String_t* L_0 = __this->___U3CIssuerU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Issuer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Issuer_mA399DCB0B47E1238C38DB0012F09FBA9369DD06D (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Issuer { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CIssuerU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIssuerU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_Key_m1EBDD1EF9987AD3BD5C3A1077A5F12DF9834B8C1 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public string Key { get; internal set; }
		String_t* L_0 = __this->___U3CKeyU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_Key(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Key_m8311A4EC2627E895403F9F402671A0B10C0B7535 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Key { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CKeyU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.Boolean Unity.Services.Vivox.VivoxServiceInternal::get_IsEnvironmentCustom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VivoxServiceInternal_get_IsEnvironmentCustom_mB091D452A109F7A5950F30AC694CB4CC5672F583 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEnvironmentCustom { get; internal set; }
		bool L_0 = __this->___U3CIsEnvironmentCustomU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_IsEnvironmentCustom(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_IsEnvironmentCustom_mDC769ACF7076BFA08137EAEF53C55A991D6C6A80 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsEnvironmentCustom { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsEnvironmentCustomU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Uri Unity.Services.Vivox.VivoxServiceInternal::get_ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* VivoxServiceInternal_get_ServerUri_m1C3F6EBBF18C19FC072A30DB1B5A29C004611A6D (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Uri ServerUri => new Uri(Server);
		String_t* L_0;
		L_0 = VivoxServiceInternal_get_Server_m9F544C1735C743156C0BAD46F08F68197A5872FC_inline(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_1, L_0, NULL);
		return L_1;
	}
}
// Unity.Services.Authentication.Internal.IAccessToken Unity.Services.Vivox.VivoxServiceInternal::get_AccessTokenComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxServiceInternal_get_AccessTokenComponent_mA8A4AA82CB2171F53F26003ADE059C53A845876D (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public IAccessToken AccessTokenComponent { get; internal set; }
		RuntimeObject* L_0 = __this->___U3CAccessTokenComponentU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_AccessTokenComponent(Unity.Services.Authentication.Internal.IAccessToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_AccessTokenComponent_m68E9540A7AB6868426007E650F76939BB2D8CEB2 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IAccessToken AccessTokenComponent { get; internal set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAccessTokenComponentU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessTokenComponentU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// Unity.Services.Authentication.Internal.IPlayerId Unity.Services.Vivox.VivoxServiceInternal::get_PlayerIdComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxServiceInternal_get_PlayerIdComponent_m950BDAD287A3554DC6F51383CCDD0A0B7143289D (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public IPlayerId PlayerIdComponent { get; internal set; }
		RuntimeObject* L_0 = __this->___U3CPlayerIdComponentU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_PlayerIdComponent(Unity.Services.Authentication.Internal.IPlayerId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_PlayerIdComponent_m3A29DC6B724F8B3C4B351758C794DF9765A07552 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPlayerId PlayerIdComponent { get; internal set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPlayerIdComponentU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerIdComponentU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// Unity.Services.Authentication.Internal.IEnvironmentId Unity.Services.Vivox.VivoxServiceInternal::get_EnvironmentIdComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxServiceInternal_get_EnvironmentIdComponent_m640EA031742D95BEF72240B4A81ACF13219A9A21 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public IEnvironmentId EnvironmentIdComponent { get; internal set; }
		RuntimeObject* L_0 = __this->___U3CEnvironmentIdComponentU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::set_EnvironmentIdComponent(Unity.Services.Authentication.Internal.IEnvironmentId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_EnvironmentIdComponent_m6F75F1CDE3A75C67D99CAC0EAEE70B407A990F51 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IEnvironmentId EnvironmentIdComponent { get; internal set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CEnvironmentIdComponentU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnvironmentIdComponentU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_AccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_AccessToken_m8E6B19F6CA201C035DF908AD4492340C5102AD0A (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string AccessToken => AccessTokenComponent.AccessToken;
		RuntimeObject* L_0;
		L_0 = VivoxServiceInternal_get_AccessTokenComponent_mA8A4AA82CB2171F53F26003ADE059C53A845876D_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IAccessToken::get_AccessToken() */, IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_PlayerId_m8CABA0B88D21E816583EAC7A58F1F20A361E9BBE (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// public string PlayerId => PlayerIdComponent?.PlayerId;
		RuntimeObject* L_0;
		L_0 = VivoxServiceInternal_get_PlayerIdComponent_m950BDAD287A3554DC6F51383CCDD0A0B7143289D_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IPlayerId::get_PlayerId() */, IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// System.String Unity.Services.Vivox.VivoxServiceInternal::get_EnvironmentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_EnvironmentId_m05C4E633A970EB41F6B20CDF5F32D0827B63CD28 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// public string EnvironmentId => EnvironmentIdComponent?.EnvironmentId;
		RuntimeObject* L_0;
		L_0 = VivoxServiceInternal_get_EnvironmentIdComponent_m640EA031742D95BEF72240B4A81ACF13219A9A21_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IEnvironmentId::get_EnvironmentId() */, IEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// System.Boolean Unity.Services.Vivox.VivoxServiceInternal::get_IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VivoxServiceInternal_get_IsAuthenticated_m8154C3F4D8226C48032B99C973D0863627DF6DC8 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public bool IsAuthenticated => (PlayerId != null && EnvironmentId != null);
		String_t* L_0;
		L_0 = VivoxServiceInternal_get_PlayerId_m8CABA0B88D21E816583EAC7A58F1F20A361E9BBE(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1;
		L_1 = VivoxServiceInternal_get_EnvironmentId_m05C4E633A970EB41F6B20CDF5F32D0827B63CD28(__this, NULL);
		G_B3_0 = ((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::Initialize(VivoxUnity.VivoxConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_Initialize_mAE604E1E6DA29F0E968594855E314A2EF5EA2EFD (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D3322BCFDA826FBA132522C70E702DB53C4EF71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C30CBC2453C5C51EF3D28592333F51BEC634276);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7018CAA888BC1EBA46D5590E671D5AC60A6819D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD73EE4CFE5FBC340737C212C8A1D781669B73CB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B6_0 = 0;
	{
		// string uriString = Server;
		String_t* L_0;
		L_0 = VivoxServiceInternal_get_Server_m9F544C1735C743156C0BAD46F08F68197A5872FC_inline(__this, NULL);
		V_0 = L_0;
		// if (!IsEnvironmentCustom)
		bool L_1;
		L_1 = VivoxServiceInternal_get_IsEnvironmentCustom_mB091D452A109F7A5950F30AC694CB4CC5672F583_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// string environmentFragment = $"/{EnvironmentId}";
		String_t* L_3;
		L_3 = VivoxServiceInternal_get_EnvironmentId_m05C4E633A970EB41F6B20CDF5F32D0827B63CD28(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_3, NULL);
		V_2 = L_4;
		// uriString += environmentFragment;
		String_t* L_5 = V_0;
		String_t* L_6 = V_2;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, L_6, NULL);
		V_0 = L_7;
	}

IL_0030:
	{
		// Client = new Client(new Uri(uriString));
		String_t* L_8 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_9 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_9, L_8, NULL);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_10 = (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF*)il2cpp_codegen_object_new(Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Client__ctor_m77E399B2638EBCB426359D649AEAB2389FDB2FA9(L_10, L_9, NULL);
		VivoxServiceInternal_set_Client_mDF66310BC82DFAB8EC044BF52E2530508FEC747E_inline(__this, L_10, NULL);
		// Client.Initialize(config);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_11;
		L_11 = VivoxServiceInternal_get_Client_m052F0C9615F0AE1C533ED8F05B2422288E1E855D_inline(__this, NULL);
		VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47* L_12 = ___config0;
		NullCheck(L_11);
		Client_Initialize_m88F73EF0AE28DBFB33E413911CEC03ACA6F339AE(L_11, L_12, NULL);
		// if (IsAuthenticated && !IsTestMode && !IsEnvironmentCustom)
		bool L_13;
		L_13 = VivoxServiceInternal_get_IsAuthenticated_m8154C3F4D8226C48032B99C973D0863627DF6DC8(__this, NULL);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		bool L_14;
		L_14 = VivoxServiceInternal_get_IsTestMode_m0D6F75312C76ABCB43835D77F2501A7E1CFE22EC_inline(__this, NULL);
		if (L_14)
		{
			goto IL_006a;
		}
	}
	{
		bool L_15;
		L_15 = VivoxServiceInternal_get_IsEnvironmentCustom_mB091D452A109F7A5950F30AC694CB4CC5672F583_inline(__this, NULL);
		G_B6_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_006b;
	}

IL_006a:
	{
		G_B6_0 = 0;
	}

IL_006b:
	{
		V_3 = (bool)G_B6_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		// Client.tokenGen = new VivoxJWTTokenGen();
		VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7* L_17 = (VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7*)il2cpp_codegen_object_new(VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		VivoxJWTTokenGen__ctor_m7A8FA9C6E852510C8150B23482F555D0F3648461(L_17, NULL);
		Client_set_tokenGen_m8D40699D47D518B2B18A783D7A5522C4089EE73C(L_17, NULL);
		goto IL_0120;
	}

IL_0081:
	{
		// if (IsEnvironmentCustom)
		bool L_18;
		L_18 = VivoxServiceInternal_get_IsEnvironmentCustom_mB091D452A109F7A5950F30AC694CB4CC5672F583_inline(__this, NULL);
		V_4 = L_18;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00c4;
		}
	}
	{
		// if (!string.IsNullOrEmpty(Key))
		String_t* L_20;
		L_20 = VivoxServiceInternal_get_Key_m1EBDD1EF9987AD3BD5C3A1077A5F12DF9834B8C1_inline(__this, NULL);
		bool L_21;
		L_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_20, NULL);
		V_5 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00c1;
		}
	}
	{
		// Debug.LogWarning("[Vivox]: We've detected the use of custom credentials with a Vivox Key provided - we will generate Vivox Access Tokens locally using your Vivox Key but this should only be used for testing. "
		//     + "\nWhen you are successfully generating server-side Vivox Access Tokens, please remove the Vivox Key from the InitializationOptions.SetVivoxCredentials(...) call used on the object passed into UnityServices.InitializeAsync(...)");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralFD73EE4CFE5FBC340737C212C8A1D781669B73CB, NULL);
		// Client.tokenGen.IssuerKey = Key;
		VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95* L_23;
		L_23 = Client_get_tokenGen_m528F82B68A3BB68F7BF721EFAF44F9BDF9CC8F24(NULL);
		String_t* L_24;
		L_24 = VivoxServiceInternal_get_Key_m1EBDD1EF9987AD3BD5C3A1077A5F12DF9834B8C1_inline(__this, NULL);
		NullCheck(L_23);
		VxTokenGen_set_IssuerKey_m4BF7ADE57E4D3A33A680D1F21DB21AA9014BDE80(L_23, L_24, NULL);
	}

IL_00c1:
	{
		goto IL_011f;
	}

IL_00c4:
	{
		// if (IsTestMode)
		bool L_25;
		L_25 = VivoxServiceInternal_get_IsTestMode_m0D6F75312C76ABCB43835D77F2501A7E1CFE22EC_inline(__this, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_0110;
		}
	}
	{
		// Debug.LogWarning("[Vivox]: Test Mode is enabled or you are not using the Authentication package - we will generate Vivox Access Tokens locally using your Vivox Key but this should only be used for testing.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralF7018CAA888BC1EBA46D5590E671D5AC60A6819D, NULL);
		// if (string.IsNullOrEmpty(Key))
		String_t* L_27;
		L_27 = VivoxServiceInternal_get_Key_m1EBDD1EF9987AD3BD5C3A1077A5F12DF9834B8C1_inline(__this, NULL);
		bool L_28;
		L_28 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_27, NULL);
		V_7 = L_28;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00fc;
		}
	}
	{
		// Debug.LogError("[Vivox]: A Vivox Key couldn't be retrieved. " +
		//     "Please ensure that a project is properly linked at \"Edit > Project Settings > Services > Vivox\"");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4D3322BCFDA826FBA132522C70E702DB53C4EF71, NULL);
		// return;
		goto IL_0120;
	}

IL_00fc:
	{
		// Client.tokenGen.IssuerKey = Key;
		VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95* L_30;
		L_30 = Client_get_tokenGen_m528F82B68A3BB68F7BF721EFAF44F9BDF9CC8F24(NULL);
		String_t* L_31;
		L_31 = VivoxServiceInternal_get_Key_m1EBDD1EF9987AD3BD5C3A1077A5F12DF9834B8C1_inline(__this, NULL);
		NullCheck(L_30);
		VxTokenGen_set_IssuerKey_m4BF7ADE57E4D3A33A680D1F21DB21AA9014BDE80(L_30, L_31, NULL);
		goto IL_011e;
	}

IL_0110:
	{
		// Debug.LogError("[Vivox]: Something is wrong: either a project is not linked, or Authentication was not signed into before calling VivoxService.Instance.Initialize(). " +
		//     "Please ensure that a project is properly linked at \"Edit > Project Settings > Services > Vivox\"");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5C30CBC2453C5C51EF3D28592333F51BEC634276, NULL);
		// return;
		goto IL_0120;
	}

IL_011e:
	{
	}

IL_011f:
	{
	}

IL_0120:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::SetCredentials(System.String,System.String,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_SetCredentials_mBE35DDDE0046BD2596DBAF43556E19ED0E41E150 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___server0, String_t* ___domain1, String_t* ___issuer2, String_t* ___token3, bool ___customEnvironment4, bool ___isTestMode5, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (string.IsNullOrEmpty(server))
		String_t* L_0 = ___server0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// throw new ArgumentException($"'{nameof(server)}' is null or empty", nameof(server));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D89B0D256B935BA48BE9AB9C82F7B774B5B2668)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxServiceInternal_SetCredentials_mBE35DDDE0046BD2596DBAF43556E19ED0E41E150_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (string.IsNullOrEmpty(domain))
		String_t* L_4 = ___domain1;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// throw new ArgumentException($"'{nameof(domain)}' is null or empty", nameof(domain));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB281C44DFAFDB0D6CE36DF10A9E882F86382B95C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11E42B7A5E1CF74E4375D71D8CE94F3D8D446DBA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxServiceInternal_SetCredentials_mBE35DDDE0046BD2596DBAF43556E19ED0E41E150_RuntimeMethod_var)));
	}

IL_0037:
	{
		// if (string.IsNullOrEmpty(issuer))
		String_t* L_8 = ___issuer2;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// throw new ArgumentException($"'{nameof(issuer)}' is null or empty", nameof(issuer));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB628C1574D231AEE92EF9C35D158B695B7BA6B35)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32443E32E6F14F8466A44B95613267F7F67A645D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxServiceInternal_SetCredentials_mBE35DDDE0046BD2596DBAF43556E19ED0E41E150_RuntimeMethod_var)));
	}

IL_0052:
	{
		// Server = server;
		String_t* L_12 = ___server0;
		VivoxServiceInternal_set_Server_m867FC2F72F081C726B75CADE5C7D205363DA8CAF_inline(__this, L_12, NULL);
		// Domain = domain;
		String_t* L_13 = ___domain1;
		VivoxServiceInternal_set_Domain_m7664E08F79F80A1CC84711D71969FA900AD20DFD_inline(__this, L_13, NULL);
		// Issuer = issuer;
		String_t* L_14 = ___issuer2;
		VivoxServiceInternal_set_Issuer_mA399DCB0B47E1238C38DB0012F09FBA9369DD06D_inline(__this, L_14, NULL);
		// Key = token;
		String_t* L_15 = ___token3;
		VivoxServiceInternal_set_Key_m8311A4EC2627E895403F9F402671A0B10C0B7535_inline(__this, L_15, NULL);
		// IsEnvironmentCustom = customEnvironment;
		bool L_16 = ___customEnvironment4;
		VivoxServiceInternal_set_IsEnvironmentCustom_mDC769ACF7076BFA08137EAEF53C55A991D6C6A80_inline(__this, L_16, NULL);
		// IsTestMode = isTestMode;
		bool L_17 = ___isTestMode5;
		VivoxServiceInternal_set_IsTestMode_m407EC648F7C7175A55EB9B56B58DC6F920B1C4A7_inline(__this, L_17, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::SetAuthenticationComponents(Unity.Services.Authentication.Internal.IPlayerId,Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Authentication.Internal.IEnvironmentId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal_SetAuthenticationComponents_mF967F4D7F52ED18E14A2FCBE7B709950394A82C6 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___playerIdComponent0, RuntimeObject* ___accessTokenComponent1, RuntimeObject* ___environmentIdComponent2, const RuntimeMethod* method) 
{
	{
		// PlayerIdComponent = playerIdComponent;
		RuntimeObject* L_0 = ___playerIdComponent0;
		VivoxServiceInternal_set_PlayerIdComponent_m3A29DC6B724F8B3C4B351758C794DF9765A07552_inline(__this, L_0, NULL);
		// AccessTokenComponent = accessTokenComponent;
		RuntimeObject* L_1 = ___accessTokenComponent1;
		VivoxServiceInternal_set_AccessTokenComponent_m68E9540A7AB6868426007E650F76939BB2D8CEB2_inline(__this, L_1, NULL);
		// EnvironmentIdComponent = environmentIdComponent;
		RuntimeObject* L_2 = ___environmentIdComponent2;
		VivoxServiceInternal_set_EnvironmentIdComponent_m6F75F1CDE3A75C67D99CAC0EAEE70B407A990F51_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Vivox.VivoxServiceInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxServiceInternal__ctor_mD3370C00F04C12D159158C9A88191640164D4C63 (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
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
// System.String Unity.Services.Vivox.VivoxJWTTokenGen::GetToken(System.String,System.Nullable`1<System.TimeSpan>,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VivoxJWTTokenGen_GetToken_m0B903E5EC653E4816A115DF76DFA31428435E049 (VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7* __this, String_t* ___issuer0, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___expiration1, String_t* ___userUri2, String_t* ___action3, String_t* ___tokenKey4, String_t* ___conferenceUri5, String_t* ___fromUserUri6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return VivoxService.Instance.AccessToken;
		RuntimeObject* L_0;
		L_0 = VivoxService_get_Instance_m6349A1612582BD42642B68C11ED75CACE59BC4AF_inline(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Unity.Services.Vivox.IVivoxService::get_AccessToken() */, IVivoxService_t8F2327D96FE9E9F5E3B71C50608725B85618005F_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Services.Vivox.VivoxJWTTokenGen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxJWTTokenGen__ctor_m7A8FA9C6E852510C8150B23482F555D0F3648461 (VivoxJWTTokenGen_tD8291B4E522448F3CFC20F0DB6EA498E5F436FA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VxTokenGen_t49C4951591C0656F46DC6E3F54CDBF61305C1A95_il2cpp_TypeInfo_var);
		VxTokenGen__ctor_m2BEC6F19A4BCD86D0BC129517C8FCFC9943BC03F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxService_set_Instance_mDFF21AF04CDCCD5A738F72A3FE623D9F84CAD1FE_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IVivoxService Instance { get; internal set; }
		RuntimeObject* L_0 = ___value0;
		((VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_StaticFields*)il2cpp_codegen_static_fields_for(VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_StaticFields*)il2cpp_codegen_static_fields_for(VivoxService_t0CF96DC773A968EC35D6EE18B3EA75227A766B07_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_Server_m9F544C1735C743156C0BAD46F08F68197A5872FC_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public string Server { get; internal set; }
		String_t* L_0 = __this->___U3CServerU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VivoxServiceInternal_get_AccessTokenComponent_mA8A4AA82CB2171F53F26003ADE059C53A845876D_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public IAccessToken AccessTokenComponent { get; internal set; }
		RuntimeObject* L_0 = __this->___U3CAccessTokenComponentU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VivoxServiceInternal_get_PlayerIdComponent_m950BDAD287A3554DC6F51383CCDD0A0B7143289D_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public IPlayerId PlayerIdComponent { get; internal set; }
		RuntimeObject* L_0 = __this->___U3CPlayerIdComponentU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VivoxServiceInternal_get_EnvironmentIdComponent_m640EA031742D95BEF72240B4A81ACF13219A9A21_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public IEnvironmentId EnvironmentIdComponent { get; internal set; }
		RuntimeObject* L_0 = __this->___U3CEnvironmentIdComponentU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VivoxServiceInternal_get_IsEnvironmentCustom_mB091D452A109F7A5950F30AC694CB4CC5672F583_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEnvironmentCustom { get; internal set; }
		bool L_0 = __this->___U3CIsEnvironmentCustomU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Client_mDF66310BC82DFAB8EC044BF52E2530508FEC747E_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* ___value0, const RuntimeMethod* method) 
{
	{
		// public Client Client { get; internal set; }
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0 = ___value0;
		__this->___U3CClientU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* VivoxServiceInternal_get_Client_m052F0C9615F0AE1C533ED8F05B2422288E1E855D_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public Client Client { get; internal set; }
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0 = __this->___U3CClientU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VivoxServiceInternal_get_IsTestMode_m0D6F75312C76ABCB43835D77F2501A7E1CFE22EC_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// internal bool IsTestMode { get; set; }
		bool L_0 = __this->___U3CIsTestModeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VivoxServiceInternal_get_Key_m1EBDD1EF9987AD3BD5C3A1077A5F12DF9834B8C1_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, const RuntimeMethod* method) 
{
	{
		// public string Key { get; internal set; }
		String_t* L_0 = __this->___U3CKeyU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Server_m867FC2F72F081C726B75CADE5C7D205363DA8CAF_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Server { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CServerU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServerU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Domain_m7664E08F79F80A1CC84711D71969FA900AD20DFD_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CDomainU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDomainU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Issuer_mA399DCB0B47E1238C38DB0012F09FBA9369DD06D_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Issuer { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CIssuerU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIssuerU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_Key_m8311A4EC2627E895403F9F402671A0B10C0B7535_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Key { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CKeyU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_IsEnvironmentCustom_mDC769ACF7076BFA08137EAEF53C55A991D6C6A80_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsEnvironmentCustom { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsEnvironmentCustomU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_IsTestMode_m407EC648F7C7175A55EB9B56B58DC6F920B1C4A7_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool IsTestMode { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsTestModeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_PlayerIdComponent_m3A29DC6B724F8B3C4B351758C794DF9765A07552_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPlayerId PlayerIdComponent { get; internal set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPlayerIdComponentU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerIdComponentU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_AccessTokenComponent_m68E9540A7AB6868426007E650F76939BB2D8CEB2_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IAccessToken AccessTokenComponent { get; internal set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAccessTokenComponentU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessTokenComponentU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxServiceInternal_set_EnvironmentIdComponent_m6F75F1CDE3A75C67D99CAC0EAEE70B407A990F51_inline (VivoxServiceInternal_t07C9B83EC38D966226EDE51C81330AD95504397B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IEnvironmentId EnvironmentIdComponent { get; internal set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CEnvironmentIdComponentU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnvironmentIdComponentU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
