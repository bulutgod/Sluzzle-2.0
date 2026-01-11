#include "pch-cpp.hpp"





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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
struct List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607;
struct List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
struct TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E;
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
struct TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9;
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
struct TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
struct TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113;
struct TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct CoroutineRunner_t8847927DF73692C6AD756F9D0DE661D9CDA14D6A;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IGrid_t03CC92630C04B7AD27F39A65D193B206449B469A;
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
struct ITileFactory_t3EAE7E3267F53E06E26DCED6EFF3C783FC3C0718;
struct JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9;
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
struct String_t;
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64;
struct TileGrid_t7210AF21272875DB6E1221182BBFA7CE2968F405;
struct TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4;
struct TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E;
struct TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
struct MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6;
struct U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F;
struct U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630;
struct U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B;
struct U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342;
struct U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGrid_t03CC92630C04B7AD27F39A65D193B206449B469A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITileFactory_t3EAE7E3267F53E06E26DCED6EFF3C783FC3C0718_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m38E498B201096F24434DD30250DCC050E5CDF80A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m7CA89ADA382A32CE3FAAC6F725A74C72C1DCADB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF1D9758F54D03FAC6DD67FD5C47E94A7BD7921CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6E432C8CCD8BE4DE34C8045233217C10FB06E4AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEntranceCoroutineU3Ed__30_System_Collections_IEnumerator_Reset_mDB3779B6628264A5ABAE7B40BF60785AD6FCE8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CImprovedSpawnAnimationU3Ed__8_System_Collections_IEnumerator_Reset_m8E4BE7FD0D34D176407154866852E0215A7F8EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMergeAnimationCoroutineU3Ed__8_System_Collections_IEnumerator_Reset_m5E2512431AC9E0DE40D2A688D38FDEC04CFE34F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_mBED5F10A1989944459B3387067E8898EAEF23746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSparkleCoroutineU3Ed__33_System_Collections_IEnumerator_Reset_m46D3EC807FE9F37F8304A5E59B1FA9AC7C47C53D_RuntimeMethod_var;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D  : public RuntimeObject
{
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F  : public RuntimeObject
{
};
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D  : public RuntimeObject
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___characterCount;
	int32_t ___spriteCount;
	int32_t ___spaceCount;
	int32_t ___wordCount;
	int32_t ___linkCount;
	int32_t ___lineCount;
	int32_t ___pageCount;
	int32_t ___materialCount;
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___characterInfo;
	TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC* ___wordInfo;
	TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E* ___linkInfo;
	TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* ___lineInfo;
	TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9* ___pageInfo;
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfo;
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___m_CachedMeshInfo;
};
struct TileGrid_t7210AF21272875DB6E1221182BBFA7CE2968F405  : public RuntimeObject
{
	TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF* ___tiles;
	int32_t ___size;
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
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* ___U3CU3E4__this;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete;
	float ___U3CelapsedU3E5__2;
	float ___U3CwaitTimeU3E5__3;
};
struct U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* ___U3CU3E4__this;
	float ___U3CoriginalSizeU3E5__2;
	float ___U3CdurationU3E5__3;
	float ___U3CelapsedU3E5__4;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack;
	int32_t ___index;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct BoardConfig_tB4EE698A2AC907E9E504F8BAEB1417440F56A6A8 
{
	int32_t ___Size;
	float ___Spacing;
	float ___Offset;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___vertexCount;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___uvs0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack;
	int32_t ___index;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	int32_t ___value__;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
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
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	int32_t ___value__;
};
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	int32_t ___value__;
};
struct GlyphClassDefinitionType_t9C21A3848A07B17C2690F285B5FA60A2E246FBA2 
{
	int32_t ___value__;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding;
};
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	int32_t ___value__;
};
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
};
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	int32_t ___value__;
};
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	int32_t ___value__;
};
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	int32_t ___value__;
};
struct TextWrappingModes_t982BC65D6DA703E73C04B99286285ECD3DDF207E 
{
	int32_t ___value__;
};
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	int32_t ___value__;
};
struct TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E  : public RuntimeObject
{
	RuntimeObject* ___grid;
	RuntimeObject* ___factory;
	BoardConfig_tB4EE698A2AC907E9E504F8BAEB1417440F56A6A8 ___config;
	List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* ___emptyPositionsCache;
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___spawnDelay;
};
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight;
};
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	int32_t ___value__;
};
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	int32_t ___value__;
};
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	int32_t ___value__;
};
struct U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* ___U3CU3E4__this;
	float ___duration;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartPosU3E5__2;
	float ___U3CelapsedU3E5__3;
};
struct U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___tile;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtargetScaleU3E5__2;
	float ___U3CdurationU3E5__3;
	float ___U3CelapsedU3E5__4;
};
struct U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* ___U3CU3E4__this;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartPosU3E5__2;
	float ___U3CdurationU3E5__3;
	float ___U3CelapsedU3E5__4;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack;
	int32_t ___index;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F  : public RuntimeObject
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___visibleSpaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	int32_t ___elementType;
	Il2CppChar ___character;
	int32_t ___index;
	int32_t ___stringLength;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* ___alternativeGlyph;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	bool ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___xAdvance;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	int32_t ___style;
	bool ___isVisible;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	int32_t ___elementType;
	uint8_t ___character;
	int32_t ___index;
	int32_t ___stringLength;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke ___alternativeGlyph;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___xAdvance;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	int32_t ___elementType;
	uint8_t ___character;
	int32_t ___index;
	int32_t ___stringLength;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com* ___alternativeGlyph;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___xAdvance;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	bool ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack;
	int32_t ___index;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};
