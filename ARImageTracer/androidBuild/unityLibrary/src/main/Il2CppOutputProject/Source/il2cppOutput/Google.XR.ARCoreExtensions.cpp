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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68;
// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs>
struct Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852;
// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>
struct Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t31868ABD2D8EA88442789687465039D339583446;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct IEnumerable_1_tB6D989F94BEBC4CEA1F1932B9F420679C687E0AB;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_tDED98C236097B36F9015B396398179A6F8A62E50;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t69444E6E06FA6776283024710ADC0302F2700BFD;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.XR.ARSubsystems.XRCameraConfiguration[]
struct XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874;
// Google.XR.ARCoreExtensions.ARCloudAnchor
struct ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2;
// Google.XR.ARCoreExtensions.ARCloudReferencePoint
struct ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8;
// Google.XR.ARCoreExtensions.ARCoreRecordingConfig
struct ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// Google.XR.ARCoreExtensions.Internal.AnchorApi
struct AnchorApi_t3A049E10C4D90ADA2ED7137434E4E704B75F4C04;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager
struct AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Google.XR.ARCoreExtensions.Internal.CameraConfigApi
struct CameraConfigApi_t5B2F9B8F2E8CBCD9F180A3BBF981E82D53AA0BCC;
// Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi
struct CameraConfigFilterApi_tB98FB05FD798F19414A81AB4A3755812FB33395F;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Google.XR.ARCoreExtensions.Internal.DllImportNoop
struct DllImportNoop_t9D582D77B6E6AB33EC25AAD8CE1CB739766E36F6;
// Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute
struct DynamicHelpAttribute_t2C60C0357462E75E3373554A96D4A1240451061D;
// Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute
struct EnumFlagsAttribute_tFF62A6C6546E4C20A061B544CD5625FEA26AB545;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// Google.XR.ARCoreExtensions.Internal.HelpAttribute
struct HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Google.XR.ARCoreExtensions.Internal.IOSSupportManager
struct IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Google.XR.ARCoreExtensions.Internal.PoseApi
struct PoseApi_t795F24BC590476D63047FAB7408EBA9060A3D3FB;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Google.XR.ARCoreExtensions.Internal.RecordingConfigApi
struct RecordingConfigApi_t9B63FD00BF9FD846B79A1615636FE0F6CC19C2E9;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// Google.XR.ARCoreExtensions.Internal.RuntimeConfig
struct RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Google.XR.ARCoreExtensions.Internal.SessionApi
struct SessionApi_t4EF1A6D105FCB7D45EE8738968F90FFA7353D489;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Google.XR.ARCoreExtensions.VersionInfo
struct VersionInfo_t3BA36D0B034CC27309715908870EC67A3975F3C3;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiPlaybackStatus_t1DE9BCFBDE5A37FE348C3368F76B3E187F6031DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiRecordingStatus_tA27B65127117F901AA792212714998D585BC4D02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VersionInfo_t3BA36D0B034CC27309715908870EC67A3975F3C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral144C9A7573B37A72B18C270A0B91AF059D1D9DF9;
IL2CPP_EXTERN_C String_t* _stringLiteral163E615278B2AE83873F54F03D93170DAB900F53;
IL2CPP_EXTERN_C String_t* _stringLiteral1FC29683F6E19781A0897EEB405C7FEA0CAB7A50;
IL2CPP_EXTERN_C String_t* _stringLiteral20C4D5B09FCD2823849C23ABD4C8823DBF46D34C;
IL2CPP_EXTERN_C String_t* _stringLiteral245880CA750529601C4FF228E2CF3A8ECA5C242B;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9F0CE6F09D40E3E2188659A1979CAB154E7F9F;
IL2CPP_EXTERN_C String_t* _stringLiteral43CD37663DCAD9C43ADFC3C4BB6EE71A547239F6;
IL2CPP_EXTERN_C String_t* _stringLiteral4AB6AED1D1A9735B4C548FE92C2A4516197E877C;
IL2CPP_EXTERN_C String_t* _stringLiteral4C62DCAF58F81C88FBE505616A5F9788292BBED5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D245519C02FC2DAAFDBB89D9EE851632CD173B6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral597CF650E368D8FFF2EEA95AFA7307F106D1A7DE;
IL2CPP_EXTERN_C String_t* _stringLiteral5B13EAD05D03F70A5E4B127342469A013FE345E8;
IL2CPP_EXTERN_C String_t* _stringLiteral5C831849415D472ACDAD3625736030C927879A25;
IL2CPP_EXTERN_C String_t* _stringLiteral612DE3B7F41D577F1CE7C3E2F28F03667E42828E;
IL2CPP_EXTERN_C String_t* _stringLiteral64AE57C4A1D5795E1348D838B9F774F70790F43B;
IL2CPP_EXTERN_C String_t* _stringLiteral6A5EDE88A442D395F8744B1AB0556E1D8A4A3E5E;
IL2CPP_EXTERN_C String_t* _stringLiteral709DBA267E69E34DE784F99499679069BB3F16AC;
IL2CPP_EXTERN_C String_t* _stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860;
IL2CPP_EXTERN_C String_t* _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87;
IL2CPP_EXTERN_C String_t* _stringLiteral8230FFF973A77F0571F96434859DEEAADF8D514F;
IL2CPP_EXTERN_C String_t* _stringLiteral86A44329ED3FC05608086EDA5D34229E1DE304F7;
IL2CPP_EXTERN_C String_t* _stringLiteral899FED050775F167B273CB31245A56C36C4BAE41;
IL2CPP_EXTERN_C String_t* _stringLiteral8E99BC28F79DF64079057E43A8E4347F9DAD5356;
IL2CPP_EXTERN_C String_t* _stringLiteral972007DE63DFA651A782FC6ADF43CF5613C4457F;
IL2CPP_EXTERN_C String_t* _stringLiteral97737379DB2CF719EFFC9E4F6C55519041321878;
IL2CPP_EXTERN_C String_t* _stringLiteralB071B67EA880E47A0C15DB43BAE07EFF06807B73;
IL2CPP_EXTERN_C String_t* _stringLiteralB15C92D5753736212986CC97F794B6E95F8F532B;
IL2CPP_EXTERN_C String_t* _stringLiteralB74BE110B2F9A30187194FC17F1EE846327FF92B;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6D3D4D29E5DDD25AA66877ECD85907DE001485;
IL2CPP_EXTERN_C String_t* _stringLiteralBC97C2FBB5C80543B8895530F2123C3D6F58ACCB;
IL2CPP_EXTERN_C String_t* _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A;
IL2CPP_EXTERN_C String_t* _stringLiteralCD45BA04148BC6D381AD028D42EDD7E2B52F18D2;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414;
IL2CPP_EXTERN_C String_t* _stringLiteralCED6DE2A2E63EB105631D6AC3A555E753B240B31;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5EC57E235B09D7CCE11FFEF58DACFBC36C78D4;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F;
IL2CPP_EXTERN_C String_t* _stringLiteralDC78D2CA522842EDB61180393A4F9CD04B971BD4;
IL2CPP_EXTERN_C String_t* _stringLiteralE2565802769C320CCB995CB20049AA4A4C8148C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE72C6333E41274633A472EB00E664E60390F9953;
IL2CPP_EXTERN_C String_t* _stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB;
IL2CPP_EXTERN_C String_t* _stringLiteralFA6625D3A1AECCE03CF6A02FC4F922183297BFE0;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFB6CCA9FBB351C07165F2A4278DD99B4969FAE12;
IL2CPP_EXTERN_C String_t* _stringLiteralFBF791BC4E29217DF89E7DCBF6C32D5FF5C440C0;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D;
IL2CPP_EXTERN_C const RuntimeMethod* ARCoreExtensions_BeforeConfigurationChanged_m2183D377E2C46DBB0DC36176A336814465CF0CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARCoreExtensions_BeforeGetCameraConfiguration_m30B986E60FFC6E2A48E4138A9C2E6A44184DE53D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARCoreExtensions_OnPermissionRequestFinish_m41B17EC88017206E59D308AA52104559FE97C1ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisString_t_mA8931526CE5195A03E3E5E8FE10BC1F2D88644E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m18AF9F9FD246459CB92009127F397E365B5CA278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC_m80996E88A6469B8E5831343B8C8D9A7D295D455E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOSSupportManager_OnFrameUpdate_m86A01EEC08F91419133E4585789DA0C6FDA79520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_m3199F99F23D3D8F772A83E261B5752B2CE004238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8_m2F1F42F843057EDDE85DBAF8AAF0B66A868D3B1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t61177757D94299B3EE41C8369C11543B25DF2E16 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____slots_8)); }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A, ____items_1)); }
	inline XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* get__items_1() const { return ____items_1; }
	inline XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A_StaticFields, ____emptyArray_5)); }
	inline XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.ARAnchorManagerExtensions
struct  ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2  : public RuntimeObject
{
public:

public:
};

struct ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_StaticFields
{
public:
	// System.String Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::_gameObjectName
	String_t* ____gameObjectName_0;

public:
	inline static int32_t get_offset_of__gameObjectName_0() { return static_cast<int32_t>(offsetof(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_StaticFields, ____gameObjectName_0)); }
	inline String_t* get__gameObjectName_0() const { return ____gameObjectName_0; }
	inline String_t** get_address_of__gameObjectName_0() { return &____gameObjectName_0; }
	inline void set__gameObjectName_0(String_t* value)
	{
		____gameObjectName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameObjectName_0), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions
struct  ARCoreHandleExtensions_t3EB8D2060D5247369AD606B7E1165622529B2D8E  : public RuntimeObject
{
public:

public:
};


// Google.XR.ARCoreExtensions.ARPlaybackManager
struct  ARPlaybackManager_tA539AE08770DD3D648CE2422D0A1919C6A7089A2  : public RuntimeObject
{
public:

public:
};


// Google.XR.ARCoreExtensions.ARRecordingManager
struct  ARRecordingManager_t641954A89C503F51B54489F3F726D49D354BAFBF  : public RuntimeObject
{
public:

public:
};


// Google.XR.ARCoreExtensions.Internal.AnchorApi
struct  AnchorApi_t3A049E10C4D90ADA2ED7137434E4E704B75F4C04  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ApiConstants
struct  ApiConstants_t5833DE853521EBBBE62F205EEE7E5EFAFC18F73A  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Google.XR.ARCoreExtensions.Internal.CachedData
struct  CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2  : public RuntimeObject
{
public:

public:
};

struct CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Google.XR.ARCoreExtensions.Internal.CachedData::_cachedData
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ____cachedData_0;

public:
	inline static int32_t get_offset_of__cachedData_0() { return static_cast<int32_t>(offsetof(CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_StaticFields, ____cachedData_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get__cachedData_0() const { return ____cachedData_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of__cachedData_0() { return &____cachedData_0; }
	inline void set__cachedData_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		____cachedData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedData_0), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.Internal.CameraConfigApi
struct  CameraConfigApi_t5B2F9B8F2E8CBCD9F180A3BBF981E82D53AA0BCC  : public RuntimeObject
{
public:

public:
};


// Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi
struct  CameraConfigFilterApi_tB98FB05FD798F19414A81AB4A3755812FB33395F  : public RuntimeObject
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


// Google.XR.ARCoreExtensions.Internal.PoseApi
struct  PoseApi_t795F24BC590476D63047FAB7408EBA9060A3D3FB  : public RuntimeObject
{
public:

public:
};


// Google.XR.ARCoreExtensions.Internal.RecordingConfigApi
struct  RecordingConfigApi_t9B63FD00BF9FD846B79A1615636FE0F6CC19C2E9  : public RuntimeObject
{
public:

public:
};


// Google.XR.ARCoreExtensions.Internal.SessionApi
struct  SessionApi_t4EF1A6D105FCB7D45EE8738968F90FFA7353D489  : public RuntimeObject
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


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct  SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
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

// Google.XR.ARCoreExtensions.VersionInfo
struct  VersionInfo_t3BA36D0B034CC27309715908870EC67A3975F3C3  : public RuntimeObject
{
public:

public:
};

struct VersionInfo_t3BA36D0B034CC27309715908870EC67A3975F3C3_StaticFields
{
public:
	// System.String Google.XR.ARCoreExtensions.VersionInfo::Version
	String_t* ___Version_0;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(VersionInfo_t3BA36D0B034CC27309715908870EC67A3975F3C3_StaticFields, ___Version_0)); }
	inline String_t* get_Version_0() const { return ___Version_0; }
	inline String_t** get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(String_t* value)
	{
		___Version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Version_0), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions
struct  XRCameraConfigurationExtensions_tEC48B7D85003F2AD745C8FDD916292EF9B926754  : public RuntimeObject
{
public:

public:
};


// System.Nullable`1<System.Double>
struct  Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct  Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct  Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct  SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct  SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// Google.XR.ARCoreExtensions.Internal.ApiPose
struct  ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 
{
public:
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qx
	float ___Qx_0;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qy
	float ___Qy_1;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qz
	float ___Qz_2;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qw
	float ___Qw_3;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::X
	float ___X_4;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Y
	float ___Y_5;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Z
	float ___Z_6;

public:
	inline static int32_t get_offset_of_Qx_0() { return static_cast<int32_t>(offsetof(ApiPose_tAF581C37F5096479763554653CDF56962FA421C3, ___Qx_0)); }
	inline float get_Qx_0() const { return ___Qx_0; }
	inline float* get_address_of_Qx_0() { return &___Qx_0; }
	inline void set_Qx_0(float value)
	{
		___Qx_0 = value;
	}

	inline static int32_t get_offset_of_Qy_1() { return static_cast<int32_t>(offsetof(ApiPose_tAF581C37F5096479763554653CDF56962FA421C3, ___Qy_1)); }
	inline float get_Qy_1() const { return ___Qy_1; }
	inline float* get_address_of_Qy_1() { return &___Qy_1; }
	inline void set_Qy_1(float value)
	{
		___Qy_1 = value;
	}

	inline static int32_t get_offset_of_Qz_2() { return static_cast<int32_t>(offsetof(ApiPose_tAF581C37F5096479763554653CDF56962FA421C3, ___Qz_2)); }
	inline float get_Qz_2() const { return ___Qz_2; }
	inline float* get_address_of_Qz_2() { return &___Qz_2; }
	inline void set_Qz_2(float value)
	{
		___Qz_2 = value;
	}

	inline static int32_t get_offset_of_Qw_3() { return static_cast<int32_t>(offsetof(ApiPose_tAF581C37F5096479763554653CDF56962FA421C3, ___Qw_3)); }
	inline float get_Qw_3() const { return ___Qw_3; }
	inline float* get_address_of_Qw_3() { return &___Qw_3; }
	inline void set_Qw_3(float value)
	{
		___Qw_3 = value;
	}

	inline static int32_t get_offset_of_X_4() { return static_cast<int32_t>(offsetof(ApiPose_tAF581C37F5096479763554653CDF56962FA421C3, ___X_4)); }
	inline float get_X_4() const { return ___X_4; }
	inline float* get_address_of_X_4() { return &___X_4; }
	inline void set_X_4(float value)
	{
		___X_4 = value;
	}

	inline static int32_t get_offset_of_Y_5() { return static_cast<int32_t>(offsetof(ApiPose_tAF581C37F5096479763554653CDF56962FA421C3, ___Y_5)); }
	inline float get_Y_5() const { return ___Y_5; }
	inline float* get_address_of_Y_5() { return &___Y_5; }
	inline void set_Y_5(float value)
	{
		___Y_5 = value;
	}

	inline static int32_t get_offset_of_Z_6() { return static_cast<int32_t>(offsetof(ApiPose_tAF581C37F5096479763554653CDF56962FA421C3, ___Z_6)); }
	inline float get_Z_6() const { return ___Z_6; }
	inline float* get_address_of_Z_6() { return &___Z_6; }
	inline void set_Z_6(float value)
	{
		___Z_6 = value;
	}
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.DllImportNoop
struct  DllImportNoop_t9D582D77B6E6AB33EC25AAD8CE1CB739766E36F6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.Rendering.SphericalHarmonicsL2
struct  SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 
{
public:
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;

public:
	inline static int32_t get_offset_of_shr0_0() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr0_0)); }
	inline float get_shr0_0() const { return ___shr0_0; }
	inline float* get_address_of_shr0_0() { return &___shr0_0; }
	inline void set_shr0_0(float value)
	{
		___shr0_0 = value;
	}

	inline static int32_t get_offset_of_shr1_1() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr1_1)); }
	inline float get_shr1_1() const { return ___shr1_1; }
	inline float* get_address_of_shr1_1() { return &___shr1_1; }
	inline void set_shr1_1(float value)
	{
		___shr1_1 = value;
	}

	inline static int32_t get_offset_of_shr2_2() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr2_2)); }
	inline float get_shr2_2() const { return ___shr2_2; }
	inline float* get_address_of_shr2_2() { return &___shr2_2; }
	inline void set_shr2_2(float value)
	{
		___shr2_2 = value;
	}

	inline static int32_t get_offset_of_shr3_3() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr3_3)); }
	inline float get_shr3_3() const { return ___shr3_3; }
	inline float* get_address_of_shr3_3() { return &___shr3_3; }
	inline void set_shr3_3(float value)
	{
		___shr3_3 = value;
	}

	inline static int32_t get_offset_of_shr4_4() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr4_4)); }
	inline float get_shr4_4() const { return ___shr4_4; }
	inline float* get_address_of_shr4_4() { return &___shr4_4; }
	inline void set_shr4_4(float value)
	{
		___shr4_4 = value;
	}

	inline static int32_t get_offset_of_shr5_5() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr5_5)); }
	inline float get_shr5_5() const { return ___shr5_5; }
	inline float* get_address_of_shr5_5() { return &___shr5_5; }
	inline void set_shr5_5(float value)
	{
		___shr5_5 = value;
	}

	inline static int32_t get_offset_of_shr6_6() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr6_6)); }
	inline float get_shr6_6() const { return ___shr6_6; }
	inline float* get_address_of_shr6_6() { return &___shr6_6; }
	inline void set_shr6_6(float value)
	{
		___shr6_6 = value;
	}

	inline static int32_t get_offset_of_shr7_7() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr7_7)); }
	inline float get_shr7_7() const { return ___shr7_7; }
	inline float* get_address_of_shr7_7() { return &___shr7_7; }
	inline void set_shr7_7(float value)
	{
		___shr7_7 = value;
	}

	inline static int32_t get_offset_of_shr8_8() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr8_8)); }
	inline float get_shr8_8() const { return ___shr8_8; }
	inline float* get_address_of_shr8_8() { return &___shr8_8; }
	inline void set_shr8_8(float value)
	{
		___shr8_8 = value;
	}

	inline static int32_t get_offset_of_shg0_9() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg0_9)); }
	inline float get_shg0_9() const { return ___shg0_9; }
	inline float* get_address_of_shg0_9() { return &___shg0_9; }
	inline void set_shg0_9(float value)
	{
		___shg0_9 = value;
	}

	inline static int32_t get_offset_of_shg1_10() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg1_10)); }
	inline float get_shg1_10() const { return ___shg1_10; }
	inline float* get_address_of_shg1_10() { return &___shg1_10; }
	inline void set_shg1_10(float value)
	{
		___shg1_10 = value;
	}

	inline static int32_t get_offset_of_shg2_11() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg2_11)); }
	inline float get_shg2_11() const { return ___shg2_11; }
	inline float* get_address_of_shg2_11() { return &___shg2_11; }
	inline void set_shg2_11(float value)
	{
		___shg2_11 = value;
	}

	inline static int32_t get_offset_of_shg3_12() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg3_12)); }
	inline float get_shg3_12() const { return ___shg3_12; }
	inline float* get_address_of_shg3_12() { return &___shg3_12; }
	inline void set_shg3_12(float value)
	{
		___shg3_12 = value;
	}

	inline static int32_t get_offset_of_shg4_13() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg4_13)); }
	inline float get_shg4_13() const { return ___shg4_13; }
	inline float* get_address_of_shg4_13() { return &___shg4_13; }
	inline void set_shg4_13(float value)
	{
		___shg4_13 = value;
	}

	inline static int32_t get_offset_of_shg5_14() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg5_14)); }
	inline float get_shg5_14() const { return ___shg5_14; }
	inline float* get_address_of_shg5_14() { return &___shg5_14; }
	inline void set_shg5_14(float value)
	{
		___shg5_14 = value;
	}

	inline static int32_t get_offset_of_shg6_15() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg6_15)); }
	inline float get_shg6_15() const { return ___shg6_15; }
	inline float* get_address_of_shg6_15() { return &___shg6_15; }
	inline void set_shg6_15(float value)
	{
		___shg6_15 = value;
	}

	inline static int32_t get_offset_of_shg7_16() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg7_16)); }
	inline float get_shg7_16() const { return ___shg7_16; }
	inline float* get_address_of_shg7_16() { return &___shg7_16; }
	inline void set_shg7_16(float value)
	{
		___shg7_16 = value;
	}

	inline static int32_t get_offset_of_shg8_17() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg8_17)); }
	inline float get_shg8_17() const { return ___shg8_17; }
	inline float* get_address_of_shg8_17() { return &___shg8_17; }
	inline void set_shg8_17(float value)
	{
		___shg8_17 = value;
	}

	inline static int32_t get_offset_of_shb0_18() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb0_18)); }
	inline float get_shb0_18() const { return ___shb0_18; }
	inline float* get_address_of_shb0_18() { return &___shb0_18; }
	inline void set_shb0_18(float value)
	{
		___shb0_18 = value;
	}

	inline static int32_t get_offset_of_shb1_19() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb1_19)); }
	inline float get_shb1_19() const { return ___shb1_19; }
	inline float* get_address_of_shb1_19() { return &___shb1_19; }
	inline void set_shb1_19(float value)
	{
		___shb1_19 = value;
	}

	inline static int32_t get_offset_of_shb2_20() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb2_20)); }
	inline float get_shb2_20() const { return ___shb2_20; }
	inline float* get_address_of_shb2_20() { return &___shb2_20; }
	inline void set_shb2_20(float value)
	{
		___shb2_20 = value;
	}

	inline static int32_t get_offset_of_shb3_21() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb3_21)); }
	inline float get_shb3_21() const { return ___shb3_21; }
	inline float* get_address_of_shb3_21() { return &___shb3_21; }
	inline void set_shb3_21(float value)
	{
		___shb3_21 = value;
	}

	inline static int32_t get_offset_of_shb4_22() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb4_22)); }
	inline float get_shb4_22() const { return ___shb4_22; }
	inline float* get_address_of_shb4_22() { return &___shb4_22; }
	inline void set_shb4_22(float value)
	{
		___shb4_22 = value;
	}

	inline static int32_t get_offset_of_shb5_23() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb5_23)); }
	inline float get_shb5_23() const { return ___shb5_23; }
	inline float* get_address_of_shb5_23() { return &___shb5_23; }
	inline void set_shb5_23(float value)
	{
		___shb5_23 = value;
	}

	inline static int32_t get_offset_of_shb6_24() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb6_24)); }
	inline float get_shb6_24() const { return ___shb6_24; }
	inline float* get_address_of_shb6_24() { return &___shb6_24; }
	inline void set_shb6_24(float value)
	{
		___shb6_24 = value;
	}

	inline static int32_t get_offset_of_shb7_25() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb7_25)); }
	inline float get_shb7_25() const { return ___shb7_25; }
	inline float* get_address_of_shb7_25() { return &___shb7_25; }
	inline void set_shb7_25(float value)
	{
		___shb7_25 = value;
	}

	inline static int32_t get_offset_of_shb8_26() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb8_26)); }
	inline float get_shb8_26() const { return ___shb8_26; }
	inline float* get_address_of_shb8_26() { return &___shb8_26; }
	inline void set_shb8_26(float value)
	{
		___shb8_26 = value;
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_7 = value;
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


// Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi
struct  ExternApi_tF63E3815785565C6EAC939648A64089C57B63430 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tF63E3815785565C6EAC939648A64089C57B63430__padding[1];
	};

public:
};


// Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi
struct  ExternApi_tC3F23A16B908213E38743CAE5428A51C567AEB00 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tC3F23A16B908213E38743CAE5428A51C567AEB00__padding[1];
	};

public:
};


// Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi/ExternApi
struct  ExternApi_tA6E7326E8ADD289006044ACD4EE2F8484229A057 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tA6E7326E8ADD289006044ACD4EE2F8484229A057__padding[1];
	};

public:
};


// Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi
struct  ExternApi_t7064D2F06EC7AC96D4C85B801E9CEF5D1E24664C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t7064D2F06EC7AC96D4C85B801E9CEF5D1E24664C__padding[1];
	};

public:
};


// Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi
struct  ExternApi_t1E7DC0A619094A63CDE6DB6B52ED8DA2F5CD99E8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t1E7DC0A619094A63CDE6DB6B52ED8DA2F5CD99E8__padding[1];
	};

public:
};


// Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi
struct  ExternApi_t674CFEE0F9C2FFE010BE90C80563D603C88B7640 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t674CFEE0F9C2FFE010BE90C80563D603C88B7640__padding[1];
	};

public:
};


// Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi
struct  ExternApi_t29AE2594E8489D559547A1E4ED06878338B8AAD3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t29AE2594E8489D559547A1E4ED06878338B8AAD3__padding[1];
	};

public:
};


// System.Nullable`1<UnityEngine.Color>
struct  Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Matrix4x4>
struct  Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___value_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_value_0() const { return ___value_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct  Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E 
{
public:
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E, ___value_0)); }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  get_value_0() const { return ___value_0; }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSessionState
struct  ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ApiArStatus
struct  ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ApiArStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode
struct  ApiCloudAnchorMode_t2C5CF63EAC06FC62A5EEF4541A2B356BB269B184 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApiCloudAnchorMode_t2C5CF63EAC06FC62A5EEF4541A2B356BB269B184, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState
struct  ApiCloudAnchorState_tA4F9EFCEF8CEDF3FAB9A672B37FCC95A30C4BCD9 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApiCloudAnchorState_tA4F9EFCEF8CEDF3FAB9A672B37FCC95A30C4BCD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus
struct  ApiPlaybackStatus_t1DE9BCFBDE5A37FE348C3368F76B3E187F6031DB 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApiPlaybackStatus_t1DE9BCFBDE5A37FE348C3368F76B3E187F6031DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus
struct  ApiRecordingStatus_tA27B65127117F901AA792212714998D585BC4D02 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApiRecordingStatus_tA27B65127117F901AA792212714998D585BC4D02, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ApiTrackingState
struct  ApiTrackingState_t12C05700B591DFFE76E92ED16A024A9E9113BE8D 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ApiTrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApiTrackingState_t12C05700B591DFFE76E92ED16A024A9E9113BE8D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARCore.ArCameraConfigFilter
struct  ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18 
{
public:
	// System.IntPtr UnityEngine.XR.ARCore.ArCameraConfigFilter::m_Self
	intptr_t ___m_Self_0;

public:
	inline static int32_t get_offset_of_m_Self_0() { return static_cast<int32_t>(offsetof(ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18, ___m_Self_0)); }
	inline intptr_t get_m_Self_0() const { return ___m_Self_0; }
	inline intptr_t* get_address_of_m_Self_0() { return &___m_Self_0; }
	inline void set_m_Self_0(intptr_t value)
	{
		___m_Self_0 = value;
	}
};


// UnityEngine.XR.ARCore.ArConfig
struct  ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E 
{
public:
	// System.IntPtr UnityEngine.XR.ARCore.ArConfig::m_Self
	intptr_t ___m_Self_0;

public:
	inline static int32_t get_offset_of_m_Self_0() { return static_cast<int32_t>(offsetof(ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E, ___m_Self_0)); }
	inline intptr_t get_m_Self_0() const { return ___m_Self_0; }
	inline intptr_t* get_address_of_m_Self_0() { return &___m_Self_0; }
	inline void set_m_Self_0(intptr_t value)
	{
		___m_Self_0 = value;
	}
};


// UnityEngine.XR.ARCore.ArSession
struct  ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E 
{
public:
	// System.IntPtr UnityEngine.XR.ARCore.ArSession::m_Self
	intptr_t ___m_Self_0;

public:
	inline static int32_t get_offset_of_m_Self_0() { return static_cast<int32_t>(offsetof(ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E, ___m_Self_0)); }
	inline intptr_t get_m_Self_0() const { return ___m_Self_0; }
	inline intptr_t* get_address_of_m_Self_0() { return &___m_Self_0; }
	inline void set_m_Self_0(intptr_t value)
	{
		___m_Self_0 = value;
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


// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage
struct  CameraConfigDepthSensorUsage_t46ED1E6276219751EDBEBB0A771B72F61CD0EDA7 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConfigDepthSensorUsage_t46ED1E6276219751EDBEBB0A771B72F61CD0EDA7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.CameraConfigFacingDirection
struct  CameraConfigFacingDirection_tD66DC4C10A9B7365030DA4AA6E95F4F1EE839A92 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.CameraConfigFacingDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConfigFacingDirection_tD66DC4C10A9B7365030DA4AA6E95F4F1EE839A92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage
struct  CameraConfigStereoCameraUsage_t38294446DBEEEDBAC69AE8470408AFD937635898 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConfigStereoCameraUsage_t38294446DBEEEDBAC69AE8470408AFD937635898, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.CameraConfigTargetFps
struct  CameraConfigTargetFps_tFA5F9F0CD852A9D6B796894CD92AB2E7836BEF5D 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.CameraConfigTargetFps::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConfigTargetFps_tFA5F9F0CD852A9D6B796894CD92AB2E7836BEF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.CameraFacingDirection
struct  CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.CameraFacingDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct  CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.CloudAnchorMode
struct  CloudAnchorMode_t033071E354A9F6346005A101BE386E75F43678BF 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.CloudAnchorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloudAnchorMode_t033071E354A9F6346005A101BE386E75F43678BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.CloudAnchorState
struct  CloudAnchorState_t2D1C5CD4119A91B8EAE0B16257380AA9ED9223D4 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.CloudAnchorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloudAnchorState_t2D1C5CD4119A91B8EAE0B16257380AA9ED9223D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.CloudReferenceState
struct  CloudReferenceState_t5C23FB9CB7F0FB4762E45282E941C77622900237 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.CloudReferenceState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloudReferenceState_t5C23FB9CB7F0FB4762E45282E941C77622900237, ___value___2)); }
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

// Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute
struct  DynamicHelpAttribute_t2C60C0357462E75E3373554A96D4A1240451061D  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute::CheckingFunction
	String_t* ___CheckingFunction_0;

public:
	inline static int32_t get_offset_of_CheckingFunction_0() { return static_cast<int32_t>(offsetof(DynamicHelpAttribute_t2C60C0357462E75E3373554A96D4A1240451061D, ___CheckingFunction_0)); }
	inline String_t* get_CheckingFunction_0() const { return ___CheckingFunction_0; }
	inline String_t** get_address_of_CheckingFunction_0() { return &___CheckingFunction_0; }
	inline void set_CheckingFunction_0(String_t* value)
	{
		___CheckingFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckingFunction_0), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute
struct  EnumFlagsAttribute_tFF62A6C6546E4C20A061B544CD5625FEA26AB545  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Type Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute::EnumType
	Type_t * ___EnumType_0;

public:
	inline static int32_t get_offset_of_EnumType_0() { return static_cast<int32_t>(offsetof(EnumFlagsAttribute_tFF62A6C6546E4C20A061B544CD5625FEA26AB545, ___EnumType_0)); }
	inline Type_t * get_EnumType_0() const { return ___EnumType_0; }
	inline Type_t ** get_address_of_EnumType_0() { return &___EnumType_0; }
	inline void set_EnumType_0(Type_t * value)
	{
		___EnumType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnumType_0), (void*)value);
	}
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


// Google.XR.ARCoreExtensions.FeatureMapQuality
struct  FeatureMapQuality_tEB71E7B87DFF0BD33FC9D23220F8E2D9358D793D 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.FeatureMapQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FeatureMapQuality_tEB71E7B87DFF0BD33FC9D23220F8E2D9358D793D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.IOSSupportManager
struct  IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE  : public RuntimeObject
{
public:
	// System.Boolean Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_isEnabled
	bool ____isEnabled_2;
	// System.String Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_iosCloudServicesApiKey
	String_t* ____iosCloudServicesApiKey_3;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_sessionHandle
	intptr_t ____sessionHandle_4;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_frameHandle
	intptr_t ____frameHandle_5;
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_arKitSession
	ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ____arKitSession_6;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_cameraManager
	ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ____cameraManager_7;

public:
	inline static int32_t get_offset_of__isEnabled_2() { return static_cast<int32_t>(offsetof(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE, ____isEnabled_2)); }
	inline bool get__isEnabled_2() const { return ____isEnabled_2; }
	inline bool* get_address_of__isEnabled_2() { return &____isEnabled_2; }
	inline void set__isEnabled_2(bool value)
	{
		____isEnabled_2 = value;
	}

	inline static int32_t get_offset_of__iosCloudServicesApiKey_3() { return static_cast<int32_t>(offsetof(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE, ____iosCloudServicesApiKey_3)); }
	inline String_t* get__iosCloudServicesApiKey_3() const { return ____iosCloudServicesApiKey_3; }
	inline String_t** get_address_of__iosCloudServicesApiKey_3() { return &____iosCloudServicesApiKey_3; }
	inline void set__iosCloudServicesApiKey_3(String_t* value)
	{
		____iosCloudServicesApiKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____iosCloudServicesApiKey_3), (void*)value);
	}

	inline static int32_t get_offset_of__sessionHandle_4() { return static_cast<int32_t>(offsetof(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE, ____sessionHandle_4)); }
	inline intptr_t get__sessionHandle_4() const { return ____sessionHandle_4; }
	inline intptr_t* get_address_of__sessionHandle_4() { return &____sessionHandle_4; }
	inline void set__sessionHandle_4(intptr_t value)
	{
		____sessionHandle_4 = value;
	}

	inline static int32_t get_offset_of__frameHandle_5() { return static_cast<int32_t>(offsetof(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE, ____frameHandle_5)); }
	inline intptr_t get__frameHandle_5() const { return ____frameHandle_5; }
	inline intptr_t* get_address_of__frameHandle_5() { return &____frameHandle_5; }
	inline void set__frameHandle_5(intptr_t value)
	{
		____frameHandle_5 = value;
	}

	inline static int32_t get_offset_of__arKitSession_6() { return static_cast<int32_t>(offsetof(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE, ____arKitSession_6)); }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * get__arKitSession_6() const { return ____arKitSession_6; }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** get_address_of__arKitSession_6() { return &____arKitSession_6; }
	inline void set__arKitSession_6(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		____arKitSession_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arKitSession_6), (void*)value);
	}

	inline static int32_t get_offset_of__cameraManager_7() { return static_cast<int32_t>(offsetof(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE, ____cameraManager_7)); }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * get__cameraManager_7() const { return ____cameraManager_7; }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 ** get_address_of__cameraManager_7() { return &____cameraManager_7; }
	inline void set__cameraManager_7(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * value)
	{
		____cameraManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cameraManager_7), (void*)value);
	}
};

