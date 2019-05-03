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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// GLTF.Schema.Asset
struct Asset_t9F47D7EBF7C7A0E0E34A49015825EC681E86A13B;
// GLTF.Schema.Buffer
struct Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1;
// GLTF.Schema.BufferId
struct BufferId_tF3A65B2849C2735DE60F2713377E45EC7FDD1AF5;
// GLTF.Schema.BufferViewId
struct BufferViewId_t01B5D716B4F103B8BE52472F6C13EAB0E3B08FED;
// GLTF.Schema.Buffer[]
struct BufferU5BU5D_t8C85B3727E19D8B94B4DDBCF194F32AA2B2F9725;
// GLTF.Schema.DefaultExtensionFactory
struct DefaultExtensionFactory_tFD3877D8E0490F0712331FC335F1672022FC5233;
// GLTF.Schema.ExtTextureTransformExtensionFactory
struct ExtTextureTransformExtensionFactory_t63EDA4A90B79FFBF850B2A95A1788B0BCE624971;
// GLTF.Schema.GLTFRoot
struct GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9;
// GLTF.Schema.Image
struct Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5;
// GLTF.Schema.Image[]
struct ImageU5BU5D_tDC53ECE987AB5FB7EF96236F4C19306764611058;
// GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtensionFactory
struct KHR_materials_pbrSpecularGlossinessExtensionFactory_tE48D006511C42CF2F206ACC95997E46F104F10FA;
// GLTF.Schema.Material
struct Material_t28B08074BADED0B344817F94C2E0C05B4B6C004C;
// GLTF.Schema.Material[]
struct MaterialU5BU5D_tC4068ACB6F512A0E31142EE8386E3369683C7192;
// GLTF.Schema.Mesh[]
struct MeshU5BU5D_tB302CC0B1E9FC76D304BA5CFDDB617BA3E5B3621;
// GLTF.Schema.Scene
struct Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369;
// GLTF.Schema.SceneId
struct SceneId_t1300C04D11A0CD17A0E564F1712D075DC0BE10D6;
// GLTF.Schema.Scene[]
struct SceneU5BU5D_tEE3CB4144C7E7685F54960EFBE0DA415130FA364;
// GLTF.Schema.Texture[]
struct TextureU5BU5D_t071430C03EA989171F527C5DDCBF6499F13A51A5;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// Newtonsoft.Json.Linq.JToken
struct JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityGLTF.Cache.BufferCacheData>[]
struct EntryU5BU5D_tC956F9BAE2DC50AC78E0E23BDA1A6AE3EBA9AD72;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct KeyCollection_tA05826D4092AE93BA384C76B3998B32D3F15053E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct ValueCollection_t5043CB4A355FEF6A5315D6DE63B697C8685B59CD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.ExtensionFactory>
struct Dictionary_2_t4322B786466B321D9BEA31A66FB5957B4C302D7F;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension>
struct Dictionary_2_tC1F0B4BC506FA9194FFFC084DA2E8A0890E0D9A5;
// System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>
struct Dictionary_2_t5B24C6E217140002CDF736EE48940360E16536BA;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7;
// System.Collections.Generic.List`1<GLTF.Schema.Accessor>
struct List_1_tDE3FE839DCA30BA647BB65188C0151403AE97745;
// System.Collections.Generic.List`1<GLTF.Schema.Animation>
struct List_1_t2A57C1AB39828A1BCB17F4632E561FB4CE9033A1;
// System.Collections.Generic.List`1<GLTF.Schema.Buffer>
struct List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7;
// System.Collections.Generic.List`1<GLTF.Schema.BufferView>
struct List_1_t920F592F024F92186F184298BB29A5C06A13AACB;
// System.Collections.Generic.List`1<GLTF.Schema.Camera>
struct List_1_t2C9DA2333D1CCF677B709860BB185EA84EFF2FFE;
// System.Collections.Generic.List`1<GLTF.Schema.Image>
struct List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476;
// System.Collections.Generic.List`1<GLTF.Schema.Material>
struct List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C;
// System.Collections.Generic.List`1<GLTF.Schema.Mesh>
struct List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862;
// System.Collections.Generic.List`1<GLTF.Schema.Node>
struct List_1_t0413270DDF226953E9A9F3AC7F3ECCE4B77CD818;
// System.Collections.Generic.List`1<GLTF.Schema.NodeId>
struct List_1_t2D94F9C74DBC450648D6E3DC524ECAB46A8C527A;
// System.Collections.Generic.List`1<GLTF.Schema.Sampler>
struct List_1_tE8DE9C475A0D19A517E176ED8E349A9C619F4142;
// System.Collections.Generic.List`1<GLTF.Schema.Scene>
struct List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47;
// System.Collections.Generic.List`1<GLTF.Schema.Skin>
struct List_1_t7A955604EAF725DAE4D29E30EDE06AA6FC293E4A;
// System.Collections.Generic.List`1<GLTF.Schema.Texture>
struct List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]>
struct List_1_t4D802D9C6C51A3AA3655E73CDF4DD3002C3355E6;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.RegularExpressions.Capture
struct Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB;
// System.Text.RegularExpressions.Group
struct Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443;
// System.Text.RegularExpressions.Match
struct Match_tE447871AB59EED3642F31EB9559D162C2977EBB5;
// System.Text.RegularExpressions.Regex
struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9;
// UnityEngine.Texture[]
struct TextureU5BU5D_t369245C4C7FE47127D6B8986B5F6000C3EE4554B;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityGLTF.AsyncAction
struct AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004;
// UnityGLTF.Cache.AssetCache
struct AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350;
// UnityGLTF.Cache.BufferCacheData
struct BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D;
// UnityGLTF.Cache.MaterialCacheData[]
struct MaterialCacheDataU5BU5D_t5B04037660F1E2FB1B1793AD1EDAED07BD71F773;
// UnityGLTF.GLTFSceneImporter
struct GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854;
// UnityGLTF.GLTFSceneImporter/<ImportScene>d__22
struct U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481;
// UnityGLTF.GLTFSceneImporter/<Load>d__21
struct U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA;
// UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35
struct U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81;
// UnityGLTF.GLTFSceneImporter/<LoadImage>d__34
struct U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43;
// UnityGLTF.WebRequestException
struct WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887;

extern RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
extern RuntimeClass* AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350_il2cpp_TypeInfo_var;
extern RuntimeClass* BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
extern RuntimeClass* LoadType_tB5E16DC0498ABD228C4A9DEEF10DFC07D75055E5_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral185B3E88E68C99B8F86395F4CF26FB31FC3BDF21;
extern String_t* _stringLiteral9049EC117A0E62749B6FE66DB211B5A2D030A8EF;
extern String_t* _stringLiteralB245F58149930DBC70CF0AA7D270B51BF8AD5B2F;
extern String_t* _stringLiteralD47A4DC4181EC96A1DB0F6A1AAC71D1C187CA8AD;
extern String_t* _stringLiteralFEA45576C24B65665274E4F5667FFF9C54CB558B;
extern const RuntimeMethod* Dictionary_2_get_Item_m9EA7A1AADED24CFDFF8EA3527B74D98387D353A1_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m32536DA27E86BFB0BC1E96EE74976B5072A50909_RuntimeMethod_var;
extern const RuntimeMethod* GLTFSceneImporter_U3CImportSceneU3Eb__22_0_mE7144D0D2BF8A4E5E832B54340EF7527E982F2E0_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m0075A88FAC5FF54877F26064A3FC440347A643CF_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3836670D1262297A2BAA6D73DDF43C2E3EBB3AA6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m7C6F3156FECC2FBAB855D0884E9B2664DB1D4AAA_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m9AFBB93D3E7B049FB3CD6BE415A2DC973F547EEC_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mAF8C73D207D237CD5AC9F9AA29E87468199ACCCD_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mFF3E0A5565BF8220DDA43AE94D76C9E65418A5DD_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4523C041722892747D1ACA31649C6F3F99D37892_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m486E95C6D46E73B2081C437854B9C1584C01750A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mD005117F3EECCCCC928844CD08FD45B200BFEF7B_RuntimeMethod_var;
extern const RuntimeMethod* U3CImportSceneU3Ed__22_MoveNext_mB0F31B950E80AC9F89B089A7AD594C07B1670526_RuntimeMethod_var;
extern const RuntimeMethod* U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_mC8BF82CA41FD963BB434AD454318BE617F917AFD_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m07E15E288B9728D9845CD42455BD72E6106CA5CB_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadImageU3Ed__34_MoveNext_mF876A79A57EBE9555F988124BCDF72B6DFF06275_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m3E5770184709DEA0C75B1E0C0B4D33DD132CA60C_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadU3Ed__21_MoveNext_mE2936111ACD9FFC764953F5C66F43FCB0AE595B5_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m95DD7EFD2981FCEB273D5CFC9EC83EDFA6D28B5D_RuntimeMethod_var;
extern const uint32_t U3CImportSceneU3Ed__22_MoveNext_mB0F31B950E80AC9F89B089A7AD594C07B1670526_MetadataUsageId;
extern const uint32_t U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_mC8BF82CA41FD963BB434AD454318BE617F917AFD_MetadataUsageId;
extern const uint32_t U3CLoadBufferU3Ed__35_MoveNext_m4EDA56F907103DC5754B97B4B846B05C8C289D70_MetadataUsageId;
extern const uint32_t U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m07E15E288B9728D9845CD42455BD72E6106CA5CB_MetadataUsageId;
extern const uint32_t U3CLoadImageU3Ed__34_MoveNext_mF876A79A57EBE9555F988124BCDF72B6DFF06275_MetadataUsageId;
extern const uint32_t U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m3E5770184709DEA0C75B1E0C0B4D33DD132CA60C_MetadataUsageId;
extern const uint32_t U3CLoadU3Ed__21_MoveNext_mE2936111ACD9FFC764953F5C66F43FCB0AE595B5_MetadataUsageId;
extern const uint32_t U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m95DD7EFD2981FCEB273D5CFC9EC83EDFA6D28B5D_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m125D2328C1CD40C5F155D9352EF4EBEAB0E2AA1C_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m41F1355C062406060F9CC6F57E6C55438EF988B8_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m5E3810FE63E881AC24048409593FDEF35B95845C_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m736BEB36F432E5EC8F52B849897105FB060F13A1_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
struct Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef GLTFID_1_TDA2F9E30716B22A60411AA300585E65984D09E10_H
#define GLTFID_1_TDA2F9E30716B22A60411AA300585E65984D09E10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Buffer>
struct  GLTFId_1_tDA2F9E30716B22A60411AA300585E65984D09E10  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_tDA2F9E30716B22A60411AA300585E65984D09E10, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_tDA2F9E30716B22A60411AA300585E65984D09E10, ___Root_1)); }
	inline GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_TDA2F9E30716B22A60411AA300585E65984D09E10_H
#ifndef GLTFID_1_TD5EC9923CF76B3001CF592D76612335B716E8E02_H
#define GLTFID_1_TD5EC9923CF76B3001CF592D76612335B716E8E02_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>
struct  GLTFId_1_tD5EC9923CF76B3001CF592D76612335B716E8E02  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_tD5EC9923CF76B3001CF592D76612335B716E8E02, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_tD5EC9923CF76B3001CF592D76612335B716E8E02, ___Root_1)); }
	inline GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_TD5EC9923CF76B3001CF592D76612335B716E8E02_H
#ifndef GLTFPROPERTY_T858F374B0F9593C5E2563014A716BA318AE97C8A_H
#define GLTFPROPERTY_T858F374B0F9593C5E2563014A716BA318AE97C8A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFProperty
struct  GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension> GLTF.Schema.GLTFProperty::Extensions
	Dictionary_2_tC1F0B4BC506FA9194FFFC084DA2E8A0890E0D9A5 * ___Extensions_4;
	// Newtonsoft.Json.Linq.JToken GLTF.Schema.GLTFProperty::Extras
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ___Extras_5;

public:
	inline static int32_t get_offset_of_Extensions_4() { return static_cast<int32_t>(offsetof(GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A, ___Extensions_4)); }
	inline Dictionary_2_tC1F0B4BC506FA9194FFFC084DA2E8A0890E0D9A5 * get_Extensions_4() const { return ___Extensions_4; }
	inline Dictionary_2_tC1F0B4BC506FA9194FFFC084DA2E8A0890E0D9A5 ** get_address_of_Extensions_4() { return &___Extensions_4; }
	inline void set_Extensions_4(Dictionary_2_tC1F0B4BC506FA9194FFFC084DA2E8A0890E0D9A5 * value)
	{
		___Extensions_4 = value;
		Il2CppCodeGenWriteBarrier((&___Extensions_4), value);
	}

	inline static int32_t get_offset_of_Extras_5() { return static_cast<int32_t>(offsetof(GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A, ___Extras_5)); }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * get_Extras_5() const { return ___Extras_5; }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 ** get_address_of_Extras_5() { return &___Extras_5; }
	inline void set_Extras_5(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * value)
	{
		___Extras_5 = value;
		Il2CppCodeGenWriteBarrier((&___Extras_5), value);
	}
};

struct GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.ExtensionFactory> GLTF.Schema.GLTFProperty::_extensionRegistry
	Dictionary_2_t4322B786466B321D9BEA31A66FB5957B4C302D7F * ____extensionRegistry_0;
	// GLTF.Schema.DefaultExtensionFactory GLTF.Schema.GLTFProperty::_defaultExtensionFactory
	DefaultExtensionFactory_tFD3877D8E0490F0712331FC335F1672022FC5233 * ____defaultExtensionFactory_1;
	// GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtensionFactory GLTF.Schema.GLTFProperty::_KHRExtensionFactory
	KHR_materials_pbrSpecularGlossinessExtensionFactory_tE48D006511C42CF2F206ACC95997E46F104F10FA * ____KHRExtensionFactory_2;
	// GLTF.Schema.ExtTextureTransformExtensionFactory GLTF.Schema.GLTFProperty::_TexTransformFactory
	ExtTextureTransformExtensionFactory_t63EDA4A90B79FFBF850B2A95A1788B0BCE624971 * ____TexTransformFactory_3;

public:
	inline static int32_t get_offset_of__extensionRegistry_0() { return static_cast<int32_t>(offsetof(GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A_StaticFields, ____extensionRegistry_0)); }
	inline Dictionary_2_t4322B786466B321D9BEA31A66FB5957B4C302D7F * get__extensionRegistry_0() const { return ____extensionRegistry_0; }
	inline Dictionary_2_t4322B786466B321D9BEA31A66FB5957B4C302D7F ** get_address_of__extensionRegistry_0() { return &____extensionRegistry_0; }
	inline void set__extensionRegistry_0(Dictionary_2_t4322B786466B321D9BEA31A66FB5957B4C302D7F * value)
	{
		____extensionRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((&____extensionRegistry_0), value);
	}

	inline static int32_t get_offset_of__defaultExtensionFactory_1() { return static_cast<int32_t>(offsetof(GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A_StaticFields, ____defaultExtensionFactory_1)); }
	inline DefaultExtensionFactory_tFD3877D8E0490F0712331FC335F1672022FC5233 * get__defaultExtensionFactory_1() const { return ____defaultExtensionFactory_1; }
	inline DefaultExtensionFactory_tFD3877D8E0490F0712331FC335F1672022FC5233 ** get_address_of__defaultExtensionFactory_1() { return &____defaultExtensionFactory_1; }
	inline void set__defaultExtensionFactory_1(DefaultExtensionFactory_tFD3877D8E0490F0712331FC335F1672022FC5233 * value)
	{
		____defaultExtensionFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultExtensionFactory_1), value);
	}

	inline static int32_t get_offset_of__KHRExtensionFactory_2() { return static_cast<int32_t>(offsetof(GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A_StaticFields, ____KHRExtensionFactory_2)); }
	inline KHR_materials_pbrSpecularGlossinessExtensionFactory_tE48D006511C42CF2F206ACC95997E46F104F10FA * get__KHRExtensionFactory_2() const { return ____KHRExtensionFactory_2; }
	inline KHR_materials_pbrSpecularGlossinessExtensionFactory_tE48D006511C42CF2F206ACC95997E46F104F10FA ** get_address_of__KHRExtensionFactory_2() { return &____KHRExtensionFactory_2; }
	inline void set__KHRExtensionFactory_2(KHR_materials_pbrSpecularGlossinessExtensionFactory_tE48D006511C42CF2F206ACC95997E46F104F10FA * value)
	{
		____KHRExtensionFactory_2 = value;
		Il2CppCodeGenWriteBarrier((&____KHRExtensionFactory_2), value);
	}

	inline static int32_t get_offset_of__TexTransformFactory_3() { return static_cast<int32_t>(offsetof(GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A_StaticFields, ____TexTransformFactory_3)); }
	inline ExtTextureTransformExtensionFactory_t63EDA4A90B79FFBF850B2A95A1788B0BCE624971 * get__TexTransformFactory_3() const { return ____TexTransformFactory_3; }
	inline ExtTextureTransformExtensionFactory_t63EDA4A90B79FFBF850B2A95A1788B0BCE624971 ** get_address_of__TexTransformFactory_3() { return &____TexTransformFactory_3; }
	inline void set__TexTransformFactory_3(ExtTextureTransformExtensionFactory_t63EDA4A90B79FFBF850B2A95A1788B0BCE624971 * value)
	{
		____TexTransformFactory_3 = value;
		Il2CppCodeGenWriteBarrier((&____TexTransformFactory_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFPROPERTY_T858F374B0F9593C5E2563014A716BA318AE97C8A_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T5B800EE700D413BCA39B405BC72843D604E5CDEB_H
#define DICTIONARY_2_T5B800EE700D413BCA39B405BC72843D604E5CDEB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct  Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC956F9BAE2DC50AC78E0E23BDA1A6AE3EBA9AD72* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA05826D4092AE93BA384C76B3998B32D3F15053E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5043CB4A355FEF6A5315D6DE63B697C8685B59CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ___entries_1)); }
	inline EntryU5BU5D_tC956F9BAE2DC50AC78E0E23BDA1A6AE3EBA9AD72* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC956F9BAE2DC50AC78E0E23BDA1A6AE3EBA9AD72** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC956F9BAE2DC50AC78E0E23BDA1A6AE3EBA9AD72* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ___keys_7)); }
	inline KeyCollection_tA05826D4092AE93BA384C76B3998B32D3F15053E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA05826D4092AE93BA384C76B3998B32D3F15053E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA05826D4092AE93BA384C76B3998B32D3F15053E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ___values_8)); }
	inline ValueCollection_t5043CB4A355FEF6A5315D6DE63B697C8685B59CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5043CB4A355FEF6A5315D6DE63B697C8685B59CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5043CB4A355FEF6A5315D6DE63B697C8685B59CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T5B800EE700D413BCA39B405BC72843D604E5CDEB_H