struct CoroutineRunner_t8847927DF73692C6AD756F9D0DE661D9CDA14D6A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	float ___bounceStrength;
	float ___bounceDuration;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___bounceCurve;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalScale;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___jellyCoroutine;
	bool ___scaleInitialized;
};
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___U3ClevelU3Ek__BackingField;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer;
	TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* ___mover;
	JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* ___jellyEffect;
};
struct TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___moveCoroutine;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___scaleCoroutine;
	JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* ___jellyEffect;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastMoveDirection;
};
struct TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___titleText;
	bool ___enableFloat;
	bool ___enableGlow;
	bool ___enableGradient;
	bool ___enableLetterAnimation;
	float ___floatAmount;
	float ___floatSpeed;
	float ___glowSpeed;
	float ___minGlow;
	float ___maxGlow;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___glowColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color3;
	float ___gradientSpeed;
	float ___waveAmount;
	float ___waveSpeed;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shadowObject;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalPosition;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___textMaterial;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___candyGradient;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	String_t* ___m_text;
	bool ___m_IsTextBackingStringDirty;
	RuntimeObject* ___m_TextPreprocessor;
	bool ___m_isRightToLeft;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset;
	bool ___m_isSDFShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial;
	int32_t ___m_currentMaterialIndex;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials;
	bool ___m_isMaterialDirty;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_HighlightState;
	bool ___m_ConvertToLinearSpace;
	bool ___m_enableVertexGradient;
	int32_t ___m_colorMode;
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset;
	bool ___m_tintAllSprites;
	bool ___m_tintSprite;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor;
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet;
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle;
	int32_t ___m_TextStyleHashCode;
	bool ___m_overrideHtmlColors;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor;
	float ___m_outlineWidth;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_currentEnvMapRotation;
	bool ___m_hasEnvMapProperty;
	float ___m_fontSize;
	float ___m_currentFontSize;
	float ___m_fontSizeBase;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack;
	int32_t ___m_fontWeight;
	int32_t ___m_FontWeightInternal;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack;
	bool ___m_enableAutoSizing;
	float ___m_maxFontSize;
	float ___m_minFontSize;
	int32_t ___m_AutoSizeIterationCount;
	int32_t ___m_AutoSizeMaxIterationCount;
	bool ___m_IsAutoSizePointSizeSet;
	float ___m_fontSizeMin;
	float ___m_fontSizeMax;
	int32_t ___m_fontStyle;
	int32_t ___m_FontStyleInternal;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack;
	bool ___m_isUsingBold;
	int32_t ___m_HorizontalAlignment;
	int32_t ___m_VerticalAlignment;
	int32_t ___m_textAlignment;
	int32_t ___m_lineJustification;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners;
	float ___m_characterSpacing;
	float ___m_cSpacing;
	float ___m_monoSpacing;
	bool ___m_duoSpace;
	float ___m_wordSpacing;
	float ___m_lineSpacing;
	float ___m_lineSpacingDelta;
	float ___m_lineHeight;
	bool ___m_IsDrivenLineSpacing;
	float ___m_lineSpacingMax;
	float ___m_paragraphSpacing;
	float ___m_charWidthMaxAdj;
	float ___m_charWidthAdjDelta;
	int32_t ___m_TextWrappingMode;
	bool ___m_isCharacterWrappingEnabled;
	bool ___m_isNonBreakingSpace;
	bool ___m_isIgnoringAlignment;
	float ___m_wordWrappingRatios;
	int32_t ___m_overflowMode;
	int32_t ___m_firstOverflowCharacterIndex;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent;
	bool ___m_isTextTruncated;
	bool ___m_enableKerning;
	int32_t ___m_LastBaseGlyphIndex;
	List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607* ___m_ActiveFontFeatures;
	bool ___m_enableExtraPadding;
	bool ___checkPaddingRequired;
	bool ___m_isRichText;
	bool ___m_EmojiFallbackSupport;
	bool ___m_parseCtrlCharacters;
	bool ___m_isOverlay;
	bool ___m_isOrthographic;
	bool ___m_isCullingEnabled;
	bool ___m_isMaskingEnabled;
	bool ___isMaskUpdateRequired;
	bool ___m_ignoreCulling;
	int32_t ___m_horizontalMapping;
	int32_t ___m_verticalMapping;
	float ___m_uvLineOffset;
	int32_t ___m_renderMode;
	int32_t ___m_geometrySortingOrder;
	bool ___m_IsTextObjectScaleStatic;
	bool ___m_VertexBufferAutoSizeReduction;
	int32_t ___m_firstVisibleCharacter;
	int32_t ___m_maxVisibleCharacters;
	int32_t ___m_maxVisibleWords;
	int32_t ___m_maxVisibleLines;
	bool ___m_useMaxVisibleDescender;
	int32_t ___m_pageToDisplay;
	bool ___m_isNewPage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin;
	float ___m_marginLeft;
	float ___m_marginRight;
	float ___m_marginWidth;
	float ___m_marginHeight;
	float ___m_width;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo;
	bool ___m_havePropertiesChanged;
	bool ___m_isUsingLegacyAnimationComponent;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition;
	bool ___U3CautoSizeTextContainerU3Ek__BackingField;
	bool ___m_autoSizeTextContainer;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh;
	bool ___m_isVolumetricText;
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText;
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator;
	float ___m_flexibleHeight;
	float ___m_flexibleWidth;
	float ___m_minWidth;
	float ___m_minHeight;
	float ___m_maxWidth;
	float ___m_maxHeight;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement;
	float ___m_preferredWidth;
	float ___m_RenderedWidth;
	bool ___m_isPreferredWidthDirty;
	float ___m_preferredHeight;
	float ___m_RenderedHeight;
	bool ___m_isPreferredHeightDirty;
	bool ___m_isCalculatingPreferredValues;
	int32_t ___m_layoutPriority;
	bool ___m_isLayoutDirty;
	bool ___m_isAwake;
	bool ___m_isWaitingOnResourceLoad;
	int32_t ___m_inputSource;
	float ___m_fontScaleMultiplier;
	float ___tag_LineIndent;
	float ___tag_Indent;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack;
	bool ___tag_NoParsing;
	bool ___m_isTextLayoutPhase;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_FXRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FXScale;
	TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113* ___m_TextProcessingArray;
	int32_t ___m_InternalTextProcessingArraySize;
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo;
	int32_t ___m_totalCharacterCount;
	int32_t ___m_characterCount;
	int32_t ___m_firstCharacterOfLine;
	int32_t ___m_firstVisibleCharacterOfLine;
	int32_t ___m_lastCharacterOfLine;
	int32_t ___m_lastVisibleCharacterOfLine;
	int32_t ___m_lineNumber;
	int32_t ___m_lineVisibleCharacterCount;
	int32_t ___m_lineVisibleSpaceCount;
	int32_t ___m_pageNumber;
	float ___m_PageAscender;
	float ___m_maxTextAscender;
	float ___m_maxCapHeight;
	float ___m_ElementAscender;
	float ___m_ElementDescender;
	float ___m_maxLineAscender;
	float ___m_maxLineDescender;
	float ___m_startOfLineAscender;
	float ___m_startOfLineDescender;
	float ___m_lineOffset;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack;
	bool ___m_colorGradientPresetIsTinted;
	float ___m_tabSpacing;
	float ___m_spacing;
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks;
	int32_t ___m_TextStyleStackDepth;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack;
	int32_t ___m_ItalicAngle;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack;
	float ___m_padding;
	float ___m_baselineOffset;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack;
	float ___m_xAdvance;
	int32_t ___m_textElementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset;
	int32_t ___m_spriteCount;
	int32_t ___m_spriteIndex;
	int32_t ___m_spriteAnimationID;
	bool ___m_ignoreActiveState;
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power;
};
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	bool ___m_isRebuildingLayout;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild;
	bool ___m_ShouldUpdateCulling;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect;
	bool ___m_ValidRect;
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText;
	bool ___m_hasFontAssetChanged;
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects;
	float ___m_previousLossyScaleY;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas;
	float ___m_CanvasScaleFactor;
	bool ___m_isFirstAllocation;
	int32_t ___m_max_characters;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial;
	bool ___m_isScrollRegionSet;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix;
	bool ___m_isRegisteredForEvents;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___materialIndexPairs;
};
struct List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_StaticFields
{
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___s_emptyArray;
};
struct ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields
{
	int32_t ___ID_MainTex;
	int32_t ___ID_FaceTex;
	int32_t ___ID_FaceColor;
	int32_t ___ID_FaceDilate;
	int32_t ___ID_Shininess;
	int32_t ___ID_OutlineOffset1;
	int32_t ___ID_OutlineOffset2;
	int32_t ___ID_OutlineOffset3;
	int32_t ___ID_OutlineMode;
	int32_t ___ID_IsoPerimeter;
	int32_t ___ID_Softness;
	int32_t ___ID_UnderlayColor;
	int32_t ___ID_UnderlayOffsetX;
	int32_t ___ID_UnderlayOffsetY;
	int32_t ___ID_UnderlayDilate;
	int32_t ___ID_UnderlaySoftness;
	int32_t ___ID_UnderlayOffset;
	int32_t ___ID_UnderlayIsoPerimeter;
	int32_t ___ID_WeightNormal;
	int32_t ___ID_WeightBold;
	int32_t ___ID_OutlineTex;
	int32_t ___ID_OutlineWidth;
	int32_t ___ID_OutlineSoftness;
	int32_t ___ID_OutlineColor;
	int32_t ___ID_Outline2Color;
	int32_t ___ID_Outline2Width;
	int32_t ___ID_Padding;
	int32_t ___ID_GradientScale;
	int32_t ___ID_ScaleX;
	int32_t ___ID_ScaleY;
	int32_t ___ID_PerspectiveFilter;
	int32_t ___ID_Sharpness;
	int32_t ___ID_TextureWidth;
	int32_t ___ID_TextureHeight;
	int32_t ___ID_BevelAmount;
	int32_t ___ID_GlowColor;
	int32_t ___ID_GlowOffset;
	int32_t ___ID_GlowPower;
	int32_t ___ID_GlowOuter;
	int32_t ___ID_GlowInner;
	int32_t ___ID_LightAngle;
	int32_t ___ID_EnvMap;
	int32_t ___ID_EnvMatrix;
	int32_t ___ID_EnvMatrixRotation;
	int32_t ___ID_MaskCoord;
	int32_t ___ID_ClipRect;
	int32_t ___ID_MaskSoftnessX;
	int32_t ___ID_MaskSoftnessY;
	int32_t ___ID_VertexOffsetX;
	int32_t ___ID_VertexOffsetY;
	int32_t ___ID_UseClipRect;
	int32_t ___ID_StencilID;
	int32_t ___ID_StencilOp;
	int32_t ___ID_StencilComp;
	int32_t ___ID_StencilReadMask;
	int32_t ___ID_StencilWriteMask;
	int32_t ___ID_ShaderFlags;
	int32_t ___ID_ScaleRatio_A;
	int32_t ___ID_ScaleRatio_B;
	int32_t ___ID_ScaleRatio_C;
	String_t* ___Keyword_Bevel;
	String_t* ___Keyword_Glow;
	String_t* ___Keyword_Underlay;
	String_t* ___Keyword_Ratios;
	String_t* ___Keyword_MASK_SOFT;
	String_t* ___Keyword_MASK_HARD;
	String_t* ___Keyword_MASK_TEX;
	String_t* ___Keyword_Outline;
	String_t* ___ShaderTag_ZTestMode;
	String_t* ___ShaderTag_CullMode;
	float ___m_clamp;
	bool ___isInitialized;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___k_ShaderRef_MobileSDF;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___k_ShaderRef_MobileBitmap;
};
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorPositive;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorNegative;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_StaticFields
{
	int32_t ___k_ColorId;
	int32_t ___k_MainTexId;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties;
};
struct CoroutineRunner_t8847927DF73692C6AD756F9D0DE661D9CDA14D6A_StaticFields
{
	CoroutineRunner_t8847927DF73692C6AD756F9D0DE661D9CDA14D6A* ___instance;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite;
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest;
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest;
	MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6* ___OnMissingCharacter;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag;
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState;
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2;
	float ___k_LargePositiveFloat;
	float ___k_LargeNegativeFloat;
	int32_t ___k_LargePositiveInt;
	int32_t ___k_LargeNegativeInt;
};
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveTextExtentMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF  : public RuntimeArray
{
	ALIGN_FIELD (8) Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* m_Items[1];

	inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 m_Items[1];

	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alternativeGlyph), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alternativeGlyph), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
};
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B m_Items[1];

	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A m_Items[1];

	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6E432C8CCD8BE4DE34C8045233217C10FB06E4AD_gshared (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_gshared_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A_gshared (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF1D9758F54D03FAC6DD67FD5C47E94A7BD7921CF_gshared_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_gshared_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCA7F3A28BDCA36F422D9DA44CDDCEEA7C7DC20D6_gshared (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TileGrid_IsValidPosition_mF93E014E31643C9AF85362B280E0BB5B52380641 (TileGrid_t7210AF21272875DB6E1221182BBFA7CE2968F405* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* Component_GetComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m38E498B201096F24434DD30250DCC050E5CDF80A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* GameObject_AddComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m7CA89ADA382A32CE3FAAC6F725A74C72C1DCADB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TileMover_MoveCoroutine_m05C01C8BD4F7D804FA3AB3DCA15F5041E42BDE91 (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, float ___1_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_onComplete, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TileMover_MergeAnimationCoroutine_m0B0B9A68CCF67D00D1D6D0A065132CA8099DC769 (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_onComplete, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCoroutineU3Ed__7__ctor_mC5F5ED687691FB6218493CF388084DB4882E5DFE (U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeAnimationCoroutineU3Ed__8__ctor_m53C82A0290F01953AFA627D2BAF8CEF22B38BE26 (U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JellyEffect_ResetScale_m6B4E59A788D0B83C5B2056EDE82C55E495AA6F07 (JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JellyEffect_PlayJellyMerge_m4584A3778BCAE21E788F7D05C689AEBE0B9D10F4 (JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TileMover_EaseOutCubic_m8E9F5DF66A6B5B0E788B5CAD304E6911D267E243 (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, float ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JellyEffect_PlayJellyBounce_m7136993FA8AFB3B284AAD982382EF305139E07F7 (JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) ;
inline void List_1__ctor_m6E432C8CCD8BE4DE34C8045233217C10FB06E4AD (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, int32_t, const RuntimeMethod*))List_1__ctor_m6E432C8CCD8BE4DE34C8045233217C10FB06E4AD_gshared)(__this, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileSpawner_GetEmptyPositions_m004E76B493B66C1703D34ED6FAA95D72190FE2A1 (TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, const RuntimeMethod*))List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, int32_t, const RuntimeMethod*))List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileSpawner_Spawn_mC5A0868D00791AC0372EE4D5C4705E8F7FE487FD (TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_levelIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoardConfig_GetWorldPosition_mF9EE1B645B42E1AA71FB70CD0ED997A353995F05 (BoardConfig_tB4EE698A2AC907E9E504F8BAEB1417440F56A6A8* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JellyEffect_SetOriginalScale_m0A1F82A031BD8B157BC475D6441447EDD704E1A7 (JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_scale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoroutineRunner_t8847927DF73692C6AD756F9D0DE661D9CDA14D6A* CoroutineRunner_get_Instance_m5E6C38F8FBE0EB48DA54D55B30FD76347F1B9E08 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TileSpawner_ImprovedSpawnAnimation_mC9DF1D5B8691E301B4B1700EC9553E088D988089 (TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E* __this, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___0_tile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImprovedSpawnAnimationU3Ed__8__ctor_m74474513A6CA623237B38468DDAA5DA5AD555818 (U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
inline void List_1_Clear_mF1D9758F54D03FAC6DD67FD5C47E94A7BD7921CF_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, const RuntimeMethod*))List_1_Clear_mF1D9758F54D03FAC6DD67FD5C47E94A7BD7921CF_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline void List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_gshared_inline)(__this, ___0_item, method);
}
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_SetupTitle_m136B1A422F9025C4EFD30101F900938D1EE17AA3 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_outlineWidth_m33ADF665CB2D3DBD9FB3F70DE62979FD63ADD592 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_outlineColor_mBEFF42BF9AB15BC7C1DA78489CB4F32A2270F7F0 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_enableVertexGradient_m21A55C744B7BF817B6AA349FCB8C2AC54E8CCACA (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGradient__ctor_m8FFAAFD98D0DC4F7C6D41410EF574A6600DCA40B (VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_colorGradient_m372D6EEDBE955EC7F33895F57E760802937808C8 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontMaterial_m091675AB7E417CD77F8C69B3AEE5B78BBCF59922 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_FloatAnimation_m9D6531383E1171F1DCA7622B0764101563A90AF5 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_GlowAnimation_mBB10572AFF20D869C0B2C07E21796A0CEF8E26E6 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_AnimateGradient_mC68B401F48754502A819B09C5F7F6093EE869688 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_WaveAnimation_mF4A66CBFE1FD9AC362BE763CA2EF854B19608F0A (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TitleAnimator_EntranceCoroutine_mF7E7D2D667C20E4390104205C1412AD66C9A43CC (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEntranceCoroutineU3Ed__30__ctor_m92F52D2116FB2DED0C88830FB867096C58C03227 (U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TitleAnimator_SparkleCoroutine_mF30C0F80270E6E20A02635DCBDF7F46BD973064A (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSparkleCoroutineU3Ed__33__ctor_m7324D4D71A01BC66EFE1B391E5A936C0EEF7DBEF (U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_alpha_mD01D24A2E320F30E26BD42AEE8137F9C4F4EBB57 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TitleAnimator_EaseOutBounce_m831C208CBAD87966B9A7D67A9A15C713232B8351 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, float ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mCA7F3A28BDCA36F422D9DA44CDDCEEA7C7DC20D6 (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))List_1_AddWithResize_mCA7F3A28BDCA36F422D9DA44CDDCEEA7C7DC20D6_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 43217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TileGrid_get_Size_mF0BA5E0258A8DD482D028149E074BFD264405646 (TileGrid_t7210AF21272875DB6E1221182BBFA7CE2968F405* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:6>
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
// Method Definition Index: 43218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* TileGrid_get_Item_m5E14CC07B8F7C50CCCB3E7DB8EEBCBB209460826 (TileGrid_t7210AF21272875DB6E1221182BBFA7CE2968F405* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:10>
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		bool L_2;
		L_2 = TileGrid_IsValidPosition_mF93E014E31643C9AF85362B280E0BB5B52380641(__this, L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		return (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)NULL;
	}

IL_000c:
	{
		TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF* L_3 = __this->___tiles;
		int32_t L_4 = ___0_x;
		int32_t L_5 = ___1_y;
		NullCheck(L_3);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_6;
		L_6 = (L_3)->GetAt(L_4, L_5);
		return L_6;
	}
}
// Method Definition Index: 43219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGrid_set_Item_mDFD352340EB34482C5DA40470732557CA52FF866 (TileGrid_t7210AF21272875DB6E1221182BBFA7CE2968F405* __this, int32_t ___0_x, int32_t ___1_y, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___2_value, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:13>
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		bool L_2;
		L_2 = TileGrid_IsValidPosition_mF93E014E31643C9AF85362B280E0BB5B52380641(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:14>
		TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF* L_3 = __this->___tiles;
		int32_t L_4 = ___0_x;
		int32_t L_5 = ___1_y;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_6 = ___2_value;
		NullCheck(L_3);
		(L_3)->SetAt(L_4, L_5, L_6);
	}

IL_0018:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:15>
		return;
	}
}
// Method Definition Index: 43220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGrid__ctor_mE885798D27E3BA3A94F19BDDFBA822DC676E8C18 (TileGrid_t7210AF21272875DB6E1221182BBFA7CE2968F405* __this, int32_t ___0_boardSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:18>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:20>
		int32_t L_0 = ___0_boardSize;
		__this->___size = L_0;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:21>
		int32_t L_1 = __this->___size;
		int32_t L_2 = __this->___size;
		il2cpp_array_size_t L_4[] = { (il2cpp_array_size_t)L_1, (il2cpp_array_size_t)L_2 };
		TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF* L_3 = (TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF*)GenArrayNew(TileU5BU2CU5D_tE157540D68C23C8C6BFC6BB1A63BE27D9247FBAF_il2cpp_TypeInfo_var, L_4);
		__this->___tiles = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tiles), (void*)L_3);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:22>
		return;
	}
}
// Method Definition Index: 43221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TileGrid_IsValidPosition_mF93E014E31643C9AF85362B280E0BB5B52380641 (TileGrid_t7210AF21272875DB6E1221182BBFA7CE2968F405* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileGrid.cs:26>
		int32_t L_0 = ___0_x;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___0_x;
		int32_t L_2 = __this->___size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = ___1_y;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_4 = ___1_y;
		int32_t L_5 = __this->___size;
		return (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}

IL_001b:
	{
		return (bool)0;
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
// Method Definition Index: 43222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMover_Awake_m7C957D89526C2383E97E668C4F2D4523D0DE4DDE (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m38E498B201096F24434DD30250DCC050E5CDF80A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m7CA89ADA382A32CE3FAAC6F725A74C72C1DCADB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:13>
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_0;
		L_0 = Component_GetComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m38E498B201096F24434DD30250DCC050E5CDF80A(__this, Component_GetComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m38E498B201096F24434DD30250DCC050E5CDF80A_RuntimeMethod_var);
		__this->___jellyEffect = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jellyEffect), (void*)L_0);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:14>
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_1 = __this->___jellyEffect;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:16>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_4;
		L_4 = GameObject_AddComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m7CA89ADA382A32CE3FAAC6F725A74C72C1DCADB4(L_3, GameObject_AddComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m7CA89ADA382A32CE3FAAC6F725A74C72C1DCADB4_RuntimeMethod_var);
		__this->___jellyEffect = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jellyEffect), (void*)L_4);
	}

IL_002b:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:18>
		return;
	}
}
// Method Definition Index: 43223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMover_MoveTo_m94FA163FF09A38EA21293B4A215AB310A1E75FBD (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_onComplete, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:22>
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___moveCoroutine;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:24>
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___moveCoroutine;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:28>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_targetPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_4, NULL);
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___lastMoveDirection = L_6;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:30>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_targetPosition;
		float L_8 = ___1_duration;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___2_onComplete;
		RuntimeObject* L_10;
		L_10 = TileMover_MoveCoroutine_m05C01C8BD4F7D804FA3AB3DCA15F5041E42BDE91(__this, L_7, L_8, L_9, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		__this->___moveCoroutine = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveCoroutine), (void*)L_11);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:31>
		return;
	}
}
// Method Definition Index: 43224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMover_PlayMergeAnimation_mC11732840E85A726A9CFCD25782B07BB323F3C88 (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_onComplete, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:35>
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___scaleCoroutine;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:37>
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___scaleCoroutine;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:41>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:43>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___0_onComplete;
		RuntimeObject* L_5;
		L_5 = TileMover_MergeAnimationCoroutine_m0B0B9A68CCF67D00D1D6D0A065132CA8099DC769(__this, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		__this->___scaleCoroutine = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scaleCoroutine), (void*)L_6);
		return;
	}

