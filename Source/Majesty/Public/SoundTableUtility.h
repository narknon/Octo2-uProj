#pragma once
#include "CoreMinimal.h"
#include "BgmInfoData.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "ESoundTableType.h"
#include "KSCueSheetData.h"
#include "SoundSEData.h"
#include "SoundVoiceData.h"
#include "SoundTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USoundTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    USoundTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetVoiceJaRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSoundVoiceData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetVoiceEnRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSoundVoiceData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSoundTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames, ESoundTableType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSeRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSoundSEData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCueSheetRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FKSCueSheetData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBgmRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FBgmInfoData& OutData, FName TargetLabel, bool LogEnable);
    
};

