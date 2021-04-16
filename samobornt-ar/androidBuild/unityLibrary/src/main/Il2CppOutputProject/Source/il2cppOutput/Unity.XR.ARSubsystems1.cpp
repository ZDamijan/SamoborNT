#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_tB5A0B737E782053A89719964DAF99F32E5CBFC46;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct SubsystemProvider_1_tBB539901FE99992CAA10A1EFDFA610E048498E98;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem>
struct SubsystemProvider_1_tC3DB99A11F9F3210CE2ABA9FE09C127C5B13FF80;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystem>
struct SubsystemProvider_1_t23EADEE126E953AEBF796C02B50539998EA56B78;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem>
struct SubsystemProvider_1_tBF37BFFB47314B7D87E24F4C4903C90930C0302C;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem>
struct SubsystemProvider_1_t71FE677A1A2F32123FE4C7868D5943892028AE12;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem>
struct SubsystemProvider_1_t57D5C398A7A30AC3C3674CA126FAE612BC00F597;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem>
struct SubsystemProvider_1_t3D6D4D936F16F3264F75D1BAB46A4A398F18F204;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem>
struct SubsystemProvider_1_tA41ABDAA9644A18E81CC750DE7DDEA8EB6088742;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider
struct Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider
struct Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider
struct Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7;
// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider
struct Provider_t055C90C34B2BCE8D134DF44C12823E320519168C;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider
struct Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider
struct Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider
struct Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD;

IL2CPP_EXTERN_C RuntimeClass* AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transformation_t5812B66180F359977F76AB67CC9E923CF0B55938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE;
IL2CPP_EXTERN_C String_t* _stringLiteral1399697DAB4124C76C3449E6CBB1E28BB1C2F2A1;
IL2CPP_EXTERN_C String_t* _stringLiteral15E540EE340CABF2AEBFAE9C5DC5176C42795209;
IL2CPP_EXTERN_C String_t* _stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A;
IL2CPP_EXTERN_C String_t* _stringLiteral1C244789BBF6C19E5126D1D3DC6898E243F24F51;
IL2CPP_EXTERN_C String_t* _stringLiteral27D4391AD2900E18D386A9155EE7DD7ADAF98FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral3194FD2CE283EE4DDE49298AADE96B77975C46E5;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77;
IL2CPP_EXTERN_C String_t* _stringLiteral4110120B3B41A2DDAFF9CBA0B77F7BE9DDBB53B3;
IL2CPP_EXTERN_C String_t* _stringLiteral43CF1A394DF36BF047EE89F7BFA26227D4379BFB;
IL2CPP_EXTERN_C String_t* _stringLiteral447993BB9CCC280BD731A90A94EAA3AC0C8F2B2C;
IL2CPP_EXTERN_C String_t* _stringLiteral49851190ED9FA7B5B16CED19B807FDDAA864FEE9;
IL2CPP_EXTERN_C String_t* _stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59;
IL2CPP_EXTERN_C String_t* _stringLiteral58E5CEADA2059EE9E3025B80075ADE0FEECDE744;
IL2CPP_EXTERN_C String_t* _stringLiteral5DD68446F820F397860B76D203AC09BE189AC257;
IL2CPP_EXTERN_C String_t* _stringLiteral69848EA3811CFA33C6D149D0D7D3E7BB386BD641;
IL2CPP_EXTERN_C String_t* _stringLiteral6E08267B4D40BEF3D6FD241002FD8395E431BF8A;
IL2CPP_EXTERN_C String_t* _stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C;
IL2CPP_EXTERN_C String_t* _stringLiteral773B3E33BD417BDFC3619000108985CB0FF49E77;
IL2CPP_EXTERN_C String_t* _stringLiteral774435CB0ABA1D212CE35028C45598E01E1A4BF6;
IL2CPP_EXTERN_C String_t* _stringLiteral84202A255CF695123BA6AA8B575C53104873E7C7;
IL2CPP_EXTERN_C String_t* _stringLiteral87C47688E7FBA919124B1A1D7B77CE47A06E36A2;
IL2CPP_EXTERN_C String_t* _stringLiteral88CA26652382EB9056FA8D06D416F308717A3471;
IL2CPP_EXTERN_C String_t* _stringLiteral8E24AD325FDF926182510CA7537CB68FEA6D6503;
IL2CPP_EXTERN_C String_t* _stringLiteral9D41B78B4DF75EAC7BE2FAA927008B4AB1767351;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A7E438E876A47A61C6E2144C25AB3FC820856F;
IL2CPP_EXTERN_C String_t* _stringLiteralB46EF5E6A66EDA1C58FC6247FCF11ED116219577;
IL2CPP_EXTERN_C String_t* _stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D;
IL2CPP_EXTERN_C String_t* _stringLiteralC6EAFD4C3B23645C412BB41A74CBFEB5A62E11BF;
IL2CPP_EXTERN_C String_t* _stringLiteralCE83A8FD46D2BCA9E85007E13F35EC64241D98D0;
IL2CPP_EXTERN_C String_t* _stringLiteralE3B3C6EBFEA166D20BF43554ADFEFAB3308E3F3E;
IL2CPP_EXTERN_C String_t* _stringLiteralED9546C195BD4988B71713BD762B7E7F364227ED;
IL2CPP_EXTERN_C String_t* _stringLiteralF888230443F7BB68D49D53BBE56D2A722FDD6CA2;
IL2CPP_EXTERN_C const RuntimeMethod* Api_ConvertAsync_m7D88B9B493A448A03FBED33FE2C675805A2417F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Api_ConvertAsync_mE9BFD28B9BC1C3A063FC0B84B014B3538A155E99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Api_DisposeAsyncRequest_m06C972C865763DF2DE877124295F4A48B0574ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Api_DisposeImage_m6AEAAF9EF11D19294B441CF6DBB8FEDD58933989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Api_GetAsyncRequestStatus_m920A8C2BA437BF3581A737DE8AF350094577300B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Api_NativeHandleValid_m25628942A0D2320EAB96887219972ED8257FC858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Api_TryConvert_m2FB4CAC6639BE6EDDD65D74A3C296C9A72C1E6FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Api_TryGetAsyncRequestData_mCEB60B8F55366677F05AAF1651F46C4B28AFAEA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Api_TryGetConvertedDataSize_m50DDC92171F520516E21205E3817BEE0D51A9A51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Api_TryGetPlane_m9EDAE9347615522A0C95F387DF4D274D655090A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Equals_m43936EB3E883A2A3F3A649C6435CC70B4DD96BB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetHashCode_m13D81A3581866C33D8C9B13443F7342C9105EF98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m1C9702FA1520BB681C0979C7264DA107FC2AD627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_GetHumanBodyPose2DJoints_m9CBC5A20BCA6FEC12F844AEBCE285D978C859E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_GetSkeleton_mFFD5F2C114C2B8C3A8B54C10CFCF82F2D5C57868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_m848F042E5613BB90E3A933E19E8229D7C94914C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_mBEE3804BA51E701D3775CC4AC1AFD16FEB97FB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_RemoveEnvironmentProbe_m1C8E9F616E2D1F98ECF86A3D6101B9A7ACB949D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryAcquireEnvironmentDepthConfidenceCpuImage_mC0A1389DBA1C968C2E998C406852881E0F6089FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryAcquireEnvironmentDepthCpuImage_m038A771570F8067187EA5602FE6287D7F32A8BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryAcquireHumanDepthCpuImage_mD9C2C05795A09F724FA8FCCE18C32CD2F5B66F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryAcquireHumanStencilCpuImage_mC6011EC7798D37065264EE243943E90D1E6B71FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryAddEnvironmentProbe_m3290B8D160B758811040A94F335843B1665618D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryGetEnvironmentDepthConfidence_mB12E08E4B93E1272976BE1F0C09592133B93848F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryGetEnvironmentDepth_m39AA20EFA2DB7D68364B4D677731911BB9B95987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryGetHumanDepth_m4F902130B0B684322ACE0F2D7F72F412F5D42844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_TryGetHumanStencil_m8231857EC5143647F85BB79A29BAC18430821D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_automaticPlacementRequested_m247AC8CC05683266B38C937719C7B0E766C6337B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_environmentTextureHDRRequested_m82BAEA302C0714E7C0194EA11A8FE890E7409A8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_matchFrameRateRequested_m22D49ABF01EEF1D750FD86A7E6D67BE6A462E0DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_pose2DRequested_m27B9A484B65FE56A642599F71769CECD31F21B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_pose3DRequested_mCF7E233FEE430CE3B888B8E65D36E7EB8475697B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_pose3DScaleEstimationRequested_m33837BA93C947D63865DFCA7A83288498EAA8200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_requestedHumanDepthMode_m90E3350AB1E861DDA9B1254B5601665484690258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_requestedHumanStencilMode_m17A4B7518A1749DEEF6E432E290D03D66AAB1004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_requestedMaxNumberOfMovingImages_mCEC5839726AA69CAD5ED6F831170D2B7EDD7567F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_requestedPlaneDetectionMode_m6F76C54F3DDC0811336F80D6CF40CBC64147DAD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m0FD1F0E44A64E3599BEF42CBF87EB8BA51597EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m3216193D514525815B1785B92B434D1CB6BED267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m679358E7941E7FEBDCED0CC52E860E237B09BDE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m756AF5A05933094284FE3141F40DBAE7DBAE8FE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m775D1DA5795E95D8D1220715C2B041DB989B9B02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m83A2BF40051F2545CECFD837C92DF3AB37758AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m85B436C396E4816D5D62F8595921E532535FA734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m987248264A49939ACFFFF0D50F3AAAE526E80B67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_mC4C72A59ABE142F4F35FE24EFAF666ACF8450690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct  SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct  Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct  SubsystemProvider_1_tBB539901FE99992CAA10A1EFDFA610E048498E98  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem>
struct  SubsystemProvider_1_tC3DB99A11F9F3210CE2ABA9FE09C127C5B13FF80  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystem>
struct  SubsystemProvider_1_t23EADEE126E953AEBF796C02B50539998EA56B78  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem>
struct  SubsystemProvider_1_tBF37BFFB47314B7D87E24F4C4903C90930C0302C  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct  SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem>
struct  SubsystemProvider_1_t71FE677A1A2F32123FE4C7868D5943892028AE12  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem>
struct  SubsystemProvider_1_t57D5C398A7A30AC3C3674CA126FAE612BC00F597  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem>
struct  SubsystemProvider_1_t3D6D4D936F16F3264F75D1BAB46A4A398F18F204  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct  SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct  SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem>
struct  SubsystemProvider_1_tA41ABDAA9644A18E81CC750DE7DDEA8EB6088742  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.RectInt
struct  RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 
{
public:
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_XMin_0)); }
	inline int32_t get_m_XMin_0() const { return ___m_XMin_0; }
	inline int32_t* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(int32_t value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_YMin_1)); }
	inline int32_t get_m_YMin_1() const { return ___m_YMin_1; }
	inline int32_t* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(int32_t value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct  Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<supportsMovingImages>k__BackingField
	bool ___U3CsupportsMovingImagesU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<requiresPhysicalImageDimensions>k__BackingField
	bool ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<supportsMutableLibrary>k__BackingField
	bool ___U3CsupportsMutableLibraryU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<supportsImageValidation>k__BackingField
	bool ___U3CsupportsImageValidationU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsMovingImagesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMovingImagesU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsMovingImagesU3Ek__BackingField_4() const { return ___U3CsupportsMovingImagesU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsMovingImagesU3Ek__BackingField_4() { return &___U3CsupportsMovingImagesU3Ek__BackingField_4; }
	inline void set_U3CsupportsMovingImagesU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsMovingImagesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5)); }
	inline bool get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5() const { return ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5() { return &___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5; }
	inline void set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5(bool value)
	{
		___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMutableLibraryU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMutableLibraryU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsMutableLibraryU3Ek__BackingField_6() const { return ___U3CsupportsMutableLibraryU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsMutableLibraryU3Ek__BackingField_6() { return &___U3CsupportsMutableLibraryU3Ek__BackingField_6; }
	inline void set_U3CsupportsMutableLibraryU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsMutableLibraryU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsImageValidationU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsImageValidationU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsImageValidationU3Ek__BackingField_7() const { return ___U3CsupportsImageValidationU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsImageValidationU3Ek__BackingField_7() { return &___U3CsupportsImageValidationU3Ek__BackingField_7; }
	inline void set_U3CsupportsImageValidationU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsImageValidationU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_4;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_6;
	int32_t ___U3CsupportsImageValidationU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_4;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_6;
	int32_t ___U3CsupportsImageValidationU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities
struct  Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685__padding[1];
	};

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct  Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsClassificationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsClassificationU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsClassificationU3Ek__BackingField_8() const { return ___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsClassificationU3Ek__BackingField_8() { return &___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline void set_U3CsupportsClassificationU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsClassificationU3Ek__BackingField_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};

// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct  Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct  Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CproviderTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_3() const { return ___U3CproviderTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_3() { return &___U3CproviderTypeU3Ek__BackingField_3; }
	inline void set_U3CproviderTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemTypeOverrideU3Ek__BackingField_4)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_4() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_5() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};

// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.XR.ARSubsystems.EnvironmentDepthMode
struct  EnvironmentDepthMode_t3510F9A630A7170A2481D60487384089E64D84C7 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.EnvironmentDepthMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnvironmentDepthMode_t3510F9A630A7170A2481D60487384089E64D84C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.XR.ARSubsystems.Feature
struct  Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode
struct  HumanSegmentationDepthMode_tFF8EE69372C0D9890D3F0566DC0D2781CE584028 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HumanSegmentationDepthMode_tFF8EE69372C0D9890D3F0566DC0D2781CE584028, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode
struct  HumanSegmentationStencilMode_tB151C7AE42CB87D7EB7A0A12C759BD0BA03AC9DB 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HumanSegmentationStencilMode_tB151C7AE42CB87D7EB7A0A12C759BD0BA03AC9DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct  NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode
struct  OcclusionPreferenceMode_tB85530C1AF1BD2CD83770B19A90C6D3F781EADC1 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OcclusionPreferenceMode_tB85530C1AF1BD2CD83770B19A90C6D3F781EADC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct  PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.ScreenOrientation
struct  ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct  SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct  SessionInstallationStatus_t5298F0EEA216D050FFE923AE490498BBF0792F7E 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t5298F0EEA216D050FFE923AE490498BBF0792F7E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint
struct  XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Tracked
	int32_t ___m_Tracked_3;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Position_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_3() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Tracked_3)); }
	inline int32_t get_m_Tracked_3() const { return ___m_Tracked_3; }
	inline int32_t* get_address_of_m_Tracked_3() { return &___m_Tracked_3; }
	inline void set_m_Tracked_3(int32_t value)
	{
		___m_Tracked_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus
struct  AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Format
struct  Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Format::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation
struct  Transformation_t5812B66180F359977F76AB67CC9E923CF0B55938 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transformation_t5812B66180F359977F76AB67CC9E923CF0B55938, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider
struct  Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6  : public SubsystemProvider_1_tBB539901FE99992CAA10A1EFDFA610E048498E98
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities
struct  Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider
struct  Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190  : public SubsystemProvider_1_tC3DB99A11F9F3210CE2ABA9FE09C127C5B13FF80
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh/Attributes
struct  Attributes_tD47C14745EB853AB5A128A56544CF6C1BC670186 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRFaceMesh/Attributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Attributes_tD47C14745EB853AB5A128A56544CF6C1BC670186, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider
struct  Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7  : public SubsystemProvider_1_t23EADEE126E953AEBF796C02B50539998EA56B78
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::m_RequestedMaximumFaceCount
	int32_t ___m_RequestedMaximumFaceCount_1;

public:
	inline static int32_t get_offset_of_m_RequestedMaximumFaceCount_1() { return static_cast<int32_t>(offsetof(Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7, ___m_RequestedMaximumFaceCount_1)); }
	inline int32_t get_m_RequestedMaximumFaceCount_1() const { return ___m_RequestedMaximumFaceCount_1; }
	inline int32_t* get_address_of_m_RequestedMaximumFaceCount_1() { return &___m_RequestedMaximumFaceCount_1; }
	inline void set_m_RequestedMaximumFaceCount_1(int32_t value)
	{
		___m_RequestedMaximumFaceCount_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider
struct  Provider_t055C90C34B2BCE8D134DF44C12823E320519168C  : public SubsystemProvider_1_tBF37BFFB47314B7D87E24F4C4903C90930C0302C
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct  Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E  : public SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct  Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E  : public SubsystemProvider_1_t71FE677A1A2F32123FE4C7868D5943892028AE12
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider
struct  Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB  : public SubsystemProvider_1_t57D5C398A7A30AC3C3674CA126FAE612BC00F597
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider
struct  Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E  : public SubsystemProvider_1_t3D6D4D936F16F3264F75D1BAB46A4A398F18F204
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities
struct  Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct  Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct  Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227  : public SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider
struct  Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C  : public SubsystemProvider_1_tA41ABDAA9644A18E81CC750DE7DDEA8EB6088742
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct  Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A  : public SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo
struct  Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::m_DataPtr
	intptr_t ___m_DataPtr_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::m_DataLength
	int32_t ___m_DataLength_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::m_RowStride
	int32_t ___m_RowStride_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::m_PixelStride
	int32_t ___m_PixelStride_3;

public:
	inline static int32_t get_offset_of_m_DataPtr_0() { return static_cast<int32_t>(offsetof(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC, ___m_DataPtr_0)); }
	inline intptr_t get_m_DataPtr_0() const { return ___m_DataPtr_0; }
	inline intptr_t* get_address_of_m_DataPtr_0() { return &___m_DataPtr_0; }
	inline void set_m_DataPtr_0(intptr_t value)
	{
		___m_DataPtr_0 = value;
	}

	inline static int32_t get_offset_of_m_DataLength_1() { return static_cast<int32_t>(offsetof(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC, ___m_DataLength_1)); }
	inline int32_t get_m_DataLength_1() const { return ___m_DataLength_1; }
	inline int32_t* get_address_of_m_DataLength_1() { return &___m_DataLength_1; }
	inline void set_m_DataLength_1(int32_t value)
	{
		___m_DataLength_1 = value;
	}

	inline static int32_t get_offset_of_m_RowStride_2() { return static_cast<int32_t>(offsetof(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC, ___m_RowStride_2)); }
	inline int32_t get_m_RowStride_2() const { return ___m_RowStride_2; }
	inline int32_t* get_address_of_m_RowStride_2() { return &___m_RowStride_2; }
	inline void set_m_RowStride_2(int32_t value)
	{
		___m_RowStride_2 = value;
	}

	inline static int32_t get_offset_of_m_PixelStride_3() { return static_cast<int32_t>(offsetof(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC, ___m_PixelStride_3)); }
	inline int32_t get_m_PixelStride_3() const { return ___m_PixelStride_3; }
	inline int32_t* get_address_of_m_PixelStride_3() { return &___m_PixelStride_3; }
	inline void set_m_PixelStride_3(int32_t value)
	{
		___m_PixelStride_3 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct  NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct  NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>
struct  NativeArray_1_t7946EB09CA991D07040F6E500BA5CA3CECED5E52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7946EB09CA991D07040F6E500BA5CA3CECED5E52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7946EB09CA991D07040F6E500BA5CA3CECED5E52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7946EB09CA991D07040F6E500BA5CA3CECED5E52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct  NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct  NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct  Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct  Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct  ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage
struct  XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage::m_Api
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::<dimensions>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CdimensionsU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::<planeCount>k__BackingField
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_5;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::<timestamp>k__BackingField
	double ___U3CtimestampU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_NativeHandle_0() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___m_NativeHandle_0)); }
	inline int32_t get_m_NativeHandle_0() const { return ___m_NativeHandle_0; }
	inline int32_t* get_address_of_m_NativeHandle_0() { return &___m_NativeHandle_0; }
	inline void set_m_NativeHandle_0(int32_t value)
	{
		___m_NativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_Api_1() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___m_Api_1)); }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * get_m_Api_1() const { return ___m_Api_1; }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E ** get_address_of_m_Api_1() { return &___m_Api_1; }
	inline void set_m_Api_1(Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * value)
	{
		___m_Api_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Api_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdimensionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CdimensionsU3Ek__BackingField_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3CdimensionsU3Ek__BackingField_3() const { return ___U3CdimensionsU3Ek__BackingField_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3CdimensionsU3Ek__BackingField_3() { return &___U3CdimensionsU3Ek__BackingField_3; }
	inline void set_U3CdimensionsU3Ek__BackingField_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3CdimensionsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CplaneCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CplaneCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CplaneCountU3Ek__BackingField_4() const { return ___U3CplaneCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CplaneCountU3Ek__BackingField_4() { return &___U3CplaneCountU3Ek__BackingField_4; }
	inline void set_U3CplaneCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CplaneCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CformatU3Ek__BackingField_5)); }
	inline int32_t get_U3CformatU3Ek__BackingField_5() const { return ___U3CformatU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CformatU3Ek__BackingField_5() { return &___U3CformatU3Ek__BackingField_5; }
	inline void set_U3CformatU3Ek__BackingField_5(int32_t value)
	{
		___U3CformatU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CtimestampU3Ek__BackingField_6)); }
	inline double get_U3CtimestampU3Ek__BackingField_6() const { return ___U3CtimestampU3Ek__BackingField_6; }
	inline double* get_address_of_U3CtimestampU3Ek__BackingField_6() { return &___U3CtimestampU3Ek__BackingField_6; }
	inline void set_U3CtimestampU3Ek__BackingField_6(double value)
	{
		___U3CtimestampU3Ek__BackingField_6 = value;
	}
};

struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate UnityEngine.XR.ARSubsystems.XRCpuImage::s_OnAsyncConversionCompleteDelegate
	OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * ___s_OnAsyncConversionCompleteDelegate_2;

public:
	inline static int32_t get_offset_of_s_OnAsyncConversionCompleteDelegate_2() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_StaticFields, ___s_OnAsyncConversionCompleteDelegate_2)); }
	inline OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * get_s_OnAsyncConversionCompleteDelegate_2() const { return ___s_OnAsyncConversionCompleteDelegate_2; }
	inline OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD ** get_address_of_s_OnAsyncConversionCompleteDelegate_2() { return &___s_OnAsyncConversionCompleteDelegate_2; }
	inline void set_s_OnAsyncConversionCompleteDelegate_2(OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * value)
	{
		___s_OnAsyncConversionCompleteDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncConversionCompleteDelegate_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_marshaled_pinvoke
{
	int32_t ___m_NativeHandle_0;
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_marshaled_com
{
	int32_t ___m_NativeHandle_0;
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRRaycast
struct  XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_HitTrackableId_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_HitTrackableId_6() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_HitTrackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_HitTrackableId_6() const { return ___m_HitTrackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_HitTrackableId_6() { return &___m_HitTrackableId_6; }
	inline void set_m_HitTrackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_HitTrackableId_6 = value;
	}
};

struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields, ___s_Default_0)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct  XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct  XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields, ___s_Default_0)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_s_Default_0() const { return ___s_Default_0; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct  XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo
struct  Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_Dimensions
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Dimensions_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_PlaneCount
	int32_t ___m_PlaneCount_2;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_Timestamp
	double ___m_Timestamp_3;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_Format
	int32_t ___m_Format_4;

public:
	inline static int32_t get_offset_of_m_NativeHandle_0() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_NativeHandle_0)); }
	inline int32_t get_m_NativeHandle_0() const { return ___m_NativeHandle_0; }
	inline int32_t* get_address_of_m_NativeHandle_0() { return &___m_NativeHandle_0; }
	inline void set_m_NativeHandle_0(int32_t value)
	{
		___m_NativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_Dimensions_1() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_Dimensions_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Dimensions_1() const { return ___m_Dimensions_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Dimensions_1() { return &___m_Dimensions_1; }
	inline void set_m_Dimensions_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Dimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_PlaneCount_2() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_PlaneCount_2)); }
	inline int32_t get_m_PlaneCount_2() const { return ___m_PlaneCount_2; }
	inline int32_t* get_address_of_m_PlaneCount_2() { return &___m_PlaneCount_2; }
	inline void set_m_PlaneCount_2(int32_t value)
	{
		___m_PlaneCount_2 = value;
	}

	inline static int32_t get_offset_of_m_Timestamp_3() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_Timestamp_3)); }
	inline double get_m_Timestamp_3() const { return ___m_Timestamp_3; }
	inline double* get_address_of_m_Timestamp_3() { return &___m_Timestamp_3; }
	inline void set_m_Timestamp_3(double value)
	{
		___m_Timestamp_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct  ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A 
{
public:
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;

public:
	inline static int32_t get_offset_of_m_InputRect_0() { return static_cast<int32_t>(offsetof(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A, ___m_InputRect_0)); }
	inline RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  get_m_InputRect_0() const { return ___m_InputRect_0; }
	inline RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * get_address_of_m_InputRect_0() { return &___m_InputRect_0; }
	inline void set_m_InputRect_0(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  value)
	{
		___m_InputRect_0 = value;
	}

	inline static int32_t get_offset_of_m_OutputDimensions_1() { return static_cast<int32_t>(offsetof(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A, ___m_OutputDimensions_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_OutputDimensions_1() const { return ___m_OutputDimensions_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_OutputDimensions_1() { return &___m_OutputDimensions_1; }
	inline void set_m_OutputDimensions_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_OutputDimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_Format_2() { return static_cast<int32_t>(offsetof(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A, ___m_Format_2)); }
	inline int32_t get_m_Format_2() const { return ___m_Format_2; }
	inline int32_t* get_address_of_m_Format_2() { return &___m_Format_2; }
	inline void set_m_Format_2(int32_t value)
	{
		___m_Format_2 = value;
	}

	inline static int32_t get_offset_of_m_Transformation_3() { return static_cast<int32_t>(offsetof(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A, ___m_Transformation_3)); }
	inline int32_t get_m_Transformation_3() const { return ___m_Transformation_3; }
	inline int32_t* get_address_of_m_Transformation_3() { return &___m_Transformation_3; }
	inline void set_m_Transformation_3(int32_t value)
	{
		___m_Transformation_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct  Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::id
	String_t* ___id_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::implementationType
	Type_t * ___implementationType_3;
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_implementationType_3() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___implementationType_3)); }
	inline Type_t * get_implementationType_3() const { return ___implementationType_3; }
	inline Type_t ** get_address_of_implementationType_3() { return &___implementationType_3; }
	inline void set_implementationType_3(Type_t * value)
	{
		___implementationType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementationType_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CcapabilitiesU3Ek__BackingField_4)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_4() const { return ___U3CcapabilitiesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_4() { return &___U3CcapabilitiesU3Ek__BackingField_4; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_4(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke
{
	char* ___id_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___implementationType_3;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com
{
	Il2CppChar* ___id_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___implementationType_3;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct  Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportedTrackableTypesU3Ek__BackingField_6)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_6() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_6() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_6; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_6(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() const { return ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() { return &___U3CsupportsTrackedRaycastsU3Ek__BackingField_7; }
	inline void set_U3CsupportsTrackedRaycastsU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct  TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Added_1)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Updated_2)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.Configuration
struct  Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 
{
public:
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdescriptorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CdescriptorU3Ek__BackingField_0)); }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  get_U3CdescriptorU3Ek__BackingField_0() const { return ___U3CdescriptorU3Ek__BackingField_0; }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * get_address_of_U3CdescriptorU3Ek__BackingField_0() { return &___U3CdescriptorU3Ek__BackingField_0; }
	inline void set_U3CdescriptorU3Ek__BackingField_0(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  value)
	{
		___U3CdescriptorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CfeaturesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CfeaturesU3Ek__BackingField_1)); }
	inline uint64_t get_U3CfeaturesU3Ek__BackingField_1() const { return ___U3CfeaturesU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CfeaturesU3Ek__BackingField_1() { return &___U3CfeaturesU3Ek__BackingField_1; }
	inline void set_U3CfeaturesU3Ek__BackingField_1(uint64_t value)
	{
		___U3CfeaturesU3Ek__BackingField_1 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct  XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Scale_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_2() const { return ___m_Scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_2() { return &___m_Scale_2; }
	inline void set_m_Scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Size_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TextureDescriptor_5)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_TextureDescriptor_5() const { return ___m_TextureDescriptor_5; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_TextureDescriptor_5() { return &___m_TextureDescriptor_5; }
	inline void set_m_TextureDescriptor_5(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_TextureDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};

struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields, ___s_Default_0)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_s_Default_0() const { return ___s_Default_0; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct  XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_UVs_3;

public:
	inline static int32_t get_offset_of_m_Vertices_0() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Vertices_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Vertices_0() const { return ___m_Vertices_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Vertices_0() { return &___m_Vertices_0; }
	inline void set_m_Vertices_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Vertices_0 = value;
	}

	inline static int32_t get_offset_of_m_Normals_1() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Normals_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Normals_1() const { return ___m_Normals_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Normals_1() { return &___m_Normals_1; }
	inline void set_m_Normals_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Normals_1 = value;
	}

	inline static int32_t get_offset_of_m_Indices_2() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Indices_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Indices_2() const { return ___m_Indices_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Indices_2() { return &___m_Indices_2; }
	inline void set_m_Indices_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Indices_2 = value;
	}

	inline static int32_t get_offset_of_m_UVs_3() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_UVs_3)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_UVs_3() const { return ___m_UVs_3; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_UVs_3() { return &___m_UVs_3; }
	inline void set_m_UVs_3(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_UVs_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct  XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject> UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_ReferenceObjects
	List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B * ___m_ReferenceObjects_6;

public:
	inline static int32_t get_offset_of_m_GuidLow_4() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C, ___m_GuidLow_4)); }
	inline uint64_t get_m_GuidLow_4() const { return ___m_GuidLow_4; }
	inline uint64_t* get_address_of_m_GuidLow_4() { return &___m_GuidLow_4; }
	inline void set_m_GuidLow_4(uint64_t value)
	{
		___m_GuidLow_4 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_5() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C, ___m_GuidHigh_5)); }
	inline uint64_t get_m_GuidHigh_5() const { return ___m_GuidHigh_5; }
	inline uint64_t* get_address_of_m_GuidHigh_5() { return &___m_GuidHigh_5; }
	inline void set_m_GuidHigh_5(uint64_t value)
	{
		___m_GuidHigh_5 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjects_6() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C, ___m_ReferenceObjects_6)); }
	inline List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B * get_m_ReferenceObjects_6() const { return ___m_ReferenceObjects_6; }
	inline List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B ** get_address_of_m_ReferenceObjects_6() { return &___m_ReferenceObjects_6; }
	inline void set_m_ReferenceObjects_6(List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B * value)
	{
		___m_ReferenceObjects_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReferenceObjects_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct  AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 
{
public:
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_Api
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_RequestId
	int32_t ___m_RequestId_1;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::<conversionParams>k__BackingField
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___U3CconversionParamsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Api_0() { return static_cast<int32_t>(offsetof(AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787, ___m_Api_0)); }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * get_m_Api_0() const { return ___m_Api_0; }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E ** get_address_of_m_Api_0() { return &___m_Api_0; }
	inline void set_m_Api_0(Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * value)
	{
		___m_Api_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Api_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequestId_1() { return static_cast<int32_t>(offsetof(AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787, ___m_RequestId_1)); }
	inline int32_t get_m_RequestId_1() const { return ___m_RequestId_1; }
	inline int32_t* get_address_of_m_RequestId_1() { return &___m_RequestId_1; }
	inline void set_m_RequestId_1(int32_t value)
	{
		___m_RequestId_1 = value;
	}

	inline static int32_t get_offset_of_U3CconversionParamsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787, ___U3CconversionParamsU3Ek__BackingField_2)); }
	inline ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  get_U3CconversionParamsU3Ek__BackingField_2() const { return ___U3CconversionParamsU3Ek__BackingField_2; }
	inline ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * get_address_of_U3CconversionParamsU3Ek__BackingField_2() { return &___U3CconversionParamsU3Ek__BackingField_2; }
	inline void set_U3CconversionParamsU3Ek__BackingField_2(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  value)
	{
		___U3CconversionParamsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshaled_pinvoke
{
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshaled_com
{
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___U3CconversionParamsU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Plane
struct  Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::<rowStride>k__BackingField
	int32_t ___U3CrowStrideU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::<pixelStride>k__BackingField
	int32_t ___U3CpixelStrideU3Ek__BackingField_1;
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::<data>k__BackingField
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___U3CdataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CrowStrideU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D, ___U3CrowStrideU3Ek__BackingField_0)); }
	inline int32_t get_U3CrowStrideU3Ek__BackingField_0() const { return ___U3CrowStrideU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CrowStrideU3Ek__BackingField_0() { return &___U3CrowStrideU3Ek__BackingField_0; }
	inline void set_U3CrowStrideU3Ek__BackingField_0(int32_t value)
	{
		___U3CrowStrideU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpixelStrideU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D, ___U3CpixelStrideU3Ek__BackingField_1)); }
	inline int32_t get_U3CpixelStrideU3Ek__BackingField_1() const { return ___U3CpixelStrideU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpixelStrideU3Ek__BackingField_1() { return &___U3CpixelStrideU3Ek__BackingField_1; }
	inline void set_U3CpixelStrideU3Ek__BackingField_1(int32_t value)
	{
		___U3CpixelStrideU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D, ___U3CdataU3Ek__BackingField_2)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_U3CdataU3Ek__BackingField_2() const { return ___U3CdataU3Ek__BackingField_2; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_U3CdataU3Ek__BackingField_2() { return &___U3CdataU3Ek__BackingField_2; }
	inline void set_U3CdataU3Ek__BackingField_2(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___U3CdataU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct  OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 Unity.Collections.NativeArray`1<System.Byte>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_m13D81A3581866C33D8C9B13443F7342C9105EF98_gshared (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::Equals(Unity.Collections.NativeArray`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m43936EB3E883A2A3F3A649C6435CC70B4DD96BB8_gshared (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * __this, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared (SubsystemProvider_1_tB5A0B737E782053A89719964DAF99F32E5CBFC46 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A_gshared (NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB * Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared (int32_t ___result0, const RuntimeMethod* method);

// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::get_conversionParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  AsyncConversion_get_conversionParams_mC12D99AB4A6B93A6B0C5D40611EE0F93DE19B3B1_inline (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::set_conversionParams(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncConversion_set_conversionParams_mF6BE9EBE867D706FCFF2E685319900E67A9BE417_inline (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_get_status_m9B8B70077508906C1E2CD0C923D5044A406338D7 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::.ctor(UnityEngine.XR.ARSubsystems.XRCpuImage/Api,System.Int32,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncConversion__ctor_m71110DCFDE2168CBDAB694C4651F7F7B67597D59 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___api0, int32_t ___nativeHandle1, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncConversion_Dispose_m3FB7972B55157146E43B643BCD7126F33C05A955 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConversionParams_GetHashCode_m317F3CF69F015FD4012B668A3195A50E8C18F436 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m18C3D10955CD71D976A5200FB0F5531F2F1F6BE1 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_GetHashCode_m380EF542235E7794BFB6F83DE386BDD716F3F2A2 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncConversion_Equals_m16DA460552D530D0158D1373CE6C9F7BB6AEC83A (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncConversion_Equals_m9C667BC8AA68D06B75A1B6896CE690B8CD3D32E3 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionParams_Equals_m428ABCB343F2D25BEC8C48C064A607C19D4C6B4F (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___other0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncConversion_ToString_m27DE74982484BBCBF155D15639CD98393FD23CE5 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_nativeHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_nativeHandle_mAB50E5453B3ED928372EC45DF5E0F4E2ADF341BC_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_dimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Cinfo_get_dimensions_mA8AFF01543915A325187A41369F6DA11231A3E50_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_planeCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_planeCount_m88E3C67F9E06017A46B7FF90368B24A6F48E1271_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Cinfo_get_timestamp_mAF782E097B2324BD673D8D98C68CA2D6CA4891EF_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_format_m42CBF60A496CB04541CC04C97E1745AFBC7259BD_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::.ctor(System.Int32,UnityEngine.Vector2Int,System.Int32,System.Double,UnityEngine.XR.ARSubsystems.XRCpuImage/Format)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo__ctor_mAC48019C57DEB4DB94CF39A495A0B79CED3127D2 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, int32_t ___nativeHandle0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___dimensions1, int32_t ___planeCount2, double ___timestamp3, int32_t ___format4, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B (double* __this, double ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m52B0C058E8FB2AB4089B91E1EDD0DFD2F9F22642 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8140023C141235A77C2153E9A8B54E5356EC6C6F (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo,UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m96BE41F735C6403E131A958F9AAF17DE643E3550 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  ___lhs0, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39 (double* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m02E9A65274F198CF9266FDB496C74880155F9B94 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m7AB2284B6770F059F37B7A7EB61C075F472BAE65 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m4923B9CB2748C5E7CCAA6C817F47976B1E4B2FE1 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method);
// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_inputRect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_inputRect(UnityEngine.RectInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m73F6338FDA97617E73EEB513E662B6F1C472352A_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ConversionParams_get_outputDimensions_m83C9D960C805CA2748AA9AAAC2A2986A397B7033_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputDimensions(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_mD66BE3ACB6EF977C8C95836F6BD48635316F4CA9_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m727E479981BF00635D645C88D4D987EB598A0E5F_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputFormat(UnityEngine.TextureFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mF24CF134EAF9AD891912C785CF3A6C14297F543C_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_transformation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_transformation_mFB57F05831CF417808A6C41F170768D9F66A7EF3_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_transformation(UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_m0FFF10EB0BB1E28AACC097D166FA223B560E8E79_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_width_m8DE20D99BCFA242F105F3B39AD68D398F3C2B4CE (XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_height_m7BB3967EC96DB5EEF99E0935E5AA1DFB991D7ADD (XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectInt::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m53209E2851578015083B4DEF8354AB38EAD4C553 (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::.ctor(UnityEngine.XR.ARSubsystems.XRCpuImage,UnityEngine.TextureFormat,UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionParams__ctor_m52274F8015B2BC4B13444E8328C7A5126DC1E24B (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE  ___image0, int32_t ___format1, int32_t ___transformation2, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectInt::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m7C3DBF05BE2DC727635FC9D7C778EACF0A9E4085 (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectInt::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_height_m5CCF18289CB154C1709AE02AA6375093ECA07DBC (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectInt::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_x_m2D7412BC4EE7871D19042F469D6C573016E39F79 (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectInt::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_y_mAEB15FA1B7CCD08DA9FCB978EE0BA45D6BB9FE33 (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_mCF5A2D8E169AE770B379DCD8DE5229296453BD82 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectInt::Equals(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectInt_Equals_mAF3A442FB55544FF362006EDB9B2F225D32BDF6D (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * __this, RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionParams_Equals_m9170E22223AA2514E0EAA66A74375460210EC11B (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConversionParams_ToString_mB2F109D1B691D862EC98C1C9058F78C58CE832D3 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::get_rowStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::set_rowStride(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plane_set_rowStride_mDA36D4459E3B9E2A8B34D8363A0F4A4C11422E55_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::get_pixelStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::set_pixelStride(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plane_set_pixelStride_mB70EF0731AC41B2B820885A33DC8DCD94FB5847E_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, int32_t ___value0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::get_data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::set_data(Unity.Collections.NativeArray`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plane_set_data_m2A4446744978FF53B38A650E3E053663008A4393_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::.ctor(System.Int32,System.Int32,Unity.Collections.NativeArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m577FCBC19C5EE815AB834B493DCC4B29F7BBF63F (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, int32_t ___rowStride0, int32_t ___pixelStride1, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___data2, const RuntimeMethod* method);
// System.Int32 Unity.Collections.NativeArray`1<System.Byte>::GetHashCode()
inline int32_t NativeArray_1_GetHashCode_m13D81A3581866C33D8C9B13443F7342C9105EF98 (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 *, const RuntimeMethod*))NativeArray_1_GetHashCode_m13D81A3581866C33D8C9B13443F7342C9105EF98_gshared)(__this, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plane_GetHashCode_mE6FB9627754D042BCE94DA2672023FE03BE24C81 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Equals_mE56ABB7E1AE23CED9290A64F4B80D2FDC95AA7F6 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Equals_mAAF552DA4142C484FFEBA4C30EC7F14111523D68 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::Equals(Unity.Collections.NativeArray`1<!0>)
inline bool NativeArray_1_Equals_m43936EB3E883A2A3F3A649C6435CC70B4DD96BB8 (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * __this, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 *, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 , const RuntimeMethod*))NativeArray_1_Equals_m43936EB3E883A2A3F3A649C6435CC70B4DD96BB8_gshared)(__this, ___other0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Plane_ToString_mDCB0EECF9BB9652F5E5BA2B36F51F1E4CF334238 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m679358E7941E7FEBDCED0CC52E860E237B09BDE0 (SubsystemProvider_1_tBB539901FE99992CAA10A1EFDFA610E048498E98 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tBB539901FE99992CAA10A1EFDFA610E048498E98 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m7168F2BEAB1E7D53C4A1308A0BE686CB6ACAC37D_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mA17A612B4FB9125843E254DB825177C3B1834235_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_capabilities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsFeaturePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_capabilities(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsUniqueIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m987248264A49939ACFFFF0D50F3AAAE526E80B67 (SubsystemProvider_1_tC3DB99A11F9F3210CE2ABA9FE09C127C5B13FF80 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tC3DB99A11F9F3210CE2ABA9FE09C127C5B13FF80 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Dispose_m84478F08EEB3D131E0E7785CF4195D424B94543E (XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m775D1DA5795E95D8D1220715C2B041DB989B9B02 (SubsystemProvider_1_t23EADEE126E953AEBF796C02B50539998EA56B78 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t23EADEE126E953AEBF796C02B50539998EA56B78 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m756AF5A05933094284FE3141F40DBAE7DBAE8FE1 (SubsystemProvider_1_tBF37BFFB47314B7D87E24F4C4903C90930C0302C * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tBF37BFFB47314B7D87E24F4C4903C90930C0302C *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_mC4C72A59ABE142F4F35FE24EFAF666ACF8450690 (SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m865B26BBCBE9E542D09269A2CA6BD1FC47976AF2_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m0008239CE298C4881102FED287EC52224601A3A5_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsMovingImages()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_requiresPhysicalImageDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsMutableLibrary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMutableLibrary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsImageValidation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsImageValidation_m417DC16FCA795DB24C8CAA2C81A5E84855D077BD_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsImageValidation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsImageValidation_m9CA1173736665E4DC3B594EE3357416A8A20B266_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m3216193D514525815B1785B92B434D1CB6BED267 (SubsystemProvider_1_t71FE677A1A2F32123FE4C7868D5943892028AE12 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t71FE677A1A2F32123FE4C7868D5943892028AE12 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities::Equals(UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Capabilities_Equals_m921C39E9F8B9A589D30635AF4D55428F9A48E9F7 (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * __this, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Capabilities_Equals_mBC54D72E0218CDA4D42F66F1B93C98E3FCC6F509 (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Capabilities_GetHashCode_m2CC9C750B6796CBBC10A34C6E42040FCF9626FBF (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.SegmentationStencilModeExtension::Enabled(UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SegmentationStencilModeExtension_Enabled_m8C420BAE2C6604ADCAD803BA36C2C78954B5F71E (int32_t ___segmentationStencilMode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.SegmentationDepthModeExtension::Enabled(UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SegmentationDepthModeExtension_Enabled_m3934709EF5C4CCD661E0188C103280BD96F1D9C6 (int32_t ___segmentationDepthMode0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A (NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m85B436C396E4816D5D62F8595921E532535FA734 (SubsystemProvider_1_t57D5C398A7A30AC3C3674CA126FAE612BC00F597 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t57D5C398A7A30AC3C3674CA126FAE612BC00F597 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m83A2BF40051F2545CECFD837C92DF3AB37758AFA (SubsystemProvider_1_t3D6D4D936F16F3264F75D1BAB46A4A398F18F204 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t3D6D4D936F16F3264F75D1BAB46A4A398F18F204 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF (SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0_inline (const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF (SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m23E4B1C1DC69FC295EAA04B5AC0ABB8BE40ABC9F (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, int32_t ___hash76, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m0FD1F0E44A64E3599BEF42CBF87EB8BA51597EB4 (SubsystemProvider_1_tA41ABDAA9644A18E81CC750DE7DDEA8EB6088742 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tA41ABDAA9644A18E81CC750DE7DDEA8EB6088742 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_mED080A0CEFDE276C713667401E6CA5453FEE8230_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m333CA07F707762A80009E7CD6F5B51CEDE3ACC26_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m27397B992B7536A3F1B81CB27B0EEE4C86AD7791_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m1990BD9DB431745135B04665C4A4DB2A23E142D6_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared)(___result0, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>::CreateResolvedPromise(T)
inline Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88 * Promise_1_CreateResolvedPromise_m1C9702FA1520BB681C0979C7264DA107FC2AD627 (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared)(___result0, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66 (SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_dataPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_dataLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_rowStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_pixelStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::.ctor(System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo__ctor_m9436263326B20757A7D96BD40729B913FB8B223F (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, intptr_t ___dataPtr0, int32_t ___dataLength1, int32_t ___rowStride2, int32_t ___pixelStride3, const RuntimeMethod* method);
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0 (intptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m3D18D26EAA0FED30423B3C8B38961816A1472F62 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo,UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m11FC127FB9F71441C941022E6580542FE5B2B6A1 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___lhs0, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___rhs1, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mC3F4D4AA0494F15A8E0B0F765FA005C1A574CCCF (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A (intptr_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m4D93FD001F1E9EC984CBFB7997FE480E212F83DF (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::TryGetPlane(System.Int32,System.Int32,UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_TryGetPlane_m9EDAE9347615522A0C95F387DF4D274D655090A8 (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___nativeHandle0, int32_t ___planeIndex1, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * ___planeCinfo2, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_TryGetPlane_m9EDAE9347615522A0C95F387DF4D274D655090A8_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::TryGetConvertedDataSize(System.Int32,UnityEngine.Vector2Int,UnityEngine.TextureFormat,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_TryGetConvertedDataSize_m50DDC92171F520516E21205E3817BEE0D51A9A51 (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___nativeHandle0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___dimensions1, int32_t ___format2, int32_t* ___size3, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("Camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3B3C6EBFEA166D20BF43554ADFEFAB3308E3F3E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_TryGetConvertedDataSize_m50DDC92171F520516E21205E3817BEE0D51A9A51_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::TryConvert(System.Int32,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_TryConvert_m2FB4CAC6639BE6EDDD65D74A3C296C9A72C1E6FD (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___nativeHandle0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams1, intptr_t ___destinationBuffer2, int32_t ___bufferLength3, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_TryConvert_m2FB4CAC6639BE6EDDD65D74A3C296C9A72C1E6FD_RuntimeMethod_var)));
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Api::ConvertAsync(System.Int32,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Api_ConvertAsync_m7D88B9B493A448A03FBED33FE2C675805A2417F0 (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___nativeHandle0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams1, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_ConvertAsync_m7D88B9B493A448A03FBED33FE2C675805A2417F0_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::NativeHandleValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_NativeHandleValid_m25628942A0D2320EAB96887219972ED8257FC858 (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_NativeHandleValid_m25628942A0D2320EAB96887219972ED8257FC858_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::TryGetAsyncRequestData(System.Int32,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_TryGetAsyncRequestData_mCEB60B8F55366677F05AAF1651F46C4B28AFAEA3 (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___requestId0, intptr_t* ___dataPtr1, int32_t* ___dataLength2, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_TryGetAsyncRequestData_mCEB60B8F55366677F05AAF1651F46C4B28AFAEA3_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api::ConvertAsync(System.Int32,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ConvertAsync_mE9BFD28B9BC1C3A063FC0B84B014B3538A155E99 (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___nativeHandle0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams1, OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * ___callback2, intptr_t ___context3, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_ConvertAsync_mE9BFD28B9BC1C3A063FC0B84B014B3538A155E99_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api::DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_DisposeImage_m6AEAAF9EF11D19294B441CF6DBB8FEDD58933989 (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_DisposeImage_m6AEAAF9EF11D19294B441CF6DBB8FEDD58933989_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api::DisposeAsyncRequest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_DisposeAsyncRequest_m06C972C865763DF2DE877124295F4A48B0574ABE (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_DisposeAsyncRequest_m06C972C865763DF2DE877124295F4A48B0574ABE_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus UnityEngine.XR.ARSubsystems.XRCpuImage/Api::GetAsyncRequestStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Api_GetAsyncRequestStatus_m920A8C2BA437BF3581A737DE8AF350094577300B (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, int32_t ___requestId0, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("camera image conversion is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50462E987F01EE38DE56F70AE720A4C4512F3F59)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Api_GetAsyncRequestStatus_m920A8C2BA437BF3581A737DE8AF350094577300B_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::FormatSupported(UnityEngine.XR.ARSubsystems.XRCpuImage,UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_FormatSupported_mD53B1C7B2A9D9D49ADDCE94794198C5A0FB64828 (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE  ___image0, int32_t ___format1, const RuntimeMethod* method)
{
	{
		// public virtual bool FormatSupported(XRCpuImage image, TextureFormat format) => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api__ctor_mEC96F88C341E160F9DDE41F5FA275DFAFF8522BA (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
IL2CPP_EXTERN_C void AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshal_pinvoke(const AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787& unmarshaled, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Api_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Api' of type 'AsyncConversion': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Api_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshal_pinvoke_back(const AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshaled_pinvoke& marshaled, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787& unmarshaled)
{
	Exception_t* ___m_Api_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Api' of type 'AsyncConversion': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Api_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
IL2CPP_EXTERN_C void AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshal_pinvoke_cleanup(AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
IL2CPP_EXTERN_C void AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshal_com(const AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787& unmarshaled, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshaled_com& marshaled)
{
	Exception_t* ___m_Api_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Api' of type 'AsyncConversion': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Api_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshal_com_back(const AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshaled_com& marshaled, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787& unmarshaled)
{
	Exception_t* ___m_Api_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Api' of type 'AsyncConversion': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Api_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
IL2CPP_EXTERN_C void AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshal_com_cleanup(AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_marshaled_com& marshaled)
{
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::get_conversionParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  AsyncConversion_get_conversionParams_mC12D99AB4A6B93A6B0C5D40611EE0F93DE19B3B1 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method)
{
	{
		// public ConversionParams conversionParams { get; private set; }
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_0 = __this->get_U3CconversionParamsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  AsyncConversion_get_conversionParams_mC12D99AB4A6B93A6B0C5D40611EE0F93DE19B3B1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * _thisAdjusted = reinterpret_cast<AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *>(__this + _offset);
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  _returnValue;
	_returnValue = AsyncConversion_get_conversionParams_mC12D99AB4A6B93A6B0C5D40611EE0F93DE19B3B1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::set_conversionParams(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncConversion_set_conversionParams_mF6BE9EBE867D706FCFF2E685319900E67A9BE417 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___value0, const RuntimeMethod* method)
{
	{
		// public ConversionParams conversionParams { get; private set; }
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_0 = ___value0;
		__this->set_U3CconversionParamsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncConversion_set_conversionParams_mF6BE9EBE867D706FCFF2E685319900E67A9BE417_AdjustorThunk (RuntimeObject * __this, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * _thisAdjusted = reinterpret_cast<AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *>(__this + _offset);
	AsyncConversion_set_conversionParams_mF6BE9EBE867D706FCFF2E685319900E67A9BE417_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_get_status_m9B8B70077508906C1E2CD0C923D5044A406338D7 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method)
{
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * G_B2_0 = NULL;
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * G_B1_0 = NULL;
	{
		// public AsyncConversionStatus status => m_Api?.GetAsyncRequestStatus(m_RequestId) ?? AsyncConversionStatus.Disposed;
		Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * L_0 = __this->get_m_Api_0();
		Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000c:
	{
		int32_t L_2 = __this->get_m_RequestId_1();
		NullCheck(G_B2_0);
		int32_t L_3;
		L_3 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(13 /* UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus UnityEngine.XR.ARSubsystems.XRCpuImage/Api::GetAsyncRequestStatus(System.Int32) */, G_B2_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncConversion_get_status_m9B8B70077508906C1E2CD0C923D5044A406338D7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * _thisAdjusted = reinterpret_cast<AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AsyncConversion_get_status_m9B8B70077508906C1E2CD0C923D5044A406338D7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::.ctor(UnityEngine.XR.ARSubsystems.XRCpuImage/Api,System.Int32,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncConversion__ctor_m71110DCFDE2168CBDAB694C4651F7F7B67597D59 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___api0, int32_t ___nativeHandle1, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams2, const RuntimeMethod* method)
{
	{
		// m_Api = api;
		Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * L_0 = ___api0;
		__this->set_m_Api_0(L_0);
		// m_RequestId = m_Api.ConvertAsync(nativeHandle, conversionParams);
		Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * L_1 = __this->get_m_Api_0();
		int32_t L_2 = ___nativeHandle1;
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_3 = ___conversionParams2;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  >::Invoke(7 /* System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Api::ConvertAsync(System.Int32,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams) */, L_1, L_2, L_3);
		__this->set_m_RequestId_1(L_4);
		// this.conversionParams = conversionParams;
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_5 = ___conversionParams2;
		AsyncConversion_set_conversionParams_mF6BE9EBE867D706FCFF2E685319900E67A9BE417_inline((AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncConversion__ctor_m71110DCFDE2168CBDAB694C4651F7F7B67597D59_AdjustorThunk (RuntimeObject * __this, Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___api0, int32_t ___nativeHandle1, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * _thisAdjusted = reinterpret_cast<AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *>(__this + _offset);
	AsyncConversion__ctor_m71110DCFDE2168CBDAB694C4651F7F7B67597D59(_thisAdjusted, ___api0, ___nativeHandle1, ___conversionParams2, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncConversion_Dispose_m3FB7972B55157146E43B643BCD7126F33C05A955 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Api == null || m_RequestId == 0)
		Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * L_0 = __this->get_m_Api_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = __this->get_m_RequestId_1();
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// m_Api.DisposeAsyncRequest(m_RequestId);
		Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * L_2 = __this->get_m_Api_0();
		int32_t L_3 = __this->get_m_RequestId_1();
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(12 /* System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api::DisposeAsyncRequest(System.Int32) */, L_2, L_3);
		// m_Api = null;
		__this->set_m_Api_0((Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E *)NULL);
		// m_RequestId = 0;
		__this->set_m_RequestId_1(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncConversion_Dispose_m3FB7972B55157146E43B643BCD7126F33C05A955_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * _thisAdjusted = reinterpret_cast<AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *>(__this + _offset);
	AsyncConversion_Dispose_m3FB7972B55157146E43B643BCD7126F33C05A955(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_GetHashCode_m380EF542235E7794BFB6F83DE386BDD716F3F2A2 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method)
{
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override int GetHashCode() => HashCode.Combine(
		//     conversionParams.GetHashCode(),
		//     m_RequestId.GetHashCode(),
		//     HashCode.ReferenceHash(m_Api));
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_0;
		L_0 = AsyncConversion_get_conversionParams_mC12D99AB4A6B93A6B0C5D40611EE0F93DE19B3B1_inline((AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = ConversionParams_GetHashCode_m317F3CF69F015FD4012B668A3195A50E8C18F436((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)(&V_0), /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of_m_RequestId_1();
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_2, /*hidden argument*/NULL);
		Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * L_4 = __this->get_m_Api_0();
		int32_t L_5;
		L_5 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = HashCode_Combine_m18C3D10955CD71D976A5200FB0F5531F2F1F6BE1(L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncConversion_GetHashCode_m380EF542235E7794BFB6F83DE386BDD716F3F2A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * _thisAdjusted = reinterpret_cast<AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AsyncConversion_GetHashCode_m380EF542235E7794BFB6F83DE386BDD716F3F2A2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncConversion_Equals_m9C667BC8AA68D06B75A1B6896CE690B8CD3D32E3 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((obj is AsyncConversion) && Equals((AsyncConversion)obj));
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = AsyncConversion_Equals_m16DA460552D530D0158D1373CE6C9F7BB6AEC83A((AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)__this, ((*(AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)((AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)UnBox(L_1, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AsyncConversion_Equals_m9C667BC8AA68D06B75A1B6896CE690B8CD3D32E3_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * _thisAdjusted = reinterpret_cast<AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncConversion_Equals_m9C667BC8AA68D06B75A1B6896CE690B8CD3D32E3(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncConversion_Equals_m16DA460552D530D0158D1373CE6C9F7BB6AEC83A (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  ___other0, const RuntimeMethod* method)
{
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return
		//     (conversionParams.Equals(other.conversionParams)) &&
		//     (m_RequestId == other.m_RequestId) &&
		//     (m_Api == other.m_Api);
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_0;
		L_0 = AsyncConversion_get_conversionParams_mC12D99AB4A6B93A6B0C5D40611EE0F93DE19B3B1_inline((AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_1;
		L_1 = AsyncConversion_get_conversionParams_mC12D99AB4A6B93A6B0C5D40611EE0F93DE19B3B1_inline((AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = ConversionParams_Equals_m428ABCB343F2D25BEC8C48C064A607C19D4C6B4F((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)(&V_0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->get_m_RequestId_1();
		AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  L_4 = ___other0;
		int32_t L_5 = L_4.get_m_RequestId_1();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * L_6 = __this->get_m_Api_0();
		AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  L_7 = ___other0;
		Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * L_8 = L_7.get_m_Api_0();
		return (bool)((((RuntimeObject*)(Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E *)L_6) == ((RuntimeObject*)(Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E *)L_8))? 1 : 0);
	}

IL_0034:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AsyncConversion_Equals_m16DA460552D530D0158D1373CE6C9F7BB6AEC83A_AdjustorThunk (RuntimeObject * __this, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * _thisAdjusted = reinterpret_cast<AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncConversion_Equals_m16DA460552D530D0158D1373CE6C9F7BB6AEC83A(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::op_Equality(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion,UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncConversion_op_Equality_m7148C332A919F24267EC801F3D8E0B9EC75C0A31 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  ___lhs0, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(AsyncConversion lhs, AsyncConversion rhs) => lhs.Equals(rhs);
		AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  L_0 = ___rhs1;
		bool L_1;
		L_1 = AsyncConversion_Equals_m16DA460552D530D0158D1373CE6C9F7BB6AEC83A((AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::op_Inequality(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion,UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncConversion_op_Inequality_m02EAE28BF4DE0E5E3F9A8D21C687095DDB2311EA (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  ___lhs0, AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(AsyncConversion lhs, AsyncConversion rhs) => !lhs.Equals(rhs);
		AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787  L_0 = ___rhs1;
		bool L_1;
		L_1 = AsyncConversion_Equals_m16DA460552D530D0158D1373CE6C9F7BB6AEC83A((AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncConversion_ToString_m27DE74982484BBCBF155D15639CD98393FD23CE5 (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D41B78B4DF75EAC7BE2FAA927008B4AB1767351);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"ConversionParams: {conversionParams}";
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_0;
		L_0 = AsyncConversion_get_conversionParams_mC12D99AB4A6B93A6B0C5D40611EE0F93DE19B3B1_inline((AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *)__this, /*hidden argument*/NULL);
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_1 = L_0;
		RuntimeObject * L_2 = Box(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral9D41B78B4DF75EAC7BE2FAA927008B4AB1767351, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* AsyncConversion_ToString_m27DE74982484BBCBF155D15639CD98393FD23CE5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * _thisAdjusted = reinterpret_cast<AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AsyncConversion_ToString_m27DE74982484BBCBF155D15639CD98393FD23CE5(_thisAdjusted, method);
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
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_nativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_nativeHandle_mAB50E5453B3ED928372EC45DF5E0F4E2ADF341BC (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public int nativeHandle => m_NativeHandle;
		int32_t L_0 = __this->get_m_NativeHandle_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_nativeHandle_mAB50E5453B3ED928372EC45DF5E0F4E2ADF341BC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_nativeHandle_mAB50E5453B3ED928372EC45DF5E0F4E2ADF341BC_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_dimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Cinfo_get_dimensions_mA8AFF01543915A325187A41369F6DA11231A3E50 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int dimensions => m_Dimensions;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_m_Dimensions_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Cinfo_get_dimensions_mA8AFF01543915A325187A41369F6DA11231A3E50_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  _returnValue;
	_returnValue = Cinfo_get_dimensions_mA8AFF01543915A325187A41369F6DA11231A3E50_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_planeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_planeCount_m88E3C67F9E06017A46B7FF90368B24A6F48E1271 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public int planeCount => m_PlaneCount;
		int32_t L_0 = __this->get_m_PlaneCount_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_planeCount_m88E3C67F9E06017A46B7FF90368B24A6F48E1271_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_planeCount_m88E3C67F9E06017A46B7FF90368B24A6F48E1271_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Cinfo_get_timestamp_mAF782E097B2324BD673D8D98C68CA2D6CA4891EF (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public double timestamp => m_Timestamp;
		double L_0 = __this->get_m_Timestamp_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  double Cinfo_get_timestamp_mAF782E097B2324BD673D8D98C68CA2D6CA4891EF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	double _returnValue;
	_returnValue = Cinfo_get_timestamp_mAF782E097B2324BD673D8D98C68CA2D6CA4891EF_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_format_m42CBF60A496CB04541CC04C97E1745AFBC7259BD (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public Format format => m_Format;
		int32_t L_0 = __this->get_m_Format_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_format_m42CBF60A496CB04541CC04C97E1745AFBC7259BD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_format_m42CBF60A496CB04541CC04C97E1745AFBC7259BD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::.ctor(System.Int32,UnityEngine.Vector2Int,System.Int32,System.Double,UnityEngine.XR.ARSubsystems.XRCpuImage/Format)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo__ctor_mAC48019C57DEB4DB94CF39A495A0B79CED3127D2 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, int32_t ___nativeHandle0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___dimensions1, int32_t ___planeCount2, double ___timestamp3, int32_t ___format4, const RuntimeMethod* method)
{
	{
		// m_NativeHandle = nativeHandle;
		int32_t L_0 = ___nativeHandle0;
		__this->set_m_NativeHandle_0(L_0);
		// m_Dimensions = dimensions;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1 = ___dimensions1;
		__this->set_m_Dimensions_1(L_1);
		// m_PlaneCount = planeCount;
		int32_t L_2 = ___planeCount2;
		__this->set_m_PlaneCount_2(L_2);
		// m_Timestamp = timestamp;
		double L_3 = ___timestamp3;
		__this->set_m_Timestamp_3(L_3);
		// m_Format = format;
		int32_t L_4 = ___format4;
		__this->set_m_Format_4(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo__ctor_mAC48019C57DEB4DB94CF39A495A0B79CED3127D2_AdjustorThunk (RuntimeObject * __this, int32_t ___nativeHandle0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___dimensions1, int32_t ___planeCount2, double ___timestamp3, int32_t ___format4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	Cinfo__ctor_mAC48019C57DEB4DB94CF39A495A0B79CED3127D2(_thisAdjusted, ___nativeHandle0, ___dimensions1, ___planeCount2, ___timestamp3, ___format4, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m52B0C058E8FB2AB4089B91E1EDD0DFD2F9F22642 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	{
		// return (nativeHandle.Equals(other.nativeHandle) && dimensions.Equals(other.dimensions)
		//         && planeCount.Equals(other.planeCount) && timestamp.Equals(other.timestamp)
		//         && (format == other.format));
		int32_t L_0;
		L_0 = Cinfo_get_nativeHandle_mAB50E5453B3ED928372EC45DF5E0F4E2ADF341BC_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Cinfo_get_nativeHandle_mAB50E5453B3ED928372EC45DF5E0F4E2ADF341BC_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		L_3 = Cinfo_get_dimensions_mA8AFF01543915A325187A41369F6DA11231A3E50_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		L_4 = Cinfo_get_dimensions_mA8AFF01543915A325187A41369F6DA11231A3E50_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)(&___other0), /*hidden argument*/NULL);
		bool L_5;
		L_5 = Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_6;
		L_6 = Cinfo_get_planeCount_m88E3C67F9E06017A46B7FF90368B24A6F48E1271_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Cinfo_get_planeCount_m88E3C67F9E06017A46B7FF90368B24A6F48E1271_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)(&___other0), /*hidden argument*/NULL);
		bool L_8;
		L_8 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_0), L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		double L_9;
		L_9 = Cinfo_get_timestamp_mAF782E097B2324BD673D8D98C68CA2D6CA4891EF_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		V_2 = L_9;
		double L_10;
		L_10 = Cinfo_get_timestamp_mAF782E097B2324BD673D8D98C68CA2D6CA4891EF_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)(&___other0), /*hidden argument*/NULL);
		bool L_11;
		L_11 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(&V_2), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_12;
		L_12 = Cinfo_get_format_m42CBF60A496CB04541CC04C97E1745AFBC7259BD_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = Cinfo_get_format_m42CBF60A496CB04541CC04C97E1745AFBC7259BD_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
	}

IL_006c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m52B0C058E8FB2AB4089B91E1EDD0DFD2F9F22642_AdjustorThunk (RuntimeObject * __this, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m52B0C058E8FB2AB4089B91E1EDD0DFD2F9F22642(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8140023C141235A77C2153E9A8B54E5356EC6C6F (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(System.Object obj) => obj is Cinfo other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)UnBox(L_1, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6_il2cpp_TypeInfo_var))));
		Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  L_2 = V_0;
		bool L_3;
		L_3 = Cinfo_Equals_m52B0C058E8FB2AB4089B91E1EDD0DFD2F9F22642((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m8140023C141235A77C2153E9A8B54E5356EC6C6F_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m8140023C141235A77C2153E9A8B54E5356EC6C6F(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo,UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m96BE41F735C6403E131A958F9AAF17DE643E3550 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  ___lhs0, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m52B0C058E8FB2AB4089B91E1EDD0DFD2F9F22642((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo,UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mD4266F23232FDB5FEFC82D59B82B93F52FCEEE8F (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  ___lhs0, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) => !(lhs == rhs);
		Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  L_0 = ___lhs0;
		Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6  L_1 = ___rhs1;
		bool L_2;
		L_2 = Cinfo_op_Equality_m96BE41F735C6403E131A958F9AAF17DE643E3550(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m7AB2284B6770F059F37B7A7EB61C075F472BAE65 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	{
		// public override int GetHashCode() => HashCode.Combine(
		//     nativeHandle.GetHashCode(),
		//     dimensions.GetHashCode(),
		//     planeCount.GetHashCode(),
		//     timestamp.GetHashCode(),
		//     ((int)format).GetHashCode());
		int32_t L_0;
		L_0 = Cinfo_get_nativeHandle_mAB50E5453B3ED928372EC45DF5E0F4E2ADF341BC_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_2;
		L_2 = Cinfo_get_dimensions_mA8AFF01543915A325187A41369F6DA11231A3E50_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Cinfo_get_planeCount_m88E3C67F9E06017A46B7FF90368B24A6F48E1271_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		double L_6;
		L_6 = Cinfo_get_timestamp_mAF782E097B2324BD673D8D98C68CA2D6CA4891EF_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7;
		L_7 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_2), /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Cinfo_get_format_m42CBF60A496CB04541CC04C97E1745AFBC7259BD_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = HashCode_Combine_m02E9A65274F198CF9266FDB496C74880155F9B94(L_1, L_3, L_5, L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m7AB2284B6770F059F37B7A7EB61C075F472BAE65_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m7AB2284B6770F059F37B7A7EB61C075F472BAE65(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m4923B9CB2748C5E7CCAA6C817F47976B1E4B2FE1 (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58E5CEADA2059EE9E3025B80075ADE0FEECDE744);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"nativeHandle: {nativeHandle} dimensions:{dimensions} planes:{planeCount} timestamp:{timestamp} format:{format}";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2;
		L_2 = Cinfo_get_nativeHandle_mAB50E5453B3ED928372EC45DF5E0F4E2ADF341BC_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		L_6 = Cinfo_get_dimensions_mA8AFF01543915A325187A41369F6DA11231A3E50_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_7 = L_6;
		RuntimeObject * L_8 = Box(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int32_t L_10;
		L_10 = Cinfo_get_planeCount_m88E3C67F9E06017A46B7FF90368B24A6F48E1271_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		double L_14;
		L_14 = Cinfo_get_timestamp_mAF782E097B2324BD673D8D98C68CA2D6CA4891EF_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		double L_15 = L_14;
		RuntimeObject * L_16 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		int32_t L_18;
		L_18 = Cinfo_get_format_m42CBF60A496CB04541CC04C97E1745AFBC7259BD_inline((Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		String_t* L_21;
		L_21 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral58E5CEADA2059EE9E3025B80075ADE0FEECDE744, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m4923B9CB2748C5E7CCAA6C817F47976B1E4B2FE1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * _thisAdjusted = reinterpret_cast<Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_ToString_m4923B9CB2748C5E7CCAA6C817F47976B1E4B2FE1(_thisAdjusted, method);
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
// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_inputRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	{
		// get => m_InputRect;
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_0 = __this->get_m_InputRect_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  _returnValue;
	_returnValue = ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_inputRect(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m73F6338FDA97617E73EEB513E662B6F1C472352A (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_InputRect = value;
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_0 = ___value0;
		__this->set_m_InputRect_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConversionParams_set_inputRect_m73F6338FDA97617E73EEB513E662B6F1C472352A_AdjustorThunk (RuntimeObject * __this, RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	ConversionParams_set_inputRect_m73F6338FDA97617E73EEB513E662B6F1C472352A_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ConversionParams_get_outputDimensions_m83C9D960C805CA2748AA9AAAC2A2986A397B7033 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	{
		// get => m_OutputDimensions;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_m_OutputDimensions_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ConversionParams_get_outputDimensions_m83C9D960C805CA2748AA9AAAC2A2986A397B7033_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  _returnValue;
	_returnValue = ConversionParams_get_outputDimensions_m83C9D960C805CA2748AA9AAAC2A2986A397B7033_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputDimensions(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_mD66BE3ACB6EF977C8C95836F6BD48635316F4CA9 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_OutputDimensions = value;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = ___value0;
		__this->set_m_OutputDimensions_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConversionParams_set_outputDimensions_mD66BE3ACB6EF977C8C95836F6BD48635316F4CA9_AdjustorThunk (RuntimeObject * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	ConversionParams_set_outputDimensions_mD66BE3ACB6EF977C8C95836F6BD48635316F4CA9_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m727E479981BF00635D645C88D4D987EB598A0E5F (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	{
		// get => m_Format;
		int32_t L_0 = __this->get_m_Format_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ConversionParams_get_outputFormat_m727E479981BF00635D645C88D4D987EB598A0E5F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConversionParams_get_outputFormat_m727E479981BF00635D645C88D4D987EB598A0E5F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mF24CF134EAF9AD891912C785CF3A6C14297F543C (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Format = value;
		int32_t L_0 = ___value0;
		__this->set_m_Format_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConversionParams_set_outputFormat_mF24CF134EAF9AD891912C785CF3A6C14297F543C_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	ConversionParams_set_outputFormat_mF24CF134EAF9AD891912C785CF3A6C14297F543C_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_transformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConversionParams_get_transformation_mFB57F05831CF417808A6C41F170768D9F66A7EF3 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	{
		// get => m_Transformation;
		int32_t L_0 = __this->get_m_Transformation_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ConversionParams_get_transformation_mFB57F05831CF417808A6C41F170768D9F66A7EF3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConversionParams_get_transformation_mFB57F05831CF417808A6C41F170768D9F66A7EF3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_transformation(UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_m0FFF10EB0BB1E28AACC097D166FA223B560E8E79 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Transformation = value;
		int32_t L_0 = ___value0;
		__this->set_m_Transformation_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConversionParams_set_transformation_m0FFF10EB0BB1E28AACC097D166FA223B560E8E79_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	ConversionParams_set_transformation_m0FFF10EB0BB1E28AACC097D166FA223B560E8E79_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::.ctor(UnityEngine.XR.ARSubsystems.XRCpuImage,UnityEngine.TextureFormat,UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionParams__ctor_m52274F8015B2BC4B13444E8328C7A5126DC1E24B (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE  ___image0, int32_t ___format1, int32_t ___transformation2, const RuntimeMethod* method)
{
	{
		// m_InputRect = new RectInt(0, 0, image.width, image.height);
		int32_t L_0;
		L_0 = XRCpuImage_get_width_m8DE20D99BCFA242F105F3B39AD68D398F3C2B4CE((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&___image0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = XRCpuImage_get_height_m7BB3967EC96DB5EEF99E0935E5AA1DFB991D7ADD((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&___image0), /*hidden argument*/NULL);
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_2;
		memset((&L_2), 0, sizeof(L_2));
		RectInt__ctor_m53209E2851578015083B4DEF8354AB38EAD4C553((&L_2), 0, 0, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_InputRect_0(L_2);
		// m_OutputDimensions = new Vector2Int(image.width, image.height);
		int32_t L_3;
		L_3 = XRCpuImage_get_width_m8DE20D99BCFA242F105F3B39AD68D398F3C2B4CE((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&___image0), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = XRCpuImage_get_height_m7BB3967EC96DB5EEF99E0935E5AA1DFB991D7ADD((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&___image0), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_5), L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_OutputDimensions_1(L_5);
		// m_Format = format;
		int32_t L_6 = ___format1;
		__this->set_m_Format_2(L_6);
		// m_Transformation = transformation;
		int32_t L_7 = ___transformation2;
		__this->set_m_Transformation_3(L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConversionParams__ctor_m52274F8015B2BC4B13444E8328C7A5126DC1E24B_AdjustorThunk (RuntimeObject * __this, XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE  ___image0, int32_t ___format1, int32_t ___transformation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	ConversionParams__ctor_m52274F8015B2BC4B13444E8328C7A5126DC1E24B(_thisAdjusted, ___image0, ___format1, ___transformation2, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConversionParams_GetHashCode_m317F3CF69F015FD4012B668A3195A50E8C18F436 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var hash = HashCode.Combine(inputRect.width.GetHashCode(), inputRect.height.GetHashCode(), inputRect.x.GetHashCode(), inputRect.y.GetHashCode());
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_0;
		L_0 = ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = RectInt_get_width_m7C3DBF05BE2DC727635FC9D7C778EACF0A9E4085((RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_3;
		L_3 = ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = RectInt_get_height_m5CCF18289CB154C1709AE02AA6375093ECA07DBC((RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_6;
		L_6 = ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = RectInt_get_x_m2D7412BC4EE7871D19042F469D6C573016E39F79((RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8;
		L_8 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_9;
		L_9 = ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10;
		L_10 = RectInt_get_y_mAEB15FA1B7CCD08DA9FCB978EE0BA45D6BB9FE33((RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = HashCode_Combine_mCF5A2D8E169AE770B379DCD8DE5229296453BD82(L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		// return HashCode.Combine(hash, outputDimensions.GetHashCode(), ((int)outputFormat).GetHashCode(), ((int)transformation).GetHashCode());
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_13;
		L_13 = ConversionParams_get_outputDimensions_m83C9D960C805CA2748AA9AAAC2A2986A397B7033_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		V_2 = L_13;
		int32_t L_14;
		L_14 = Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_15;
		L_15 = ConversionParams_get_outputFormat_m727E479981BF00635D645C88D4D987EB598A0E5F_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16;
		L_16 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = ConversionParams_get_transformation_mFB57F05831CF417808A6C41F170768D9F66A7EF3_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		V_1 = L_17;
		int32_t L_18;
		L_18 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_19;
		L_19 = HashCode_Combine_mCF5A2D8E169AE770B379DCD8DE5229296453BD82(L_12, L_14, L_16, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C  int32_t ConversionParams_GetHashCode_m317F3CF69F015FD4012B668A3195A50E8C18F436_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConversionParams_GetHashCode_m317F3CF69F015FD4012B668A3195A50E8C18F436(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionParams_Equals_m428ABCB343F2D25BEC8C48C064A607C19D4C6B4F (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___other0, const RuntimeMethod* method)
{
	RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return (inputRect.Equals(other.inputRect) && outputDimensions.Equals(other.outputDimensions)
		//     && (outputFormat == other.outputFormat) && (transformation == other.transformation));
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_0;
		L_0 = ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_1;
		L_1 = ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = RectInt_Equals_mAF3A442FB55544FF362006EDB9B2F225D32BDF6D((RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 *)(&V_0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		L_3 = ConversionParams_get_outputDimensions_m83C9D960C805CA2748AA9AAAC2A2986A397B7033_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		L_4 = ConversionParams_get_outputDimensions_m83C9D960C805CA2748AA9AAAC2A2986A397B7033_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)(&___other0), /*hidden argument*/NULL);
		bool L_5;
		L_5 = Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6;
		L_6 = ConversionParams_get_outputFormat_m727E479981BF00635D645C88D4D987EB598A0E5F_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = ConversionParams_get_outputFormat_m727E479981BF00635D645C88D4D987EB598A0E5F_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_8;
		L_8 = ConversionParams_get_transformation_mFB57F05831CF417808A6C41F170768D9F66A7EF3_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = ConversionParams_get_transformation_mFB57F05831CF417808A6C41F170768D9F66A7EF3_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_004d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ConversionParams_Equals_m428ABCB343F2D25BEC8C48C064A607C19D4C6B4F_AdjustorThunk (RuntimeObject * __this, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	bool _returnValue;
	_returnValue = ConversionParams_Equals_m428ABCB343F2D25BEC8C48C064A607C19D4C6B4F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionParams_Equals_m9170E22223AA2514E0EAA66A74375460210EC11B (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (obj is ConversionParams) && Equals((ConversionParams)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ConversionParams_Equals_m428ABCB343F2D25BEC8C48C064A607C19D4C6B4F((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, ((*(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)UnBox(L_1, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ConversionParams_Equals_m9170E22223AA2514E0EAA66A74375460210EC11B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	bool _returnValue;
	_returnValue = ConversionParams_Equals_m9170E22223AA2514E0EAA66A74375460210EC11B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::op_Equality(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionParams_op_Equality_m7EC444818FF94920B318C97B9F07A3478303292B (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___lhs0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(ConversionParams lhs, ConversionParams rhs) => lhs.Equals(rhs);
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_0 = ___rhs1;
		bool L_1;
		L_1 = ConversionParams_Equals_m428ABCB343F2D25BEC8C48C064A607C19D4C6B4F((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::op_Inequality(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionParams_op_Inequality_m8DF03E5DA1A48B2D7E644A2E5008D92C37AB99C9 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___lhs0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(ConversionParams lhs, ConversionParams rhs) => !lhs.Equals(rhs);
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_0 = ___rhs1;
		bool L_1;
		L_1 = ConversionParams_Equals_m428ABCB343F2D25BEC8C48C064A607C19D4C6B4F((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConversionParams_ToString_mB2F109D1B691D862EC98C1C9058F78C58CE832D3 (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transformation_t5812B66180F359977F76AB67CC9E923CF0B55938_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84202A255CF695123BA6AA8B575C53104873E7C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => $"inputRect: {inputRect} outputDimensions: {outputDimensions} format: {outputFormat} transformation: {transformation})";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_2;
		L_2 = ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_3 = L_2;
		RuntimeObject * L_4 = Box(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		L_6 = ConversionParams_get_outputDimensions_m83C9D960C805CA2748AA9AAAC2A2986A397B7033_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_7 = L_6;
		RuntimeObject * L_8 = Box(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int32_t L_10;
		L_10 = ConversionParams_get_outputFormat_m727E479981BF00635D645C88D4D987EB598A0E5F_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int32_t L_14;
		L_14 = ConversionParams_get_transformation_mFB57F05831CF417808A6C41F170768D9F66A7EF3_inline((ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *)__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Transformation_t5812B66180F359977F76AB67CC9E923CF0B55938_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17;
		L_17 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral84202A255CF695123BA6AA8B575C53104873E7C7, L_13, /*hidden argument*/NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* ConversionParams_ToString_mB2F109D1B691D862EC98C1C9058F78C58CE832D3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * _thisAdjusted = reinterpret_cast<ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConversionParams_ToString_mB2F109D1B691D862EC98C1C9058F78C58CE832D3(_thisAdjusted, method);
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
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::get_rowStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride { get; internal set; }
		int32_t L_0 = __this->get_U3CrowStrideU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::set_rowStride(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_set_rowStride_mDA36D4459E3B9E2A8B34D8363A0F4A4C11422E55 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int rowStride { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrowStrideU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Plane_set_rowStride_mDA36D4459E3B9E2A8B34D8363A0F4A4C11422E55_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	Plane_set_rowStride_mDA36D4459E3B9E2A8B34D8363A0F4A4C11422E55_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::get_pixelStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride { get; internal set; }
		int32_t L_0 = __this->get_U3CpixelStrideU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::set_pixelStride(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_set_pixelStride_mB70EF0731AC41B2B820885A33DC8DCD94FB5847E (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int pixelStride { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpixelStrideU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Plane_set_pixelStride_mB70EF0731AC41B2B820885A33DC8DCD94FB5847E_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	Plane_set_pixelStride_mB70EF0731AC41B2B820885A33DC8DCD94FB5847E_inline(_thisAdjusted, ___value0, method);
}
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<byte> data { get; internal set; }
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0 = __this->get_U3CdataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  _returnValue;
	_returnValue = Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::set_data(Unity.Collections.NativeArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_set_data_m2A4446744978FF53B38A650E3E053663008A4393 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___value0, const RuntimeMethod* method)
{
	{
		// public NativeArray<byte> data { get; internal set; }
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0 = ___value0;
		__this->set_U3CdataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Plane_set_data_m2A4446744978FF53B38A650E3E053663008A4393_AdjustorThunk (RuntimeObject * __this, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	Plane_set_data_m2A4446744978FF53B38A650E3E053663008A4393_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::.ctor(System.Int32,System.Int32,Unity.Collections.NativeArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m577FCBC19C5EE815AB834B493DCC4B29F7BBF63F (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, int32_t ___rowStride0, int32_t ___pixelStride1, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___data2, const RuntimeMethod* method)
{
	{
		// this.rowStride = rowStride;
		int32_t L_0 = ___rowStride0;
		Plane_set_rowStride_mDA36D4459E3B9E2A8B34D8363A0F4A4C11422E55_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, L_0, /*hidden argument*/NULL);
		// this.pixelStride = pixelStride;
		int32_t L_1 = ___pixelStride1;
		Plane_set_pixelStride_mB70EF0731AC41B2B820885A33DC8DCD94FB5847E_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, L_1, /*hidden argument*/NULL);
		// this.data = data;
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_2 = ___data2;
		Plane_set_data_m2A4446744978FF53B38A650E3E053663008A4393_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Plane__ctor_m577FCBC19C5EE815AB834B493DCC4B29F7BBF63F_AdjustorThunk (RuntimeObject * __this, int32_t ___rowStride0, int32_t ___pixelStride1, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___data2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	Plane__ctor_m577FCBC19C5EE815AB834B493DCC4B29F7BBF63F(_thisAdjusted, ___rowStride0, ___pixelStride1, ___data2, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plane_GetHashCode_mE6FB9627754D042BCE94DA2672023FE03BE24C81 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetHashCode_m13D81A3581866C33D8C9B13443F7342C9105EF98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public override int GetHashCode() => HashCode.Combine(
		//     data.GetHashCode(),
		//     rowStride.GetHashCode(),
		//     pixelStride.GetHashCode());
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0;
		L_0 = Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = NativeArray_1_GetHashCode_m13D81A3581866C33D8C9B13443F7342C9105EF98((NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 *)(&V_0), /*hidden argument*/NativeArray_1_GetHashCode_m13D81A3581866C33D8C9B13443F7342C9105EF98_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = HashCode_Combine_m18C3D10955CD71D976A5200FB0F5531F2F1F6BE1(L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t Plane_GetHashCode_mE6FB9627754D042BCE94DA2672023FE03BE24C81_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Plane_GetHashCode_mE6FB9627754D042BCE94DA2672023FE03BE24C81(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Equals_mAAF552DA4142C484FFEBA4C30EC7F14111523D68 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => obj is Plane other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)UnBox(L_1, Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D_il2cpp_TypeInfo_var))));
		Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  L_2 = V_0;
		bool L_3;
		L_3 = Plane_Equals_mE56ABB7E1AE23CED9290A64F4B80D2FDC95AA7F6((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Plane_Equals_mAAF552DA4142C484FFEBA4C30EC7F14111523D68_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	bool _returnValue;
	_returnValue = Plane_Equals_mAAF552DA4142C484FFEBA4C30EC7F14111523D68(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Equals_mE56ABB7E1AE23CED9290A64F4B80D2FDC95AA7F6 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Equals_m43936EB3E883A2A3F3A649C6435CC70B4DD96BB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// (data.Equals(other.data)) &&
		// (rowStride == other.rowStride) &&
		// (pixelStride == other.pixelStride);
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0;
		L_0 = Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_1;
		L_1 = Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = NativeArray_1_Equals_m43936EB3E883A2A3F3A649C6435CC70B4DD96BB8((NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 *)(&V_0), L_1, /*hidden argument*/NativeArray_1_Equals_m43936EB3E883A2A3F3A649C6435CC70B4DD96BB8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_3;
		L_3 = Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_5;
		L_5 = Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_0036:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Plane_Equals_mE56ABB7E1AE23CED9290A64F4B80D2FDC95AA7F6_AdjustorThunk (RuntimeObject * __this, Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	bool _returnValue;
	_returnValue = Plane_Equals_mE56ABB7E1AE23CED9290A64F4B80D2FDC95AA7F6(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::op_Equality(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane,UnityEngine.XR.ARSubsystems.XRCpuImage/Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_op_Equality_m007B9B34E98BCEF24468D3D0E86566A6221C45EA (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  ___lhs0, Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Plane lhs, Plane rhs) => lhs.Equals(rhs);
		Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  L_0 = ___rhs1;
		bool L_1;
		L_1 = Plane_Equals_mE56ABB7E1AE23CED9290A64F4B80D2FDC95AA7F6((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::op_Inequality(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane,UnityEngine.XR.ARSubsystems.XRCpuImage/Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_op_Inequality_mB9D3FBCDDE68CD3C683E04A7151DECD6E936B92A (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  ___lhs0, Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Plane lhs, Plane rhs) => !lhs.Equals(rhs);
		Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  L_0 = ___rhs1;
		bool L_1;
		L_1 = Plane_Equals_mE56ABB7E1AE23CED9290A64F4B80D2FDC95AA7F6((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Plane_ToString_mDCB0EECF9BB9652F5E5BA2B36F51F1E4CF334238 (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C244789BBF6C19E5126D1D3DC6898E243F24F51);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override string ToString() => $"({data.Length} bytes, Row Stride: {rowStride}, Pixel Stride: {pixelStride})";
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0;
		L_0 = Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 *)(&V_0))->___m_Length_1);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4;
		L_4 = Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7;
		L_7 = Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral1C244789BBF6C19E5126D1D3DC6898E243F24F51, L_3, L_6, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* Plane_ToString_mDCB0EECF9BB9652F5E5BA2B36F51F1E4CF334238_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * _thisAdjusted = reinterpret_cast<Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Plane_ToString_mDCB0EECF9BB9652F5E5BA2B36F51F1E4CF334238(_thisAdjusted, method);
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
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_mCFBE8FADD9A70911E16A985BA4CFE55A5D305F97 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mE83290B18BBF745A739EFBB8985EE8F6F9ACEF79 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m4594AD5BE5A869ECEDF56161272A18E5182B4E58 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A368071CFCB91BC39B9760441A777FE20F86A57 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m679358E7941E7FEBDCED0CC52E860E237B09BDE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m679358E7941E7FEBDCED0CC52E860E237B09BDE0(__this, /*hidden argument*/SubsystemProvider_1__ctor_m679358E7941E7FEBDCED0CC52E860E237B09BDE0_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_pinvoke(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_pinvoke_back(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke& marshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_pinvoke_cleanup(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_com(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_com_back(const Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com& marshaled, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshal_com_cleanup(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com& marshaled)
{
}
// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m7168F2BEAB1E7D53C4A1308A0BE686CB6ACAC37D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_m7168F2BEAB1E7D53C4A1308A0BE686CB6ACAC37D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_m7168F2BEAB1E7D53C4A1308A0BE686CB6ACAC37D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mA17A612B4FB9125843E254DB825177C3B1834235 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_mA17A612B4FB9125843E254DB825177C3B1834235_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_mA17A612B4FB9125843E254DB825177C3B1834235_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsFeaturePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// get => (capabilities & Capabilities.FeaturePoints) != 0;
		int32_t L_0;
		L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsFeaturePoints_mAE8F24562D2A19594A5AB98BDA0FC1C35730B5BA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// capabilities |= Capabilities.FeaturePoints;
		int32_t L_1;
		L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_1|(int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0012:
	{
		// capabilities &= ~Capabilities.FeaturePoints;
		int32_t L_2;
		L_2 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// get => (capabilities & Capabilities.Confidence) != 0;
		int32_t L_0;
		L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsConfidence_m483E36BDB283478D5E1F6F6F3C96A279EB6DE01A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// capabilities |= Capabilities.Confidence;
		int32_t L_1;
		L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_1|(int32_t)2)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0012:
	{
		// capabilities &= ~Capabilities.Confidence;
		int32_t L_2;
		L_2 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-3))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_supportsUniqueIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// get => (capabilities & Capabilities.UniqueIds) != 0;
		int32_t L_0;
		L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsUniqueIds_m6A1B72F6B917B3B001388027A7324A84146E5B7F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// capabilities |= Capabilities.UniqueIds;
		int32_t L_1;
		L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_1|(int32_t)4)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0012:
	{
		// capabilities &= ~Capabilities.UniqueIds;
		int32_t L_2;
		L_2 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-5))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::get_capabilities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = __this->get_U3CcapabilitiesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_capabilities(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcapabilitiesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//                 return
		//                     capabilities == other.capabilities &&
		//                     id == other.id &&
		// #if UNITY_2020_2_OR_NEWER
		//                     providerType == other.providerType &&
		//                     subsystemTypeOverride == other.subsystemTypeOverride;
		int32_t L_0;
		L_0 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_2 = __this->get_id_0();
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_3 = ___other0;
		String_t* L_4 = L_3.get_id_0();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		Type_t * L_6;
		L_6 = Cinfo_get_providerType_m7168F2BEAB1E7D53C4A1308A0BE686CB6ACAC37D_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Type_t * L_7;
		L_7 = Cinfo_get_providerType_m7168F2BEAB1E7D53C4A1308A0BE686CB6ACAC37D_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		Type_t * L_9;
		L_9 = Cinfo_get_subsystemTypeOverride_mA17A612B4FB9125843E254DB825177C3B1834235_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		Type_t * L_10;
		L_10 = Cinfo_get_subsystemTypeOverride_mA17A612B4FB9125843E254DB825177C3B1834235_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0049:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781_AdjustorThunk (RuntimeObject * __this, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, ((*(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)UnBox(L_1, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m1FFC7731C8021381A825E2D56189CDCD1BC39FD1(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hashCode = HashCode.ReferenceHash(id);
		String_t* L_0 = __this->get_id_0();
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// hashCode = 486187739 * hashCode + HashCode.ReferenceHash(providerType);
		int32_t L_2 = V_0;
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_m7168F2BEAB1E7D53C4A1308A0BE686CB6ACAC37D_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_3, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)L_2)), (int32_t)L_4));
		// hashCode = 486187739 * hashCode + HashCode.ReferenceHash(subsystemTypeOverride);
		int32_t L_5 = V_0;
		Type_t * L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_mA17A612B4FB9125843E254DB825177C3B1834235_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)L_5)), (int32_t)L_7));
		// hashCode = 486187739 * hashCode + ((int)capabilities).GetHashCode();
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)__this, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10;
		L_10 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)L_8)), (int32_t)L_10));
		// return hashCode;
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * _thisAdjusted = reinterpret_cast<Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m93DAAACF242CBA5B8EE758CE4E04BCCF51639860(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mA75B82ED3ACE6AAEE055A39F9553A8C2B980FDDA (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___lhs0, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mDC7FA4BBBEB0235BB1844025B363D9161733814D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___lhs0, Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m560240A9ABB2B3E0C71D2EF694812209060F7781((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::get_automaticPlacementRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_automaticPlacementRequested_m1E459E6FEB7533E372078FCF8E37E1FE7A1F42FB (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::set_automaticPlacementRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_automaticPlacementRequested_m247AC8CC05683266B38C937719C7B0E766C6337B (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("automatic placement of environment probes is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43CF1A394DF36BF047EE89F7BFA26227D4379BFB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_automaticPlacementRequested_m247AC8CC05683266B38C937719C7B0E766C6337B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::get_automaticPlacementEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_automaticPlacementEnabled_mFF258987581EDD3975F41F7233FC4CEB8FCF7D1A (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool automaticPlacementEnabled => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::get_environmentTextureHDRRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_environmentTextureHDRRequested_m5D5984CEF09F49F5088F4568E9263BCC11A44366 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::set_environmentTextureHDRRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_environmentTextureHDRRequested_m82BAEA302C0714E7C0194EA11A8FE890E7409A8B (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("HDR environment textures are not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF888230443F7BB68D49D53BBE56D2A722FDD6CA2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_environmentTextureHDRRequested_m82BAEA302C0714E7C0194EA11A8FE890E7409A8B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::get_environmentTextureHDREnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_environmentTextureHDREnabled_m852187628E4A0FAD999C1E679EDC532659BC4675 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool environmentTextureHDREnabled => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::TryAddEnvironmentProbe(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.XR.ARSubsystems.XREnvironmentProbe&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddEnvironmentProbe_m3290B8D160B758811040A94F335843B1665618D5 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size2, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * ___environmentProbe3, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("manual placement of environment probes is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49851190ED9FA7B5B16CED19B807FDDAA864FEE9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_TryAddEnvironmentProbe_m3290B8D160B758811040A94F335843B1665618D5_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::RemoveEnvironmentProbe(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_RemoveEnvironmentProbe_m1C8E9F616E2D1F98ECF86A3D6101B9A7ACB949D8 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("removal of environment probes is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69848EA3811CFA33C6D149D0D7D3E7BB386BD641)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_RemoveEnvironmentProbe_m1C8E9F616E2D1F98ECF86A3D6101B9A7ACB949D8_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m82E278812C6826F3F89A708912491AB72058B700 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m987248264A49939ACFFFF0D50F3AAAE526E80B67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m987248264A49939ACFFFF0D50F3AAAE526E80B67(__this, /*hidden argument*/SubsystemProvider_1__ctor_m987248264A49939ACFFFF0D50F3AAAE526E80B67_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::GetFaceMesh(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,UnityEngine.XR.ARSubsystems.XRFaceMesh&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetFaceMesh_m24F6E73C1A2C77979653AB19C8EE8EF939D80182 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___faceId0, int32_t ___allocator1, XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * ___faceMesh2, const RuntimeMethod* method)
{
	{
		// faceMesh.Dispose();
		XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * L_0 = ___faceMesh2;
		XRFaceMesh_Dispose_m84478F08EEB3D131E0E7785CF4195D424B94543E((XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 *)L_0, /*hidden argument*/NULL);
		// faceMesh = default(XRFaceMesh);
		XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * L_1 = ___faceMesh2;
		il2cpp_codegen_initobj(L_1, sizeof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 ));
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::get_supportedFaceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_supportedFaceCount_m65269094A72BB234E7EF96ADEBF1EDB903FF5DEC (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	{
		// public virtual int supportedFaceCount => 1;
		return 1;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::get_requestedMaximumFaceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedMaximumFaceCount_m82A60F24B04B17866F4702686901B3D929FB47A0 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	{
		// get => m_RequestedMaximumFaceCount;
		int32_t L_0 = __this->get_m_RequestedMaximumFaceCount_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::set_requestedMaximumFaceCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedMaximumFaceCount_mE8E2FDFE803518BBDB015E0CF8CA03E30E64169D (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_RequestedMaximumFaceCount = value;
		int32_t L_0 = ___value0;
		__this->set_m_RequestedMaximumFaceCount_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::get_currentMaximumFaceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentMaximumFaceCount_m1BB7800FD410EA2FCE98AD32F0AA8A854749F1A5 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	{
		// public virtual int currentMaximumFaceCount => 1;
		return 1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mD36F52D0D0CF48E1C950DAE67246AB8C42498DE5 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m775D1DA5795E95D8D1220715C2B041DB989B9B02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int m_RequestedMaximumFaceCount = 1;
		__this->set_m_RequestedMaximumFaceCount_1(1);
		SubsystemProvider_1__ctor_m775D1DA5795E95D8D1220715C2B041DB989B9B02(__this, /*hidden argument*/SubsystemProvider_1__ctor_m775D1DA5795E95D8D1220715C2B041DB989B9B02_RuntimeMethod_var);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::get_pose2DRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_pose2DRequested_mE53D821039F6398BA705AE07E4A41F556436D25D (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, const RuntimeMethod* method)
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::set_pose2DRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_pose2DRequested_m27B9A484B65FE56A642599F71769CECD31F21B55 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Setting human body pose 2D estimation to enabled is not "
		//                                 + "supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB46EF5E6A66EDA1C58FC6247FCF11ED116219577)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_pose2DRequested_m27B9A484B65FE56A642599F71769CECD31F21B55_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::get_pose2DEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_pose2DEnabled_m918E7176255D12999485651F781725610C60EA67 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool pose2DEnabled => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::get_pose3DRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_pose3DRequested_m8E70D9B91BE79C906E0AE63E3CCD17A163B0BD59 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, const RuntimeMethod* method)
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::set_pose3DRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_pose3DRequested_mCF7E233FEE430CE3B888B8E65D36E7EB8475697B (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Setting human body pose 3D estimation to enabled is not "
		//                                 + "supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E24AD325FDF926182510CA7537CB68FEA6D6503)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_pose3DRequested_mCF7E233FEE430CE3B888B8E65D36E7EB8475697B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::get_pose3DEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_pose3DEnabled_m50FF0EE2441930D442B21BDC740F759D37BB08BC (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool pose3DEnabled => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::get_pose3DScaleEstimationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_pose3DScaleEstimationRequested_m16F65694B28BBC00084732C08C2DC484FEBEBB41 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, const RuntimeMethod* method)
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::set_pose3DScaleEstimationRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_pose3DScaleEstimationRequested_m33837BA93C947D63865DFCA7A83288498EAA8200 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Setting 3D human body scale estimation to enabled is not "
		//                                 + "supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2A7E438E876A47A61C6E2144C25AB3FC820856F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_pose3DScaleEstimationRequested_m33837BA93C947D63865DFCA7A83288498EAA8200_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::get_pose3DScaleEstimationEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_pose3DScaleEstimationEnabled_mD6EDC5A88C7BBE729512E1F009785DA1E6ACE5E0 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool pose3DScaleEstimationEnabled => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::GetSkeleton(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetSkeleton_mFFD5F2C114C2B8C3A8B54C10CFCF82F2D5C57868 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, int32_t ___allocator1, NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C * ___skeleton2, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("Skeletons are not supported by this implementation.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88CA26652382EB9056FA8D06D416F308717A3471)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_GetSkeleton_mFFD5F2C114C2B8C3A8B54C10CFCF82F2D5C57868_RuntimeMethod_var)));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint> UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::GetHumanBodyPose2DJoints(UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint,System.Int32,System.Int32,UnityEngine.ScreenOrientation,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7946EB09CA991D07040F6E500BA5CA3CECED5E52  Provider_GetHumanBodyPose2DJoints_m9CBC5A20BCA6FEC12F844AEBCE285D978C859E00 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  ___defaultHumanBodyPose2DJoint0, int32_t ___screenWidth1, int32_t ___screenHeight2, int32_t ___screenOrientation3, int32_t ___allocator4, const RuntimeMethod* method)
{
	NativeArray_1_t7946EB09CA991D07040F6E500BA5CA3CECED5E52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// => throw new NotSupportedException("human body pose 2D is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE83A8FD46D2BCA9E85007E13F35EC64241D98D0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_GetHumanBodyPose2DJoints_m9CBC5A20BCA6FEC12F844AEBCE285D978C859E00_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA98EFA82A2BD0B6E60094A95912A2CFF487D0252 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m756AF5A05933094284FE3141F40DBAE7DBAE8FE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m756AF5A05933094284FE3141F40DBAE7DBAE8FE1(__this, /*hidden argument*/SubsystemProvider_1__ctor_m756AF5A05933094284FE3141F40DBAE7DBAE8FE1_RuntimeMethod_var);
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
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider::get_requestedMaxNumberOfMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedMaxNumberOfMovingImages_m2D611F3D46EFE004FA5A5466FEED0501CBAF2E0A (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, const RuntimeMethod* method)
{
	{
		// get => 0;
		return 0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider::set_requestedMaxNumberOfMovingImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedMaxNumberOfMovingImages_mCEC5839726AA69CAD5ED6F831170D2B7EDD7567F (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => throw new NotSupportedException("This subsystem does not track moving images.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1399697DAB4124C76C3449E6CBB1E28BB1C2F2A1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_requestedMaxNumberOfMovingImages_mCEC5839726AA69CAD5ED6F831170D2B7EDD7567F_RuntimeMethod_var)));
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider::get_currentMaxNumberOfMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentMaxNumberOfMovingImages_mFFDD62A1C522FD69A89FD71E2CCA909B265B4AF7 (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, const RuntimeMethod* method)
{
	{
		// public virtual int currentMaxNumberOfMovingImages => 0;
		return 0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mE0C779A245EE703B26578F529ABFD6F18E002AC0 (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_mC4C72A59ABE142F4F35FE24EFAF666ACF8450690_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_mC4C72A59ABE142F4F35FE24EFAF666ACF8450690(__this, /*hidden argument*/SubsystemProvider_1__ctor_mC4C72A59ABE142F4F35FE24EFAF666ACF8450690_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_pinvoke(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_pinvoke_back(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke& marshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_pinvoke_cleanup(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_com(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_com_back(const Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com& marshaled, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshal_com_cleanup(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m865B26BBCBE9E542D09269A2CA6BD1FC47976AF2 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_m865B26BBCBE9E542D09269A2CA6BD1FC47976AF2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_m865B26BBCBE9E542D09269A2CA6BD1FC47976AF2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m0008239CE298C4881102FED287EC52224601A3A5 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_m0008239CE298C4881102FED287EC52224601A3A5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m0008239CE298C4881102FED287EC52224601A3A5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = __this->get_U3CsupportsMovingImagesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_requiresPhysicalImageDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = __this->get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsMutableLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = __this->get_U3CsupportsMutableLibraryU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMutableLibrary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::get_supportsImageValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsImageValidation_m417DC16FCA795DB24C8CAA2C81A5E84855D077BD (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsImageValidation { get; set; }
		bool L_0 = __this->get_U3CsupportsImageValidationU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsImageValidation_m417DC16FCA795DB24C8CAA2C81A5E84855D077BD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsImageValidation_m417DC16FCA795DB24C8CAA2C81A5E84855D077BD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsImageValidation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsImageValidation_m9CA1173736665E4DC3B594EE3357416A8A20B266 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsImageValidation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsImageValidationU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsImageValidation_m9CA1173736665E4DC3B594EE3357416A8A20B266_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	Cinfo_set_supportsImageValidation_m9CA1173736665E4DC3B594EE3357416A8A20B266_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// int hashCode = HashCode.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + HashCode.ReferenceHash(providerType);
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_m865B26BBCBE9E542D09269A2CA6BD1FC47976AF2_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_2, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + HashCode.ReferenceHash(subsystemTypeOverride);
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m0008239CE298C4881102FED287EC52224601A3A5_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_4, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + supportsMovingImages.GetHashCode();
		bool L_6;
		L_6 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + requiresPhysicalImageDimensions.GetHashCode();
		bool L_8;
		L_8 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + supportsMutableLibrary.GetHashCode();
		bool L_10;
		L_10 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11;
		L_11 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + supportsImageValidation.GetHashCode();
		bool L_12;
		L_12 = Cinfo_get_supportsImageValidation_m417DC16FCA795DB24C8CAA2C81A5E84855D077BD_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m8DB95DB86F786705B32382E014B3A5B96F81F4B0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___other0, const RuntimeMethod* method)
{
	{
		//                 return
		//                     ReferenceEquals(id, other.id) &&
		// #if UNITY_2020_2_OR_NEWER
		//                     ReferenceEquals(providerType, other.providerType) &&
		//                     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		// #else
		//                     ReferenceEquals(subsystemImplementationType, other.subsystemImplementationType) &&
		// #endif
		//                     supportsMovingImages == other.supportsMovingImages &&
		//                     requiresPhysicalImageDimensions == other.requiresPhysicalImageDimensions &&
		//                     supportsMutableLibrary == other.supportsMutableLibrary &&
		//                     supportsImageValidation == other.supportsImageValidation;
		String_t* L_0;
		L_0 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_m865B26BBCBE9E542D09269A2CA6BD1FC47976AF2_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_m865B26BBCBE9E542D09269A2CA6BD1FC47976AF2_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_2) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m0008239CE298C4881102FED287EC52224601A3A5_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		Type_t * L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m0008239CE298C4881102FED287EC52224601A3A5_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5))))
		{
			goto IL_006a;
		}
	}
	{
		bool L_6;
		L_6 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_006a;
		}
	}
	{
		bool L_8;
		L_8 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_9;
		L_9 = Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_006a;
		}
	}
	{
		bool L_10;
		L_10 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_006a;
		}
	}
	{
		bool L_12;
		L_12 = Cinfo_get_supportsImageValidation_m417DC16FCA795DB24C8CAA2C81A5E84855D077BD_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, /*hidden argument*/NULL);
		bool L_13;
		L_13 = Cinfo_get_supportsImageValidation_m417DC16FCA795DB24C8CAA2C81A5E84855D077BD_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
	}

IL_006a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1_AdjustorThunk (RuntimeObject * __this, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)__this, ((*(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)UnBox(L_1, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * _thisAdjusted = reinterpret_cast<Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m7D227238D404DAA7ED5C72A9C3843FE6CB852ED4(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mA2289980F50CD4956B0C31B5435FD74C1A901682 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___lhs0, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m41BFCC878B3250FA86DE66CC1437AB0CFBB4EB6E (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___lhs0, Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m2D882FB6E58A034244EC05B2701C303C0763C3C1((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider::set_library(UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_library_mD6AF0A985F82F44B04BCA8C9BF3D053E8FF0CD86 (Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * __this, XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * ___value0, const RuntimeMethod* method)
{
	{
		// set {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8E2A200EE478D4971BDAE03A8E40C9A0C7DBF576 (Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m3216193D514525815B1785B92B434D1CB6BED267_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m3216193D514525815B1785B92B434D1CB6BED267(__this, /*hidden argument*/SubsystemProvider_1__ctor_m3216193D514525815B1785B92B434D1CB6BED267_RuntimeMethod_var);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities::Equals(UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Capabilities_Equals_m921C39E9F8B9A589D30635AF4D55428F9A48E9F7 (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * __this, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___other0, const RuntimeMethod* method)
{
	{
		// public bool Equals(Capabilities other) => true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Capabilities_Equals_m921C39E9F8B9A589D30635AF4D55428F9A48E9F7_AdjustorThunk (RuntimeObject * __this, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * _thisAdjusted = reinterpret_cast<Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Capabilities_Equals_m921C39E9F8B9A589D30635AF4D55428F9A48E9F7(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Capabilities_Equals_mBC54D72E0218CDA4D42F66F1B93C98E3FCC6F509 (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => (obj is Capabilities capabilities) && Equals(capabilities);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 *)((Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 *)UnBox(L_1, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685_il2cpp_TypeInfo_var))));
		Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  L_2 = V_0;
		bool L_3;
		L_3 = Capabilities_Equals_m921C39E9F8B9A589D30635AF4D55428F9A48E9F7((Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Capabilities_Equals_mBC54D72E0218CDA4D42F66F1B93C98E3FCC6F509_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * _thisAdjusted = reinterpret_cast<Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Capabilities_Equals_mBC54D72E0218CDA4D42F66F1B93C98E3FCC6F509(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Capabilities_GetHashCode_m2CC9C750B6796CBBC10A34C6E42040FCF9626FBF (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * __this, const RuntimeMethod* method)
{
	{
		// public override int GetHashCode() => 0;
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t Capabilities_GetHashCode_m2CC9C750B6796CBBC10A34C6E42040FCF9626FBF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * _thisAdjusted = reinterpret_cast<Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Capabilities_GetHashCode_m2CC9C750B6796CBBC10A34C6E42040FCF9626FBF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities::op_Equality(UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Capabilities_op_Equality_m88A900007076007E34A7ED953C9D16CA68544114 (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___lhs0, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Capabilities lhs, Capabilities rhs) => lhs.Equals(rhs);
		Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  L_0 = ___rhs1;
		bool L_1;
		L_1 = Capabilities_Equals_m921C39E9F8B9A589D30635AF4D55428F9A48E9F7((Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities::op_Inequality(UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Capabilities_op_Inequality_mE42060F701E797AF7AD9BF5E0328AD1061F66A64 (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___lhs0, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Capabilities lhs, Capabilities rhs) => !lhs.Equals(rhs);
		Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  L_0 = ___rhs1;
		bool L_1;
		L_1 = Capabilities_Equals_m921C39E9F8B9A589D30635AF4D55428F9A48E9F7((Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_requestedHumanStencilMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedHumanStencilMode_m89B83DF30D15B0BE8670A55F2681B0EB8A739026 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// get => HumanSegmentationStencilMode.Disabled;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::set_requestedHumanStencilMode(UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedHumanStencilMode_m17A4B7518A1749DEEF6E432E290D03D66AAB1004 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value.Enabled())
		int32_t L_0 = ___value0;
		bool L_1;
		L_1 = SegmentationStencilModeExtension_Enabled_m8C420BAE2C6604ADCAD803BA36C2C78954B5F71E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new NotSupportedException("Setting human segmentation stencil to enabled is not "
		//                                 + "supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_2 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27D4391AD2900E18D386A9155EE7DD7ADAF98FBA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_requestedHumanStencilMode_m17A4B7518A1749DEEF6E432E290D03D66AAB1004_RuntimeMethod_var)));
	}

IL_0013:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_currentHumanStencilMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentHumanStencilMode_m9DF9A52AA77E4B7E0A3ACD89887322493F53FC45 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// public virtual HumanSegmentationStencilMode currentHumanStencilMode => HumanSegmentationStencilMode.Disabled;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_requestedHumanDepthMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedHumanDepthMode_m9DE747D3680A70BC6BCCC5D6FFD4F171EEB0899B (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// get => HumanSegmentationDepthMode.Disabled;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::set_requestedHumanDepthMode(UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedHumanDepthMode_m90E3350AB1E861DDA9B1254B5601665484690258 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value.Enabled())
		int32_t L_0 = ___value0;
		bool L_1;
		L_1 = SegmentationDepthModeExtension_Enabled_m3934709EF5C4CCD661E0188C103280BD96F1D9C6(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new NotSupportedException("Setting human segmentation depth to enabled is not supported "
		//                                 + "by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_2 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5DD68446F820F397860B76D203AC09BE189AC257)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_requestedHumanDepthMode_m90E3350AB1E861DDA9B1254B5601665484690258_RuntimeMethod_var)));
	}

IL_0013:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_currentHumanDepthMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentHumanDepthMode_mC677BD11CFB177BD210B8F059CD169D49D8FB431 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// public virtual HumanSegmentationDepthMode currentHumanDepthMode => HumanSegmentationDepthMode.Disabled;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.EnvironmentDepthMode UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_requestedEnvironmentDepthMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedEnvironmentDepthMode_mB27FC4801CC4846867255F73260835F0CAD41CA6 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// get => EnvironmentDepthMode.Disabled;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::set_requestedEnvironmentDepthMode(UnityEngine.XR.ARSubsystems.EnvironmentDepthMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedEnvironmentDepthMode_mBA1103C34AA535C754E2AD417868496FA18928B5 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set {}
		return;
	}
}
// UnityEngine.XR.ARSubsystems.EnvironmentDepthMode UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_currentEnvironmentDepthMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentEnvironmentDepthMode_m3664B08405157169A39218B4AD96286C2F089B2A (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// public virtual EnvironmentDepthMode currentEnvironmentDepthMode => EnvironmentDepthMode.Disabled;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_requestedOcclusionPreferenceMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedOcclusionPreferenceMode_m0FF0C84504EAB9D5F2A016EBB2ACC4BDBECCF19C (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// get => default(OcclusionPreferenceMode);
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::set_requestedOcclusionPreferenceMode(UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedOcclusionPreferenceMode_mE5DF2A581164905E51A0BC02AC1DA0D0E03D77E2 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set {}
		return;
	}
}
// UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_currentOcclusionPreferenceMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentOcclusionPreferenceMode_m216AA7572FF205318FD726F0BF8DE48715987F9E (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// public virtual OcclusionPreferenceMode currentOcclusionPreferenceMode => default(OcclusionPreferenceMode);
		return (int32_t)(0);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::TryGetHumanStencil(UnityEngine.XR.ARSubsystems.XRTextureDescriptor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetHumanStencil_m8231857EC5143647F85BB79A29BAC18430821D36 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * ___humanStencilDescriptor0, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("human stencil texture is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral774435CB0ABA1D212CE35028C45598E01E1A4BF6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_TryGetHumanStencil_m8231857EC5143647F85BB79A29BAC18430821D36_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::TryAcquireHumanStencilCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAcquireHumanStencilCpuImage_mC6011EC7798D37065264EE243943E90D1E6B71FD (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * ___cinfo0, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("Human stencil CPU images are not supported by this implementation.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral447993BB9CCC280BD731A90A94EAA3AC0C8F2B2C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_TryAcquireHumanStencilCpuImage_mC6011EC7798D37065264EE243943E90D1E6B71FD_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_humanStencilCpuImageApi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * Provider_get_humanStencilCpuImageApi_m4CCDB03AAC405F55F90907E1AAB9328D86C740F2 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// public virtual XRCpuImage.Api humanStencilCpuImageApi => null;
		return (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E *)NULL;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::TryGetHumanDepth(UnityEngine.XR.ARSubsystems.XRTextureDescriptor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetHumanDepth_m4F902130B0B684322ACE0F2D7F72F412F5D42844 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * ___humanDepthDescriptor0, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("human depth texture is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15E540EE340CABF2AEBFAE9C5DC5176C42795209)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_TryGetHumanDepth_m4F902130B0B684322ACE0F2D7F72F412F5D42844_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::TryAcquireHumanDepthCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAcquireHumanDepthCpuImage_mD9C2C05795A09F724FA8FCCE18C32CD2F5B66F0F (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * ___cinfo0, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("Human depth CPU images are not supported by this implementation.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4110120B3B41A2DDAFF9CBA0B77F7BE9DDBB53B3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_TryAcquireHumanDepthCpuImage_mD9C2C05795A09F724FA8FCCE18C32CD2F5B66F0F_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_humanDepthCpuImageApi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * Provider_get_humanDepthCpuImageApi_mF6C1BB545272C0EB05D995FE27A499C887F46BA9 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// public virtual XRCpuImage.Api humanDepthCpuImageApi => null;
		return (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E *)NULL;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::TryGetEnvironmentDepth(UnityEngine.XR.ARSubsystems.XRTextureDescriptor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetEnvironmentDepth_m39AA20EFA2DB7D68364B4D677731911BB9B95987 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * ___environmentDepthDescriptor0, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("environment depth texture is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3194FD2CE283EE4DDE49298AADE96B77975C46E5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_TryGetEnvironmentDepth_m39AA20EFA2DB7D68364B4D677731911BB9B95987_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::TryAcquireEnvironmentDepthCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAcquireEnvironmentDepthCpuImage_m038A771570F8067187EA5602FE6287D7F32A8BA4 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * ___cinfo0, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("Environment depth CPU images are not supported by this implementation.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral773B3E33BD417BDFC3619000108985CB0FF49E77)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_TryAcquireEnvironmentDepthCpuImage_m038A771570F8067187EA5602FE6287D7F32A8BA4_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_environmentDepthCpuImageApi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * Provider_get_environmentDepthCpuImageApi_mF69078CBA7922A4F92C7D8B9359511DA16BB7117 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// public virtual XRCpuImage.Api environmentDepthCpuImageApi => null;
		return (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E *)NULL;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::TryGetEnvironmentDepthConfidence(UnityEngine.XR.ARSubsystems.XRTextureDescriptor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetEnvironmentDepthConfidence_mB12E08E4B93E1272976BE1F0C09592133B93848F (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * ___environmentDepthConfidenceDescriptor0, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("environment depth confidence texture is not supported by this implementation");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87C47688E7FBA919124B1A1D7B77CE47A06E36A2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_TryGetEnvironmentDepthConfidence_mB12E08E4B93E1272976BE1F0C09592133B93848F_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::TryAcquireEnvironmentDepthConfidenceCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAcquireEnvironmentDepthConfidenceCpuImage_mC0A1389DBA1C968C2E998C406852881E0F6089FE (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * ___cinfo0, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("Environment depth CPU images are not supported by this implementation.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral773B3E33BD417BDFC3619000108985CB0FF49E77)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_TryAcquireEnvironmentDepthConfidenceCpuImage_mC0A1389DBA1C968C2E998C406852881E0F6089FE_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::get_environmentDepthConfidenceCpuImageApi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * Provider_get_environmentDepthConfidenceCpuImageApi_mEBEAA0B71D94E7A69392061521D045FCE2750CE6 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	{
		// public virtual XRCpuImage.Api environmentDepthConfidenceCpuImageApi => null;
		return (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E *)NULL;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor> UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::GetTextureDescriptors(UnityEngine.XR.ARSubsystems.XRTextureDescriptor,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  Provider_GetTextureDescriptors_mE2329867DDA41B3F1110DAF5081D3FD427191C85 (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___defaultDescriptor0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new NativeArray<XRTextureDescriptor>(0, allocator);
		int32_t L_0 = ___allocator1;
		NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A((&L_1), 0, L_0, 1, /*hidden argument*/NativeArray_1__ctor_m2BCB109D4076B26086589A4C8600C49A9F38FA7A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::GetMaterialKeywords(System.Collections.Generic.List`1<System.String>&,System.Collections.Generic.List`1<System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetMaterialKeywords_mF75D36CB409D853AD7AF66D9E8E0665C63E1AA8D (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** ___enabledKeywords0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** ___disabledKeywords1, const RuntimeMethod* method)
{
	{
		// enabledKeywords = null;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** L_0 = ___enabledKeywords0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// disabledKeywords = null;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** L_1 = ___disabledKeywords1;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m4B36FAF10D278F373035E446EFFC7C4C5B32C4FD (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m85B436C396E4816D5D62F8595921E532535FA734_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m85B436C396E4816D5D62F8595921E532535FA734(__this, /*hidden argument*/SubsystemProvider_1__ctor_m85B436C396E4816D5D62F8595921E532535FA734_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m29C158581A2B8BF6DE3F03DDACC1A2F8FFB1F875 (Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m83A2BF40051F2545CECFD837C92DF3AB37758AFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m83A2BF40051F2545CECFD837C92DF3AB37758AFA(__this, /*hidden argument*/SubsystemProvider_1__ctor_m83A2BF40051F2545CECFD837C92DF3AB37758AFA_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___boundary2, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("Boundary vertices are not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_requestedPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedPlaneDetectionMode_mBE4A83FB233470D747D0F6E6435062F0B076D787 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	{
		// get => PlaneDetectionMode.None;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::set_requestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedPlaneDetectionMode_m6F76C54F3DDC0811336F80D6CF40CBC64147DAD9 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value != PlaneDetectionMode.None)
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Plane detection is not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED9546C195BD4988B71713BD762B7E7F364227ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_requestedPlaneDetectionMode_m6F76C54F3DDC0811336F80D6CF40CBC64147DAD9_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_currentPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentPlaneDetectionMode_m6409F5A32746AC3BAB7876DEDF7A9CA5C27CDFF2 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	{
		// public virtual PlaneDetectionMode currentPlaneDetectionMode => PlaneDetectionMode.None;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF(__this, /*hidden argument*/SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke_back(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke_cleanup(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com_back(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com_cleanup(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->get_U3CsupportsClassificationU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method)
{
	{
		//                 return
		//                     ReferenceEquals(id, other.id) &&
		// #if UNITY_2020_2_OR_NEWER
		//                     ReferenceEquals(providerType, other.providerType) &&
		//                     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		// #else
		//                     ReferenceEquals(subsystemImplementationType, other.subsystemImplementationType) &&
		// #endif
		//                     supportsHorizontalPlaneDetection == other.supportsHorizontalPlaneDetection &&
		//                     supportsVerticalPlaneDetection == other.supportsVerticalPlaneDetection &&
		//                     supportsArbitraryPlaneDetection == other.supportsArbitraryPlaneDetection &&
		//                     supportsClassification == other.supportsClassification &&
		//                     supportsBoundaryVertices == other.supportsBoundaryVertices;
		String_t* L_0;
		L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_2) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		Type_t * L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_6;
		L_6 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_8;
		L_8 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_9;
		L_9 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_10;
		L_10 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_12;
		L_12 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_13;
		L_13 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_14;
		L_14 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0079:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC_AdjustorThunk (RuntimeObject * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, ((*(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)UnBox(L_1, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// int hashCode = HashCode.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(providerType);
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_2, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(subsystemTypeOverride);
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_4, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsHorizontalPlaneDetection.GetHashCode();
		bool L_6;
		L_6 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsVerticalPlaneDetection.GetHashCode();
		bool L_8;
		L_8 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsArbitraryPlaneDetection.GetHashCode();
		bool L_10;
		L_10 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11;
		L_11 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsBoundaryVertices.GetHashCode();
		bool L_12;
		L_12 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsClassification.GetHashCode();
		bool L_14;
		L_14 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15;
		L_15 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13)), (int32_t)((int32_t)486187739))), (int32_t)L_15));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mE0F11B2378B0275A968BB6ECC1DE6D09E3ED8CC8 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___lhs0, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m6953E1B207A32E9A8A9BFDB28BA00D9628FD3930 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___lhs0, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m005AB31948BB907D11D7E64C051F6C08D2B4BFF2 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m1C036AD27F8B1E3EA9AFB22880B84637CC6693B8 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m0A7220BD30B6E87681E5D63B89FA177E24A93FD5 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_m4EEED029510C7B0273678827530C882EDA5B314F (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, float ___estimatedDistance1, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___raycast2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_0 = ___raycast2;
		IL2CPP_RUNTIME_CLASS_INIT(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_1;
		L_1 = XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0_inline(/*hidden argument*/NULL);
		*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_m3C4F9E15B1849B074BEFF8426DBE71F3F1E93564 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float ___estimatedDistance1, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___raycast2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_0 = ___raycast2;
		IL2CPP_RUNTIME_CLASS_INIT(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_1;
		L_1 = XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0_inline(/*hidden argument*/NULL);
		*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_RemoveRaycast_m1C8BC761375BCA3E3F4077690EB8719DDDC2B71E (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	{
		// public virtual void RemoveRaycast(TrackableId trackableId) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  Provider_GetChanges_m7F79213AA617C8206739FFE806E196E7D5A4BDAF (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultRaycast0, int32_t ___allocator1, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual TrackableChanges<XRRaycast> GetChanges(XRRaycast defaultRaycast, Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 ));
		TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  L_0 = V_0;
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  Provider_Raycast_mBEE3804BA51E701D3775CC4AC1AFD16FEB97FB72 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___defaultRaycastHit0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray1, int32_t ___trackableTypeMask2, int32_t ___allocator3, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("Raycasting using a Ray is not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_Raycast_mBEE3804BA51E701D3775CC4AC1AFD16FEB97FB72_RuntimeMethod_var)));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  Provider_Raycast_m848F042E5613BB90E3A933E19E8229D7C94914C0 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___defaultRaycastHit0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, int32_t ___trackableTypeMask2, int32_t ___allocator3, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("Raycasting using a screen point is not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_Raycast_m848F042E5613BB90E3A933E19E8229D7C94914C0_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF(__this, /*hidden argument*/SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke_back(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke_cleanup(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com_back(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com_cleanup(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->get_U3CsupportedTrackableTypesU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackedRaycastsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackedRaycastsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		//             public override int GetHashCode() => HashCode.Combine(
		//                 HashCode.ReferenceHash(id),
		// #if UNITY_2020_2_OR_NEWER
		//                 HashCode.ReferenceHash(providerType),
		//                 HashCode.ReferenceHash(subsystemTypeOverride),
		// #else
		//                 HashCode.ReferenceHash(subsystemImplementationType),
		// #endif
		//                 supportsViewportBasedRaycast.GetHashCode(),
		//                 supportsWorldBasedRaycast.GetHashCode(),
		//                 ((int)supportedTrackableTypes).GetHashCode(),
		//                 supportsTrackedRaycasts.GetHashCode());
		String_t* L_0;
		L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_2, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		bool L_12;
		L_12 = Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = HashCode_Combine_m23E4B1C1DC69FC295EAA04B5AC0ABB8BE40ABC9F(L_1, L_3, L_5, L_7, L_9, L_11, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, ((*(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)UnBox(L_1, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("XRRaycastSubsystemDescriptor:\nsupportsViewportBasedRaycast: {0}\nsupportsWorldBasedRaycast: {1}",
		//     supportsViewportBasedRaycast, supportsWorldBasedRaycast);
		bool L_0;
		L_0 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method)
{
	{
		//                 return
		//                     String.Equals(id, other.id) &&
		// #if UNITY_2020_2_OR_NEWER
		//                     ReferenceEquals(providerType, other.providerType) &&
		//                     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		// #else
		//                     ReferenceEquals(subsystemImplementationType, other.subsystemImplementationType) &&
		// #endif
		//                     supportsViewportBasedRaycast == other.supportsViewportBasedRaycast &&
		//                     supportsWorldBasedRaycast == other.supportsWorldBasedRaycast &&
		//                     supportedTrackableTypes == other.supportedTrackableTypes;
		String_t* L_0;
		L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))))
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		Type_t * L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_6))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_11;
		L_11 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
	}

IL_0060:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146_AdjustorThunk (RuntimeObject * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m9381F5CB3E9EBEBFFFBA7D82FED170AB0DBB30C8 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___lhs0, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) { return lhs.Equals(rhs); }
		Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mF05D0667B661C74FD87B918E24CBE4BA7E21D317 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___lhs0, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) { return !lhs.Equals(rhs); }
		Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m23A09DFBE9B001EA5716EF0D11FAB9878AEFA634 (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mA1D84CAD4F173F45729BCCF7F9203317BC16E88C (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m9C33B460B119788705D6CF145510A3CA3320CFCA (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider::TryAddReferencePoint(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddReferencePoint_mEECEE05AE6CE36CC4DFC6B34EB2328203ABF74D2 (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * ___referencePoint1, const RuntimeMethod* method)
{
	{
		// referencePoint = default(XRReferencePoint);
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * L_0 = ___referencePoint1;
		il2cpp_codegen_initobj(L_0, sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider::TryAttachReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAttachReferencePoint_m6B37B8E188234F1B273B4CCCBA86C3369A9056EF (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableToAffix0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * ___referencePoint2, const RuntimeMethod* method)
{
	{
		// referencePoint = default(XRReferencePoint);
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * L_0 = ___referencePoint2;
		il2cpp_codegen_initobj(L_0, sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider::TryRemoveReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryRemoveReferencePoint_m715A9000B06295D71581229BCCE534B5F1BDB5E2 (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___referencePointId0, const RuntimeMethod* method)
{
	{
		// public virtual bool TryRemoveReferencePoint(TrackableId referencePointId) => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mCD64559C157D9CBFD1E7A094FDC3A97DD5333683 (Provider_t7974F3BD624EC305575E361EE0BCAAA3DC5B253C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m0FD1F0E44A64E3599BEF42CBF87EB8BA51597EB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m0FD1F0E44A64E3599BEF42CBF87EB8BA51597EB4(__this, /*hidden argument*/SubsystemProvider_1__ctor_m0FD1F0E44A64E3599BEF42CBF87EB8BA51597EB4_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_pinvoke(const Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F& unmarshaled, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_pinvoke_back(const Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_pinvoke& marshaled, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_pinvoke_cleanup(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_com(const Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F& unmarshaled, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_com_back(const Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_com& marshaled, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshal_com_cleanup(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_mED080A0CEFDE276C713667401E6CA5453FEE8230 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_mED080A0CEFDE276C713667401E6CA5453FEE8230_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_mED080A0CEFDE276C713667401E6CA5453FEE8230_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m333CA07F707762A80009E7CD6F5B51CEDE3ACC26 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m333CA07F707762A80009E7CD6F5B51CEDE3ACC26_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Cinfo_set_providerType_m333CA07F707762A80009E7CD6F5B51CEDE3ACC26_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m27397B992B7536A3F1B81CB27B0EEE4C86AD7791 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_m27397B992B7536A3F1B81CB27B0EEE4C86AD7791_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m27397B992B7536A3F1B81CB27B0EEE4C86AD7791_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m1990BD9DB431745135B04665C4A4DB2A23E142D6 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m1990BD9DB431745135B04665C4A4DB2A23E142D6_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m1990BD9DB431745135B04665C4A4DB2A23E142D6_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// int hash = HashCode.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		// hash = hash * 486187739 + HashCode.ReferenceHash(providerType);
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_mED080A0CEFDE276C713667401E6CA5453FEE8230_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_2, /*hidden argument*/NULL);
		// hash = hash * 486187739 + HashCode.ReferenceHash(subsystemTypeOverride);
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m27397B992B7536A3F1B81CB27B0EEE4C86AD7791_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_4, /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m2D92CDC387387B380C281CE4FFD26A62D889E133(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, ((*(Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)UnBox(L_1, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m440F4649C6BFDCECAD80ABF23873BB9C82F9938A(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___other0, const RuntimeMethod* method)
{
	{
		//                 return
		//                     String.Equals(id, other.id) &&
		// #if UNITY_2020_2_OR_NEWER
		//                     ReferenceEquals(providerType, other.providerType) &&
		//                     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride);
		String_t* L_0;
		L_0 = Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_mED080A0CEFDE276C713667401E6CA5453FEE8230_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Cinfo_get_providerType_mED080A0CEFDE276C713667401E6CA5453FEE8230_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))))
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m27397B992B7536A3F1B81CB27B0EEE4C86AD7791_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)__this, /*hidden argument*/NULL);
		Type_t * L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m27397B992B7536A3F1B81CB27B0EEE4C86AD7791_inline((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_6))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32_AdjustorThunk (RuntimeObject * __this, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * _thisAdjusted = reinterpret_cast<Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m12FF0D2B4437F9C4F91E26A307E850F8929ADEF6 (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___lhs0, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m5F711CB5097A3A12D8295CC8DFFD54C111464C3B (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___lhs0, Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m0F0998C9F4B8539D74F3A94564A498FB94362B32((Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m2A20FC49495EFF34A01887ABF28338FD2511C97A (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mC3937DB37B165BFDB925D51BDFB63DBAE14E5CE6 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_m44516D330A225A42401D9F850CAB45A1781656A7 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___updateParams0, const RuntimeMethod* method)
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams) { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_mC15A02B030984925D814C8CF68EB96D4BD268236 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___updateParams0, Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___configuration1, const RuntimeMethod* method)
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams, Configuration configuration) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedFeatures_mD37FD382547DA72EF30A32B33AB2660101B248D5 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual Feature requestedFeatures => Feature.None;
		return (uint64_t)(((int64_t)((int64_t)0)));
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedTrackingMode_mC88877D2BC7250D543457D640A20AE183EB9BFE5 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// get => Feature.None;
		return (uint64_t)(((int64_t)((int64_t)0)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedTrackingMode_mE84B329D9C903D6D47CBA2D11DF144EADB1D2345 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// set {}
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_currentTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_currentTrackingMode_m597AC294BE6020DFD42DAE027B2E62D5906ABD34 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual Feature currentTrackingMode => Feature.None;
		return (uint64_t)(((int64_t)((int64_t)0)));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  Provider_GetConfigurationDescriptors_mDBC0CC4E857D4C838349D32ED2FBDFE75C3A5A39 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA ));
		NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m91FDA48A481008AB6F408823ACFA4E51B6710F17 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Reset_mC07FE81BB38D7C6F1123D477E078BCA98DD0007E (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Reset() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationPause_mDDA05F7C18D3B1E26F0B468CBC454557788D147B (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnApplicationPause() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationResume_m598667339799D80D929DEBBA5C197AC4C394C52A (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnApplicationResume() { }
		return;
	}
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Provider_get_nativePtr_m36BB948CA26F060AE9F9B5E77191B48605C5770B (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual IntPtr nativePtr => IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * Provider_GetAvailabilityAsync_m0C73C4907A03BA2F018EA2C0CE66C9C17423C6DD (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionAvailability>.CreateResolvedPromise(SessionAvailability.None);
		Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * L_0;
		L_0 = Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C(0, /*hidden argument*/Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88 * Provider_InstallAsync_m17CAA895097CD78BC743DD1CA0CB4B6F5F7091D6 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_m1C9702FA1520BB681C0979C7264DA107FC2AD627_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionInstallationStatus>.CreateResolvedPromise(SessionInstallationStatus.ErrorInstallNotSupported);
		Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88 * L_0;
		L_0 = Promise_1_CreateResolvedPromise_m1C9702FA1520BB681C0979C7264DA107FC2AD627(4, /*hidden argument*/Promise_1_CreateResolvedPromise_m1C9702FA1520BB681C0979C7264DA107FC2AD627_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m3E9021C49EADF2BE9853FD13A23650CE5237A2BF (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual TrackingState trackingState => TrackingState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_notTrackingReason_mD6C96A5620A1DD87BCB86710E9460A41C5B18F66 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual NotTrackingReason notTrackingReason => NotTrackingReason.Unsupported;
		return (int32_t)(6);
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Provider_get_sessionId_m28A8F75715D7469B0F555CAC2E9B7D71B68CAFCE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Guid sessionId => Guid.Empty;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateEnabled_m4EC0EF72F182CE2BBF27666D5750E46D54E797EB (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool matchFrameRateEnabled => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateRequested_m32C8D538076876248908EBA9F11F31D249894C37 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_matchFrameRateRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_matchFrameRateRequested_m22D49ABF01EEF1D750FD86A7E6D67BE6A462E0DC (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Matching frame rate is not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6EAFD4C3B23645C412BB41A74CBFEB5A62E11BF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_matchFrameRateRequested_m22D49ABF01EEF1D750FD86A7E6D67BE6A462E0DC_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("Querying the frame rate is not supported by this session subsystem.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66(__this, /*hidden argument*/SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke_back(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke_cleanup(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com_back(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com_cleanup(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline(_thisAdjusted, ___value0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// int hash = HashCode.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		// hash = hash * 486187739 + HashCode.ReferenceHash(providerType);
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_2, /*hidden argument*/NULL);
		// hash = hash * 486187739 + HashCode.ReferenceHash(subsystemTypeOverride);
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_4, /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportsInstall.GetHashCode();
		bool L_6;
		L_6 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportsMatchFrameRate.GetHashCode();
		bool L_8;
		L_8 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method)
{
	{
		//                 return
		//                     string.Equals(id, other.id) &&
		// #if UNITY_2020_2_OR_NEWER
		//                     ReferenceEquals(providerType, other.providerType) &&
		//                     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		// #else
		//                     ReferenceEquals(subsystemImplementationType, other.subsystemImplementationType) &&
		// #endif
		//                     supportsInstall == other.supportsInstall &&
		//                     supportsMatchFrameRate == other.supportsMatchFrameRate;
		String_t* L_0;
		L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))))
		{
			goto IL_0051;
		}
	}
	{
		Type_t * L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		Type_t * L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_6))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
	}

IL_0051:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77_AdjustorThunk (RuntimeObject * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is Cinfo && Equals((Cinfo)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, ((*(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)UnBox(L_1, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mC09DBC686396509BF5CF7B2262E975DD1C5CC22A (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___lhs0, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m70FD83E1EA5AD00665F7DBA35AC5C29994E40778 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___lhs0, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, int32_t ___status0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);

}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageRequestCompleteDelegate__ctor_mB4E3DC02E880D5890B499CFD8BC47B4C47CCD2BC (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate::Invoke(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageRequestCompleteDelegate_Invoke_mA88CBFF9DDB699B0AB6804612450DA27A2070081 (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, int32_t ___status0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
					else
						GenericVirtActionInvoker5< int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
					else
						VirtActionInvoker5< int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate::BeginInvoke(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnImageRequestCompleteDelegate_BeginInvoke_m00104A8D14640F10CF8025827E01F94850E7BA58 (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, int32_t ___status0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42_il2cpp_TypeInfo_var, &___status0);
	__d_args[1] = Box(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var, &___conversionParams1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dataPtr2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___dataLength3);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageRequestCompleteDelegate_EndInvoke_mF362C97CF354BF261E99BB4E5C012DE01FB9D2FC (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_dataPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr dataPtr => m_DataPtr;
		intptr_t L_0 = __this->get_m_DataPtr_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_dataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int dataLength => m_DataLength;
		int32_t L_0 = __this->get_m_DataLength_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_rowStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride => m_RowStride;
		int32_t L_0 = __this->get_m_RowStride_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_pixelStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride => m_PixelStride;
		int32_t L_0 = __this->get_m_PixelStride_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::.ctor(System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo__ctor_m9436263326B20757A7D96BD40729B913FB8B223F (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, intptr_t ___dataPtr0, int32_t ___dataLength1, int32_t ___rowStride2, int32_t ___pixelStride3, const RuntimeMethod* method)
{
	{
		// this.m_DataPtr = dataPtr;
		intptr_t L_0 = ___dataPtr0;
		__this->set_m_DataPtr_0((intptr_t)L_0);
		// this.m_DataLength = dataLength;
		int32_t L_1 = ___dataLength1;
		__this->set_m_DataLength_1(L_1);
		// this.m_RowStride = rowStride;
		int32_t L_2 = ___rowStride2;
		__this->set_m_RowStride_2(L_2);
		// this.m_PixelStride = pixelStride;
		int32_t L_3 = ___pixelStride3;
		__this->set_m_PixelStride_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo__ctor_m9436263326B20757A7D96BD40729B913FB8B223F_AdjustorThunk (RuntimeObject * __this, intptr_t ___dataPtr0, int32_t ___dataLength1, int32_t ___rowStride2, int32_t ___pixelStride3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	Cinfo__ctor_m9436263326B20757A7D96BD40729B913FB8B223F(_thisAdjusted, ___dataPtr0, ___dataLength1, ___rowStride2, ___pixelStride3, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return (dataPtr.Equals(other.dataPtr) && dataLength.Equals(other.dataLength)
		//     && rowStride.Equals(other.rowStride) && pixelStride.Equals(other.pixelStride));
		intptr_t L_0;
		L_0 = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1;
		L_1 = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)(&___other0), /*hidden argument*/NULL);
		intptr_t L_2 = L_1;
		RuntimeObject * L_3 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_2);
		bool L_4;
		L_4 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_5;
		L_5 = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6;
		L_6 = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)(&___other0), /*hidden argument*/NULL);
		bool L_7;
		L_7 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_8;
		L_8 = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9;
		L_9 = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)(&___other0), /*hidden argument*/NULL);
		bool L_10;
		L_10 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_11;
		L_11 = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12;
		L_12 = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)(&___other0), /*hidden argument*/NULL);
		bool L_13;
		L_13 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0060:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365_AdjustorThunk (RuntimeObject * __this, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m3D18D26EAA0FED30423B3C8B38961816A1472F62 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(System.Object obj) => obj is Cinfo other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)UnBox(L_1, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC_il2cpp_TypeInfo_var))));
		Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  L_2 = V_0;
		bool L_3;
		L_3 = Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m3D18D26EAA0FED30423B3C8B38961816A1472F62_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m3D18D26EAA0FED30423B3C8B38961816A1472F62(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo,UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m11FC127FB9F71441C941022E6580542FE5B2B6A1 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___lhs0, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo,UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m6FFC6D887D23D3E9BAA0C2EA097414D097A79C92 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___lhs0, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) => !(lhs == rhs);
		Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  L_0 = ___lhs0;
		Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  L_1 = ___rhs1;
		bool L_2;
		L_2 = Cinfo_op_Equality_m11FC127FB9F71441C941022E6580542FE5B2B6A1(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mC3F4D4AA0494F15A8E0B0F765FA005C1A574CCCF (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public override int GetHashCode() => HashCode.Combine(
		//     dataPtr.GetHashCode(),
		//     dataLength.GetHashCode(),
		//     rowStride.GetHashCode(),
		//     pixelStride.GetHashCode());
		intptr_t L_0;
		L_0 = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7;
		L_7 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = HashCode_Combine_mCF5A2D8E169AE770B379DCD8DE5229296453BD82(L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mC3F4D4AA0494F15A8E0B0F765FA005C1A574CCCF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mC3F4D4AA0494F15A8E0B0F765FA005C1A574CCCF(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m4D93FD001F1E9EC984CBFB7997FE480E212F83DF (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E08267B4D40BEF3D6FD241002FD8395E431BF8A);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// => $"dataPtr: 0x{dataPtr.ToInt64():x} length:{dataLength} rowStride:{rowStride} pixelStride:{pixelStride}";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		intptr_t L_2;
		L_2 = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		int64_t L_3;
		L_3 = IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A((intptr_t*)(&V_0), /*hidden argument*/NULL);
		int64_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_1;
		int32_t L_7;
		L_7 = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_6;
		int32_t L_11;
		L_11 = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_10;
		int32_t L_15;
		L_15 = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		String_t* L_18;
		L_18 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral6E08267B4D40BEF3D6FD241002FD8395E431BF8A, L_14, /*hidden argument*/NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m4D93FD001F1E9EC984CBFB7997FE480E212F83DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_ToString_m4D93FD001F1E9EC984CBFB7997FE480E212F83DF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  AsyncConversion_get_conversionParams_mC12D99AB4A6B93A6B0C5D40611EE0F93DE19B3B1_inline (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, const RuntimeMethod* method)
{
	{
		// public ConversionParams conversionParams { get; private set; }
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_0 = __this->get_U3CconversionParamsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncConversion_set_conversionParams_mF6BE9EBE867D706FCFF2E685319900E67A9BE417_inline (AsyncConversion_t1B3B9B398D763F0F12781993336A2E048C86E787 * __this, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___value0, const RuntimeMethod* method)
{
	{
		// public ConversionParams conversionParams { get; private set; }
		ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  L_0 = ___value0;
		__this->set_U3CconversionParamsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_nativeHandle_mAB50E5453B3ED928372EC45DF5E0F4E2ADF341BC_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public int nativeHandle => m_NativeHandle;
		int32_t L_0 = __this->get_m_NativeHandle_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Cinfo_get_dimensions_mA8AFF01543915A325187A41369F6DA11231A3E50_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int dimensions => m_Dimensions;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_m_Dimensions_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_planeCount_m88E3C67F9E06017A46B7FF90368B24A6F48E1271_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public int planeCount => m_PlaneCount;
		int32_t L_0 = __this->get_m_PlaneCount_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Cinfo_get_timestamp_mAF782E097B2324BD673D8D98C68CA2D6CA4891EF_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public double timestamp => m_Timestamp;
		double L_0 = __this->get_m_Timestamp_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_format_m42CBF60A496CB04541CC04C97E1745AFBC7259BD_inline (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * __this, const RuntimeMethod* method)
{
	{
		// public Format format => m_Format;
		int32_t L_0 = __this->get_m_Format_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ConversionParams_get_inputRect_mE75F22AF739DFB5506127DF164E0AEF851702756_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	{
		// get => m_InputRect;
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_0 = __this->get_m_InputRect_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m73F6338FDA97617E73EEB513E662B6F1C472352A_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_InputRect = value;
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_0 = ___value0;
		__this->set_m_InputRect_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ConversionParams_get_outputDimensions_m83C9D960C805CA2748AA9AAAC2A2986A397B7033_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	{
		// get => m_OutputDimensions;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_m_OutputDimensions_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_mD66BE3ACB6EF977C8C95836F6BD48635316F4CA9_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_OutputDimensions = value;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = ___value0;
		__this->set_m_OutputDimensions_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m727E479981BF00635D645C88D4D987EB598A0E5F_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	{
		// get => m_Format;
		int32_t L_0 = __this->get_m_Format_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mF24CF134EAF9AD891912C785CF3A6C14297F543C_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Format = value;
		int32_t L_0 = ___value0;
		__this->set_m_Format_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_transformation_mFB57F05831CF417808A6C41F170768D9F66A7EF3_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, const RuntimeMethod* method)
{
	{
		// get => m_Transformation;
		int32_t L_0 = __this->get_m_Transformation_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_m0FFF10EB0BB1E28AACC097D166FA223B560E8E79_inline (ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Transformation = value;
		int32_t L_0 = ___value0;
		__this->set_m_Transformation_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride { get; internal set; }
		int32_t L_0 = __this->get_U3CrowStrideU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plane_set_rowStride_mDA36D4459E3B9E2A8B34D8363A0F4A4C11422E55_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int rowStride { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrowStrideU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride { get; internal set; }
		int32_t L_0 = __this->get_U3CpixelStrideU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plane_set_pixelStride_mB70EF0731AC41B2B820885A33DC8DCD94FB5847E_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int pixelStride { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpixelStrideU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<byte> data { get; internal set; }
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0 = __this->get_U3CdataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plane_set_data_m2A4446744978FF53B38A650E3E053663008A4393_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___value0, const RuntimeMethod* method)
{
	{
		// public NativeArray<byte> data { get; internal set; }
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0 = ___value0;
		__this->set_U3CdataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m7168F2BEAB1E7D53C4A1308A0BE686CB6ACAC37D_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mA17A612B4FB9125843E254DB825177C3B1834235_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_capabilities_m09C807B048E192438A9B0D0C17808FF5BFF81A8A_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = __this->get_U3CcapabilitiesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_capabilities_mB2A17E458179A44C2EACB82699FBC5B5611C7580_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// Capabilities capabilities { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcapabilitiesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7ACB39F94D161A19473B51245A60F0FE3380E9C6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m865B26BBCBE9E542D09269A2CA6BD1FC47976AF2_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m0008239CE298C4881102FED287EC52224601A3A5_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3494B3DBDB5F113CD0DB5380E246F22EBF9FE39A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m585F6DF7C070965F732F3A4C5B6BF11A4D2DF23F_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMovingImages_m7B1E2171F1304A73339266B64548CF305EFEEA91_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = __this->get_U3CsupportsMovingImagesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_requiresPhysicalImageDimensions_mEED8602BF9D390F19582D3F706A9C93333AFB0C7_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = __this->get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMutableLibrary_mCD0988DBB5810975CB97BEDD9B2E6B6C168D6E19_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = __this->get_U3CsupportsMutableLibraryU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsImageValidation_m417DC16FCA795DB24C8CAA2C81A5E84855D077BD_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsImageValidation { get; set; }
		bool L_0 = __this->get_U3CsupportsImageValidationU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsImageValidation_m9CA1173736665E4DC3B594EE3357416A8A20B266_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsImageValidation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsImageValidationU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m82A28CC42BE4BA1FF20AE356908C272CC9103F31_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mCCF96D0DFB6DB4F146EA74D30E45A2230791D09F_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->get_U3CsupportsClassificationU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycast defaultValue => s_Default;
		IL2CPP_RUNTIME_CLASS_INIT(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_0 = ((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var))->get_s_Default_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_mDA4920EAF71BB44AED95212F4513B74096E4F7FD_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mC2EE8A4B5C263D087B8F3924118EDFAB62CE0035_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->get_U3CsupportedTrackableTypesU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackedRaycastsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackedRaycastsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m100D8CE7C79C3052784A76835CB30A99E54E418B_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mD7343957DA2CC53442EE463285B402E743AB5F6D_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_mED080A0CEFDE276C713667401E6CA5453FEE8230_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m333CA07F707762A80009E7CD6F5B51CEDE3ACC26_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m27397B992B7536A3F1B81CB27B0EEE4C86AD7791_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m1990BD9DB431745135B04665C4A4DB2A23E142D6_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m3DF3CC6C70EF53DFA651C998BCCEC60132DF3E23_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m219B4D8D74447725A14F7BD44138EBA80D24347C_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_mEB155EF1924D1549BAA15B29CABA3396F872A8AB_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m151F963D473554CDCC0C403883C16AB111751716_inline (Cinfo_t04039019CC240855A566C51C5F0DD8D0D6440E9F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m0DA3A6C9EAC6743D765D06C5388E069FCC60DC74_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mEFA8A5F68BEA841ED51B8D17DAF2E933BA7893EC_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr dataPtr => m_DataPtr;
		intptr_t L_0 = __this->get_m_DataPtr_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int dataLength => m_DataLength;
		int32_t L_0 = __this->get_m_DataLength_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride => m_RowStride;
		int32_t L_0 = __this->get_m_RowStride_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride => m_PixelStride;
		int32_t L_0 = __this->get_m_PixelStride_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