#ifndef LIST_1_TBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7_H
#define LIST_1_TBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Buffer>
struct  List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BufferU5BU5D_t8C85B3727E19D8B94B4DDBCF194F32AA2B2F9725* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7, ____items_1)); }
	inline BufferU5BU5D_t8C85B3727E19D8B94B4DDBCF194F32AA2B2F9725* get__items_1() const { return ____items_1; }
	inline BufferU5BU5D_t8C85B3727E19D8B94B4DDBCF194F32AA2B2F9725** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BufferU5BU5D_t8C85B3727E19D8B94B4DDBCF194F32AA2B2F9725* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BufferU5BU5D_t8C85B3727E19D8B94B4DDBCF194F32AA2B2F9725* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7_StaticFields, ____emptyArray_5)); }
	inline BufferU5BU5D_t8C85B3727E19D8B94B4DDBCF194F32AA2B2F9725* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BufferU5BU5D_t8C85B3727E19D8B94B4DDBCF194F32AA2B2F9725** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BufferU5BU5D_t8C85B3727E19D8B94B4DDBCF194F32AA2B2F9725* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7_H
#ifndef LIST_1_TA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476_H
#define LIST_1_TA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Image>
struct  List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ImageU5BU5D_tDC53ECE987AB5FB7EF96236F4C19306764611058* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476, ____items_1)); }
	inline ImageU5BU5D_tDC53ECE987AB5FB7EF96236F4C19306764611058* get__items_1() const { return ____items_1; }
	inline ImageU5BU5D_tDC53ECE987AB5FB7EF96236F4C19306764611058** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ImageU5BU5D_tDC53ECE987AB5FB7EF96236F4C19306764611058* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ImageU5BU5D_tDC53ECE987AB5FB7EF96236F4C19306764611058* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476_StaticFields, ____emptyArray_5)); }
	inline ImageU5BU5D_tDC53ECE987AB5FB7EF96236F4C19306764611058* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ImageU5BU5D_tDC53ECE987AB5FB7EF96236F4C19306764611058** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ImageU5BU5D_tDC53ECE987AB5FB7EF96236F4C19306764611058* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476_H
#ifndef LIST_1_T33FE7BBC7658910CAE47838A695A4058E56D328C_H
#define LIST_1_T33FE7BBC7658910CAE47838A695A4058E56D328C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Material>
struct  List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_tC4068ACB6F512A0E31142EE8386E3369683C7192* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C, ____items_1)); }
	inline MaterialU5BU5D_tC4068ACB6F512A0E31142EE8386E3369683C7192* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_tC4068ACB6F512A0E31142EE8386E3369683C7192** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_tC4068ACB6F512A0E31142EE8386E3369683C7192* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_tC4068ACB6F512A0E31142EE8386E3369683C7192* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_tC4068ACB6F512A0E31142EE8386E3369683C7192* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_tC4068ACB6F512A0E31142EE8386E3369683C7192** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_tC4068ACB6F512A0E31142EE8386E3369683C7192* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T33FE7BBC7658910CAE47838A695A4058E56D328C_H
#ifndef LIST_1_TBC5EF5570024CFC55F93B09DCA699D74E80D8862_H
#define LIST_1_TBC5EF5570024CFC55F93B09DCA699D74E80D8862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Mesh>
struct  List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshU5BU5D_tB302CC0B1E9FC76D304BA5CFDDB617BA3E5B3621* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862, ____items_1)); }
	inline MeshU5BU5D_tB302CC0B1E9FC76D304BA5CFDDB617BA3E5B3621* get__items_1() const { return ____items_1; }
	inline MeshU5BU5D_tB302CC0B1E9FC76D304BA5CFDDB617BA3E5B3621** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshU5BU5D_tB302CC0B1E9FC76D304BA5CFDDB617BA3E5B3621* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshU5BU5D_tB302CC0B1E9FC76D304BA5CFDDB617BA3E5B3621* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862_StaticFields, ____emptyArray_5)); }
	inline MeshU5BU5D_tB302CC0B1E9FC76D304BA5CFDDB617BA3E5B3621* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshU5BU5D_tB302CC0B1E9FC76D304BA5CFDDB617BA3E5B3621** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshU5BU5D_tB302CC0B1E9FC76D304BA5CFDDB617BA3E5B3621* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TBC5EF5570024CFC55F93B09DCA699D74E80D8862_H
#ifndef LIST_1_TE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47_H
#define LIST_1_TE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Scene>
struct  List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneU5BU5D_tEE3CB4144C7E7685F54960EFBE0DA415130FA364* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47, ____items_1)); }
	inline SceneU5BU5D_tEE3CB4144C7E7685F54960EFBE0DA415130FA364* get__items_1() const { return ____items_1; }
	inline SceneU5BU5D_tEE3CB4144C7E7685F54960EFBE0DA415130FA364** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneU5BU5D_tEE3CB4144C7E7685F54960EFBE0DA415130FA364* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneU5BU5D_tEE3CB4144C7E7685F54960EFBE0DA415130FA364* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47_StaticFields, ____emptyArray_5)); }
	inline SceneU5BU5D_tEE3CB4144C7E7685F54960EFBE0DA415130FA364* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneU5BU5D_tEE3CB4144C7E7685F54960EFBE0DA415130FA364** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneU5BU5D_tEE3CB4144C7E7685F54960EFBE0DA415130FA364* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47_H
#ifndef LIST_1_TB98E203BA36A411A758EBD5BC9440DA1EFA30BAE_H
#define LIST_1_TB98E203BA36A411A758EBD5BC9440DA1EFA30BAE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Texture>
struct  List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextureU5BU5D_t071430C03EA989171F527C5DDCBF6499F13A51A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE, ____items_1)); }
	inline TextureU5BU5D_t071430C03EA989171F527C5DDCBF6499F13A51A5* get__items_1() const { return ____items_1; }
	inline TextureU5BU5D_t071430C03EA989171F527C5DDCBF6499F13A51A5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextureU5BU5D_t071430C03EA989171F527C5DDCBF6499F13A51A5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextureU5BU5D_t071430C03EA989171F527C5DDCBF6499F13A51A5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE_StaticFields, ____emptyArray_5)); }
	inline TextureU5BU5D_t071430C03EA989171F527C5DDCBF6499F13A51A5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextureU5BU5D_t071430C03EA989171F527C5DDCBF6499F13A51A5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextureU5BU5D_t071430C03EA989171F527C5DDCBF6499F13A51A5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TB98E203BA36A411A758EBD5BC9440DA1EFA30BAE_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CAPTURE_TF4475248CCF3EFF914844BE2C993FC609D41DB73_H
#define CAPTURE_TF4475248CCF3EFF914844BE2C993FC609D41DB73_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct  Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((&____text_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURE_TF4475248CCF3EFF914844BE2C993FC609D41DB73_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef ASYNCACTION_TE7D07C04ED3D92835AF434A9816D15AA7C07C004_H
#define ASYNCACTION_TE7D07C04ED3D92835AF434A9816D15AA7C07C004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.AsyncAction
struct  AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004  : public RuntimeObject
{
public:
	// System.Boolean UnityGLTF.AsyncAction::_workerThreadRunning
	bool ____workerThreadRunning_0;
	// System.Exception UnityGLTF.AsyncAction::_savedException
	Exception_t * ____savedException_1;

public:
	inline static int32_t get_offset_of__workerThreadRunning_0() { return static_cast<int32_t>(offsetof(AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004, ____workerThreadRunning_0)); }
	inline bool get__workerThreadRunning_0() const { return ____workerThreadRunning_0; }
	inline bool* get_address_of__workerThreadRunning_0() { return &____workerThreadRunning_0; }
	inline void set__workerThreadRunning_0(bool value)
	{
		____workerThreadRunning_0 = value;
	}