IL_0035:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:48>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___0_onComplete;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___0_onComplete;
		NullCheck(L_8);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_8, NULL);
	}

IL_003e:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:50>
		return;
	}
}
// Method Definition Index: 43225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TileMover_MoveCoroutine_m05C01C8BD4F7D804FA3AB3DCA15F5041E42BDE91 (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, float ___1_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_onComplete, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* L_0 = (U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630*)il2cpp_codegen_object_new(U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630_il2cpp_TypeInfo_var);
		U3CMoveCoroutineU3Ed__7__ctor_mC5F5ED687691FB6218493CF388084DB4882E5DFE(L_0, 0, NULL);
		U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_target;
		NullCheck(L_2);
		L_2->___target = L_3;
		U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* L_4 = L_2;
		float L_5 = ___1_duration;
		NullCheck(L_4);
		L_4->___duration = L_5;
		U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* L_6 = L_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___2_onComplete;
		NullCheck(L_6);
		L_6->___onComplete = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___onComplete), (void*)L_7);
		return L_6;
	}
}
// Method Definition Index: 43226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TileMover_MergeAnimationCoroutine_m0B0B9A68CCF67D00D1D6D0A065132CA8099DC769 (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_onComplete, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* L_0 = (U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F*)il2cpp_codegen_object_new(U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F_il2cpp_TypeInfo_var);
		U3CMergeAnimationCoroutineU3Ed__8__ctor_m53C82A0290F01953AFA627D2BAF8CEF22B38BE26(L_0, 0, NULL);
		U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* L_2 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_onComplete;
		NullCheck(L_2);
		L_2->___onComplete = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___onComplete), (void*)L_3);
		return L_2;
	}
}
// Method Definition Index: 43227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TileMover_EaseOutCubic_m8E9F5DF66A6B5B0E788B5CAD304E6911D267E243 (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, float ___0_t, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:126>
		float L_0 = ___0_t;
		float L_1;
		L_1 = powf(((float)il2cpp_codegen_subtract((1.0f), L_0)), (3.0f));
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// Method Definition Index: 43228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMover_CancelMove_m5875A85A8E94347AC1509025D34BB692E6F99E7D (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:131>
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___moveCoroutine;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:133>
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___moveCoroutine;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:134>
		__this->___moveCoroutine = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveCoroutine), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
	}

