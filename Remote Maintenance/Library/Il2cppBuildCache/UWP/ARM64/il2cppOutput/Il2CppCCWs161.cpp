#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.StyleSheet>
struct HashSet_1_tAF7309D157084CB902A6F7684E6E474986365867;
// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D;
// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualTreeAsset>
struct HashSet_1_tAEC7BD76329F43CDD4FD40F4B80587C9CF36CBF9;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_tE791D3D97E67566E2D6F93E0626CB84C78DB7E9E;
// System.Collections.Generic.IComparer`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry>
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ITreeViewItem>
struct IEnumerable_1_t1DCD7370BCB062DA7B74DB398BCCCB035669E369;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ITreeViewItem>
struct IEnumerator_1_t3094D477B964E20DA7A2FBDCE746832ECCCC56CF;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task>
struct IList_1_t2661A4704D90A610BF1C0B3679D057E5668D322C;
// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message>
struct IObserver_1_t5F31FFBD7270B494632B49E2FC5E15AF8BB73672;
// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct List_1_tD07FBB164686BD509B905747DDAC5576DEB17B22;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyName>
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementAsset>
struct List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry>
struct List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Collections.Generic.Stack`1<System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ITreeViewItem>>
struct Stack_1_tD4465E97FAAAFD450F766F80007EAD484D692451;
// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t2F90AEE934AEF0431025E34B20DC7CA3DA67A993;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType[]
struct SystemTypeU5BU5D_t5238C6007AFAAB23C26ED710FC6D68B5A8E3F209;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.InputSystem.EnhancedTouch.Finger
struct Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Windows.Storage.Streams.IInputStream
struct IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver
struct IMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D;
// UnityEngine.UIElements.ITreeViewItem
struct ITreeViewItem_t0C5908872EA2842688BFFB2055D5096EC1EA9EFC;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase
struct MixedRealityKeyboardBase_tCB97E52BC1D689D6C43D65E481DCBEFF1D3BB357;
// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview
struct MixedRealityKeyboardPreview_tDB66C48C6A8A7C22CCDE4FCF7A1DA18E9D48C115;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer
struct MixedRealityLineRenderer_t94832C14D6041FA8F5F70632393BEA28A7BC18DE;
// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent
struct MixedRealitySceneContent_tE61FF720EAE50FC545DB31D1006E7D87870BEE65;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t82C07F4A6F0086A3FBC2D85933EEB03D262CDA21;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile
struct MixedRealitySceneSystemProfile_t3C841F95FE97BC5E0245ACAAE7164BB8B5C31B1D;
// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget
struct MoveToTarget_tD30BA5EDC526F3952A5FC36D123C285F4CE15CE5;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.OpenXR.OpenXRRestarter
struct OpenXRRestarter_t59BB3482FA6ED413E66F91ABE39820D83AAE8AA1;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2
struct PressableButtonHoloLens2_t013EE59396294BBEE74D164E8A20A5B351614E97;
// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight
struct ProximityLight_t724C24FB42CCA7FA353A22CBCCB86669AF161969;
// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler
struct PulseShaderHandler_tF5505E913AD9630D8B9AB341E47736ECF07887A7;
// UnityEngine.InputSystem.RemoteInputPlayerConnection
struct RemoteInputPlayerConnection_t30D11D576C269098E4EBC0E07291C767130FC3DF;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint
struct RotateAroundPoint_tC88ED73897D8A9E80AB34633465750DFB7D5236F;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection
struct ScrollingObjectCollection_t821C999BC5E6630449E19F21187581CC70C9D847;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.UIElements.VisualElementAsset
struct VisualElementAsset_t558B207D551F8C727D1CD0F443F7211D095C3FA9;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898;
// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
struct IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71;
struct IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95;
struct IIterator_1_t1AA7E7CB52E112209BFF10217944E684E4EB5F6C;
struct IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648;
struct IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284;
struct IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m78372DBE4F177F35DC3DF46F37BBEB79AF797324(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m78D1DF310E63719722F86C83A512DCF35728D4F2(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m71DB6DDEDCC8DB4230CCAF913BA6ECAAA9ABF6D4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mBCA3BB43C118936A44B20F8A8F83F1CAB59E7DB4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mD7DFCC1D0421F836CB3B4499AAEB89D5DAA229F5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m9F67F4B3AA2396D2CDE6EE93B3D3B1B1F2D99685(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mA7040C532ABD06DCBC2B397B09EB32EC4A9AF5EB(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m79A0FBC05E913306F00FE582D6AEF52CB4F6F0D6(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m9D9F6AE5C27EC4CEB0A3CC17C83048A39994C5F0(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m259594E576D8DE8D92DBA9A4EC9321BFA9006BCD(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m040A37BF97ECAB4FD4C51481285B1BA9F4DAD352(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF5D7D584EB42725EB00B767AB45D3C01D86179E6(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8DC9B66CF8C9CACC2DB3433EE8B997F9C73BF2BF(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Type>
struct NOVTABLE IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D(IIterator_1_t1AA7E7CB52E112209BFF10217944E684E4EB5F6C** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_mCDCAF874CA48FAD12C3C50CC2F76FD425D82C060(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mFDEBAF5BE18872689664196233CDE3187ADD562B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m027C5E15C55C227EC7C2C18B4A4B63AAE8B8FC43(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m29F4D8681FB7E60088E7A665F319EADAF14696BA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_mF541E936AB539C97B96018952B00DAF943C8E658(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m5B59AEE63C2736D9CCBB8A4987C5316A34CD343F(uint64_t ___position0, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_mE15EFF78D7AB63C66957863FE3D54FA33D66CCB8(uint64_t ___position0, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m3BBAFE5846C2C4581E7E509DC125E3AB508D591A(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m1DDCF62775B861D7FDD3EF761EE05251C13FA512(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mFD31B358478E07E6281E4D329FAC8B6DABE36191(IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m599EC4BE14290138A7DCE9D82AF647993B4049E1(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m76930DBC1CC5718B50A9CCFFBB604AF6137C223B(bool* comReturnValue) = 0;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;
};

struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_StaticFields
{
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3ClastValueU3Ek__BackingField_2;
};

// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tF787FECBA03E587696EC89D5AF8CB9EA24701796  : public RuntimeObject
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_lock
	RuntimeObject* ___m_lock_0;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_eventObj
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_eventObj_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_combinedState
	int32_t ___m_combinedState_2;
};

struct ManualResetEventSlim_tF787FECBA03E587696EC89D5AF8CB9EA24701796_StaticFields
{
	// System.Action`1<System.Object> System.Threading.ManualResetEventSlim::s_cancellationTokenCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_cancellationTokenCallback_3;
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

// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737  : public RuntimeObject
{
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;
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
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35
struct U3CUpdateStateU3Ed__35_tB4C7CDF051BFA4A1F8A954D31C1F1F877FB36E4E  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>4__this
	MixedRealityKeyboardBase_tCB97E52BC1D689D6C43D65E481DCBEFF1D3BB357* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_tD0170F22C949B79215E475C620EF5FD27828BEC8  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>4__this
	MixedRealityKeyboardPreview_tDB66C48C6A8A7C22CCDE4FCF7A1DA18E9D48C115* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37
struct U3CFadeLineU3Ed__37_t891EE11AFFAEC00F28E707CD91F3B7E90E2DFE39  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>4__this
	MixedRealityLineRenderer_t94832C14D6041FA8F5F70632393BEA28A7BC18DE* ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::animationLength
	float ___animationLength_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::targetAlphaPercentage
	float ___targetAlphaPercentage_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<currentTime>5__2
	float ___U3CcurrentTimeU3E5__2_5;
	// UnityEngine.GradientAlphaKey[] Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<fadedKeys>5__3
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* ___U3CfadedKeysU3E5__3_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<startAlpha>5__4
	float ___U3CstartAlphaU3E5__4_7;
};

// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9
struct U3CInitializeSceneContentWithDelayU3Ed__9_tCD0E00A91C1F2E9CCECED10EC672041295C74964  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9::<>4__this
	MixedRealitySceneContent_tE61FF720EAE50FC545DB31D1006E7D87870BEE65* ___U3CU3E4__this_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t8209FC7F44B559404BDA6D849C4F9879772CE2FE  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>2__current
	Type_t* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>4__this
	MixedRealitySceneSystemProfile_t3C841F95FE97BC5E0245ACAAE7164BB8B5C31B1D* ___U3CU3E4__this_3;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>7__wrap1
	SystemTypeU5BU5D_t5238C6007AFAAB23C26ED710FC6D68B5A8E3F209* ___U3CU3E7__wrap1_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_5;
};

// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_t846FDE5CBE6A4780B4063A26FA4F71E9092BCBDC  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>4__this
	MoveToTarget_tD30BA5EDC526F3952A5FC36D123C285F4CE15CE5* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_t45BC621E3A7FE19D7F3B7331D51DAA20F30A82F0  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>2__current
	String_t* ___U3CU3E2__current_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::includeChildren
	bool ___includeChildren_3;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<objBuffer>5__2
	StringBuilder_t* ___U3CobjBufferU3E5__2_4;
	// System.Collections.Generic.Stack`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<processStack>5__3
	Stack_1_t2F90AEE934AEF0431025E34B20DC7CA3DA67A993* ___U3CprocessStackU3E5__3_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<startVertexIndex>5__4
	int32_t ___U3CstartVertexIndexU3E5__4_6;
};

// UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24
struct U3CPauseAndRestartCoroutineU3Ed__24_t9C4AD80F5C5F8EE2C597D9FE2E98E9EC36D7871D  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24::pauseTimeInSeconds
	float ___pauseTimeInSeconds_2;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24::<>4__this
	OpenXRRestarter_t59BB3482FA6ED413E66F91ABE39820D83AAE8AA1* ___U3CU3E4__this_3;
};

// UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25
struct U3CRestartCoroutineU3Ed__25_tC313EFA7CEC17EDB79C55EED0AEE082F681B423E  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25::<>4__this
	OpenXRRestarter_t59BB3482FA6ED413E66F91ABE39820D83AAE8AA1* ___U3CU3E4__this_2;
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25::shouldRestart
	bool ___shouldRestart_3;
};

// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23
struct U3CAnimateHighlightPlateU3Ed__23_t4299D44FFFF841A98A3EB443FA2AEB5ED4556CBC  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>4__this
	PressableButtonHoloLens2_t013EE59396294BBEE74D164E8A20A5B351614E97* ___U3CU3E4__this_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::fadeIn
	bool ___fadeIn_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::time
	float ___time_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<blendTime>5__2
	float ___U3CblendTimeU3E5__2_5;
};

// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_tEFF3F4AC8469BA217FDFAACB14E9A8FEB467B122  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__23
struct U3CPulseRoutineU3Ed__23_t651CD24ED14E393164AC88B05B38E0CEC472F666  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__23::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__23::<>4__this
	ProximityLight_t724C24FB42CCA7FA353A22CBCCB86669AF161969* ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__23::pulseDuration
	float ___pulseDuration_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__23::fadeBegin
	float ___fadeBegin_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__23::fadeSpeed
	float ___fadeSpeed_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__23::<pulseTimer>5__2
	float ___U3CpulseTimerU3E5__2_6;
};

// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40
struct U3CCoAnimatePulseU3Ed__40_t215C61998479AC866628DF73036DF6F37A2BA3BC  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<>4__this
	PulseShaderHandler_tF5505E913AD9630D8B9AB341E47736ECF07887A7* ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<t>5__2
	float ___U3CtU3E5__2_3;
};

// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41
struct U3CCoRepeatPulseU3Ed__41_tC969D59669B17755DB8D15A72BDFA802EF50781E  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41::<>4__this
	PulseShaderHandler_tF5505E913AD9630D8B9AB341E47736ECF07887A7* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38
struct U3CCoSinglePulseU3Ed__38_t8A2E13C829DAE4E96A1EA8199A4A3337D9C2553D  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38::<>4__this
	PulseShaderHandler_tF5505E913AD9630D8B9AB341E47736ECF07887A7* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39
struct U3CCoWaitForRepeatDelayU3Ed__39_tB34A353D0923A7F66CE7327DC2115177E42A6759  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<>4__this
	PulseShaderHandler_tF5505E913AD9630D8B9AB341E47736ECF07887A7* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
struct Subscriber_t63E20F12ACB64582EEE0294EBD24F345AE88EC26  : public RuntimeObject
{
	// UnityEngine.InputSystem.RemoteInputPlayerConnection UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber::owner
	RemoteInputPlayerConnection_t30D11D576C269098E4EBC0E07291C767130FC3DF* ___owner_0;
	// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber::observer
	RuntimeObject* ___observer_1;
};

// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29
struct U3CResetAndDeterminePivotU3Ed__29_t3614FF5B8E4F4442B80F39C105E177BC73CE0943  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<>4__this
	RotateAroundPoint_tC88ED73897D8A9E80AB34633465750DFB7D5236F* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30
struct U3CTrackPositionSequenceU3Ed__30_tD0F79D069862E19591C76B81CFF56C18E930C3F8  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>4__this
	RotateAroundPoint_tC88ED73897D8A9E80AB34633465750DFB7D5236F* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t0B1D505C32BD71431D9278C81D05515605E8DEFD  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>2__current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// UnityEngine.GameObject[] Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>7__wrap2
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___U3CU3E7__wrap2_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_5;
};

// UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9
struct U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::str
	String_t* ___str_3;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>3__str
	String_t* ___U3CU3E3__str_4;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_5;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>3__predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___U3CU3E3__predicate_6;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<length>5__2
	int32_t ___U3ClengthU3E5__2_7;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<position>5__3
	int32_t ___U3CpositionU3E5__3_8;
};

// TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81
struct U3CDelayedDestroyDropdownListU3Ed__81_t05B7496EE054D3D27B38F71DF8049C452D352409  : public RuntimeObject
{
	// System.Int32 TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::delay
	float ___delay_2;
	// TMPro.TMP_Dropdown TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::<>4__this
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___U3CU3E4__this_3;
};

// TMPro.TMP_InputField/<CaretBlink>d__276
struct U3CCaretBlinkU3Ed__276_tDE69A51B01482A60372BE8B9BF3E0AF2C24A9ED3  : public RuntimeObject
{
	// System.Int32 TMPro.TMP_InputField/<CaretBlink>d__276::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_InputField/<CaretBlink>d__276::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.TMP_InputField TMPro.TMP_InputField/<CaretBlink>d__276::<>4__this
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___U3CU3E4__this_2;
};

// TMPro.TMP_InputField/<MouseDragOutsideRect>d__294
struct U3CMouseDragOutsideRectU3Ed__294_t193AC97DD2625A0E3BB89FB5DB0911CDF3D4C958  : public RuntimeObject
{
	// System.Int32 TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.TMP_InputField TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<>4__this
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___U3CU3E4__this_2;
	// UnityEngine.EventSystems.PointerEventData TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::eventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData_3;
};

// TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__18
struct U3CDelayedGraphicRebuildU3Ed__18_t576BA35BB19A4AE66F887A81CD049EC6E8153B76  : public RuntimeObject
{
	// System.Int32 TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.TextMeshProUGUI TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__18::<>4__this
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___U3CU3E4__this_2;
};

// TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__19
struct U3CDelayedMaterialRebuildU3Ed__19_t861CD33D0F1735F4938A49DBEC83A7AA1AA0629E  : public RuntimeObject
{
	// System.Int32 TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.TextMeshProUGUI TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__19::<>4__this
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8
struct U3CEnumerateAncestorsU3Ed__8_t2E4D58AB70361294D2942B1D7467EE8B97BA14DB  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>2__current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::includeSelf
	bool ___includeSelf_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::startTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startTransform_5;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>3__startTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E3__startTransform_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<transform>5__2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtransformU3E5__2_7;
};

// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t0B11389F07ACF722E3A389E47AFE52B355E8D73C  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>2__current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root_3;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E3__root_4;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::ignore
	RuntimeObject* ___ignore_5;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__ignore
	RuntimeObject* ___U3CU3E3__ignore_6;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<transformQueue>5__2
	Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* ___U3CtransformQueueU3E5__2_7;
};

// UnityEngine.UIElements.TreeView/<GetAllItems>d__64
struct U3CGetAllItemsU3Ed__64_t79EF64E0C5CD7E3CEA0EBBA0C7F85EBC2AFD75E0  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.TreeView/<GetAllItems>d__64::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.UIElements.ITreeViewItem UnityEngine.UIElements.TreeView/<GetAllItems>d__64::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.UIElements.TreeView/<GetAllItems>d__64::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ITreeViewItem> UnityEngine.UIElements.TreeView/<GetAllItems>d__64::rootItems
	RuntimeObject* ___rootItems_3;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ITreeViewItem> UnityEngine.UIElements.TreeView/<GetAllItems>d__64::<>3__rootItems
	RuntimeObject* ___U3CU3E3__rootItems_4;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ITreeViewItem>> UnityEngine.UIElements.TreeView/<GetAllItems>d__64::<iteratorStack>5__1
	Stack_1_tD4465E97FAAAFD450F766F80007EAD484D692451* ___U3CiteratorStackU3E5__1_5;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ITreeViewItem> UnityEngine.UIElements.TreeView/<GetAllItems>d__64::<currentIterator>5__2
	RuntimeObject* ___U3CcurrentIteratorU3E5__2_6;
	// System.Boolean UnityEngine.UIElements.TreeView/<GetAllItems>d__64::<hasNext>5__3
	bool ___U3ChasNextU3E5__3_7;
	// UnityEngine.UIElements.ITreeViewItem UnityEngine.UIElements.TreeView/<GetAllItems>d__64::<currentItem>5__4
	RuntimeObject* ___U3CcurrentItemU3E5__4_8;
};

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/AppRemotingDisconnectHelper/<NotifySubsystemDestroyAndDisconnect>d__1
struct U3CNotifySubsystemDestroyAndDisconnectU3Ed__1_t809D85ECC0AAD1A3B9379FB2E1C818C002116B92  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/AppRemotingDisconnectHelper/<NotifySubsystemDestroyAndDisconnect>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/AppRemotingDisconnectHelper/<NotifySubsystemDestroyAndDisconnect>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0
struct U3CReturnVoidU3Ed__0_tC064276ADDB9239FCAF4F75C4E2C11E563DFC54A  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::instruction
	RuntimeObject* ___instruction_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::awaiter
	SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* ___awaiter_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheet>
struct Enumerator_t6A2C9B49B9A539A38B864F791777F86879469484 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t1FF474106F2888EF4E01B2D7D87CB3DE010CB06E 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.VisualElementAsset>
struct Enumerator_tC49B324229C130CEF914A7CF022A162A3F309AF8 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	VisualElementAsset_t558B207D551F8C727D1CD0F443F7211D095C3FA9* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>
struct Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ____current_3;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_result_22;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// UnityEngine.UIElements.StylePropertyName
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	// UnityEngine.UIElements.StyleSheets.StylePropertyId UnityEngine.UIElements.StylePropertyName::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.UIElements.StylePropertyName::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StylePropertyName
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField_0;
	char* ___U3CnameU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StylePropertyName
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField_0;
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_tE09151B83F8C493C58DB9D5DAFA201960619D580 
{
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState> UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_History
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_History_0;
	// UnityEngine.InputSystem.EnhancedTouch.Finger UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_Finger
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger_1;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_Count
	int32_t ___m_Count_2;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_StartIndex
	int32_t ___m_StartIndex_3;
	// System.UInt32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory::m_Version
	uint32_t ___m_Version_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_tE09151B83F8C493C58DB9D5DAFA201960619D580_marshaled_pinvoke
{
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_History_0;
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger_1;
	int32_t ___m_Count_2;
	int32_t ___m_StartIndex_3;
	uint32_t ___m_Version_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct TouchHistory_tE09151B83F8C493C58DB9D5DAFA201960619D580_marshaled_com
{
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_History_0;
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger_1;
	int32_t ___m_Count_2;
	int32_t ___m_StartIndex_3;
	uint32_t ___m_Version_4;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};

// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection
struct ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523  : public FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF
{
};

// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_t5337674C27D910998AD03237067CD14A65B18403  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.Threading.Tasks.Task/SetOnInvokeMres
struct SetOnInvokeMres_t4604DE7C02C5D334F01D5A5164B27E3F760B88B5  : public ManualResetEventSlim_tF787FECBA03E587696EC89D5AF8CB9EA24701796
{
};

// UnityEngine.UIElements.VisualTreeAsset/UsingEntry
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 
{
	// System.String UnityEngine.UIElements.VisualTreeAsset/UsingEntry::alias
	String_t* ___alias_1;
	// System.String UnityEngine.UIElements.VisualTreeAsset/UsingEntry::path
	String_t* ___path_2;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualTreeAsset/UsingEntry::asset
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset_3;
};

struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_StaticFields
{
	// System.Collections.Generic.IComparer`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry> UnityEngine.UIElements.VisualTreeAsset/UsingEntry::comparer
	RuntimeObject* ___comparer_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualTreeAsset/UsingEntry
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_pinvoke
{
	char* ___alias_1;
	char* ___path_2;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset_3;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualTreeAsset/UsingEntry
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_com
{
	Il2CppChar* ___alias_1;
	Il2CppChar* ___path_2;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StylePropertyName>
struct Enumerator_t72FA0BD85114201DF7DC6AB5CD84F383CA13B94D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.VisualTreeAsset/UsingEntry>
struct Enumerator_tB0F816093F81D6672785A2ADF957047667737977 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ____current_3;
};

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result_22;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// TMPro.TMP_Vertex
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
};

struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A_StaticFields
{
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___k_Zero_5;
};

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE* ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_12;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct U3CGetScenesU3Ed__138_tFBA0B97BC319327E998F7D222E92EE80A45C85DD  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>2__current
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::sceneNames
	RuntimeObject* ___sceneNames_3;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>3__sceneNames
	RuntimeObject* ___U3CU3E3__sceneNames_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>4__this
	MixedRealitySceneSystem_t82C07F4A6F0086A3FBC2D85933EEB03D262CDA21* ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
};

// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_t7AC75E350E6308C381F80ABF2B51C40C6B023DA3  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>4__this
	MoveToTarget_tD30BA5EDC526F3952A5FC36D123C285F4CE15CE5* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<origin>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoriginU3E5__2_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<t>5__3
	float ___U3CtU3E5__3_4;
};

// Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7
struct U3CGetPointersU3Ed__7_t2642ED169501500FA73CF8634B9D16592BC2FD1C  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>7__wrap1
	Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 ___U3CU3E7__wrap1_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>7__wrap2
	IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* ___U3CU3E7__wrap2_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_5;
};

// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31
struct U3CRotateHintSequenceU3Ed__31_t019D3A81837715E3836DC6C944FFDB5B4139093F  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<>4__this
	RotateAroundPoint_tC88ED73897D8A9E80AB34633465750DFB7D5236F* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<centeredOrigin>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcenteredOriginU3E5__2_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<targetOrigin>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtargetOriginU3E5__3_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<t>5__4
	float ___U3CtU3E5__4_5;
};

// UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t666D3E1FBD05734FCFE0D02B036552C499F9BF7E  : public RuntimeObject
{
	// System.Int32 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>4__this
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___U3CU3E4__this_2;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_3;
	// UnityEngine.Camera UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_4;
};

// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204
struct U3CAnimateToU3Ed__204_t077432CCC39894CC9C3A3AAF0A13B4FF9187A780  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve_2;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>4__this
	ScrollingObjectCollection_t821C999BC5E6630449E19F21187581CC70C9D847* ___U3CU3E4__this_3;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::time
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___time_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::initialPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPos_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::finalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___finalPos_6;
	// System.Action Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_7;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<counter>5__2
	float ___U3CcounterU3E5__2_8;
};

// System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24  : public Task_1_t824317F4B958F7512E8F7300511752937A6C6043
{
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim/TaskNode::Prev
	TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24* ___Prev_23;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim/TaskNode::Next
	TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24* ___Next_24;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2
struct U3CSaveInternalU3Ed__2_tCF2207F732BCEFC4BA221584F61EE4B1CA8C0238  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::meshObserver
	RuntimeObject* ___meshObserver_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::consolidate
	bool ___consolidate_3;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::folderPath
	String_t* ___folderPath_4;
	// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>7__wrap1
	Enumerator_t1FF474106F2888EF4E01B2D7D87CB3DE010CB06E ___U3CU3E7__wrap1_5;
};

// System.IO.Stream/NullStream
struct NullStream_tB3017C75267738FCAC1619B388A774F3AA6E0DA8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
};

struct NullStream_tB3017C75267738FCAC1619B388A774F3AA6E0DA8_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream/NullStream::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_4;
};

// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05  : public Task_1_t4C228DE57804012969575431CFF12D57C875552D
{
	// System.Boolean System.IO.Stream/ReadWriteTask::_isRead
	bool ____isRead_23;
	// System.Boolean System.IO.Stream/ReadWriteTask::_apm
	bool ____apm_24;
	// System.IO.Stream System.IO.Stream/ReadWriteTask::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_25;
	// System.Byte[] System.IO.Stream/ReadWriteTask::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_26;
	// System.Int32 System.IO.Stream/ReadWriteTask::_offset
	int32_t ____offset_27;
	// System.Int32 System.IO.Stream/ReadWriteTask::_count
	int32_t ____count_28;
	// System.AsyncCallback System.IO.Stream/ReadWriteTask::_callback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ____callback_29;
	// System.Threading.ExecutionContext System.IO.Stream/ReadWriteTask::_context
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____context_30;
};

struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05_StaticFields
{
	// System.Threading.ContextCallback System.IO.Stream/ReadWriteTask::s_invokeAsyncCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_invokeAsyncCallback_31;
};

// UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8
struct U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>2__current
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::str
	String_t* ___str_3;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>3__str
	String_t* ___U3CU3E3__str_4;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<length>5__2
	int32_t ___U3ClengthU3E5__2_5;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<endPos>5__3
	int32_t ___U3CendPosU3E5__3_6;
};

// System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
struct CompleteOnInvokePromise_t6C71F17C7298C41A6A42081811C7D5BA67702142  : public Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11
{
	// System.Collections.Generic.IList`1<System.Threading.Tasks.Task> System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise::_tasks
	RuntimeObject* ____tasks_23;
};

// System.IO.TextReader/NullTextReader
struct NullTextReader_t828ACBBC89DC1C7823A058435A6F23DB4B981C54  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
};

// System.IO.TextReader/SyncTextReader
struct SyncTextReader_tC9542E9EB84737E5D288758691DD9FDE63687644  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.TextReader System.IO.TextReader/SyncTextReader::_in
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ____in_2;
};

// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_tD77A7454CBDCA629E9FFCD93B21B7A0B4856C88F  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
};

// System.IO.TextWriter/SyncTextWriter
struct SyncTextWriter_t2B0E74B8B5F076D9DAA63A884B64E6AED5454340  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.TextWriter System.IO.TextWriter/SyncTextWriter::_out
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ____out_6;
};

// UnityEngine.InputSystem.EnhancedTouch.TouchHistory/Enumerator
struct Enumerator_tED4978E8A7E5E733B9D8095128F1BD464A0214C5  : public RuntimeObject
{
	// UnityEngine.InputSystem.EnhancedTouch.TouchHistory UnityEngine.InputSystem.EnhancedTouch.TouchHistory/Enumerator::m_Owner
	TouchHistory_tE09151B83F8C493C58DB9D5DAFA201960619D580 ___m_Owner_0;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.TouchHistory/Enumerator::m_Index
	int32_t ___m_Index_1;
};

// UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21
struct U3Cget_stylesheetsU3Ed__21_tC629F509A26302EA08AF0252AB9090F9FCFFF999  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<>2__current
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<>4__this
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CU3E4__this_3;
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<sent>5__1
	HashSet_1_tAF7309D157084CB902A6F7684E6E474986365867* ___U3CsentU3E5__1_4;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.VisualElementAsset> UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<>s__2
	Enumerator_tC49B324229C130CEF914A7CF022A162A3F309AF8 ___U3CU3Es__2_5;
	// UnityEngine.UIElements.VisualElementAsset UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<vea>5__3
	VisualElementAsset_t558B207D551F8C727D1CD0F443F7211D095C3FA9* ___U3CveaU3E5__3_6;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<>s__4
	Enumerator_t6A2C9B49B9A539A38B864F791777F86879469484 ___U3CU3Es__4_7;
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<stylesheet>5__5
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___U3CstylesheetU3E5__5_8;
	// System.Collections.Generic.List`1/Enumerator<System.String> UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<>s__6
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 ___U3CU3Es__6_9;
	// System.String UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<stylesheetPath>5__7
	String_t* ___U3CstylesheetPathU3E5__7_10;
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21::<stylesheet>5__8
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___U3CstylesheetU3E5__8_11;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
};

// UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24
struct U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>4__this
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>7__wrap1
	Enumerator_tE4C063339BE1A617569244A7F77DF2FBF2ABFA4A ___U3CU3E7__wrap1_3;
};

