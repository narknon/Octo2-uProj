#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EPlayableCharacterID.h"
#include "PlayableCharacterData.h"
#include "PlayerDataUtility.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class MAJESTY_API UPlayerDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UPlayerDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 PlayerLabelToID(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName PlayerIDToLabel(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlayerText(int32 CharaID, FText& NameText);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerTableRowDataByID(FPlayableCharacterData& OutData, int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerTableRowDataByEnum(FPlayableCharacterData& OutData, EPlayableCharacterID TargetID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerTableRowData(FPlayableCharacterData& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerTableAllRows(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FPlayableCharacterData>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerPortraitNameImage(int32 CharaID, UTexture2D*& Image);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerPortraitImage(int32 CharaID, UTexture2D*& Image, bool IsNight);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerPortraitBgImage(int32 CharaID, UTexture2D*& Image, bool IsNight);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerFieldCommandName(int32 CharaID, FName& DayFcName, FName& NightFcName);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerFieldCommandDetailInPlayerSelect(int32 CharaID, FName& DayFc, FName& NightFC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlayerDetailText(int32 CharaID, FText& DetailText);
    
    UFUNCTION(BlueprintCallable)
    static void GetFirstEquipmentLabels(int32 CharaID, TArray<FName>& outEquipmentLabels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetClassText(int32 CharaID, FText& ClassText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCharaVoice(int32 CharaID, bool IsJapanese, TArray<FName>& VoiceSheet);
    
};