IL_001b:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:137>
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_2 = __this->___jellyEffect;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:139>
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_4 = __this->___jellyEffect;
		NullCheck(L_4);
		JellyEffect_ResetScale_m6B4E59A788D0B83C5B2056EDE82C55E495AA6F07(L_4, NULL);
	}

IL_0034:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:141>
		return;
	}
}
// Method Definition Index: 43229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMover__ctor_m413A70A83A43741FFB03BF096895F6F28029559B (TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 43230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeAnimationCoroutineU3Ed__8__ctor_m53C82A0290F01953AFA627D2BAF8CEF22B38BE26 (U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 43231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeAnimationCoroutineU3Ed__8_System_IDisposable_Dispose_mA7A85C368B40C44FE816872564A8DCAA9E935B20 (U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 43232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMergeAnimationCoroutineU3Ed__8_MoveNext_mB3A03BE843BA772CE4A77145EEF81EC35747EB17 (U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B8_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B7_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B18_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B17_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B25_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B24_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00e2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:92>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_10, NULL);
		if (L_11)
		{
			goto IL_0058;
		}
	}

IL_0045:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:94>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = __this->___onComplete;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = L_12;
		if (L_13)
		{
			G_B8_0 = L_13;
			goto IL_0051;
		}
		G_B7_0 = L_13;
	}
	{
		goto IL_0056;
	}

IL_0051:
	{
		NullCheck(G_B8_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B8_0, NULL);
	}

IL_0056:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:95>
		return (bool)0;
	}

IL_0058:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:99>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_14 = V_1;
		NullCheck(L_14);
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_15 = L_14->___jellyEffect;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:101>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_17 = V_1;
		NullCheck(L_17);
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_18 = L_17->___jellyEffect;
		NullCheck(L_18);
		JellyEffect_PlayJellyMerge_m4584A3778BCAE21E788F7D05C689AEBE0B9D10F4(L_18, NULL);
	}

IL_0071:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:105>
		__this->___U3CelapsedU3E5__2 = (0.0f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:106>
		__this->___U3CwaitTimeU3E5__3 = (0.400000006f);
		goto IL_00e9;
	}

IL_0089:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:111>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_20)
		{
			goto IL_00ad;
		}
	}
	{
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_21 = V_1;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_23)
		{
			goto IL_00ad;
		}
	}
	{
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_24 = V_1;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		bool L_26;
		L_26 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_25, NULL);
		if (L_26)
		{
			goto IL_00c0;
		}
	}

IL_00ad:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:113>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = __this->___onComplete;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = L_27;
		if (L_28)
		{
			G_B18_0 = L_28;
			goto IL_00b9;
		}
		G_B17_0 = L_28;
	}
	{
		goto IL_00be;
	}

IL_00b9:
	{
		NullCheck(G_B18_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B18_0, NULL);
	}

IL_00be:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:114>
		return (bool)0;
	}

IL_00c0:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:117>
		float L_29 = __this->___U3CelapsedU3E5__2;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedU3E5__2 = ((float)il2cpp_codegen_add(L_29, L_30));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:118>
		__this->___U3CU3E2__current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00e2:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_00e9:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:108>
		float L_31 = __this->___U3CelapsedU3E5__2;
		float L_32 = __this->___U3CwaitTimeU3E5__3;
		if ((((float)L_31) < ((float)L_32)))
		{
			goto IL_0089;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:121>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_33 = __this->___onComplete;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_34 = L_33;
		if (L_34)
		{
			G_B25_0 = L_34;
			goto IL_0103;
		}
		G_B24_0 = L_34;
	}
	{
		goto IL_0108;
	}

IL_0103:
	{
		NullCheck(G_B25_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B25_0, NULL);
	}

IL_0108:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:122>
		return (bool)0;
	}
}
// Method Definition Index: 43233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMergeAnimationCoroutineU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m437B8767478D45FD2A39CBC7F175F65FB96F7637 (U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 43234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeAnimationCoroutineU3Ed__8_System_Collections_IEnumerator_Reset_m5E2512431AC9E0DE40D2A688D38FDEC04CFE34F6 (U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMergeAnimationCoroutineU3Ed__8_System_Collections_IEnumerator_Reset_m5E2512431AC9E0DE40D2A688D38FDEC04CFE34F6_RuntimeMethod_var)));
	}
}
// Method Definition Index: 43235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMergeAnimationCoroutineU3Ed__8_System_Collections_IEnumerator_get_Current_m0C5B50F5DFB81C8E41D60F7FAA84D82C5BB47490 (U3CMergeAnimationCoroutineU3Ed__8_t15A9B0B1A0B6654CAAA2CBA141A7D53D6DAFF74F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
// Method Definition Index: 43236
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCoroutineU3Ed__7__ctor_mC5F5ED687691FB6218493CF388084DB4882E5DFE (U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 43237
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCoroutineU3Ed__7_System_IDisposable_Dispose_mB7D9FB2432390E1C9CBBAE3C09CC32D15C6DD944 (U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 43238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveCoroutineU3Ed__7_MoveNext_mA94E3AB240B827A1FA745D628372661F2E7AD8E5 (U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* V_1 = NULL;
	float V_2 = 0.0f;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B16_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B15_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00ad;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:54>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___U3CstartPosU3E5__2 = L_6;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:55>
		__this->___U3CelapsedU3E5__3 = (0.0f);
		goto IL_00b4;
	}

IL_003f:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:60>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0058;
		}
	}

IL_0056:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:62>
		return (bool)0;
	}

IL_0058:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:65>
		float L_12 = __this->___U3CelapsedU3E5__3;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedU3E5__3 = ((float)il2cpp_codegen_add(L_12, L_13));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:66>
		float L_14 = __this->___U3CelapsedU3E5__3;
		float L_15 = __this->___duration;
		V_2 = ((float)(L_14/L_15));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:68>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_16 = V_1;
		float L_17 = V_2;
		NullCheck(L_16);
		float L_18;
		L_18 = TileMover_EaseOutCubic_m8E9F5DF66A6B5B0E788B5CAD304E6911D267E243(L_16, L_17, NULL);
		V_2 = L_18;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:70>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_19 = V_1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___U3CstartPosU3E5__2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___target;
		float L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_21, L_22, L_23, NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_24, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:71>
		__this->___U3CU3E2__current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00ad:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_00b4:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:57>
		float L_25 = __this->___U3CelapsedU3E5__3;
		float L_26 = __this->___duration;
		if ((((float)L_25) < ((float)L_26)))
		{
			goto IL_003f;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:75>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_27 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_0122;
		}
	}
	{
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_29 = V_1;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_0122;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:77>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_32 = V_1;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->___target;
		NullCheck(L_33);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_34, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:80>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_35 = V_1;
		NullCheck(L_35);
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_36 = L_35->___jellyEffect;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_0111;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:82>
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_38 = V_1;
		NullCheck(L_38);
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_39 = L_38->___jellyEffect;
		TileMover_t4C54AD57284988B31DE1344EB3C483F544474BC4* L_40 = V_1;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = L_40->___lastMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_41, NULL);
		NullCheck(L_39);
		JellyEffect_PlayJellyBounce_m7136993FA8AFB3B284AAD982382EF305139E07F7(L_39, L_42, NULL);
	}

IL_0111:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:85>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_43 = __this->___onComplete;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_44 = L_43;
		if (L_44)
		{
			G_B16_0 = L_44;
			goto IL_011d;
		}
		G_B15_0 = L_44;
	}
	{
		goto IL_0122;
	}