	inline static int32_t get_offset_of__savedException_1() { return static_cast<int32_t>(offsetof(AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004, ____savedException_1)); }
	inline Exception_t * get__savedException_1() const { return ____savedException_1; }
	inline Exception_t ** get_address_of__savedException_1() { return &____savedException_1; }
	inline void set__savedException_1(Exception_t * value)
	{
		____savedException_1 = value;
		Il2CppCodeGenWriteBarrier((&____savedException_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCACTION_TE7D07C04ED3D92835AF434A9816D15AA7C07C004_H
#ifndef ASSETCACHE_T88E90B7130D52BEA080DAD5B41B03AE936D55350_H
#define ASSETCACHE_T88E90B7130D52BEA080DAD5B41B03AE936D55350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.Cache.AssetCache
struct  AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D[] UnityGLTF.Cache.AssetCache::<ImageCache>k__BackingField
	Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* ___U3CImageCacheU3Ek__BackingField_0;
	// UnityEngine.Texture[] UnityGLTF.Cache.AssetCache::<TextureCache>k__BackingField
	TextureU5BU5D_t369245C4C7FE47127D6B8986B5F6000C3EE4554B* ___U3CTextureCacheU3Ek__BackingField_1;
	// UnityGLTF.Cache.MaterialCacheData[] UnityGLTF.Cache.AssetCache::<MaterialCache>k__BackingField
	MaterialCacheDataU5BU5D_t5B04037660F1E2FB1B1793AD1EDAED07BD71F773* ___U3CMaterialCacheU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData> UnityGLTF.Cache.AssetCache::<BufferCache>k__BackingField
	Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB * ___U3CBufferCacheU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]> UnityGLTF.Cache.AssetCache::<MeshCache>k__BackingField
	List_1_t4D802D9C6C51A3AA3655E73CDF4DD3002C3355E6 * ___U3CMeshCacheU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CImageCacheU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350, ___U3CImageCacheU3Ek__BackingField_0)); }
	inline Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* get_U3CImageCacheU3Ek__BackingField_0() const { return ___U3CImageCacheU3Ek__BackingField_0; }
	inline Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9** get_address_of_U3CImageCacheU3Ek__BackingField_0() { return &___U3CImageCacheU3Ek__BackingField_0; }
	inline void set_U3CImageCacheU3Ek__BackingField_0(Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* value)
	{
		___U3CImageCacheU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CImageCacheU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTextureCacheU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350, ___U3CTextureCacheU3Ek__BackingField_1)); }
	inline TextureU5BU5D_t369245C4C7FE47127D6B8986B5F6000C3EE4554B* get_U3CTextureCacheU3Ek__BackingField_1() const { return ___U3CTextureCacheU3Ek__BackingField_1; }
	inline TextureU5BU5D_t369245C4C7FE47127D6B8986B5F6000C3EE4554B** get_address_of_U3CTextureCacheU3Ek__BackingField_1() { return &___U3CTextureCacheU3Ek__BackingField_1; }
	inline void set_U3CTextureCacheU3Ek__BackingField_1(TextureU5BU5D_t369245C4C7FE47127D6B8986B5F6000C3EE4554B* value)
	{
		___U3CTextureCacheU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextureCacheU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CMaterialCacheU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350, ___U3CMaterialCacheU3Ek__BackingField_2)); }
	inline MaterialCacheDataU5BU5D_t5B04037660F1E2FB1B1793AD1EDAED07BD71F773* get_U3CMaterialCacheU3Ek__BackingField_2() const { return ___U3CMaterialCacheU3Ek__BackingField_2; }
	inline MaterialCacheDataU5BU5D_t5B04037660F1E2FB1B1793AD1EDAED07BD71F773** get_address_of_U3CMaterialCacheU3Ek__BackingField_2() { return &___U3CMaterialCacheU3Ek__BackingField_2; }
	inline void set_U3CMaterialCacheU3Ek__BackingField_2(MaterialCacheDataU5BU5D_t5B04037660F1E2FB1B1793AD1EDAED07BD71F773* value)
	{
		___U3CMaterialCacheU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMaterialCacheU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBufferCacheU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350, ___U3CBufferCacheU3Ek__BackingField_3)); }
	inline Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB * get_U3CBufferCacheU3Ek__BackingField_3() const { return ___U3CBufferCacheU3Ek__BackingField_3; }
	inline Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB ** get_address_of_U3CBufferCacheU3Ek__BackingField_3() { return &___U3CBufferCacheU3Ek__BackingField_3; }
	inline void set_U3CBufferCacheU3Ek__BackingField_3(Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB * value)
	{
		___U3CBufferCacheU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBufferCacheU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CMeshCacheU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350, ___U3CMeshCacheU3Ek__BackingField_4)); }
	inline List_1_t4D802D9C6C51A3AA3655E73CDF4DD3002C3355E6 * get_U3CMeshCacheU3Ek__BackingField_4() const { return ___U3CMeshCacheU3Ek__BackingField_4; }
	inline List_1_t4D802D9C6C51A3AA3655E73CDF4DD3002C3355E6 ** get_address_of_U3CMeshCacheU3Ek__BackingField_4() { return &___U3CMeshCacheU3Ek__BackingField_4; }
	inline void set_U3CMeshCacheU3Ek__BackingField_4(List_1_t4D802D9C6C51A3AA3655E73CDF4DD3002C3355E6 * value)
	{
		___U3CMeshCacheU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMeshCacheU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETCACHE_T88E90B7130D52BEA080DAD5B41B03AE936D55350_H
#ifndef BUFFERCACHEDATA_T4013B91D6EF6FD8E4915E9B533EF479351F01F7D_H
#define BUFFERCACHEDATA_T4013B91D6EF6FD8E4915E9B533EF479351F01F7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.Cache.BufferCacheData
struct  BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D  : public RuntimeObject
{
public:
	// System.Int64 UnityGLTF.Cache.BufferCacheData::<ChunkOffset>k__BackingField
	int64_t ___U3CChunkOffsetU3Ek__BackingField_0;
	// System.IO.Stream UnityGLTF.Cache.BufferCacheData::<Stream>k__BackingField
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___U3CStreamU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CChunkOffsetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D, ___U3CChunkOffsetU3Ek__BackingField_0)); }
	inline int64_t get_U3CChunkOffsetU3Ek__BackingField_0() const { return ___U3CChunkOffsetU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CChunkOffsetU3Ek__BackingField_0() { return &___U3CChunkOffsetU3Ek__BackingField_0; }
	inline void set_U3CChunkOffsetU3Ek__BackingField_0(int64_t value)
	{
		___U3CChunkOffsetU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D, ___U3CStreamU3Ek__BackingField_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_U3CStreamU3Ek__BackingField_1() const { return ___U3CStreamU3Ek__BackingField_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_U3CStreamU3Ek__BackingField_1() { return &___U3CStreamU3Ek__BackingField_1; }
	inline void set_U3CStreamU3Ek__BackingField_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___U3CStreamU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStreamU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERCACHEDATA_T4013B91D6EF6FD8E4915E9B533EF479351F01F7D_H
#ifndef U3CIMPORTSCENEU3ED__22_T457DD2420184E90148B350108C2927A22D3D8481_H
#define U3CIMPORTSCENEU3ED__22_T457DD2420184E90148B350108C2927A22D3D8481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter_<ImportScene>d__22
struct  U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::sceneIndex
	int32_t ___sceneIndex_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::<>4__this
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * ___U3CU3E4__this_3;
	// System.Boolean UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::isMultithreaded
	bool ___isMultithreaded_4;
	// GLTF.Schema.Scene UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::<scene>5__2
	Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * ___U3CsceneU3E5__2_5;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::<i>5__3
	int32_t ___U3CiU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_sceneIndex_2() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481, ___sceneIndex_2)); }
	inline int32_t get_sceneIndex_2() const { return ___sceneIndex_2; }
	inline int32_t* get_address_of_sceneIndex_2() { return &___sceneIndex_2; }
	inline void set_sceneIndex_2(int32_t value)
	{
		___sceneIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_isMultithreaded_4() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481, ___isMultithreaded_4)); }
	inline bool get_isMultithreaded_4() const { return ___isMultithreaded_4; }
	inline bool* get_address_of_isMultithreaded_4() { return &___isMultithreaded_4; }
	inline void set_isMultithreaded_4(bool value)
	{
		___isMultithreaded_4 = value;
	}

	inline static int32_t get_offset_of_U3CsceneU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481, ___U3CsceneU3E5__2_5)); }
	inline Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * get_U3CsceneU3E5__2_5() const { return ___U3CsceneU3E5__2_5; }
	inline Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 ** get_address_of_U3CsceneU3E5__2_5() { return &___U3CsceneU3E5__2_5; }
	inline void set_U3CsceneU3E5__2_5(Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * value)
	{
		___U3CsceneU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsceneU3E5__2_5), value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481, ___U3CiU3E5__3_6)); }
	inline int32_t get_U3CiU3E5__3_6() const { return ___U3CiU3E5__3_6; }
	inline int32_t* get_address_of_U3CiU3E5__3_6() { return &___U3CiU3E5__3_6; }
	inline void set_U3CiU3E5__3_6(int32_t value)
	{
		___U3CiU3E5__3_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIMPORTSCENEU3ED__22_T457DD2420184E90148B350108C2927A22D3D8481_H
#ifndef U3CLOADU3ED__21_T1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA_H
#define U3CLOADU3ED__21_T1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter_<Load>d__21
struct  U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<Load>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter_<Load>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<Load>d__21::<>4__this
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * ___U3CU3E4__this_2;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<Load>d__21::sceneIndex
	int32_t ___sceneIndex_3;
	// System.Boolean UnityGLTF.GLTFSceneImporter_<Load>d__21::isMultithreaded
	bool ___isMultithreaded_4;
	// UnityEngine.Networking.UnityWebRequest UnityGLTF.GLTFSceneImporter_<Load>d__21::<www>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwwwU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_sceneIndex_3() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA, ___sceneIndex_3)); }
	inline int32_t get_sceneIndex_3() const { return ___sceneIndex_3; }
	inline int32_t* get_address_of_sceneIndex_3() { return &___sceneIndex_3; }
	inline void set_sceneIndex_3(int32_t value)
	{
		___sceneIndex_3 = value;
	}

	inline static int32_t get_offset_of_isMultithreaded_4() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA, ___isMultithreaded_4)); }
	inline bool get_isMultithreaded_4() const { return ___isMultithreaded_4; }
	inline bool* get_address_of_isMultithreaded_4() { return &___isMultithreaded_4; }
	inline void set_isMultithreaded_4(bool value)
	{
		___isMultithreaded_4 = value;
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA, ___U3CwwwU3E5__2_5)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwwwU3E5__2_5() const { return ___U3CwwwU3E5__2_5; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwwwU3E5__2_5() { return &___U3CwwwU3E5__2_5; }
	inline void set_U3CwwwU3E5__2_5(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwwwU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__2_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADU3ED__21_T1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA_H
#ifndef U3CLOADBUFFERU3ED__35_TD50AF4225AE15F39F7BC6E38EF79D5035FB49E81_H
#define U3CLOADBUFFERU3ED__35_TD50AF4225AE15F39F7BC6E38EF79D5035FB49E81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35
struct  U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GLTF.Schema.Buffer UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::buffer
	Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * ___buffer_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::<>4__this
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * ___U3CU3E4__this_3;
	// System.String UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::sourceUri
	String_t* ___sourceUri_4;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::bufferIndex
	int32_t ___bufferIndex_5;
	// UnityEngine.Networking.UnityWebRequest UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::<www>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwwwU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81, ___buffer_2)); }
	inline Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * get_buffer_2() const { return ___buffer_2; }
	inline Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 ** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_sourceUri_4() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81, ___sourceUri_4)); }
	inline String_t* get_sourceUri_4() const { return ___sourceUri_4; }
	inline String_t** get_address_of_sourceUri_4() { return &___sourceUri_4; }
	inline void set_sourceUri_4(String_t* value)
	{
		___sourceUri_4 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_4), value);
	}

	inline static int32_t get_offset_of_bufferIndex_5() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81, ___bufferIndex_5)); }
	inline int32_t get_bufferIndex_5() const { return ___bufferIndex_5; }
	inline int32_t* get_address_of_bufferIndex_5() { return &___bufferIndex_5; }
	inline void set_bufferIndex_5(int32_t value)
	{
		___bufferIndex_5 = value;
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81, ___U3CwwwU3E5__2_6)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwwwU3E5__2_6() const { return ___U3CwwwU3E5__2_6; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwwwU3E5__2_6() { return &___U3CwwwU3E5__2_6; }
	inline void set_U3CwwwU3E5__2_6(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwwwU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__2_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADBUFFERU3ED__35_TD50AF4225AE15F39F7BC6E38EF79D5035FB49E81_H
#ifndef U3CLOADIMAGEU3ED__34_T4DDFFEAE0716B0040D0167894397CDA61D66AF43_H
#define U3CLOADIMAGEU3ED__34_T4DDFFEAE0716B0040D0167894397CDA61D66AF43_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter_<LoadImage>d__34
struct  U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::<>4__this
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * ___U3CU3E4__this_2;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::imageID
	int32_t ___imageID_3;
	// GLTF.Schema.Image UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::image
	Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * ___image_4;
	// System.String UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::rootPath
	String_t* ___rootPath_5;
	// UnityEngine.Networking.UnityWebRequest UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::<www>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwwwU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_imageID_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43, ___imageID_3)); }
	inline int32_t get_imageID_3() const { return ___imageID_3; }
	inline int32_t* get_address_of_imageID_3() { return &___imageID_3; }
	inline void set_imageID_3(int32_t value)
	{
		___imageID_3 = value;
	}

	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43, ___image_4)); }
	inline Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * get_image_4() const { return ___image_4; }
	inline Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((&___image_4), value);
	}

	inline static int32_t get_offset_of_rootPath_5() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43, ___rootPath_5)); }
	inline String_t* get_rootPath_5() const { return ___rootPath_5; }
	inline String_t** get_address_of_rootPath_5() { return &___rootPath_5; }
	inline void set_rootPath_5(String_t* value)
	{
		___rootPath_5 = value;
		Il2CppCodeGenWriteBarrier((&___rootPath_5), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43, ___U3CwwwU3E5__2_6)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwwwU3E5__2_6() const { return ___U3CwwwU3E5__2_6; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwwwU3E5__2_6() { return &___U3CwwwU3E5__2_6; }
	inline void set_U3CwwwU3E5__2_6(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwwwU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__2_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADIMAGEU3ED__34_T4DDFFEAE0716B0040D0167894397CDA61D66AF43_H
#ifndef BUFFERID_TF3A65B2849C2735DE60F2713377E45EC7FDD1AF5_H
#define BUFFERID_TF3A65B2849C2735DE60F2713377E45EC7FDD1AF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferId
struct  BufferId_tF3A65B2849C2735DE60F2713377E45EC7FDD1AF5  : public GLTFId_1_tDA2F9E30716B22A60411AA300585E65984D09E10
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERID_TF3A65B2849C2735DE60F2713377E45EC7FDD1AF5_H
#ifndef BUFFERVIEWID_T01B5D716B4F103B8BE52472F6C13EAB0E3B08FED_H
#define BUFFERVIEWID_T01B5D716B4F103B8BE52472F6C13EAB0E3B08FED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferViewId
struct  BufferViewId_t01B5D716B4F103B8BE52472F6C13EAB0E3B08FED  : public GLTFId_1_tD5EC9923CF76B3001CF592D76612335B716E8E02
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERVIEWID_T01B5D716B4F103B8BE52472F6C13EAB0E3B08FED_H
#ifndef GLTFCHILDOFROOTPROPERTY_T1935077ACF3DB61B605AE7F61B8539173FD05E21_H
#define GLTFCHILDOFROOTPROPERTY_T1935077ACF3DB61B605AE7F61B8539173FD05E21_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFChildOfRootProperty
struct  GLTFChildOfRootProperty_t1935077ACF3DB61B605AE7F61B8539173FD05E21  : public GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A
{
public:
	// System.String GLTF.Schema.GLTFChildOfRootProperty::Name
	String_t* ___Name_6;

public:
	inline static int32_t get_offset_of_Name_6() { return static_cast<int32_t>(offsetof(GLTFChildOfRootProperty_t1935077ACF3DB61B605AE7F61B8539173FD05E21, ___Name_6)); }
	inline String_t* get_Name_6() const { return ___Name_6; }
	inline String_t** get_address_of_Name_6() { return &___Name_6; }
	inline void set_Name_6(String_t* value)
	{
		___Name_6 = value;
		Il2CppCodeGenWriteBarrier((&___Name_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFCHILDOFROOTPROPERTY_T1935077ACF3DB61B605AE7F61B8539173FD05E21_H
#ifndef GLTFROOT_T68405B6042BF53F4527479929DBA09B44E7B4AB9_H
#define GLTFROOT_T68405B6042BF53F4527479929DBA09B44E7B4AB9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFRoot
struct  GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9  : public GLTFProperty_t858F374B0F9593C5E2563014A716BA318AE97C8A
{
public:
	// System.Collections.Generic.List`1<System.String> GLTF.Schema.GLTFRoot::ExtensionsUsed
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___ExtensionsUsed_6;
	// System.Collections.Generic.List`1<System.String> GLTF.Schema.GLTFRoot::ExtensionsRequired
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___ExtensionsRequired_7;
	// System.Collections.Generic.List`1<GLTF.Schema.Accessor> GLTF.Schema.GLTFRoot::Accessors
	List_1_tDE3FE839DCA30BA647BB65188C0151403AE97745 * ___Accessors_8;
	// System.Collections.Generic.List`1<GLTF.Schema.Animation> GLTF.Schema.GLTFRoot::Animations
	List_1_t2A57C1AB39828A1BCB17F4632E561FB4CE9033A1 * ___Animations_9;
	// GLTF.Schema.Asset GLTF.Schema.GLTFRoot::Asset
	Asset_t9F47D7EBF7C7A0E0E34A49015825EC681E86A13B * ___Asset_10;
	// System.Collections.Generic.List`1<GLTF.Schema.Buffer> GLTF.Schema.GLTFRoot::Buffers
	List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * ___Buffers_11;
	// System.Collections.Generic.List`1<GLTF.Schema.BufferView> GLTF.Schema.GLTFRoot::BufferViews
	List_1_t920F592F024F92186F184298BB29A5C06A13AACB * ___BufferViews_12;
	// System.Collections.Generic.List`1<GLTF.Schema.Camera> GLTF.Schema.GLTFRoot::Cameras
	List_1_t2C9DA2333D1CCF677B709860BB185EA84EFF2FFE * ___Cameras_13;
	// System.Collections.Generic.List`1<GLTF.Schema.Image> GLTF.Schema.GLTFRoot::Images
	List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * ___Images_14;
	// System.Collections.Generic.List`1<GLTF.Schema.Material> GLTF.Schema.GLTFRoot::Materials
	List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C * ___Materials_15;
	// System.Collections.Generic.List`1<GLTF.Schema.Mesh> GLTF.Schema.GLTFRoot::Meshes
	List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862 * ___Meshes_16;
	// System.Collections.Generic.List`1<GLTF.Schema.Node> GLTF.Schema.GLTFRoot::Nodes
	List_1_t0413270DDF226953E9A9F3AC7F3ECCE4B77CD818 * ___Nodes_17;
	// System.Collections.Generic.List`1<GLTF.Schema.Sampler> GLTF.Schema.GLTFRoot::Samplers
	List_1_tE8DE9C475A0D19A517E176ED8E349A9C619F4142 * ___Samplers_18;
	// GLTF.Schema.SceneId GLTF.Schema.GLTFRoot::Scene
	SceneId_t1300C04D11A0CD17A0E564F1712D075DC0BE10D6 * ___Scene_19;
	// System.Collections.Generic.List`1<GLTF.Schema.Scene> GLTF.Schema.GLTFRoot::Scenes
	List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 * ___Scenes_20;
	// System.Collections.Generic.List`1<GLTF.Schema.Skin> GLTF.Schema.GLTFRoot::Skins
	List_1_t7A955604EAF725DAE4D29E30EDE06AA6FC293E4A * ___Skins_21;
	// System.Collections.Generic.List`1<GLTF.Schema.Texture> GLTF.Schema.GLTFRoot::Textures
	List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE * ___Textures_22;

public:
	inline static int32_t get_offset_of_ExtensionsUsed_6() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___ExtensionsUsed_6)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_ExtensionsUsed_6() const { return ___ExtensionsUsed_6; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_ExtensionsUsed_6() { return &___ExtensionsUsed_6; }
	inline void set_ExtensionsUsed_6(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___ExtensionsUsed_6 = value;
		Il2CppCodeGenWriteBarrier((&___ExtensionsUsed_6), value);
	}

	inline static int32_t get_offset_of_ExtensionsRequired_7() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___ExtensionsRequired_7)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_ExtensionsRequired_7() const { return ___ExtensionsRequired_7; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_ExtensionsRequired_7() { return &___ExtensionsRequired_7; }
	inline void set_ExtensionsRequired_7(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___ExtensionsRequired_7 = value;
		Il2CppCodeGenWriteBarrier((&___ExtensionsRequired_7), value);
	}

	inline static int32_t get_offset_of_Accessors_8() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Accessors_8)); }
	inline List_1_tDE3FE839DCA30BA647BB65188C0151403AE97745 * get_Accessors_8() const { return ___Accessors_8; }
	inline List_1_tDE3FE839DCA30BA647BB65188C0151403AE97745 ** get_address_of_Accessors_8() { return &___Accessors_8; }
	inline void set_Accessors_8(List_1_tDE3FE839DCA30BA647BB65188C0151403AE97745 * value)
	{
		___Accessors_8 = value;
		Il2CppCodeGenWriteBarrier((&___Accessors_8), value);
	}

	inline static int32_t get_offset_of_Animations_9() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Animations_9)); }
	inline List_1_t2A57C1AB39828A1BCB17F4632E561FB4CE9033A1 * get_Animations_9() const { return ___Animations_9; }
	inline List_1_t2A57C1AB39828A1BCB17F4632E561FB4CE9033A1 ** get_address_of_Animations_9() { return &___Animations_9; }
	inline void set_Animations_9(List_1_t2A57C1AB39828A1BCB17F4632E561FB4CE9033A1 * value)
	{
		___Animations_9 = value;
		Il2CppCodeGenWriteBarrier((&___Animations_9), value);
	}

	inline static int32_t get_offset_of_Asset_10() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Asset_10)); }
	inline Asset_t9F47D7EBF7C7A0E0E34A49015825EC681E86A13B * get_Asset_10() const { return ___Asset_10; }
	inline Asset_t9F47D7EBF7C7A0E0E34A49015825EC681E86A13B ** get_address_of_Asset_10() { return &___Asset_10; }
	inline void set_Asset_10(Asset_t9F47D7EBF7C7A0E0E34A49015825EC681E86A13B * value)
	{
		___Asset_10 = value;
		Il2CppCodeGenWriteBarrier((&___Asset_10), value);
	}

	inline static int32_t get_offset_of_Buffers_11() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Buffers_11)); }
	inline List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * get_Buffers_11() const { return ___Buffers_11; }
	inline List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 ** get_address_of_Buffers_11() { return &___Buffers_11; }
	inline void set_Buffers_11(List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * value)
	{
		___Buffers_11 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_11), value);
	}

	inline static int32_t get_offset_of_BufferViews_12() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___BufferViews_12)); }
	inline List_1_t920F592F024F92186F184298BB29A5C06A13AACB * get_BufferViews_12() const { return ___BufferViews_12; }
	inline List_1_t920F592F024F92186F184298BB29A5C06A13AACB ** get_address_of_BufferViews_12() { return &___BufferViews_12; }
	inline void set_BufferViews_12(List_1_t920F592F024F92186F184298BB29A5C06A13AACB * value)
	{
		___BufferViews_12 = value;
		Il2CppCodeGenWriteBarrier((&___BufferViews_12), value);
	}

	inline static int32_t get_offset_of_Cameras_13() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Cameras_13)); }
	inline List_1_t2C9DA2333D1CCF677B709860BB185EA84EFF2FFE * get_Cameras_13() const { return ___Cameras_13; }
	inline List_1_t2C9DA2333D1CCF677B709860BB185EA84EFF2FFE ** get_address_of_Cameras_13() { return &___Cameras_13; }
	inline void set_Cameras_13(List_1_t2C9DA2333D1CCF677B709860BB185EA84EFF2FFE * value)
	{
		___Cameras_13 = value;
		Il2CppCodeGenWriteBarrier((&___Cameras_13), value);
	}

	inline static int32_t get_offset_of_Images_14() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Images_14)); }
	inline List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * get_Images_14() const { return ___Images_14; }
	inline List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 ** get_address_of_Images_14() { return &___Images_14; }
	inline void set_Images_14(List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * value)
	{
		___Images_14 = value;
		Il2CppCodeGenWriteBarrier((&___Images_14), value);
	}

	inline static int32_t get_offset_of_Materials_15() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Materials_15)); }
	inline List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C * get_Materials_15() const { return ___Materials_15; }
	inline List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C ** get_address_of_Materials_15() { return &___Materials_15; }
	inline void set_Materials_15(List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C * value)
	{
		___Materials_15 = value;
		Il2CppCodeGenWriteBarrier((&___Materials_15), value);
	}

	inline static int32_t get_offset_of_Meshes_16() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Meshes_16)); }
	inline List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862 * get_Meshes_16() const { return ___Meshes_16; }
	inline List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862 ** get_address_of_Meshes_16() { return &___Meshes_16; }
	inline void set_Meshes_16(List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862 * value)
	{
		___Meshes_16 = value;
		Il2CppCodeGenWriteBarrier((&___Meshes_16), value);
	}

	inline static int32_t get_offset_of_Nodes_17() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Nodes_17)); }
	inline List_1_t0413270DDF226953E9A9F3AC7F3ECCE4B77CD818 * get_Nodes_17() const { return ___Nodes_17; }
	inline List_1_t0413270DDF226953E9A9F3AC7F3ECCE4B77CD818 ** get_address_of_Nodes_17() { return &___Nodes_17; }
	inline void set_Nodes_17(List_1_t0413270DDF226953E9A9F3AC7F3ECCE4B77CD818 * value)
	{
		___Nodes_17 = value;
		Il2CppCodeGenWriteBarrier((&___Nodes_17), value);
	}

	inline static int32_t get_offset_of_Samplers_18() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Samplers_18)); }
	inline List_1_tE8DE9C475A0D19A517E176ED8E349A9C619F4142 * get_Samplers_18() const { return ___Samplers_18; }
	inline List_1_tE8DE9C475A0D19A517E176ED8E349A9C619F4142 ** get_address_of_Samplers_18() { return &___Samplers_18; }
	inline void set_Samplers_18(List_1_tE8DE9C475A0D19A517E176ED8E349A9C619F4142 * value)
	{
		___Samplers_18 = value;
		Il2CppCodeGenWriteBarrier((&___Samplers_18), value);
	}

	inline static int32_t get_offset_of_Scene_19() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Scene_19)); }
	inline SceneId_t1300C04D11A0CD17A0E564F1712D075DC0BE10D6 * get_Scene_19() const { return ___Scene_19; }
	inline SceneId_t1300C04D11A0CD17A0E564F1712D075DC0BE10D6 ** get_address_of_Scene_19() { return &___Scene_19; }
	inline void set_Scene_19(SceneId_t1300C04D11A0CD17A0E564F1712D075DC0BE10D6 * value)
	{
		___Scene_19 = value;
		Il2CppCodeGenWriteBarrier((&___Scene_19), value);
	}

	inline static int32_t get_offset_of_Scenes_20() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Scenes_20)); }
	inline List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 * get_Scenes_20() const { return ___Scenes_20; }
	inline List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 ** get_address_of_Scenes_20() { return &___Scenes_20; }
	inline void set_Scenes_20(List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 * value)
	{
		___Scenes_20 = value;
		Il2CppCodeGenWriteBarrier((&___Scenes_20), value);
	}

	inline static int32_t get_offset_of_Skins_21() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Skins_21)); }
	inline List_1_t7A955604EAF725DAE4D29E30EDE06AA6FC293E4A * get_Skins_21() const { return ___Skins_21; }
	inline List_1_t7A955604EAF725DAE4D29E30EDE06AA6FC293E4A ** get_address_of_Skins_21() { return &___Skins_21; }
	inline void set_Skins_21(List_1_t7A955604EAF725DAE4D29E30EDE06AA6FC293E4A * value)
	{
		___Skins_21 = value;
		Il2CppCodeGenWriteBarrier((&___Skins_21), value);
	}

	inline static int32_t get_offset_of_Textures_22() { return static_cast<int32_t>(offsetof(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9, ___Textures_22)); }
	inline List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE * get_Textures_22() const { return ___Textures_22; }
	inline List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE ** get_address_of_Textures_22() { return &___Textures_22; }
	inline void set_Textures_22(List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE * value)
	{
		___Textures_22 = value;
		Il2CppCodeGenWriteBarrier((&___Textures_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFROOT_T68405B6042BF53F4527479929DBA09B44E7B4AB9_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#define STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef GROUP_TB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443_H
#define GROUP_TB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443  : public Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73
{
public:
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.String System.Text.RegularExpressions.Group::_name
	String_t* ____name_6;

public:
	inline static int32_t get_offset_of__caps_4() { return static_cast<int32_t>(offsetof(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443, ____caps_4)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__caps_4() const { return ____caps_4; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__caps_4() { return &____caps_4; }
	inline void set__caps_4(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____caps_4 = value;
		Il2CppCodeGenWriteBarrier((&____caps_4), value);
	}

	inline static int32_t get_offset_of__capcount_5() { return static_cast<int32_t>(offsetof(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443, ____capcount_5)); }
	inline int32_t get__capcount_5() const { return ____capcount_5; }
	inline int32_t* get_address_of__capcount_5() { return &____capcount_5; }
	inline void set__capcount_5(int32_t value)
	{
		____capcount_5 = value;
	}

	inline static int32_t get_offset_of__name_6() { return static_cast<int32_t>(offsetof(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443, ____name_6)); }
	inline String_t* get__name_6() const { return ____name_6; }
	inline String_t** get_address_of__name_6() { return &____name_6; }
	inline void set__name_6(String_t* value)
	{
		____name_6 = value;
		Il2CppCodeGenWriteBarrier((&____name_6), value);
	}
};

struct Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::_emptygroup
	Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * ____emptygroup_3;

public:
	inline static int32_t get_offset_of__emptygroup_3() { return static_cast<int32_t>(offsetof(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443_StaticFields, ____emptygroup_3)); }
	inline Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * get__emptygroup_3() const { return ____emptygroup_3; }
	inline Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 ** get_address_of__emptygroup_3() { return &____emptygroup_3; }
	inline void set__emptygroup_3(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * value)
	{
		____emptygroup_3 = value;
		Il2CppCodeGenWriteBarrier((&____emptygroup_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_TB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef GLBSTREAM_T261F875F33704F47106C7188FBAB3CDE1145505A_H
#define GLBSTREAM_T261F875F33704F47106C7188FBAB3CDE1145505A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter_GLBStream
struct  GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A 
{
public:
	// System.IO.Stream UnityGLTF.GLTFSceneImporter_GLBStream::Stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Stream_0;
	// System.Int64 UnityGLTF.GLTFSceneImporter_GLBStream::StartPosition
	int64_t ___StartPosition_1;

public:
	inline static int32_t get_offset_of_Stream_0() { return static_cast<int32_t>(offsetof(GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A, ___Stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Stream_0() const { return ___Stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Stream_0() { return &___Stream_0; }
	inline void set_Stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___Stream_0), value);
	}

	inline static int32_t get_offset_of_StartPosition_1() { return static_cast<int32_t>(offsetof(GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A, ___StartPosition_1)); }
	inline int64_t get_StartPosition_1() const { return ___StartPosition_1; }
	inline int64_t* get_address_of_StartPosition_1() { return &___StartPosition_1; }
	inline void set_StartPosition_1(int64_t value)
	{
		___StartPosition_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityGLTF.GLTFSceneImporter/GLBStream
struct GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshaled_pinvoke
{
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Stream_0;
	int64_t ___StartPosition_1;
};
// Native definition for COM marshalling of UnityGLTF.GLTFSceneImporter/GLBStream
struct GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshaled_com
{
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Stream_0;
	int64_t ___StartPosition_1;
};
#endif // GLBSTREAM_T261F875F33704F47106C7188FBAB3CDE1145505A_H
#ifndef WEBREQUESTEXCEPTION_TFB2B03AD112281C424703E9FAC8D0B69520E7887_H
#define WEBREQUESTEXCEPTION_TFB2B03AD112281C424703E9FAC8D0B69520E7887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.WebRequestException
struct  WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTEXCEPTION_TFB2B03AD112281C424703E9FAC8D0B69520E7887_H
#ifndef BUFFER_T361DA69063E3598C66580C2651EC2661040DE0E1_H
#define BUFFER_T361DA69063E3598C66580C2651EC2661040DE0E1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Buffer
struct  Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1  : public GLTFChildOfRootProperty_t1935077ACF3DB61B605AE7F61B8539173FD05E21
{
public:
	// System.String GLTF.Schema.Buffer::Uri
	String_t* ___Uri_7;
	// System.Int32 GLTF.Schema.Buffer::ByteLength
	int32_t ___ByteLength_8;

public:
	inline static int32_t get_offset_of_Uri_7() { return static_cast<int32_t>(offsetof(Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1, ___Uri_7)); }
	inline String_t* get_Uri_7() const { return ___Uri_7; }
	inline String_t** get_address_of_Uri_7() { return &___Uri_7; }
	inline void set_Uri_7(String_t* value)
	{
		___Uri_7 = value;
		Il2CppCodeGenWriteBarrier((&___Uri_7), value);
	}

	inline static int32_t get_offset_of_ByteLength_8() { return static_cast<int32_t>(offsetof(Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1, ___ByteLength_8)); }
	inline int32_t get_ByteLength_8() const { return ___ByteLength_8; }
	inline int32_t* get_address_of_ByteLength_8() { return &___ByteLength_8; }
	inline void set_ByteLength_8(int32_t value)
	{
		___ByteLength_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T361DA69063E3598C66580C2651EC2661040DE0E1_H
#ifndef BUFFERVIEWTARGET_T7D130106FA3CC65575A5F3CC74E905EC62F7961A_H
#define BUFFERVIEWTARGET_T7D130106FA3CC65575A5F3CC74E905EC62F7961A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferViewTarget
struct  BufferViewTarget_t7D130106FA3CC65575A5F3CC74E905EC62F7961A 
{
public:
	// System.Int32 GLTF.Schema.BufferViewTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BufferViewTarget_t7D130106FA3CC65575A5F3CC74E905EC62F7961A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERVIEWTARGET_T7D130106FA3CC65575A5F3CC74E905EC62F7961A_H
#ifndef IMAGE_TEC2AF09AA24F12F221C8C03350299218B1539DD5_H
#define IMAGE_TEC2AF09AA24F12F221C8C03350299218B1539DD5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Image
struct  Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5  : public GLTFChildOfRootProperty_t1935077ACF3DB61B605AE7F61B8539173FD05E21
{
public:
	// System.String GLTF.Schema.Image::Uri
	String_t* ___Uri_7;
	// System.String GLTF.Schema.Image::MimeType
	String_t* ___MimeType_8;
	// GLTF.Schema.BufferViewId GLTF.Schema.Image::BufferView
	BufferViewId_t01B5D716B4F103B8BE52472F6C13EAB0E3B08FED * ___BufferView_9;

public:
	inline static int32_t get_offset_of_Uri_7() { return static_cast<int32_t>(offsetof(Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5, ___Uri_7)); }
	inline String_t* get_Uri_7() const { return ___Uri_7; }
	inline String_t** get_address_of_Uri_7() { return &___Uri_7; }
	inline void set_Uri_7(String_t* value)
	{
		___Uri_7 = value;
		Il2CppCodeGenWriteBarrier((&___Uri_7), value);
	}

	inline static int32_t get_offset_of_MimeType_8() { return static_cast<int32_t>(offsetof(Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5, ___MimeType_8)); }
	inline String_t* get_MimeType_8() const { return ___MimeType_8; }
	inline String_t** get_address_of_MimeType_8() { return &___MimeType_8; }
	inline void set_MimeType_8(String_t* value)
	{
		___MimeType_8 = value;
		Il2CppCodeGenWriteBarrier((&___MimeType_8), value);
	}

	inline static int32_t get_offset_of_BufferView_9() { return static_cast<int32_t>(offsetof(Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5, ___BufferView_9)); }
	inline BufferViewId_t01B5D716B4F103B8BE52472F6C13EAB0E3B08FED * get_BufferView_9() const { return ___BufferView_9; }
	inline BufferViewId_t01B5D716B4F103B8BE52472F6C13EAB0E3B08FED ** get_address_of_BufferView_9() { return &___BufferView_9; }
	inline void set_BufferView_9(BufferViewId_t01B5D716B4F103B8BE52472F6C13EAB0E3B08FED * value)
	{
		___BufferView_9 = value;
		Il2CppCodeGenWriteBarrier((&___BufferView_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_TEC2AF09AA24F12F221C8C03350299218B1539DD5_H
#ifndef SCENE_TBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369_H
#define SCENE_TBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Scene
struct  Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369  : public GLTFChildOfRootProperty_t1935077ACF3DB61B605AE7F61B8539173FD05E21
{
public:
	// System.Collections.Generic.List`1<GLTF.Schema.NodeId> GLTF.Schema.Scene::Nodes
	List_1_t2D94F9C74DBC450648D6E3DC524ECAB46A8C527A * ___Nodes_7;

public:
	inline static int32_t get_offset_of_Nodes_7() { return static_cast<int32_t>(offsetof(Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369, ___Nodes_7)); }
	inline List_1_t2D94F9C74DBC450648D6E3DC524ECAB46A8C527A * get_Nodes_7() const { return ___Nodes_7; }
	inline List_1_t2D94F9C74DBC450648D6E3DC524ECAB46A8C527A ** get_address_of_Nodes_7() { return &___Nodes_7; }
	inline void set_Nodes_7(List_1_t2D94F9C74DBC450648D6E3DC524ECAB46A8C527A * value)
	{
		___Nodes_7 = value;
		Il2CppCodeGenWriteBarrier((&___Nodes_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_TBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef FILEACCESS_T31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6_H
#define FILEACCESS_T31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6_H
#ifndef MEMORYSTREAM_T495F44B85E6B4DDE2BB7E17DE963256A74E2298C_H
#define MEMORYSTREAM_T495F44B85E6B4DDE2BB7E17DE963256A74E2298C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_13)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T495F44B85E6B4DDE2BB7E17DE963256A74E2298C_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef MATCH_TE447871AB59EED3642F31EB9559D162C2977EBB5_H
#define MATCH_TE447871AB59EED3642F31EB9559D162C2977EBB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_tE447871AB59EED3642F31EB9559D162C2977EBB5  : public Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ____regex_8;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_12;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* ____matches_13;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____matchcount_14;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_15;

public:
	inline static int32_t get_offset_of__regex_8() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____regex_8)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get__regex_8() const { return ____regex_8; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of__regex_8() { return &____regex_8; }
	inline void set__regex_8(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		____regex_8 = value;
		Il2CppCodeGenWriteBarrier((&____regex_8), value);
	}

	inline static int32_t get_offset_of__textbeg_9() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____textbeg_9)); }
	inline int32_t get__textbeg_9() const { return ____textbeg_9; }
	inline int32_t* get_address_of__textbeg_9() { return &____textbeg_9; }
	inline void set__textbeg_9(int32_t value)
	{
		____textbeg_9 = value;
	}

	inline static int32_t get_offset_of__textpos_10() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____textpos_10)); }
	inline int32_t get__textpos_10() const { return ____textpos_10; }
	inline int32_t* get_address_of__textpos_10() { return &____textpos_10; }
	inline void set__textpos_10(int32_t value)
	{
		____textpos_10 = value;
	}

	inline static int32_t get_offset_of__textend_11() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____textend_11)); }
	inline int32_t get__textend_11() const { return ____textend_11; }
	inline int32_t* get_address_of__textend_11() { return &____textend_11; }
	inline void set__textend_11(int32_t value)
	{
		____textend_11 = value;
	}

	inline static int32_t get_offset_of__textstart_12() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____textstart_12)); }
	inline int32_t get__textstart_12() const { return ____textstart_12; }
	inline int32_t* get_address_of__textstart_12() { return &____textstart_12; }
	inline void set__textstart_12(int32_t value)
	{
		____textstart_12 = value;
	}

	inline static int32_t get_offset_of__matches_13() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____matches_13)); }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* get__matches_13() const { return ____matches_13; }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43** get_address_of__matches_13() { return &____matches_13; }
	inline void set__matches_13(Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* value)
	{
		____matches_13 = value;
		Il2CppCodeGenWriteBarrier((&____matches_13), value);
	}

	inline static int32_t get_offset_of__matchcount_14() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____matchcount_14)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__matchcount_14() const { return ____matchcount_14; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__matchcount_14() { return &____matchcount_14; }
	inline void set__matchcount_14(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____matchcount_14 = value;
		Il2CppCodeGenWriteBarrier((&____matchcount_14), value);
	}

	inline static int32_t get_offset_of__balancing_15() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____balancing_15)); }
	inline bool get__balancing_15() const { return ____balancing_15; }
	inline bool* get_address_of__balancing_15() { return &____balancing_15; }
	inline void set__balancing_15(bool value)
	{
		____balancing_15 = value;
	}
};

struct Match_tE447871AB59EED3642F31EB9559D162C2977EBB5_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::_empty
	Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * ____empty_7;

public:
	inline static int32_t get_offset_of__empty_7() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5_StaticFields, ____empty_7)); }
	inline Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * get__empty_7() const { return ____empty_7; }
	inline Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 ** get_address_of__empty_7() { return &____empty_7; }
	inline void set__empty_7(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * value)
	{
		____empty_7 = value;
		Il2CppCodeGenWriteBarrier((&____empty_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_TE447871AB59EED3642F31EB9559D162C2977EBB5_H
#ifndef REGEXOPTIONS_T9A6138CDA9C60924D503C584095349F008C52EA1_H
#define REGEXOPTIONS_T9A6138CDA9C60924D503C584095349F008C52EA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t9A6138CDA9C60924D503C584095349F008C52EA1 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t9A6138CDA9C60924D503C584095349F008C52EA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T9A6138CDA9C60924D503C584095349F008C52EA1_H
#ifndef TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#define TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_19)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_21)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifndef ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#define ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifndef CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#define CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifndef DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#define DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifndef UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#define UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#define TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifndef LOADTYPE_TB5E16DC0498ABD228C4A9DEEF10DFC07D75055E5_H
#define LOADTYPE_TB5E16DC0498ABD228C4A9DEEF10DFC07D75055E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter_LoadType
struct  LoadType_tB5E16DC0498ABD228C4A9DEEF10DFC07D75055E5 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_LoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadType_tB5E16DC0498ABD228C4A9DEEF10DFC07D75055E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADTYPE_TB5E16DC0498ABD228C4A9DEEF10DFC07D75055E5_H
#ifndef MATERIALTYPE_T32EA543C4A16D419C24EBAC936EE94F3BD1DDA5A_H
#define MATERIALTYPE_T32EA543C4A16D419C24EBAC936EE94F3BD1DDA5A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter_MaterialType
struct  MaterialType_t32EA543C4A16D419C24EBAC936EE94F3BD1DDA5A 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_MaterialType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaterialType_t32EA543C4A16D419C24EBAC936EE94F3BD1DDA5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALTYPE_T32EA543C4A16D419C24EBAC936EE94F3BD1DDA5A_H
#ifndef BUFFERVIEW_T2DA1C44882D20E0C188071C456246E9AEA090484_H
#define BUFFERVIEW_T2DA1C44882D20E0C188071C456246E9AEA090484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferView
struct  BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484  : public GLTFChildOfRootProperty_t1935077ACF3DB61B605AE7F61B8539173FD05E21
{
public:
	// GLTF.Schema.BufferId GLTF.Schema.BufferView::Buffer
	BufferId_tF3A65B2849C2735DE60F2713377E45EC7FDD1AF5 * ___Buffer_7;
	// System.Int32 GLTF.Schema.BufferView::ByteOffset
	int32_t ___ByteOffset_8;
	// System.Int32 GLTF.Schema.BufferView::ByteLength
	int32_t ___ByteLength_9;
	// System.Int32 GLTF.Schema.BufferView::ByteStride
	int32_t ___ByteStride_10;
	// GLTF.Schema.BufferViewTarget GLTF.Schema.BufferView::Target
	int32_t ___Target_11;

public:
	inline static int32_t get_offset_of_Buffer_7() { return static_cast<int32_t>(offsetof(BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484, ___Buffer_7)); }
	inline BufferId_tF3A65B2849C2735DE60F2713377E45EC7FDD1AF5 * get_Buffer_7() const { return ___Buffer_7; }
	inline BufferId_tF3A65B2849C2735DE60F2713377E45EC7FDD1AF5 ** get_address_of_Buffer_7() { return &___Buffer_7; }
	inline void set_Buffer_7(BufferId_tF3A65B2849C2735DE60F2713377E45EC7FDD1AF5 * value)
	{
		___Buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_7), value);
	}

	inline static int32_t get_offset_of_ByteOffset_8() { return static_cast<int32_t>(offsetof(BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484, ___ByteOffset_8)); }
	inline int32_t get_ByteOffset_8() const { return ___ByteOffset_8; }
	inline int32_t* get_address_of_ByteOffset_8() { return &___ByteOffset_8; }
	inline void set_ByteOffset_8(int32_t value)
	{
		___ByteOffset_8 = value;
	}

	inline static int32_t get_offset_of_ByteLength_9() { return static_cast<int32_t>(offsetof(BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484, ___ByteLength_9)); }
	inline int32_t get_ByteLength_9() const { return ___ByteLength_9; }
	inline int32_t* get_address_of_ByteLength_9() { return &___ByteLength_9; }
	inline void set_ByteLength_9(int32_t value)
	{
		___ByteLength_9 = value;
	}

	inline static int32_t get_offset_of_ByteStride_10() { return static_cast<int32_t>(offsetof(BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484, ___ByteStride_10)); }
	inline int32_t get_ByteStride_10() const { return ___ByteStride_10; }
	inline int32_t* get_address_of_ByteStride_10() { return &___ByteStride_10; }
	inline void set_ByteStride_10(int32_t value)
	{
		___ByteStride_10 = value;
	}

	inline static int32_t get_offset_of_Target_11() { return static_cast<int32_t>(offsetof(BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484, ___Target_11)); }
	inline int32_t get_Target_11() const { return ___Target_11; }
	inline int32_t* get_address_of_Target_11() { return &___Target_11; }
	inline void set_Target_11(int32_t value)
	{
		___Target_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERVIEW_T2DA1C44882D20E0C188071C456246E9AEA090484_H
#ifndef FILESTREAM_TA770BF9AF0906644D43C81B962C7DBC3BC79A418_H
#define FILESTREAM_TA770BF9AF0906644D43C81B962C7DBC3BC79A418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___buf_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_8)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((&___safeHandle_8), value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_4), value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_TA770BF9AF0906644D43C81B962C7DBC3BC79A418_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // MULTICASTDELEGATE_T_H
#ifndef REGEX_TFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_H
#define REGEX_TFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___factory_1)); }
	inline RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((&___factory_1), value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___internalMatchTimeout_5)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___caps_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((&___caps_8), value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___capnames_9)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((&___capnames_9), value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___capslist_10)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((&___capslist_10), value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___runnerref_12)); }
	inline ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((&___runnerref_12), value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___replref_13)); }
	inline SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((&___replref_13), value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___code_14)); }
	inline RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA * get_code_14() const { return ___code_14; }
	inline RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((&___code_14), value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((&___livecode_16), value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_TFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef DOWNLOADHANDLERTEXTURE_TDD365789CD15EDFB8582612507C8EE34C62A3DE4_H
#define DOWNLOADHANDLERTEXTURE_TDD365789CD15EDFB8582612507C8EE34C62A3DE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandlerTexture
struct  DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4  : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9
{
public:
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mTexture_1;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_3;

public:
	inline static int32_t get_offset_of_mTexture_1() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4, ___mTexture_1)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mTexture_1() const { return ___mTexture_1; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mTexture_1() { return &___mTexture_1; }
	inline void set_mTexture_1(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mTexture_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTexture_1), value);
	}

	inline static int32_t get_offset_of_mHasTexture_2() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4, ___mHasTexture_2)); }
	inline bool get_mHasTexture_2() const { return ___mHasTexture_2; }
	inline bool* get_address_of_mHasTexture_2() { return &___mHasTexture_2; }
	inline void set_mHasTexture_2(bool value)
	{
		___mHasTexture_2 = value;
	}

	inline static int32_t get_offset_of_mNonReadable_3() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4, ___mNonReadable_3)); }
	inline bool get_mNonReadable_3() const { return ___mNonReadable_3; }
	inline bool* get_address_of_mNonReadable_3() { return &___mNonReadable_3; }
	inline void set_mNonReadable_3(bool value)
	{
		___mNonReadable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_pinvoke : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_com : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
#endif // DOWNLOADHANDLERTEXTURE_TDD365789CD15EDFB8582612507C8EE34C62A3DE4_H
#ifndef UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#define UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#ifndef UNITYWEBREQUESTASYNCOPERATION_T726E134F16701A2671D40BEBE22110DC57156353_H
#define UNITYWEBREQUESTASYNCOPERATION_T726E134F16701A2671D40BEBE22110DC57156353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};
#endif // UNITYWEBREQUESTASYNCOPERATION_T726E134F16701A2671D40BEBE22110DC57156353_H
#ifndef TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#define TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifndef GLTFSCENEIMPORTER_TB010C9E6BC9B9F07ECE0434D11FC3BE062276854_H
#define GLTFSCENEIMPORTER_TB010C9E6BC9B9F07ECE0434D11FC3BE062276854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter
struct  GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::_lastLoadedScene
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____lastLoadedScene_0;
	// UnityEngine.Transform UnityGLTF.GLTFSceneImporter::_sceneParent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____sceneParent_1;
	// System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter_MaterialType,UnityEngine.Shader> UnityGLTF.GLTFSceneImporter::_shaderCache
	Dictionary_2_t5B24C6E217140002CDF736EE48940360E16536BA * ____shaderCache_2;
	// System.Int32 UnityGLTF.GLTFSceneImporter::MaximumLod
	int32_t ___MaximumLod_3;
	// GLTF.Schema.Material UnityGLTF.GLTFSceneImporter::DefaultMaterial
	Material_t28B08074BADED0B344817F94C2E0C05B4B6C004C * ___DefaultMaterial_4;
	// System.String UnityGLTF.GLTFSceneImporter::_gltfUrl
	String_t* ____gltfUrl_5;
	// System.String UnityGLTF.GLTFSceneImporter::_gltfDirectoryPath
	String_t* ____gltfDirectoryPath_6;
	// UnityGLTF.GLTFSceneImporter_GLBStream UnityGLTF.GLTFSceneImporter::_gltfStream
	GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A  ____gltfStream_7;
	// GLTF.Schema.GLTFRoot UnityGLTF.GLTFSceneImporter::_root
	GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * ____root_8;
	// UnityGLTF.Cache.AssetCache UnityGLTF.GLTFSceneImporter::_assetCache
	AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * ____assetCache_9;
	// UnityGLTF.AsyncAction UnityGLTF.GLTFSceneImporter::_asyncAction
	AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004 * ____asyncAction_10;
	// System.Boolean UnityGLTF.GLTFSceneImporter::_addColliders
	bool ____addColliders_11;
	// UnityGLTF.GLTFSceneImporter_LoadType UnityGLTF.GLTFSceneImporter::_loadType
	int32_t ____loadType_12;

public:
	inline static int32_t get_offset_of__lastLoadedScene_0() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____lastLoadedScene_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__lastLoadedScene_0() const { return ____lastLoadedScene_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__lastLoadedScene_0() { return &____lastLoadedScene_0; }
	inline void set__lastLoadedScene_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____lastLoadedScene_0 = value;
		Il2CppCodeGenWriteBarrier((&____lastLoadedScene_0), value);
	}

	inline static int32_t get_offset_of__sceneParent_1() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____sceneParent_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get__sceneParent_1() const { return ____sceneParent_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of__sceneParent_1() { return &____sceneParent_1; }
	inline void set__sceneParent_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		____sceneParent_1 = value;
		Il2CppCodeGenWriteBarrier((&____sceneParent_1), value);
	}

	inline static int32_t get_offset_of__shaderCache_2() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____shaderCache_2)); }
	inline Dictionary_2_t5B24C6E217140002CDF736EE48940360E16536BA * get__shaderCache_2() const { return ____shaderCache_2; }
	inline Dictionary_2_t5B24C6E217140002CDF736EE48940360E16536BA ** get_address_of__shaderCache_2() { return &____shaderCache_2; }
	inline void set__shaderCache_2(Dictionary_2_t5B24C6E217140002CDF736EE48940360E16536BA * value)
	{
		____shaderCache_2 = value;
		Il2CppCodeGenWriteBarrier((&____shaderCache_2), value);
	}

	inline static int32_t get_offset_of_MaximumLod_3() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ___MaximumLod_3)); }
	inline int32_t get_MaximumLod_3() const { return ___MaximumLod_3; }
	inline int32_t* get_address_of_MaximumLod_3() { return &___MaximumLod_3; }
	inline void set_MaximumLod_3(int32_t value)
	{
		___MaximumLod_3 = value;
	}

	inline static int32_t get_offset_of_DefaultMaterial_4() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ___DefaultMaterial_4)); }
	inline Material_t28B08074BADED0B344817F94C2E0C05B4B6C004C * get_DefaultMaterial_4() const { return ___DefaultMaterial_4; }
	inline Material_t28B08074BADED0B344817F94C2E0C05B4B6C004C ** get_address_of_DefaultMaterial_4() { return &___DefaultMaterial_4; }
	inline void set_DefaultMaterial_4(Material_t28B08074BADED0B344817F94C2E0C05B4B6C004C * value)
	{
		___DefaultMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultMaterial_4), value);
	}

	inline static int32_t get_offset_of__gltfUrl_5() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____gltfUrl_5)); }
	inline String_t* get__gltfUrl_5() const { return ____gltfUrl_5; }
	inline String_t** get_address_of__gltfUrl_5() { return &____gltfUrl_5; }
	inline void set__gltfUrl_5(String_t* value)
	{
		____gltfUrl_5 = value;
		Il2CppCodeGenWriteBarrier((&____gltfUrl_5), value);
	}

	inline static int32_t get_offset_of__gltfDirectoryPath_6() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____gltfDirectoryPath_6)); }
	inline String_t* get__gltfDirectoryPath_6() const { return ____gltfDirectoryPath_6; }
	inline String_t** get_address_of__gltfDirectoryPath_6() { return &____gltfDirectoryPath_6; }
	inline void set__gltfDirectoryPath_6(String_t* value)
	{
		____gltfDirectoryPath_6 = value;
		Il2CppCodeGenWriteBarrier((&____gltfDirectoryPath_6), value);
	}

	inline static int32_t get_offset_of__gltfStream_7() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____gltfStream_7)); }
	inline GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A  get__gltfStream_7() const { return ____gltfStream_7; }
	inline GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A * get_address_of__gltfStream_7() { return &____gltfStream_7; }
	inline void set__gltfStream_7(GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A  value)
	{
		____gltfStream_7 = value;
	}

	inline static int32_t get_offset_of__root_8() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____root_8)); }
	inline GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * get__root_8() const { return ____root_8; }
	inline GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 ** get_address_of__root_8() { return &____root_8; }
	inline void set__root_8(GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * value)
	{
		____root_8 = value;
		Il2CppCodeGenWriteBarrier((&____root_8), value);
	}

	inline static int32_t get_offset_of__assetCache_9() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____assetCache_9)); }
	inline AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * get__assetCache_9() const { return ____assetCache_9; }
	inline AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 ** get_address_of__assetCache_9() { return &____assetCache_9; }
	inline void set__assetCache_9(AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * value)
	{
		____assetCache_9 = value;
		Il2CppCodeGenWriteBarrier((&____assetCache_9), value);
	}

	inline static int32_t get_offset_of__asyncAction_10() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____asyncAction_10)); }
	inline AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004 * get__asyncAction_10() const { return ____asyncAction_10; }
	inline AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004 ** get_address_of__asyncAction_10() { return &____asyncAction_10; }
	inline void set__asyncAction_10(AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004 * value)
	{
		____asyncAction_10 = value;
		Il2CppCodeGenWriteBarrier((&____asyncAction_10), value);
	}

	inline static int32_t get_offset_of__addColliders_11() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____addColliders_11)); }
	inline bool get__addColliders_11() const { return ____addColliders_11; }
	inline bool* get_address_of__addColliders_11() { return &____addColliders_11; }
	inline void set__addColliders_11(bool value)
	{
		____addColliders_11 = value;
	}

	inline static int32_t get_offset_of__loadType_12() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854, ____loadType_12)); }
	inline int32_t get__loadType_12() const { return ____loadType_12; }
	inline int32_t* get_address_of__loadType_12() { return &____loadType_12; }
	inline void set__loadType_12(int32_t value)
	{
		____loadType_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFSCENEIMPORTER_TB010C9E6BC9B9F07ECE0434D11FC3BE062276854_H
#ifndef ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#define ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifndef TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#define TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * m_Items[1];

public:
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  m_Items[1];

public:
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Scene>::get_Count()
inline int32_t List_1_get_Count_m9AFBB93D3E7B049FB3CD6BE415A2DC973F547EEC (List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<GLTF.Schema.Scene>::get_Item(System.Int32)
inline Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * List_1_get_Item_m486E95C6D46E73B2081C437854B9C1584C01750A (List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * (*) (List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// GLTF.Schema.Scene GLTF.Schema.GLTFRoot::GetDefaultScene()
extern "C" IL2CPP_METHOD_ATTR Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * GLTFRoot_GetDefaultScene_mF15B9B7B0330973E126A4A0FBA4D40FD3A9D052F (GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Image>::get_Count()
inline int32_t List_1_get_Count_m3836670D1262297A2BAA6D73DDF43C2E3EBB3AA6 (List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Texture>::get_Count()
inline int32_t List_1_get_Count_mAF8C73D207D237CD5AC9F9AA29E87468199ACCCD (List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Material>::get_Count()
inline int32_t List_1_get_Count_m7C6F3156FECC2FBAB855D0884E9B2664DB1D4AAA (List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Buffer>::get_Count()
inline int32_t List_1_get_Count_m0075A88FAC5FF54877F26064A3FC440347A643CF (List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Mesh>::get_Count()
inline int32_t List_1_get_Count_mFF3E0A5565BF8220DDA43AE94D76C9E65418A5DD (List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void UnityGLTF.Cache.AssetCache::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AssetCache__ctor_mCFE829ED601F80CD927F9EC89891E041C4FDE746 (AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * __this, int32_t ___imageCacheSize0, int32_t ___textureCacheSize1, int32_t ___materialCacheSize2, int32_t ___bufferCacheSize3, int32_t ___meshCacheSize4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GLTF.Schema.Buffer>::get_Item(System.Int32)
inline Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * List_1_get_Item_m4523C041722892747D1ACA31649C6F3F99D37892 (List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * (*) (List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void GLTF.GLTFParser::SeekToBinaryChunk(System.IO.Stream,System.Int32,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void GLTFParser_SeekToBinaryChunk_mE917B603FACBC5DD35539E7E052DAEF7B93962A5 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * p0, int32_t p1, int64_t p2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData> UnityGLTF.Cache.AssetCache::get_BufferCache()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB * AssetCache_get_BufferCache_mDE54AA699C1EB44732C5D5BE49395E01124C69E9 (AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.BufferCacheData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BufferCacheData__ctor_m97CA712EA79148D71BFB5D27D6FB3D819F05A8FA (BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.BufferCacheData::set_ChunkOffset(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void BufferCacheData_set_ChunkOffset_mA8A58F3FC1CEEC86332BFB2201837E3C1FD92083 (BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.BufferCacheData::set_Stream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void BufferCacheData_set_Stream_mF434E56BC3819A8F57B66E9A6A4C72A9F421F661 (BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m32536DA27E86BFB0BC1E96EE74976B5072A50909 (Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB * __this, int32_t p0, BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB *, int32_t, BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.List`1<GLTF.Schema.Image>::get_Item(System.Int32)
inline Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * List_1_get_Item_mD005117F3EECCCCC928844CD08FD45B200BFEF7B (List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * (*) (List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityGLTF.AsyncAction::RunOnWorkerThread(System.Action)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AsyncAction_RunOnWorkerThread_mD20D92820C7711C71AE6B1F55A1CCEF90581AD0C (AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, bool p1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
extern "C" IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m34819872549939D1EF9EA3D4010974FBEBAF0070 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.WebRequestException::.ctor(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m41F1355C062406060F9CC6F57E6C55438EF988B8 (WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887 * __this, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DownloadHandler_get_data_m4AE4E3764FBE186ABA89B5F3A7F91048EE5E38FB (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m7202510CE4CCEDCDEFF98DB5900451A2FABAA3C4 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, int32_t p1, int32_t p2, bool p3, bool p4, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// GLTF.Schema.GLTFRoot GLTF.GLTFParser::ParseJson(System.IO.Stream,System.Int64)
extern "C" IL2CPP_METHOD_ATTR GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * GLTFParser_ParseJson_mB49E4C94A41DC9E8312E7990842747EBF043B662 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * p0, int64_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::ImportScene(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GLTFSceneImporter_ImportScene_m6C0DCD6DEFBB387B99D4D0A0AE6C3FF4B1977448 (GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * __this, int32_t ___sceneIndex0, bool ___isMultithreaded1, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m2769A5BA7B7A835514F6C0E4D30FAD467C6B1B0C (Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
extern "C" IL2CPP_METHOD_ATTR Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * Regex_Match_mC2C718B93803F6633A708E430F8698E70354B77C (Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern "C" IL2CPP_METHOD_ATTR bool Group_get_Success_m91D00749B3C9D2030B72C6DA3AF2B3BA48F22521 (Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * __this, const RuntimeMethod* method);
// System.Int32 System.Text.RegularExpressions.Capture::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Capture_get_Length_mB41E1D86823156F57D3FE0B9F31BF3C6DD3D3C94 (Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156 (String_t* p0, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * File_OpenRead_m3B2974AB5AA8011E587AC834BE71862BF77C2129 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Texture2D[] UnityGLTF.Cache.AssetCache::get_ImageCache()
extern "C" IL2CPP_METHOD_ATTR Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* AssetCache_get_ImageCache_m6A91CB211E84652E52D9DF4F9067E74207F792F7 (AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * p0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerTexture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerTexture__ctor_m6529FAAB9A79017C30CF7744A3B7EBAAF1A647ED (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * p0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * p0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* Texture2D_GetPixels_mE87C4C2438D7DE39C50EC1C91E438BB15026BBE3 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mDE50229135F49F323D265340C415D680CCB2FB92 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m368893ECE2F9659BDA54ED1E4EB00D01CC2D1B16 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, bool p0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_m030A0D89670638A2C0E86A42AA84C767314672C6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>::get_Item(!0)
inline BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * Dictionary_2_get_Item_m9EA7A1AADED24CFDFF8EA3527B74D98387D353A1 (Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * (*) (Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared)(__this, p0, method);
}
// System.IO.Stream UnityGLTF.Cache.BufferCacheData::get_Stream()
extern "C" IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * BufferCacheData_get_Stream_mE894C4BC2656F0738CF37F5AD04B33F3DE3BAE05 (BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * __this, const RuntimeMethod* method);
// System.Int64 UnityGLTF.Cache.BufferCacheData::get_ChunkOffset()
extern "C" IL2CPP_METHOD_ATTR int64_t BufferCacheData_get_ChunkOffset_m1F9AF4CCCBD548B9971085A19689502658BCE05A (BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D (Exception_t * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22__ctor_m9C6EB95E79291AE5E05E9CEFBE06A1331ABCF3F0 (U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22_System_IDisposable_Dispose_m8ECE3275C6A553779C5FA144A9B721F72E8E993E (U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CImportSceneU3Ed__22_MoveNext_mB0F31B950E80AC9F89B089A7AD594C07B1670526 (U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CImportSceneU3Ed__22_MoveNext_mB0F31B950E80AC9F89B089A7AD594C07B1670526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * V_1 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * V_3 = NULL;
	int32_t V_4 = 0;
	Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * V_5 = NULL;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B10_0 = NULL;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B13_1 = NULL;
	int32_t G_B12_0 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B14_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B16_2 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B15_2 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B17_3 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B19_3 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B18_3 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B20_4 = NULL;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	int32_t G_B22_3 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B22_4 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	int32_t G_B21_3 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B21_4 = NULL;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t G_B23_3 = 0;
	int32_t G_B23_4 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * G_B23_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_01a9;
			}
			case 2:
			{
				goto IL_0293;
			}
			case 3:
			{
				goto IL_02f2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (sceneIndex >= 0 && sceneIndex < _root.Scenes.Count)
		int32_t L_3 = __this->get_sceneIndex_2();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_4 = __this->get_sceneIndex_2();
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_5 = V_1;
		NullCheck(L_5);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_6 = L_5->get__root_8();
		NullCheck(L_6);
		List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 * L_7 = L_6->get_Scenes_20();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m9AFBB93D3E7B049FB3CD6BE415A2DC973F547EEC(L_7, /*hidden argument*/List_1_get_Count_m9AFBB93D3E7B049FB3CD6BE415A2DC973F547EEC_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)L_8)))
		{
			goto IL_006c;
		}
	}
	{
		// scene = _root.Scenes[sceneIndex];
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_9 = V_1;
		NullCheck(L_9);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_10 = L_9->get__root_8();
		NullCheck(L_10);
		List_1_tE9E5D2D8ABCE3BE034DB095904B4B93DF6341B47 * L_11 = L_10->get_Scenes_20();
		int32_t L_12 = __this->get_sceneIndex_2();
		NullCheck(L_11);
		Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * L_13 = List_1_get_Item_m486E95C6D46E73B2081C437854B9C1584C01750A(L_11, L_12, /*hidden argument*/List_1_get_Item_m486E95C6D46E73B2081C437854B9C1584C01750A_RuntimeMethod_var);
		__this->set_U3CsceneU3E5__2_5(L_13);
		// }
		goto IL_007d;
	}

IL_006c:
	{
		// scene = _root.GetDefaultScene();
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_14 = V_1;
		NullCheck(L_14);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_15 = L_14->get__root_8();
		NullCheck(L_15);
		Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * L_16 = GLTFRoot_GetDefaultScene_mF15B9B7B0330973E126A4A0FBA4D40FD3A9D052F(L_15, /*hidden argument*/NULL);
		__this->set_U3CsceneU3E5__2_5(L_16);
	}

IL_007d:
	{
		// if (scene == null)
		Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * L_17 = __this->get_U3CsceneU3E5__2_5();
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		// throw new Exception("No default scene in gltf file.");
		Exception_t * L_18 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_18, _stringLiteral9049EC117A0E62749B6FE66DB211B5A2D030A8EF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, U3CImportSceneU3Ed__22_MoveNext_mB0F31B950E80AC9F89B089A7AD594C07B1670526_RuntimeMethod_var);
	}

IL_0090:
	{
		// _assetCache = new AssetCache(
		//     _root.Images != null ? _root.Images.Count : 0,
		//     _root.Textures != null ? _root.Textures.Count : 0,
		//     _root.Materials != null ? _root.Materials.Count : 0,
		//     _root.Buffers != null ? _root.Buffers.Count : 0,
		//     _root.Meshes != null ? _root.Meshes.Count : 0
		// );
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_19 = V_1;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_20 = V_1;
		NullCheck(L_20);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_21 = L_20->get__root_8();
		NullCheck(L_21);
		List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * L_22 = L_21->get_Images_14();
		G_B9_0 = L_19;
		if (L_22)
		{
			G_B10_0 = L_19;
			goto IL_00a1;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_00b1;
	}

IL_00a1:
	{
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_23 = V_1;
		NullCheck(L_23);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_24 = L_23->get__root_8();
		NullCheck(L_24);
		List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * L_25 = L_24->get_Images_14();
		NullCheck(L_25);
		int32_t L_26 = List_1_get_Count_m3836670D1262297A2BAA6D73DDF43C2E3EBB3AA6(L_25, /*hidden argument*/List_1_get_Count_m3836670D1262297A2BAA6D73DDF43C2E3EBB3AA6_RuntimeMethod_var);
		G_B11_0 = L_26;
		G_B11_1 = G_B10_0;
	}

IL_00b1:
	{
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_27 = V_1;
		NullCheck(L_27);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_28 = L_27->get__root_8();
		NullCheck(L_28);
		List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE * L_29 = L_28->get_Textures_22();
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		if (L_29)
		{
			G_B13_0 = G_B11_0;
			G_B13_1 = G_B11_1;
			goto IL_00c1;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00d1;
	}

IL_00c1:
	{
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_30 = V_1;
		NullCheck(L_30);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_31 = L_30->get__root_8();
		NullCheck(L_31);
		List_1_tB98E203BA36A411A758EBD5BC9440DA1EFA30BAE * L_32 = L_31->get_Textures_22();
		NullCheck(L_32);
		int32_t L_33 = List_1_get_Count_mAF8C73D207D237CD5AC9F9AA29E87468199ACCCD(L_32, /*hidden argument*/List_1_get_Count_mAF8C73D207D237CD5AC9F9AA29E87468199ACCCD_RuntimeMethod_var);
		G_B14_0 = L_33;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00d1:
	{
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_34 = V_1;
		NullCheck(L_34);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_35 = L_34->get__root_8();
		NullCheck(L_35);
		List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C * L_36 = L_35->get_Materials_15();
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		if (L_36)
		{
			G_B16_0 = G_B14_0;
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			goto IL_00e1;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_00f1;
	}

IL_00e1:
	{
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_37 = V_1;
		NullCheck(L_37);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_38 = L_37->get__root_8();
		NullCheck(L_38);
		List_1_t33FE7BBC7658910CAE47838A695A4058E56D328C * L_39 = L_38->get_Materials_15();
		NullCheck(L_39);
		int32_t L_40 = List_1_get_Count_m7C6F3156FECC2FBAB855D0884E9B2664DB1D4AAA(L_39, /*hidden argument*/List_1_get_Count_m7C6F3156FECC2FBAB855D0884E9B2664DB1D4AAA_RuntimeMethod_var);
		G_B17_0 = L_40;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_00f1:
	{
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_41 = V_1;
		NullCheck(L_41);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_42 = L_41->get__root_8();
		NullCheck(L_42);
		List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * L_43 = L_42->get_Buffers_11();
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_43)
		{
			G_B19_0 = G_B17_0;
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		G_B20_4 = G_B18_3;
		goto IL_0111;
	}

IL_0101:
	{
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_44 = V_1;
		NullCheck(L_44);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_45 = L_44->get__root_8();
		NullCheck(L_45);
		List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * L_46 = L_45->get_Buffers_11();
		NullCheck(L_46);
		int32_t L_47 = List_1_get_Count_m0075A88FAC5FF54877F26064A3FC440347A643CF(L_46, /*hidden argument*/List_1_get_Count_m0075A88FAC5FF54877F26064A3FC440347A643CF_RuntimeMethod_var);
		G_B20_0 = L_47;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
		G_B20_4 = G_B19_3;
	}

IL_0111:
	{
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_48 = V_1;
		NullCheck(L_48);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_49 = L_48->get__root_8();
		NullCheck(L_49);
		List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862 * L_50 = L_49->get_Meshes_16();
		G_B21_0 = G_B20_0;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
		G_B21_4 = G_B20_4;
		if (L_50)
		{
			G_B22_0 = G_B20_0;
			G_B22_1 = G_B20_1;
			G_B22_2 = G_B20_2;
			G_B22_3 = G_B20_3;
			G_B22_4 = G_B20_4;
			goto IL_0121;
		}
	}
	{
		G_B23_0 = 0;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		G_B23_5 = G_B21_4;
		goto IL_0131;
	}

IL_0121:
	{
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_51 = V_1;
		NullCheck(L_51);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_52 = L_51->get__root_8();
		NullCheck(L_52);
		List_1_tBC5EF5570024CFC55F93B09DCA699D74E80D8862 * L_53 = L_52->get_Meshes_16();
		NullCheck(L_53);
		int32_t L_54 = List_1_get_Count_mFF3E0A5565BF8220DDA43AE94D76C9E65418A5DD(L_53, /*hidden argument*/List_1_get_Count_mFF3E0A5565BF8220DDA43AE94D76C9E65418A5DD_RuntimeMethod_var);
		G_B23_0 = L_54;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
		G_B23_5 = G_B22_4;
	}

IL_0131:
	{
		AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * L_55 = (AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 *)il2cpp_codegen_object_new(AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350_il2cpp_TypeInfo_var);
		AssetCache__ctor_mCFE829ED601F80CD927F9EC89891E041C4FDE746(L_55, G_B23_4, G_B23_3, G_B23_2, G_B23_1, G_B23_0, /*hidden argument*/NULL);
		NullCheck(G_B23_5);
		G_B23_5->set__assetCache_9(L_55);
		// if (_lastLoadedScene == null)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_56 = V_1;
		NullCheck(L_56);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_57 = L_56->get__lastLoadedScene_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_58 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_57, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_02f9;
		}
	}
	{
		// if (_root.Buffers != null)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_59 = V_1;
		NullCheck(L_59);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_60 = L_59->get__root_8();
		NullCheck(L_60);
		List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * L_61 = L_60->get_Buffers_11();
		if (!L_61)
		{
			goto IL_0242;
		}
	}
	{
		// for (int i = 0; i < _root.Buffers.Count; ++i)
		__this->set_U3CiU3E5__3_6(0);
		goto IL_0227;
	}

IL_0168:
	{
		// GLTF.Schema.Buffer buffer = _root.Buffers[i];
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_62 = V_1;
		NullCheck(L_62);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_63 = L_62->get__root_8();
		NullCheck(L_63);
		List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * L_64 = L_63->get_Buffers_11();
		int32_t L_65 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_64);
		Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * L_66 = List_1_get_Item_m4523C041722892747D1ACA31649C6F3F99D37892(L_64, L_65, /*hidden argument*/List_1_get_Item_m4523C041722892747D1ACA31649C6F3F99D37892_RuntimeMethod_var);
		V_3 = L_66;
		// if (buffer.Uri != null)
		Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * L_67 = V_3;
		NullCheck(L_67);
		String_t* L_68 = L_67->get_Uri_7();
		if (!L_68)
		{
			goto IL_01b2;
		}
	}
	{
		// yield return LoadBuffer(_gltfDirectoryPath, buffer, i);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_69 = V_1;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_70 = V_1;
		NullCheck(L_70);
		String_t* L_71 = L_70->get__gltfDirectoryPath_6();
		Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * L_72 = V_3;
		int32_t L_73 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_69);
		RuntimeObject* L_74 = VirtFuncInvoker3< RuntimeObject*, String_t*, Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 *, int32_t >::Invoke(15 /* System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::LoadBuffer(System.String,GLTF.Schema.Buffer,System.Int32) */, L_69, L_71, L_72, L_73);
		__this->set_U3CU3E2__current_1(L_74);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01a9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_0215;
	}

IL_01b2:
	{
		// GLTFParser.SeekToBinaryChunk(_gltfStream.Stream, i, _gltfStream.StartPosition);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_75 = V_1;
		NullCheck(L_75);
		GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A * L_76 = L_75->get_address_of__gltfStream_7();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_77 = L_76->get_Stream_0();
		int32_t L_78 = __this->get_U3CiU3E5__3_6();
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_79 = V_1;
		NullCheck(L_79);
		GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A * L_80 = L_79->get_address_of__gltfStream_7();
		int64_t L_81 = L_80->get_StartPosition_1();
		GLTFParser_SeekToBinaryChunk_mE917B603FACBC5DD35539E7E052DAEF7B93962A5(L_77, L_78, L_81, /*hidden argument*/NULL);
		// _assetCache.BufferCache[i] = new BufferCacheData()
		// {
		//     ChunkOffset = _gltfStream.Stream.Position,
		//     Stream = _gltfStream.Stream
		// };
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_82 = V_1;
		NullCheck(L_82);
		AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * L_83 = L_82->get__assetCache_9();
		NullCheck(L_83);
		Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB * L_84 = AssetCache_get_BufferCache_mDE54AA699C1EB44732C5D5BE49395E01124C69E9(L_83, /*hidden argument*/NULL);
		int32_t L_85 = __this->get_U3CiU3E5__3_6();
		BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * L_86 = (BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D *)il2cpp_codegen_object_new(BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D_il2cpp_TypeInfo_var);
		BufferCacheData__ctor_m97CA712EA79148D71BFB5D27D6FB3D819F05A8FA(L_86, /*hidden argument*/NULL);
		BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * L_87 = L_86;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_88 = V_1;
		NullCheck(L_88);
		GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A * L_89 = L_88->get_address_of__gltfStream_7();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_90 = L_89->get_Stream_0();
		NullCheck(L_90);
		int64_t L_91 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_90);
		NullCheck(L_87);
		BufferCacheData_set_ChunkOffset_mA8A58F3FC1CEEC86332BFB2201837E3C1FD92083(L_87, L_91, /*hidden argument*/NULL);
		BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * L_92 = L_87;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_93 = V_1;
		NullCheck(L_93);
		GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A * L_94 = L_93->get_address_of__gltfStream_7();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_95 = L_94->get_Stream_0();
		NullCheck(L_92);
		BufferCacheData_set_Stream_mF434E56BC3819A8F57B66E9A6A4C72A9F421F661(L_92, L_95, /*hidden argument*/NULL);
		NullCheck(L_84);
		Dictionary_2_set_Item_m32536DA27E86BFB0BC1E96EE74976B5072A50909(L_84, L_85, L_92, /*hidden argument*/Dictionary_2_set_Item_m32536DA27E86BFB0BC1E96EE74976B5072A50909_RuntimeMethod_var);
	}

IL_0215:
	{
		// for (int i = 0; i < _root.Buffers.Count; ++i)
		int32_t L_96 = __this->get_U3CiU3E5__3_6();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
		int32_t L_97 = V_4;
		__this->set_U3CiU3E5__3_6(L_97);
	}

IL_0227:
	{
		// for (int i = 0; i < _root.Buffers.Count; ++i)
		int32_t L_98 = __this->get_U3CiU3E5__3_6();
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_99 = V_1;
		NullCheck(L_99);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_100 = L_99->get__root_8();
		NullCheck(L_100);
		List_1_tBCBA1CB599072ECCDB686E2E88076EDDBB9EB3A7 * L_101 = L_100->get_Buffers_11();
		NullCheck(L_101);
		int32_t L_102 = List_1_get_Count_m0075A88FAC5FF54877F26064A3FC440347A643CF(L_101, /*hidden argument*/List_1_get_Count_m0075A88FAC5FF54877F26064A3FC440347A643CF_RuntimeMethod_var);
		if ((((int32_t)L_98) < ((int32_t)L_102)))
		{
			goto IL_0168;
		}
	}

IL_0242:
	{
		// if (_root.Images != null)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_103 = V_1;
		NullCheck(L_103);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_104 = L_103->get__root_8();
		NullCheck(L_104);
		List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * L_105 = L_104->get_Images_14();
		if (!L_105)
		{
			goto IL_02c4;
		}
	}
	{
		// for (int i = 0; i < _root.Images.Count; ++i)
		__this->set_U3CiU3E5__3_6(0);
		goto IL_02ac;
	}

IL_0258:
	{
		// Image image = _root.Images[i];
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_106 = V_1;
		NullCheck(L_106);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_107 = L_106->get__root_8();
		NullCheck(L_107);
		List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * L_108 = L_107->get_Images_14();
		int32_t L_109 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_108);
		Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * L_110 = List_1_get_Item_mD005117F3EECCCCC928844CD08FD45B200BFEF7B(L_108, L_109, /*hidden argument*/List_1_get_Item_mD005117F3EECCCCC928844CD08FD45B200BFEF7B_RuntimeMethod_var);
		V_5 = L_110;
		// yield return LoadImage(_gltfDirectoryPath, image, i);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_111 = V_1;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_112 = V_1;
		NullCheck(L_112);
		String_t* L_113 = L_112->get__gltfDirectoryPath_6();
		Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * L_114 = V_5;
		int32_t L_115 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_111);
		RuntimeObject* L_116 = VirtFuncInvoker3< RuntimeObject*, String_t*, Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 *, int32_t >::Invoke(14 /* System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::LoadImage(System.String,GLTF.Schema.Image,System.Int32) */, L_111, L_113, L_114, L_115);
		__this->set_U3CU3E2__current_1(L_116);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0293:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < _root.Images.Count; ++i)
		int32_t L_117 = __this->get_U3CiU3E5__3_6();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		int32_t L_118 = V_4;
		__this->set_U3CiU3E5__3_6(L_118);
	}

IL_02ac:
	{
		// for (int i = 0; i < _root.Images.Count; ++i)
		int32_t L_119 = __this->get_U3CiU3E5__3_6();
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_120 = V_1;
		NullCheck(L_120);
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_121 = L_120->get__root_8();
		NullCheck(L_121);
		List_1_tA3A2BFBD49FF2C0AD100F216BF8EBAE11D51D476 * L_122 = L_121->get_Images_14();
		NullCheck(L_122);
		int32_t L_123 = List_1_get_Count_m3836670D1262297A2BAA6D73DDF43C2E3EBB3AA6(L_122, /*hidden argument*/List_1_get_Count_m3836670D1262297A2BAA6D73DDF43C2E3EBB3AA6_RuntimeMethod_var);
		if ((((int32_t)L_119) < ((int32_t)L_123)))
		{
			goto IL_0258;
		}
	}

IL_02c4:
	{
		// if (isMultithreaded)
		bool L_124 = __this->get_isMultithreaded_4();
		if (!L_124)
		{
			goto IL_02f9;
		}
	}
	{
		// yield return _asyncAction.RunOnWorkerThread(() => BuildAttributesForMeshes());
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_125 = V_1;
		NullCheck(L_125);
		AsyncAction_tE7D07C04ED3D92835AF434A9816D15AA7C07C004 * L_126 = L_125->get__asyncAction_10();
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_127 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_128 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_128, L_127, (intptr_t)((intptr_t)GLTFSceneImporter_U3CImportSceneU3Eb__22_0_mE7144D0D2BF8A4E5E832B54340EF7527E982F2E0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_126);
		RuntimeObject* L_129 = AsyncAction_RunOnWorkerThread_mD20D92820C7711C71AE6B1F55A1CCEF90581AD0C(L_126, L_128, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_129);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_02f2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_02f9:
	{
		// var sceneObj = CreateScene(scene);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_130 = V_1;
		Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * L_131 = __this->get_U3CsceneU3E5__2_5();
		NullCheck(L_130);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_132 = VirtFuncInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Scene_tBA9123AAD0AE0D90CFFB03DAE031E6AB2018B369 * >::Invoke(7 /* UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::CreateScene(GLTF.Schema.Scene) */, L_130, L_131);
		V_2 = L_132;
		// if (_sceneParent != null)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_133 = V_1;
		NullCheck(L_133);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_134 = L_133->get__sceneParent_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_135 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_134, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_135)
		{
			goto IL_0326;
		}
	}
	{
		// sceneObj.transform.SetParent(_sceneParent, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_136 = V_2;
		NullCheck(L_136);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_137 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_136, /*hidden argument*/NULL);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_138 = V_1;
		NullCheck(L_138);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_139 = L_138->get__sceneParent_1();
		NullCheck(L_137);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_137, L_139, (bool)0, /*hidden argument*/NULL);
	}

IL_0326:
	{
		// _lastLoadedScene = sceneObj;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_140 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_141 = V_2;
		NullCheck(L_140);
		L_140->set__lastLoadedScene_0(L_141);
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CImportSceneU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC63268397D9AE6CB0DF5C457C5E5B2251781599E (U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_mC8BF82CA41FD963BB434AD454318BE617F917AFD (U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_mC8BF82CA41FD963BB434AD454318BE617F917AFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_mC8BF82CA41FD963BB434AD454318BE617F917AFD_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<ImportScene>d__22::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CImportSceneU3Ed__22_System_Collections_IEnumerator_get_Current_m46D8DCF61F4AF2D08D513891484D1ED91A444A06 (U3CImportSceneU3Ed__22_t457DD2420184E90148B350108C2927A22D3D8481 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UnityGLTF.GLTFSceneImporter_<Load>d__21::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21__ctor_mB4A324E7A41E76E75C67DDE6C7187E999125D7B5 (U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<Load>d__21::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21_System_IDisposable_Dispose_m353E0350467A1844BF0F405BCE6C900805E62635 (U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter_<Load>d__21::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadU3Ed__21_MoveNext_mE2936111ACD9FFC764953F5C66F43FCB0AE595B5 (U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadU3Ed__21_MoveNext_mE2936111ACD9FFC764953F5C66F43FCB0AE595B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0129;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_loadType == LoadType.Uri)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__loadType_12();
		if (L_4)
		{
			goto IL_00c3;
		}
	}
	{
		// var www = UnityWebRequest.Get(_gltfUrl);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get__gltfUrl_5();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_7 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_6, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_5(L_7);
		// yield return www.SendWebRequest();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_8 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_8);
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_9 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_8, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.responseCode >= 400 || www.responseCode == 0)
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_10 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_10);
		int64_t L_11 = UnityWebRequest_get_responseCode_m34819872549939D1EF9EA3D4010974FBEBAF0070(L_10, /*hidden argument*/NULL);
		if ((((int64_t)L_11) >= ((int64_t)(((int64_t)((int64_t)((int32_t)400)))))))
		{
			goto IL_0086;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_12 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_12);
		int64_t L_13 = UnityWebRequest_get_responseCode_m34819872549939D1EF9EA3D4010974FBEBAF0070(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0092;
		}
	}

IL_0086:
	{
		// throw new WebRequestException(www);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_14 = __this->get_U3CwwwU3E5__2_5();
		WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887 * L_15 = (WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887 *)il2cpp_codegen_object_new(WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887_il2cpp_TypeInfo_var);
		WebRequestException__ctor_m41F1355C062406060F9CC6F57E6C55438EF988B8(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, U3CLoadU3Ed__21_MoveNext_mE2936111ACD9FFC764953F5C66F43FCB0AE595B5_RuntimeMethod_var);
	}

IL_0092:
	{
		// byte[] gltfData = www.downloadHandler.data;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_16 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_16);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_17 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = DownloadHandler_get_data_m4AE4E3764FBE186ABA89B5F3A7F91048EE5E38FB(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// _gltfStream.Stream = new MemoryStream(gltfData, 0, gltfData.Length, false, true);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_19 = V_1;
		NullCheck(L_19);
		GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A * L_20 = L_19->get_address_of__gltfStream_7();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_2;
		NullCheck(L_22);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_23 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m7202510CE4CCEDCDEFF98DB5900451A2FABAA3C4(L_23, L_21, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))), (bool)0, (bool)1, /*hidden argument*/NULL);
		L_20->set_Stream_0(L_23);
		// }
		__this->set_U3CwwwU3E5__2_5((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)NULL);
		goto IL_00e7;
	}

IL_00c3:
	{
		// else if (_loadType == LoadType.Stream)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__loadType_12();
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_00e7;
		}
	}
	{
		// throw new Exception("Invalid load type specified: " + _loadType);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->get__loadType_12();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(LoadType_tB5E16DC0498ABD228C4A9DEEF10DFC07D75055E5_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralFEA45576C24B65665274E4F5667FFF9C54CB558B, L_29, /*hidden argument*/NULL);
		Exception_t * L_31 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_31, L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, U3CLoadU3Ed__21_MoveNext_mE2936111ACD9FFC764953F5C66F43FCB0AE595B5_RuntimeMethod_var);
	}

IL_00e7:
	{
		// _root = GLTFParser.ParseJson(_gltfStream.Stream, _gltfStream.StartPosition);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_32 = V_1;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_33 = V_1;
		NullCheck(L_33);
		GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A * L_34 = L_33->get_address_of__gltfStream_7();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_35 = L_34->get_Stream_0();
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_36 = V_1;
		NullCheck(L_36);
		GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A * L_37 = L_36->get_address_of__gltfStream_7();
		int64_t L_38 = L_37->get_StartPosition_1();
		GLTFRoot_t68405B6042BF53F4527479929DBA09B44E7B4AB9 * L_39 = GLTFParser_ParseJson_mB49E4C94A41DC9E8312E7990842747EBF043B662(L_35, L_38, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set__root_8(L_39);
		// yield return ImportScene(sceneIndex, isMultithreaded);
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_40 = V_1;
		int32_t L_41 = __this->get_sceneIndex_3();
		bool L_42 = __this->get_isMultithreaded_4();
		NullCheck(L_40);
		RuntimeObject* L_43 = GLTFSceneImporter_ImportScene_m6C0DCD6DEFBB387B99D4D0A0AE6C3FF4B1977448(L_40, L_41, L_42, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_43);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0129:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<Load>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDA2842619768FE77871686DF038A94C4A0310C85 (U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<Load>d__21::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m95DD7EFD2981FCEB273D5CFC9EC83EDFA6D28B5D (U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m95DD7EFD2981FCEB273D5CFC9EC83EDFA6D28B5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m95DD7EFD2981FCEB273D5CFC9EC83EDFA6D28B5D_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<Load>d__21::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadU3Ed__21_System_Collections_IEnumerator_get_Current_m74DF039012A2AA1625303582A0F7582B7CECF569 (U3CLoadU3Ed__21_t1B13C157726516CA0EF2CA0D7A04D0206FCDB7DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35__ctor_mF57698A4AB42296583FD63F005BC030DC30812DF (U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35_System_IDisposable_Dispose_m39E4F963FA14E883BE39C954FCFA2F35CD1C977B (U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadBufferU3Ed__35_MoveNext_m4EDA56F907103DC5754B97B4B846B05C8C289D70 (U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadBufferU3Ed__35_MoveNext_m4EDA56F907103DC5754B97B4B846B05C8C289D70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * V_1 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_2 = NULL;
	String_t* V_3 = NULL;
	Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * V_4 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bb;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (buffer.Uri != null)
		Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * L_4 = __this->get_buffer_2();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_Uri_7();
		if (!L_5)
		{
			goto IL_0133;
		}
	}
	{
		// Stream bufferStream = null;
		V_2 = (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)NULL;
		// var uri = buffer.Uri;
		Buffer_t361DA69063E3598C66580C2651EC2661040DE0E1 * L_6 = __this->get_buffer_2();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_Uri_7();
		V_3 = L_7;
		// Regex regex = new Regex(Base64StringInitializer);
		Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * L_8 = (Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF *)il2cpp_codegen_object_new(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_il2cpp_TypeInfo_var);
		Regex__ctor_m2769A5BA7B7A835514F6C0E4D30FAD467C6B1B0C(L_8, _stringLiteral185B3E88E68C99B8F86395F4CF26FB31FC3BDF21, /*hidden argument*/NULL);
		// Match match = regex.Match(uri);
		String_t* L_9 = V_3;
		NullCheck(L_8);
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_10 = Regex_Match_mC2C718B93803F6633A708E430F8698E70354B77C(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// if (match.Success)
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_11 = V_4;
		NullCheck(L_11);
		bool L_12 = Group_get_Success_m91D00749B3C9D2030B72C6DA3AF2B3BA48F22521(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		// string base64String = uri.Substring(match.Length);
		String_t* L_13 = V_3;
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_14 = V_4;
		NullCheck(L_14);
		int32_t L_15 = Capture_get_Length_mB41E1D86823156F57D3FE0B9F31BF3C6DD3D3C94(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_13, L_15, /*hidden argument*/NULL);
		// byte[] base64ByteData = Convert.FromBase64String(base64String);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// bufferStream = new MemoryStream(base64ByteData, 0, base64ByteData.Length, false, true);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_5;
		NullCheck(L_19);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_20 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m7202510CE4CCEDCDEFF98DB5900451A2FABAA3C4(L_20, L_18, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))), (bool)0, (bool)1, /*hidden argument*/NULL);
		V_2 = L_20;
		// }
		goto IL_0111;
	}

IL_0082:
	{
		// else if (_loadType == LoadType.Uri)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__loadType_12();
		if (L_22)
		{
			goto IL_00f6;
		}
	}
	{
		// var www = UnityWebRequest.Get(Path.Combine(sourceUri, uri));
		String_t* L_23 = __this->get_sourceUri_4();
		String_t* L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_25 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_23, L_24, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_26 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_25, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_6(L_26);
		// yield return www.SendWebRequest();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_27 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_27);
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_28 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_27, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00bb:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bufferStream = new MemoryStream(www.downloadHandler.data, 0, www.downloadHandler.data.Length, false, true);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_29 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_29);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_30 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = DownloadHandler_get_data_m4AE4E3764FBE186ABA89B5F3A7F91048EE5E38FB(L_30, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_32 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_32);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_33 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = DownloadHandler_get_data_m4AE4E3764FBE186ABA89B5F3A7F91048EE5E38FB(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_35 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m7202510CE4CCEDCDEFF98DB5900451A2FABAA3C4(L_35, L_31, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))), (bool)0, (bool)1, /*hidden argument*/NULL);
		V_2 = L_35;
		// }
		__this->set_U3CwwwU3E5__2_6((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)NULL);
		goto IL_0111;
	}

IL_00f6:
	{
		// else if (_loadType == LoadType.Stream)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = L_36->get__loadType_12();
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0111;
		}
	}
	{
		// var pathToLoad = Path.Combine(sourceUri, uri);
		String_t* L_38 = __this->get_sourceUri_4();
		String_t* L_39 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_40 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_38, L_39, /*hidden argument*/NULL);
		// bufferStream = File.OpenRead(pathToLoad);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_41 = File_OpenRead_m3B2974AB5AA8011E587AC834BE71862BF77C2129(L_40, /*hidden argument*/NULL);
		V_2 = L_41;
	}

IL_0111:
	{
		// _assetCache.BufferCache[bufferIndex] = new BufferCacheData()
		// {
		//     Stream = bufferStream
		// };
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_42 = V_1;
		NullCheck(L_42);
		AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * L_43 = L_42->get__assetCache_9();
		NullCheck(L_43);
		Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB * L_44 = AssetCache_get_BufferCache_mDE54AA699C1EB44732C5D5BE49395E01124C69E9(L_43, /*hidden argument*/NULL);
		int32_t L_45 = __this->get_bufferIndex_5();
		BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * L_46 = (BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D *)il2cpp_codegen_object_new(BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D_il2cpp_TypeInfo_var);
		BufferCacheData__ctor_m97CA712EA79148D71BFB5D27D6FB3D819F05A8FA(L_46, /*hidden argument*/NULL);
		BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * L_47 = L_46;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_48 = V_2;
		NullCheck(L_47);
		BufferCacheData_set_Stream_mF434E56BC3819A8F57B66E9A6A4C72A9F421F661(L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_44);
		Dictionary_2_set_Item_m32536DA27E86BFB0BC1E96EE74976B5072A50909(L_44, L_45, L_47, /*hidden argument*/Dictionary_2_set_Item_m32536DA27E86BFB0BC1E96EE74976B5072A50909_RuntimeMethod_var);
	}

IL_0133:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadBufferU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8EBC4DE1492878EF3A19F6A694C82BFEB4E38386 (U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m07E15E288B9728D9845CD42455BD72E6106CA5CB (U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m07E15E288B9728D9845CD42455BD72E6106CA5CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m07E15E288B9728D9845CD42455BD72E6106CA5CB_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<LoadBuffer>d__35::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_get_Current_m0BF8E00B41E3BA7630D6C5C82BB7C3EC159B1CFF (U3CLoadBufferU3Ed__35_tD50AF4225AE15F39F7BC6E38EF79D5035FB49E81 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34__ctor_m94C29717341C14234AD9CF36184DCDFBD833289A (U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34_System_IDisposable_Dispose_mB53413E6BF760966D349D046CAB37A781262AEEA (U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadImageU3Ed__34_MoveNext_mF876A79A57EBE9555F988124BCDF72B6DFF06275 (U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__34_MoveNext_mF876A79A57EBE9555F988124BCDF72B6DFF06275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * V_1 = NULL;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_2 = NULL;
	String_t* V_3 = NULL;
	Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * V_4 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_6 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_7 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_8 = NULL;
	BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484 * V_9 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * V_11 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ed;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_assetCache.ImageCache[imageID] == null)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_4 = V_1;
		NullCheck(L_4);
		AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * L_5 = L_4->get__assetCache_9();
		NullCheck(L_5);
		Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* L_6 = AssetCache_get_ImageCache_m6A91CB211E84652E52D9DF4F9067E74207F792F7(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_imageID_3();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0271;
		}
	}
	{
		// Texture2D texture = null;
		V_2 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
		// if (image.Uri != null)
		Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * L_11 = __this->get_image_4();
		NullCheck(L_11);
		String_t* L_12 = L_11->get_Uri_7();
		if (!L_12)
		{
			goto IL_01df;
		}
	}
	{
		// var uri = image.Uri;
		Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * L_13 = __this->get_image_4();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_Uri_7();
		V_3 = L_14;
		// Regex regex = new Regex(Base64StringInitializer);
		Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * L_15 = (Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF *)il2cpp_codegen_object_new(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_il2cpp_TypeInfo_var);
		Regex__ctor_m2769A5BA7B7A835514F6C0E4D30FAD467C6B1B0C(L_15, _stringLiteral185B3E88E68C99B8F86395F4CF26FB31FC3BDF21, /*hidden argument*/NULL);
		// Match match = regex.Match(uri);
		String_t* L_16 = V_3;
		NullCheck(L_15);
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_17 = Regex_Match_mC2C718B93803F6633A708E430F8698E70354B77C(L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		// if (match.Success)
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_18 = V_4;
		NullCheck(L_18);
		bool L_19 = Group_get_Success_m91D00749B3C9D2030B72C6DA3AF2B3BA48F22521(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a1;
		}
	}
	{
		// var base64Data = uri.Substring(match.Length);
		String_t* L_20 = V_3;
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_21 = V_4;
		NullCheck(L_21);
		int32_t L_22 = Capture_get_Length_mB41E1D86823156F57D3FE0B9F31BF3C6DD3D3C94(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_23 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_20, L_22, /*hidden argument*/NULL);
		// var textureData = Convert.FromBase64String(base64Data);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		// texture = new Texture2D(0, 0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_25 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_25, 0, 0, /*hidden argument*/NULL);
		V_2 = L_25;
		// texture.LoadImage(textureData);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_26 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = V_5;
		ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B(L_26, L_27, /*hidden argument*/NULL);
		// }
		goto IL_025e;
	}

IL_00a1:
	{
		// else if (_loadType == LoadType.Uri)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->get__loadType_12();
		if (L_29)
		{
			goto IL_0184;
		}
	}
	{
		// var www = UnityWebRequest.Get(Path.Combine(rootPath, uri));
		String_t* L_30 = __this->get_rootPath_5();
		String_t* L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_32 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_30, L_31, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_33 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_32, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_6(L_33);
		// www.downloadHandler = new DownloadHandlerTexture();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_34 = __this->get_U3CwwwU3E5__2_6();
		DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * L_35 = (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 *)il2cpp_codegen_object_new(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_il2cpp_TypeInfo_var);
		DownloadHandlerTexture__ctor_m6529FAAB9A79017C30CF7744A3B7EBAAF1A647ED(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E(L_34, L_35, /*hidden argument*/NULL);
		// yield return www.SendWebRequest();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_36 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_36);
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_37 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_36, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_37);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ed:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var tempTexture = DownloadHandlerTexture.GetContent(www);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_38 = __this->get_U3CwwwU3E5__2_6();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_39 = DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744(L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		// if (tempTexture != null)
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_40 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_41 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_40, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_013d;
		}
	}
	{
		// texture = new Texture2D(tempTexture.width, tempTexture.height, tempTexture.format, true);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_42 = V_6;
		NullCheck(L_42);
		int32_t L_43 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_42);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_44 = V_6;
		NullCheck(L_44);
		int32_t L_45 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_46 = V_6;
		NullCheck(L_46);
		int32_t L_47 = Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F(L_46, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_48 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_48, L_43, L_45, L_47, (bool)1, /*hidden argument*/NULL);
		V_2 = L_48;
		// texture.SetPixels(tempTexture.GetPixels());
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_49 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_50 = V_6;
		NullCheck(L_50);
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_51 = Texture2D_GetPixels_mE87C4C2438D7DE39C50EC1C91E438BB15026BBE3(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Texture2D_SetPixels_mDE50229135F49F323D265340C415D680CCB2FB92(L_49, L_51, /*hidden argument*/NULL);
		// texture.Apply(true);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_52 = V_2;
		NullCheck(L_52);
		Texture2D_Apply_m368893ECE2F9659BDA54ED1E4EB00D01CC2D1B16(L_52, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0178;
	}

IL_013d:
	{
		// Debug.LogFormat("{0} {1}", www.responseCode, www.url);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_53 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_54 = L_53;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_55 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_55);
		int64_t L_56 = UnityWebRequest_get_responseCode_m34819872549939D1EF9EA3D4010974FBEBAF0070(L_55, /*hidden argument*/NULL);
		int64_t L_57 = L_56;
		RuntimeObject * L_58 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_58);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_58);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_59 = L_54;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_60 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_60);
		String_t* L_61 = UnityWebRequest_get_url_m030A0D89670638A2C0E86A42AA84C767314672C6(L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_61);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_61);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteralB245F58149930DBC70CF0AA7D270B51BF8AD5B2F, L_59, /*hidden argument*/NULL);
		// texture = new Texture2D(16, 16);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_62 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_62, ((int32_t)16), ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_62;
	}

IL_0178:
	{
		// }
		__this->set_U3CwwwU3E5__2_6((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)NULL);
		goto IL_025e;
	}

IL_0184:
	{
		// else if (_loadType == LoadType.Stream)
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = L_63->get__loadType_12();
		if ((!(((uint32_t)L_64) == ((uint32_t)1))))
		{
			goto IL_025e;
		}
	}
	{
		// var pathToLoad = Path.Combine(rootPath, uri);
		String_t* L_65 = __this->get_rootPath_5();
		String_t* L_66 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_67 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_65, L_66, /*hidden argument*/NULL);
		// var file = File.OpenRead(pathToLoad);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_68 = File_OpenRead_m3B2974AB5AA8011E587AC834BE71862BF77C2129(L_67, /*hidden argument*/NULL);
		V_7 = L_68;
		// byte[] bufferData = new byte[file.Length];
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_69 = V_7;
		NullCheck(L_69);
		int64_t L_70 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_69);
		if ((int64_t)(L_70) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, U3CLoadImageU3Ed__34_MoveNext_mF876A79A57EBE9555F988124BCDF72B6DFF06275_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_71 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_70)));
		V_8 = L_71;
		// file.Read(bufferData, 0, (int)file.Length);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_72 = V_7;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_73 = V_8;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_74 = V_7;
		NullCheck(L_74);
		int64_t L_75 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_74);
		NullCheck(L_72);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_72, L_73, 0, (((int32_t)((int32_t)L_75))));
		// file.Dispose();
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_76 = V_7;
		NullCheck(L_76);
		Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7(L_76, /*hidden argument*/NULL);
		// texture = new Texture2D(0, 0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_77 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_77, 0, 0, /*hidden argument*/NULL);
		V_2 = L_77;
		// texture.LoadImage(bufferData);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_78 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_79 = V_8;
		ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B(L_78, L_79, /*hidden argument*/NULL);
		// }
		goto IL_025e;
	}

IL_01df:
	{
		// texture = new Texture2D(0, 0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_80 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_80, 0, 0, /*hidden argument*/NULL);
		V_2 = L_80;
		// var bufferView = image.BufferView.Value;
		Image_tEC2AF09AA24F12F221C8C03350299218B1539DD5 * L_81 = __this->get_image_4();
		NullCheck(L_81);
		BufferViewId_t01B5D716B4F103B8BE52472F6C13EAB0E3B08FED * L_82 = L_81->get_BufferView_9();
		NullCheck(L_82);
		BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484 * L_83 = VirtFuncInvoker0< BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>::get_Value() */, L_82);
		V_9 = L_83;
		// var data = new byte[bufferView.ByteLength];
		BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484 * L_84 = V_9;
		NullCheck(L_84);
		int32_t L_85 = L_84->get_ByteLength_9();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_86 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_85);
		V_10 = L_86;
		// var bufferContents = _assetCache.BufferCache[bufferView.Buffer.Id];
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_87 = V_1;
		NullCheck(L_87);
		AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * L_88 = L_87->get__assetCache_9();
		NullCheck(L_88);
		Dictionary_2_t5B800EE700D413BCA39B405BC72843D604E5CDEB * L_89 = AssetCache_get_BufferCache_mDE54AA699C1EB44732C5D5BE49395E01124C69E9(L_88, /*hidden argument*/NULL);
		BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484 * L_90 = V_9;
		NullCheck(L_90);
		BufferId_tF3A65B2849C2735DE60F2713377E45EC7FDD1AF5 * L_91 = L_90->get_Buffer_7();
		NullCheck(L_91);
		int32_t L_92 = ((GLTFId_1_tDA2F9E30716B22A60411AA300585E65984D09E10 *)L_91)->get_Id_0();
		NullCheck(L_89);
		BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * L_93 = Dictionary_2_get_Item_m9EA7A1AADED24CFDFF8EA3527B74D98387D353A1(L_89, L_92, /*hidden argument*/Dictionary_2_get_Item_m9EA7A1AADED24CFDFF8EA3527B74D98387D353A1_RuntimeMethod_var);
		V_11 = L_93;
		// bufferContents.Stream.Position = bufferView.ByteOffset + bufferContents.ChunkOffset;
		BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * L_94 = V_11;
		NullCheck(L_94);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_95 = BufferCacheData_get_Stream_mE894C4BC2656F0738CF37F5AD04B33F3DE3BAE05(L_94, /*hidden argument*/NULL);
		BufferView_t2DA1C44882D20E0C188071C456246E9AEA090484 * L_96 = V_9;
		NullCheck(L_96);
		int32_t L_97 = L_96->get_ByteOffset_8();
		BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * L_98 = V_11;
		NullCheck(L_98);
		int64_t L_99 = BufferCacheData_get_ChunkOffset_m1F9AF4CCCBD548B9971085A19689502658BCE05A(L_98, /*hidden argument*/NULL);
		NullCheck(L_95);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_95, ((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_97))), (int64_t)L_99)));
		// bufferContents.Stream.Read(data, 0, data.Length);
		BufferCacheData_t4013B91D6EF6FD8E4915E9B533EF479351F01F7D * L_100 = V_11;
		NullCheck(L_100);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_101 = BufferCacheData_get_Stream_mE894C4BC2656F0738CF37F5AD04B33F3DE3BAE05(L_100, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_102 = V_10;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_103 = V_10;
		NullCheck(L_103);
		NullCheck(L_101);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_101, L_102, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_103)->max_length)))));
		// texture.LoadImage(data);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_104 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_105 = V_10;
		ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B(L_104, L_105, /*hidden argument*/NULL);
	}

IL_025e:
	{
		// _assetCache.ImageCache[imageID] = texture;
		GLTFSceneImporter_tB010C9E6BC9B9F07ECE0434D11FC3BE062276854 * L_106 = V_1;
		NullCheck(L_106);
		AssetCache_t88E90B7130D52BEA080DAD5B41B03AE936D55350 * L_107 = L_106->get__assetCache_9();
		NullCheck(L_107);
		Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* L_108 = AssetCache_get_ImageCache_m6A91CB211E84652E52D9DF4F9067E74207F792F7(L_107, /*hidden argument*/NULL);
		int32_t L_109 = __this->get_imageID_3();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_110 = V_2;
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_110);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)L_110);
	}

IL_0271:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA44EBB7CAF7F45B193FAC92D88736EEA8680E9ED (U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m3E5770184709DEA0C75B1E0C0B4D33DD132CA60C (U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m3E5770184709DEA0C75B1E0C0B4D33DD132CA60C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m3E5770184709DEA0C75B1E0C0B4D33DD132CA60C_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<LoadImage>d__34::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__34_System_Collections_IEnumerator_get_Current_m18B65650CFF4E5565E844423E572F95F5EE35478 (U3CLoadImageU3Ed__34_t4DDFFEAE0716B0040D0167894397CDA61D66AF43 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshal_pinvoke(const GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A& unmarshaled, GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
extern "C" void GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshal_pinvoke_back(const GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshaled_pinvoke& marshaled, GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A& unmarshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshal_pinvoke_cleanup(GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshal_com(const GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A& unmarshaled, GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshaled_com& marshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
extern "C" void GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshal_com_back(const GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshaled_com& marshaled, GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A& unmarshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshal_com_cleanup(GLBStream_t261F875F33704F47106C7188FBAB3CDE1145505A_marshaled_com& marshaled)
{
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
// System.Void UnityGLTF.WebRequestException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m736BEB36F432E5EC8F52B849897105FB060F13A1 (WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m736BEB36F432E5EC8F52B849897105FB060F13A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException() : base() { }
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		// public WebRequestException() : base() { }
		return;
	}
}
// System.Void UnityGLTF.WebRequestException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m125D2328C1CD40C5F155D9352EF4EBEAB0E2AA1C (WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m125D2328C1CD40C5F155D9352EF4EBEAB0E2AA1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		// public WebRequestException(string message) : base(message) { }
		return;
	}
}
// System.Void UnityGLTF.WebRequestException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m5E3810FE63E881AC24048409593FDEF35B95845C (WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m5E3810FE63E881AC24048409593FDEF35B95845C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebRequestException(string message, Exception inner) : base(message, inner) { }
		return;
	}
}
// System.Void UnityGLTF.WebRequestException::.ctor(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m41F1355C062406060F9CC6F57E6C55438EF988B8 (WebRequestException_tFB2B03AD112281C424703E9FAC8D0B69520E7887 * __this, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m41F1355C062406060F9CC6F57E6C55438EF988B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException(UnityWebRequest www) : base(string.Format("Error: {0} when requesting: {1}", www.responseCode, www.url)) { }
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_0 = ___www0;
		NullCheck(L_0);
		int64_t L_1 = UnityWebRequest_get_responseCode_m34819872549939D1EF9EA3D4010974FBEBAF0070(L_0, /*hidden argument*/NULL);
		int64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_2);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_4 = ___www0;
		NullCheck(L_4);
		String_t* L_5 = UnityWebRequest_get_url_m030A0D89670638A2C0E86A42AA84C767314672C6(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralD47A4DC4181EC96A1DB0F6A1AAC71D1C187CA8AD, L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_6, /*hidden argument*/NULL);
		// public WebRequestException(UnityWebRequest www) : base(string.Format("Error: {0} when requesting: {1}", www.responseCode, www.url)) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
