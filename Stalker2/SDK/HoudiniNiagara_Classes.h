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
	 * Class HoudiniNiagara.HoudiniPointCache
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class UHoudiniPointCache : public UObject
	{
	public:
		class FString                                              Filename;                                                // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfSamples;                                         // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfAttributes;                                      // 0x003C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfPoints;                                          // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfFrames;                                          // 0x0044(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstFrame;                                              // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastFrame;                                               // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSampleTime;                                           // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSampleTime;                                           // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceCSVTitleRow;                                       // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      AttributeArray;                                          // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLCJ[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FloatSampleData;                                         // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<float>                                              SpawnTimes;                                              // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<float>                                              LifeValues;                                              // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            PointTypes;                                              // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            SpecialAttributeIndexes;                                 // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPointIndexes>                               PointValueIndexes;                                       // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       UseCustomCSVTitleRow;                                    // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHoudiniPointCacheFileType                                 FileType;                                                // 0x00E1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S8F9[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetUseCustomCSVTitleRow(bool bInUseCustomCSVTitleRow);
		bool GetVelocityValue(int32_t SampleIndex, struct FVector* Value);
		bool GetVectorValueForString(int32_t SampleIndex, const class FString& Attribute, struct FVector* Value, bool DoSwap, bool DoScale);
		bool GetVectorValue(int32_t SampleIndex, int32_t attrIndex, struct FVector* Value, bool DoSwap, bool DoScale);
		bool GetVector4ValueForString(int32_t SampleIndex, const class FString& Attribute, struct FVector4* Value);
		bool GetVector4Value(int32_t SampleIndex, int32_t attrIndex, struct FVector4* Value);
		bool GetUseCustomCSVTitleRow();
		bool GetTimeValue(int32_t SampleIndex, float* Value);
		TArray<int32_t> GetSpecialAttributeIndexes();
		TArray<float> GetSpawnTimes();
		bool GetSampleIndexesForPointAtTime(int32_t POINTID, float desiredTime, int32_t* PrevSampleIndex, int32_t* NextSampleIndex, float* PrevWeight);
		bool GetQuatValueForString(int32_t SampleIndex, const class FString& Attribute, struct FQuat* Value, bool DoHoudiniToUnrealConversion);
		bool GetQuatValue(int32_t SampleIndex, int32_t attrIndex, struct FQuat* Value, bool DoHoudiniToUnrealConversion);
		bool GetPositionValue(int32_t SampleIndex, struct FVector* Value);
		bool GetPointVectorValueAtTimeForString(int32_t POINTID, const class FString& Attribute, float desiredTime, struct FVector* Vector, bool DoSwap, bool DoScale);
		bool GetPointVectorValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, struct FVector* Vector, bool DoSwap, bool DoScale);
		bool GetPointVector4ValueAtTimeForString(int32_t POINTID, const class FString& Attribute, float desiredTime, struct FVector4* Vector);
		bool GetPointVector4ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, struct FVector4* Vector);
		TArray<struct FPointIndexes> GetPointValueIndexes();
		bool GetPointValueAtTimeForString(int32_t POINTID, const class FString& Attribute, float desiredTime, float* Value);
		bool GetPointValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, float* Value);
		TArray<int32_t> GetPointTypes();
		bool GetPointType(int32_t POINTID, int32_t* Value);
		bool GetPointQuatValueAtTimeForString(int32_t POINTID, const class FString& Attribute, float desiredTime, struct FQuat* Quat, bool DoHoudiniToUnrealConversion);
		bool GetPointQuatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, struct FQuat* Quat, bool DoHoudiniToUnrealConversion);
		bool GetPointPositionAtTime(int32_t POINTID, float desiredTime, struct FVector* Vector);
		bool GetPointLifeAtTime(int32_t POINTID, float desiredTime, float* Value);
		bool GetPointLife(int32_t POINTID, float* Value);
		bool GetPointInt32ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, int32_t* Value);
		bool GetPointIDsToSpawnAtTime(float desiredTime, int32_t* MinID, int32_t* MaxID, int32_t* Count, int32_t* LastSpawnedPointID, float* LastSpawnTime, float* LastSpawnTimeRequest);
		bool GetPointFloatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, float* Value);
		int32_t GetNumberOfSamples();
		int32_t GetNumberOfPoints();
		int32_t GetNumberOfAttributes();
		bool GetNormalValue(int32_t SampleIndex, struct FVector* Value);
		TArray<float> GetLifeValues();
		bool GetLastSampleIndexAtTime(float desiredTime, int32_t* lastSampleIndex);
		bool GetLastPointIDToSpawnAtTime(float Time, int32_t* lastID);
		bool GetImpulseValue(int32_t SampleIndex, float* Value);
		bool GetFloatValueForString(int32_t SampleIndex, const class FString& Attribute, float* Value);
		bool GetFloatValue(int32_t SampleIndex, int32_t attrIndex, float* Value);
		TArray<float> GetFloatSampleData();
		bool GetColorValue(int32_t SampleIndex, struct FLinearColor* Value);
		bool STATIC_GetAttributeIndexInArrayFromString(const class FString& InAttribute, TArray<class FString> InAttributeArray, int32_t* OutAttributeIndex);
		bool GetAttributeIndexFromString(const class FString& Attribute, int32_t* AttributeIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniNiagara.NiagaraDataInterfaceHoudini
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceHoudini : public UNiagaraDataInterface
	{
	public:
		class UHoudiniPointCache*                                  HoudiniPointCacheAsset;                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