IL_011d:
	{
		NullCheck(G_B16_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B16_0, NULL);
	}

IL_0122:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileMover.cs:87>
		return (bool)0;
	}
}
// Method Definition Index: 43239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveCoroutineU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9A63CFD4BDD393E5324EE804DF9465C66154EFB4 (U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 43240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_mBED5F10A1989944459B3387067E8898EAEF23746 (U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_mBED5F10A1989944459B3387067E8898EAEF23746_RuntimeMethod_var)));
	}
}
// Method Definition Index: 43241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveCoroutineU3Ed__7_System_Collections_IEnumerator_get_Current_m9B70E08CFC01DD35824196B2BEB14563FF47BFDF (U3CMoveCoroutineU3Ed__7_tD16E8DF32F15649AAFA45F7A5F5B3DA290179630* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
// Method Definition Index: 43242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileSpawner__ctor_m4D17E9982704CBA7FC82882A051DC9CD2FB8B77E (TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E* __this, RuntimeObject* ___0_tileGrid, RuntimeObject* ___1_tileFactory, BoardConfig_tB4EE698A2AC907E9E504F8BAEB1417440F56A6A8 ___2_boardConfig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6E432C8CCD8BE4DE34C8045233217C10FB06E4AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:13>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:15>
		RuntimeObject* L_0 = ___0_tileGrid;
		__this->___grid = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grid), (void*)L_0);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:16>
		RuntimeObject* L_1 = ___1_tileFactory;
		__this->___factory = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___factory), (void*)L_1);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:17>
		BoardConfig_tB4EE698A2AC907E9E504F8BAEB1417440F56A6A8 L_2 = ___2_boardConfig;
		__this->___config = L_2;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:19>
		BoardConfig_tB4EE698A2AC907E9E504F8BAEB1417440F56A6A8 L_3 = ___2_boardConfig;
		int32_t L_4 = L_3.___Size;
		BoardConfig_tB4EE698A2AC907E9E504F8BAEB1417440F56A6A8 L_5 = ___2_boardConfig;
		int32_t L_6 = L_5.___Size;
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_7 = (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*)il2cpp_codegen_object_new(List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_il2cpp_TypeInfo_var);
		List_1__ctor_m6E432C8CCD8BE4DE34C8045233217C10FB06E4AD(L_7, ((int32_t)il2cpp_codegen_multiply(L_4, L_6)), List_1__ctor_m6E432C8CCD8BE4DE34C8045233217C10FB06E4AD_RuntimeMethod_var);
		__this->___emptyPositionsCache = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___emptyPositionsCache), (void*)L_7);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:20>
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (0.0500000007f), NULL);
		__this->___spawnDelay = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnDelay), (void*)L_8);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:21>
		return;
	}
}
// Method Definition Index: 43243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileSpawner_SpawnRandom_m9B729CA685C84FEDB9D7CE51847FD8731700BBFD (TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:25>
		TileSpawner_GetEmptyPositions_m004E76B493B66C1703D34ED6FAA95D72190FE2A1(__this, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:27>
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_0 = __this->___emptyPositionsCache;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_inline(L_0, List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:27>
		return;
	}

IL_0014:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:29>
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_2 = __this->___emptyPositionsCache;
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_3 = __this->___emptyPositionsCache;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_inline(L_3, List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_4, NULL);
		NullCheck(L_2);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		L_6 = List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A(L_2, L_5, List_1_get_Item_mC90712CBD530245E4BC68D4AB87DDC53EE6C117A_RuntimeMethod_var);
		V_0 = L_6;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:30>
		int32_t L_7;
		L_7 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_8;
		L_8 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		TileSpawner_Spawn_mC5A0868D00791AC0372EE4D5C4705E8F7FE487FD(__this, L_7, L_8, 0, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:31>
		return;
	}
}
// Method Definition Index: 43244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileSpawner_Spawn_mC5A0868D00791AC0372EE4D5C4705E8F7FE487FD (TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_levelIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m38E498B201096F24434DD30250DCC050E5CDF80A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrid_t03CC92630C04B7AD27F39A65D193B206449B469A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITileFactory_t3EAE7E3267F53E06E26DCED6EFF3C783FC3C0718_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* V_1 = NULL;
	JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* V_2 = NULL;
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:35>
		RuntimeObject* L_0 = __this->___grid;
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___1_y;
		NullCheck(L_0);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_3;
		L_3 = InterfaceFuncInvoker2< Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*, int32_t, int32_t >::Invoke(0, IGrid_t03CC92630C04B7AD27F39A65D193B206449B469A_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:35>
		return;
	}

IL_0016:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:37>
		BoardConfig_tB4EE698A2AC907E9E504F8BAEB1417440F56A6A8* L_5 = (BoardConfig_tB4EE698A2AC907E9E504F8BAEB1417440F56A6A8*)(&__this->___config);
		int32_t L_6 = ___0_x;
		int32_t L_7 = ___1_y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = BoardConfig_GetWorldPosition_mF9EE1B645B42E1AA71FB70CD0ED997A353995F05(L_5, L_6, L_7, NULL);
		V_0 = L_8;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:38>
		RuntimeObject* L_9 = __this->___factory;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		int32_t L_11 = ___2_levelIndex;
		NullCheck(L_9);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_12;
		L_12 = InterfaceFuncInvoker2< Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0, ITileFactory_t3EAE7E3267F53E06E26DCED6EFF3C783FC3C0718_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		V_1 = L_12;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:39>
		RuntimeObject* L_13 = __this->___grid;
		int32_t L_14 = ___0_x;
		int32_t L_15 = ___1_y;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_16 = V_1;
		NullCheck(L_13);
		InterfaceActionInvoker3< int32_t, int32_t, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* >::Invoke(1, IGrid_t03CC92630C04B7AD27F39A65D193B206449B469A_il2cpp_TypeInfo_var, L_13, L_14, L_15, L_16);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:41>
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_19, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:44>
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_20 = V_1;
		NullCheck(L_20);
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_21;
		L_21 = Component_GetComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m38E498B201096F24434DD30250DCC050E5CDF80A(L_20, Component_GetComponent_TisJellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9_m38E498B201096F24434DD30250DCC050E5CDF80A_RuntimeMethod_var);
		V_2 = L_21;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:45>
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_22 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_007a;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:47>
		JellyEffect_t16B6F6C6912EA32B38FC14367FEEF0FD46C0E9B9* L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (0.400000006f), (0.400000006f), (0.400000006f), NULL);
		NullCheck(L_24);
		JellyEffect_SetOriginalScale_m0A1F82A031BD8B157BC475D6441447EDD704E1A7(L_24, L_25, NULL);
	}

IL_007a:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:50>
		CoroutineRunner_t8847927DF73692C6AD756F9D0DE661D9CDA14D6A* L_26;
		L_26 = CoroutineRunner_get_Instance_m5E6C38F8FBE0EB48DA54D55B30FD76347F1B9E08(NULL);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_27 = V_1;
		RuntimeObject* L_28;
		L_28 = TileSpawner_ImprovedSpawnAnimation_mC9DF1D5B8691E301B4B1700EC9553E088D988089(__this, L_27, NULL);
		NullCheck(L_26);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_26, L_28, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:51>
		return;
	}
}
// Method Definition Index: 43245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TileSpawner_ImprovedSpawnAnimation_mC9DF1D5B8691E301B4B1700EC9553E088D988089 (TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E* __this, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___0_tile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B* L_0 = (U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B*)il2cpp_codegen_object_new(U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B_il2cpp_TypeInfo_var);
		U3CImprovedSpawnAnimationU3Ed__8__ctor_m74474513A6CA623237B38468DDAA5DA5AD555818(L_0, 0, NULL);
		U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B* L_1 = L_0;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_2 = ___0_tile;
		NullCheck(L_1);
		L_1->___tile = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tile), (void*)L_2);
		return L_1;
	}
}
// Method Definition Index: 43246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileSpawner_GetEmptyPositions_m004E76B493B66C1703D34ED6FAA95D72190FE2A1 (TileSpawner_tFD4A10BA1EEB462C5D50E8E7D8370FF31EE58C7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrid_t03CC92630C04B7AD27F39A65D193B206449B469A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF1D9758F54D03FAC6DD67FD5C47E94A7BD7921CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:81>
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_0 = __this->___emptyPositionsCache;
		NullCheck(L_0);
		List_1_Clear_mF1D9758F54D03FAC6DD67FD5C47E94A7BD7921CF_inline(L_0, List_1_Clear_mF1D9758F54D03FAC6DD67FD5C47E94A7BD7921CF_RuntimeMethod_var);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:83>
		V_0 = 0;
		goto IL_0050;
	}

IL_000f:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:85>
		V_1 = 0;
		goto IL_003e;
	}

IL_0013:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:87>
		RuntimeObject* L_1 = __this->___grid;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_4;
		L_4 = InterfaceFuncInvoker2< Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*, int32_t, int32_t >::Invoke(0, IGrid_t03CC92630C04B7AD27F39A65D193B206449B469A_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:88>
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_6 = __this->___emptyPositionsCache;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_9), L_7, L_8, NULL);
		NullCheck(L_6);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_6, L_9, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
	}

