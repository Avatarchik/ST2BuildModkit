#pragma once

/**
 * Name: Stalker2
 * Version: 0.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MetasoundFrontend.EMetasoundFrontendClassType
	 */
	enum class EMetasoundFrontendClassType : uint8_t
	{
		External                 = 0,
		Graph                    = 1,
		Input                    = 2,
		Output                   = 3,
		Literal                  = 4,
		Variable                 = 5,
		VariableDeferredAccessor = 6,
		VariableAccessor         = 7,
		VariableMutator          = 8,
		Invalid                  = 9,
		MAX                      = 10
	};

	/**
	 * Enum MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
	 */
	enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
	{
		Visible = 0,
		Hidden  = 1,
		MAX     = 2
	};

	/**
	 * Enum MetasoundFrontend.EMetasoundFrontendStyleEdgeDisplay
	 */
	enum class EMetasoundFrontendStyleEdgeDisplay : uint8_t
	{
		Default   = 0,
		Inherited = 1,
		Hidden    = 2,
		MAX       = 3
	};

	/**
	 * Enum MetasoundFrontend.EMetasoundFrontendLiteralType
	 */
	enum class EMetasoundFrontendLiteralType : uint8_t
	{
		None         = 0,
		Boolean      = 1,
		Integer      = 2,
		Float        = 3,
		String       = 4,
		UObject      = 5,
		NoneArray    = 6,
		BooleanArray = 7,
		IntegerArray = 8,
		FloatArray   = 9,
		StringArray  = 10,
		UObjectArray = 11,
		Name         = 12,
		Invalid      = 13,
		MAX          = 14
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendVersionNumber
	 * Size -> 0x0008
	 */
	struct FMetasoundFrontendVersionNumber
	{
	public:
		int32_t                                                    Major;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minor;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendVersion
	 * Size -> 0x0010
	 */
	struct FMetasoundFrontendVersion
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMetasoundFrontendVersionNumber                     Number;                                                  // 0x0008(0x0008) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendVertex
	 * Size -> 0x0028
	 */
	struct FMetasoundFrontendVertex
	{
	public:
		unsigned char                                              UnknownData_45XU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TypeName;                                                // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               VertexID;                                                // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendLiteral
	 * Size -> 0x0068
	 */
	struct FMetasoundFrontendLiteral
	{
	public:
		EMetasoundFrontendLiteralType                              Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A7CI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AsNumDefault;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        AsName;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<bool>                                               AsBoolean;                                               // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            AsInteger;                                               // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<float>                                              AsFloat;                                                 // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class FString>                                      AsString;                                                // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UObject*>                                     AsUObject;                                               // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendVertexLiteral
	 * Size -> 0x0078
	 */
	struct FMetasoundFrontendVertexLiteral
	{
	public:
		struct FGuid                                               VertexID;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMetasoundFrontendLiteral                           Value;                                                   // 0x0010(0x0068) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendVariable
	 * Size -> 0x00F8
	 */
	struct FMetasoundFrontendVariable
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0008(0x0018) NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) NativeAccessSpecifierPublic
		class FName                                                TypeName;                                                // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMetasoundFrontendLiteral                           Literal;                                                 // 0x0040(0x0068) NativeAccessSpecifierPublic
		struct FGuid                                               ID;                                                      // 0x00A8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               VariableNodeID;                                          // 0x00B8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               MutatorNodeID;                                           // 0x00C8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       AccessorNodeIDs;                                         // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       DeferredAccessorNodeIDs;                                 // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendNodeInterface
	 * Size -> 0x0030
	 */
	struct FMetasoundFrontendNodeInterface
	{
	public:
		TArray<struct FMetasoundFrontendVertex>                    Inputs;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMetasoundFrontendVertex>                    Outputs;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMetasoundFrontendVertex>                    Environment;                                             // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
	 * Size -> 0x0058
	 */
	struct FMetasoundFrontendNodeStyleDisplay
	{
	public:
		EMetasoundFrontendNodeStyleDisplayVisibility               Visibility;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q640[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, struct FVector2D>                       Locations;                                               // 0x0008(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyle
	 * Size -> 0x0060
	 */
	struct FMetasoundFrontendNodeStyle
	{
	public:
		struct FMetasoundFrontendNodeStyleDisplay                  Display;                                                 // 0x0000(0x0058) NativeAccessSpecifierPublic
		bool                                                       bMessageNodeUpdated;                                     // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPrivate;                                              // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59GE[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendNode
	 * Size -> 0x00C8
	 */
	struct FMetasoundFrontendNode
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ClassID;                                                 // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMetasoundFrontendNodeInterface                     Interface;                                               // 0x0028(0x0030) NativeAccessSpecifierPublic
		TArray<struct FMetasoundFrontendVertexLiteral>             InputLiterals;                                           // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FMetasoundFrontendNodeStyle                         Style;                                                   // 0x0068(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendEdge
	 * Size -> 0x0040
	 */
	struct FMetasoundFrontendEdge
	{
	public:
		struct FGuid                                               FromNodeID;                                              // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               FromVertexID;                                            // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ToNodeID;                                                // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ToVertexID;                                              // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendStyleEdge
	 * Size -> 0x0001
	 */
	struct FMetasoundFrontendStyleEdge
	{
	public:
		EMetasoundFrontendStyleEdgeDisplay                         Display;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendStyleEdgeClass
	 * Size -> 0x000C
	 */
	struct FMetasoundFrontendStyleEdgeClass
	{
	public:
		class FName                                                TypeName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMetasoundFrontendStyleEdge                         Style;                                                   // 0x0008(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YL5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendGraphStyle
	 * Size -> 0x0018
	 */
	struct FMetasoundFrontendGraphStyle
	{
	public:
		bool                                                       bIsGraphEditable;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFBT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMetasoundFrontendStyleEdgeClass>            EdgeStyles;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendGraph
	 * Size -> 0x0048
	 */
	struct FMetasoundFrontendGraph
	{
	public:
		TArray<struct FMetasoundFrontendNode>                      Nodes;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMetasoundFrontendEdge>                      Edges;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMetasoundFrontendVariable>                  Variables;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FMetasoundFrontendGraphStyle                        Style;                                                   // 0x0030(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendVertexMetadata
	 * Size -> 0x0001
	 */
	struct FMetasoundFrontendVertexMetadata
	{
	public:
		unsigned char                                              UnknownData_WBLJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassVertex
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
	{
	public:
		struct FGuid                                               NodeID;                                                  // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
	 * Size -> 0x000C
	 */
	struct FMetasoundFrontendClassStyleDisplay
	{
	public:
		class FName                                                ImageName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowName;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInputNames;                                         // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowOutputNames;                                        // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N175[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassInput
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	struct FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex
	{
	public:
		struct FMetasoundFrontendLiteral                           DefaultLiteral;                                          // 0x0038(0x0068) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassVariable
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	struct FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex
	{
	public:
		struct FMetasoundFrontendLiteral                           DefaultLiteral;                                          // 0x0038(0x0068) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassOutput
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex
	{	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
	 * Size -> 0x0020
	 */
	struct FMetasoundFrontendClassEnvironmentVariable
	{
	public:
		unsigned char                                              UnknownData_KLPK[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TypeName;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRequired;                                             // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5H5K[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceStyle
	 * Size -> 0x0001
	 */
	struct FMetasoundFrontendInterfaceStyle
	{
	public:
		unsigned char                                              UnknownData_5QVC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassInterface
	 * Size -> 0x0048
	 */
	struct FMetasoundFrontendClassInterface
	{
	public:
		struct FMetasoundFrontendInterfaceStyle                    InputStyle;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FMetasoundFrontendInterfaceStyle                    OutputStyle;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7UPX[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMetasoundFrontendClassInput>                Inputs;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FMetasoundFrontendClassOutput>               Outputs;                                                 // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FMetasoundFrontendClassEnvironmentVariable>  Environment;                                             // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FGuid                                               ChangeID;                                                // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendInterface
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface
	{
	public:
		struct FMetasoundFrontendVersion                           Version;                                                 // 0x0048(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassName
	 * Size -> 0x0018
	 */
	struct FMetasoundFrontendClassName
	{
	public:
		class FName                                                Namespace;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Variant;                                                 // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassMetadata
	 * Size -> 0x0034
	 */
	struct FMetasoundFrontendClassMetadata
	{
	public:
		struct FMetasoundFrontendClassName                         ClassName;                                               // 0x0000(0x0018) Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate
		struct FMetasoundFrontendVersionNumber                     Version;                                                 // 0x0018(0x0008) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMetasoundFrontendClassType                                Type;                                                    // 0x0020(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsDeprecated;                                           // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoUpdateManagesInterface;                             // 0x0022(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TOZX[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ChangeID;                                                // 0x0024(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyle
	 * Size -> 0x000C
	 */
	struct FMetasoundFrontendClassStyle
	{
	public:
		struct FMetasoundFrontendClassStyleDisplay                 Display;                                                 // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendClass
	 * Size -> 0x00A8
	 */
	struct FMetasoundFrontendClass
	{
	public:
		unsigned char                                              UnknownData_X6XS[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ID;                                                      // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMetasoundFrontendClassMetadata                     MetaData;                                                // 0x0018(0x0034) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHP7[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMetasoundFrontendClassInterface                    Interface;                                               // 0x0050(0x0048) Edit, NativeAccessSpecifierPublic
		struct FMetasoundFrontendClassStyle                        Style;                                                   // 0x0098(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5PP[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
	 * Size -> 0x0058
	 */
	struct FMetasoundFrontendGraphClassPresetOptions
	{
	public:
		bool                                                       bIsPreset;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFHN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              InputsInheritingDefault[0x50];                           // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClass
	 * Size -> 0x00A0 (FullSize[0x0148] - InheritedSize[0x00A8])
	 */
	struct FMetasoundFrontendGraphClass : public FMetasoundFrontendClass
	{
	public:
		struct FMetasoundFrontendGraph                             Graph;                                                   // 0x00A8(0x0048) NativeAccessSpecifierPublic
		struct FMetasoundFrontendGraphClassPresetOptions           PresetOptions;                                           // 0x00F0(0x0058) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendDocumentMetadata
	 * Size -> 0x0010
	 */
	struct FMetasoundFrontendDocumentMetadata
	{
	public:
		struct FMetasoundFrontendVersion                           Version;                                                 // 0x0000(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MetasoundFrontend.MetasoundFrontendDocument
	 * Size -> 0x01F8
	 */
	struct FMetasoundFrontendDocument
	{
	public:
		unsigned char                                              UnknownData_EW1S[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMetasoundFrontendDocumentMetadata                  MetaData;                                                // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Interfaces[0x50];                                        // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FMetasoundFrontendGraphClass                        RootGraph;                                               // 0x0070(0x0148) Edit, NativeAccessSpecifierPublic
		TArray<struct FMetasoundFrontendGraphClass>                Subgraphs;                                               // 0x01B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMetasoundFrontendClass>                     Dependencies;                                            // 0x01C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FMetasoundFrontendVersion                           ArchetypeVersion;                                        // 0x01D8(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FMetasoundFrontendVersion>                   InterfaceVersions;                                       // 0x01E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