// UnityEngine.XR.XRMeshSubsystem/MeshTransformList
struct MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F 
{
	// System.IntPtr UnityEngine.XR.XRMeshSubsystem/MeshTransformList::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24
struct U3CGetBaseLayoutsU3Ed__24_tFACFE5E75EF61B27C631E4AAF81E6C3642719012  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>2__current
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::includeSelf
	bool ___includeSelf_3;
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___layout_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>3__layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CU3E3__layout_6;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>4__this
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___U3CU3E4__this_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24::<>3__<>4__this
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___U3CU3E3__U3CU3E4__this_8;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D 
{
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Name
	String_t* ___Name_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Path
	String_t* ___Path_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Included
	bool ___Included_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::BuildIndex
	int32_t ___BuildIndex_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Tag
	String_t* ___Tag_5;
	// UnityEngine.Object Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Asset
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___Asset_6;
};

struct SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D_StaticFields
{
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::empty
	SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D ___empty_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D_marshaled_pinvoke
{
	char* ___Name_1;
	char* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	char* ___Tag_5;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___Asset_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D_marshaled_com
{
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	Il2CppChar* ___Tag_5;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___Asset_6;
};

// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};

struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};

// Mono.Btls.MonoBtlsObject/MonoBtlsHandle
struct MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.Reflection.RuntimeAssembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_t6ACD87BD9B7D7AB7270667DEDC1ABFA6404224C4  : public UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D
{
	// System.Reflection.Module System.Reflection.RuntimeAssembly/UnmanagedMemoryStreamForModule::module
	Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* ___module_13;
};

// System.IO.StreamReader/NullStreamReader
struct NullStreamReader_t618B03C84D14FCA0DB20EDDE06059B954C48F094  : public StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B
{
};

// UnityEngine.UIElements.StylePropertyNameCollection/Enumerator
struct Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB 
{
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StylePropertyName> UnityEngine.UIElements.StylePropertyNameCollection/Enumerator::m_Enumerator
	Enumerator_t72FA0BD85114201DF7DC6AB5CD84F383CA13B94D ___m_Enumerator_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StylePropertyNameCollection/Enumerator
struct Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshaled_pinvoke
{
	Enumerator_t72FA0BD85114201DF7DC6AB5CD84F383CA13B94D ___m_Enumerator_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StylePropertyNameCollection/Enumerator
struct Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshaled_com
{
	Enumerator_t72FA0BD85114201DF7DC6AB5CD84F383CA13B94D ___m_Enumerator_0;
};

// System.Threading.Tasks.Task/DelayPromise
struct DelayPromise_t4BC34113ABCFAE912879F63700C8AD7F8C243D3D  : public Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17
{
	// System.Threading.CancellationToken System.Threading.Tasks.Task/DelayPromise::Token
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___Token_23;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/DelayPromise::Registration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___Registration_24;
	// System.Threading.Timer System.Threading.Tasks.Task/DelayPromise::Timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ___Timer_25;
};

// UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17
struct U3Cget_templateDependenciesU3Ed__17_t5CEC9CD861CD8DC8EA7BD1A50A01728D8D7DDC30  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17::<>2__current
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17::<>4__this
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CU3E4__this_3;
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualTreeAsset> UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17::<sent>5__1
	HashSet_1_tAEC7BD76329F43CDD4FD40F4B80587C9CF36CBF9* ___U3CsentU3E5__1_4;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.VisualTreeAsset/UsingEntry> UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17::<>s__2
	Enumerator_tB0F816093F81D6672785A2ADF957047667737977 ___U3CU3Es__2_5;
	// UnityEngine.UIElements.VisualTreeAsset/UsingEntry UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17::<entry>5__3
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___U3CentryU3E5__3_6;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17::<vta>5__4
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvtaU3E5__4_7;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE  : public UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D
{
	// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::_sourceBuffer
	RuntimeObject* ____sourceBuffer_13;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2 
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_RequestId
	int32_t ___m_RequestId_1;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::<conversionParams>k__BackingField
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_pinvoke
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_com
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};

// UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD 
{
	// System.Int32 UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator::m_Index
	int32_t ___m_Index_0;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator::m_Requirements
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Requirements_1;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator::m_Controls
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD_marshaled_pinvoke
{
	int32_t ___m_Index_0;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_Requirements_1;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD_marshaled_com
{
	int32_t ___m_Index_0;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_Requirements_1;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_2;
};

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct Enumerator_t7CD2FE06EEBD969570315DCC4F118C652438D2AD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD07FBB164686BD509B905747DDAC5576DEB17B22* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D ____current_3;
};

// Mono.Btls.MonoBtlsBio/BoringBioHandle
struct BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsKey/BoringKeyHandle
struct BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsPkcs12/BoringPkcs12Handle
struct BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509/BoringX509Handle
struct BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509Chain/BoringX509ChainHandle
struct BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509Lookup/BoringX509LookupHandle
struct BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509LookupMono/BoringX509LookupMonoHandle
struct BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509Name/BoringX509NameHandle
struct BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
	// System.Boolean Mono.Btls.MonoBtlsX509Name/BoringX509NameHandle::dontFree
	bool ___dontFree_6;
};

// Mono.Btls.MonoBtlsX509Store/BoringX509StoreHandle
struct BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// Mono.Btls.MonoBtlsX509StoreCtx/BoringX509StoreCtxHandle
struct BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
	// System.Boolean Mono.Btls.MonoBtlsX509StoreCtx/BoringX509StoreCtxHandle::dontFree
	bool ___dontFree_6;
};

// Mono.Btls.MonoBtlsX509VerifyParam/BoringX509VerifyParamHandle
struct BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA  : public MonoBtlsHandle_tBBEB3B4C80F2A45CD0F25F388A0489D7F4387FEC
{
};

// TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
struct U3CDoSpriteAnimationInternalU3Ed__7_t42723E221B1CC15F28C35D59B11406460731BD8C  : public RuntimeObject
{
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<>4__this
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___U3CU3E4__this_2;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::start
	int32_t ___start_3;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::end
	int32_t ___end_4;
	// TMPro.TMP_SpriteAsset TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_5;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::currentCharacter
	int32_t ___currentCharacter_6;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::framerate
	int32_t ___framerate_7;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<currentFrame>5__2
	int32_t ___U3CcurrentFrameU3E5__2_8;
	// TMPro.TMP_CharacterInfo TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<charInfo>5__3
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 ___U3CcharInfoU3E5__3_9;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<materialIndex>5__4
	int32_t ___U3CmaterialIndexU3E5__4_10;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<vertexIndex>5__5
	int32_t ___U3CvertexIndexU3E5__5_11;
	// TMPro.TMP_MeshInfo TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<meshInfo>5__6
	TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B ___U3CmeshInfoU3E5__6_12;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<baseSpriteScale>5__7
	float ___U3CbaseSpriteScaleU3E5__7_13;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<elapsedTime>5__8
	float ___U3CelapsedTimeU3E5__8_14;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<targetTime>5__9
	float ___U3CtargetTimeU3E5__9_15;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_tE0A045FFC7E54F90A9BFC3E7177713C8925A861F  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>4__this
	MixedRealitySceneSystemProfile_t3C841F95FE97BC5E0245ACAAE7164BB8B5C31B1D* ___U3CU3E4__this_3;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::tag
	String_t* ___tag_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>3__tag
	String_t* ___U3CU3E3__tag_5;
	// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>7__wrap1
	Enumerator_t7CD2FE06EEBD969570315DCC4F118C652438D2AD ___U3CU3E7__wrap1_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t1AA7E7CB52E112209BFF10217944E684E4EB5F6C** comReturnValue);


// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, RuntimeObject* ___buffer0, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_mEB94B814AFD6FBEA83B3A20A1FE7D857D15394D2 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_mC7911E36EE823861F59C0BDE0744F658385F98A1 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::Windows.Storage.Streams.IRandomAccessStream.put_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m2C0590DEFB21D9424F72CF21DD0A054F8E80C75A (RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m03E7B7428D9EF51696BEB6C89842FBA7FD82D3F9 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___position0, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IOutputStream System.IO.NetFxToWinRtStreamAdapter::GetOutputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetOutputStreamAt_mA1AF4993CBC2A031B9DA190B67BDFEC34B7CC19F (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___position0, const RuntimeMethod* method) ;
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m9FB2167532BF6A84B75B38F2CBD2BC3C4520418B (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_m9AC81223CCC143CF53DAEF7CA809E8C45526E52C (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___position0, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IRandomAccessStream System.IO.NetFxToWinRtStreamAdapter::CloneStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_CloneStream_m7C1D8E72959462110DE24B04DD63A1E7460EC4A7 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m9A2F71AE4F8DF5D46EBCBA7EEA0BD6E3BA5E550F (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_mE15EAB11D32C7615C658F2C226266E1AD1E02214 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35
struct U3CUpdateStateU3Ed__35_tB4C7CDF051BFA4A1F8A954D31C1F1F877FB36E4E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateStateU3Ed__35_tB4C7CDF051BFA4A1F8A954D31C1F1F877FB36E4E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CUpdateStateU3Ed__35_tB4C7CDF051BFA4A1F8A954D31C1F1F877FB36E4E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateStateU3Ed__35_tB4C7CDF051BFA4A1F8A954D31C1F1F877FB36E4E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateStateU3Ed__35_tB4C7CDF051BFA4A1F8A954D31C1F1F877FB36E4E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateStateU3Ed__35_tB4C7CDF051BFA4A1F8A954D31C1F1F877FB36E4E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateStateU3Ed__35_tB4C7CDF051BFA4A1F8A954D31C1F1F877FB36E4E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_tD0170F22C949B79215E475C620EF5FD27828BEC8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_tD0170F22C949B79215E475C620EF5FD27828BEC8_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CBlinkCaretU3Ed__20_tD0170F22C949B79215E475C620EF5FD27828BEC8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_tD0170F22C949B79215E475C620EF5FD27828BEC8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CBlinkCaretU3Ed__20_tD0170F22C949B79215E475C620EF5FD27828BEC8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CBlinkCaretU3Ed__20_tD0170F22C949B79215E475C620EF5FD27828BEC8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CBlinkCaretU3Ed__20_tD0170F22C949B79215E475C620EF5FD27828BEC8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37
struct U3CFadeLineU3Ed__37_t891EE11AFFAEC00F28E707CD91F3B7E90E2DFE39_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFadeLineU3Ed__37_t891EE11AFFAEC00F28E707CD91F3B7E90E2DFE39_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CFadeLineU3Ed__37_t891EE11AFFAEC00F28E707CD91F3B7E90E2DFE39_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFadeLineU3Ed__37_t891EE11AFFAEC00F28E707CD91F3B7E90E2DFE39_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFadeLineU3Ed__37_t891EE11AFFAEC00F28E707CD91F3B7E90E2DFE39(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFadeLineU3Ed__37_t891EE11AFFAEC00F28E707CD91F3B7E90E2DFE39_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFadeLineU3Ed__37_t891EE11AFFAEC00F28E707CD91F3B7E90E2DFE39_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9
struct U3CInitializeSceneContentWithDelayU3Ed__9_tCD0E00A91C1F2E9CCECED10EC672041295C74964_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInitializeSceneContentWithDelayU3Ed__9_tCD0E00A91C1F2E9CCECED10EC672041295C74964_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CInitializeSceneContentWithDelayU3Ed__9_tCD0E00A91C1F2E9CCECED10EC672041295C74964_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInitializeSceneContentWithDelayU3Ed__9_tCD0E00A91C1F2E9CCECED10EC672041295C74964_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInitializeSceneContentWithDelayU3Ed__9_tCD0E00A91C1F2E9CCECED10EC672041295C74964(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInitializeSceneContentWithDelayU3Ed__9_tCD0E00A91C1F2E9CCECED10EC672041295C74964_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInitializeSceneContentWithDelayU3Ed__9_tCD0E00A91C1F2E9CCECED10EC672041295C74964_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct U3CGetScenesU3Ed__138_tFBA0B97BC319327E998F7D222E92EE80A45C85DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetScenesU3Ed__138_tFBA0B97BC319327E998F7D222E92EE80A45C85DD_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetScenesU3Ed__138_tFBA0B97BC319327E998F7D222E92EE80A45C85DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetScenesU3Ed__138_tFBA0B97BC319327E998F7D222E92EE80A45C85DD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetScenesU3Ed__138_tFBA0B97BC319327E998F7D222E92EE80A45C85DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetScenesU3Ed__138_tFBA0B97BC319327E998F7D222E92EE80A45C85DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetScenesU3Ed__138_tFBA0B97BC319327E998F7D222E92EE80A45C85DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_tE0A045FFC7E54F90A9BFC3E7177713C8925A861F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_tE0A045FFC7E54F90A9BFC3E7177713C8925A861F_ComCallableWrapper>, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetContentSceneNamesByTagU3Ed__36_tE0A045FFC7E54F90A9BFC3E7177713C8925A861F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_tE0A045FFC7E54F90A9BFC3E7177713C8925A861F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[5] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetContentSceneNamesByTagU3Ed__36_tE0A045FFC7E54F90A9BFC3E7177713C8925A861F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetContentSceneNamesByTagU3Ed__36_tE0A045FFC7E54F90A9BFC3E7177713C8925A861F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetContentSceneNamesByTagU3Ed__36_tE0A045FFC7E54F90A9BFC3E7177713C8925A861F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t8209FC7F44B559404BDA6D849C4F9879772CE2FE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t8209FC7F44B559404BDA6D849C4F9879772CE2FE_ComCallableWrapper>, IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t8209FC7F44B559404BDA6D849C4F9879772CE2FE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t8209FC7F44B559404BDA6D849C4F9879772CE2FE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D(IIterator_1_t1AA7E7CB52E112209BFF10217944E684E4EB5F6C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t8209FC7F44B559404BDA6D849C4F9879772CE2FE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t8209FC7F44B559404BDA6D849C4F9879772CE2FE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t8209FC7F44B559404BDA6D849C4F9879772CE2FE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsBio/BoringBioHandle
struct BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringBioHandle_t6D9F891187C7E417F10E2DB9C989AF5BFE372303_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsKey/BoringKeyHandle
struct BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringKeyHandle_t7E8EFC79EB239D2208D1E71547896A2013B2D141_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsPkcs12/BoringPkcs12Handle
struct BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringPkcs12Handle_t34DD437CFB00E6222716486AE8BEF7ABF3B00AC7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509/BoringX509Handle
struct BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509Handle_t644B4BF2B0083F95E9CD93D74F12BF84CFCC938F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509Chain/BoringX509ChainHandle
struct BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509ChainHandle_t6206EBFDC931E6D55BF854D5E5F0E4EAF76129A2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509Lookup/BoringX509LookupHandle
struct BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509LookupHandle_tB80C02D6E0C4BAF5B759E7A54E9586D36267FC18_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509LookupMono/BoringX509LookupMonoHandle
struct BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509LookupMonoHandle_t394FDD391DDD919238977982AB1E76C9F7720383_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509Name/BoringX509NameHandle
struct BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509NameHandle_tEC7F098EECC3E1094B516A87207FE42090A5D4D2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509Store/BoringX509StoreHandle
struct BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509StoreHandle_t6AEB60A529A9A40037C321101EDBE83D138921BF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509StoreCtx/BoringX509StoreCtxHandle
struct BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509StoreCtxHandle_t9DD9F7CD81758A839AA0A0D08A05A3E3EF740086_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.MonoBtlsX509VerifyParam/BoringX509VerifyParamHandle
struct BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoringX509VerifyParamHandle_t7CE50E432B977170C891377B33F3CB2A24A2E8FA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_t846FDE5CBE6A4780B4063A26FA4F71E9092BCBDC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_t846FDE5CBE6A4780B4063A26FA4F71E9092BCBDC_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CFollowSequenceU3Ed__31_t846FDE5CBE6A4780B4063A26FA4F71E9092BCBDC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_t846FDE5CBE6A4780B4063A26FA4F71E9092BCBDC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFollowSequenceU3Ed__31_t846FDE5CBE6A4780B4063A26FA4F71E9092BCBDC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFollowSequenceU3Ed__31_t846FDE5CBE6A4780B4063A26FA4F71E9092BCBDC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFollowSequenceU3Ed__31_t846FDE5CBE6A4780B4063A26FA4F71E9092BCBDC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_t7AC75E350E6308C381F80ABF2B51C40C6B023DA3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_t7AC75E350E6308C381F80ABF2B51C40C6B023DA3_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CMoveHintSequenceU3Ed__29_t7AC75E350E6308C381F80ABF2B51C40C6B023DA3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_t7AC75E350E6308C381F80ABF2B51C40C6B023DA3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMoveHintSequenceU3Ed__29_t7AC75E350E6308C381F80ABF2B51C40C6B023DA3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMoveHintSequenceU3Ed__29_t7AC75E350E6308C381F80ABF2B51C40C6B023DA3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMoveHintSequenceU3Ed__29_t7AC75E350E6308C381F80ABF2B51C40C6B023DA3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.NavigateFocusRing/ChangeDirection
struct ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ChangeDirection_tA00E410F9A4FF0901C437006BD5AFA4E42251523_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284
{
	inline InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID;
		interfaceIds[2] = IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_mEB94B814AFD6FBEA83B3A20A1FE7D857D15394D2(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71
{
	inline InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputStream_t5337674C27D910998AD03237067CD14A65B18403(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputStream_t5337674C27D910998AD03237067CD14A65B18403_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284
{
	inline OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_mEB94B814AFD6FBEA83B3A20A1FE7D857D15394D2(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284
{
	inline RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D::IID;
		interfaceIds[2] = IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71::IID;
		interfaceIds[3] = IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m29F4D8681FB7E60088E7A665F319EADAF14696BA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Size_mC7911E36EE823861F59C0BDE0744F658385F98A1(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_mF541E936AB539C97B96018952B00DAF943C8E658(uint64_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D* __thisValue = (RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D*)GetManagedObjectInline();
			RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m2C0590DEFB21D9424F72CF21DD0A054F8E80C75A(__thisValue, ___value0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m5B59AEE63C2736D9CCBB8A4987C5316A34CD343F(uint64_t ___position0, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetInputStreamAt_m03E7B7428D9EF51696BEB6C89842FBA7FD82D3F9(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_mE15EFF78D7AB63C66957863FE3D54FA33D66CCB8(uint64_t ___position0, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetOutputStreamAt_mA1AF4993CBC2A031B9DA190B67BDFEC34B7CC19F(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m3BBAFE5846C2C4581E7E509DC125E3AB508D591A(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Position_m9FB2167532BF6A84B75B38F2CBD2BC3C4520418B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m1DDCF62775B861D7FDD3EF761EE05251C13FA512(uint64_t ___position0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			NetFxToWinRtStreamAdapter_Seek_m9AC81223CCC143CF53DAEF7CA809E8C45526E52C(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mFD31B358478E07E6281E4D329FAC8B6DABE36191(IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_CloneStream_m7C1D8E72959462110DE24B04DD63A1E7460EC4A7(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m599EC4BE14290138A7DCE9D82AF647993B4049E1(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanRead_m9A2F71AE4F8DF5D46EBCBA7EEA0BD6E3BA5E550F(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m76930DBC1CC5718B50A9CCFFBB604AF6137C223B(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanWrite_mE15EAB11D32C7615C658F2C226266E1AD1E02214(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __thisValue = (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_mEB94B814AFD6FBEA83B3A20A1FE7D857D15394D2(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_t45BC621E3A7FE19D7F3B7331D51DAA20F30A82F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_t45BC621E3A7FE19D7F3B7331D51DAA20F30A82F0_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCreateOBJFileContentAsyncU3Ed__1_t45BC621E3A7FE19D7F3B7331D51DAA20F30A82F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_t45BC621E3A7FE19D7F3B7331D51DAA20F30A82F0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCreateOBJFileContentAsyncU3Ed__1_t45BC621E3A7FE19D7F3B7331D51DAA20F30A82F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCreateOBJFileContentAsyncU3Ed__1_t45BC621E3A7FE19D7F3B7331D51DAA20F30A82F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCreateOBJFileContentAsyncU3Ed__1_t45BC621E3A7FE19D7F3B7331D51DAA20F30A82F0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24
struct U3CPauseAndRestartCoroutineU3Ed__24_t9C4AD80F5C5F8EE2C597D9FE2E98E9EC36D7871D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPauseAndRestartCoroutineU3Ed__24_t9C4AD80F5C5F8EE2C597D9FE2E98E9EC36D7871D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CPauseAndRestartCoroutineU3Ed__24_t9C4AD80F5C5F8EE2C597D9FE2E98E9EC36D7871D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPauseAndRestartCoroutineU3Ed__24_t9C4AD80F5C5F8EE2C597D9FE2E98E9EC36D7871D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPauseAndRestartCoroutineU3Ed__24_t9C4AD80F5C5F8EE2C597D9FE2E98E9EC36D7871D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPauseAndRestartCoroutineU3Ed__24_t9C4AD80F5C5F8EE2C597D9FE2E98E9EC36D7871D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPauseAndRestartCoroutineU3Ed__24_t9C4AD80F5C5F8EE2C597D9FE2E98E9EC36D7871D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25
struct U3CRestartCoroutineU3Ed__25_tC313EFA7CEC17EDB79C55EED0AEE082F681B423E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__25_tC313EFA7CEC17EDB79C55EED0AEE082F681B423E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CRestartCoroutineU3Ed__25_tC313EFA7CEC17EDB79C55EED0AEE082F681B423E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__25_tC313EFA7CEC17EDB79C55EED0AEE082F681B423E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRestartCoroutineU3Ed__25_tC313EFA7CEC17EDB79C55EED0AEE082F681B423E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRestartCoroutineU3Ed__25_tC313EFA7CEC17EDB79C55EED0AEE082F681B423E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRestartCoroutineU3Ed__25_tC313EFA7CEC17EDB79C55EED0AEE082F681B423E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7
struct U3CGetPointersU3Ed__7_t2642ED169501500FA73CF8634B9D16592BC2FD1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetPointersU3Ed__7_t2642ED169501500FA73CF8634B9D16592BC2FD1C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetPointersU3Ed__7_t2642ED169501500FA73CF8634B9D16592BC2FD1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetPointersU3Ed__7_t2642ED169501500FA73CF8634B9D16592BC2FD1C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetPointersU3Ed__7_t2642ED169501500FA73CF8634B9D16592BC2FD1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetPointersU3Ed__7_t2642ED169501500FA73CF8634B9D16592BC2FD1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetPointersU3Ed__7_t2642ED169501500FA73CF8634B9D16592BC2FD1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23
struct U3CAnimateHighlightPlateU3Ed__23_t4299D44FFFF841A98A3EB443FA2AEB5ED4556CBC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__23_t4299D44FFFF841A98A3EB443FA2AEB5ED4556CBC_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CAnimateHighlightPlateU3Ed__23_t4299D44FFFF841A98A3EB443FA2AEB5ED4556CBC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__23_t4299D44FFFF841A98A3EB443FA2AEB5ED4556CBC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateHighlightPlateU3Ed__23_t4299D44FFFF841A98A3EB443FA2AEB5ED4556CBC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateHighlightPlateU3Ed__23_t4299D44FFFF841A98A3EB443FA2AEB5ED4556CBC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateHighlightPlateU3Ed__23_t4299D44FFFF841A98A3EB443FA2AEB5ED4556CBC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_tEFF3F4AC8469BA217FDFAACB14E9A8FEB467B122_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CResetViewMatricesOnFrameEndU3Ed__4_tEFF3F4AC8469BA217FDFAACB14E9A8FEB467B122_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CResetViewMatricesOnFrameEndU3Ed__4_tEFF3F4AC8469BA217FDFAACB14E9A8FEB467B122_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CResetViewMatricesOnFrameEndU3Ed__4_tEFF3F4AC8469BA217FDFAACB14E9A8FEB467B122_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CResetViewMatricesOnFrameEndU3Ed__4_tEFF3F4AC8469BA217FDFAACB14E9A8FEB467B122(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CResetViewMatricesOnFrameEndU3Ed__4_tEFF3F4AC8469BA217FDFAACB14E9A8FEB467B122_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CResetViewMatricesOnFrameEndU3Ed__4_tEFF3F4AC8469BA217FDFAACB14E9A8FEB467B122_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__23
struct U3CPulseRoutineU3Ed__23_t651CD24ED14E393164AC88B05B38E0CEC472F666_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__23_t651CD24ED14E393164AC88B05B38E0CEC472F666_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CPulseRoutineU3Ed__23_t651CD24ED14E393164AC88B05B38E0CEC472F666_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__23_t651CD24ED14E393164AC88B05B38E0CEC472F666_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPulseRoutineU3Ed__23_t651CD24ED14E393164AC88B05B38E0CEC472F666(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPulseRoutineU3Ed__23_t651CD24ED14E393164AC88B05B38E0CEC472F666_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPulseRoutineU3Ed__23_t651CD24ED14E393164AC88B05B38E0CEC472F666_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40
struct U3CCoAnimatePulseU3Ed__40_t215C61998479AC866628DF73036DF6F37A2BA3BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoAnimatePulseU3Ed__40_t215C61998479AC866628DF73036DF6F37A2BA3BC_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCoAnimatePulseU3Ed__40_t215C61998479AC866628DF73036DF6F37A2BA3BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoAnimatePulseU3Ed__40_t215C61998479AC866628DF73036DF6F37A2BA3BC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoAnimatePulseU3Ed__40_t215C61998479AC866628DF73036DF6F37A2BA3BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoAnimatePulseU3Ed__40_t215C61998479AC866628DF73036DF6F37A2BA3BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoAnimatePulseU3Ed__40_t215C61998479AC866628DF73036DF6F37A2BA3BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41
struct U3CCoRepeatPulseU3Ed__41_tC969D59669B17755DB8D15A72BDFA802EF50781E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoRepeatPulseU3Ed__41_tC969D59669B17755DB8D15A72BDFA802EF50781E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCoRepeatPulseU3Ed__41_tC969D59669B17755DB8D15A72BDFA802EF50781E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoRepeatPulseU3Ed__41_tC969D59669B17755DB8D15A72BDFA802EF50781E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoRepeatPulseU3Ed__41_tC969D59669B17755DB8D15A72BDFA802EF50781E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoRepeatPulseU3Ed__41_tC969D59669B17755DB8D15A72BDFA802EF50781E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoRepeatPulseU3Ed__41_tC969D59669B17755DB8D15A72BDFA802EF50781E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38
struct U3CCoSinglePulseU3Ed__38_t8A2E13C829DAE4E96A1EA8199A4A3337D9C2553D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoSinglePulseU3Ed__38_t8A2E13C829DAE4E96A1EA8199A4A3337D9C2553D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCoSinglePulseU3Ed__38_t8A2E13C829DAE4E96A1EA8199A4A3337D9C2553D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoSinglePulseU3Ed__38_t8A2E13C829DAE4E96A1EA8199A4A3337D9C2553D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoSinglePulseU3Ed__38_t8A2E13C829DAE4E96A1EA8199A4A3337D9C2553D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoSinglePulseU3Ed__38_t8A2E13C829DAE4E96A1EA8199A4A3337D9C2553D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoSinglePulseU3Ed__38_t8A2E13C829DAE4E96A1EA8199A4A3337D9C2553D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39
struct U3CCoWaitForRepeatDelayU3Ed__39_tB34A353D0923A7F66CE7327DC2115177E42A6759_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoWaitForRepeatDelayU3Ed__39_tB34A353D0923A7F66CE7327DC2115177E42A6759_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCoWaitForRepeatDelayU3Ed__39_tB34A353D0923A7F66CE7327DC2115177E42A6759_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoWaitForRepeatDelayU3Ed__39_tB34A353D0923A7F66CE7327DC2115177E42A6759_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoWaitForRepeatDelayU3Ed__39_tB34A353D0923A7F66CE7327DC2115177E42A6759(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoWaitForRepeatDelayU3Ed__39_tB34A353D0923A7F66CE7327DC2115177E42A6759_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoWaitForRepeatDelayU3Ed__39_tB34A353D0923A7F66CE7327DC2115177E42A6759_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
struct Subscriber_t63E20F12ACB64582EEE0294EBD24F345AE88EC26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscriber_t63E20F12ACB64582EEE0294EBD24F345AE88EC26_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscriber_t63E20F12ACB64582EEE0294EBD24F345AE88EC26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscriber_t63E20F12ACB64582EEE0294EBD24F345AE88EC26_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscriber_t63E20F12ACB64582EEE0294EBD24F345AE88EC26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscriber_t63E20F12ACB64582EEE0294EBD24F345AE88EC26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscriber_t63E20F12ACB64582EEE0294EBD24F345AE88EC26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29
struct U3CResetAndDeterminePivotU3Ed__29_t3614FF5B8E4F4442B80F39C105E177BC73CE0943_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CResetAndDeterminePivotU3Ed__29_t3614FF5B8E4F4442B80F39C105E177BC73CE0943_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CResetAndDeterminePivotU3Ed__29_t3614FF5B8E4F4442B80F39C105E177BC73CE0943_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CResetAndDeterminePivotU3Ed__29_t3614FF5B8E4F4442B80F39C105E177BC73CE0943_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CResetAndDeterminePivotU3Ed__29_t3614FF5B8E4F4442B80F39C105E177BC73CE0943(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CResetAndDeterminePivotU3Ed__29_t3614FF5B8E4F4442B80F39C105E177BC73CE0943_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CResetAndDeterminePivotU3Ed__29_t3614FF5B8E4F4442B80F39C105E177BC73CE0943_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31
struct U3CRotateHintSequenceU3Ed__31_t019D3A81837715E3836DC6C944FFDB5B4139093F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRotateHintSequenceU3Ed__31_t019D3A81837715E3836DC6C944FFDB5B4139093F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CRotateHintSequenceU3Ed__31_t019D3A81837715E3836DC6C944FFDB5B4139093F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRotateHintSequenceU3Ed__31_t019D3A81837715E3836DC6C944FFDB5B4139093F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRotateHintSequenceU3Ed__31_t019D3A81837715E3836DC6C944FFDB5B4139093F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRotateHintSequenceU3Ed__31_t019D3A81837715E3836DC6C944FFDB5B4139093F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRotateHintSequenceU3Ed__31_t019D3A81837715E3836DC6C944FFDB5B4139093F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30
struct U3CTrackPositionSequenceU3Ed__30_tD0F79D069862E19591C76B81CFF56C18E930C3F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTrackPositionSequenceU3Ed__30_tD0F79D069862E19591C76B81CFF56C18E930C3F8_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CTrackPositionSequenceU3Ed__30_tD0F79D069862E19591C76B81CFF56C18E930C3F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTrackPositionSequenceU3Ed__30_tD0F79D069862E19591C76B81CFF56C18E930C3F8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTrackPositionSequenceU3Ed__30_tD0F79D069862E19591C76B81CFF56C18E930C3F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTrackPositionSequenceU3Ed__30_tD0F79D069862E19591C76B81CFF56C18E930C3F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTrackPositionSequenceU3Ed__30_tD0F79D069862E19591C76B81CFF56C18E930C3F8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.RuntimeAssembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_t6ACD87BD9B7D7AB7270667DEDC1ABFA6404224C4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_t6ACD87BD9B7D7AB7270667DEDC1ABFA6404224C4_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline UnmanagedMemoryStreamForModule_t6ACD87BD9B7D7AB7270667DEDC1ABFA6404224C4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_t6ACD87BD9B7D7AB7270667DEDC1ABFA6404224C4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnmanagedMemoryStreamForModule_t6ACD87BD9B7D7AB7270667DEDC1ABFA6404224C4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnmanagedMemoryStreamForModule_t6ACD87BD9B7D7AB7270667DEDC1ABFA6404224C4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnmanagedMemoryStreamForModule_t6ACD87BD9B7D7AB7270667DEDC1ABFA6404224C4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t0B1D505C32BD71431D9278C81D05515605E8DEFD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t0B1D505C32BD71431D9278C81D05515605E8DEFD_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t0B1D505C32BD71431D9278C81D05515605E8DEFD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t0B1D505C32BD71431D9278C81D05515605E8DEFD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t0B1D505C32BD71431D9278C81D05515605E8DEFD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t0B1D505C32BD71431D9278C81D05515605E8DEFD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t0B1D505C32BD71431D9278C81D05515605E8DEFD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t666D3E1FBD05734FCFE0D02B036552C499F9BF7E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CClickRepeatU3Ed__58_t666D3E1FBD05734FCFE0D02B036552C499F9BF7E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CClickRepeatU3Ed__58_t666D3E1FBD05734FCFE0D02B036552C499F9BF7E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CClickRepeatU3Ed__58_t666D3E1FBD05734FCFE0D02B036552C499F9BF7E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CClickRepeatU3Ed__58_t666D3E1FBD05734FCFE0D02B036552C499F9BF7E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CClickRepeatU3Ed__58_t666D3E1FBD05734FCFE0D02B036552C499F9BF7E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CClickRepeatU3Ed__58_t666D3E1FBD05734FCFE0D02B036552C499F9BF7E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204
struct U3CAnimateToU3Ed__204_t077432CCC39894CC9C3A3AAF0A13B4FF9187A780_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateToU3Ed__204_t077432CCC39894CC9C3A3AAF0A13B4FF9187A780_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CAnimateToU3Ed__204_t077432CCC39894CC9C3A3AAF0A13B4FF9187A780_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateToU3Ed__204_t077432CCC39894CC9C3A3AAF0A13B4FF9187A780_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateToU3Ed__204_t077432CCC39894CC9C3A3AAF0A13B4FF9187A780(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateToU3Ed__204_t077432CCC39894CC9C3A3AAF0A13B4FF9187A780_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateToU3Ed__204_t077432CCC39894CC9C3A3AAF0A13B4FF9187A780_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2
struct U3CSaveInternalU3Ed__2_tCF2207F732BCEFC4BA221584F61EE4B1CA8C0238_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSaveInternalU3Ed__2_tCF2207F732BCEFC4BA221584F61EE4B1CA8C0238_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CSaveInternalU3Ed__2_tCF2207F732BCEFC4BA221584F61EE4B1CA8C0238_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSaveInternalU3Ed__2_tCF2207F732BCEFC4BA221584F61EE4B1CA8C0238_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSaveInternalU3Ed__2_tCF2207F732BCEFC4BA221584F61EE4B1CA8C0238(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSaveInternalU3Ed__2_tCF2207F732BCEFC4BA221584F61EE4B1CA8C0238_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSaveInternalU3Ed__2_tCF2207F732BCEFC4BA221584F61EE4B1CA8C0238_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.Stream/NullStream
struct NullStream_tB3017C75267738FCAC1619B388A774F3AA6E0DA8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullStream_tB3017C75267738FCAC1619B388A774F3AA6E0DA8_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline NullStream_tB3017C75267738FCAC1619B388A774F3AA6E0DA8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullStream_tB3017C75267738FCAC1619B388A774F3AA6E0DA8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullStream_tB3017C75267738FCAC1619B388A774F3AA6E0DA8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullStream_tB3017C75267738FCAC1619B388A774F3AA6E0DA8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullStream_tB3017C75267738FCAC1619B388A774F3AA6E0DA8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.StreamReader/NullStreamReader
struct NullStreamReader_t618B03C84D14FCA0DB20EDDE06059B954C48F094_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullStreamReader_t618B03C84D14FCA0DB20EDDE06059B954C48F094_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline NullStreamReader_t618B03C84D14FCA0DB20EDDE06059B954C48F094_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullStreamReader_t618B03C84D14FCA0DB20EDDE06059B954C48F094_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullStreamReader_t618B03C84D14FCA0DB20EDDE06059B954C48F094(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullStreamReader_t618B03C84D14FCA0DB20EDDE06059B954C48F094_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullStreamReader_t618B03C84D14FCA0DB20EDDE06059B954C48F094_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9
struct U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF_ComCallableWrapper>, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[5] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8
struct U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.StylePropertyNameCollection/Enumerator
struct Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81
struct U3CDelayedDestroyDropdownListU3Ed__81_t05B7496EE054D3D27B38F71DF8049C452D352409_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__81_t05B7496EE054D3D27B38F71DF8049C452D352409_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CDelayedDestroyDropdownListU3Ed__81_t05B7496EE054D3D27B38F71DF8049C452D352409_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__81_t05B7496EE054D3D27B38F71DF8049C452D352409_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedDestroyDropdownListU3Ed__81_t05B7496EE054D3D27B38F71DF8049C452D352409(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedDestroyDropdownListU3Ed__81_t05B7496EE054D3D27B38F71DF8049C452D352409_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedDestroyDropdownListU3Ed__81_t05B7496EE054D3D27B38F71DF8049C452D352409_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_InputField/<CaretBlink>d__276
struct U3CCaretBlinkU3Ed__276_tDE69A51B01482A60372BE8B9BF3E0AF2C24A9ED3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__276_tDE69A51B01482A60372BE8B9BF3E0AF2C24A9ED3_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCaretBlinkU3Ed__276_tDE69A51B01482A60372BE8B9BF3E0AF2C24A9ED3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__276_tDE69A51B01482A60372BE8B9BF3E0AF2C24A9ED3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCaretBlinkU3Ed__276_tDE69A51B01482A60372BE8B9BF3E0AF2C24A9ED3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCaretBlinkU3Ed__276_tDE69A51B01482A60372BE8B9BF3E0AF2C24A9ED3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCaretBlinkU3Ed__276_tDE69A51B01482A60372BE8B9BF3E0AF2C24A9ED3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_InputField/<MouseDragOutsideRect>d__294
struct U3CMouseDragOutsideRectU3Ed__294_t193AC97DD2625A0E3BB89FB5DB0911CDF3D4C958_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__294_t193AC97DD2625A0E3BB89FB5DB0911CDF3D4C958_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CMouseDragOutsideRectU3Ed__294_t193AC97DD2625A0E3BB89FB5DB0911CDF3D4C958_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__294_t193AC97DD2625A0E3BB89FB5DB0911CDF3D4C958_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMouseDragOutsideRectU3Ed__294_t193AC97DD2625A0E3BB89FB5DB0911CDF3D4C958(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMouseDragOutsideRectU3Ed__294_t193AC97DD2625A0E3BB89FB5DB0911CDF3D4C958_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMouseDragOutsideRectU3Ed__294_t193AC97DD2625A0E3BB89FB5DB0911CDF3D4C958_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
struct U3CDoSpriteAnimationInternalU3Ed__7_t42723E221B1CC15F28C35D59B11406460731BD8C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDoSpriteAnimationInternalU3Ed__7_t42723E221B1CC15F28C35D59B11406460731BD8C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CDoSpriteAnimationInternalU3Ed__7_t42723E221B1CC15F28C35D59B11406460731BD8C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDoSpriteAnimationInternalU3Ed__7_t42723E221B1CC15F28C35D59B11406460731BD8C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDoSpriteAnimationInternalU3Ed__7_t42723E221B1CC15F28C35D59B11406460731BD8C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDoSpriteAnimationInternalU3Ed__7_t42723E221B1CC15F28C35D59B11406460731BD8C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDoSpriteAnimationInternalU3Ed__7_t42723E221B1CC15F28C35D59B11406460731BD8C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task/DelayPromise
struct DelayPromise_t4BC34113ABCFAE912879F63700C8AD7F8C243D3D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DelayPromise_t4BC34113ABCFAE912879F63700C8AD7F8C243D3D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline DelayPromise_t4BC34113ABCFAE912879F63700C8AD7F8C243D3D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DelayPromise_t4BC34113ABCFAE912879F63700C8AD7F8C243D3D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DelayPromise_t4BC34113ABCFAE912879F63700C8AD7F8C243D3D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DelayPromise_t4BC34113ABCFAE912879F63700C8AD7F8C243D3D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DelayPromise_t4BC34113ABCFAE912879F63700C8AD7F8C243D3D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task/SetOnInvokeMres
struct SetOnInvokeMres_t4604DE7C02C5D334F01D5A5164B27E3F760B88B5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SetOnInvokeMres_t4604DE7C02C5D334F01D5A5164B27E3F760B88B5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline SetOnInvokeMres_t4604DE7C02C5D334F01D5A5164B27E3F760B88B5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SetOnInvokeMres_t4604DE7C02C5D334F01D5A5164B27E3F760B88B5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SetOnInvokeMres_t4604DE7C02C5D334F01D5A5164B27E3F760B88B5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SetOnInvokeMres_t4604DE7C02C5D334F01D5A5164B27E3F760B88B5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SetOnInvokeMres_t4604DE7C02C5D334F01D5A5164B27E3F760B88B5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
struct CompleteOnInvokePromise_t6C71F17C7298C41A6A42081811C7D5BA67702142_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CompleteOnInvokePromise_t6C71F17C7298C41A6A42081811C7D5BA67702142_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline CompleteOnInvokePromise_t6C71F17C7298C41A6A42081811C7D5BA67702142_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CompleteOnInvokePromise_t6C71F17C7298C41A6A42081811C7D5BA67702142_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CompleteOnInvokePromise_t6C71F17C7298C41A6A42081811C7D5BA67702142(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CompleteOnInvokePromise_t6C71F17C7298C41A6A42081811C7D5BA67702142_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CompleteOnInvokePromise_t6C71F17C7298C41A6A42081811C7D5BA67702142_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TextMeshProUGUI/<DelayedGraphicRebuild>d__18
struct U3CDelayedGraphicRebuildU3Ed__18_t576BA35BB19A4AE66F887A81CD049EC6E8153B76_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedGraphicRebuildU3Ed__18_t576BA35BB19A4AE66F887A81CD049EC6E8153B76_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CDelayedGraphicRebuildU3Ed__18_t576BA35BB19A4AE66F887A81CD049EC6E8153B76_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedGraphicRebuildU3Ed__18_t576BA35BB19A4AE66F887A81CD049EC6E8153B76_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedGraphicRebuildU3Ed__18_t576BA35BB19A4AE66F887A81CD049EC6E8153B76(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedGraphicRebuildU3Ed__18_t576BA35BB19A4AE66F887A81CD049EC6E8153B76_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedGraphicRebuildU3Ed__18_t576BA35BB19A4AE66F887A81CD049EC6E8153B76_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TextMeshProUGUI/<DelayedMaterialRebuild>d__19
struct U3CDelayedMaterialRebuildU3Ed__19_t861CD33D0F1735F4938A49DBEC83A7AA1AA0629E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedMaterialRebuildU3Ed__19_t861CD33D0F1735F4938A49DBEC83A7AA1AA0629E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CDelayedMaterialRebuildU3Ed__19_t861CD33D0F1735F4938A49DBEC83A7AA1AA0629E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedMaterialRebuildU3Ed__19_t861CD33D0F1735F4938A49DBEC83A7AA1AA0629E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedMaterialRebuildU3Ed__19_t861CD33D0F1735F4938A49DBEC83A7AA1AA0629E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedMaterialRebuildU3Ed__19_t861CD33D0F1735F4938A49DBEC83A7AA1AA0629E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedMaterialRebuildU3Ed__19_t861CD33D0F1735F4938A49DBEC83A7AA1AA0629E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.TextReader/NullTextReader
struct NullTextReader_t828ACBBC89DC1C7823A058435A6F23DB4B981C54_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullTextReader_t828ACBBC89DC1C7823A058435A6F23DB4B981C54_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline NullTextReader_t828ACBBC89DC1C7823A058435A6F23DB4B981C54_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullTextReader_t828ACBBC89DC1C7823A058435A6F23DB4B981C54_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullTextReader_t828ACBBC89DC1C7823A058435A6F23DB4B981C54(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullTextReader_t828ACBBC89DC1C7823A058435A6F23DB4B981C54_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullTextReader_t828ACBBC89DC1C7823A058435A6F23DB4B981C54_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.TextReader/SyncTextReader
struct SyncTextReader_tC9542E9EB84737E5D288758691DD9FDE63687644_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncTextReader_tC9542E9EB84737E5D288758691DD9FDE63687644_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline SyncTextReader_tC9542E9EB84737E5D288758691DD9FDE63687644_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncTextReader_tC9542E9EB84737E5D288758691DD9FDE63687644_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncTextReader_tC9542E9EB84737E5D288758691DD9FDE63687644(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncTextReader_tC9542E9EB84737E5D288758691DD9FDE63687644_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncTextReader_tC9542E9EB84737E5D288758691DD9FDE63687644_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.TextWriter/NullTextWriter
struct NullTextWriter_tD77A7454CBDCA629E9FFCD93B21B7A0B4856C88F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullTextWriter_tD77A7454CBDCA629E9FFCD93B21B7A0B4856C88F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline NullTextWriter_tD77A7454CBDCA629E9FFCD93B21B7A0B4856C88F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullTextWriter_tD77A7454CBDCA629E9FFCD93B21B7A0B4856C88F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullTextWriter_tD77A7454CBDCA629E9FFCD93B21B7A0B4856C88F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullTextWriter_tD77A7454CBDCA629E9FFCD93B21B7A0B4856C88F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullTextWriter_tD77A7454CBDCA629E9FFCD93B21B7A0B4856C88F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.TextWriter/SyncTextWriter
struct SyncTextWriter_t2B0E74B8B5F076D9DAA63A884B64E6AED5454340_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncTextWriter_t2B0E74B8B5F076D9DAA63A884B64E6AED5454340_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline SyncTextWriter_t2B0E74B8B5F076D9DAA63A884B64E6AED5454340_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncTextWriter_t2B0E74B8B5F076D9DAA63A884B64E6AED5454340_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncTextWriter_t2B0E74B8B5F076D9DAA63A884B64E6AED5454340(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncTextWriter_t2B0E74B8B5F076D9DAA63A884B64E6AED5454340_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncTextWriter_t2B0E74B8B5F076D9DAA63A884B64E6AED5454340_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.EnhancedTouch.TouchHistory/Enumerator
struct Enumerator_tED4978E8A7E5E733B9D8095128F1BD464A0214C5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tED4978E8A7E5E733B9D8095128F1BD464A0214C5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_tED4978E8A7E5E733B9D8095128F1BD464A0214C5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tED4978E8A7E5E733B9D8095128F1BD464A0214C5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tED4978E8A7E5E733B9D8095128F1BD464A0214C5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tED4978E8A7E5E733B9D8095128F1BD464A0214C5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tED4978E8A7E5E733B9D8095128F1BD464A0214C5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8
struct U3CEnumerateAncestorsU3Ed__8_t2E4D58AB70361294D2942B1D7467EE8B97BA14DB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CEnumerateAncestorsU3Ed__8_t2E4D58AB70361294D2942B1D7467EE8B97BA14DB_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CEnumerateAncestorsU3Ed__8_t2E4D58AB70361294D2942B1D7467EE8B97BA14DB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CEnumerateAncestorsU3Ed__8_t2E4D58AB70361294D2942B1D7467EE8B97BA14DB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CEnumerateAncestorsU3Ed__8_t2E4D58AB70361294D2942B1D7467EE8B97BA14DB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CEnumerateAncestorsU3Ed__8_t2E4D58AB70361294D2942B1D7467EE8B97BA14DB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CEnumerateAncestorsU3Ed__8_t2E4D58AB70361294D2942B1D7467EE8B97BA14DB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t0B11389F07ACF722E3A389E47AFE52B355E8D73C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CEnumerateHierarchyCoreU3Ed__4_t0B11389F07ACF722E3A389E47AFE52B355E8D73C_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CEnumerateHierarchyCoreU3Ed__4_t0B11389F07ACF722E3A389E47AFE52B355E8D73C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CEnumerateHierarchyCoreU3Ed__4_t0B11389F07ACF722E3A389E47AFE52B355E8D73C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CEnumerateHierarchyCoreU3Ed__4_t0B11389F07ACF722E3A389E47AFE52B355E8D73C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CEnumerateHierarchyCoreU3Ed__4_t0B11389F07ACF722E3A389E47AFE52B355E8D73C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CEnumerateHierarchyCoreU3Ed__4_t0B11389F07ACF722E3A389E47AFE52B355E8D73C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.TreeView/<GetAllItems>d__64
struct U3CGetAllItemsU3Ed__64_t79EF64E0C5CD7E3CEA0EBBA0C7F85EBC2AFD75E0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllItemsU3Ed__64_t79EF64E0C5CD7E3CEA0EBBA0C7F85EBC2AFD75E0_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetAllItemsU3Ed__64_t79EF64E0C5CD7E3CEA0EBBA0C7F85EBC2AFD75E0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllItemsU3Ed__64_t79EF64E0C5CD7E3CEA0EBBA0C7F85EBC2AFD75E0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllItemsU3Ed__64_t79EF64E0C5CD7E3CEA0EBBA0C7F85EBC2AFD75E0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllItemsU3Ed__64_t79EF64E0C5CD7E3CEA0EBBA0C7F85EBC2AFD75E0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllItemsU3Ed__64_t79EF64E0C5CD7E3CEA0EBBA0C7F85EBC2AFD75E0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__21
struct U3Cget_stylesheetsU3Ed__21_tC629F509A26302EA08AF0252AB9090F9FCFFF999_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_stylesheetsU3Ed__21_tC629F509A26302EA08AF0252AB9090F9FCFFF999_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3Cget_stylesheetsU3Ed__21_tC629F509A26302EA08AF0252AB9090F9FCFFF999_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_stylesheetsU3Ed__21_tC629F509A26302EA08AF0252AB9090F9FCFFF999_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_stylesheetsU3Ed__21_tC629F509A26302EA08AF0252AB9090F9FCFFF999(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_stylesheetsU3Ed__21_tC629F509A26302EA08AF0252AB9090F9FCFFF999_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_stylesheetsU3Ed__21_tC629F509A26302EA08AF0252AB9090F9FCFFF999_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__17
struct U3Cget_templateDependenciesU3Ed__17_t5CEC9CD861CD8DC8EA7BD1A50A01728D8D7DDC30_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_templateDependenciesU3Ed__17_t5CEC9CD861CD8DC8EA7BD1A50A01728D8D7DDC30_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3Cget_templateDependenciesU3Ed__17_t5CEC9CD861CD8DC8EA7BD1A50A01728D8D7DDC30_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_templateDependenciesU3Ed__17_t5CEC9CD861CD8DC8EA7BD1A50A01728D8D7DDC30_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_templateDependenciesU3Ed__17_t5CEC9CD861CD8DC8EA7BD1A50A01728D8D7DDC30(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_templateDependenciesU3Ed__17_t5CEC9CD861CD8DC8EA7BD1A50A01728D8D7DDC30_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_templateDependenciesU3Ed__17_t5CEC9CD861CD8DC8EA7BD1A50A01728D8D7DDC30_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24
struct U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInitializeLoaderU3Ed__24_t02DE083CB86C55D65BAF82701483413204DE18C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.XRMeshSubsystem/MeshTransformList
struct MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/AppRemotingDisconnectHelper/<NotifySubsystemDestroyAndDisconnect>d__1
struct U3CNotifySubsystemDestroyAndDisconnectU3Ed__1_t809D85ECC0AAD1A3B9379FB2E1C818C002116B92_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CNotifySubsystemDestroyAndDisconnectU3Ed__1_t809D85ECC0AAD1A3B9379FB2E1C818C002116B92_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CNotifySubsystemDestroyAndDisconnectU3Ed__1_t809D85ECC0AAD1A3B9379FB2E1C818C002116B92_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CNotifySubsystemDestroyAndDisconnectU3Ed__1_t809D85ECC0AAD1A3B9379FB2E1C818C002116B92_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CNotifySubsystemDestroyAndDisconnectU3Ed__1_t809D85ECC0AAD1A3B9379FB2E1C818C002116B92(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CNotifySubsystemDestroyAndDisconnectU3Ed__1_t809D85ECC0AAD1A3B9379FB2E1C818C002116B92_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CNotifySubsystemDestroyAndDisconnectU3Ed__1_t809D85ECC0AAD1A3B9379FB2E1C818C002116B92_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0
struct U3CReturnVoidU3Ed__0_tC064276ADDB9239FCAF4F75C4E2C11E563DFC54A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CReturnVoidU3Ed__0_tC064276ADDB9239FCAF4F75C4E2C11E563DFC54A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CReturnVoidU3Ed__0_tC064276ADDB9239FCAF4F75C4E2C11E563DFC54A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CReturnVoidU3Ed__0_tC064276ADDB9239FCAF4F75C4E2C11E563DFC54A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CReturnVoidU3Ed__0_tC064276ADDB9239FCAF4F75C4E2C11E563DFC54A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CReturnVoidU3Ed__0_tC064276ADDB9239FCAF4F75C4E2C11E563DFC54A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CReturnVoidU3Ed__0_tC064276ADDB9239FCAF4F75C4E2C11E563DFC54A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24
struct U3CGetBaseLayoutsU3Ed__24_tFACFE5E75EF61B27C631E4AAF81E6C3642719012_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetBaseLayoutsU3Ed__24_tFACFE5E75EF61B27C631E4AAF81E6C3642719012_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CGetBaseLayoutsU3Ed__24_tFACFE5E75EF61B27C631E4AAF81E6C3642719012_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetBaseLayoutsU3Ed__24_tFACFE5E75EF61B27C631E4AAF81E6C3642719012_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetBaseLayoutsU3Ed__24_tFACFE5E75EF61B27C631E4AAF81E6C3642719012(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetBaseLayoutsU3Ed__24_tFACFE5E75EF61B27C631E4AAF81E6C3642719012_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetBaseLayoutsU3Ed__24_tFACFE5E75EF61B27C631E4AAF81E6C3642719012_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t12372C0811581ED8FA3477994D9F8D6EF973A0AD_ComCallableWrapper(obj));
}