IL_003a:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:85>
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003e:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:85>
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = __this->___grid;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(2, IGrid_t03CC92630C04B7AD27F39A65D193B206449B469A_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:83>
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0050:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:83>
		int32_t L_15 = V_0;
		RuntimeObject* L_16 = __this->___grid;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(2, IGrid_t03CC92630C04B7AD27F39A65D193B206449B469A_il2cpp_TypeInfo_var, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:91>
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
// Method Definition Index: 43247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImprovedSpawnAnimationU3Ed__8__ctor_m74474513A6CA623237B38468DDAA5DA5AD555818 (U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 43248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImprovedSpawnAnimationU3Ed__8_System_IDisposable_Dispose_mB9472DC85CE5E2B1591922D685716FB280F32BE9 (U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 43249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CImprovedSpawnAnimationU3Ed__8_MoveNext_mD29E344BFF09B11D759F21070C1AA1F651832DFC (U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00d8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:55>
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_3 = __this->___tile;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:55>
		return (bool)0;
	}

IL_002a:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:57>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.400000006f), (0.400000006f), (0.400000006f), NULL);
		__this->___U3CtargetScaleU3E5__2 = L_5;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:58>
		__this->___U3CdurationU3E5__3 = (0.150000006f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:59>
		__this->___U3CelapsedU3E5__4 = (0.0f);
		goto IL_00df;
	}

IL_005f:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:63>
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_6 = __this->___tile;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_006f;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:63>
		return (bool)0;
	}

IL_006f:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:65>
		float L_8 = __this->___U3CelapsedU3E5__4;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedU3E5__4 = ((float)il2cpp_codegen_add(L_8, L_9));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:66>
		float L_10 = __this->___U3CelapsedU3E5__4;
		float L_11 = __this->___U3CdurationU3E5__3;
		V_1 = ((float)(L_10/L_11));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:67>
		float L_12 = V_1;
		float L_13;
		L_13 = powf(((float)il2cpp_codegen_subtract((1.0f), L_12)), (3.0f));
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), L_13));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:69>
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_14 = __this->___tile;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___U3CtargetScaleU3E5__2;
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_16, L_17, L_18, NULL);
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_19, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:70>
		__this->___U3CU3E2__current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00d8:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_00df:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:61>
		float L_20 = __this->___U3CelapsedU3E5__4;
		float L_21 = __this->___U3CdurationU3E5__3;
		if ((((float)L_20) < ((float)L_21)))
		{
			goto IL_005f;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:73>
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_22 = __this->___tile;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0114;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:75>
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_24 = __this->___tile;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___U3CtargetScaleU3E5__2;
		NullCheck(L_25);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_25, L_26, NULL);
	}

IL_0114:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TileSpawner.cs:77>
		return (bool)0;
	}
}
// Method Definition Index: 43250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CImprovedSpawnAnimationU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m35C74380E74C6325F525FD61AD2F0F014DDEC255 (U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 43251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImprovedSpawnAnimationU3Ed__8_System_Collections_IEnumerator_Reset_m8E4BE7FD0D34D176407154866852E0215A7F8EE3 (U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CImprovedSpawnAnimationU3Ed__8_System_Collections_IEnumerator_Reset_m8E4BE7FD0D34D176407154866852E0215A7F8EE3_RuntimeMethod_var)));
	}
}
// Method Definition Index: 43252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CImprovedSpawnAnimationU3Ed__8_System_Collections_IEnumerator_get_Current_m882666C3CE22EAD56737652F26802E5615798FEA (U3CImprovedSpawnAnimationU3Ed__8_t082E142B2E136ED08B455BFA38B65D356174ED6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
// Method Definition Index: 43253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_Start_m4673974CB0A44AB2E5859BC2189AB1371D88F938 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:57>
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform), (void*)L_0);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:58>
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___rectTransform;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		__this->___originalPosition = L_3;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:60>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___titleText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:61>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6;
		L_6 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___titleText = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___titleText), (void*)L_6);
	}

IL_003c:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:63>
		TitleAnimator_SetupTitle_m136B1A422F9025C4EFD30101F900938D1EE17AA3(__this, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:64>
		return;
	}
}
// Method Definition Index: 43254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_SetupTitle_m136B1A422F9025C4EFD30101F900938D1EE17AA3 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:68>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___titleText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:68>
		return;
	}

IL_000f:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:71>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___titleText;
		NullCheck(L_2);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_2, (128.0f), NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:72>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___titleText;
		NullCheck(L_3);
		TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8(L_3, 1, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:73>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___titleText;
		NullCheck(L_4);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_4, ((int32_t)514), NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:76>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___titleText;
		NullCheck(L_5);
		TMP_Text_set_outlineWidth_m33ADF665CB2D3DBD9FB3F70DE62979FD63ADD592(L_5, (0.200000003f), NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:77>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___titleText;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), (0.0f), (0.0f), (0.0f), (0.5f), NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		L_8 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_7, NULL);
		NullCheck(L_6);
		TMP_Text_set_outlineColor_mBEFF42BF9AB15BC7C1DA78489CB4F32A2270F7F0(L_6, L_8, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:80>
		bool L_9 = __this->___enableGradient;
		if (!L_9)
		{
			goto IL_00b0;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:82>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___titleText;
		NullCheck(L_10);
		TMP_Text_set_enableVertexGradient_m21A55C744B7BF817B6AA349FCB8C2AC54E8CCACA(L_10, (bool)1, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:83>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:84>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:85>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:86>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:87>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:88>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___titleText;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___color1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___color2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___color3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___color1;
		VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F L_16;
		memset((&L_16), 0, sizeof(L_16));
		VertexGradient__ctor_m8FFAAFD98D0DC4F7C6D41410EF574A6600DCA40B((&L_16), L_12, L_13, L_14, L_15, NULL);
		NullCheck(L_11);
		TMP_Text_set_colorGradient_m372D6EEDBE955EC7F33895F57E760802937808C8(L_11, L_16, NULL);
	}

IL_00b0:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:92>
		bool L_17 = __this->___enableGlow;
		if (!L_17)
		{
			goto IL_00f2;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = __this->___titleText;
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00f2;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:95>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___titleText;
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22;
		L_22 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_21, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_23, L_22, NULL);
		__this->___textMaterial = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textMaterial), (void*)L_23);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:96>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->___titleText;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___textMaterial;
		NullCheck(L_24);
		TMP_Text_set_fontMaterial_m091675AB7E417CD77F8C69B3AEE5B78BBCF59922(L_24, L_25, NULL);
	}

IL_00f2:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:98>
		return;
	}
}
// Method Definition Index: 43255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_Update_m752C1B9AC981420ACDBABE5DF8A460FA80BD35B8 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:102>
		bool L_0 = __this->___enableFloat;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:104>
		TitleAnimator_FloatAnimation_m9D6531383E1171F1DCA7622B0764101563A90AF5(__this, NULL);
	}

IL_000e:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:107>
		bool L_1 = __this->___enableGlow;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:109>
		TitleAnimator_GlowAnimation_mBB10572AFF20D869C0B2C07E21796A0CEF8E26E6(__this, NULL);
	}

IL_001c:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:112>
		bool L_2 = __this->___enableGradient;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:114>
		TitleAnimator_AnimateGradient_mC68B401F48754502A819B09C5F7F6093EE869688(__this, NULL);
	}

IL_002a:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:117>
		bool L_3 = __this->___enableLetterAnimation;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:119>
		TitleAnimator_WaveAnimation_mF4A66CBFE1FD9AC362BE763CA2EF854B19608F0A(__this, NULL);
	}

IL_0038:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:123>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___shadowObject;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_007a;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:125>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___shadowObject;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (4.0f), (-4.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
	}

IL_007a:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:127>
		return;
	}
}
// Method Definition Index: 43256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_FloatAnimation_m9D6531383E1171F1DCA7622B0764101563A90AF5 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:131>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___originalPosition);
		float L_1 = L_0->___y;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___floatSpeed;
		float L_4;
		L_4 = sinf(((float)il2cpp_codegen_multiply(L_2, L_3)));
		float L_5 = __this->___floatAmount;
		V_0 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:132>
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___rectTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___originalPosition);
		float L_8 = L_7->___x;
		float L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, NULL);
		NullCheck(L_6);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_6, L_10, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:133>
		return;
	}
}
// Method Definition Index: 43257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_GlowAnimation_mBB10572AFF20D869C0B2C07E21796A0CEF8E26E6 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:137>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___textMaterial;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:139>
		float L_2 = __this->___minGlow;
		float L_3 = __this->___maxGlow;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_5 = __this->___glowSpeed;
		float L_6;
		L_6 = sinf(((float)il2cpp_codegen_multiply(L_4, L_5)));
		float L_7;
		L_7 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_2, L_3, ((float)(((float)il2cpp_codegen_add(L_6, (1.0f)))/(2.0f))), NULL);
		V_0 = L_7;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:142>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___textMaterial;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_9 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_GlowPower;
		float L_10 = V_0;
		NullCheck(L_8);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_8, L_9, L_10, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:143>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___textMaterial;
		int32_t L_12 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_GlowColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___glowColor;
		NullCheck(L_11);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_11, L_12, L_13, NULL);
	}

IL_0064:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:145>
		return;
	}
}
// Method Definition Index: 43258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_AnimateGradient_mC68B401F48754502A819B09C5F7F6093EE869688 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:149>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___titleText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:149>
		return;
	}