struct IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_StaticFields
{
public:
	// Google.XR.ARCoreExtensions.Internal.IOSSupportManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_instance
	IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_StaticFields, ____instance_1)); }
	inline IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * get__instance_1() const { return ____instance_1; }
	inline IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.LightEstimation
struct  LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.LightEstimation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct  LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56, ___value___2)); }
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

// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct  PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.PlaybackResult
struct  PlaybackResult_tAB72CDFC6D688237C20AABFA1C13B1249BAE90FC 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.PlaybackResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaybackResult_tAB72CDFC6D688237C20AABFA1C13B1249BAE90FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.PlaybackStatus
struct  PlaybackStatus_t39227928B5E0EB39E079EFACC7DBD35F06CB82F9 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.PlaybackStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaybackStatus_t39227928B5E0EB39E079EFACC7DBD35F06CB82F9, ___value___2)); }
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


// Google.XR.ARCoreExtensions.RecordingResult
struct  RecordingResult_t80BF850E9AB903D64644EBA83D7746195C733C5C 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.RecordingResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecordingResult_t80BF850E9AB903D64644EBA83D7746195C733C5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.RecordingStatus
struct  RecordingStatus_t0273D510FBC682585015E0210CC842B27C0248CB 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.RecordingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecordingStatus_t0273D510FBC682585015E0210CC842B27C0248CB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.XR.ARFoundation.TrackingMode
struct  TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646, ___value___2)); }
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


// Google.XR.ARCoreExtensions.Internal.Translators
struct  Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323  : public RuntimeObject
{
public:

public:
};

struct Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields
{
public:
	// UnityEngine.Matrix4x4 Google.XR.ARCoreExtensions.Internal.Translators::_unityWorldToGLWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ____unityWorldToGLWorld_0;
	// UnityEngine.Matrix4x4 Google.XR.ARCoreExtensions.Internal.Translators::_unityWorldToGLWorldInverse
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ____unityWorldToGLWorldInverse_1;

public:
	inline static int32_t get_offset_of__unityWorldToGLWorld_0() { return static_cast<int32_t>(offsetof(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields, ____unityWorldToGLWorld_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get__unityWorldToGLWorld_0() const { return ____unityWorldToGLWorld_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of__unityWorldToGLWorld_0() { return &____unityWorldToGLWorld_0; }
	inline void set__unityWorldToGLWorld_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		____unityWorldToGLWorld_0 = value;
	}

	inline static int32_t get_offset_of__unityWorldToGLWorldInverse_1() { return static_cast<int32_t>(offsetof(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields, ____unityWorldToGLWorldInverse_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get__unityWorldToGLWorldInverse_1() const { return ____unityWorldToGLWorldInverse_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of__unityWorldToGLWorldInverse_1() { return &____unityWorldToGLWorldInverse_1; }
	inline void set__unityWorldToGLWorldInverse_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		____unityWorldToGLWorldInverse_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct  XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Resolution_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeConfigurationHandle_2() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_NativeConfigurationHandle_2)); }
	inline intptr_t get_m_NativeConfigurationHandle_2() const { return ___m_NativeConfigurationHandle_2; }
	inline intptr_t* get_address_of_m_NativeConfigurationHandle_2() { return &___m_NativeConfigurationHandle_2; }
	inline void set_m_NativeConfigurationHandle_2(intptr_t value)
	{
		___m_NativeConfigurationHandle_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties
struct  XRCameraFrameProperties_t57C3A208DCCC01241BA413286A98B1726773200C 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraFrameProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRCameraFrameProperties_t57C3A208DCCC01241BA413286A98B1726773200C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct  XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9  : public SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4
{
public:

public:
};


// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/AnchorNativePointerStruct
struct  AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/AnchorNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/AnchorNativePointerStruct::AnchorHandle
	intptr_t ___AnchorHandle_1;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038, ___Version_0)); }
	inline int32_t get_Version_0() const { return ___Version_0; }
	inline int32_t* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(int32_t value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_AnchorHandle_1() { return static_cast<int32_t>(offsetof(AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038, ___AnchorHandle_1)); }
	inline intptr_t get_AnchorHandle_1() const { return ___AnchorHandle_1; }
	inline intptr_t* get_address_of_AnchorHandle_1() { return &___AnchorHandle_1; }
	inline void set_AnchorHandle_1(intptr_t value)
	{
		___AnchorHandle_1 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/FrameNativePointerStruct
struct  FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/FrameNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/FrameNativePointerStruct::FrameHandle
	intptr_t ___FrameHandle_1;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033, ___Version_0)); }
	inline int32_t get_Version_0() const { return ___Version_0; }
	inline int32_t* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(int32_t value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_FrameHandle_1() { return static_cast<int32_t>(offsetof(FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033, ___FrameHandle_1)); }
	inline intptr_t get_FrameHandle_1() const { return ___FrameHandle_1; }
	inline intptr_t* get_address_of_FrameHandle_1() { return &___FrameHandle_1; }
	inline void set_FrameHandle_1(intptr_t value)
	{
		___FrameHandle_1 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/PlaneNativePointerStruct
struct  PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/PlaneNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/PlaneNativePointerStruct::PlaneHandle
	intptr_t ___PlaneHandle_1;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049, ___Version_0)); }
	inline int32_t get_Version_0() const { return ___Version_0; }
	inline int32_t* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(int32_t value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_PlaneHandle_1() { return static_cast<int32_t>(offsetof(PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049, ___PlaneHandle_1)); }
	inline intptr_t get_PlaneHandle_1() const { return ___PlaneHandle_1; }
	inline intptr_t* get_address_of_PlaneHandle_1() { return &___PlaneHandle_1; }
	inline void set_PlaneHandle_1(intptr_t value)
	{
		___PlaneHandle_1 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/SessionNativePointerStruct
struct  SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/SessionNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/SessionNativePointerStruct::SessionHandle
	intptr_t ___SessionHandle_1;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879, ___Version_0)); }
	inline int32_t get_Version_0() const { return ___Version_0; }
	inline int32_t* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(int32_t value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_SessionHandle_1() { return static_cast<int32_t>(offsetof(SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879, ___SessionHandle_1)); }
	inline intptr_t get_SessionHandle_1() const { return ___SessionHandle_1; }
	inline intptr_t* get_address_of_SessionHandle_1() { return &___SessionHandle_1; }
	inline void set_SessionHandle_1(intptr_t value)
	{
		___SessionHandle_1 = value;
	}
};


// Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType
struct  HelpMessageType_t710691A0AE3C296976941619706FC1FB2FDB69C8 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HelpMessageType_t710691A0AE3C296976941619706FC1FB2FDB69C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C 
{
public:
	// T System.Nullable`1::value
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C, ___value_0)); }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  get_value_0() const { return ___value_0; }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs
struct  ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9 
{
public:
	// UnityEngine.XR.ARCore.ArSession UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs::<session>k__BackingField
	ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  ___U3CsessionU3Ek__BackingField_0;
	// UnityEngine.XR.ARCore.ArCameraConfigFilter UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs::<filter>k__BackingField
	ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18  ___U3CfilterU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CsessionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9, ___U3CsessionU3Ek__BackingField_0)); }
	inline ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  get_U3CsessionU3Ek__BackingField_0() const { return ___U3CsessionU3Ek__BackingField_0; }
	inline ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E * get_address_of_U3CsessionU3Ek__BackingField_0() { return &___U3CsessionU3Ek__BackingField_0; }
	inline void set_U3CsessionU3Ek__BackingField_0(ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  value)
	{
		___U3CsessionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CfilterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9, ___U3CfilterU3Ek__BackingField_1)); }
	inline ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18  get_U3CfilterU3Ek__BackingField_1() const { return ___U3CfilterU3Ek__BackingField_1; }
	inline ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18 * get_address_of_U3CfilterU3Ek__BackingField_1() { return &___U3CfilterU3Ek__BackingField_1; }
	inline void set_U3CfilterU3Ek__BackingField_1(ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18  value)
	{
		___U3CfilterU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs
struct  ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 
{
public:
	// UnityEngine.XR.ARCore.ArSession UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::m_Session
	ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  ___m_Session_0;
	// UnityEngine.XR.ARCore.ArConfig UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::m_Config
	ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E  ___m_Config_1;

public:
	inline static int32_t get_offset_of_m_Session_0() { return static_cast<int32_t>(offsetof(ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064, ___m_Session_0)); }
	inline ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  get_m_Session_0() const { return ___m_Session_0; }
	inline ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E * get_address_of_m_Session_0() { return &___m_Session_0; }
	inline void set_m_Session_0(ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  value)
	{
		___m_Session_0 = value;
	}

	inline static int32_t get_offset_of_m_Config_1() { return static_cast<int32_t>(offsetof(ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064, ___m_Config_1)); }
	inline ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E  get_m_Config_1() const { return ___m_Config_1; }
	inline ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E * get_address_of_m_Config_1() { return &___m_Config_1; }
	inline void set_m_Config_1(ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E  value)
	{
		___m_Config_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct  ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C  : public XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct  ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 
{
public:
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;

public:
	inline static int32_t get_offset_of_U3CaverageColorTemperatureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CaverageColorTemperatureU3Ek__BackingField_0)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CaverageColorTemperatureU3Ek__BackingField_0() const { return ___U3CaverageColorTemperatureU3Ek__BackingField_0; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CaverageColorTemperatureU3Ek__BackingField_0() { return &___U3CaverageColorTemperatureU3Ek__BackingField_0; }
	inline void set_U3CaverageColorTemperatureU3Ek__BackingField_0(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CaverageColorTemperatureU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CcolorCorrectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CcolorCorrectionU3Ek__BackingField_1)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_U3CcolorCorrectionU3Ek__BackingField_1() const { return ___U3CcolorCorrectionU3Ek__BackingField_1; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_U3CcolorCorrectionU3Ek__BackingField_1() { return &___U3CcolorCorrectionU3Ek__BackingField_1; }
	inline void set_U3CcolorCorrectionU3Ek__BackingField_1(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___U3CcolorCorrectionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightIntensityLumensU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightIntensityLumensU3Ek__BackingField_2)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CmainLightIntensityLumensU3Ek__BackingField_2() const { return ___U3CmainLightIntensityLumensU3Ek__BackingField_2; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CmainLightIntensityLumensU3Ek__BackingField_2() { return &___U3CmainLightIntensityLumensU3Ek__BackingField_2; }
	inline void set_U3CmainLightIntensityLumensU3Ek__BackingField_2(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CmainLightIntensityLumensU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightColorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightColorU3Ek__BackingField_3)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_U3CmainLightColorU3Ek__BackingField_3() const { return ___U3CmainLightColorU3Ek__BackingField_3; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_U3CmainLightColorU3Ek__BackingField_3() { return &___U3CmainLightColorU3Ek__BackingField_3; }
	inline void set_U3CmainLightColorU3Ek__BackingField_3(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___U3CmainLightColorU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightDirectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightDirectionU3Ek__BackingField_4)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_U3CmainLightDirectionU3Ek__BackingField_4() const { return ___U3CmainLightDirectionU3Ek__BackingField_4; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_U3CmainLightDirectionU3Ek__BackingField_4() { return &___U3CmainLightDirectionU3Ek__BackingField_4; }
	inline void set_U3CmainLightDirectionU3Ek__BackingField_4(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___U3CmainLightDirectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CambientSphericalHarmonicsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CambientSphericalHarmonicsU3Ek__BackingField_5)); }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  get_U3CambientSphericalHarmonicsU3Ek__BackingField_5() const { return ___U3CambientSphericalHarmonicsU3Ek__BackingField_5; }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * get_address_of_U3CambientSphericalHarmonicsU3Ek__BackingField_5() { return &___U3CambientSphericalHarmonicsU3Ek__BackingField_5; }
	inline void set_U3CambientSphericalHarmonicsU3Ek__BackingField_5(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  value)
	{
		___U3CambientSphericalHarmonicsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_AverageBrightness_6() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_AverageBrightness_6)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_AverageBrightness_6() const { return ___m_AverageBrightness_6; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_AverageBrightness_6() { return &___m_AverageBrightness_6; }
	inline void set_m_AverageBrightness_6(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_AverageBrightness_6 = value;
	}

	inline static int32_t get_offset_of_m_AverageIntensityInLumens_7() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_AverageIntensityInLumens_7)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_AverageIntensityInLumens_7() const { return ___m_AverageIntensityInLumens_7; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_AverageIntensityInLumens_7() { return &___m_AverageIntensityInLumens_7; }
	inline void set_m_AverageIntensityInLumens_7(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_AverageIntensityInLumens_7 = value;
	}

	inline static int32_t get_offset_of_m_MainLightBrightness_8() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_MainLightBrightness_8)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_MainLightBrightness_8() const { return ___m_MainLightBrightness_8; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_MainLightBrightness_8() { return &___m_MainLightBrightness_8; }
	inline void set_m_MainLightBrightness_8(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_MainLightBrightness_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_pinvoke
{
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_com
{
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;
};

// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager
struct  AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:

public:
};

struct AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields
{
public:
	// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_instance
	AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * ____instance_5;
	// System.Action`1<System.Boolean> Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_permissionRequest
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ____permissionRequest_6;
	// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_activity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ____activity_7;
	// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_permissionService
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ____permissionService_8;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields, ____instance_5)); }
	inline AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * get__instance_5() const { return ____instance_5; }
	inline AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_5), (void*)value);
	}

	inline static int32_t get_offset_of__permissionRequest_6() { return static_cast<int32_t>(offsetof(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields, ____permissionRequest_6)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get__permissionRequest_6() const { return ____permissionRequest_6; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of__permissionRequest_6() { return &____permissionRequest_6; }
	inline void set__permissionRequest_6(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		____permissionRequest_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____permissionRequest_6), (void*)value);
	}

	inline static int32_t get_offset_of__activity_7() { return static_cast<int32_t>(offsetof(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields, ____activity_7)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get__activity_7() const { return ____activity_7; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of__activity_7() { return &____activity_7; }
	inline void set__activity_7(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		____activity_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activity_7), (void*)value);
	}

	inline static int32_t get_offset_of__permissionService_8() { return static_cast<int32_t>(offsetof(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields, ____permissionService_8)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get__permissionService_8() const { return ____permissionService_8; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of__permissionService_8() { return &____permissionService_8; }
	inline void set__permissionService_8(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		____permissionService_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____permissionService_8), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Google.XR.ARCoreExtensions.Internal.HelpAttribute
struct  HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String Google.XR.ARCoreExtensions.Internal.HelpAttribute::HelpMessage
	String_t* ___HelpMessage_0;
	// Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType Google.XR.ARCoreExtensions.Internal.HelpAttribute::MessageType
	int32_t ___MessageType_1;

public:
	inline static int32_t get_offset_of_HelpMessage_0() { return static_cast<int32_t>(offsetof(HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013, ___HelpMessage_0)); }
	inline String_t* get_HelpMessage_0() const { return ___HelpMessage_0; }
	inline String_t** get_address_of_HelpMessage_0() { return &___HelpMessage_0; }
	inline void set_HelpMessage_0(String_t* value)
	{
		___HelpMessage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HelpMessage_0), (void*)value);
	}

	inline static int32_t get_offset_of_MessageType_1() { return static_cast<int32_t>(offsetof(HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013, ___MessageType_1)); }
	inline int32_t get_MessageType_1() const { return ___MessageType_1; }
	inline int32_t* get_address_of_MessageType_1() { return &___MessageType_1; }
	inline void set_MessageType_1(int32_t value)
	{
		___MessageType_1 = value;
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


// UnityEngine.XR.ARSubsystems.XRAnchor
struct  XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraParams
struct  XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 
{
public:
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZNear
	float ___m_ZNear_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZFar
	float ___m_ZFar_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenWidth
	float ___m_ScreenWidth_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenHeight
	float ___m_ScreenHeight_3;
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenOrientation
	int32_t ___m_ScreenOrientation_4;

public:
	inline static int32_t get_offset_of_m_ZNear_0() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ZNear_0)); }
	inline float get_m_ZNear_0() const { return ___m_ZNear_0; }
	inline float* get_address_of_m_ZNear_0() { return &___m_ZNear_0; }
	inline void set_m_ZNear_0(float value)
	{
		___m_ZNear_0 = value;
	}

	inline static int32_t get_offset_of_m_ZFar_1() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ZFar_1)); }
	inline float get_m_ZFar_1() const { return ___m_ZFar_1; }
	inline float* get_address_of_m_ZFar_1() { return &___m_ZFar_1; }
	inline void set_m_ZFar_1(float value)
	{
		___m_ZFar_1 = value;
	}

	inline static int32_t get_offset_of_m_ScreenWidth_2() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ScreenWidth_2)); }
	inline float get_m_ScreenWidth_2() const { return ___m_ScreenWidth_2; }
	inline float* get_address_of_m_ScreenWidth_2() { return &___m_ScreenWidth_2; }
	inline void set_m_ScreenWidth_2(float value)
	{
		___m_ScreenWidth_2 = value;
	}

	inline static int32_t get_offset_of_m_ScreenHeight_3() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ScreenHeight_3)); }
	inline float get_m_ScreenHeight_3() const { return ___m_ScreenHeight_3; }
	inline float* get_address_of_m_ScreenHeight_3() { return &___m_ScreenHeight_3; }
	inline void set_m_ScreenHeight_3(float value)
	{
		___m_ScreenHeight_3 = value;
	}

	inline static int32_t get_offset_of_m_ScreenOrientation_4() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ScreenOrientation_4)); }
	inline int32_t get_m_ScreenOrientation_4() const { return ___m_ScreenOrientation_4; }
	inline int32_t* get_address_of_m_ScreenOrientation_4() { return &___m_ScreenOrientation_4; }
	inline void set_m_ScreenOrientation_4(int32_t value)
	{
		___m_ScreenOrientation_4 = value;
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


// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs>
struct  Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>
struct  Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct  ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 
{
public:
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3ClightEstimationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3ClightEstimationU3Ek__BackingField_0)); }
	inline ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  get_U3ClightEstimationU3Ek__BackingField_0() const { return ___U3ClightEstimationU3Ek__BackingField_0; }
	inline ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * get_address_of_U3ClightEstimationU3Ek__BackingField_0() { return &___U3ClightEstimationU3Ek__BackingField_0; }
	inline void set_U3ClightEstimationU3Ek__BackingField_0(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  value)
	{
		___U3ClightEstimationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimestampNsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CtimestampNsU3Ek__BackingField_1)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CtimestampNsU3Ek__BackingField_1() const { return ___U3CtimestampNsU3Ek__BackingField_1; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CtimestampNsU3Ek__BackingField_1() { return &___U3CtimestampNsU3Ek__BackingField_1; }
	inline void set_U3CtimestampNsU3Ek__BackingField_1(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CtimestampNsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CprojectionMatrixU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CprojectionMatrixU3Ek__BackingField_2)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get_U3CprojectionMatrixU3Ek__BackingField_2() const { return ___U3CprojectionMatrixU3Ek__BackingField_2; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of_U3CprojectionMatrixU3Ek__BackingField_2() { return &___U3CprojectionMatrixU3Ek__BackingField_2; }
	inline void set_U3CprojectionMatrixU3Ek__BackingField_2(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		___U3CprojectionMatrixU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayMatrixU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CdisplayMatrixU3Ek__BackingField_3)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get_U3CdisplayMatrixU3Ek__BackingField_3() const { return ___U3CdisplayMatrixU3Ek__BackingField_3; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of_U3CdisplayMatrixU3Ek__BackingField_3() { return &___U3CdisplayMatrixU3Ek__BackingField_3; }
	inline void set_U3CdisplayMatrixU3Ek__BackingField_3(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		___U3CdisplayMatrixU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtexturesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CtexturesU3Ek__BackingField_4)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_U3CtexturesU3Ek__BackingField_4() const { return ___U3CtexturesU3Ek__BackingField_4; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_U3CtexturesU3Ek__BackingField_4() { return &___U3CtexturesU3Ek__BackingField_4; }
	inline void set_U3CtexturesU3Ek__BackingField_4(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___U3CtexturesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtexturesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertyNameIdsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CpropertyNameIdsU3Ek__BackingField_5)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CpropertyNameIdsU3Ek__BackingField_5() const { return ___U3CpropertyNameIdsU3Ek__BackingField_5; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CpropertyNameIdsU3Ek__BackingField_5() { return &___U3CpropertyNameIdsU3Ek__BackingField_5; }
	inline void set_U3CpropertyNameIdsU3Ek__BackingField_5(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CpropertyNameIdsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyNameIdsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexposureDurationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CexposureDurationU3Ek__BackingField_6)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CexposureDurationU3Ek__BackingField_6() const { return ___U3CexposureDurationU3Ek__BackingField_6; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CexposureDurationU3Ek__BackingField_6() { return &___U3CexposureDurationU3Ek__BackingField_6; }
	inline void set_U3CexposureDurationU3Ek__BackingField_6(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CexposureDurationU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CexposureOffsetU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CexposureOffsetU3Ek__BackingField_7)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CexposureOffsetU3Ek__BackingField_7() const { return ___U3CexposureOffsetU3Ek__BackingField_7; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CexposureOffsetU3Ek__BackingField_7() { return &___U3CexposureOffsetU3Ek__BackingField_7; }
	inline void set_U3CexposureOffsetU3Ek__BackingField_7(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CexposureOffsetU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CenabledMaterialKeywordsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CenabledMaterialKeywordsU3Ek__BackingField_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CenabledMaterialKeywordsU3Ek__BackingField_8() const { return ___U3CenabledMaterialKeywordsU3Ek__BackingField_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CenabledMaterialKeywordsU3Ek__BackingField_8() { return &___U3CenabledMaterialKeywordsU3Ek__BackingField_8; }
	inline void set_U3CenabledMaterialKeywordsU3Ek__BackingField_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CenabledMaterialKeywordsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenabledMaterialKeywordsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() const { return ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() { return &___U3CdisabledMaterialKeywordsU3Ek__BackingField_9; }
	inline void set_U3CdisabledMaterialKeywordsU3Ek__BackingField_9(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CdisabledMaterialKeywordsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisabledMaterialKeywordsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcameraGrainTextureU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CcameraGrainTextureU3Ek__BackingField_10)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_U3CcameraGrainTextureU3Ek__BackingField_10() const { return ___U3CcameraGrainTextureU3Ek__BackingField_10; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_U3CcameraGrainTextureU3Ek__BackingField_10() { return &___U3CcameraGrainTextureU3Ek__BackingField_10; }
	inline void set_U3CcameraGrainTextureU3Ek__BackingField_10(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___U3CcameraGrainTextureU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcameraGrainTextureU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoiseIntensityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CnoiseIntensityU3Ek__BackingField_11)); }
	inline float get_U3CnoiseIntensityU3Ek__BackingField_11() const { return ___U3CnoiseIntensityU3Ek__BackingField_11; }
	inline float* get_address_of_U3CnoiseIntensityU3Ek__BackingField_11() { return &___U3CnoiseIntensityU3Ek__BackingField_11; }
	inline void set_U3CnoiseIntensityU3Ek__BackingField_11(float value)
	{
		___U3CnoiseIntensityU3Ek__BackingField_11 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42_marshaled_pinvoke
{
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42_marshaled_com
{
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct  ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Google.XR.ARCoreExtensions.CameraConfigTargetFps Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::TargetCameraFramerate
	int32_t ___TargetCameraFramerate_4;
	// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::DepthSensorUsage
	int32_t ___DepthSensorUsage_5;
	// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::StereoCameraUsage
	int32_t ___StereoCameraUsage_6;

public:
	inline static int32_t get_offset_of_TargetCameraFramerate_4() { return static_cast<int32_t>(offsetof(ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223, ___TargetCameraFramerate_4)); }
	inline int32_t get_TargetCameraFramerate_4() const { return ___TargetCameraFramerate_4; }
	inline int32_t* get_address_of_TargetCameraFramerate_4() { return &___TargetCameraFramerate_4; }
	inline void set_TargetCameraFramerate_4(int32_t value)
	{
		___TargetCameraFramerate_4 = value;
	}

	inline static int32_t get_offset_of_DepthSensorUsage_5() { return static_cast<int32_t>(offsetof(ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223, ___DepthSensorUsage_5)); }
	inline int32_t get_DepthSensorUsage_5() const { return ___DepthSensorUsage_5; }
	inline int32_t* get_address_of_DepthSensorUsage_5() { return &___DepthSensorUsage_5; }
	inline void set_DepthSensorUsage_5(int32_t value)
	{
		___DepthSensorUsage_5 = value;
	}

	inline static int32_t get_offset_of_StereoCameraUsage_6() { return static_cast<int32_t>(offsetof(ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223, ___StereoCameraUsage_6)); }
	inline int32_t get_StereoCameraUsage_6() const { return ___StereoCameraUsage_6; }
	inline int32_t* get_address_of_StereoCameraUsage_6() { return &___StereoCameraUsage_6; }
	inline void set_StereoCameraUsage_6(int32_t value)
	{
		___StereoCameraUsage_6 = value;
	}
};


// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct  ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Google.XR.ARCoreExtensions.CloudAnchorMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CloudAnchorMode
	int32_t ___CloudAnchorMode_4;

public:
	inline static int32_t get_offset_of_CloudAnchorMode_4() { return static_cast<int32_t>(offsetof(ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8, ___CloudAnchorMode_4)); }
	inline int32_t get_CloudAnchorMode_4() const { return ___CloudAnchorMode_4; }
	inline int32_t* get_address_of_CloudAnchorMode_4() { return &___CloudAnchorMode_4; }
	inline void set_CloudAnchorMode_4(int32_t value)
	{
		___CloudAnchorMode_4 = value;
	}
};


// Google.XR.ARCoreExtensions.ARCoreRecordingConfig
struct  ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Google.XR.ARCoreExtensions.ARCoreRecordingConfig::Mp4DatasetFilepath
	String_t* ___Mp4DatasetFilepath_4;
	// System.Boolean Google.XR.ARCoreExtensions.ARCoreRecordingConfig::AutoStopOnPause
	bool ___AutoStopOnPause_5;

public:
	inline static int32_t get_offset_of_Mp4DatasetFilepath_4() { return static_cast<int32_t>(offsetof(ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46, ___Mp4DatasetFilepath_4)); }
	inline String_t* get_Mp4DatasetFilepath_4() const { return ___Mp4DatasetFilepath_4; }
	inline String_t** get_address_of_Mp4DatasetFilepath_4() { return &___Mp4DatasetFilepath_4; }
	inline void set_Mp4DatasetFilepath_4(String_t* value)
	{
		___Mp4DatasetFilepath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mp4DatasetFilepath_4), (void*)value);
	}

	inline static int32_t get_offset_of_AutoStopOnPause_5() { return static_cast<int32_t>(offsetof(ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46, ___AutoStopOnPause_5)); }
	inline bool get_AutoStopOnPause_5() const { return ___AutoStopOnPause_5; }
	inline bool* get_address_of_AutoStopOnPause_5() { return &___AutoStopOnPause_5; }
	inline void set_AutoStopOnPause_5(bool value)
	{
		___AutoStopOnPause_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTextureInfo
struct  ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 
{
public:
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;

public:
	inline static int32_t get_offset_of_m_Descriptor_1() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Descriptor_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_Descriptor_1() const { return ___m_Descriptor_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_Descriptor_1() { return &___m_Descriptor_1; }
	inline void set_m_Descriptor_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_Descriptor_1 = value;
	}

	inline static int32_t get_offset_of_m_Texture_2() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Texture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_2() const { return ___m_Texture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_2() { return &___m_Texture_2; }
	inline void set_m_Texture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_pinvoke
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_com
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};

// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Google.XR.ARCoreExtensions.Internal.RuntimeConfig
struct  RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Google.XR.ARCoreExtensions.Internal.RuntimeConfig::IOSCloudServicesApiKey
	String_t* ___IOSCloudServicesApiKey_5;

public:
	inline static int32_t get_offset_of_IOSCloudServicesApiKey_5() { return static_cast<int32_t>(offsetof(RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6, ___IOSCloudServicesApiKey_5)); }
	inline String_t* get_IOSCloudServicesApiKey_5() const { return ___IOSCloudServicesApiKey_5; }
	inline String_t** get_address_of_IOSCloudServicesApiKey_5() { return &___IOSCloudServicesApiKey_5; }
	inline void set_IOSCloudServicesApiKey_5(String_t* value)
	{
		___IOSCloudServicesApiKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IOSCloudServicesApiKey_5), (void*)value);
	}
};

struct RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_StaticFields
{
public:
	// Google.XR.ARCoreExtensions.Internal.RuntimeConfig Google.XR.ARCoreExtensions.Internal.RuntimeConfig::Instance
	RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_StaticFields, ___Instance_4)); }
	inline RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6 * get_Instance_4() const { return ___Instance_4; }
	inline RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraFrame
struct  XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 
{
public:
	// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TimestampNs
	int64_t ___m_TimestampNs_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageBrightness
	float ___m_AverageBrightness_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageColorTemperature
	float ___m_AverageColorTemperature_2;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ColorCorrection
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ColorCorrection_3;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_4;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_DisplayMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_DisplayMatrix_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NativePtr
	intptr_t ___m_NativePtr_7;
	// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties UnityEngine.XR.ARSubsystems.XRCameraFrame::m_Properties
	int32_t ___m_Properties_8;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageIntensityInLumens
	float ___m_AverageIntensityInLumens_9;
	// System.Double UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureDuration
	double ___m_ExposureDuration_10;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureOffset
	float ___m_ExposureOffset_11;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightIntensityLumens
	float ___m_MainLightIntensityLumens_12;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_MainLightColor_13;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_MainLightDirection_14;
	// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AmbientSphericalHarmonics
	SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  ___m_AmbientSphericalHarmonics_15;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XRCameraFrame::m_CameraGrain
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_CameraGrain_16;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NoiseIntensity
	float ___m_NoiseIntensity_17;

public:
	inline static int32_t get_offset_of_m_TimestampNs_0() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_TimestampNs_0)); }
	inline int64_t get_m_TimestampNs_0() const { return ___m_TimestampNs_0; }
	inline int64_t* get_address_of_m_TimestampNs_0() { return &___m_TimestampNs_0; }
	inline void set_m_TimestampNs_0(int64_t value)
	{
		___m_TimestampNs_0 = value;
	}

	inline static int32_t get_offset_of_m_AverageBrightness_1() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AverageBrightness_1)); }
	inline float get_m_AverageBrightness_1() const { return ___m_AverageBrightness_1; }
	inline float* get_address_of_m_AverageBrightness_1() { return &___m_AverageBrightness_1; }
	inline void set_m_AverageBrightness_1(float value)
	{
		___m_AverageBrightness_1 = value;
	}

	inline static int32_t get_offset_of_m_AverageColorTemperature_2() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AverageColorTemperature_2)); }
	inline float get_m_AverageColorTemperature_2() const { return ___m_AverageColorTemperature_2; }
	inline float* get_address_of_m_AverageColorTemperature_2() { return &___m_AverageColorTemperature_2; }
	inline void set_m_AverageColorTemperature_2(float value)
	{
		___m_AverageColorTemperature_2 = value;
	}

	inline static int32_t get_offset_of_m_ColorCorrection_3() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ColorCorrection_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ColorCorrection_3() const { return ___m_ColorCorrection_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ColorCorrection_3() { return &___m_ColorCorrection_3; }
	inline void set_m_ColorCorrection_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ColorCorrection_3 = value;
	}

	inline static int32_t get_offset_of_m_ProjectionMatrix_4() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ProjectionMatrix_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_ProjectionMatrix_4() const { return ___m_ProjectionMatrix_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_ProjectionMatrix_4() { return &___m_ProjectionMatrix_4; }
	inline void set_m_ProjectionMatrix_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_ProjectionMatrix_4 = value;
	}

	inline static int32_t get_offset_of_m_DisplayMatrix_5() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_DisplayMatrix_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_DisplayMatrix_5() const { return ___m_DisplayMatrix_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_DisplayMatrix_5() { return &___m_DisplayMatrix_5; }
	inline void set_m_DisplayMatrix_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_DisplayMatrix_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}

	inline static int32_t get_offset_of_m_Properties_8() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_Properties_8)); }
	inline int32_t get_m_Properties_8() const { return ___m_Properties_8; }
	inline int32_t* get_address_of_m_Properties_8() { return &___m_Properties_8; }
	inline void set_m_Properties_8(int32_t value)
	{
		___m_Properties_8 = value;
	}

	inline static int32_t get_offset_of_m_AverageIntensityInLumens_9() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AverageIntensityInLumens_9)); }
	inline float get_m_AverageIntensityInLumens_9() const { return ___m_AverageIntensityInLumens_9; }
	inline float* get_address_of_m_AverageIntensityInLumens_9() { return &___m_AverageIntensityInLumens_9; }
	inline void set_m_AverageIntensityInLumens_9(float value)
	{
		___m_AverageIntensityInLumens_9 = value;
	}

	inline static int32_t get_offset_of_m_ExposureDuration_10() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ExposureDuration_10)); }
	inline double get_m_ExposureDuration_10() const { return ___m_ExposureDuration_10; }
	inline double* get_address_of_m_ExposureDuration_10() { return &___m_ExposureDuration_10; }
	inline void set_m_ExposureDuration_10(double value)
	{
		___m_ExposureDuration_10 = value;
	}

	inline static int32_t get_offset_of_m_ExposureOffset_11() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ExposureOffset_11)); }
	inline float get_m_ExposureOffset_11() const { return ___m_ExposureOffset_11; }
	inline float* get_address_of_m_ExposureOffset_11() { return &___m_ExposureOffset_11; }
	inline void set_m_ExposureOffset_11(float value)
	{
		___m_ExposureOffset_11 = value;
	}

	inline static int32_t get_offset_of_m_MainLightIntensityLumens_12() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_MainLightIntensityLumens_12)); }
	inline float get_m_MainLightIntensityLumens_12() const { return ___m_MainLightIntensityLumens_12; }
	inline float* get_address_of_m_MainLightIntensityLumens_12() { return &___m_MainLightIntensityLumens_12; }
	inline void set_m_MainLightIntensityLumens_12(float value)
	{
		___m_MainLightIntensityLumens_12 = value;
	}

	inline static int32_t get_offset_of_m_MainLightColor_13() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_MainLightColor_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_MainLightColor_13() const { return ___m_MainLightColor_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_MainLightColor_13() { return &___m_MainLightColor_13; }
	inline void set_m_MainLightColor_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_MainLightColor_13 = value;
	}

	inline static int32_t get_offset_of_m_MainLightDirection_14() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_MainLightDirection_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_MainLightDirection_14() const { return ___m_MainLightDirection_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_MainLightDirection_14() { return &___m_MainLightDirection_14; }
	inline void set_m_MainLightDirection_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_MainLightDirection_14 = value;
	}

	inline static int32_t get_offset_of_m_AmbientSphericalHarmonics_15() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AmbientSphericalHarmonics_15)); }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  get_m_AmbientSphericalHarmonics_15() const { return ___m_AmbientSphericalHarmonics_15; }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 * get_address_of_m_AmbientSphericalHarmonics_15() { return &___m_AmbientSphericalHarmonics_15; }
	inline void set_m_AmbientSphericalHarmonics_15(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  value)
	{
		___m_AmbientSphericalHarmonics_15 = value;
	}

	inline static int32_t get_offset_of_m_CameraGrain_16() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_CameraGrain_16)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_CameraGrain_16() const { return ___m_CameraGrain_16; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_CameraGrain_16() { return &___m_CameraGrain_16; }
	inline void set_m_CameraGrain_16(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_CameraGrain_16 = value;
	}

	inline static int32_t get_offset_of_m_NoiseIntensity_17() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_NoiseIntensity_17)); }
	inline float get_m_NoiseIntensity_17() const { return ___m_NoiseIntensity_17; }
	inline float* get_address_of_m_NoiseIntensity_17() { return &___m_NoiseIntensity_17; }
	inline void set_m_NoiseIntensity_17(float value)
	{
		___m_NoiseIntensity_17 = value;
	}
};


// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct  OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct  Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct  Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494 
{
public:
	// T System.Nullable`1::value
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494, ___value_0)); }
	inline Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  get_value_0() const { return ___value_0; }
	inline Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct  SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct  SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDED98C236097B36F9015B396398179A6F8A62E50 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct  SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct  SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.ARCloudAnchor
struct  ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.IntPtr Google.XR.ARCoreExtensions.ARCloudAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudAnchor::_pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____pose_5;

public:
	inline static int32_t get_offset_of__anchorHandle_4() { return static_cast<int32_t>(offsetof(ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2, ____anchorHandle_4)); }
	inline intptr_t get__anchorHandle_4() const { return ____anchorHandle_4; }
	inline intptr_t* get_address_of__anchorHandle_4() { return &____anchorHandle_4; }
	inline void set__anchorHandle_4(intptr_t value)
	{
		____anchorHandle_4 = value;
	}

	inline static int32_t get_offset_of__pose_5() { return static_cast<int32_t>(offsetof(ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2, ____pose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__pose_5() const { return ____pose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__pose_5() { return &____pose_5; }
	inline void set__pose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____pose_5 = value;
	}
};


// Google.XR.ARCoreExtensions.ARCoreExtensions
struct  ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * ___OnChooseXRCameraConfiguration_9;
	// System.String Google.XR.ARCoreExtensions.ARCoreExtensions::_currentPermissionRequest
	String_t* ____currentPermissionRequest_10;
	// System.Collections.Generic.HashSet`1<System.String> Google.XR.ARCoreExtensions.ARCoreExtensions::_requiredPermissionNames
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____requiredPermissionNames_11;
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreSubsystem
	ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * ____arCoreSubsystem_12;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedConfig
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ____cachedConfig_13;
	// UnityEngine.XR.ARCore.ARCoreCameraSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreCameraSubsystem
	ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * ____arCoreCameraSubsystem_14;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedFilter
	ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ____cachedFilter_15;

public:
	inline static int32_t get_offset_of_Session_4() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___Session_4)); }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * get_Session_4() const { return ___Session_4; }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** get_address_of_Session_4() { return &___Session_4; }
	inline void set_Session_4(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		___Session_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Session_4), (void*)value);
	}

	inline static int32_t get_offset_of_SessionOrigin_5() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___SessionOrigin_5)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_SessionOrigin_5() const { return ___SessionOrigin_5; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_SessionOrigin_5() { return &___SessionOrigin_5; }
	inline void set_SessionOrigin_5(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___SessionOrigin_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionOrigin_5), (void*)value);
	}

	inline static int32_t get_offset_of_CameraManager_6() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___CameraManager_6)); }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * get_CameraManager_6() const { return ___CameraManager_6; }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 ** get_address_of_CameraManager_6() { return &___CameraManager_6; }
	inline void set_CameraManager_6(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * value)
	{
		___CameraManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_ARCoreExtensionsConfig_7() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___ARCoreExtensionsConfig_7)); }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * get_ARCoreExtensionsConfig_7() const { return ___ARCoreExtensionsConfig_7; }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 ** get_address_of_ARCoreExtensionsConfig_7() { return &___ARCoreExtensionsConfig_7; }
	inline void set_ARCoreExtensionsConfig_7(ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * value)
	{
		___ARCoreExtensionsConfig_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARCoreExtensionsConfig_7), (void*)value);
	}

	inline static int32_t get_offset_of_CameraConfigFilter_8() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___CameraConfigFilter_8)); }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * get_CameraConfigFilter_8() const { return ___CameraConfigFilter_8; }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 ** get_address_of_CameraConfigFilter_8() { return &___CameraConfigFilter_8; }
	inline void set_CameraConfigFilter_8(ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * value)
	{
		___CameraConfigFilter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraConfigFilter_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnChooseXRCameraConfiguration_9() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___OnChooseXRCameraConfiguration_9)); }
	inline OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * get_OnChooseXRCameraConfiguration_9() const { return ___OnChooseXRCameraConfiguration_9; }
	inline OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 ** get_address_of_OnChooseXRCameraConfiguration_9() { return &___OnChooseXRCameraConfiguration_9; }
	inline void set_OnChooseXRCameraConfiguration_9(OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * value)
	{
		___OnChooseXRCameraConfiguration_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnChooseXRCameraConfiguration_9), (void*)value);
	}

	inline static int32_t get_offset_of__currentPermissionRequest_10() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____currentPermissionRequest_10)); }
	inline String_t* get__currentPermissionRequest_10() const { return ____currentPermissionRequest_10; }
	inline String_t** get_address_of__currentPermissionRequest_10() { return &____currentPermissionRequest_10; }
	inline void set__currentPermissionRequest_10(String_t* value)
	{
		____currentPermissionRequest_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentPermissionRequest_10), (void*)value);
	}

	inline static int32_t get_offset_of__requiredPermissionNames_11() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____requiredPermissionNames_11)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__requiredPermissionNames_11() const { return ____requiredPermissionNames_11; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__requiredPermissionNames_11() { return &____requiredPermissionNames_11; }
	inline void set__requiredPermissionNames_11(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____requiredPermissionNames_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requiredPermissionNames_11), (void*)value);
	}

	inline static int32_t get_offset_of__arCoreSubsystem_12() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____arCoreSubsystem_12)); }
	inline ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * get__arCoreSubsystem_12() const { return ____arCoreSubsystem_12; }
	inline ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 ** get_address_of__arCoreSubsystem_12() { return &____arCoreSubsystem_12; }
	inline void set__arCoreSubsystem_12(ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * value)
	{
		____arCoreSubsystem_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arCoreSubsystem_12), (void*)value);
	}

	inline static int32_t get_offset_of__cachedConfig_13() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____cachedConfig_13)); }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * get__cachedConfig_13() const { return ____cachedConfig_13; }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 ** get_address_of__cachedConfig_13() { return &____cachedConfig_13; }
	inline void set__cachedConfig_13(ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * value)
	{
		____cachedConfig_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedConfig_13), (void*)value);
	}

	inline static int32_t get_offset_of__arCoreCameraSubsystem_14() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____arCoreCameraSubsystem_14)); }
	inline ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * get__arCoreCameraSubsystem_14() const { return ____arCoreCameraSubsystem_14; }
	inline ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C ** get_address_of__arCoreCameraSubsystem_14() { return &____arCoreCameraSubsystem_14; }
	inline void set__arCoreCameraSubsystem_14(ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * value)
	{
		____arCoreCameraSubsystem_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arCoreCameraSubsystem_14), (void*)value);
	}

	inline static int32_t get_offset_of__cachedFilter_15() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____cachedFilter_15)); }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * get__cachedFilter_15() const { return ____cachedFilter_15; }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 ** get_address_of__cachedFilter_15() { return &____cachedFilter_15; }
	inline void set__cachedFilter_15(ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * value)
	{
		____cachedFilter_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedFilter_15), (void*)value);
	}
};

struct ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields
{
public:
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ___U3C_instanceU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3C_instanceU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields, ___U3C_instanceU3Ek__BackingField_16)); }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * get_U3C_instanceU3Ek__BackingField_16() const { return ___U3C_instanceU3Ek__BackingField_16; }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB ** get_address_of_U3C_instanceU3Ek__BackingField_16() { return &___U3C_instanceU3Ek__BackingField_16; }
	inline void set_U3C_instanceU3Ek__BackingField_16(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * value)
	{
		___U3C_instanceU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_instanceU3Ek__BackingField_16), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct  ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 * ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_ContentOffsetGameObject_7;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___m_Camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackablesParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___U3CtrackablesParentU3Ek__BackingField_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtrackablesParentU3Ek__BackingField_5() const { return ___U3CtrackablesParentU3Ek__BackingField_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtrackablesParentU3Ek__BackingField_5() { return &___U3CtrackablesParentU3Ek__BackingField_5; }
	inline void set_U3CtrackablesParentU3Ek__BackingField_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtrackablesParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackablesParentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_trackablesParentTransformChanged_6() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___trackablesParentTransformChanged_6)); }
	inline Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 * get_trackablesParentTransformChanged_6() const { return ___trackablesParentTransformChanged_6; }
	inline Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 ** get_address_of_trackablesParentTransformChanged_6() { return &___trackablesParentTransformChanged_6; }
	inline void set_trackablesParentTransformChanged_6(Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 * value)
	{
		___trackablesParentTransformChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackablesParentTransformChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentOffsetGameObject_7() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___m_ContentOffsetGameObject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_ContentOffsetGameObject_7() const { return ___m_ContentOffsetGameObject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_ContentOffsetGameObject_7() { return &___m_ContentOffsetGameObject_7; }
	inline void set_m_ContentOffsetGameObject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_ContentOffsetGameObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContentOffsetGameObject_7), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable
struct  ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD  : public SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F
{
public:
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_DefaultConfigurationChooser_5;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_ConfigurationChooser_6;

public:
	inline static int32_t get_offset_of_U3CcurrentConfigurationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___U3CcurrentConfigurationU3Ek__BackingField_4)); }
	inline Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  get_U3CcurrentConfigurationU3Ek__BackingField_4() const { return ___U3CcurrentConfigurationU3Ek__BackingField_4; }
	inline Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494 * get_address_of_U3CcurrentConfigurationU3Ek__BackingField_4() { return &___U3CcurrentConfigurationU3Ek__BackingField_4; }
	inline void set_U3CcurrentConfigurationU3Ek__BackingField_4(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  value)
	{
		___U3CcurrentConfigurationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_DefaultConfigurationChooser_5() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_DefaultConfigurationChooser_5)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_DefaultConfigurationChooser_5() const { return ___m_DefaultConfigurationChooser_5; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_DefaultConfigurationChooser_5() { return &___m_DefaultConfigurationChooser_5; }
	inline void set_m_DefaultConfigurationChooser_5(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_DefaultConfigurationChooser_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultConfigurationChooser_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigurationChooser_6() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_ConfigurationChooser_6)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_ConfigurationChooser_6() const { return ___m_ConfigurationChooser_6; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_ConfigurationChooser_6() { return &___m_ConfigurationChooser_6; }
	inline void set_m_ConfigurationChooser_6(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_ConfigurationChooser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigurationChooser_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct  ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C  : public SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C, ___m_Trackables_9)); }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C, ___m_PendingAdds_10)); }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___s_Added_11)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___s_Updated_12)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___s_Removed_13)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct  ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct  ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARCameraManager
struct  ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874  : public SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C
{
public:
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  ___m_CameraGrainInfo_18;

public:
	inline static int32_t get_offset_of_m_FocusMode_7() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FocusMode_7)); }
	inline int32_t get_m_FocusMode_7() const { return ___m_FocusMode_7; }
	inline int32_t* get_address_of_m_FocusMode_7() { return &___m_FocusMode_7; }
	inline void set_m_FocusMode_7(int32_t value)
	{
		___m_FocusMode_7 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimationMode_8() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimationMode_8)); }
	inline int32_t get_m_LightEstimationMode_8() const { return ___m_LightEstimationMode_8; }
	inline int32_t* get_address_of_m_LightEstimationMode_8() { return &___m_LightEstimationMode_8; }
	inline void set_m_LightEstimationMode_8(int32_t value)
	{
		___m_LightEstimationMode_8 = value;
	}

	inline static int32_t get_offset_of_m_AutoFocus_9() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_AutoFocus_9)); }
	inline bool get_m_AutoFocus_9() const { return ___m_AutoFocus_9; }
	inline bool* get_address_of_m_AutoFocus_9() { return &___m_AutoFocus_9; }
	inline void set_m_AutoFocus_9(bool value)
	{
		___m_AutoFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimation_10() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimation_10)); }
	inline int32_t get_m_LightEstimation_10() const { return ___m_LightEstimation_10; }
	inline int32_t* get_address_of_m_LightEstimation_10() { return &___m_LightEstimation_10; }
	inline void set_m_LightEstimation_10(int32_t value)
	{
		___m_LightEstimation_10 = value;
	}

	inline static int32_t get_offset_of_m_FacingDirection_11() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FacingDirection_11)); }
	inline int32_t get_m_FacingDirection_11() const { return ___m_FacingDirection_11; }
	inline int32_t* get_address_of_m_FacingDirection_11() { return &___m_FacingDirection_11; }
	inline void set_m_FacingDirection_11(int32_t value)
	{
		___m_FacingDirection_11 = value;
	}

	inline static int32_t get_offset_of_frameReceived_12() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___frameReceived_12)); }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * get_frameReceived_12() const { return ___frameReceived_12; }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 ** get_address_of_frameReceived_12() { return &___frameReceived_12; }
	inline void set_frameReceived_12(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * value)
	{
		___frameReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextureInfos_15() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_TextureInfos_15)); }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * get_m_TextureInfos_15() const { return ___m_TextureInfos_15; }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A ** get_address_of_m_TextureInfos_15() { return &___m_TextureInfos_15; }
	inline void set_m_TextureInfos_15(List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * value)
	{
		___m_TextureInfos_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextureInfos_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_16() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_Camera_16)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_16() const { return ___m_Camera_16; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_16() { return &___m_Camera_16; }
	inline void set_m_Camera_16(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreRenderInvertCullingValue_17() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_PreRenderInvertCullingValue_17)); }
	inline bool get_m_PreRenderInvertCullingValue_17() const { return ___m_PreRenderInvertCullingValue_17; }
	inline bool* get_address_of_m_PreRenderInvertCullingValue_17() { return &___m_PreRenderInvertCullingValue_17; }
	inline void set_m_PreRenderInvertCullingValue_17(bool value)
	{
		___m_PreRenderInvertCullingValue_17 = value;
	}

	inline static int32_t get_offset_of_m_CameraGrainInfo_18() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_CameraGrainInfo_18)); }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  get_m_CameraGrainInfo_18() const { return ___m_CameraGrainInfo_18; }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * get_address_of_m_CameraGrainInfo_18() { return &___m_CameraGrainInfo_18; }
	inline void set_m_CameraGrainInfo_18(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		___m_CameraGrainInfo_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CameraGrainInfo_18))->___m_Texture_2), (void*)NULL);
	}
};

struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___s_PropertyIds_14;

