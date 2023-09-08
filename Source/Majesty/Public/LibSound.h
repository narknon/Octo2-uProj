#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EKSAudioComponentType.h"
#include "LevelInfoData.h"
#include "LibSound.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULibSound : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibSound();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReplaceBattleResultBgmByCondition(FName currentBattleBgmLabel, FName jingleBgmLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReplaceBattleBgmByCondition(FName BgmLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool PlaySeByLabel(FName SELabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCheckNormalMapInOverAllChapterAndBgmNull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAtomPlaying(EKSAudioComponentType CompType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CheckShouldPlayBgm(const FLevelInfoData& rLevelInfo, bool bCheckReserveTimeZone, bool forceNonDarkening);
    
};