IL_000f:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:151>
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___gradientSpeed;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:154>
		float L_4 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_4, NULL);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = __this->___candyGradient;
		NullCheck(L_6);
		V_0 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:155>
		int32_t L_7 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = __this->___candyGradient;
		NullCheck(L_8);
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_7, 1))%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:156>
		int32_t L_9 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_10 = __this->___candyGradient;
		NullCheck(L_10);
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_9, 2))%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:157>
		int32_t L_11 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_12 = __this->___candyGradient;
		NullCheck(L_12);
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_11, 3))%((int32_t)(((RuntimeArray*)L_12)->max_length))));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:159>
		float L_13 = L_4;
		float L_14;
		L_14 = floorf(L_13);
		V_4 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:161>
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_15 = __this->___candyGradient;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_19 = __this->___candyGradient;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		float L_23 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_18, L_22, L_23, NULL);
		V_5 = L_24;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:162>
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_25 = __this->___candyGradient;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_29 = __this->___candyGradient;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		float L_33 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_28, L_32, L_33, NULL);
		V_6 = L_34;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:163>
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_35 = __this->___candyGradient;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_39 = __this->___candyGradient;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		float L_43 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		L_44 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_38, L_42, L_43, NULL);
		V_7 = L_44;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:164>
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_45 = __this->___candyGradient;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_49 = __this->___candyGradient;
		int32_t L_50 = V_0;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		float L_53 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54;
		L_54 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_48, L_52, L_53, NULL);
		V_8 = L_54;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:166>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_55 = __this->___titleText;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57 = V_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = V_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = V_8;
		VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F L_60;
		memset((&L_60), 0, sizeof(L_60));
		VertexGradient__ctor_m8FFAAFD98D0DC4F7C6D41410EF574A6600DCA40B((&L_60), L_56, L_57, L_58, L_59, NULL);
		NullCheck(L_55);
		TMP_Text_set_colorGradient_m372D6EEDBE955EC7F33895F57E760802937808C8(L_55, L_60, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:167>
		return;
	}
}
// Method Definition Index: 43259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_WaveAnimation_mF4A66CBFE1FD9AC362BE763CA2EF854B19608F0A (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:171>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___titleText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:171>
		return;
	}

IL_000f:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:173>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___titleText;
		NullCheck(L_2);
		VirtualActionInvoker2< bool, bool >::Invoke(101, L_2, (bool)0, (bool)0);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:175>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___titleText;
		NullCheck(L_3);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_4;
		L_4 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E(L_3, NULL);
		V_0 = L_4;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:177>
		V_1 = 0;
		goto IL_00ee;
	}

IL_002f:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:179>
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_5 = V_0;
		NullCheck(L_5);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_6 = L_5->___characterInfo;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		bool L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___isVisible;
		if (!L_8)
		{
			goto IL_00ea;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:182>
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_9 = V_0;
		NullCheck(L_9);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_10 = L_9->___characterInfo;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___vertexIndex;
		V_2 = L_12;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:183>
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_13 = V_0;
		NullCheck(L_13);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_14 = L_13->___characterInfo;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___materialReferenceIndex;
		V_3 = L_16;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:185>
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_17 = V_0;
		NullCheck(L_17);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_18 = L_17->___meshInfo;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___vertices;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:188>
		float L_21;
		L_21 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_22 = __this->___waveSpeed;
		int32_t L_23 = V_1;
		float L_24;
		L_24 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(((float)L_23), (0.5f))))));
		float L_25 = __this->___waveAmount;
		V_4 = ((float)il2cpp_codegen_multiply(L_24, L_25));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:191>
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = L_20;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		float* L_28 = (float*)(&((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___y);
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = V_4;
		*((float*)L_29) = (float)((float)il2cpp_codegen_add(L_30, L_31));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:192>
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = L_26;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		float* L_34 = (float*)(&((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1)))))->___y);
		float* L_35 = L_34;
		float L_36 = *((float*)L_35);
		float L_37 = V_4;
		*((float*)L_35) = (float)((float)il2cpp_codegen_add(L_36, L_37));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:193>
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = L_32;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		float* L_40 = (float*)(&((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, 2)))))->___y);
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		float L_43 = V_4;
		*((float*)L_41) = (float)((float)il2cpp_codegen_add(L_42, L_43));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:194>
		int32_t L_44 = V_2;
		NullCheck(L_38);
		float* L_45 = (float*)(&((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, 3)))))->___y);
		float* L_46 = L_45;
		float L_47 = *((float*)L_46);
		float L_48 = V_4;
		*((float*)L_46) = (float)((float)il2cpp_codegen_add(L_47, L_48));
	}

IL_00ea:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:177>
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00ee:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:177>
		int32_t L_50 = V_1;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = L_51->___characterCount;
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:198>
		V_5 = 0;
		goto IL_014d;
	}

IL_00ff:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:200>
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_53 = V_0;
		NullCheck(L_53);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_54 = L_53->___meshInfo;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___mesh;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_57 = V_0;
		NullCheck(L_57);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_58 = L_57->___meshInfo;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___vertices;
		NullCheck(L_56);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_56, L_60, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:201>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_61 = __this->___titleText;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_62 = V_0;
		NullCheck(L_62);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_63 = L_62->___meshInfo;
		int32_t L_64 = V_5;
		NullCheck(L_63);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___mesh;
		int32_t L_66 = V_5;
		NullCheck(L_61);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(102, L_61, L_65, L_66);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:198>
		int32_t L_67 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_014d:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:198>
		int32_t L_68 = V_5;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_69 = V_0;
		NullCheck(L_69);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_70 = L_69->___meshInfo;
		NullCheck(L_70);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_00ff;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:203>
		return;
	}
}
// Method Definition Index: 43260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_PlayEntranceAnimation_m9450016D9FA384A3553D60AAE7623E9CB050F76B (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:208>
		RuntimeObject* L_0;
		L_0 = TitleAnimator_EntranceCoroutine_mF7E7D2D667C20E4390104205C1412AD66C9A43CC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:209>
		return;
	}
}
// Method Definition Index: 43261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TitleAnimator_EntranceCoroutine_mF7E7D2D667C20E4390104205C1412AD66C9A43CC (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342* L_0 = (U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342*)il2cpp_codegen_object_new(U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342_il2cpp_TypeInfo_var);
		U3CEntranceCoroutineU3Ed__30__ctor_m92F52D2116FB2DED0C88830FB867096C58C03227(L_0, 0, NULL);
		U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 43262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TitleAnimator_EaseOutBounce_m831C208CBAD87966B9A7D67A9A15C713232B8351 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, float ___0_t, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:241>
		float L_0 = ___0_t;
		if ((!(((float)L_0) < ((float)(0.363636374f)))))
		{
			goto IL_0012;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:243>
		float L_1 = ___0_t;
		float L_2 = ___0_t;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_1)), L_2));
	}

IL_0012:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:245>
		float L_3 = ___0_t;
		if ((!(((float)L_3) < ((float)(0.727272749f)))))
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:247>
		float L_4 = ___0_t;
		___0_t = ((float)il2cpp_codegen_subtract(L_4, (0.545454562f)));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:248>
		float L_5 = ___0_t;
		float L_6 = ___0_t;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_5)), L_6)), (0.75f)));
	}

IL_0033:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:250>
		float L_7 = ___0_t;
		if ((!(((float)L_7) < ((float)(0.909090936f)))))
		{
			goto IL_0054;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:252>
		float L_8 = ___0_t;
		___0_t = ((float)il2cpp_codegen_subtract(L_8, (0.818181813f)));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:253>
		float L_9 = ___0_t;
		float L_10 = ___0_t;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_9)), L_10)), (0.9375f)));
	}

