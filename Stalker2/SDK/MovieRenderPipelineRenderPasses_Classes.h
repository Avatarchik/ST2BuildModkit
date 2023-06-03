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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
	 * Size -> 0x0080 (FullSize[0x00C8] - InheritedSize[0x0048])
	 */
	class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
	{
	public:
		unsigned char                                              UnknownData_YJKQ[0x80];                                  // 0x0048(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
	 * Size -> 0x00A8 (FullSize[0x0170] - InheritedSize[0x00C8])
	 */
	class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
	{
	public:
		bool                                                       bAccumulatorIncludesAlpha;                               // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableMultisampleEffects;                              // 0x00C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUse32BitPostProcessMaterials;                           // 0x00CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYT2[0x5];                                   // 0x00CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMoviePipelinePostProcessPass>               AdditionalPostProcessMaterials;                          // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAddDefaultLayer;                                        // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9UB[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActorLayer>                                 StencilLayers;                                           // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          ActivePostProcessMaterials;                              // 0x00F8(0x0010) ZeroConstructor, Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  StencilLayerMaterial;                                    // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UTextureRenderTarget2D*>                      TileRenderTargets;                                       // 0x0110(0x0010) ZeroConstructor, Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_20CD[0x50];                                  // 0x0120(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
	 * Size -> 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
	 */
	class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
	 * Size -> 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
	 */
	class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
	 * Size -> 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
	 */
	class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
	 * Size -> 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
	 */
	class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
	 * Size -> 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
	 */
	class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
	{
	public:
		unsigned char                                              UnknownData_7FML[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
	{
	public:
		EEXRCompressionFormat                                      Compression;                                             // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMultilayer;                                             // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LEI[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
	 * Size -> 0x0070 (FullSize[0x00B8] - InheritedSize[0x0048])
	 */
	class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
	{
	public:
		class FString                                              FileNameFormatOverride;                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DII[0x60];                                  // 0x0058(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