public:
	inline static int32_t get_offset_of_s_Textures_13() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_Textures_13)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_s_Textures_13() const { return ___s_Textures_13; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_s_Textures_13() { return &___s_Textures_13; }
	inline void set_s_Textures_13(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___s_Textures_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Textures_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_PropertyIds_14() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_PropertyIds_14)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_s_PropertyIds_14() const { return ___s_PropertyIds_14; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_s_PropertyIds_14() { return &___s_PropertyIds_14; }
	inline void set_s_PropertyIds_14(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___s_PropertyIds_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PropertyIds_14), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.ARCloudReferencePoint
struct  ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC  : public ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct  ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375  : public XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD
{
public:
	// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs> UnityEngine.XR.ARCore.ARCoreSessionSubsystem::beforeSetConfiguration
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * ___beforeSetConfiguration_7;

public:
	inline static int32_t get_offset_of_beforeSetConfiguration_7() { return static_cast<int32_t>(offsetof(ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375, ___beforeSetConfiguration_7)); }
	inline Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * get_beforeSetConfiguration_7() const { return ___beforeSetConfiguration_7; }
	inline Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E ** get_address_of_beforeSetConfiguration_7() { return &___beforeSetConfiguration_7; }
	inline void set_beforeSetConfiguration_7(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * value)
	{
		___beforeSetConfiguration_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeSetConfiguration_7), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARSession
struct  ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B  : public SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}
};

struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_11;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_12;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_13;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___stateChanged_10)); }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_11() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_State_11)); }
	inline int32_t get_s_State_11() const { return ___s_State_11; }
	inline int32_t* get_address_of_s_State_11() { return &___s_State_11; }
	inline void set_s_State_11(int32_t value)
	{
		___s_State_11 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_12() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_NotTrackingReason_12)); }
	inline int32_t get_s_NotTrackingReason_12() const { return ___s_NotTrackingReason_12; }
	inline int32_t* get_address_of_s_NotTrackingReason_12() { return &___s_NotTrackingReason_12; }
	inline void set_s_NotTrackingReason_12(int32_t value)
	{
		___s_NotTrackingReason_12 = value;
	}

	inline static int32_t get_offset_of_s_Availability_13() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_Availability_13)); }
	inline int32_t get_s_Availability_13() const { return ___s_Availability_13; }
	inline int32_t* get_address_of_s_Availability_13() { return &___s_Availability_13; }
	inline void set_s_Availability_13(int32_t value)
	{
		___s_Availability_13 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARAnchor
struct  ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C  : public ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARAnchorManager
struct  ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F  : public ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * ___anchorsChanged_15;

public:
	inline static int32_t get_offset_of_m_AnchorPrefab_14() { return static_cast<int32_t>(offsetof(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F, ___m_AnchorPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_AnchorPrefab_14() const { return ___m_AnchorPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_AnchorPrefab_14() { return &___m_AnchorPrefab_14; }
	inline void set_m_AnchorPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_AnchorPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnchorPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_anchorsChanged_15() { return static_cast<int32_t>(offsetof(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F, ___anchorsChanged_15)); }
	inline Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * get_anchorsChanged_15() const { return ___anchorsChanged_15; }
	inline Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C ** get_address_of_anchorsChanged_15() { return &___anchorsChanged_15; }
	inline void set_anchorsChanged_15(Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * value)
	{
		___anchorsChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorsChanged_15), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARPlane
struct  ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891  : public ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;

public:
	inline static int32_t get_offset_of_m_VertexChangedThreshold_7() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_VertexChangedThreshold_7)); }
	inline float get_m_VertexChangedThreshold_7() const { return ___m_VertexChangedThreshold_7; }
	inline float* get_address_of_m_VertexChangedThreshold_7() { return &___m_VertexChangedThreshold_7; }
	inline void set_m_VertexChangedThreshold_7(float value)
	{
		___m_VertexChangedThreshold_7 = value;
	}

	inline static int32_t get_offset_of_boundaryChanged_8() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___boundaryChanged_8)); }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * get_boundaryChanged_8() const { return ___boundaryChanged_8; }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 ** get_address_of_boundaryChanged_8() { return &___boundaryChanged_8; }
	inline void set_boundaryChanged_8(Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * value)
	{
		___boundaryChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsumedByU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___U3CsubsumedByU3Ek__BackingField_9)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_U3CsubsumedByU3Ek__BackingField_9() const { return ___U3CsubsumedByU3Ek__BackingField_9; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_U3CsubsumedByU3Ek__BackingField_9() { return &___U3CsubsumedByU3Ek__BackingField_9; }
	inline void set_U3CsubsumedByU3Ek__BackingField_9(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___U3CsubsumedByU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsumedByU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Boundary_10() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_Boundary_10)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_Boundary_10() const { return ___m_Boundary_10; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_Boundary_10() { return &___m_Boundary_10; }
	inline void set_m_Boundary_10(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_Boundary_10 = value;
	}

	inline static int32_t get_offset_of_m_OldBoundary_11() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_OldBoundary_11)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_OldBoundary_11() const { return ___m_OldBoundary_11; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_OldBoundary_11() { return &___m_OldBoundary_11; }
	inline void set_m_OldBoundary_11(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_OldBoundary_11 = value;
	}

	inline static int32_t get_offset_of_m_HasBoundaryChanged_12() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_HasBoundaryChanged_12)); }
	inline bool get_m_HasBoundaryChanged_12() const { return ___m_HasBoundaryChanged_12; }
	inline bool* get_address_of_m_HasBoundaryChanged_12() { return &___m_HasBoundaryChanged_12; }
	inline void set_m_HasBoundaryChanged_12(bool value)
	{
		___m_HasBoundaryChanged_12 = value;
	}
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_gshared (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4_gshared (Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared (const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_mFC89774BB9348B656E12C9D2C73495237A31A399_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * Enumerable_ToList_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m18AF9F9FD246459CB92009127F397E365B5CA278_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_gshared (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_gshared (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_gshared (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::get__instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline (const RuntimeMethod* method);
// System.IntPtr Google.XR.ARCoreExtensions.ARCoreExtensions::get_currentARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method);
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::AnchorHandle(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_AnchorHandle_m33811D487E784AC56BE6D18FE3478BB015B85214 (ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ___anchor0, const RuntimeMethod* method);
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_m04E380AC030A45717B41C4BBF725A1CC5F0B7FD8 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Google.XR.ARCoreExtensions.ARCloudAnchor>()
inline ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCloudAnchor_SetAnchorHandle_m5E71569C1552876FF71C72EAA07044F88AEED9FE_inline (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, intptr_t ___anchorHandle0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ARSessionOrigin_get_trackablesParent_mC232717A3F6993690E5A68E1CD17B25F7843C634_inline (ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_m98BBD2BDF0D507C28D24829C94DB5C25A6515C22 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Google.XR.ARCoreExtensions.ARCloudReferencePoint>()
inline ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * GameObject_AddComponent_TisARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC_m80996E88A6469B8E5831343B8C8D9A7D295D455E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::ResolveCloudAnchor(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_ResolveCloudAnchor_m640CD312E616823645AD564ED953090517B6DE2C (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.FeatureMapQuality Google.XR.ARCoreExtensions.Internal.SessionApi::EstimateFeatureMapQualityForHosting(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_EstimateFeatureMapQualityForHosting_mD742C9695EDA16374884C97FC75F7E942734D3E0 (intptr_t ___sessionHandle0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, const RuntimeMethod* method);
// System.String Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorId(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnchorApi_GetCloudAnchorId_mBDB706B0108C9CF639F73639F02E76594C85633A (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetCloudAnchorState_mE695D46BAD120458770F6672CEF769B67846144B (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.Internal.Translators::ToCloudAnchorState(Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToCloudAnchorState_m61854CB05522E55B03A6BCEDAF79B57DB1D09A44 (int32_t ___state0, const RuntimeMethod* method);
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m17B168C05CF9F2917BC28FA8AF6F4F3281C377EB (intptr_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiTrackingState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetTrackingState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetTrackingState_mA042A101E1284BE759DDEA2E0A9AD7C57BF865F6 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.Translators::ToTrackingState(Google.XR.ARCoreExtensions.Internal.ApiTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToTrackingState_m5534CCD8DF6A678B33775C3D16677C8FCB57BB11 (int32_t ___state0, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.AnchorApi::GetAnchorPose(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  AnchorApi_GetAnchorPose_mA2EC5DF6D663BDD0B9AE2D445D0D2E0AA199C4F7 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method);
// UnityEngine.Pose Google.XR.ARCoreExtensions.Internal.Translators::ToUnityPose(Google.XR.ARCoreExtensions.Internal.ApiPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Translators_ToUnityPose_m752661BA4AC3C8A0CDA9023424E203BE4C0DBFE0 (ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  ___apiPose0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Detach_mFD4A52DAEFC874E8D5505FF8A326E1B74321EF77 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Release_m0AE7B8BAB64CB378EB6E4BB7A3974F17FBD01714 (intptr_t ___anchorHandle0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCloudAnchor_get_cloudAnchorId_m5E9C7A798590A1D8808843D97EBF268F6DC3A925 (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_cloudAnchorState_m8B679B0637CA4C8A87FF12E3F99207C74767F502 (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARCloudAnchor_get_trackableId_mF3BDA6CB055739CBEB7344717984B924ABF97DAD (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method);
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudAnchor::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARCloudAnchor_get_pose_mEF9E7736F5E93AE5D49364E48E33BA540280DDEC_inline (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_trackingState_m05870EC93232BF582D2BE1C80B240A7CE84F2595 (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_Update_m0C7A7A6CC6DAFFCE29536572992947E643DFFD03 (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor__ctor_mE07F4F15B5DD75C556E221DD34F60140AA1ED71E (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::SessionHandle(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_SessionHandle_m59DD7EC5A55F343514D86119937D07ECF7D8578E (ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___session0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::set__instance(Google.XR.ARCoreExtensions.ARCoreExtensions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCoreExtensions_set__instance_mEF5EAA4BB76AE0F269FFCCCF0448510B98D358BC_inline (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ___value0, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_subsystem()
inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline (SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * (*) (SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD *, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5 (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem::add_beforeSetConfiguration(System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreSessionSubsystem_add_beforeSetConfiguration_m39749F2DBBC709FBE92074C3AA97BDB017F93AD5 (ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * __this, Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * ___value0, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>::get_subsystem()
inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_inline (SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C * __this, const RuntimeMethod* method)
{
	return ((  XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * (*) (SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C *, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4 (Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem::add_beforeGetCameraConfiguration(System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreCameraSubsystem_add_beforeGetCameraConfiguration_m531E95D1BEBA4487AEC64A8B99C311B985279108 (ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * __this, Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852 * ___value0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData_Reset_m49D8BF4FA3D4DD75DF11930F264277E436F426B8 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem::remove_beforeSetConfiguration(System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreSessionSubsystem_remove_beforeSetConfiguration_m63268A6173C390FF8D56DA9339B34EF0829637C1 (ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * __this, Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem::remove_beforeGetCameraConfiguration(System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreCameraSubsystem_remove_beforeGetCameraConfiguration_mA92623B82983E3B410E6B36DA679B237AC04E4DF (ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * __this, Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852 * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
inline int32_t HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_inline (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_RequestPermission_m640082D9ABF5C928C3231AA2B8A5F04EC22E0016 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter>()
inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ScriptableObject_CreateInstance_TisARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_m3199F99F23D3D8F772A83E261B5752B2CE004238 (const RuntimeMethod* method)
{
	return ((  ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared)(method);
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter_CopyFrom_mF409DFF77E75094A63EB4BED6C6287E722B1B3F8 (ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * __this, ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ___otherFilter0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::SelectCameraConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_SelectCameraConfig_m95E9BBD3C4A5BAAC582DF83C4DA55F48BFBDD39E (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<Google.XR.ARCoreExtensions.ARCoreExtensionsConfig>()
inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8_m2F1F42F843057EDDE85DBAF8AAF0B66A868D3B1D (const RuntimeMethod* method)
{
	return ((  ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared)(method);
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig_CopyFrom_m69EB335069F80435302E2168C71BFDA8AE3A6B10 (ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * __this, ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ___otherConfig0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem::SetConfigurationDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreSessionSubsystem_SetConfigurationDirty_m24393FE1D18388C08F6B38FF31AAD38C4AF4EE07 (ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * __this, const RuntimeMethod* method);
// System.Boolean Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::IsPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPermissionsManager_IsPermissionGranted_m69BDECA965A807F2F46B9A3BEEA34972ACC08ED5 (String_t* ___permissionName0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline String_t* Enumerable_First_TisString_t_mA8931526CE5195A03E3E5E8FE10BC1F2D88644E9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mFC89774BB9348B656E12C9D2C73495237A31A399_gshared)(___source0, method);
}
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::RequestPermission(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_RequestPermission_mE9972FE0E46B7C2167BA42E68DAFB09286B6C2C8 (String_t* ___permissionName0, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___onRequestFinished1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(!0)
inline bool HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// UnityEngine.XR.ARCore.ArSession UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::get_arSession()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  ARCoreBeforeSetConfigurationEventArgs_get_arSession_m36AE454B9E5FC5646838F4D26A2786F8E7B96480_inline (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARCore.ArSession::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ArSession_AsIntPtr_mA85CA36031A4AAEA74179C55D1B3943520AAC8AD_inline (ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARCore.ArConfig UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::get_arConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E  ARCoreBeforeSetConfigurationEventArgs_get_arConfig_mB9BE3D5C455376079B9F5FDB6602E67E94E53FFA_inline (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARCore.ArConfig::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ArConfig_AsIntPtr_mA9B51F77E82E69775613503E710A4369FC86BB43_inline (ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::UpdateSessionConfig(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_UpdateSessionConfig_m226949985FE143CF32887E4849A35D38435F2208 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ___config2, const RuntimeMethod* method);
// UnityEngine.XR.ARCore.ArSession UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs::get_session()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  ARCoreBeforeGetCameraConfigurationEventArgs_get_session_mF181F614D197960A751E280BCECDE97EBD202751_inline (ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARCore.ArCameraConfigFilter UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs::get_filter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18  ARCoreBeforeGetCameraConfigurationEventArgs_get_filter_m4341D6D66C80D611C94BEF7E90B353D86F8371A6_inline (ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARCore.ArCameraConfigFilter::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ArCameraConfigFilter_AsIntPtr_mB18602D2742CAF98CE0F8CBAB1347331AF3AD197_inline (ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18 * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi::UpdateFilter(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigFilterApi_UpdateFilter_m27BB853B6DFB5B424A6496B8096069E27D5F6978 (intptr_t ___sessionHandle0, intptr_t ___filterHandle1, ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ___extensionsFilter2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARFoundation.ARCameraManager::GetConfigurations(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  ARCameraManager_GetConfigurations_mEEFC0B584A219FAC0E7726499C1A2C6F1A364DD2 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, int32_t ___allocator0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * Enumerable_ToList_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m18AF9F9FD246459CB92009127F397E365B5CA278 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m18AF9F9FD246459CB92009127F397E365B5CA278_gshared)(___source0, method);
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::Invoke(System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnChooseXRCameraConfigurationEvent_Invoke_mE248352DEAB1F5294458A2451AAF5A27ED12EC48 (OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * __this, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * ___supportedConfigurations0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
inline void Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054 (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A , const RuntimeMethod*))Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_set_currentConfiguration_m2919DB990909C5F7CD5B40125531901AABB016D1 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::Dispose()
inline void NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11 (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *, const RuntimeMethod*))NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.HelpAttribute::.ctor(System.String,Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpAttribute__ctor_m07A530695F53B73C479F1BE3C2B8ED32703768F9 (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * __this, String_t* ___helpMessage0, int32_t ___messageType1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m7CC0B54570AA90E51ED2D2D6F6F078BEF9996538 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSessionSubsystem_get_nativePtr_mB6A0E86BF3A4073D2588DA36D4C468385C33ADE0 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3 (intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARFoundation.ARAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARAnchor_get_nativePtr_mAFCE600DF5E1231E8349DDD3441EE0DC05304BD7 (ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARFoundation.ARPlane::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARPlane_get_nativePtr_m83BE2C3F5EADF8CE66FCF7045A4AB318F91F97A9 (ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraFrame_get_nativePtr_m6A77F2825FECB5D6D8620AC85F11588E097A4CE8_inline (XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * __this, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetPlaybackStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetPlaybackStatus_m099BEEE0F3A15BE01778F9D3564C5C1D7A2D7C58 (intptr_t ___sessionHandle0, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDataset(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDataset_mD1FE6F3B3F3F9085B490044B81746679DAFAABEE (intptr_t ___sessionHandle0, String_t* ___datasetFilepath1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetRecordingStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetRecordingStatus_m594A21F091DA7BD682A52D853DDC6A3C65947E10 (intptr_t ___sessionHandle0, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StartRecording(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StartRecording_m727D5790897235DA511EF85E8B1F10C833BA8AFE (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * ___config1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StopRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StopRecording_m4294BE1D74147A07215FEBE18B3233D0629DF909 (intptr_t ___sessionHandle0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_acquireCloudAnchorId(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_acquireCloudAnchorId_m8B9406D9388FB0D3DE470626307A6E0405134F5C (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t* ___hostingHandle2, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArString_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArString_release_m0C0EA0F90D17027035660D2422ACAB6DEE6F9016 (intptr_t ___stringHandle0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getCloudAnchorState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getCloudAnchorState_m944D830679E1FC79C4F92B86DDD493C5D6566E16 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___cloudAnchorState2, const RuntimeMethod* method);
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_m29A8D562D0ECAA668102CD2B69A100B027FABCBD (intptr_t ___sessionHandle0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getPose(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getPose_m6680026863B9AB9E446550FD1F2C95AA2ACAD90E (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t ___pose2, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.PoseApi::ExtractPoseValue(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  PoseApi_ExtractPoseValue_m44AAEE9CF4EF5AB17C249F28E41190289E2B6473 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseApi_Destroy_mD08CB4E95E2FC9BAE516652F53DD7657863A27FB (intptr_t ___poseHandle0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getTrackingState_mA74887894319B27C3AA7856D5644004D66F66C45 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___trackingState2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_detach_mFBB9B911C53A46743C7CD15EC7017632E65132BC (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_release_mBC7CF157CEBE778824644F0B0D1A4E4742F29C19 (intptr_t ___anchorHandle0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetPermissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidPermissionsManager_GetPermissionsService_m25928CB806903ED8481B064F148647450A4DF161 (const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetUnityActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidPermissionsManager_GetUnityActivity_m39136F4BD26D2FF61001DBCB4B259922BC3F2D4B (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * AndroidPermissionsManager_GetInstance_m3FE0933F5F32C226A43CBAE39043CC82E922D196 (const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionResult(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionResult_m68B542E004F44A9451C1BE0A8B4F06A1EAF7206A (AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * __this, String_t* ___permissionName0, bool ___granted1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager__ctor_m5872B34AFDDDCEBEFC003E69BE1AA74361D22917 (AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String Google.XR.ARCoreExtensions.Internal.ApiPose::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiPose_ToString_m04C9A72601701435D6D10E186088689742A98694 (ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getFacingDirection(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.CameraConfigFacingDirection&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getFacingDirection_m40740A7D1B301C383CC1C67BCA83106B06650D2A (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___facingDirection2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getTextureDimensions(System.IntPtr,System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getTextureDimensions_mECFA3A7E1CD556C6FFE713C9D82B8AC733EF396D (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___width2, int32_t* ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getFpsRange(System.IntPtr,System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getFpsRange_m4565448BA3E3B94D013F399B308C2A7F895E1BEF (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___minFps2, int32_t* ___maxFps3, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getDepthSensorUsage(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getDepthSensorUsage_mDB8A759CA9A7CAAFF2CED74593F2230003F4E01D (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___depthSensorUsage2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getStereoCameraUsage(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getStereoCameraUsage_mED7A2E219A2B4E18F0F89F94B6133BD711374503 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___stereoCameraUsage2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi/ExternApi::ArCameraConfigFilter_setTargetFps(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfigFilter_setTargetFps_m4C783B9C2AD0ACCB58135CA3E3215CB83DA5540A (intptr_t ___sessionHandle0, intptr_t ___cameraConfigFilterHandle1, int32_t ___fpsFilter2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi/ExternApi::ArCameraConfigFilter_setDepthSensorUsage(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfigFilter_setDepthSensorUsage_m5A4423359D6CFB3B65E14D1D4DB594E35BF07D1F (intptr_t ___sessionHandle0, intptr_t ___cameraConfigFilterHandle1, int32_t ___depthFilter2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi/ExternApi::ArCameraConfigFilter_setStereoCameraUsage(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfigFilter_setStereoCameraUsage_m20D6E293B13297C4D52B4DA3A6BB236D7986C3DD (intptr_t ___sessionHandle0, intptr_t ___cameraConfigFilterHandle1, int32_t ___stereoFilter2, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager__ctor_mA38192B2262E8A764E0B698CFE0F073500DBAB42 (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetARCoreSession_mABD8EBE895D5F921847CA283FF2414D5FAC39902 (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16 (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_mDB7093508DC69244620BA73A5DBEF42C1C9C4B64 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_m89E016132AD25B2F5402EB0996DAC4E5D6B1C035 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::ReleaseFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_ReleaseFrame_m45347438E919B28585863D972DAE6F6E0BBAD1AA (intptr_t ___frameHandle0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_destroy_m9E0723D2A17D496FCDEFFA1772476721689C576A (intptr_t ___session0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_create(System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_create_m85E751BF65099288C9AE0B74882A953831053B08 (String_t* ___apiKey0, String_t* ___bundleIdentifier1, intptr_t* ___sessionHandle2, const RuntimeMethod* method);
// System.Boolean Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ShouldUpdateARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSSupportManager_ShouldUpdateARCoreSession_m91A1242AF41A623528519CBF09710DE608343E3D (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_zNear(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zNear_mE207AB998D78E35497B1E941A20C7864D454EE45_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_zFar(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zFar_m4ABC4E0271EE81FEA88B1608B19ED3CFDA8E523B_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_screenWidth(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenWidth_m4E9ABE5FEE32FB446FDF6EC5B00961ACC66B48FB_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_screenHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenHeight_m31C5E67C7403556AFF8B72CC4BB09EA3C3AA05A3_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m1C42BB2AF3CA157B8015FA7AB36F8BB1329660E7 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenOrientation_mCF2AD6E975E790E5BE14E2A1EB71A73E8AA7E7D9_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::TryGetLatestFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_TryGetLatestFrame_m5ED10032B81B83B7A68305B2D6FE8DEA21852C86 (XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * __this, XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  ___cameraParams0, XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * ___frame1, const RuntimeMethod* method);
// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::get_timestampNs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t XRCameraFrame_get_timestampNs_m8F3730A23C9FF6A729F8D1939581D88716438DF7_inline (XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * __this, const RuntimeMethod* method);
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::FrameHandle(UnityEngine.XR.ARSubsystems.XRCameraFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_FrameHandle_mEE0D4721BAD6E1765071AF518A1923193AD7E686 (XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8  ___frame0, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_updateAndAcquireArFrame(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_updateAndAcquireArFrame_mEE91299E3FD30F0809216FAD65D4A1D64B79AA82 (intptr_t ___sessionHandle0, intptr_t ___arkitFrameHandle1, intptr_t* ___arFrame2, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF (const RuntimeMethod* method);
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_m2B3CA77EA04486B2A2766B172AA9DB79A12E1CEE (intptr_t ___sessionHandle0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.Translators::ToApiPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  Translators_ToApiPose_mC3F2C63C5BE1FEA4C761D647BE4CAEDF0D59590F (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___unityPose0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_create(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_create_m8889779015A8F280194A68DDD8A0B2A9CDA464D3 (intptr_t ___sessionHandle0, ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 * ___apiPose1, intptr_t* ___poseHandle2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_destroy_m6352F2B910A488960EAFF402717D60EE2AE95A93 (intptr_t ___poseHandle0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_getPoseRaw(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_getPoseRaw_m2AD6B9F7C99EEB2861DB4A048CB55E5FF8BE0421 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 * ___apiPose2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi::ArRecordingConfig_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArRecordingConfig_create_m8271E8A0FBFF97F54A5076D41086BB83C8E8C0DC (intptr_t ___session0, intptr_t* ___configHandle1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi::ArRecordingConfig_setMp4DatasetFilePath(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArRecordingConfig_setMp4DatasetFilePath_m4CFBE0BFDC5BC8B4EB738F5EB139EC033C5C5DCA (intptr_t ___session0, intptr_t ___configHandle1, String_t* ___datasetPath2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi::ArRecordingConfig_setAutoStopOnPause(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArRecordingConfig_setAutoStopOnPause_mB481067152141CE6D4725069C21E3EFD26E270BE (intptr_t ___session0, intptr_t ___configHandle1, int32_t ___configEnabled2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi::ArRecordingConfig_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArRecordingConfig_destroy_m5410D7B859A0B6EFC30A7A965D029A83DD5CCDCA (intptr_t ___configHandle0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArFrame_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArFrame_release_mA6DE77A60FD93A2B9938F6EE8180919AEB6C3E7C (intptr_t ___frameHandle0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArConfig_setCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_setCloudAnchorMode_mFA733ACD1FE59D14164A9D767F233A60E2147AFF (intptr_t ___sessionHandle0, intptr_t ___configHandle1, int32_t ___mode2, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchor(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_hostAndAcquireNewCloudAnchor_m12CC111D68BDA7C6A810828DC3882B2A97366CCF (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t* ___cloudAnchorHandle2, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchorWithTtl(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_hostAndAcquireNewCloudAnchorWithTtl_mD1A1DF04F8946DCF4CCC6BD7CA14EB4C4B33F18E (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, intptr_t* ___cloudAnchorHandle3, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_setAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_setAuthToken_m204BFAD1CCAD1B852FD74CCC4005A4317F62B6B9 (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_resolveAndAcquireNewCloudAnchor(System.IntPtr,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_resolveAndAcquireNewCloudAnchor_m62366B1AD56C7F101D189525FCEEF4FE5CFAF6F9 (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, intptr_t* ___cloudAnchorHandle2, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_estimateFeatureMapQualityForHosting(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_estimateFeatureMapQualityForHosting_mFBF70356256754C02EA4D747D93FE2268EFE2617 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, int32_t* ___featureMapQuality2, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_getRecordingStatus(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_getRecordingStatus_m66DFF38A8E65EF92C9757BFC69A32C45B8FEBB76 (intptr_t ___sessionHandle0, int32_t* ___recordingStatus1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingStatus(Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingStatus_mFEBF662DC1440F5774CED824202BE1D63128DB7E (int32_t ___apiStatus0, const RuntimeMethod* method);
// System.IntPtr Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::Create(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecordingConfigApi_Create_m4259C814B919E44EC6FFC984D900C7C4720D96E7 (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * ___config1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_startRecording(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_startRecording_mAB603479EEAC23804A0757A1832398DDEDA608E8 (intptr_t ___sessionHandle0, intptr_t ___recordingConfigHandle1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingConfigApi_Destroy_m0736C555861115C5A86499FCD5921D1347691C4C (intptr_t ___recordingConfigHandle0, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingResult_m65E8E6FAF7C1184CE6B30CDCFFF79F8C7C11CC6B (int32_t ___apiArStatus0, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_stopRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_stopRecording_m760F15A1E7F19801142EE127D9AE2C41F0490B06 (intptr_t ___sessionHandle0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_getPlaybackStatus(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_getPlaybackStatus_mD611157286944B34E1B4888B839394CAF39F9A35 (intptr_t ___sessionHandle0, int32_t* ___playbackStatus1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackStatus(Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackStatus_m72ABF2E633F87AEC03AFE64158ED54DA7C8FE665 (int32_t ___apiStatus0, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_setPlaybackDataset(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_setPlaybackDataset_mC954A3F4E938D0D0AE232BEEB2E4C8D15DFB71E6 (intptr_t ___sessionHandle0, String_t* ___datasetFilepath1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackResult_m63AEE99E1366C853AA3F5527EB7DC27D15D6F6E3 (int32_t ___apiArStatus0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::get_nativeConfigurationHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraConfiguration_get_nativeConfigurationHandle_m6A895097020EA19B6BB2E1BAB768CC911D8C3B98_inline (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * __this, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.CameraConfigFacingDirection Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFacingDirection(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetFacingDirection_m360186E651F93AE35B50C3E5E62AD3A88E953193 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method);
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetTextureDimensions(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  CameraConfigApi_GetTextureDimensions_m885B2829CB2393C2145A2D29A20DA0345393EB8A (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method);
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFPSRange(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  CameraConfigApi_GetFPSRange_m56F64C086B36C38FA0DEFB7F537B65CCA2E43CE0 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetDepthSensorUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetDepthSensorUsage_m12042C3A94D45711117D03B77F69668E87215529 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetStereoCameraUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetStereoCameraUsage_m476DB84609F56182A980CD4957021879E0B06484 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_acquireCloudAnchorId(intptr_t, intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_getCloudAnchorState(intptr_t, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArString_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_getPose(intptr_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_getTrackingState(intptr_t, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_detach(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArCameraConfig_getFacingDirection(intptr_t, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArCameraConfig_getTextureDimensions(intptr_t, intptr_t, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArCameraConfig_getFpsRange(intptr_t, intptr_t, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArCameraConfig_getDepthSensorUsage(intptr_t, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArCameraConfig_getStereoCameraUsage(intptr_t, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArCameraConfigFilter_setTargetFps(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArCameraConfigFilter_setDepthSensorUsage(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArCameraConfigFilter_setStereoCameraUsage(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_create(char*, char*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_destroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_updateAndAcquireArFrame(intptr_t, intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArPose_create(intptr_t, ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 *, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArPose_destroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArPose_getPoseRaw(intptr_t, intptr_t, ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArRecordingConfig_create(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArRecordingConfig_destroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArRecordingConfig_setMp4DatasetFilePath(intptr_t, intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArRecordingConfig_setAutoStopOnPause(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArFrame_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_hostAndAcquireNewCloudAnchor(intptr_t, intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_resolveAndAcquireNewCloudAnchor(intptr_t, char*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_hostAndAcquireNewCloudAnchorWithTtl(intptr_t, intptr_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_setAuthToken(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_estimateFeatureMapQualityForHosting(intptr_t, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_getConfig(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_configure(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArConfig_create(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArConfig_destroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArConfig_setCloudAnchorMode(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArConfig_getCloudAnchorMode(intptr_t, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_getRecordingStatus(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_startRecording(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_stopRecording(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_getPlaybackStatus(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_setPlaybackDataset(intptr_t, char*);
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
// Google.XR.ARCoreExtensions.ARCloudAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::HostCloudAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * ARAnchorManagerExtensions_HostCloudAnchor_mB2B92AA2A8A57C2921FF154F410A3B4A621BDE89 (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___anchorManager0, ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ___anchor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * V_1 = NULL;
	{
		// IntPtr cloudAnchorHandle = SessionApi.HostCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     anchor.AnchorHandle());
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_2 = ___anchor1;
		intptr_t L_3;
		L_3 = ARCoreHandleExtensions_AnchorHandle_m33811D487E784AC56BE6D18FE3478BB015B85214(L_2, /*hidden argument*/NULL);
		intptr_t L_4;
		L_4 = SessionApi_HostCloudAnchor_m04E380AC030A45717B41C4BBF725A1CC5F0B7FD8((intptr_t)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		// return null;
		return (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 *)NULL;
	}

IL_0025:
	{
		// ARCloudAnchor cloudAnchor =
		//     (new GameObject(_gameObjectName)).AddComponent<ARCloudAnchor>();
		IL2CPP_RUNTIME_CLASS_INIT(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		String_t* L_7 = ((ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var))->get__gameObjectName_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_9;
		L_9 = GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44(L_8, /*hidden argument*/GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44_RuntimeMethod_var);
		V_1 = L_9;
		// if (cloudAnchor)
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// cloudAnchor.SetAnchorHandle(cloudAnchorHandle);
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_12 = V_1;
		intptr_t L_13 = V_0;
		NullCheck(L_12);
		ARCloudAnchor_SetAnchorHandle_m5E71569C1552876FF71C72EAA07044F88AEED9FE_inline(L_12, (intptr_t)L_13, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// cloudAnchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_16;
		L_16 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_16);
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_17 = L_16->get_SessionOrigin_5();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = ARSessionOrigin_get_trackablesParent_mC232717A3F6993690E5A68E1CD17B25F7843C634_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_15, L_18, (bool)0, /*hidden argument*/NULL);
		// return cloudAnchor;
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_19 = V_1;
		return L_19;
	}
}
// Google.XR.ARCoreExtensions.ARCloudAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::HostCloudAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.XR.ARFoundation.ARAnchor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * ARAnchorManagerExtensions_HostCloudAnchor_mEEAAF7377FB6B48A44E21A30912297AA96823BBA (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___anchorManager0, ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ___anchor1, int32_t ___ttlDays2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C831849415D472ACDAD3625736030C927879A25);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * V_1 = NULL;
	{
		// if (ttlDays <= 0 || ttlDays > 365)
		int32_t L_0 = ___ttlDays2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___ttlDays2;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)365))))
		{
			goto IL_0027;
		}
	}

IL_000c:
	{
		// Debug.LogErrorFormat("Failed to host a Cloud Anchor with invalid TTL {0}. " +
		//     "The lifetime of the anchor in days must be positive, " +
		//     "the maximum allowed value is 1 when using an API Key to authenticate with " +
		//     "the ARCore Cloud Anchor service, otherwise the maximum allowed value is 365.",
		//     ttlDays);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		int32_t L_4 = ___ttlDays2;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral5C831849415D472ACDAD3625736030C927879A25, L_3, /*hidden argument*/NULL);
		// return null;
		return (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 *)NULL;
	}

IL_0027:
	{
		// IntPtr cloudAnchorHandle = SessionApi.HostCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     anchor.AnchorHandle(), ttlDays);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_7;
		L_7 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_7, /*hidden argument*/NULL);
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_9 = ___anchor1;
		intptr_t L_10;
		L_10 = ARCoreHandleExtensions_AnchorHandle_m33811D487E784AC56BE6D18FE3478BB015B85214(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___ttlDays2;
		intptr_t L_12;
		L_12 = SessionApi_HostCloudAnchor_m98BBD2BDF0D507C28D24829C94DB5C25A6515C22((intptr_t)L_8, (intptr_t)L_10, L_11, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_12;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_13 = V_0;
		bool L_14;
		L_14 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_13, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		// return null;
		return (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 *)NULL;
	}

IL_004d:
	{
		// ARCloudAnchor cloudAnchor =
		//     new GameObject(_gameObjectName).AddComponent<ARCloudAnchor>();
		IL2CPP_RUNTIME_CLASS_INIT(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		String_t* L_15 = ((ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var))->get__gameObjectName_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_16, L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_17;
		L_17 = GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44(L_16, /*hidden argument*/GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44_RuntimeMethod_var);
		V_1 = L_17;
		// if (cloudAnchor)
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		// cloudAnchor.SetAnchorHandle(cloudAnchorHandle);
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_20 = V_1;
		intptr_t L_21 = V_0;
		NullCheck(L_20);
		ARCloudAnchor_SetAnchorHandle_m5E71569C1552876FF71C72EAA07044F88AEED9FE_inline(L_20, (intptr_t)L_21, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// cloudAnchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_22 = V_1;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_24;
		L_24 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_24);
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_25 = L_24->get_SessionOrigin_5();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = ARSessionOrigin_get_trackablesParent_mC232717A3F6993690E5A68E1CD17B25F7843C634_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_23, L_26, (bool)0, /*hidden argument*/NULL);
		// return cloudAnchor;
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_27 = V_1;
		return L_27;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::SetAuthToken(UnityEngine.XR.ARFoundation.ARAnchorManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorManagerExtensions_SetAuthToken_mE6F8FCC9A6E3A3C138ADC069126DC84E51715648 (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___anchorManager0, String_t* ___authToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43CD37663DCAD9C43ADFC3C4BB6EE71A547239F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("AuthToken only works with iOS Supported enabled in " +
		//     "ARCore Extensions Project Settings and the target platform has set to iOS.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral43CD37663DCAD9C43ADFC3C4BB6EE71A547239F6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.ARCloudReferencePoint Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddCloudReferencePoint(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * ARAnchorManagerExtensions_AddCloudReferencePoint_mD9C7AC4BC059C3F978FB880821235EB55C74039E (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___referencePointManager0, ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ___referencePoint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC_m80996E88A6469B8E5831343B8C8D9A7D295D455E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * V_1 = NULL;
	{
		// IntPtr cloudAnchorHandle = SessionApi.HostCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     referencePoint.AnchorHandle());
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_2 = ___referencePoint1;
		intptr_t L_3;
		L_3 = ARCoreHandleExtensions_AnchorHandle_m33811D487E784AC56BE6D18FE3478BB015B85214(L_2, /*hidden argument*/NULL);
		intptr_t L_4;
		L_4 = SessionApi_HostCloudAnchor_m04E380AC030A45717B41C4BBF725A1CC5F0B7FD8((intptr_t)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		// return null;
		return (ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC *)NULL;
	}

IL_0025:
	{
		// ARCloudReferencePoint cloudReferencePoint =
		//     (new GameObject(_gameObjectName)).AddComponent<ARCloudReferencePoint>();
		IL2CPP_RUNTIME_CLASS_INIT(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		String_t* L_7 = ((ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var))->get__gameObjectName_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_9;
		L_9 = GameObject_AddComponent_TisARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC_m80996E88A6469B8E5831343B8C8D9A7D295D455E(L_8, /*hidden argument*/GameObject_AddComponent_TisARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC_m80996E88A6469B8E5831343B8C8D9A7D295D455E_RuntimeMethod_var);
		V_1 = L_9;
		// if (cloudReferencePoint)
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// cloudReferencePoint.SetAnchorHandle(cloudAnchorHandle);
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_12 = V_1;
		intptr_t L_13 = V_0;
		NullCheck(L_12);
		ARCloudAnchor_SetAnchorHandle_m5E71569C1552876FF71C72EAA07044F88AEED9FE_inline(L_12, (intptr_t)L_13, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// cloudReferencePoint.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_16;
		L_16 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_16);
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_17 = L_16->get_SessionOrigin_5();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = ARSessionOrigin_get_trackablesParent_mC232717A3F6993690E5A68E1CD17B25F7843C634_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_15, L_18, (bool)0, /*hidden argument*/NULL);
		// return cloudReferencePoint;
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_19 = V_1;
		return L_19;
	}
}
// Google.XR.ARCoreExtensions.ARCloudAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveCloudAnchorId(UnityEngine.XR.ARFoundation.ARAnchorManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * ARAnchorManagerExtensions_ResolveCloudAnchorId_mB39972F61FD8F3133799373CBA1FBFA0F76C4959 (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___anchorManager0, String_t* ___cloudAnchorId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * V_1 = NULL;
	{
		// IntPtr cloudAnchorHandle = SessionApi.ResolveCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cloudAnchorId);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___cloudAnchorId1;
		intptr_t L_3;
		L_3 = SessionApi_ResolveCloudAnchor_m640CD312E616823645AD564ED953090517B6DE2C((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_4 = V_0;
		bool L_5;
		L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return null;
		return (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 *)NULL;
	}

IL_0020:
	{
		// ARCloudAnchor cloudAnchor =
		//     (new GameObject(_gameObjectName)).AddComponent<ARCloudAnchor>();
		IL2CPP_RUNTIME_CLASS_INIT(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		String_t* L_6 = ((ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var))->get__gameObjectName_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_7, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_8;
		L_8 = GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44(L_7, /*hidden argument*/GameObject_AddComponent_TisARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2_m4E911248B5C37E8C9D8C192409110989844AEF44_RuntimeMethod_var);
		V_1 = L_8;
		// if (cloudAnchor)
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		// cloudAnchor.SetAnchorHandle(cloudAnchorHandle);
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_11 = V_1;
		intptr_t L_12 = V_0;
		NullCheck(L_11);
		ARCloudAnchor_SetAnchorHandle_m5E71569C1552876FF71C72EAA07044F88AEED9FE_inline(L_11, (intptr_t)L_12, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// cloudAnchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_13 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_15;
		L_15 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_15);
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_16 = L_15->get_SessionOrigin_5();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = ARSessionOrigin_get_trackablesParent_mC232717A3F6993690E5A68E1CD17B25F7843C634_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_14, L_17, (bool)0, /*hidden argument*/NULL);
		// return cloudAnchor;
		ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * L_18 = V_1;
		return L_18;
	}
}
// Google.XR.ARCoreExtensions.ARCloudReferencePoint Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveCloudReferenceId(UnityEngine.XR.ARFoundation.ARAnchorManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * ARAnchorManagerExtensions_ResolveCloudReferenceId_m47038E8718BF606823D220389EF1A75B73B8F26B (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___referencePointManager0, String_t* ___cloudReferenceId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC_m80996E88A6469B8E5831343B8C8D9A7D295D455E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * V_1 = NULL;
	{
		// IntPtr cloudAnchorHandle = SessionApi.ResolveCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cloudReferenceId);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___cloudReferenceId1;
		intptr_t L_3;
		L_3 = SessionApi_ResolveCloudAnchor_m640CD312E616823645AD564ED953090517B6DE2C((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_4 = V_0;
		bool L_5;
		L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return null;
		return (ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC *)NULL;
	}

IL_0020:
	{
		// ARCloudReferencePoint cloudReferencePoint =
		//     (new GameObject(_gameObjectName)).AddComponent<ARCloudReferencePoint>();
		IL2CPP_RUNTIME_CLASS_INIT(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		String_t* L_6 = ((ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var))->get__gameObjectName_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_7, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_8;
		L_8 = GameObject_AddComponent_TisARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC_m80996E88A6469B8E5831343B8C8D9A7D295D455E(L_7, /*hidden argument*/GameObject_AddComponent_TisARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC_m80996E88A6469B8E5831343B8C8D9A7D295D455E_RuntimeMethod_var);
		V_1 = L_8;
		// if (cloudReferencePoint)
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		// cloudReferencePoint.SetAnchorHandle(cloudAnchorHandle);
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_11 = V_1;
		intptr_t L_12 = V_0;
		NullCheck(L_11);
		ARCloudAnchor_SetAnchorHandle_m5E71569C1552876FF71C72EAA07044F88AEED9FE_inline(L_11, (intptr_t)L_12, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// cloudReferencePoint.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_13 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_15;
		L_15 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_15);
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_16 = L_15->get_SessionOrigin_5();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = ARSessionOrigin_get_trackablesParent_mC232717A3F6993690E5A68E1CD17B25F7843C634_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_14, L_17, (bool)0, /*hidden argument*/NULL);
		// return cloudReferencePoint;
		ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * L_18 = V_1;
		return L_18;
	}
}
// Google.XR.ARCoreExtensions.FeatureMapQuality Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::EstimateFeatureMapQualityForHosting(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARAnchorManagerExtensions_EstimateFeatureMapQualityForHosting_m434010CE313DA6CE38D35B14FE5FCCA9271D7C9F (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___anchorManager0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, const RuntimeMethod* method)
{
	{
		// return SessionApi.EstimateFeatureMapQualityForHosting(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, pose);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2 = ___pose1;
		int32_t L_3;
		L_3 = SessionApi_EstimateFeatureMapQualityForHosting_mD742C9695EDA16374884C97FC75F7E942734D3E0((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorManagerExtensions__cctor_m2A04BAA8B2997FC37180BA731031AB902563EDDF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string _gameObjectName = "ARCloudAnchor";
		((ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var))->set__gameObjectName_0(_stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414);
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
// System.String Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCloudAnchor_get_cloudAnchorId_m5E9C7A798590A1D8808843D97EBF268F6DC3A925 (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	{
		// return AnchorApi.GetCloudAnchorId(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = __this->get__anchorHandle_4();
		String_t* L_3;
		L_3 = AnchorApi_GetCloudAnchorId_mBDB706B0108C9CF639F73639F02E76594C85633A((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_cloudAnchorState_m8B679B0637CA4C8A87FF12E3F99207C74767F502 (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AnchorApi.GetCloudAnchorState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle).ToCloudAnchorState();
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = __this->get__anchorHandle_4();
		int32_t L_3;
		L_3 = AnchorApi_GetCloudAnchorState_mE695D46BAD120458770F6672CEF769B67846144B((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Translators_ToCloudAnchorState_m61854CB05522E55B03A6BCEDAF79B57DB1D09A44(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARCloudAnchor_get_trackableId_mF3BDA6CB055739CBEB7344717984B924ABF97DAD (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	{
		// return new TrackableId(0, (ulong)_anchorHandle);
		intptr_t L_0 = __this->get__anchorHandle_4();
		int64_t L_1;
		L_1 = IntPtr_op_Explicit_m17B168C05CF9F2917BC28FA8AF6F4F3281C377EB((intptr_t)L_0, /*hidden argument*/NULL);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2;
		memset((&L_2), 0, sizeof(L_2));
		TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792((&L_2), ((int64_t)((int64_t)0)), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudAnchor::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARCloudAnchor_get_pose_mEF9E7736F5E93AE5D49364E48E33BA540280DDEC (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	{
		// return _pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get__pose_5();
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_trackingState_m05870EC93232BF582D2BE1C80B240A7CE84F2595 (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AnchorApi.GetTrackingState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle).ToTrackingState();
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = __this->get__anchorHandle_4();
		int32_t L_3;
		L_3 = AnchorApi_GetTrackingState_mA042A101E1284BE759DDEA2E0A9AD7C57BF865F6((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Translators_ToTrackingState_m5534CCD8DF6A678B33775C3D16677C8FCB57BB11(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.ARCloudAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCloudAnchor_get_nativePtr_m52AE6FD1186AA9EA25121B629BD3189DF8EB9129 (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	{
		// return _anchorHandle;
		intptr_t L_0 = __this->get__anchorHandle_4();
		return (intptr_t)L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_Update_m0C7A7A6CC6DAFFCE29536572992947E643DFFD03 (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ApiPose apiPose = AnchorApi.GetAnchorPose(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = __this->get__anchorHandle_4();
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_3;
		L_3 = AnchorApi_GetAnchorPose_mA2EC5DF6D663BDD0B9AE2D445D0D2E0AA199C4F7((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// _pose = apiPose.ToUnityPose();
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_5;
		L_5 = Translators_ToUnityPose_m752661BA4AC3C8A0CDA9023424E203BE4C0DBFE0(L_4, /*hidden argument*/NULL);
		__this->set__pose_5(L_5);
		// transform.localPosition = _pose.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_7 = __this->get_address_of__pose_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7->get_position_0();
		NullCheck(L_6);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_6, L_8, /*hidden argument*/NULL);
		// transform.localRotation = _pose.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_10 = __this->get_address_of__pose_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = L_10->get_rotation_1();
		NullCheck(L_9);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_OnDestroy_mD979E2346A5E90EFFDA8C478F2D6576A3B2EA21C (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_anchorHandle != IntPtr.Zero)
		intptr_t L_0 = __this->get__anchorHandle_4();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// AnchorApi.Detach(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_2;
		L_2 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_2, /*hidden argument*/NULL);
		intptr_t L_4 = __this->get__anchorHandle_4();
		AnchorApi_Detach_mFD4A52DAEFC874E8D5505FF8A326E1B74321EF77((intptr_t)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		// AnchorApi.Release(_anchorHandle);
		intptr_t L_5 = __this->get__anchorHandle_4();
		AnchorApi_Release_m0AE7B8BAB64CB378EB6E4BB7A3974F17FBD01714((intptr_t)L_5, /*hidden argument*/NULL);
		// _anchorHandle = IntPtr.Zero;
		__this->set__anchorHandle_4((intptr_t)(0));
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_SetAnchorHandle_m5E71569C1552876FF71C72EAA07044F88AEED9FE (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, intptr_t ___anchorHandle0, const RuntimeMethod* method)
{
	{
		// _anchorHandle = anchorHandle;
		intptr_t L_0 = ___anchorHandle0;
		__this->set__anchorHandle_4((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor__ctor_mE07F4F15B5DD75C556E221DD34F60140AA1ED71E (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.String Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_cloudReferenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCloudReferencePoint_get_cloudReferenceId_m0A30F9FF4BB64371BBE6E95EC741441CE49C15DF (ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * __this, const RuntimeMethod* method)
{
	{
		// return cloudAnchorId;
		String_t* L_0;
		L_0 = ARCloudAnchor_get_cloudAnchorId_m5E9C7A798590A1D8808843D97EBF268F6DC3A925(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.CloudReferenceState Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_cloudReferenceState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudReferencePoint_get_cloudReferenceState_m2ECBEA9EE540F2CE3F30C0FADFE200987385A4AE (ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * __this, const RuntimeMethod* method)
{
	{
		// return (CloudReferenceState)cloudAnchorState;
		int32_t L_0;
		L_0 = ARCloudAnchor_get_cloudAnchorState_m8B679B0637CA4C8A87FF12E3F99207C74767F502(__this, /*hidden argument*/NULL);
		return (int32_t)(L_0);
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARCloudReferencePoint_get_trackableId_m97F6AF887DF78C983336A9BDA55C2314771EEE3E (ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * __this, const RuntimeMethod* method)
{
	{
		// return base.trackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0;
		L_0 = ARCloudAnchor_get_trackableId_mF3BDA6CB055739CBEB7344717984B924ABF97DAD(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARCloudReferencePoint_get_pose_m756FADB5CE2114F2E3E6EF3C29A5191F106A3BBB (ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * __this, const RuntimeMethod* method)
{
	{
		// return base.pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0;
		L_0 = ARCloudAnchor_get_pose_mEF9E7736F5E93AE5D49364E48E33BA540280DDEC_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudReferencePoint_get_trackingState_m0A281788744378172E806B5731D901EC062B44C0 (ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * __this, const RuntimeMethod* method)
{
	{
		// return base.trackingState;
		int32_t L_0;
		L_0 = ARCloudAnchor_get_trackingState_m05870EC93232BF582D2BE1C80B240A7CE84F2595(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudReferencePoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudReferencePoint_Update_mD24FECDEE6723652B8D33958EE665F7154C8EE85 (ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		ARCloudAnchor_Update_m0C7A7A6CC6DAFFCE29536572992947E643DFFD03(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudReferencePoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudReferencePoint__ctor_m0C9C4C1E40E90F8F99079BF53B813851B6CE1C10 (ARCloudReferencePoint_tDA0180862AAF30CF393A7608BAE4691774E2C3DC * __this, const RuntimeMethod* method)
{
	{
		ARCloudAnchor__ctor_mE07F4F15B5DD75C556E221DD34F60140AA1ED71E(__this, /*hidden argument*/NULL);
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
// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::get__instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0 = ((ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_il2cpp_TypeInfo_var))->get_U3C_instanceU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::set__instance(Google.XR.ARCoreExtensions.ARCoreExtensions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_set__instance_mEF5EAA4BB76AE0F269FFCCCF0448510B98D358BC (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0 = ___value0;
		((ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_il2cpp_TypeInfo_var))->set_U3C_instanceU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.ARCoreExtensions::get_currentARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9F0CE6F09D40E3E2188659A1979CAB154E7F9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null || _instance.Session == null)
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_2;
		L_2 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_3 = L_2->get_Session_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}

IL_001f:
	{
		// Debug.LogError("ARCore Extensions not found or not configured. Please " +
		//     "include an ARCore Extensions game object in your scene. " +
		//     "GameObject -> XR -> ARCore Extensions");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral3D9F0CE6F09D40E3E2188659A1979CAB154E7F9F, /*hidden argument*/NULL);
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_002f:
	{
		// return _instance.Session.SessionHandle();
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_5;
		L_5 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_6 = L_5->get_Session_4();
		intptr_t L_7;
		L_7 = ARCoreHandleExtensions_SessionHandle_m59DD7EC5A55F343514D86119937D07ECF7D8578E(L_6, /*hidden argument*/NULL);
		return (intptr_t)L_7;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_Awake_mCEB6AD243BF6E3BEE71D95D5327A7750913A87D6 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB74BE110B2F9A30187194FC17F1EE846327FF92B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance)
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// Debug.LogError("ARCore Extensions is already initialized. You may only " +
		//     "have one instance in your scene at a time.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB74BE110B2F9A30187194FC17F1EE846327FF92B, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// _instance = this;
		ARCoreExtensions_set__instance_mEF5EAA4BB76AE0F269FFCCCF0448510B98D358BC_inline(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_Start_mAB9934194BF55AD95CD5D988374647136F7460D4 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnEnable_m184B3D9FF04AE6A9722B654DA85F02873CCF5C53 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_BeforeConfigurationChanged_m2183D377E2C46DBB0DC36176A336814465CF0CDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_BeforeGetCameraConfiguration_m30B986E60FFC6E2A48E4138A9C2E6A44184DE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8230FFF973A77F0571F96434859DEEAADF8D514F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB071B67EA880E47A0C15DB43BAE07EFF06807B73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF5EC57E235B09D7CCE11FFEF58DACFBC36C78D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance.Session == null)
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_1 = L_0->get_Session_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogError("ARSession is required by ARCoreExtensions!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralCF5EC57E235B09D7CCE11FFEF58DACFBC36C78D4, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001d:
	{
		// _arCoreSubsystem = (ARCoreSessionSubsystem)Session.subsystem;
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_3 = __this->get_Session_4();
		NullCheck(L_3);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_4;
		L_4 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_3, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		__this->set__arCoreSubsystem_12(((ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 *)CastclassSealed((RuntimeObject*)L_4, ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375_il2cpp_TypeInfo_var)));
		// if (_arCoreSubsystem == null)
		ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * L_5 = __this->get__arCoreSubsystem_12();
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		// Debug.LogError(
		//     "No active ARCoreSessionSubsystem is available in this session, Please " +
		//     "ensure that a valid loader configuration exists in the XR project settings.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB071B67EA880E47A0C15DB43BAE07EFF06807B73, /*hidden argument*/NULL);
		// }
		goto IL_005e;
	}

IL_0047:
	{
		// _arCoreSubsystem.beforeSetConfiguration += BeforeConfigurationChanged;
		ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * L_6 = __this->get__arCoreSubsystem_12();
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_7 = (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *)il2cpp_codegen_object_new(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var);
		Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5(L_7, __this, (intptr_t)((intptr_t)ARCoreExtensions_BeforeConfigurationChanged_m2183D377E2C46DBB0DC36176A336814465CF0CDE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_RuntimeMethod_var);
		NullCheck(L_6);
		ARCoreSessionSubsystem_add_beforeSetConfiguration_m39749F2DBBC709FBE92074C3AA97BDB017F93AD5(L_6, L_7, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// _arCoreCameraSubsystem = (ARCoreCameraSubsystem)CameraManager.subsystem;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_8 = __this->get_CameraManager_6();
		NullCheck(L_8);
		XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * L_9;
		L_9 = SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_inline(L_8, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_RuntimeMethod_var);
		__this->set__arCoreCameraSubsystem_14(((ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C *)CastclassSealed((RuntimeObject*)L_9, ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C_il2cpp_TypeInfo_var)));
		// if (_arCoreCameraSubsystem == null)
		ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * L_10 = __this->get__arCoreCameraSubsystem_14();
		if (L_10)
		{
			goto IL_0088;
		}
	}
	{
		// Debug.LogError(
		//     "No active ARCoreCameraSubsystem is available in this session, Please " +
		//     "ensure that a valid loader configuration exists in the XR project settings.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral8230FFF973A77F0571F96434859DEEAADF8D514F, /*hidden argument*/NULL);
		// }
		goto IL_009f;
	}

IL_0088:
	{
		// _arCoreCameraSubsystem.beforeGetCameraConfiguration += BeforeGetCameraConfiguration;
		ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * L_11 = __this->get__arCoreCameraSubsystem_14();
		Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852 * L_12 = (Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852 *)il2cpp_codegen_object_new(Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852_il2cpp_TypeInfo_var);
		Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4(L_12, __this, (intptr_t)((intptr_t)ARCoreExtensions_BeforeGetCameraConfiguration_m30B986E60FFC6E2A48E4138A9C2E6A44184DE53D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4_RuntimeMethod_var);
		NullCheck(L_11);
		ARCoreCameraSubsystem_add_beforeGetCameraConfiguration_m531E95D1BEBA4487AEC64A8B99C311B985279108(L_11, L_12, /*hidden argument*/NULL);
	}

IL_009f:
	{
		// CachedData.Reset();
		IL2CPP_RUNTIME_CLASS_INIT(CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var);
		CachedData_Reset_m49D8BF4FA3D4DD75DF11930F264277E436F426B8(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnDisable_m0D1C1A16B63E874BDFE7E5D47A30AF8992F164E4 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_BeforeConfigurationChanged_m2183D377E2C46DBB0DC36176A336814465CF0CDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_BeforeGetCameraConfiguration_m30B986E60FFC6E2A48E4138A9C2E6A44184DE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arCoreSubsystem != null)
		ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * L_0 = __this->get__arCoreSubsystem_12();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// _arCoreSubsystem.beforeSetConfiguration -= BeforeConfigurationChanged;
		ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * L_1 = __this->get__arCoreSubsystem_12();
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_2 = (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *)il2cpp_codegen_object_new(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var);
		Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5(L_2, __this, (intptr_t)((intptr_t)ARCoreExtensions_BeforeConfigurationChanged_m2183D377E2C46DBB0DC36176A336814465CF0CDE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_RuntimeMethod_var);
		NullCheck(L_1);
		ARCoreSessionSubsystem_remove_beforeSetConfiguration_m63268A6173C390FF8D56DA9339B34EF0829637C1(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// if (_arCoreCameraSubsystem != null)
		ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * L_3 = __this->get__arCoreCameraSubsystem_14();
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// _arCoreCameraSubsystem.beforeGetCameraConfiguration -= BeforeGetCameraConfiguration;
		ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * L_4 = __this->get__arCoreCameraSubsystem_14();
		Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852 * L_5 = (Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852 *)il2cpp_codegen_object_new(Action_1_tA243ED7671AC601A1F330D99E6CAE8A8D2887852_il2cpp_TypeInfo_var);
		Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4(L_5, __this, (intptr_t)((intptr_t)ARCoreExtensions_BeforeGetCameraConfiguration_m30B986E60FFC6E2A48E4138A9C2E6A44184DE53D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m79DAD18BE8EE04C2CE33AE5307EAA5D41ED40CE4_RuntimeMethod_var);
		NullCheck(L_4);
		ARCoreCameraSubsystem_remove_beforeGetCameraConfiguration_mA92623B82983E3B410E6B36DA679B237AC04E4DF(L_4, L_5, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// CachedData.Reset();
		IL2CPP_RUNTIME_CLASS_INIT(CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var);
		CachedData_Reset_m49D8BF4FA3D4DD75DF11930F264277E436F426B8(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnDestroy_mBAA0CD15DADBF2D49761CA2C7AF4983B6D7F1D48 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance)
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// _instance = null;
		ARCoreExtensions_set__instance_mEF5EAA4BB76AE0F269FFCCCF0448510B98D358BC_inline((ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB *)NULL, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_Update_m91DACB017FCD3E965B4F580B75506F0762508B98 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_m3199F99F23D3D8F772A83E261B5752B2CE004238_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8_m2F1F42F843057EDDE85DBAF8AAF0B66A868D3B1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_requiredPermissionNames.Count > 0)
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get__requiredPermissionNames_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_inline(L_0, /*hidden argument*/HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// RequestPermission();
		ARCoreExtensions_RequestPermission_m640082D9ABF5C928C3231AA2B8A5F04EC22E0016(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (Session.SessionHandle() == IntPtr.Zero)
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_2 = __this->get_Session_4();
		intptr_t L_3;
		L_3 = ARCoreHandleExtensions_SessionHandle_m59DD7EC5A55F343514D86119937D07ECF7D8578E(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		return;
	}

IL_002c:
	{
		// if (CameraConfigFilter != null && !CameraConfigFilter.Equals(_cachedFilter))
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_5 = __this->get_CameraConfigFilter_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_7 = __this->get_CameraConfigFilter_8();
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_8 = __this->get__cachedFilter_15();
		NullCheck(L_7);
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, L_8);
		if (L_9)
		{
			goto IL_006f;
		}
	}
	{
		// _cachedFilter =
		//     ScriptableObject.CreateInstance<ARCoreExtensionsCameraConfigFilter>();
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_10;
		L_10 = ScriptableObject_CreateInstance_TisARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_m3199F99F23D3D8F772A83E261B5752B2CE004238(/*hidden argument*/ScriptableObject_CreateInstance_TisARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_m3199F99F23D3D8F772A83E261B5752B2CE004238_RuntimeMethod_var);
		__this->set__cachedFilter_15(L_10);
		// _cachedFilter.CopyFrom(CameraConfigFilter);
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_11 = __this->get__cachedFilter_15();
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_12 = __this->get_CameraConfigFilter_8();
		NullCheck(L_11);
		ARCoreExtensionsCameraConfigFilter_CopyFrom_mF409DFF77E75094A63EB4BED6C6287E722B1B3F8(L_11, L_12, /*hidden argument*/NULL);
		// SelectCameraConfig();
		ARCoreExtensions_SelectCameraConfig_m95E9BBD3C4A5BAAC582DF83C4DA55F48BFBDD39E(__this, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// if (ARCoreExtensionsConfig != null && !ARCoreExtensionsConfig.Equals(_cachedConfig))
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_13 = __this->get_ARCoreExtensionsConfig_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00cc;
		}
	}
	{
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_15 = __this->get_ARCoreExtensionsConfig_7();
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_16 = __this->get__cachedConfig_13();
		NullCheck(L_15);
		bool L_17;
		L_17 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_15, L_16);
		if (L_17)
		{
			goto IL_00cc;
		}
	}
	{
		// _cachedConfig = ScriptableObject.CreateInstance<ARCoreExtensionsConfig>();
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_18;
		L_18 = ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8_m2F1F42F843057EDDE85DBAF8AAF0B66A868D3B1D(/*hidden argument*/ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8_m2F1F42F843057EDDE85DBAF8AAF0B66A868D3B1D_RuntimeMethod_var);
		__this->set__cachedConfig_13(L_18);
		// _cachedConfig.CopyFrom(ARCoreExtensionsConfig);
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_19 = __this->get__cachedConfig_13();
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_20 = __this->get_ARCoreExtensionsConfig_7();
		NullCheck(L_19);
		ARCoreExtensionsConfig_CopyFrom_m69EB335069F80435302E2168C71BFDA8AE3A6B10(L_19, L_20, /*hidden argument*/NULL);
		// if (_requiredPermissionNames.Count > 0)
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_21 = __this->get__requiredPermissionNames_11();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_inline(L_21, /*hidden argument*/HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		// RequestPermission();
		ARCoreExtensions_RequestPermission_m640082D9ABF5C928C3231AA2B8A5F04EC22E0016(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00c1:
	{
		// _arCoreSubsystem.SetConfigurationDirty();
		ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * L_23 = __this->get__arCoreSubsystem_12();
		NullCheck(L_23);
		ARCoreSessionSubsystem_SetConfigurationDirty_m24393FE1D18388C08F6B38FF31AAD38C4AF4EE07(L_23, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnValidate_m9C703037C9D3A2F4899F4989687A340AE232E2C8 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_RequestPermission_m640082D9ABF5C928C3231AA2B8A5F04EC22E0016 (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_OnPermissionRequestFinish_m41B17EC88017206E59D308AA52104559FE97C1ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisString_t_mA8931526CE5195A03E3E5E8FE10BC1F2D88644E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!AndroidPermissionsManager.IsPermissionGranted(
		//     AndroidPermissionsManager._cameraPermission) ||
		//     !string.IsNullOrEmpty(_currentPermissionRequest))
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidPermissionsManager_IsPermissionGranted_m69BDECA965A807F2F46B9A3BEEA34972ACC08ED5(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = __this->get__currentPermissionRequest_10();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// _currentPermissionRequest = _requiredPermissionNames.First();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_3 = __this->get__requiredPermissionNames_11();
		String_t* L_4;
		L_4 = Enumerable_First_TisString_t_mA8931526CE5195A03E3E5E8FE10BC1F2D88644E9(L_3, /*hidden argument*/Enumerable_First_TisString_t_mA8931526CE5195A03E3E5E8FE10BC1F2D88644E9_RuntimeMethod_var);
		__this->set__currentPermissionRequest_10(L_4);
		// AndroidPermissionsManager.RequestPermission(
		//     _currentPermissionRequest, OnPermissionRequestFinish);
		String_t* L_5 = __this->get__currentPermissionRequest_10();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_6, __this, (intptr_t)((intptr_t)ARCoreExtensions_OnPermissionRequestFinish_m41B17EC88017206E59D308AA52104559FE97C1ED_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		AndroidPermissionsManager_RequestPermission_mE9972FE0E46B7C2167BA42E68DAFB09286B6C2C8(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnPermissionRequestFinish(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnPermissionRequestFinish_m41B17EC88017206E59D308AA52104559FE97C1ED (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, bool ___isGranted0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20C4D5B09FCD2823849C23ABD4C8823DBF46D34C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A5EDE88A442D395F8744B1AB0556E1D8A4A3E5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCED6DE2A2E63EB105631D6AC3A555E753B240B31);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		// Debug.LogFormat("{0} {1}.",
		//     isGranted ? "Granted" : "Denied", _currentPermissionRequest);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		bool L_2 = ___isGranted0;
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		G_B1_3 = _stringLiteralCED6DE2A2E63EB105631D6AC3A555E753B240B31;
		if (L_2)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			G_B2_3 = _stringLiteralCED6DE2A2E63EB105631D6AC3A555E753B240B31;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = _stringLiteral6A5EDE88A442D395F8744B1AB0556E1D8A4A3E5E;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_001c;
	}

IL_0017:
	{
		G_B3_0 = _stringLiteral20C4D5B09FCD2823849C23ABD4C8823DBF46D34C;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_001c:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = G_B3_3;
		String_t* L_4 = __this->get__currentPermissionRequest_10();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(G_B3_4, L_3, /*hidden argument*/NULL);
		// _requiredPermissionNames.Remove(_currentPermissionRequest);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_5 = __this->get__requiredPermissionNames_11();
		String_t* L_6 = __this->get__currentPermissionRequest_10();
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645(L_5, L_6, /*hidden argument*/HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		// _currentPermissionRequest = null;
		__this->set__currentPermissionRequest_10((String_t*)NULL);
		// _arCoreSubsystem.SetConfigurationDirty();
		ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * L_8 = __this->get__arCoreSubsystem_12();
		NullCheck(L_8);
		ARCoreSessionSubsystem_SetConfigurationDirty_m24393FE1D18388C08F6B38FF31AAD38C4AF4EE07(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::BeforeConfigurationChanged(UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_BeforeConfigurationChanged_m2183D377E2C46DBB0DC36176A336814465CF0CDE (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_cachedConfig == null)
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_0 = __this->get__cachedConfig_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (eventArgs.arSession.AsIntPtr() != IntPtr.Zero &&
		//     eventArgs.arConfig.AsIntPtr() != IntPtr.Zero)
		ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  L_2;
		L_2 = ARCoreBeforeSetConfigurationEventArgs_get_arSession_m36AE454B9E5FC5646838F4D26A2786F8E7B96480_inline((ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *)(&___eventArgs0), /*hidden argument*/NULL);
		V_0 = L_2;
		intptr_t L_3;
		L_3 = ArSession_AsIntPtr_mA85CA36031A4AAEA74179C55D1B3943520AAC8AD_inline((ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E *)(&V_0), /*hidden argument*/NULL);
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E  L_5;
		L_5 = ARCoreBeforeSetConfigurationEventArgs_get_arConfig_mB9BE3D5C455376079B9F5FDB6602E67E94E53FFA_inline((ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *)(&___eventArgs0), /*hidden argument*/NULL);
		V_1 = L_5;
		intptr_t L_6;
		L_6 = ArConfig_AsIntPtr_mA9B51F77E82E69775613503E710A4369FC86BB43_inline((ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E *)(&V_1), /*hidden argument*/NULL);
		bool L_7;
		L_7 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// SessionApi.UpdateSessionConfig(
		//     eventArgs.arSession.AsIntPtr(), eventArgs.arConfig.AsIntPtr(), _cachedConfig);
		ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  L_8;
		L_8 = ARCoreBeforeSetConfigurationEventArgs_get_arSession_m36AE454B9E5FC5646838F4D26A2786F8E7B96480_inline((ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *)(&___eventArgs0), /*hidden argument*/NULL);
		V_0 = L_8;
		intptr_t L_9;
		L_9 = ArSession_AsIntPtr_mA85CA36031A4AAEA74179C55D1B3943520AAC8AD_inline((ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E *)(&V_0), /*hidden argument*/NULL);
		ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E  L_10;
		L_10 = ARCoreBeforeSetConfigurationEventArgs_get_arConfig_mB9BE3D5C455376079B9F5FDB6602E67E94E53FFA_inline((ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *)(&___eventArgs0), /*hidden argument*/NULL);
		V_1 = L_10;
		intptr_t L_11;
		L_11 = ArConfig_AsIntPtr_mA9B51F77E82E69775613503E710A4369FC86BB43_inline((ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E *)(&V_1), /*hidden argument*/NULL);
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_12 = __this->get__cachedConfig_13();
		SessionApi_UpdateSessionConfig_m226949985FE143CF32887E4849A35D38435F2208((intptr_t)L_9, (intptr_t)L_11, L_12, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::BeforeGetCameraConfiguration(UnityEngine.XR.ARCore.ARCoreBeforeGetCameraConfigurationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_BeforeGetCameraConfiguration_m30B986E60FFC6E2A48E4138A9C2E6A44184DE53D (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_m3199F99F23D3D8F772A83E261B5752B2CE004238_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (CameraConfigFilter == null)
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_0 = __this->get_CameraConfigFilter_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (eventArgs.session.AsIntPtr() != IntPtr.Zero &&
		//     eventArgs.filter.AsIntPtr() != IntPtr.Zero)
		ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  L_2;
		L_2 = ARCoreBeforeGetCameraConfigurationEventArgs_get_session_mF181F614D197960A751E280BCECDE97EBD202751_inline((ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9 *)(&___eventArgs0), /*hidden argument*/NULL);
		V_0 = L_2;
		intptr_t L_3;
		L_3 = ArSession_AsIntPtr_mA85CA36031A4AAEA74179C55D1B3943520AAC8AD_inline((ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E *)(&V_0), /*hidden argument*/NULL);
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_009d;
		}
	}
	{
		ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18  L_5;
		L_5 = ARCoreBeforeGetCameraConfigurationEventArgs_get_filter_m4341D6D66C80D611C94BEF7E90B353D86F8371A6_inline((ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9 *)(&___eventArgs0), /*hidden argument*/NULL);
		V_1 = L_5;
		intptr_t L_6;
		L_6 = ArCameraConfigFilter_AsIntPtr_mB18602D2742CAF98CE0F8CBAB1347331AF3AD197_inline((ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18 *)(&V_1), /*hidden argument*/NULL);
		bool L_7;
		L_7 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_009d;
		}
	}
	{
		// CameraConfigFilterApi.UpdateFilter(
		//     eventArgs.session.AsIntPtr(), eventArgs.filter.AsIntPtr(), CameraConfigFilter);
		ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  L_8;
		L_8 = ARCoreBeforeGetCameraConfigurationEventArgs_get_session_mF181F614D197960A751E280BCECDE97EBD202751_inline((ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9 *)(&___eventArgs0), /*hidden argument*/NULL);
		V_0 = L_8;
		intptr_t L_9;
		L_9 = ArSession_AsIntPtr_mA85CA36031A4AAEA74179C55D1B3943520AAC8AD_inline((ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E *)(&V_0), /*hidden argument*/NULL);
		ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18  L_10;
		L_10 = ARCoreBeforeGetCameraConfigurationEventArgs_get_filter_m4341D6D66C80D611C94BEF7E90B353D86F8371A6_inline((ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9 *)(&___eventArgs0), /*hidden argument*/NULL);
		V_1 = L_10;
		intptr_t L_11;
		L_11 = ArCameraConfigFilter_AsIntPtr_mB18602D2742CAF98CE0F8CBAB1347331AF3AD197_inline((ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18 *)(&V_1), /*hidden argument*/NULL);
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_12 = __this->get_CameraConfigFilter_8();
		CameraConfigFilterApi_UpdateFilter_m27BB853B6DFB5B424A6496B8096069E27D5F6978((intptr_t)L_9, (intptr_t)L_11, L_12, /*hidden argument*/NULL);
		// if (!CameraConfigFilter.Equals(_cachedFilter))
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_13 = __this->get_CameraConfigFilter_8();
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_14 = __this->get__cachedFilter_15();
		NullCheck(L_13);
		bool L_15;
		L_15 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_13, L_14);
		if (L_15)
		{
			goto IL_009d;
		}
	}
	{
		// _cachedFilter =
		//     ScriptableObject.CreateInstance<ARCoreExtensionsCameraConfigFilter>();
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_16;
		L_16 = ScriptableObject_CreateInstance_TisARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_m3199F99F23D3D8F772A83E261B5752B2CE004238(/*hidden argument*/ScriptableObject_CreateInstance_TisARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_m3199F99F23D3D8F772A83E261B5752B2CE004238_RuntimeMethod_var);
		__this->set__cachedFilter_15(L_16);
		// _cachedFilter.CopyFrom(CameraConfigFilter);
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_17 = __this->get__cachedFilter_15();
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_18 = __this->get_CameraConfigFilter_8();
		NullCheck(L_17);
		ARCoreExtensionsCameraConfigFilter_CopyFrom_mF409DFF77E75094A63EB4BED6C6287E722B1B3F8(L_17, L_18, /*hidden argument*/NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::SelectCameraConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_SelectCameraConfig_m95E9BBD3C4A5BAAC582DF83C4DA55F48BFBDD39E (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m18AF9F9FD246459CB92009127F397E365B5CA278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral972007DE63DFA651A782FC6ADF43CF5613C4457F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2565802769C320CCB995CB20049AA4A4C8148C6);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (CameraManager == null)
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_0 = __this->get_CameraManager_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// using (var configurations = CameraManager.GetConfigurations(Allocator.Temp))
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_2 = __this->get_CameraManager_6();
		NullCheck(L_2);
		NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  L_3;
		L_3 = ARCameraManager_GetConfigurations_mEEFC0B584A219FAC0E7726499C1A2C6F1A364DD2(L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			// if (configurations.Length == 0)
			int32_t L_4;
			L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_0))->___m_Length_1);
			if (L_4)
			{
				goto IL_0031;
			}
		}

IL_0025:
		{
			// Debug.LogWarning(
			//     "Unable to choose a custom camera configuration " +
			//     "because none are available.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralE2565802769C320CCB995CB20049AA4A4C8148C6, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x94, FINALLY_0086);
		}

IL_0031:
		{
			// int configIndex = 0;
			V_1 = 0;
			// if (OnChooseXRCameraConfiguration != null)
			OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * L_5 = __this->get_OnChooseXRCameraConfiguration_9();
			if (!L_5)
			{
				goto IL_0052;
			}
		}

IL_003b:
		{
			// configIndex = OnChooseXRCameraConfiguration(configurations.ToList());
			OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * L_6 = __this->get_OnChooseXRCameraConfiguration_9();
			NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  L_7 = V_0;
			NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  L_8 = L_7;
			RuntimeObject * L_9 = Box(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545_il2cpp_TypeInfo_var, &L_8);
			List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * L_10;
			L_10 = Enumerable_ToList_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m18AF9F9FD246459CB92009127F397E365B5CA278((RuntimeObject*)L_9, /*hidden argument*/Enumerable_ToList_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m18AF9F9FD246459CB92009127F397E365B5CA278_RuntimeMethod_var);
			NullCheck(L_6);
			int32_t L_11;
			L_11 = OnChooseXRCameraConfigurationEvent_Invoke_mE248352DEAB1F5294458A2451AAF5A27ED12EC48(L_6, L_10, /*hidden argument*/NULL);
			V_1 = L_11;
		}

IL_0052:
		{
			// if (configIndex < 0 || configIndex >= configurations.Length)
			int32_t L_12 = V_1;
			if ((((int32_t)L_12) < ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_0056:
		{
			int32_t L_13 = V_1;
			int32_t L_14;
			L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_0))->___m_Length_1);
			if ((((int32_t)L_13) < ((int32_t)L_14)))
			{
				goto IL_006c;
			}
		}

IL_0060:
		{
			// Debug.LogWarning(
			//     "Failed to find a valid config index with " +
			//     "the custom selection function.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral972007DE63DFA651A782FC6ADF43CF5613C4457F, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x94, FINALLY_0086);
		}

IL_006c:
		{
			// CameraManager.currentConfiguration = configurations[configIndex];
			ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_15 = __this->get_CameraManager_6();
			int32_t L_16 = V_1;
			XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_17;
			L_17 = IL2CPP_NATIVEARRAY_GET_ITEM(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A , ((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_0))->___m_Buffer_0, L_16);
			Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  L_18;
			memset((&L_18), 0, sizeof(L_18));
			Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054((&L_18), L_17, /*hidden argument*/Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_RuntimeMethod_var);
			NullCheck(L_15);
			ARCameraManager_set_currentConfiguration_m2919DB990909C5F7CD5B40125531901AABB016D1(L_15, L_18, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x94, FINALLY_0086);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{ // begin finally (depth: 1)
		NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_0), /*hidden argument*/NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_RuntimeMethod_var);
		IL2CPP_END_FINALLY(134)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x94, IL_0094)
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions__ctor_m02729E7A116045781221081EF845340AC87B3A0F (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private HashSet<string> _requiredPermissionNames = new HashSet<string>();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818(L_0, /*hidden argument*/HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		__this->set__requiredPermissionNames_11(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Google.XR.ARCoreExtensions.Internal.HelpAttribute Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetTargetCameraFramerateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * ARCoreExtensionsCameraConfigFilter_GetTargetCameraFramerateInfo_m64A77E57BB928CFAA60A7EBA49E3634F3A32EEEA (ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((TargetCameraFramerate & CameraConfigTargetFps.Target30FPS) == 0)
		int32_t L_0 = __this->get_TargetCameraFramerate_4();
		if (((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// if (TargetCameraFramerate == 0)
		int32_t L_1 = __this->get_TargetCameraFramerate_4();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return new HelpAttribute(
		//     "No options are selected, " +
		//     "there will be no camera configs and this app will fail to run.",
		//     HelpAttribute.HelpMessageType.Error);
		HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * L_2 = (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 *)il2cpp_codegen_object_new(HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var);
		HelpAttribute__ctor_m07A530695F53B73C479F1BE3C2B8ED32703768F9(L_2, _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A, 3, /*hidden argument*/NULL);
		return L_2;
	}

IL_001e:
	{
		// return new HelpAttribute(
		//     "Target30FPS is not selected, this may cause no camera config be available " +
		//     "for this filter and the app may not run on all devices.",
		//     HelpAttribute.HelpMessageType.Warning);
		HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * L_3 = (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 *)il2cpp_codegen_object_new(HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var);
		HelpAttribute__ctor_m07A530695F53B73C479F1BE3C2B8ED32703768F9(L_3, _stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D, 2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		// return null;
		return (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 *)NULL;
	}
}
// Google.XR.ARCoreExtensions.Internal.HelpAttribute Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetDepthSensorUsageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * ARCoreExtensionsCameraConfigFilter_GetDepthSensorUsageInfo_mD9294858CD0F4D2862584D2E1F98FF13B5DFFB8B (ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((DepthSensorUsage & CameraConfigDepthSensorUsage.DoNotUse) == 0)
		int32_t L_0 = __this->get_DepthSensorUsage_5();
		if (((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_002a;
		}
	}
	{
		// if (DepthSensorUsage == 0)
		int32_t L_1 = __this->get_DepthSensorUsage_5();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return new HelpAttribute(
		//     "No options are selected, " +
		//     "there will be no camera configs and this app will fail to run.",
		//     HelpAttribute.HelpMessageType.Error);
		HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * L_2 = (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 *)il2cpp_codegen_object_new(HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var);
		HelpAttribute__ctor_m07A530695F53B73C479F1BE3C2B8ED32703768F9(L_2, _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A, 3, /*hidden argument*/NULL);
		return L_2;
	}

IL_001e:
	{
		// return new HelpAttribute(
		//     "DoNotUse is not selected, this may cause no camera config be available " +
		//     "for this filter and the app may not run on all devices.",
		//     HelpAttribute.HelpMessageType.Warning);
		HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * L_3 = (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 *)il2cpp_codegen_object_new(HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var);
		HelpAttribute__ctor_m07A530695F53B73C479F1BE3C2B8ED32703768F9(L_3, _stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB, 2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		// return null;
		return (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 *)NULL;
	}
}
// Google.XR.ARCoreExtensions.Internal.HelpAttribute Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetStereoCameraUsageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * ARCoreExtensionsCameraConfigFilter_GetStereoCameraUsageInfo_m44BD92EB6CA871A2897D992A16B1B417DE10C4E2 (ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((StereoCameraUsage & CameraConfigStereoCameraUsage.DoNotUse) == 0)
		int32_t L_0 = __this->get_StereoCameraUsage_6();
		if (((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_002a;
		}
	}
	{
		// if (StereoCameraUsage == 0)
		int32_t L_1 = __this->get_StereoCameraUsage_6();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return new HelpAttribute(
		//     "No options are selected, " +
		//     "there will be no camera configs and this app will fail to run.",
		//     HelpAttribute.HelpMessageType.Error);
		HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * L_2 = (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 *)il2cpp_codegen_object_new(HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var);
		HelpAttribute__ctor_m07A530695F53B73C479F1BE3C2B8ED32703768F9(L_2, _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A, 3, /*hidden argument*/NULL);
		return L_2;
	}

IL_001e:
	{
		// return new HelpAttribute(
		//     "DoNotUse is not selected, this may cause no camera config be available " +
		//     "for this filter and the app may not run on all devices.",
		//     HelpAttribute.HelpMessageType.Warning);
		HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * L_3 = (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 *)il2cpp_codegen_object_new(HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013_il2cpp_TypeInfo_var);
		HelpAttribute__ctor_m07A530695F53B73C479F1BE3C2B8ED32703768F9(L_3, _stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB, 2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		// return null;
		return (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 *)NULL;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter_OnValidate_mA7FF7695C83987C5D1087950C1D3139C98A0F99E (ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AB6AED1D1A9735B4C548FE92C2A4516197E877C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597CF650E368D8FFF2EEA95AFA7307F106D1A7DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral709DBA267E69E34DE784F99499679069BB3F16AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral899FED050775F167B273CB31245A56C36C4BAE41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA6625D3A1AECCE03CF6A02FC4F922183297BFE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((TargetCameraFramerate & CameraConfigTargetFps.Target30FPS) == 0)
		int32_t L_0 = __this->get_TargetCameraFramerate_4();
		if (((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		// if (TargetCameraFramerate == 0)
		int32_t L_1 = __this->get_TargetCameraFramerate_4();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError(
		//     "No options in Target Camera Framerate are selected, " +
		//     "there will be no camera configs and this app will fail to run.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral709DBA267E69E34DE784F99499679069BB3F16AC, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// Debug.LogWarning("Target30FPS is not selected, this may cause " +
		//    "no camera config be available for this filter and " +
		//    "the app may not run on all devices.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// if ((DepthSensorUsage & CameraConfigDepthSensorUsage.DoNotUse) == 0)
		int32_t L_2 = __this->get_DepthSensorUsage_5();
		if (((int32_t)((int32_t)L_2&(int32_t)2)))
		{
			goto IL_004c;
		}
	}
	{
		// if (DepthSensorUsage == 0)
		int32_t L_3 = __this->get_DepthSensorUsage_5();
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogError(
		//     "No options in Depth Sensor Usage are selected, " +
		//     "there will be no camera configs and this app will fail to run.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral4AB6AED1D1A9735B4C548FE92C2A4516197E877C, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// Debug.LogWarning(
		//     "DoNotUseDepthSensor is not selected, this may cause no camera config be " +
		//     "available for this filter and the app may not run on all devices.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral597CF650E368D8FFF2EEA95AFA7307F106D1A7DE, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if ((StereoCameraUsage & CameraConfigStereoCameraUsage.DoNotUse) == 0)
		int32_t L_4 = __this->get_StereoCameraUsage_6();
		if (((int32_t)((int32_t)L_4&(int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		// if (StereoCameraUsage == 0)
		int32_t L_5 = __this->get_StereoCameraUsage_6();
		if (L_5)
		{
			goto IL_0068;
		}
	}
	{
		// Debug.LogError(
		//     "No options in Stereo Camera Usage are selected, " +
		//     "there will be no camera configs and this app will fail to run.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral899FED050775F167B273CB31245A56C36C4BAE41, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// Debug.LogWarning(
		//     "DoNotUseStereoCamera is not selected, this may cause no camera config be " +
		//     "available for this filter and the app may not run on all devices.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralFA6625D3A1AECCE03CF6A02FC4F922183297BFE0, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreExtensionsCameraConfigFilter_Equals_m117F5DF0D11964B91D29A252CD3F461F8AFC9428 (ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * V_0 = NULL;
	{
		// ARCoreExtensionsCameraConfigFilter otherFilter =
		//     other as ARCoreExtensionsCameraConfigFilter;
		RuntimeObject * L_0 = ___other0;
		V_0 = ((ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 *)IsInstClass((RuntimeObject*)L_0, ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223_il2cpp_TypeInfo_var));
		// if (otherFilter == null)
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// if (TargetCameraFramerate != otherFilter.TargetCameraFramerate ||
		//     StereoCameraUsage != otherFilter.StereoCameraUsage ||
		//     DepthSensorUsage != otherFilter.DepthSensorUsage)
		int32_t L_3 = __this->get_TargetCameraFramerate_4();
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_TargetCameraFramerate_4();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = __this->get_StereoCameraUsage_6();
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_StereoCameraUsage_6();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = __this->get_DepthSensorUsage_5();
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_DepthSensorUsage_5();
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_003e;
		}
	}

IL_003c:
	{
		// return false;
		return (bool)0;
	}

IL_003e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreExtensionsCameraConfigFilter_GetHashCode_m5E39FCB11ED846725236493AE4C20870B641447D (ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * __this, const RuntimeMethod* method)
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m7CC0B54570AA90E51ED2D2D6F6F078BEF9996538(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter_CopyFrom_mF409DFF77E75094A63EB4BED6C6287E722B1B3F8 (ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * __this, ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ___otherFilter0, const RuntimeMethod* method)
{
	{
		// TargetCameraFramerate = otherFilter.TargetCameraFramerate;
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_0 = ___otherFilter0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_TargetCameraFramerate_4();
		__this->set_TargetCameraFramerate_4(L_1);
		// DepthSensorUsage = otherFilter.DepthSensorUsage;
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_2 = ___otherFilter0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_DepthSensorUsage_5();
		__this->set_DepthSensorUsage_5(L_3);
		// StereoCameraUsage = otherFilter.StereoCameraUsage;
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_4 = ___otherFilter0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_StereoCameraUsage_6();
		__this->set_StereoCameraUsage_6(L_5);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter__ctor_m33BD02F637DBBC702B9F90071FA19A452C84FBAB (ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * __this, const RuntimeMethod* method)
{
	{
		// public CameraConfigTargetFps TargetCameraFramerate =
		//     CameraConfigTargetFps.Target30FPS | CameraConfigTargetFps.Target60FPS;
		__this->set_TargetCameraFramerate_4(3);
		// public CameraConfigDepthSensorUsage DepthSensorUsage =
		//     CameraConfigDepthSensorUsage.RequireAndUse | CameraConfigDepthSensorUsage.DoNotUse;
		__this->set_DepthSensorUsage_5(3);
		// public CameraConfigStereoCameraUsage StereoCameraUsage =
		//     CameraConfigStereoCameraUsage.RequireAndUse | CameraConfigStereoCameraUsage.DoNotUse;
		__this->set_StereoCameraUsage_6(3);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Boolean Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::get_EnableCloudAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreExtensionsConfig_get_EnableCloudAnchors_m0BA603B185024C9E73F54E08F7A71AAE1BB21669 (ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * __this, const RuntimeMethod* method)
{
	{
		// return CloudAnchorMode != CloudAnchorMode.Disabled;
		int32_t L_0 = __this->get_CloudAnchorMode_4();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::set_EnableCloudAnchors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig_set_EnableCloudAnchors_mFD2A98FA30A882350FE0C9EBE788CFC7769E6914 (ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * __this, bool ___value0, const RuntimeMethod* method)
{
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * G_B2_0 = NULL;
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * G_B3_1 = NULL;
	{
		// CloudAnchorMode = value ? CloudAnchorMode.Enabled : CloudAnchorMode.Disabled;
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_CloudAnchorMode_4(G_B3_0);
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreExtensionsConfig_Equals_mE29B2E7DE27A6E73EFFCABEFB5BF1385C2D60AB8 (ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * V_0 = NULL;
	{
		// ARCoreExtensionsConfig otherConfig = other as ARCoreExtensionsConfig;
		RuntimeObject * L_0 = ___other0;
		V_0 = ((ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 *)IsInstClass((RuntimeObject*)L_0, ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8_il2cpp_TypeInfo_var));
		// if (otherConfig == null ||
		//     CloudAnchorMode != otherConfig.CloudAnchorMode)
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->get_CloudAnchorMode_4();
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_CloudAnchorMode_4();
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreExtensionsConfig_GetHashCode_m1F323594F81B3EF6431A211CE1C2B44262B531FB (ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * __this, const RuntimeMethod* method)
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m7CC0B54570AA90E51ED2D2D6F6F078BEF9996538(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig_CopyFrom_m69EB335069F80435302E2168C71BFDA8AE3A6B10 (ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * __this, ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ___otherConfig0, const RuntimeMethod* method)
{
	{
		// CloudAnchorMode = otherConfig.CloudAnchorMode;
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_0 = ___otherConfig0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_CloudAnchorMode_4();
		__this->set_CloudAnchorMode_4(L_1);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig__ctor_m04E7F2F7AE162FF3638906CBD94E3125D016A171 (ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::SessionHandle(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_SessionHandle_m59DD7EC5A55F343514D86119937D07ECF7D8578E (ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___session0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (session.subsystem == null || session.subsystem.nativePtr == null)
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_0 = ___session0;
		NullCheck(L_0);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_0, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_2 = ___session0;
		NullCheck(L_2);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_3;
		L_3 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_2, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = XRSessionSubsystem_get_nativePtr_mB6A0E86BF3A4073D2588DA36D4C468385C33ADE0(L_3, /*hidden argument*/NULL);
		goto IL_001c;
	}

IL_0016:
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_001c:
	{
		// SessionNativePointerStruct info = (SessionNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         session.subsystem.nativePtr,
		//         typeof(SessionNativePointerStruct));
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_5 = ___session0;
		NullCheck(L_5);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_6;
		L_6 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_5, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = XRSessionSubsystem_get_nativePtr_mB6A0E86BF3A4073D2588DA36D4C468385C33ADE0(L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_10;
		L_10 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_7, L_9, /*hidden argument*/NULL);
		// return info.SessionHandle;
		intptr_t L_11 = ((*(SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879 *)((SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879 *)UnBox(L_10, SessionNativePointerStruct_tEECEEBA956B668F71F708ADE710DCD23BBACD879_il2cpp_TypeInfo_var)))).get_SessionHandle_1();
		return (intptr_t)L_11;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::AnchorHandle(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_AnchorHandle_m33811D487E784AC56BE6D18FE3478BB015B85214 (ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnchorNativePointerStruct info = (AnchorNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         anchor.nativePtr,
		//         typeof(AnchorNativePointerStruct));
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_0 = ___anchor0;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARAnchor_get_nativePtr_mAFCE600DF5E1231E8349DDD3441EE0DC05304BD7(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_4;
		L_4 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_1, L_3, /*hidden argument*/NULL);
		// return info.AnchorHandle;
		intptr_t L_5 = ((*(AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038 *)((AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038 *)UnBox(L_4, AnchorNativePointerStruct_t6593BEB6CFF4F4D5B7B3C67E024AA83B96933038_il2cpp_TypeInfo_var)))).get_AnchorHandle_1();
		return (intptr_t)L_5;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::PlaneHandle(UnityEngine.XR.ARFoundation.ARPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_PlaneHandle_m4683BC2E6A02FBB8C1B663080094691C5A605A28 (ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___plane0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaneNativePointerStruct info = (PlaneNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         plane.nativePtr,
		//         typeof(PlaneNativePointerStruct));
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_0 = ___plane0;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARPlane_get_nativePtr_m83BE2C3F5EADF8CE66FCF7045A4AB318F91F97A9(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_4;
		L_4 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_1, L_3, /*hidden argument*/NULL);
		// return info.PlaneHandle;
		intptr_t L_5 = ((*(PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049 *)((PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049 *)UnBox(L_4, PlaneNativePointerStruct_t830F35022DD18A8D319D7D1117E31287875ED049_il2cpp_TypeInfo_var)))).get_PlaneHandle_1();
		return (intptr_t)L_5;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::FrameHandle(UnityEngine.XR.ARSubsystems.XRCameraFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_FrameHandle_mEE0D4721BAD6E1765071AF518A1923193AD7E686 (XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8  ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FrameNativePointerStruct info = (FrameNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         frame.nativePtr,
		//         typeof(FrameNativePointerStruct));
		intptr_t L_0;
		L_0 = XRCameraFrame_get_nativePtr_m6A77F2825FECB5D6D8620AC85F11588E097A4CE8_inline((XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 *)(&___frame0), /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_3;
		L_3 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// return info.FrameHandle;
		intptr_t L_4 = ((*(FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033 *)((FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033 *)UnBox(L_3, FrameNativePointerStruct_tCC867A431CA660142A1AFFE23B3BCAEC98CF2033_il2cpp_TypeInfo_var)))).get_FrameHandle_1();
		return (intptr_t)L_4;
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
// System.Void Google.XR.ARCoreExtensions.ARCoreRecordingConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreRecordingConfig__ctor_m41867448D0AE0F51C6BB202D5017D10C2CDA6E38 (ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * __this, const RuntimeMethod* method)
{
	{
		// public bool AutoStopOnPause = true;
		__this->set_AutoStopOnPause_5((bool)1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.ARPlaybackManager::get_PlaybackStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlaybackManager_get_PlaybackStatus_m8A8DD150B4D96DE966D1A082E73454338EF0F5D1 (const RuntimeMethod* method)
{
	{
		// return SessionApi.GetPlaybackStatus(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = SessionApi_GetPlaybackStatus_m099BEEE0F3A15BE01778F9D3564C5C1D7A2D7C58((intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.ARPlaybackManager::SetPlaybackDataset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlaybackManager_SetPlaybackDataset_mF1B1B0FDB818AB3FF865A5AA784267E6C1D02265 (String_t* ___datasetFilepath0, const RuntimeMethod* method)
{
	{
		// return SessionApi.SetPlaybackDataset(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, datasetFilepath);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___datasetFilepath0;
		int32_t L_3;
		L_3 = SessionApi_SetPlaybackDataset_mD1FE6F3B3F3F9085B490044B81746679DAFAABEE((intptr_t)L_1, L_2, /*hidden argument*/NULL);
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
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.ARRecordingManager::get_RecordingStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_get_RecordingStatus_mA5540777B87A198B303A88D9727B7BF61F1919DD (const RuntimeMethod* method)
{
	{
		// return SessionApi.GetRecordingStatus(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = SessionApi_GetRecordingStatus_m594A21F091DA7BD682A52D853DDC6A3C65947E10((intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.ARRecordingManager::StartRecording(Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_StartRecording_m963CB0B48D2774D5E9EAB1573F83EF4B74E6CCC6 (ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * ___config0, const RuntimeMethod* method)
{
	{
		// return SessionApi.StartRecording(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, config);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * L_2 = ___config0;
		int32_t L_3;
		L_3 = SessionApi_StartRecording_m727D5790897235DA511EF85E8B1F10C833BA8AFE((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.ARRecordingManager::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_StopRecording_mA45E856EC42C7D101C03D1A1C9AEA45A521F5C28 (const RuntimeMethod* method)
{
	{
		// return SessionApi.StopRecording(ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = SessionApi_StopRecording_m4294BE1D74147A07215FEBE18B3233D0629DF909((intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.String Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorId(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnchorApi_GetCloudAnchorId_mBDB706B0108C9CF639F73639F02E76594C85633A (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr stringHandle = IntPtr.Zero;
		V_0 = (intptr_t)(0);
		// ExternApi.ArAnchor_acquireCloudAnchorId(
		//     sessionHandle, anchorHandle, ref stringHandle);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		ExternApi_ArAnchor_acquireCloudAnchorId_m8B9406D9388FB0D3DE470626307A6E0405134F5C((intptr_t)L_0, (intptr_t)L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		// string cloudAnchorId = Marshal.PtrToStringAnsi(stringHandle);
		intptr_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_2, /*hidden argument*/NULL);
		// ExternApi.ArString_release(stringHandle);
		intptr_t L_4 = V_0;
		ExternApi_ArString_release_m0C0EA0F90D17027035660D2422ACAB6DEE6F9016((intptr_t)L_4, /*hidden argument*/NULL);
		// return cloudAnchorId;
		return L_3;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetCloudAnchorState_mE695D46BAD120458770F6672CEF769B67846144B (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// ApiCloudAnchorState cloudAnchorState = ApiCloudAnchorState.None;
		V_0 = 0;
		// ExternApi.ArAnchor_getCloudAnchorState(
		//     sessionHandle,
		//     anchorHandle,
		//     ref cloudAnchorState);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		ExternApi_ArAnchor_getCloudAnchorState_m944D830679E1FC79C4F92B86DDD493C5D6566E16((intptr_t)L_0, (intptr_t)L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// return cloudAnchorState;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.AnchorApi::GetAnchorPose(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  AnchorApi_GetAnchorPose_mA2EC5DF6D663BDD0B9AE2D445D0D2E0AA199C4F7 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr poseHandle = PoseApi.Create(sessionHandle);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1;
		L_1 = PoseApi_Create_m29A8D562D0ECAA668102CD2B69A100B027FABCBD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		// ExternApi.ArAnchor_getPose(sessionHandle, anchorHandle, poseHandle);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___anchorHandle1;
		intptr_t L_4 = V_0;
		ExternApi_ArAnchor_getPose_m6680026863B9AB9E446550FD1F2C95AA2ACAD90E((intptr_t)L_2, (intptr_t)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		// ApiPose apiPose = PoseApi.ExtractPoseValue(sessionHandle, poseHandle);
		intptr_t L_5 = ___sessionHandle0;
		intptr_t L_6 = V_0;
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_7;
		L_7 = PoseApi_ExtractPoseValue_m44AAEE9CF4EF5AB17C249F28E41190289E2B6473((intptr_t)L_5, (intptr_t)L_6, /*hidden argument*/NULL);
		// PoseApi.Destroy(poseHandle);
		intptr_t L_8 = V_0;
		PoseApi_Destroy_mD08CB4E95E2FC9BAE516652F53DD7657863A27FB((intptr_t)L_8, /*hidden argument*/NULL);
		// return apiPose;
		return L_7;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiTrackingState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetTrackingState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetTrackingState_mA042A101E1284BE759DDEA2E0A9AD7C57BF865F6 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// ApiTrackingState apiTrackingState = ApiTrackingState.Stopped;
		V_0 = 2;
		// ExternApi.ArAnchor_getTrackingState(sessionHandle, anchorHandle, ref apiTrackingState);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		ExternApi_ArAnchor_getTrackingState_mA74887894319B27C3AA7856D5644004D66F66C45((intptr_t)L_0, (intptr_t)L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// return apiTrackingState;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Detach_mFD4A52DAEFC874E8D5505FF8A326E1B74321EF77 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method)
{
	{
		// ExternApi.ArAnchor_detach(sessionHandle, anchorHandle);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		ExternApi_ArAnchor_detach_mFBB9B911C53A46743C7CD15EC7017632E65132BC((intptr_t)L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Release_m0AE7B8BAB64CB378EB6E4BB7A3974F17FBD01714 (intptr_t ___anchorHandle0, const RuntimeMethod* method)
{
	{
		// ExternApi.ArAnchor_release(anchorHandle);
		intptr_t L_0 = ___anchorHandle0;
		ExternApi_ArAnchor_release_mBC7CF157CEBE778824644F0B0D1A4E4742F29C19((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi__ctor_m6F2BE5EC199336BDD4852115B9F37ED5F8B7CB36 (AnchorApi_t3A049E10C4D90ADA2ED7137434E4E704B75F4C04 * __this, const RuntimeMethod* method)
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
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager__ctor_m5872B34AFDDDCEBEFC003E69BE1AA74361D22917 (AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163E615278B2AE83873F54F03D93170DAB900F53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidPermissionsManager() : base(
		//     "com.unity3d.plugin.UnityAndroidPermissions$IPermissionRequestResult")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral163E615278B2AE83873F54F03D93170DAB900F53, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::IsPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPermissionsManager_IsPermissionGranted_m69BDECA965A807F2F46B9A3BEEA34972ACC08ED5 (String_t* ___permissionName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform != RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return GetPermissionsService().Call<bool>(
		//     "IsPermissionGranted", GetUnityActivity(), permissionName);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidPermissionsManager_GetPermissionsService_m25928CB806903ED8481B064F148647450A4DF161(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = AndroidPermissionsManager_GetUnityActivity_m39136F4BD26D2FF61001DBCB4B259922BC3F2D4B(/*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		String_t* L_6 = ___permissionName0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_1);
		bool L_7;
		L_7 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_1, _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87, L_5, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::RequestPermission(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_RequestPermission_mE9972FE0E46B7C2167BA42E68DAFB09286B6C2C8 (String_t* ___permissionName0, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___onRequestFinished1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E99BC28F79DF64079057E43A8E4347F9DAD5356);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsPermissionGranted(permissionName))
		String_t* L_0 = ___permissionName0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AndroidPermissionsManager_IsPermissionGranted_m69BDECA965A807F2F46B9A3BEEA34972ACC08ED5(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// onRequestFinished(true);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ___onRequestFinished1;
		NullCheck(L_2);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_2, (bool)1, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// return;
		return;
	}

IL_0010:
	{
		// if (_permissionRequest != null)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->get__permissionRequest_6();
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.LogError("Attempted to make simultaneous Android permissions requests.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral8E99BC28F79DF64079057E43A8E4347F9DAD5356, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0022:
	{
		// _permissionRequest = onRequestFinished;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ___onRequestFinished1;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->set__permissionRequest_6(L_4);
		// GetPermissionsService().Call("RequestPermissionAsync", GetUnityActivity(),
		//     new[] { permissionName }, GetInstance());
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
		L_5 = AndroidPermissionsManager_GetPermissionsService_m25928CB806903ED8481B064F148647450A4DF161(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = AndroidPermissionsManager_GetUnityActivity_m39136F4BD26D2FF61001DBCB4B259922BC3F2D4B(/*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		String_t* L_12 = ___permissionName0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * L_14;
		L_14 = AndroidPermissionsManager_GetInstance_m3FE0933F5F32C226A43CBAE39043CC82E922D196(/*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		NullCheck(L_5);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_5, _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionGranted_m30B8D45486CD6D6E159D009D55731E4DDEDBEC52 (AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * __this, String_t* ___permissionName0, const RuntimeMethod* method)
{
	{
		// OnPermissionResult(permissionName, true);
		String_t* L_0 = ___permissionName0;
		AndroidPermissionsManager_OnPermissionResult_m68B542E004F44A9451C1BE0A8B4F06A1EAF7206A(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionDenied(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionDenied_m9C918BC1D5C3FFB885BC934F34C57EA3FAF71206 (AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * __this, String_t* ___permissionName0, const RuntimeMethod* method)
{
	{
		// OnPermissionResult(permissionName, false);
		String_t* L_0 = ___permissionName0;
		AndroidPermissionsManager_OnPermissionResult_m68B542E004F44A9451C1BE0A8B4F06A1EAF7206A(__this, L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnActivityResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnActivityResult_m70876F6B0819B55CA8BFBA40CC7161622388A60F (AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * AndroidPermissionsManager_GetInstance_m3FE0933F5F32C226A43CBAE39043CC82E922D196 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * L_0 = ((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->get__instance_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _instance = new AndroidPermissionsManager();
		AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * L_1 = (AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 *)il2cpp_codegen_object_new(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		AndroidPermissionsManager__ctor_m5872B34AFDDDCEBEFC003E69BE1AA74361D22917(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->set__instance_5(L_1);
	}

IL_0011:
	{
		// return _instance;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * L_2 = ((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->get__instance_5();
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetUnityActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidPermissionsManager_GetUnityActivity_m39136F4BD26D2FF61001DBCB4B259922BC3F2D4B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_activity == null)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->get__activity_7();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// AndroidJavaClass unityPlayer =
		//     new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		// _activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->set__activity_7(L_2);
	}

IL_0020:
	{
		// return _activity;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->get__activity_7();
		return L_3;
	}
}
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetPermissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidPermissionsManager_GetPermissionsService_m25928CB806903ED8481B064F148647450A4DF161 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_permissionService == null)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->get__permissionService_8();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// _permissionService =
		//     new AndroidJavaObject("com.unity3d.plugin.UnityAndroidPermissions");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_2, _stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->set__permissionService_8(L_2);
	}

IL_001b:
	{
		// return _permissionService;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->get__permissionService_8();
		return L_3;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionResult(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionResult_m68B542E004F44A9451C1BE0A8B4F06A1EAF7206A (AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0 * __this, String_t* ___permissionName0, bool ___granted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64AE57C4A1D5795E1348D838B9F774F70790F43B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_permissionRequest == null)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->get__permissionRequest_6();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogErrorFormat(
		//     "AndroidPermissionsManager received an unexpected permissions result {0}",
		//     permissionName);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___permissionName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral64AE57C4A1D5795E1348D838B9F774F70790F43B, L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001c:
	{
		// var onRequestFinished = _permissionRequest;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->get__permissionRequest_6();
		// _permissionRequest = null;
		((AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_tF5A886898D93329AECAB4206AC117F1D1B18D3D0_il2cpp_TypeInfo_var))->set__permissionRequest_6((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)NULL);
		// onRequestFinished(granted);
		bool L_5 = ___granted1;
		NullCheck(L_4);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_4, L_5, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager__cctor_m546119CB2F6B79CB36F803A9791CB6DEB4A3DFF3 (const RuntimeMethod* method)
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
// System.String Google.XR.ARCoreExtensions.Internal.ApiPose::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiPose_ToString_m04C9A72601701435D6D10E186088689742A98694 (ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB6CCA9FBB351C07165F2A4278DD99B4969FAE12);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("qx: {0}, qy: {1}, qz: {2}, qw: {3}, x: {4}, y: {5}, z: {6}",
		//     Qx, Qy, Qz, Qw, X, Y, Z);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		float L_2 = __this->get_Qx_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		float L_6 = __this->get_Qy_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		float L_10 = __this->get_Qz_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		float L_14 = __this->get_Qw_3();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		float L_18 = __this->get_X_4();
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_17;
		float L_22 = __this->get_Y_5();
		float L_23 = L_22;
		RuntimeObject * L_24 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_21;
		float L_26 = __this->get_Z_6();
		float L_27 = L_26;
		RuntimeObject * L_28 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_28);
		String_t* L_29;
		L_29 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralFB6CCA9FBB351C07165F2A4278DD99B4969FAE12, L_25, /*hidden argument*/NULL);
		return L_29;
	}
}
IL2CPP_EXTERN_C  String_t* ApiPose_ToString_m04C9A72601701435D6D10E186088689742A98694_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 * _thisAdjusted = reinterpret_cast<ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ApiPose_ToString_m04C9A72601701435D6D10E186088689742A98694(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::SetCachedData(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData_SetCachedData_m5B2B7E8EA4A00070D8EDADC9E65D4F43C951D257 (String_t* ___dataName0, RuntimeObject * ___dataValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dataValue is IntPtr)
		RuntimeObject * L_0 = ___dataValue1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, IntPtr_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _cachedData[dataName] = dataValue;
		IL2CPP_RUNTIME_CLASS_INIT(CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ((CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var))->get__cachedData_0();
		String_t* L_2 = ___dataName0;
		RuntimeObject * L_3 = ___dataValue1;
		NullCheck(L_1);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData_Reset_m49D8BF4FA3D4DD75DF11930F264277E436F426B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cachedData.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ((CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var))->get__cachedData_0();
		NullCheck(L_0);
		Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92(L_0, /*hidden argument*/Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData__cctor_m8717724FD8A280848D834B4A964DF428D8BB04BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, object> _cachedData = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		((CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t521F48191AEF6451E1AE020500E8CA3C8A73FCB2_il2cpp_TypeInfo_var))->set__cachedData_0(L_0);
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
// Google.XR.ARCoreExtensions.CameraConfigFacingDirection Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFacingDirection(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetFacingDirection_m360186E651F93AE35B50C3E5E62AD3A88E953193 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// CameraConfigFacingDirection facingDirection = CameraConfigFacingDirection.Back;
		V_0 = 0;
		// ExternApi.ArCameraConfig_getFacingDirection(sessionHandle, cameraConfigHandle,
		//     ref facingDirection);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___cameraConfigHandle1;
		ExternApi_ArCameraConfig_getFacingDirection_m40740A7D1B301C383CC1C67BCA83106B06650D2A((intptr_t)L_0, (intptr_t)L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// return facingDirection;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetTextureDimensions(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  CameraConfigApi_GetTextureDimensions_m885B2829CB2393C2145A2D29A20DA0345393EB8A (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int width = 0;
		V_0 = 0;
		// int height = 0;
		V_1 = 0;
		// ExternApi.ArCameraConfig_getTextureDimensions(
		//     sessionHandle, cameraConfigHandle, ref width, ref height);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___cameraConfigHandle1;
		ExternApi_ArCameraConfig_getTextureDimensions_mECFA3A7E1CD556C6FFE713C9D82B8AC733EF396D((intptr_t)L_0, (intptr_t)L_1, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		// return new Vector2Int(width, height);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFPSRange(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  CameraConfigApi_GetFPSRange_m56F64C086B36C38FA0DEFB7F537B65CCA2E43CE0 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int minFps = 0;
		V_0 = 0;
		// int maxFps = 0;
		V_1 = 0;
		// ExternApi.ArCameraConfig_getFpsRange(
		//     sessionHandle, cameraConfigHandle, ref minFps, ref maxFps);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___cameraConfigHandle1;
		ExternApi_ArCameraConfig_getFpsRange_m4565448BA3E3B94D013F399B308C2A7F895E1BEF((intptr_t)L_0, (intptr_t)L_1, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		// return new Vector2Int(minFps, maxFps);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetDepthSensorUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetDepthSensorUsage_m12042C3A94D45711117D03B77F69668E87215529 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int depth = (int)CameraConfigDepthSensorUsage.DoNotUse;
		V_0 = 2;
		// ExternApi.ArCameraConfig_getDepthSensorUsage(
		//     sessionHandle, cameraConfigHandle, ref depth);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___cameraConfigHandle1;
		ExternApi_ArCameraConfig_getDepthSensorUsage_mDB8A759CA9A7CAAFF2CED74593F2230003F4E01D((intptr_t)L_0, (intptr_t)L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// return (CameraConfigDepthSensorUsage)depth;
		int32_t L_2 = V_0;
		return (int32_t)(L_2);
	}
}
// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetStereoCameraUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetStereoCameraUsage_m476DB84609F56182A980CD4957021879E0B06484 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int stereo = (int)CameraConfigStereoCameraUsage.DoNotUse;
		V_0 = 2;
		// ExternApi.ArCameraConfig_getStereoCameraUsage(sessionHandle, cameraConfigHandle,
		//     ref stereo);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___cameraConfigHandle1;
		ExternApi_ArCameraConfig_getStereoCameraUsage_mED7A2E219A2B4E18F0F89F94B6133BD711374503((intptr_t)L_0, (intptr_t)L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// return (CameraConfigStereoCameraUsage)stereo;
		int32_t L_2 = V_0;
		return (int32_t)(L_2);
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigApi__ctor_m38B622F4022A188FB3B2E86C3A6A8B0BA8A109A4 (CameraConfigApi_t5B2F9B8F2E8CBCD9F180A3BBF981E82D53AA0BCC * __this, const RuntimeMethod* method)
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
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi::UpdateFilter(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigFilterApi_UpdateFilter_m27BB853B6DFB5B424A6496B8096069E27D5F6978 (intptr_t ___sessionHandle0, intptr_t ___filterHandle1, ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ___extensionsFilter2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (extensionsFilter != null)
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_0 = ___extensionsFilter2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// ExternApi.ArCameraConfigFilter_setTargetFps(
		//     sessionHandle, filterHandle, (int)extensionsFilter.TargetCameraFramerate);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___filterHandle1;
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_4 = ___extensionsFilter2;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_TargetCameraFramerate_4();
		ExternApi_ArCameraConfigFilter_setTargetFps_m4C783B9C2AD0ACCB58135CA3E3215CB83DA5540A((intptr_t)L_2, (intptr_t)L_3, L_5, /*hidden argument*/NULL);
		// ExternApi.ArCameraConfigFilter_setDepthSensorUsage(
		//     sessionHandle, filterHandle, (int)extensionsFilter.DepthSensorUsage);
		intptr_t L_6 = ___sessionHandle0;
		intptr_t L_7 = ___filterHandle1;
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_8 = ___extensionsFilter2;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_DepthSensorUsage_5();
		ExternApi_ArCameraConfigFilter_setDepthSensorUsage_m5A4423359D6CFB3B65E14D1D4DB594E35BF07D1F((intptr_t)L_6, (intptr_t)L_7, L_9, /*hidden argument*/NULL);
		// ExternApi.ArCameraConfigFilter_setStereoCameraUsage(
		//     sessionHandle, filterHandle, (int)extensionsFilter.StereoCameraUsage);
		intptr_t L_10 = ___sessionHandle0;
		intptr_t L_11 = ___filterHandle1;
		ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * L_12 = ___extensionsFilter2;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_StereoCameraUsage_6();
		ExternApi_ArCameraConfigFilter_setStereoCameraUsage_m20D6E293B13297C4D52B4DA3A6BB236D7986C3DD((intptr_t)L_10, (intptr_t)L_11, L_13, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigFilterApi__ctor_m0287708562BE8A658F64BC33F6E3D0DF86851FDE (CameraConfigFilterApi_tB98FB05FD798F19414A81AB4A3755812FB33395F * __this, const RuntimeMethod* method)
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
// System.Void Google.XR.ARCoreExtensions.Internal.DllImportNoop::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllImportNoop__ctor_m5C18ED78375BF6C85EA5503477400CAA8B2B07DB (DllImportNoop_t9D582D77B6E6AB33EC25AAD8CE1CB739766E36F6 * __this, String_t* ___dllName0, const RuntimeMethod* method)
{
	{
		// public DllImportNoop(string dllName)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicHelpAttribute__ctor_mB13E85BB295E95BD21F40C85BF17513B04C8F0FE (DynamicHelpAttribute_t2C60C0357462E75E3373554A96D4A1240451061D * __this, String_t* ___checkingFunction0, const RuntimeMethod* method)
{
	{
		// public DynamicHelpAttribute(string checkingFunction)
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// CheckingFunction = checkingFunction;
		String_t* L_0 = ___checkingFunction0;
		__this->set_CheckingFunction_0(L_0);
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
// System.Void Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumFlagsAttribute__ctor_m04447EA13AFDEED421A80B9A400992A6570F8440 (EnumFlagsAttribute_tFF62A6C6546E4C20A061B544CD5625FEA26AB545 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		// public EnumFlagsAttribute(System.Type type)
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// EnumType = type;
		Type_t * L_0 = ___type0;
		__this->set_EnumType_0(L_0);
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
// System.Void Google.XR.ARCoreExtensions.Internal.HelpAttribute::.ctor(System.String,Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpAttribute__ctor_m07A530695F53B73C479F1BE3C2B8ED32703768F9 (HelpAttribute_t9D1DFCD9BD58389549E62913E1A0F9553D715013 * __this, String_t* ___helpMessage0, int32_t ___messageType1, const RuntimeMethod* method)
{
	{
		// public HelpAttribute(string helpMessage,
		//     HelpMessageType messageType = HelpMessageType.None)
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// HelpMessage = helpMessage;
		String_t* L_0 = ___helpMessage0;
		__this->set_HelpMessage_0(L_0);
		// MessageType = messageType;
		int32_t L_1 = ___messageType1;
		__this->set_MessageType_1(L_1);
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
// Google.XR.ARCoreExtensions.Internal.IOSSupportManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * IOSSupportManager_get_Instance_mF74A18977B4C34F0B31914E3168CE0A579AC56C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15C92D5753736212986CC97F794B6E95F8F532B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * L_0 = ((IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_il2cpp_TypeInfo_var))->get__instance_1();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// _instance = new IOSSupportManager();
		IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * L_1 = (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE *)il2cpp_codegen_object_new(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_il2cpp_TypeInfo_var);
		IOSSupportManager__ctor_mA38192B2262E8A764E0B698CFE0F073500DBAB42(L_1, /*hidden argument*/NULL);
		((IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_il2cpp_TypeInfo_var))->set__instance_1(L_1);
		// Debug.LogError("IOSSupportManager should only work on iOS platform.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB15C92D5753736212986CC97F794B6E95F8F532B, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// return _instance;
		IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * L_2 = ((IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_il2cpp_TypeInfo_var))->get__instance_1();
		return L_2;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_ARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IOSSupportManager_get_ARCoreSessionHandle_mEF2E7F06235B8A17AA3593F6F9CC7BBD684F8F7F (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, const RuntimeMethod* method)
{
	{
		// return _sessionHandle;
		intptr_t L_0 = __this->get__sessionHandle_4();
		return (intptr_t)L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::SetEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_SetEnabled_mD1FB646E231A11789B8F63E8F576E8086113FF26 (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// _isEnabled = enabled;
		bool L_0 = ___enabled0;
		__this->set__isEnabled_2(L_0);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateARSession(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateARSession_mAED2D6DF3BB49CA98B0E32EA446B7164E00F1D0D (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___session0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (session == null)
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_0 = ___session0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// ResetARCoreSession();
		IOSSupportManager_ResetARCoreSession_mABD8EBE895D5F921847CA283FF2414D5FAC39902(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// _arKitSession = session;
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_2 = ___session0;
		__this->set__arKitSession_6(L_2);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateCameraManager(UnityEngine.XR.ARFoundation.ARCameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateCameraManager_m3C21B6E02CE63440A2BE2EADA4FDC486DE337A3D (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ___cameraManager0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSSupportManager_OnFrameUpdate_m86A01EEC08F91419133E4585789DA0C6FDA79520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_cameraManager == cameraManager)
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_0 = __this->get__cameraManager_7();
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_1 = ___cameraManager0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (_cameraManager != null)
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_3 = __this->get__cameraManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// cameraManager.frameReceived -= OnFrameUpdate;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_5 = ___cameraManager0;
		Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * L_6 = (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *)il2cpp_codegen_object_new(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16(L_6, __this, (intptr_t)((intptr_t)IOSSupportManager_OnFrameUpdate_m86A01EEC08F91419133E4585789DA0C6FDA79520_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		NullCheck(L_5);
		ARCameraManager_remove_frameReceived_mDB7093508DC69244620BA73A5DBEF42C1C9C4B64(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// _cameraManager = cameraManager;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_7 = ___cameraManager0;
		__this->set__cameraManager_7(L_7);
		// _cameraManager.frameReceived += OnFrameUpdate;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_8 = __this->get__cameraManager_7();
		Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * L_9 = (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *)il2cpp_codegen_object_new(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16(L_9, __this, (intptr_t)((intptr_t)IOSSupportManager_OnFrameUpdate_m86A01EEC08F91419133E4585789DA0C6FDA79520_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		NullCheck(L_8);
		ARCameraManager_add_frameReceived_m89E016132AD25B2F5402EB0996DAC4E5D6B1C035(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetARCoreSession_mABD8EBE895D5F921847CA283FF2414D5FAC39902 (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FC29683F6E19781A0897EEB405C7FEA0CAB7A50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_sessionHandle != IntPtr.Zero)
		intptr_t L_0 = __this->get__sessionHandle_4();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		// Debug.Log("Reset cross platform ARCoreSession.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1FC29683F6E19781A0897EEB405C7FEA0CAB7A50, /*hidden argument*/NULL);
		// if (_frameHandle != IntPtr.Zero)
		intptr_t L_2 = __this->get__frameHandle_5();
		bool L_3;
		L_3 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// SessionApi.ReleaseFrame(_frameHandle);
		intptr_t L_4 = __this->get__frameHandle_5();
		SessionApi_ReleaseFrame_m45347438E919B28585863D972DAE6F6E0BBAD1AA((intptr_t)L_4, /*hidden argument*/NULL);
		// _frameHandle = IntPtr.Zero;
		__this->set__frameHandle_5((intptr_t)(0));
	}

IL_0044:
	{
		// ExternApi.ArSession_destroy(_sessionHandle);
		intptr_t L_5 = __this->get__sessionHandle_4();
		ExternApi_ArSession_destroy_m9E0723D2A17D496FCDEFFA1772476721689C576A((intptr_t)L_5, /*hidden argument*/NULL);
		// _sessionHandle = IntPtr.Zero;
		__this->set__sessionHandle_4((intptr_t)(0));
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetInstanceAndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetInstanceAndSession_m426B1715C0E5F9907D5022E302B77D7BB0ACC049 (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetARCoreSession();
		IOSSupportManager_ResetARCoreSession_mABD8EBE895D5F921847CA283FF2414D5FAC39902(__this, /*hidden argument*/NULL);
		// if (_instance != null)
		IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * L_0 = ((IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_il2cpp_TypeInfo_var))->get__instance_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _instance = null;
		((IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE_il2cpp_TypeInfo_var))->set__instance_1((IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE *)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::CreateARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_CreateARCoreSession_mB3DD42A2692FD658B8CDA039ED3872592712D52E (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC6D3D4D29E5DDD25AA66877ECD85907DE001485);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE72C6333E41274633A472EB00E664E60390F9953);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * G_B2_0 = NULL;
	IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * G_B3_1 = NULL;
	{
		// ResetARCoreSession();
		IOSSupportManager_ResetARCoreSession_mABD8EBE895D5F921847CA283FF2414D5FAC39902(__this, /*hidden argument*/NULL);
		// _iosCloudServicesApiKey = RuntimeConfig.Instance == null ?
		//     string.Empty : RuntimeConfig.Instance.IOSCloudServicesApiKey;
		RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6 * L_0 = ((RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0020;
		}
	}
	{
		RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6 * L_2 = ((RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_IOSCloudServicesApiKey_5();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0020:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__iosCloudServicesApiKey_3(G_B3_0);
		// Debug.Log("Creating a cross platform ARCore session with IOS Cloud Services API Key:" +
		//     _iosCloudServicesApiKey);
		String_t* L_5 = __this->get__iosCloudServicesApiKey_3();
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE72C6333E41274633A472EB00E664E60390F9953, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// var status = ExternApi.ArSession_create(
		//     _iosCloudServicesApiKey, null, ref _sessionHandle);
		String_t* L_7 = __this->get__iosCloudServicesApiKey_3();
		intptr_t* L_8 = __this->get_address_of__sessionHandle_4();
		int32_t L_9;
		L_9 = ExternApi_ArSession_create_m85E751BF65099288C9AE0B74882A953831053B08(L_7, (String_t*)NULL, (intptr_t*)L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (status != ApiArStatus.Success)
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to create a cross platform ARCore session with " +
		//     "error: {0}.", status);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteralBC6D3D4D29E5DDD25AA66877ECD85907DE001485, L_12, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::OnFrameUpdate(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_OnFrameUpdate_m86A01EEC08F91419133E4585789DA0C6FDA79520 (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42  ___frameEventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B13EAD05D03F70A5E4B127342469A013FE345E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97737379DB2CF719EFFC9E4F6C55519041321878);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC97C2FBB5C80543B8895530F2123C3D6F58ACCB);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!ShouldUpdateARCoreSession())
		bool L_0;
		L_0 = IOSSupportManager_ShouldUpdateARCoreSession_m91A1242AF41A623528519CBF09710DE608343E3D(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_sessionHandle == IntPtr.Zero)
		intptr_t L_1 = __this->get__sessionHandle_4();
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// if (_frameHandle != IntPtr.Zero)
		intptr_t L_3 = __this->get__frameHandle_5();
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// SessionApi.ReleaseFrame(_frameHandle);
		intptr_t L_5 = __this->get__frameHandle_5();
		SessionApi_ReleaseFrame_m45347438E919B28585863D972DAE6F6E0BBAD1AA((intptr_t)L_5, /*hidden argument*/NULL);
		// _frameHandle = IntPtr.Zero;
		__this->set__frameHandle_5((intptr_t)(0));
	}

IL_0044:
	{
		// if (_arKitSession != null && _cameraManager != null && _arKitSession.enabled)
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_6 = __this->get__arKitSession_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_014f;
		}
	}
	{
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_8 = __this->get__cameraManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_014f;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_10 = __this->get__arKitSession_6();
		NullCheck(L_10);
		bool L_11;
		L_11 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_014f;
		}
	}
	{
		// var cameraParams = new XRCameraParams
		// {
		// zNear = _cameraManager.GetComponent<Camera>().nearClipPlane,
		// zFar = _cameraManager.GetComponent<Camera>().farClipPlane,
		// screenWidth = Screen.width,
		// screenHeight = Screen.height,
		// screenOrientation = Screen.orientation
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 ));
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_12 = __this->get__cameraManager_7();
		NullCheck(L_12);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(L_12, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		NullCheck(L_13);
		float L_14;
		L_14 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_13, /*hidden argument*/NULL);
		XRCameraParams_set_zNear_mE207AB998D78E35497B1E941A20C7864D454EE45_inline((XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 *)(&V_3), L_14, /*hidden argument*/NULL);
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_15 = __this->get__cameraManager_7();
		NullCheck(L_15);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16;
		L_16 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(L_15, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		NullCheck(L_16);
		float L_17;
		L_17 = Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596(L_16, /*hidden argument*/NULL);
		XRCameraParams_set_zFar_m4ABC4E0271EE81FEA88B1608B19ED3CFDA8E523B_inline((XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 *)(&V_3), L_17, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		XRCameraParams_set_screenWidth_m4E9ABE5FEE32FB446FDF6EC5B00961ACC66B48FB_inline((XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 *)(&V_3), ((float)((float)L_18)), /*hidden argument*/NULL);
		int32_t L_19;
		L_19 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		XRCameraParams_set_screenHeight_m31C5E67C7403556AFF8B72CC4BB09EA3C3AA05A3_inline((XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 *)(&V_3), ((float)((float)L_19)), /*hidden argument*/NULL);
		int32_t L_20;
		L_20 = Screen_get_orientation_m1C42BB2AF3CA157B8015FA7AB36F8BB1329660E7(/*hidden argument*/NULL);
		XRCameraParams_set_screenOrientation_mCF2AD6E975E790E5BE14E2A1EB71A73E8AA7E7D9_inline((XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 *)(&V_3), L_20, /*hidden argument*/NULL);
		XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  L_21 = V_3;
		V_0 = L_21;
		// if (!_cameraManager.subsystem.TryGetLatestFrame(
		//         cameraParams, out XRCameraFrame frame))
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_22 = __this->get__cameraManager_7();
		NullCheck(L_22);
		XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * L_23;
		L_23 = SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_inline(L_22, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_RuntimeMethod_var);
		XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  L_24 = V_0;
		NullCheck(L_23);
		bool L_25;
		L_25 = XRCameraSubsystem_TryGetLatestFrame_m5ED10032B81B83B7A68305B2D6FE8DEA21852C86(L_23, L_24, (XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 *)(&V_1), /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00f4;
		}
	}
	{
		// Debug.LogWarning("XRCamera's latest frame is not available now.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBC97C2FBB5C80543B8895530F2123C3D6F58ACCB, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00f4:
	{
		// if (frame.timestampNs == 0 || frame.FrameHandle() == IntPtr.Zero)
		int64_t L_26;
		L_26 = XRCameraFrame_get_timestampNs_m8F3730A23C9FF6A729F8D1939581D88716438DF7_inline((XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 *)(&V_1), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_010f;
		}
	}
	{
		XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8  L_27 = V_1;
		intptr_t L_28;
		L_28 = ARCoreHandleExtensions_FrameHandle_mEE0D4721BAD6E1765071AF518A1923193AD7E686(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_28, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_011a;
		}
	}

IL_010f:
	{
		// Debug.LogWarning("ARKit Plugin Frame is not ready.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral97737379DB2CF719EFFC9E4F6C55519041321878, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_011a:
	{
		// var status = ExternApi.ArSession_updateAndAcquireArFrame(
		//     _sessionHandle, frame.FrameHandle(), ref _frameHandle);
		intptr_t L_30 = __this->get__sessionHandle_4();
		XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8  L_31 = V_1;
		intptr_t L_32;
		L_32 = ARCoreHandleExtensions_FrameHandle_mEE0D4721BAD6E1765071AF518A1923193AD7E686(L_31, /*hidden argument*/NULL);
		intptr_t* L_33 = __this->get_address_of__frameHandle_5();
		int32_t L_34;
		L_34 = ExternApi_ArSession_updateAndAcquireArFrame_mEE91299E3FD30F0809216FAD65D4A1D64B79AA82((intptr_t)L_30, (intptr_t)L_32, (intptr_t*)L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		// if (status != ApiArStatus.Success)
		int32_t L_35 = V_2;
		if (!L_35)
		{
			goto IL_014f;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to update and acquire ARFrame with error: " +
		//     "{0}", status);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_36;
		int32_t L_38 = V_2;
		int32_t L_39 = L_38;
		RuntimeObject * L_40 = Box(ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_40);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral5B13EAD05D03F70A5E4B127342469A013FE345E8, L_37, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_014f:
	{
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ShouldUpdateARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSSupportManager_ShouldUpdateARCoreSession_m91A1242AF41A623528519CBF09710DE608343E3D (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, const RuntimeMethod* method)
{
	{
		// return _isEnabled &&
		//     ARCoreExtensions._instance.ARCoreExtensionsConfig.CloudAnchorMode !=
		//         CloudAnchorMode.Disabled;
		bool L_0 = __this->get__isEnabled_2();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_1;
		L_1 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_2 = L_1->get_ARCoreExtensionsConfig_7();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_CloudAnchorMode_4();
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
	}

IL_001b:
	{
		return (bool)0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager__ctor_mA38192B2262E8A764E0B698CFE0F073500DBAB42 (IOSSupportManager_t3FC832EF200784D41C5B23177996DA6AABBC0FDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _iosCloudServicesApiKey = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__iosCloudServicesApiKey_3(L_0);
		// private IntPtr _sessionHandle = IntPtr.Zero;
		__this->set__sessionHandle_4((intptr_t)(0));
		// private IntPtr _frameHandle = IntPtr.Zero;
		__this->set__frameHandle_5((intptr_t)(0));
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
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_m29A8D562D0ECAA668102CD2B69A100B027FABCBD (intptr_t ___sessionHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Create(sessionHandle, Pose.identity);
		intptr_t L_0 = ___sessionHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1;
		L_1 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = PoseApi_Create_m2B3CA77EA04486B2A2766B172AA9DB79A12E1CEE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return (intptr_t)L_2;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_m2B3CA77EA04486B2A2766B172AA9DB79A12E1CEE (intptr_t ___sessionHandle0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ApiPose apiPose = pose.ToApiPose();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___pose1;
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_1;
		L_1 = Translators_ToApiPose_mC3F2C63C5BE1FEA4C761D647BE4CAEDF0D59590F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr poseHandle = IntPtr.Zero;
		V_1 = (intptr_t)(0);
		// ExternApi.ArPose_create(
		//     sessionHandle,
		//     ref apiPose,
		//     ref poseHandle);
		intptr_t L_2 = ___sessionHandle0;
		ExternApi_ArPose_create_m8889779015A8F280194A68DDD8A0B2A9CDA464D3((intptr_t)L_2, (ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 *)(&V_0), (intptr_t*)(&V_1), /*hidden argument*/NULL);
		// return poseHandle;
		intptr_t L_3 = V_1;
		return (intptr_t)L_3;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseApi_Destroy_mD08CB4E95E2FC9BAE516652F53DD7657863A27FB (intptr_t ___poseHandle0, const RuntimeMethod* method)
{
	{
		// ExternApi.ArPose_destroy(poseHandle);
		intptr_t L_0 = ___poseHandle0;
		ExternApi_ArPose_destroy_m6352F2B910A488960EAFF402717D60EE2AE95A93((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.PoseApi::ExtractPoseValue(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  PoseApi_ExtractPoseValue_m44AAEE9CF4EF5AB17C249F28E41190289E2B6473 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ApiPose apiPose = Pose.identity.ToApiPose();
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0;
		L_0 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_1;
		L_1 = Translators_ToApiPose_mC3F2C63C5BE1FEA4C761D647BE4CAEDF0D59590F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// ExternApi.ArPose_getPoseRaw(
		//     sessionHandle,
		//     poseHandle,
		//     ref apiPose);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___poseHandle1;
		ExternApi_ArPose_getPoseRaw_m2AD6B9F7C99EEB2861DB4A048CB55E5FF8BE0421((intptr_t)L_2, (intptr_t)L_3, (ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 *)(&V_0), /*hidden argument*/NULL);
		// return apiPose;
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_4 = V_0;
		return L_4;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseApi__ctor_m47ED16089FF2C0591BB8DD3929A17B4E1E5D3274 (PoseApi_t795F24BC590476D63047FAB7408EBA9060A3D3FB * __this, const RuntimeMethod* method)
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
// System.IntPtr Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::Create(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecordingConfigApi_Create_m4259C814B919E44EC6FFC984D900C7C4720D96E7 (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * ___config1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	int32_t G_B4_0 = 0;
	intptr_t G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	intptr_t G_B4_2;
	memset((&G_B4_2), 0, sizeof(G_B4_2));
	{
		// IntPtr configHandle = IntPtr.Zero;
		V_0 = (intptr_t)(0);
		// ExternApi.ArRecordingConfig_create(sessionHandle, ref configHandle);
		intptr_t L_0 = ___sessionHandle0;
		ExternApi_ArRecordingConfig_create_m8271E8A0FBFF97F54A5076D41086BB83C8E8C0DC((intptr_t)L_0, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		// if (config != null)
		ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * L_1 = ___config1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// ExternApi.ArRecordingConfig_setMp4DatasetFilePath(
		//     sessionHandle,
		//     configHandle,
		//     config.Mp4DatasetFilepath);
		intptr_t L_3 = ___sessionHandle0;
		intptr_t L_4 = V_0;
		ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * L_5 = ___config1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_Mp4DatasetFilepath_4();
		ExternApi_ArRecordingConfig_setMp4DatasetFilePath_m4CFBE0BFDC5BC8B4EB738F5EB139EC033C5C5DCA((intptr_t)L_3, (intptr_t)L_4, L_6, /*hidden argument*/NULL);
		// ExternApi.ArRecordingConfig_setAutoStopOnPause(
		//     sessionHandle,
		//     configHandle,
		//     config.AutoStopOnPause ? 1 : 0);
		intptr_t L_7 = ___sessionHandle0;
		intptr_t L_8 = V_0;
		ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * L_9 = ___config1;
		NullCheck(L_9);
		bool L_10 = L_9->get_AutoStopOnPause_5();
		G_B2_0 = L_8;
		G_B2_1 = L_7;
		if (L_10)
		{
			G_B3_0 = L_8;
			G_B3_1 = L_7;
			goto IL_0031;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0032:
	{
		ExternApi_ArRecordingConfig_setAutoStopOnPause_mB481067152141CE6D4725069C21E3EFD26E270BE((intptr_t)G_B4_2, (intptr_t)G_B4_1, G_B4_0, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// return configHandle;
		intptr_t L_11 = V_0;
		return (intptr_t)L_11;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingConfigApi_Destroy_m0736C555861115C5A86499FCD5921D1347691C4C (intptr_t ___recordingConfigHandle0, const RuntimeMethod* method)
{
	{
		// ExternApi.ArRecordingConfig_destroy(recordingConfigHandle);
		intptr_t L_0 = ___recordingConfigHandle0;
		ExternApi_ArRecordingConfig_destroy_m5410D7B859A0B6EFC30A7A965D029A83DD5CCDCA((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingConfigApi__ctor_mB59BFC378264E802B280AC530D21E6A61CD0DF3F (RecordingConfigApi_t9B63FD00BF9FD846B79A1615636FE0F6CC19C2E9 * __this, const RuntimeMethod* method)
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
// System.Void Google.XR.ARCoreExtensions.Internal.RuntimeConfig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_OnEnable_m6514FCDCD63497364C51EDA3057E2C528C64C470 (RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.RuntimeConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig__ctor_m7FFAB5C0DC97E13B63071D171B0EC59EDA14ADD7 (RuntimeConfig_t70716F2BB0B45412CA53ED98A8969D2CBEDB9ED6 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::ReleaseFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_ReleaseFrame_m45347438E919B28585863D972DAE6F6E0BBAD1AA (intptr_t ___frameHandle0, const RuntimeMethod* method)
{
	{
		// ExternApi.ArFrame_release(frameHandle);
		intptr_t L_0 = ___frameHandle0;
		ExternApi_ArFrame_release_mA6DE77A60FD93A2B9938F6EE8180919AEB6C3E7C((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::UpdateSessionConfig(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_UpdateSessionConfig_m226949985FE143CF32887E4849A35D38435F2208 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ___config2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// ApiCloudAnchorMode cloudAnchorMode = (ApiCloudAnchorMode)config.CloudAnchorMode;
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_0 = ___config2;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_CloudAnchorMode_4();
		V_0 = L_1;
		// ExternApi.ArConfig_setCloudAnchorMode(
		//         sessionHandle, configHandle, cloudAnchorMode);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___configHandle1;
		int32_t L_4 = V_0;
		ExternApi_ArConfig_setCloudAnchorMode_mFA733ACD1FE59D14164A9D767F233A60E2147AFF((intptr_t)L_2, (intptr_t)L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_m04E380AC030A45717B41C4BBF725A1CC5F0B7FD8 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612DE3B7F41D577F1CE7C3E2F28F03667E42828E);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		V_0 = (intptr_t)(0);
		// ApiArStatus status = ExternApi.ArSession_hostAndAcquireNewCloudAnchor(
		//     sessionHandle,
		//     anchorHandle,
		//     ref cloudAnchorHandle);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		int32_t L_2;
		L_2 = ExternApi_ArSession_hostAndAcquireNewCloudAnchor_m12CC111D68BDA7C6A810828DC3882B2A97366CCF((intptr_t)L_0, (intptr_t)L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		// if (status != ApiArStatus.Success)
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to host a new Cloud Anchor, status '{0}'", status);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral612DE3B7F41D577F1CE7C3E2F28F03667E42828E, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// return cloudAnchorHandle;
		intptr_t L_9 = V_0;
		return (intptr_t)L_9;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_m98BBD2BDF0D507C28D24829C94DB5C25A6515C22 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD45BA04148BC6D381AD028D42EDD7E2B52F18D2);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		V_0 = (intptr_t)(0);
		// ApiArStatus status = ExternApi.ArSession_hostAndAcquireNewCloudAnchorWithTtl(
		//     sessionHandle, anchorHandle, ttlDays, ref cloudAnchorHandle);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		int32_t L_2 = ___ttlDays2;
		int32_t L_3;
		L_3 = ExternApi_ArSession_hostAndAcquireNewCloudAnchorWithTtl_mD1A1DF04F8946DCF4CCC6BD7CA14EB4C4B33F18E((intptr_t)L_0, (intptr_t)L_1, L_2, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		// if (status != ApiArStatus.Success)
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to host a Cloud Anchor with TTL {0}, status '{1}'",
		//     ttlDays, status);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		int32_t L_7 = ___ttlDays2;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_6;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteralCD45BA04148BC6D381AD028D42EDD7E2B52F18D2, L_10, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// return cloudAnchorHandle;
		intptr_t L_14 = V_0;
		return (intptr_t)L_14;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::SetAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_SetAuthToken_m52DC309F9474E0CEA38C663F06FC90A9693DF678 (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method)
{
	{
		// ExternApi.ArSession_setAuthToken(sessionHandle, authToken);
		intptr_t L_0 = ___sessionHandle0;
		String_t* L_1 = ___authToken1;
		ExternApi_ArSession_setAuthToken_m204BFAD1CCAD1B852FD74CCC4005A4317F62B6B9((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::ResolveCloudAnchor(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_ResolveCloudAnchor_m640CD312E616823645AD564ED953090517B6DE2C (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral144C9A7573B37A72B18C270A0B91AF059D1D9DF9);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		V_0 = (intptr_t)(0);
		// ApiArStatus status = ExternApi.ArSession_resolveAndAcquireNewCloudAnchor(
		//     sessionHandle,
		//     cloudAnchorId,
		//     ref cloudAnchorHandle);
		intptr_t L_0 = ___sessionHandle0;
		String_t* L_1 = ___cloudAnchorId1;
		int32_t L_2;
		L_2 = ExternApi_ArSession_resolveAndAcquireNewCloudAnchor_m62366B1AD56C7F101D189525FCEEF4FE5CFAF6F9((intptr_t)L_0, L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		// if (status != ApiArStatus.Success)
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to resolve a new Cloud Anchor, status '{0}'", status);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral144C9A7573B37A72B18C270A0B91AF059D1D9DF9, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// return cloudAnchorHandle;
		intptr_t L_9 = V_0;
		return (intptr_t)L_9;
	}
}
// Google.XR.ARCoreExtensions.FeatureMapQuality Google.XR.ARCoreExtensions.Internal.SessionApi::EstimateFeatureMapQualityForHosting(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_EstimateFeatureMapQualityForHosting_mD742C9695EDA16374884C97FC75F7E942734D3E0 (intptr_t ___sessionHandle0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C62DCAF58F81C88FBE505616A5F9788292BBED5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// IntPtr poseHandle = PoseApi.Create(sessionHandle, pose);
		intptr_t L_0 = ___sessionHandle0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = ___pose1;
		intptr_t L_2;
		L_2 = PoseApi_Create_m2B3CA77EA04486B2A2766B172AA9DB79A12E1CEE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		// int featureMapQuality = (int)FeatureMapQuality.Insufficient;
		V_1 = 0;
		// var status = ExternApi.ArSession_estimateFeatureMapQualityForHosting(
		//     sessionHandle, poseHandle, ref featureMapQuality);
		intptr_t L_3 = ___sessionHandle0;
		intptr_t L_4 = V_0;
		int32_t L_5;
		L_5 = ExternApi_ArSession_estimateFeatureMapQualityForHosting_mFBF70356256754C02EA4D747D93FE2268EFE2617((intptr_t)L_3, (intptr_t)L_4, (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		// PoseApi.Destroy(poseHandle);
		intptr_t L_6 = V_0;
		PoseApi_Destroy_mD08CB4E95E2FC9BAE516652F53DD7657863A27FB((intptr_t)L_6, /*hidden argument*/NULL);
		// if (status != ApiArStatus.Success)
		int32_t L_7 = V_2;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to estimate feature map quality with status '{0}'.",
		//     status);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral4C62DCAF58F81C88FBE505616A5F9788292BBED5, L_9, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// return (FeatureMapQuality)featureMapQuality;
		int32_t L_13 = V_1;
		return (int32_t)(L_13);
	}
}
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetRecordingStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetRecordingStatus_m594A21F091DA7BD682A52D853DDC6A3C65947E10 (intptr_t ___sessionHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ApiRecordingStatus apiStatus = ApiRecordingStatus.None;
		V_0 = 0;
		// ExternApi.ArSession_getRecordingStatus(sessionHandle, ref apiStatus);
		intptr_t L_0 = ___sessionHandle0;
		ExternApi_ArSession_getRecordingStatus_m66DFF38A8E65EF92C9757BFC69A32C45B8FEBB76((intptr_t)L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// return apiStatus.ToRecordingStatus();
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Translators_ToRecordingStatus_mFEBF662DC1440F5774CED824202BE1D63128DB7E(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StartRecording(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StartRecording_m727D5790897235DA511EF85E8B1F10C833BA8AFE (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * ___config1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr recordingConfigHandle = RecordingConfigApi.Create(sessionHandle, config);
		intptr_t L_0 = ___sessionHandle0;
		ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * L_1 = ___config1;
		intptr_t L_2;
		L_2 = RecordingConfigApi_Create_m4259C814B919E44EC6FFC984D900C7C4720D96E7((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		// ApiArStatus status = ExternApi.ArSession_startRecording(
		//     sessionHandle, recordingConfigHandle);
		intptr_t L_3 = ___sessionHandle0;
		intptr_t L_4 = V_0;
		int32_t L_5;
		L_5 = ExternApi_ArSession_startRecording_mAB603479EEAC23804A0757A1832398DDEDA608E8((intptr_t)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		// RecordingConfigApi.Destroy(recordingConfigHandle);
		intptr_t L_6 = V_0;
		RecordingConfigApi_Destroy_m0736C555861115C5A86499FCD5921D1347691C4C((intptr_t)L_6, /*hidden argument*/NULL);
		// return status.ToRecordingResult();
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Translators_ToRecordingResult_m65E8E6FAF7C1184CE6B30CDCFFF79F8C7C11CC6B(L_5, /*hidden argument*/NULL);
		return L_7;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StopRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StopRecording_m4294BE1D74147A07215FEBE18B3233D0629DF909 (intptr_t ___sessionHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApiArStatus status = ExternApi.ArSession_stopRecording(sessionHandle);
		intptr_t L_0 = ___sessionHandle0;
		int32_t L_1;
		L_1 = ExternApi_ArSession_stopRecording_m760F15A1E7F19801142EE127D9AE2C41F0490B06((intptr_t)L_0, /*hidden argument*/NULL);
		// return status.ToRecordingResult();
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Translators_ToRecordingResult_m65E8E6FAF7C1184CE6B30CDCFFF79F8C7C11CC6B(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetPlaybackStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetPlaybackStatus_m099BEEE0F3A15BE01778F9D3564C5C1D7A2D7C58 (intptr_t ___sessionHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ApiPlaybackStatus apiStatus = ApiPlaybackStatus.None;
		V_0 = 0;
		// ExternApi.ArSession_getPlaybackStatus(sessionHandle, ref apiStatus);
		intptr_t L_0 = ___sessionHandle0;
		ExternApi_ArSession_getPlaybackStatus_mD611157286944B34E1B4888B839394CAF39F9A35((intptr_t)L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// return apiStatus.ToPlaybackStatus();
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Translators_ToPlaybackStatus_m72ABF2E633F87AEC03AFE64158ED54DA7C8FE665(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDataset(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDataset_mD1FE6F3B3F3F9085B490044B81746679DAFAABEE (intptr_t ___sessionHandle0, String_t* ___datasetFilepath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApiArStatus status =
		//     ExternApi.ArSession_setPlaybackDataset(sessionHandle, datasetFilepath);
		intptr_t L_0 = ___sessionHandle0;
		String_t* L_1 = ___datasetFilepath1;
		int32_t L_2;
		L_2 = ExternApi_ArSession_setPlaybackDataset_mC954A3F4E938D0D0AE232BEEB2E4C8D15DFB71E6((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// return status.ToPlaybackResult();
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Translators_ToPlaybackResult_m63AEE99E1366C853AA3F5527EB7DC27D15D6F6E3(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi__ctor_m6014E893255D9A57F51D662AECD0F61FEEF29935 (SessionApi_t4EF1A6D105FCB7D45EE8738968F90FFA7353D489 * __this, const RuntimeMethod* method)
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
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.Internal.Translators::ToCloudAnchorState(Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToCloudAnchorState_m61854CB05522E55B03A6BCEDAF79B57DB1D09A44 (int32_t ___state0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___state0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)-10))))
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_004d;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0049;
			}
			case 7:
			{
				goto IL_0057;
			}
			case 8:
			{
				goto IL_0047;
			}
			case 9:
			{
				goto IL_0045;
			}
			case 10:
			{
				goto IL_003f;
			}
			case 11:
			{
				goto IL_0041;
			}
			case 12:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_003f:
	{
		// return CloudAnchorState.None;
		return (int32_t)(0);
	}

IL_0041:
	{
		// return CloudAnchorState.TaskInProgress;
		return (int32_t)(1);
	}

IL_0043:
	{
		// return CloudAnchorState.Success;
		return (int32_t)(2);
	}

IL_0045:
	{
		// return CloudAnchorState.ErrorInternal;
		return (int32_t)(3);
	}

IL_0047:
	{
		// return CloudAnchorState.ErrorNotAuthorized;
		return (int32_t)(4);
	}

IL_0049:
	{
		// return CloudAnchorState.ErrorResourceExhausted;
		return (int32_t)(5);
	}

IL_004b:
	{
		// return CloudAnchorState.ErrorHostingDatasetProcessingFailed;
		return (int32_t)(6);
	}

IL_004d:
	{
		// return CloudAnchorState.ErrorResolvingCloudIdNotFound;
		return (int32_t)(7);
	}

IL_004f:
	{
		// return CloudAnchorState.ErrorResolvingPackageTooOld;
		return (int32_t)(8);
	}

IL_0051:
	{
		// return CloudAnchorState.ErrorResolvingPackageTooNew;
		return (int32_t)(((int32_t)9));
	}

IL_0054:
	{
		// return CloudAnchorState.ErrorHostingServiceUnavailable;
		return (int32_t)(((int32_t)10));
	}

IL_0057:
	{
		// return CloudAnchorState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.Translators::ToTrackingState(Google.XR.ARCoreExtensions.Internal.ApiTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToTrackingState_m5534CCD8DF6A678B33775C3D16677C8FCB57BB11 (int32_t ___state0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___state0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___state0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))) > ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_000f;
	}

IL_000b:
	{
		// return TrackingState.Tracking;
		return (int32_t)(2);
	}

IL_000d:
	{
		// return TrackingState.None;
		return (int32_t)(0);
	}

IL_000f:
	{
		// return TrackingState.None;
		return (int32_t)(0);
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.Translators::ToApiPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  Translators_ToApiPose_mC3F2C63C5BE1FEA4C761D647BE4CAEDF0D59590F (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___unityPose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Matrix4x4 glWorld_T_glLocal =
		//     Matrix4x4.TRS(unityPose.position, unityPose.rotation, Vector3.one);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___unityPose0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2 = ___unityPose0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = L_2.get_rotation_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Matrix4x4 unityWorld_T_unityLocal =
		//     _unityWorldToGLWorld * glWorld_T_glLocal * _unityWorldToGLWorldInverse;
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ((Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var))->get__unityWorldToGLWorld_0();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8;
		L_8 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_6, L_7, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9 = ((Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var))->get__unityWorldToGLWorldInverse_1();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10;
		L_10 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// Vector3 position = unityWorld_T_unityLocal.GetColumn(3);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11;
		L_11 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), 3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// Quaternion rotation = Quaternion.LookRotation(unityWorld_T_unityLocal.GetColumn(2),
		//     unityWorld_T_unityLocal.GetColumn(1));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13;
		L_13 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), 2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_13, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15;
		L_15 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_15, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_14, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// apiPose.X = position.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_2;
		float L_19 = L_18.get_x_2();
		(&V_4)->set_X_4(L_19);
		// apiPose.Y = position.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_2;
		float L_21 = L_20.get_y_3();
		(&V_4)->set_Y_5(L_21);
		// apiPose.Z = position.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_2;
		float L_23 = L_22.get_z_4();
		(&V_4)->set_Z_6(L_23);
		// apiPose.Qx = rotation.x;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24 = V_3;
		float L_25 = L_24.get_x_0();
		(&V_4)->set_Qx_0(L_25);
		// apiPose.Qy = rotation.y;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26 = V_3;
		float L_27 = L_26.get_y_1();
		(&V_4)->set_Qy_1(L_27);
		// apiPose.Qz = rotation.z;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28 = V_3;
		float L_29 = L_28.get_z_2();
		(&V_4)->set_Qz_2(L_29);
		// apiPose.Qw = rotation.w;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30 = V_3;
		float L_31 = L_30.get_w_3();
		(&V_4)->set_Qw_3(L_31);
		// return apiPose;
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_32 = V_4;
		return L_32;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.Internal.Translators::ToUnityPose(Google.XR.ARCoreExtensions.Internal.ApiPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Translators_ToUnityPose_m752661BA4AC3C8A0CDA9023424E203BE4C0DBFE0 (ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  ___apiPose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Matrix4x4 glWorld_T_glLocal =
		//     Matrix4x4.TRS(
		//         new Vector3(apiPose.X, apiPose.Y, apiPose.Z),
		//         new Quaternion(apiPose.Qx, apiPose.Qy, apiPose.Qz, apiPose.Qw), Vector3.one);
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_0 = ___apiPose0;
		float L_1 = L_0.get_X_4();
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_2 = ___apiPose0;
		float L_3 = L_2.get_Y_5();
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_4 = ___apiPose0;
		float L_5 = L_4.get_Z_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_7 = ___apiPose0;
		float L_8 = L_7.get_Qx_0();
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_9 = ___apiPose0;
		float L_10 = L_9.get_Qy_1();
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_11 = ___apiPose0;
		float L_12 = L_11.get_Qz_2();
		ApiPose_tAF581C37F5096479763554653CDF56962FA421C3  L_13 = ___apiPose0;
		float L_14 = L_13.get_Qw_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_15), L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_17;
		L_17 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_6, L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// Matrix4x4 unityWorld_T_unityLocal =
		//     _unityWorldToGLWorld * glWorld_T_glLocal * _unityWorldToGLWorldInverse;
		IL2CPP_RUNTIME_CLASS_INIT(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_18 = ((Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var))->get__unityWorldToGLWorld_0();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20;
		L_20 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_18, L_19, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_21 = ((Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var))->get__unityWorldToGLWorldInverse_1();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_22;
		L_22 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_20, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		// Vector3 position = unityWorld_T_unityLocal.GetColumn(3);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23;
		L_23 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), 3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_23, /*hidden argument*/NULL);
		// Quaternion rotation = Quaternion.LookRotation(unityWorld_T_unityLocal.GetColumn(2),
		//     unityWorld_T_unityLocal.GetColumn(1));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_25;
		L_25 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), 2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_25, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_27;
		L_27 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_27, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_26, L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		// return new Pose(position, rotation);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30 = V_2;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((&L_31), L_24, L_30, /*hidden argument*/NULL);
		return L_31;
	}
}
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingStatus(Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingStatus_mFEBF662DC1440F5774CED824202BE1D63128DB7E (int32_t ___apiStatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiRecordingStatus_tA27B65127117F901AA792212714998D585BC4D02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A44329ED3FC05608086EDA5D34229E1DE304F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___apiStatus0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0014;
			}
			case 2:
			{
				goto IL_0016;
			}
		}
	}
	{
		goto IL_001a;
	}

IL_0014:
	{
		// return RecordingStatus.OK;
		return (int32_t)(1);
	}

IL_0016:
	{
		// return RecordingStatus.IOError;
		return (int32_t)(2);
	}

IL_0018:
	{
		// return RecordingStatus.None;
		return (int32_t)(0);
	}

IL_001a:
	{
		// Debug.LogErrorFormat("Unrecognized ApiRecordingStatus value {0}", apiStatus);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___apiStatus0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(ApiRecordingStatus_tA27B65127117F901AA792212714998D585BC4D02_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral86A44329ED3FC05608086EDA5D34229E1DE304F7, L_2, /*hidden argument*/NULL);
		// return RecordingStatus.None;
		return (int32_t)(0);
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingResult_m65E8E6FAF7C1184CE6B30CDCFFF79F8C7C11CC6B (int32_t ___apiArStatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245880CA750529601C4FF228E2CF3A8ECA5C242B);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___apiArStatus0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)-20))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___apiArStatus0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-23))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___apiArStatus0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-20))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0020;
	}

IL_0011:
	{
		int32_t L_3 = ___apiArStatus0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___apiArStatus0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// return RecordingResult.OK;
		return (int32_t)(0);
	}

IL_001a:
	{
		// return RecordingResult.ErrorIllegalState;
		return (int32_t)(3);
	}

IL_001c:
	{
		// return RecordingResult.ErrorInvalidArgument;
		return (int32_t)(1);
	}

IL_001e:
	{
		// return RecordingResult.ErrorRecordingFailed;
		return (int32_t)(2);
	}

IL_0020:
	{
		// Debug.LogErrorFormat(
		//     "Recording failed with unexpected status: {0}", apiArStatus);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		int32_t L_7 = ___apiArStatus0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral245880CA750529601C4FF228E2CF3A8ECA5C242B, L_6, /*hidden argument*/NULL);
		// return RecordingResult.ErrorRecordingFailed;
		return (int32_t)(2);
	}
}
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackStatus(Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackStatus_m72ABF2E633F87AEC03AFE64158ED54DA7C8FE665 (int32_t ___apiStatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiPlaybackStatus_t1DE9BCFBDE5A37FE348C3368F76B3E187F6031DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D245519C02FC2DAAFDBB89D9EE851632CD173B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___apiStatus0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_001c;
			}
			case 3:
			{
				goto IL_001e;
			}
		}
	}
	{
		goto IL_0020;
	}

IL_0018:
	{
		// return PlaybackStatus.None;
		return (int32_t)(0);
	}

IL_001a:
	{
		// return PlaybackStatus.OK;
		return (int32_t)(1);
	}

IL_001c:
	{
		// return PlaybackStatus.IOError;
		return (int32_t)(2);
	}

IL_001e:
	{
		// return PlaybackStatus.FinishedSuccess;
		return (int32_t)(3);
	}

IL_0020:
	{
		// Debug.LogErrorFormat("Unrecognized ApiPlaybackStatus value {0}", apiStatus);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___apiStatus0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(ApiPlaybackStatus_t1DE9BCFBDE5A37FE348C3368F76B3E187F6031DB_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral4D245519C02FC2DAAFDBB89D9EE851632CD173B6, L_2, /*hidden argument*/NULL);
		// return PlaybackStatus.None;
		return (int32_t)(0);
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackResult_m63AEE99E1366C853AA3F5527EB7DC27D15D6F6E3 (int32_t ___apiArStatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBF791BC4E29217DF89E7DCBF6C32D5FF5C440C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___apiArStatus0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)-24))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___apiArStatus0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-25))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___apiArStatus0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-24))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0021;
	}

IL_0011:
	{
		int32_t L_3 = ___apiArStatus0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_4 = ___apiArStatus0;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return PlaybackResult.OK;
		return (int32_t)(0);
	}

IL_001b:
	{
		// return PlaybackResult.ErrorSessionNotPaused;
		return (int32_t)(1);
	}

IL_001d:
	{
		// return PlaybackResult.ErrorSessionUnsupported;
		return (int32_t)(2);
	}

IL_001f:
	{
		// return PlaybackResult.ErrorPlaybackFailed;
		return (int32_t)(3);
	}

IL_0021:
	{
		// Debug.LogErrorFormat(
		//     "Playback dataset failed with unexpected status: {0}", apiArStatus);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		int32_t L_7 = ___apiArStatus0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(ApiArStatus_tA07A95A84FB132C9868B83E87B85C66FB24F44F1_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteralFBF791BC4E29217DF89E7DCBF6C32D5FF5C440C0, L_6, /*hidden argument*/NULL);
		// return PlaybackResult.ErrorPlaybackFailed;
		return (int32_t)(3);
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.Translators::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translators__cctor_mA13DA0472194806C46CFAEE6610BBB28A52A77A9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Matrix4x4 _unityWorldToGLWorld
		//     = Matrix4x4.Scale(new Vector3(1, 1, -1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED(L_0, /*hidden argument*/NULL);
		((Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var))->set__unityWorldToGLWorld_0(L_1);
		// private static readonly Matrix4x4 _unityWorldToGLWorldInverse
		//     = _unityWorldToGLWorld.inverse;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(((Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var))->get_address_of__unityWorldToGLWorld_0()), /*hidden argument*/NULL);
		((Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t5B8329C63E2E43ECCF4A71C798895A731B88D323_il2cpp_TypeInfo_var))->set__unityWorldToGLWorldInverse_1(L_2);
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
// System.Void Google.XR.ARCoreExtensions.VersionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__ctor_mA7E4861552BE76E76EA6F23576FCEE4DE44CBE16 (VersionInfo_t3BA36D0B034CC27309715908870EC67A3975F3C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.VersionInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__cctor_mFE4021823F048E36071DAFCE00A1DA0E80C09350 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionInfo_t3BA36D0B034CC27309715908870EC67A3975F3C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC78D2CA522842EDB61180393A4F9CD04B971BD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string Version = "1.23.0";
		((VersionInfo_t3BA36D0B034CC27309715908870EC67A3975F3C3_StaticFields*)il2cpp_codegen_static_fields_for(VersionInfo_t3BA36D0B034CC27309715908870EC67A3975F3C3_il2cpp_TypeInfo_var))->set_Version_0(_stringLiteralDC78D2CA522842EDB61180393A4F9CD04B971BD4);
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
// Google.XR.ARCoreExtensions.CameraConfigFacingDirection Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetFacingDirection(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfigurationExtensions_GetFacingDirection_mBCAC51B9EF75805FCEE37C481DCBAA5358615B4A (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___cameraConfig0, const RuntimeMethod* method)
{
	{
		// return CameraConfigApi.GetFacingDirection(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = XRCameraConfiguration_get_nativeConfigurationHandle_m6A895097020EA19B6BB2E1BAB768CC911D8C3B98_inline((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&___cameraConfig0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = CameraConfigApi_GetFacingDirection_m360186E651F93AE35B50C3E5E62AD3A88E953193((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetTextureDimensions(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  XRCameraConfigurationExtensions_GetTextureDimensions_m7A264525A7D8E29C5935A24771128B7072DD5565 (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___cameraConfig0, const RuntimeMethod* method)
{
	{
		// return CameraConfigApi.GetTextureDimensions(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = XRCameraConfiguration_get_nativeConfigurationHandle_m6A895097020EA19B6BB2E1BAB768CC911D8C3B98_inline((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&___cameraConfig0), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		L_3 = CameraConfigApi_GetTextureDimensions_m885B2829CB2393C2145A2D29A20DA0345393EB8A((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetFPSRange(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  XRCameraConfigurationExtensions_GetFPSRange_m5BCD7AF91FE3BFC16374A64F49D9F5ECC7ED3665 (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___cameraConfig0, const RuntimeMethod* method)
{
	{
		// return CameraConfigApi.GetFPSRange(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = XRCameraConfiguration_get_nativeConfigurationHandle_m6A895097020EA19B6BB2E1BAB768CC911D8C3B98_inline((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&___cameraConfig0), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		L_3 = CameraConfigApi_GetFPSRange_m56F64C086B36C38FA0DEFB7F537B65CCA2E43CE0((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetDepthSensorUsage(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfigurationExtensions_GetDepthSensorUsage_mDA75468D63DBB522FE65A63D688247DEE56F50EA (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___cameraConfig0, const RuntimeMethod* method)
{
	{
		// return CameraConfigApi.GetDepthSensorUsage(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = XRCameraConfiguration_get_nativeConfigurationHandle_m6A895097020EA19B6BB2E1BAB768CC911D8C3B98_inline((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&___cameraConfig0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = CameraConfigApi_GetDepthSensorUsage_m12042C3A94D45711117D03B77F69668E87215529((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetStereoCameraUsage(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfigurationExtensions_GetStereoCameraUsage_mDF1D862DDC7B6F7DB34E07213E25781A044E9F6F (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___cameraConfig0, const RuntimeMethod* method)
{
	{
		// return CameraConfigApi.GetStereoCameraUsage(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0;
		L_0 = ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mB9FF491E38BAEC9ED29782A5868F731E1FC01895(L_0, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = XRCameraConfiguration_get_nativeConfigurationHandle_m6A895097020EA19B6BB2E1BAB768CC911D8C3B98_inline((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&___cameraConfig0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = CameraConfigApi_GetStereoCameraUsage_m476DB84609F56182A980CD4957021879E0B06484((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChooseXRCameraConfigurationEvent__ctor_m4A36982610E6DD704BF10F9DAC059C066A1E8D14 (OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::Invoke(System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnChooseXRCameraConfigurationEvent_Invoke_mE248352DEAB1F5294458A2451AAF5A27ED12EC48 (OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * __this, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * ___supportedConfigurations0, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedConfigurations0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedConfigurations0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, ___supportedConfigurations0);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, ___supportedConfigurations0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___supportedConfigurations0);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___supportedConfigurations0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedConfigurations0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< int32_t, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * >::Invoke(targetMethod, targetThis, ___supportedConfigurations0);
					else
						result = GenericVirtFuncInvoker1< int32_t, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * >::Invoke(targetMethod, targetThis, ___supportedConfigurations0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___supportedConfigurations0);
					else
						result = VirtFuncInvoker1< int32_t, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___supportedConfigurations0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___supportedConfigurations0, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedConfigurations0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::BeginInvoke(System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChooseXRCameraConfigurationEvent_BeginInvoke_m38369A40C7603564996D6D7E46EF67E1A3F2FE8B (OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * __this, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * ___supportedConfigurations0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___supportedConfigurations0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnChooseXRCameraConfigurationEvent_EndInvoke_m06C09CB0B4E01781C6880A4F08E4F42A90957E33 (OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
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
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_acquireCloudAnchorId(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_acquireCloudAnchorId_m8B9406D9388FB0D3DE470626307A6E0405134F5C (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t* ___hostingHandle2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArAnchor_acquireCloudAnchorId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArAnchor_acquireCloudAnchorId)(___sessionHandle0, ___anchorHandle1, ___hostingHandle2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___anchorHandle1, ___hostingHandle2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getCloudAnchorState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getCloudAnchorState_m944D830679E1FC79C4F92B86DDD493C5D6566E16 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___cloudAnchorState2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArAnchor_getCloudAnchorState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArAnchor_getCloudAnchorState)(___sessionHandle0, ___anchorHandle1, ___cloudAnchorState2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___anchorHandle1, ___cloudAnchorState2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArString_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArString_release_m0C0EA0F90D17027035660D2422ACAB6DEE6F9016 (intptr_t ___stringHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArString_release", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArString_release)(___stringHandle0);
	#else
	il2cppPInvokeFunc(___stringHandle0);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getPose(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getPose_m6680026863B9AB9E446550FD1F2C95AA2ACAD90E (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t ___pose2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArAnchor_getPose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArAnchor_getPose)(___sessionHandle0, ___anchorHandle1, ___pose2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___anchorHandle1, ___pose2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getTrackingState_mA74887894319B27C3AA7856D5644004D66F66C45 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___trackingState2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArAnchor_getTrackingState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArAnchor_getTrackingState)(___sessionHandle0, ___anchorHandle1, ___trackingState2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___anchorHandle1, ___trackingState2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_detach_mFBB9B911C53A46743C7CD15EC7017632E65132BC (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArAnchor_detach", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArAnchor_detach)(___sessionHandle0, ___anchorHandle1);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___anchorHandle1);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_release_mBC7CF157CEBE778824644F0B0D1A4E4742F29C19 (intptr_t ___anchorHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArAnchor_release", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArAnchor_release)(___anchorHandle0);
	#else
	il2cppPInvokeFunc(___anchorHandle0);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getFacingDirection(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.CameraConfigFacingDirection&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getFacingDirection_m40740A7D1B301C383CC1C67BCA83106B06650D2A (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___facingDirection2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArCameraConfig_getFacingDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArCameraConfig_getFacingDirection)(___sessionHandle0, ___cameraConfigHandle1, ___facingDirection2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___cameraConfigHandle1, ___facingDirection2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getTextureDimensions(System.IntPtr,System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getTextureDimensions_mECFA3A7E1CD556C6FFE713C9D82B8AC733EF396D (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___width2, int32_t* ___height3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArCameraConfig_getTextureDimensions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArCameraConfig_getTextureDimensions)(___sessionHandle0, ___cameraConfigHandle1, ___width2, ___height3);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___cameraConfigHandle1, ___width2, ___height3);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getFpsRange(System.IntPtr,System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getFpsRange_m4565448BA3E3B94D013F399B308C2A7F895E1BEF (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___minFps2, int32_t* ___maxFps3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArCameraConfig_getFpsRange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArCameraConfig_getFpsRange)(___sessionHandle0, ___cameraConfigHandle1, ___minFps2, ___maxFps3);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___cameraConfigHandle1, ___minFps2, ___maxFps3);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getDepthSensorUsage(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getDepthSensorUsage_mDB8A759CA9A7CAAFF2CED74593F2230003F4E01D (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___depthSensorUsage2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArCameraConfig_getDepthSensorUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArCameraConfig_getDepthSensorUsage)(___sessionHandle0, ___cameraConfigHandle1, ___depthSensorUsage2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___cameraConfigHandle1, ___depthSensorUsage2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi::ArCameraConfig_getStereoCameraUsage(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfig_getStereoCameraUsage_mED7A2E219A2B4E18F0F89F94B6133BD711374503 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, int32_t* ___stereoCameraUsage2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArCameraConfig_getStereoCameraUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArCameraConfig_getStereoCameraUsage)(___sessionHandle0, ___cameraConfigHandle1, ___stereoCameraUsage2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___cameraConfigHandle1, ___stereoCameraUsage2);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi/ExternApi::ArCameraConfigFilter_setTargetFps(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfigFilter_setTargetFps_m4C783B9C2AD0ACCB58135CA3E3215CB83DA5540A (intptr_t ___sessionHandle0, intptr_t ___cameraConfigFilterHandle1, int32_t ___fpsFilter2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArCameraConfigFilter_setTargetFps", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArCameraConfigFilter_setTargetFps)(___sessionHandle0, ___cameraConfigFilterHandle1, ___fpsFilter2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___cameraConfigFilterHandle1, ___fpsFilter2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi/ExternApi::ArCameraConfigFilter_setDepthSensorUsage(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfigFilter_setDepthSensorUsage_m5A4423359D6CFB3B65E14D1D4DB594E35BF07D1F (intptr_t ___sessionHandle0, intptr_t ___cameraConfigFilterHandle1, int32_t ___depthFilter2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArCameraConfigFilter_setDepthSensorUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArCameraConfigFilter_setDepthSensorUsage)(___sessionHandle0, ___cameraConfigFilterHandle1, ___depthFilter2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___cameraConfigFilterHandle1, ___depthFilter2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi/ExternApi::ArCameraConfigFilter_setStereoCameraUsage(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArCameraConfigFilter_setStereoCameraUsage_m20D6E293B13297C4D52B4DA3A6BB236D7986C3DD (intptr_t ___sessionHandle0, intptr_t ___cameraConfigFilterHandle1, int32_t ___stereoFilter2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArCameraConfigFilter_setStereoCameraUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArCameraConfigFilter_setStereoCameraUsage)(___sessionHandle0, ___cameraConfigFilterHandle1, ___stereoFilter2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___cameraConfigFilterHandle1, ___stereoFilter2);
	#endif

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
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_create(System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_create_m85E751BF65099288C9AE0B74882A953831053B08 (String_t* ___apiKey0, String_t* ___bundleIdentifier1, intptr_t* ___sessionHandle2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___apiKey0' to native representation
	char* ____apiKey0_marshaled = NULL;
	____apiKey0_marshaled = il2cpp_codegen_marshal_string(___apiKey0);

	// Marshaling of parameter '___bundleIdentifier1' to native representation
	char* ____bundleIdentifier1_marshaled = NULL;
	____bundleIdentifier1_marshaled = il2cpp_codegen_marshal_string(___bundleIdentifier1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_create)(____apiKey0_marshaled, ____bundleIdentifier1_marshaled, ___sessionHandle2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____apiKey0_marshaled, ____bundleIdentifier1_marshaled, ___sessionHandle2);
	#endif

	// Marshaling cleanup of parameter '___apiKey0' native representation
	il2cpp_codegen_marshal_free(____apiKey0_marshaled);
	____apiKey0_marshaled = NULL;

	// Marshaling cleanup of parameter '___bundleIdentifier1' native representation
	il2cpp_codegen_marshal_free(____bundleIdentifier1_marshaled);
	____bundleIdentifier1_marshaled = NULL;

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_destroy_m9E0723D2A17D496FCDEFFA1772476721689C576A (intptr_t ___session0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArSession_destroy)(___session0);
	#else
	il2cppPInvokeFunc(___session0);
	#endif

}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_updateAndAcquireArFrame(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_updateAndAcquireArFrame_mEE91299E3FD30F0809216FAD65D4A1D64B79AA82 (intptr_t ___sessionHandle0, intptr_t ___arkitFrameHandle1, intptr_t* ___arFrame2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_updateAndAcquireArFrame", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_updateAndAcquireArFrame)(___sessionHandle0, ___arkitFrameHandle1, ___arFrame2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0, ___arkitFrameHandle1, ___arFrame2);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_create(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_create_m8889779015A8F280194A68DDD8A0B2A9CDA464D3 (intptr_t ___sessionHandle0, ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 * ___apiPose1, intptr_t* ___poseHandle2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 *, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 *) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArPose_create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArPose_create)(___sessionHandle0, ___apiPose1, ___poseHandle2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___apiPose1, ___poseHandle2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_destroy_m6352F2B910A488960EAFF402717D60EE2AE95A93 (intptr_t ___poseHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArPose_destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArPose_destroy)(___poseHandle0);
	#else
	il2cppPInvokeFunc(___poseHandle0);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_getPoseRaw(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_getPoseRaw_m2AD6B9F7C99EEB2861DB4A048CB55E5FF8BE0421 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 * ___apiPose2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(ApiPose_tAF581C37F5096479763554653CDF56962FA421C3 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArPose_getPoseRaw", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArPose_getPoseRaw)(___sessionHandle0, ___poseHandle1, ___apiPose2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___poseHandle1, ___apiPose2);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi::ArRecordingConfig_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArRecordingConfig_create_m8271E8A0FBFF97F54A5076D41086BB83C8E8C0DC (intptr_t ___session0, intptr_t* ___configHandle1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArRecordingConfig_create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArRecordingConfig_create)(___session0, ___configHandle1);
	#else
	il2cppPInvokeFunc(___session0, ___configHandle1);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi::ArRecordingConfig_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArRecordingConfig_destroy_m5410D7B859A0B6EFC30A7A965D029A83DD5CCDCA (intptr_t ___configHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArRecordingConfig_destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArRecordingConfig_destroy)(___configHandle0);
	#else
	il2cppPInvokeFunc(___configHandle0);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi::ArRecordingConfig_setMp4DatasetFilePath(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArRecordingConfig_setMp4DatasetFilePath_m4CFBE0BFDC5BC8B4EB738F5EB139EC033C5C5DCA (intptr_t ___session0, intptr_t ___configHandle1, String_t* ___datasetPath2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArRecordingConfig_setMp4DatasetFilePath", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___datasetPath2' to native representation
	char* ____datasetPath2_marshaled = NULL;
	____datasetPath2_marshaled = il2cpp_codegen_marshal_string(___datasetPath2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArRecordingConfig_setMp4DatasetFilePath)(___session0, ___configHandle1, ____datasetPath2_marshaled);
	#else
	il2cppPInvokeFunc(___session0, ___configHandle1, ____datasetPath2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___datasetPath2' native representation
	il2cpp_codegen_marshal_free(____datasetPath2_marshaled);
	____datasetPath2_marshaled = NULL;

}
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi::ArRecordingConfig_setAutoStopOnPause(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArRecordingConfig_setAutoStopOnPause_mB481067152141CE6D4725069C21E3EFD26E270BE (intptr_t ___session0, intptr_t ___configHandle1, int32_t ___configEnabled2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArRecordingConfig_setAutoStopOnPause", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArRecordingConfig_setAutoStopOnPause)(___session0, ___configHandle1, ___configEnabled2);
	#else
	il2cppPInvokeFunc(___session0, ___configHandle1, ___configEnabled2);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArFrame_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArFrame_release_mA6DE77A60FD93A2B9938F6EE8180919AEB6C3E7C (intptr_t ___frameHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArFrame_release", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArFrame_release)(___frameHandle0);
	#else
	il2cppPInvokeFunc(___frameHandle0);
	#endif

}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchor(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_hostAndAcquireNewCloudAnchor_m12CC111D68BDA7C6A810828DC3882B2A97366CCF (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t* ___cloudAnchorHandle2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_hostAndAcquireNewCloudAnchor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_hostAndAcquireNewCloudAnchor)(___sessionHandle0, ___anchorHandle1, ___cloudAnchorHandle2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0, ___anchorHandle1, ___cloudAnchorHandle2);
	#endif

	return returnValue;
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_resolveAndAcquireNewCloudAnchor(System.IntPtr,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_resolveAndAcquireNewCloudAnchor_m62366B1AD56C7F101D189525FCEEF4FE5CFAF6F9 (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, intptr_t* ___cloudAnchorHandle2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_resolveAndAcquireNewCloudAnchor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___cloudAnchorId1' to native representation
	char* ____cloudAnchorId1_marshaled = NULL;
	____cloudAnchorId1_marshaled = il2cpp_codegen_marshal_string(___cloudAnchorId1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_resolveAndAcquireNewCloudAnchor)(___sessionHandle0, ____cloudAnchorId1_marshaled, ___cloudAnchorHandle2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0, ____cloudAnchorId1_marshaled, ___cloudAnchorHandle2);
	#endif

	// Marshaling cleanup of parameter '___cloudAnchorId1' native representation
	il2cpp_codegen_marshal_free(____cloudAnchorId1_marshaled);
	____cloudAnchorId1_marshaled = NULL;

	return returnValue;
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchorWithTtl(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_hostAndAcquireNewCloudAnchorWithTtl_mD1A1DF04F8946DCF4CCC6BD7CA14EB4C4B33F18E (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, intptr_t* ___cloudAnchorHandle3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_hostAndAcquireNewCloudAnchorWithTtl", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_hostAndAcquireNewCloudAnchorWithTtl)(___sessionHandle0, ___anchorHandle1, ___ttlDays2, ___cloudAnchorHandle3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0, ___anchorHandle1, ___ttlDays2, ___cloudAnchorHandle3);
	#endif

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_setAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_setAuthToken_m204BFAD1CCAD1B852FD74CCC4005A4317F62B6B9 (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_setAuthToken", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___authToken1' to native representation
	char* ____authToken1_marshaled = NULL;
	____authToken1_marshaled = il2cpp_codegen_marshal_string(___authToken1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArSession_setAuthToken)(___sessionHandle0, ____authToken1_marshaled);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ____authToken1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___authToken1' native representation
	il2cpp_codegen_marshal_free(____authToken1_marshaled);
	____authToken1_marshaled = NULL;

}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_estimateFeatureMapQualityForHosting(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_estimateFeatureMapQualityForHosting_mFBF70356256754C02EA4D747D93FE2268EFE2617 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, int32_t* ___featureMapQuality2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_estimateFeatureMapQualityForHosting", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_estimateFeatureMapQualityForHosting)(___sessionHandle0, ___poseHandle1, ___featureMapQuality2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0, ___poseHandle1, ___featureMapQuality2);
	#endif

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_getConfig(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_getConfig_m614FEA35A342A2D35A392393D6FCE1FE9A8994DC (intptr_t ___sessionHandle0, intptr_t ___configHandle1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_getConfig", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArSession_getConfig)(___sessionHandle0, ___configHandle1);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___configHandle1);
	#endif

}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_configure(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_configure_mE28A6B51DFD790DD019782BC145A9ED5C371C8E8 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_configure", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_configure)(___sessionHandle0, ___configHandle1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0, ___configHandle1);
	#endif

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArConfig_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_create_m80507786B9E6669463BCDA7180EDAB33FB519D62 (intptr_t ___sessionHandle0, intptr_t* ___configHandle1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArConfig_create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArConfig_create)(___sessionHandle0, ___configHandle1);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___configHandle1);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArConfig_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_destroy_mC865ADAE53FAA1800AABC2BAA97AC783A2FC7FAC (intptr_t ___configHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArConfig_destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArConfig_destroy)(___configHandle0);
	#else
	il2cppPInvokeFunc(___configHandle0);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArConfig_setCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_setCloudAnchorMode_mFA733ACD1FE59D14164A9D767F233A60E2147AFF (intptr_t ___sessionHandle0, intptr_t ___configHandle1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArConfig_setCloudAnchorMode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArConfig_setCloudAnchorMode)(___sessionHandle0, ___configHandle1, ___mode2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___configHandle1, ___mode2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArConfig_getCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_getCloudAnchorMode_m21B8B8F3F0FCC369E6F7C7A152FB995BE6CF8680 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, int32_t* ___mode2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArConfig_getCloudAnchorMode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArConfig_getCloudAnchorMode)(___sessionHandle0, ___configHandle1, ___mode2);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___configHandle1, ___mode2);
	#endif

}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_getRecordingStatus(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_getRecordingStatus_m66DFF38A8E65EF92C9757BFC69A32C45B8FEBB76 (intptr_t ___sessionHandle0, int32_t* ___recordingStatus1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_getRecordingStatus", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArSession_getRecordingStatus)(___sessionHandle0, ___recordingStatus1);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___recordingStatus1);
	#endif

}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_startRecording(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_startRecording_mAB603479EEAC23804A0757A1832398DDEDA608E8 (intptr_t ___sessionHandle0, intptr_t ___recordingConfigHandle1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_startRecording", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_startRecording)(___sessionHandle0, ___recordingConfigHandle1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0, ___recordingConfigHandle1);
	#endif

	return returnValue;
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_stopRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_stopRecording_m760F15A1E7F19801142EE127D9AE2C41F0490B06 (intptr_t ___sessionHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_stopRecording", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_stopRecording)(___sessionHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0);
	#endif

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_getPlaybackStatus(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_getPlaybackStatus_mD611157286944B34E1B4888B839394CAF39F9A35 (intptr_t ___sessionHandle0, int32_t* ___playbackStatus1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_getPlaybackStatus", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(ArSession_getPlaybackStatus)(___sessionHandle0, ___playbackStatus1);
	#else
	il2cppPInvokeFunc(___sessionHandle0, ___playbackStatus1);
	#endif

}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_setPlaybackDataset(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_setPlaybackDataset_mC954A3F4E938D0D0AE232BEEB2E4C8D15DFB71E6 (intptr_t ___sessionHandle0, String_t* ___datasetFilepath1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("arcore_sdk_c"), "ArSession_setPlaybackDataset", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___datasetFilepath1' to native representation
	char* ____datasetFilepath1_marshaled = NULL;
	____datasetFilepath1_marshaled = il2cpp_codegen_marshal_string(___datasetFilepath1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_arcore_sdk_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_setPlaybackDataset)(___sessionHandle0, ____datasetFilepath1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0, ____datasetFilepath1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___datasetFilepath1' native representation
	il2cpp_codegen_marshal_free(____datasetFilepath1_marshaled);
	____datasetFilepath1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ARCoreExtensions_get__instance_m26E1F6A21BE60727ACA07884C3CA8680B1DBE43E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0 = ((ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_il2cpp_TypeInfo_var))->get_U3C_instanceU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCloudAnchor_SetAnchorHandle_m5E71569C1552876FF71C72EAA07044F88AEED9FE_inline (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, intptr_t ___anchorHandle0, const RuntimeMethod* method)
{
	{
		// _anchorHandle = anchorHandle;
		intptr_t L_0 = ___anchorHandle0;
		__this->set__anchorHandle_4((intptr_t)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ARSessionOrigin_get_trackablesParent_mC232717A3F6993690E5A68E1CD17B25F7843C634_inline (ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CtrackablesParentU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARCloudAnchor_get_pose_mEF9E7736F5E93AE5D49364E48E33BA540280DDEC_inline (ARCloudAnchor_tF5968FA4C7AFBA16ECC7F6E5AC908C2790B874E2 * __this, const RuntimeMethod* method)
{
	{
		// return _pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get__pose_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCoreExtensions_set__instance_mEF5EAA4BB76AE0F269FFCCCF0448510B98D358BC_inline (ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_0 = ___value0;
		((ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_il2cpp_TypeInfo_var))->set_U3C_instanceU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  ARCoreBeforeSetConfigurationEventArgs_get_arSession_m36AE454B9E5FC5646838F4D26A2786F8E7B96480_inline (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method)
{
	{
		// public ArSession arSession => m_Session;
		ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  L_0 = __this->get_m_Session_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ArSession_AsIntPtr_mA85CA36031A4AAEA74179C55D1B3943520AAC8AD_inline (ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->get_m_Self_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E  ARCoreBeforeSetConfigurationEventArgs_get_arConfig_mB9BE3D5C455376079B9F5FDB6602E67E94E53FFA_inline (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method)
{
	{
		// public ArConfig arConfig => m_Config;
		ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E  L_0 = __this->get_m_Config_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ArConfig_AsIntPtr_mA9B51F77E82E69775613503E710A4369FC86BB43_inline (ArConfig_t2E38AE690FF4FF95EE8FDF4E03AD0C640484B40E * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->get_m_Self_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  ARCoreBeforeGetCameraConfigurationEventArgs_get_session_mF181F614D197960A751E280BCECDE97EBD202751_inline (ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9 * __this, const RuntimeMethod* method)
{
	{
		// public ArSession session { get; internal set; }
		ArSession_tC5D0D839684E5D0A103AC9B421B51BE4E661668E  L_0 = __this->get_U3CsessionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18  ARCoreBeforeGetCameraConfigurationEventArgs_get_filter_m4341D6D66C80D611C94BEF7E90B353D86F8371A6_inline (ARCoreBeforeGetCameraConfigurationEventArgs_t78846470558CC1AA065FD67F0207BCBC479139C9 * __this, const RuntimeMethod* method)
{
	{
		// public ArCameraConfigFilter filter { get; internal set; }
		ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18  L_0 = __this->get_U3CfilterU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ArCameraConfigFilter_AsIntPtr_mB18602D2742CAF98CE0F8CBAB1347331AF3AD197_inline (ArCameraConfigFilter_t221B7F0FF74822E577F6C1577DCD66F0F1123F18 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->get_m_Self_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraFrame_get_nativePtr_m6A77F2825FECB5D6D8620AC85F11588E097A4CE8_inline (XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_7();
		return (intptr_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zNear_mE207AB998D78E35497B1E941A20C7864D454EE45_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ZNear = value;
		float L_0 = ___value0;
		__this->set_m_ZNear_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zFar_m4ABC4E0271EE81FEA88B1608B19ED3CFDA8E523B_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ZFar = value;
		float L_0 = ___value0;
		__this->set_m_ZFar_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenWidth_m4E9ABE5FEE32FB446FDF6EC5B00961ACC66B48FB_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ScreenWidth = value;
		float L_0 = ___value0;
		__this->set_m_ScreenWidth_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenHeight_m31C5E67C7403556AFF8B72CC4BB09EA3C3AA05A3_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ScreenHeight = value;
		float L_0 = ___value0;
		__this->set_m_ScreenHeight_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenOrientation_mCF2AD6E975E790E5BE14E2A1EB71A73E8AA7E7D9_inline (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ScreenOrientation = value;
		int32_t L_0 = ___value0;
		__this->set_m_ScreenOrientation_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t XRCameraFrame_get_timestampNs_m8F3730A23C9FF6A729F8D1939581D88716438DF7_inline (XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * __this, const RuntimeMethod* method)
{
	{
		// public long timestampNs => m_TimestampNs;
		int64_t L_0 = __this->get_m_TimestampNs_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraConfiguration_get_nativeConfigurationHandle_m6A895097020EA19B6BB2E1BAB768CC911D8C3B98_inline (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativeConfigurationHandle => m_NativeConfigurationHandle;
		intptr_t L_0 = __this->get_m_NativeConfigurationHandle_2();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