IL_0054:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:257>
		float L_11 = ___0_t;
		___0_t = ((float)il2cpp_codegen_subtract(L_11, (0.954545438f)));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:258>
		float L_12 = ___0_t;
		float L_13 = ___0_t;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_12)), L_13)), (0.984375f)));
	}
}
// Method Definition Index: 43263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator_PlaySparkle_mBEB197E6A10EAD961E1C41DF831D4FB464AF61FD (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:265>
		RuntimeObject* L_0;
		L_0 = TitleAnimator_SparkleCoroutine_mF30C0F80270E6E20A02635DCBDF7F46BD973064A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:266>
		return;
	}
}
// Method Definition Index: 43264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TitleAnimator_SparkleCoroutine_mF30C0F80270E6E20A02635DCBDF7F46BD973064A (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95* L_0 = (U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95*)il2cpp_codegen_object_new(U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95_il2cpp_TypeInfo_var);
		U3CSparkleCoroutineU3Ed__33__ctor_m7324D4D71A01BC66EFE1B391E5A936C0EEF7DBEF(L_0, 0, NULL);
		U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 43265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAnimator__ctor_m2F346E756CE3869EB0D39B6029088A85BE34D385 (TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:12>
		__this->___enableFloat = (bool)1;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:13>
		__this->___enableGlow = (bool)1;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:14>
		__this->___enableGradient = (bool)1;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:15>
		__this->___enableLetterAnimation = (bool)1;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:18>
		__this->___floatAmount = (10.0f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:19>
		__this->___floatSpeed = (2.0f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:22>
		__this->___glowSpeed = (1.5f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:23>
		__this->___minGlow = (0.300000012f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:24>
		__this->___maxGlow = (0.800000012f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:25>
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_0), (0.300000012f), (0.699999988f), (1.0f), NULL);
		__this->___glowColor = L_0;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:28>
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (1.0f), (0.400000006f), (0.600000024f), NULL);
		__this->___color1 = L_1;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:29>
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_2), (0.400000006f), (0.800000012f), (1.0f), NULL);
		__this->___color2 = L_2;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:30>
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), (0.899999976f), (0.600000024f), (1.0f), NULL);
		__this->___color3 = L_3;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:31>
		__this->___gradientSpeed = (0.5f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:34>
		__this->___waveAmount = (5.0f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:35>
		__this->___waveSpeed = (3.0f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:45>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:46>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:47>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:48>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:49>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:50>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:51>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:52>
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:53>
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)6);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), (1.0f), (0.349999994f), (0.5f), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_6);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_8), (1.0f), (0.600000024f), (0.200000003f), NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_8);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_10), (1.0f), (0.899999976f), (0.300000012f), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_10);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = L_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_12), (0.400000006f), (0.899999976f), (0.5f), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_12);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_13 = L_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_14), (0.300000012f), (0.699999988f), (1.0f), NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_14);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_15 = L_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_16), (0.699999988f), (0.400000006f), (1.0f), NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_16);
		__this->___candyGradient = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___candyGradient), (void*)L_15);
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
// Method Definition Index: 43266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEntranceCoroutineU3Ed__30__ctor_m92F52D2116FB2DED0C88830FB867096C58C03227 (U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 43267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEntranceCoroutineU3Ed__30_System_IDisposable_Dispose_mE20750A84789430CA3B43EFC07EBE1A12E26ECAF (U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 43268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEntranceCoroutineU3Ed__30_MoveNext_m151FBE43BE4C2F55539CE805F711FE6390299E77 (U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00ea;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:214>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_4 = V_1;
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = L_4->___titleText;
		NullCheck(L_5);
		TMP_Text_set_alpha_mD01D24A2E320F30E26BD42AEE8137F9C4F4EBB57(L_5, (0.0f), NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:215>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_6 = V_1;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___originalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (100.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_9, NULL);
		__this->___U3CstartPosU3E5__2 = L_10;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:216>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_11 = V_1;
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = L_11->___rectTransform;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___U3CstartPosU3E5__2;
		NullCheck(L_12);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_12, L_13, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:218>
		__this->___U3CdurationU3E5__3 = (0.800000012f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:219>
		__this->___U3CelapsedU3E5__4 = (0.0f);
		goto IL_00f1;
	}

IL_0084:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:223>
		float L_14 = __this->___U3CelapsedU3E5__4;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedU3E5__4 = ((float)il2cpp_codegen_add(L_14, L_15));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:224>
		float L_16 = __this->___U3CelapsedU3E5__4;
		float L_17 = __this->___U3CdurationU3E5__3;
		V_2 = ((float)(L_16/L_17));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:227>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_18 = V_1;
		float L_19 = V_2;
		NullCheck(L_18);
		float L_20;
		L_20 = TitleAnimator_EaseOutBounce_m831C208CBAD87966B9A7D67A9A15C713232B8351(L_18, L_19, NULL);
		V_3 = L_20;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:229>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_21 = V_1;
		NullCheck(L_21);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = L_21->___rectTransform;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = __this->___U3CstartPosU3E5__2;
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_24 = V_1;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24->___originalPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_25, NULL);
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_23, L_26, L_27, NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_22, L_28, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:230>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_29 = V_1;
		NullCheck(L_29);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_30 = L_29->___titleText;
		float L_31 = V_2;
		NullCheck(L_30);
		TMP_Text_set_alpha_mD01D24A2E320F30E26BD42AEE8137F9C4F4EBB57(L_30, L_31, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:232>
		__this->___U3CU3E2__current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00ea:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_00f1:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:221>
		float L_32 = __this->___U3CelapsedU3E5__4;
		float L_33 = __this->___U3CdurationU3E5__3;
		if ((((float)L_32) < ((float)L_33)))
		{
			goto IL_0084;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:235>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_34 = V_1;
		NullCheck(L_34);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35 = L_34->___rectTransform;
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_36 = V_1;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36->___originalPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_37, NULL);
		NullCheck(L_35);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_35, L_38, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:236>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_39 = V_1;
		NullCheck(L_39);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40 = L_39->___titleText;
		NullCheck(L_40);
		TMP_Text_set_alpha_mD01D24A2E320F30E26BD42AEE8137F9C4F4EBB57(L_40, (1.0f), NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:237>
		return (bool)0;
	}
}
// Method Definition Index: 43269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEntranceCoroutineU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB93D5A3C9DC21B7053AF259708CEDA3CFFF7303C (U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 43270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEntranceCoroutineU3Ed__30_System_Collections_IEnumerator_Reset_mDB3779B6628264A5ABAE7B40BF60785AD6FCE8C4 (U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEntranceCoroutineU3Ed__30_System_Collections_IEnumerator_Reset_mDB3779B6628264A5ABAE7B40BF60785AD6FCE8C4_RuntimeMethod_var)));
	}
}
// Method Definition Index: 43271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEntranceCoroutineU3Ed__30_System_Collections_IEnumerator_get_Current_m26FCC335A4CE69AC7ABC6C6997C869194B7EEAB2 (U3CEntranceCoroutineU3Ed__30_tAA46189F2277B64D2C35ED9219433E2FCB5B9342* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
// Method Definition Index: 43272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSparkleCoroutineU3Ed__33__ctor_m7324D4D71A01BC66EFE1B391E5A936C0EEF7DBEF (U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 43273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSparkleCoroutineU3Ed__33_System_IDisposable_Dispose_mFE9E54F070C3D7B7A8E63FC3CCD329009642CA2F (U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 43274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSparkleCoroutineU3Ed__33_MoveNext_m9B32A04C5DA07498A8913F3C7AFDC880465AEE17 (U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_1 = __this->___U3CU3E4__this;
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
			goto IL_00a6;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:270>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_4 = V_1;
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = L_4->___titleText;
		NullCheck(L_5);
		float L_6;
		L_6 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline(L_5, NULL);
		__this->___U3CoriginalSizeU3E5__2 = L_6;
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:273>
		__this->___U3CdurationU3E5__3 = (0.300000012f);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:274>
		__this->___U3CelapsedU3E5__4 = (0.0f);
		goto IL_00ad;
	}

IL_004a:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:278>
		float L_7 = __this->___U3CelapsedU3E5__4;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedU3E5__4 = ((float)il2cpp_codegen_add(L_7, L_8));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:279>
		float L_9 = __this->___U3CelapsedU3E5__4;
		float L_10 = __this->___U3CdurationU3E5__3;
		V_2 = ((float)(L_9/L_10));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:280>
		float L_11 = V_2;
		float L_12;
		L_12 = sinf(((float)il2cpp_codegen_multiply(L_11, (3.14159274f))));
		V_3 = ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(L_12, (0.100000001f)))));
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:281>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_13 = V_1;
		NullCheck(L_13);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = L_13->___titleText;
		float L_15 = __this->___U3CoriginalSizeU3E5__2;
		float L_16 = V_3;
		NullCheck(L_14);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_14, ((float)il2cpp_codegen_multiply(L_15, L_16)), NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:282>
		__this->___U3CU3E2__current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a6:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_00ad:
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:276>
		float L_17 = __this->___U3CelapsedU3E5__4;
		float L_18 = __this->___U3CdurationU3E5__3;
		if ((((float)L_17) < ((float)L_18)))
		{
			goto IL_004a;
		}
	}
	{
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:285>
		TitleAnimator_tFAAF899013A465C4A27F5F175AA3A1B080A8DEA2* L_19 = V_1;
		NullCheck(L_19);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = L_19->___titleText;
		float L_21 = __this->___U3CoriginalSizeU3E5__2;
		NullCheck(L_20);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_20, L_21, NULL);
		//<source_info:/Users/-buulut/Documents/GitHub/Sluzzle-2.0/Assets/Scripts/TitleAnimator.cs:286>
		return (bool)0;
	}
}
// Method Definition Index: 43275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSparkleCoroutineU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED9C043D275B6D4BA17EFD97CB1DA2C53DEBB9AD (U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 43276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSparkleCoroutineU3Ed__33_System_Collections_IEnumerator_Reset_m46D3EC807FE9F37F8304A5E59B1FA9AC7C47C53D (U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSparkleCoroutineU3Ed__33_System_Collections_IEnumerator_Reset_m46D3EC807FE9F37F8304A5E59B1FA9AC7C47C53D_RuntimeMethod_var)));
	}
}
// Method Definition Index: 43277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSparkleCoroutineU3Ed__33_System_Collections_IEnumerator_get_Current_m8846D166B102CE1F25E3F364E02A50BE7B7F8B01 (U3CSparkleCoroutineU3Ed__33_t167A8E5EAB92AEC76813DF7A6103D04D4E5C3E95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 26533
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 26515
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 11915
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 26503
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
// Method Definition Index: 26650
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 26661
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 26663
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 26524
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 26507
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
// Method Definition Index: 26665
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y = L_1;
		return;
	}
}
// Method Definition Index: 26651
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 26386
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
// Method Definition Index: 26419
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 26532
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 26623
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
// Method Definition Index: 26605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 26599
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 26398
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_a;
		float L_3 = L_2.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_b;
		float L_5 = L_4.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___r;
		float L_8 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_b;
		float L_12 = L_11.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_a;
		float L_14 = L_13.___g;
		float L_15 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_a;
		float L_17 = L_16.___b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___1_b;
		float L_19 = L_18.___b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___0_a;
		float L_21 = L_20.___b;
		float L_22 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___0_a;
		float L_24 = L_23.___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_b;
		float L_26 = L_25.___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___0_a;
		float L_28 = L_27.___a;
		float L_29 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
// Method Definition Index: 26387
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		__this->___a = (1.0f);
		return;
	}
}
// Method Definition Index: 26624
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_b;
		float L_5 = L_4.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_a;
		float L_7 = L_6.___x;
		float L_8 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_a;
		float L_10 = L_9.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_b;
		float L_12 = L_11.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___0_a;
		float L_14 = L_13.___y;
		float L_15 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 35303
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.ugui@7056cb05de4c/Runtime/TMP/TMP_Text.cs:466>
		float L_0 = __this->___m_fontSize;
		return L_0;
	}
}
// Method Definition Index: 19829
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7D6CB04952BDE74978E3DEB313A300913D805A76_gshared_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 19846
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF1D9758F54D03FAC6DD67FD5C47E94A7BD7921CF_gshared_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 19838
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_gshared_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)L_8);
		return;
	}

IL_0034:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = ___0_item;
		List_1_AddWithResize_mCA7F3A28BDCA36F422D9DA44CDDCEEA7C7DC20D6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 26513
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 26604
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 26418
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba = 0;
		uint8_t L_0 = ___0_r;
		__this->___r = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
// Method Definition Index: 26518
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 26537
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
