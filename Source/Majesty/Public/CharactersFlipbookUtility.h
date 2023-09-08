#pragma once
#include "CoreMinimal.h"
#include "CustomMissionFlipbookList.h"
#include "DataTableUtilityBase.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterDir.h"
#include "EPLAYER_JOB_FB_TYPE.h"
#include "EPLAYER_SELECT_FB_PATTERN.h"
#include "EPLAYER_SELECT_FB_TYPE.h"
#include "KSCharaFlipbook.h"
#include "KSFlipbookData.h"
#include "KSUIFlipbookData.h"
#include "MJSpriteSocketData.h"
#include "CharactersFlipbookUtility.generated.h"

class UObject;
class UPaperFlipbookComponent;

UCLASS(Blueprintable)
class MAJESTY_API UCharactersFlipbookUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UCharactersFlipbookUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIdleAction(EKSCharacterAction Action);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetThiefMissionFlipbookToSaveLoad(FName& outLabel, UObject* WorldContextObject, int32 CharaID, int32 JobID, int32 form, EPLAYER_JOB_FB_TYPE Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetMissionFlipbookLabelToSaveLoad(FName& outLabel, UObject* WorldContextObject, int32 CharaID, int32 form, int32 JobID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMissionFlipbookLabelToPlayerSelect(FName& outLabel, int32 CharaID, EPLAYER_SELECT_FB_TYPE selectType, EPLAYER_SELECT_FB_PATTERN pattern);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetMissionFlipbookLabelToJob(FName& outLabel, UObject* WorldContextObject, int32 CharaID, int32 JobID, EPLAYER_JOB_FB_TYPE Type, bool checkTou);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMissionCustomFlipbookRowData(FKSUIFlipbookData& OutData, FName TargetLabel, bool EnableLog);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMissionCustomFlipbookNames(TArray<FName>& OutNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMissionCustomFlipbookListRowDataFromCharaID(FCustomMissionFlipbookList& OutData, int32 CharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMissionCustomFlipbookListRowData(FCustomMissionFlipbookList& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCustomFlipbookRowData(FKSFlipbookData& OutData, FName TargetLabel, bool EnableLog);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharactersFlipbookRowData(FKSCharaFlipbook& OutData, FName TargetLabel, bool EnableLog);
    
    UFUNCTION(BlueprintCallable)
    static bool GetActionSocket(const FName targetCharaLabel, EKSCharacterAction eAction, EKSCharacterDir eDir, TMap<FName, FMJSpriteSocketData>& outSocketData, bool& outIsReverse);
    
    UFUNCTION(BlueprintCallable)
    static bool GetActionFlipbookName(UPaperFlipbookComponent* fbComp, FName CharaActionLabel, EKSCharacterAction eAction, EKSCharacterDir eDir, FName& outFlipbookName, bool& outIsReverse);
    
};

