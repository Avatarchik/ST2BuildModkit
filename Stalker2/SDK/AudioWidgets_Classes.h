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
	 * Class AudioWidgets.AudioMeter
	 * Size -> 0x0588 (FullSize[0x06B0] - InheritedSize[0x0128])
	 */
	class UAudioMeter : public UWidget
	{
	public:
		TArray<struct FMeterChannelInfo>                           MeterChannelInfo;                                        // 0x0128(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      MeterChannelInfoDelegate;                                // 0x0138(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7G5S[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAudioMeterStyle                                    WidgetStyle;                                             // 0x0150(0x04D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0620(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X098[0x3];                                   // 0x0621(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BackgroundColor;                                         // 0x0624(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterBackgroundColor;                                    // 0x0634(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterValueColor;                                         // 0x0644(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterPeakColor;                                          // 0x0654(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterClippingColor;                                      // 0x0664(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterScaleColor;                                         // 0x0674(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterScaleLabelColor;                                    // 0x0684(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASES[0x1C];                                  // 0x0694(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetMeterValueColor(const struct FLinearColor& InValue);
		void SetMeterScaleLabelColor(const struct FLinearColor& InValue);
		void SetMeterScaleColor(const struct FLinearColor& InValue);
		void SetMeterPeakColor(const struct FLinearColor& InValue);
		void SetMeterClippingColor(const struct FLinearColor& InValue);
		void SetMeterChannelInfo(TArray<struct FMeterChannelInfo> InMeterChannelInfo);
		void SetMeterBackgroundColor(const struct FLinearColor& InValue);
		void SetBackgroundColor(const struct FLinearColor& InValue);
		TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
		TArray<struct FMeterChannelInfo> GetMeterChannelInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioRadialSlider
	 * Size -> 0x0218 (FullSize[0x0340] - InheritedSize[0x0128])
	 */
	class UAudioRadialSlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x012C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		EAudioRadialSliderLayout                                   WidgetLayout;                                            // 0x013C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQPV[0x3];                                   // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CenterBackgroundColor;                                   // 0x0140(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderProgressColor;                                     // 0x0150(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBarColor;                                          // 0x0160(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           HandStartEndRatio;                                       // 0x0170(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                UnitsText;                                               // 0x0180(0x0018) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextLabelBackgroundColor;                                // 0x0198(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowLabelOnlyOnHover;                                    // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowUnitsText;                                           // 0x01A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnitsTextReadOnly;                                     // 0x01AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValueTextReadOnly;                                     // 0x01AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderThickness;                                         // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           OutputRange;                                             // 0x01B0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35R0[0x170];                                 // 0x01D0(0x0170) MISSED OFFSET (PADDING)

	public:
		void SetWidgetLayout(EAudioRadialSliderLayout InLayout);
		void SetValueTextReadOnly(bool bIsReadOnly);
		void SetUnitsTextReadOnly(bool bIsReadOnly);
		void SetUnitsText(const class FText& Units);
		void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
		void SetSliderThickness(float InThickness);
		void SetSliderProgressColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetShowUnitsText(bool bShowUnitsText);
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
		void SetOutputRange(const struct FVector2D& InOutputRange);
		void SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio);
		void SetCenterBackgroundColor(const struct FLinearColor& InValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioVolumeRadialSlider
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class UAudioVolumeRadialSlider : public UAudioRadialSlider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioFrequencyRadialSlider
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class UAudioFrequencyRadialSlider : public UAudioRadialSlider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioSliderBase
	 * Size -> 0x0848 (FullSize[0x0970] - InheritedSize[0x0128])
	 */
	class UAudioSliderBase : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9ZI[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                UnitsText;                                               // 0x0130(0x0018) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextLabelBackgroundColor;                                // 0x0148(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextLabelBackgroundColorDelegate;                        // 0x0158(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ShowLabelOnlyOnHover;                                    // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowUnitsText;                                           // 0x0169(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnitsTextReadOnly;                                     // 0x016A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValueTextReadOnly;                                     // 0x016B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x016C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBackgroundColor;                                   // 0x017C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SliderBackgroundColorDelegate;                           // 0x018C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBarColor;                                          // 0x019C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SliderBarColorDelegate;                                  // 0x01AC(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderThumbColor;                                        // 0x01BC(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SliderThumbColorDelegate;                                // 0x01CC(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        WidgetBackgroundColor;                                   // 0x01DC(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      WidgetBackgroundColorDelegate;                           // 0x01EC(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x01FC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWSE[0x3];                                   // 0x01FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0200(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YS2[0x760];                                 // 0x0210(0x0760) MISSED OFFSET (PADDING)

	public:
		void SetWidgetBackgroundColor(const struct FLinearColor& InValue);
		void SetValueTextReadOnly(bool bIsReadOnly);
		void SetUnitsTextReadOnly(bool bIsReadOnly);
		void SetUnitsText(const class FText& Units);
		void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
		void SetSliderThumbColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetSliderBackgroundColor(const struct FLinearColor& InValue);
		void SetShowUnitsText(bool bShowUnitsText);
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
		float GetOutputValue(float LinValue);
		float GetLinValue(float OutputValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioSlider
	 * Size -> 0x0010 (FullSize[0x0980] - InheritedSize[0x0970])
	 */
	class UAudioSlider : public UAudioSliderBase
	{
	public:
		TWeakObjectPtr<class UCurveFloat>                          LinToOutputCurve;                                        // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UCurveFloat>                          OutputToLinCurve;                                        // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioVolumeSlider
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class UAudioVolumeSlider : public UAudioSlider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioFrequencySlider
	 * Size -> 0x0010 (FullSize[0x0980] - InheritedSize[0x0970])
	 */
	class UAudioFrequencySlider : public UAudioSliderBase
	{
	public:
		struct FVector2D                                           OutputRange;                                             // 0x0970(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
