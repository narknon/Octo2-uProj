#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlayableCharacterID.h"
#include "PlayerLocation.h"
#include "ReminiscenceRestorePlacement.h"
#include "ReminiscenceUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAJESTY_API UReminiscenceUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReminiscenceUtility();
    UFUNCTION(BlueprintCallable)
    static bool StartPrologueReminiscenceFromMainMenu(EPlayableCharacterID PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static bool StartPrologueReminiscenceFromBarMenu(EPlayableCharacterID PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static bool StartPrologueReminiscence(EPlayableCharacterID PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static bool StartPlayableReminiscenceByLabel(FName reminiscenceLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool StartPlayableReminiscence(int32 reminiscenceId);
    
    UFUNCTION(BlueprintCallable)
    static bool SkipPrologueReminiscence(EPlayableCharacterID PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static bool SetupFirstEquipmentOnSkipReminiscence(int32 reminisceceId, TArray<FName>& addedItemLabels);
    
    UFUNCTION(BlueprintCallable)
    static void SetReturnLevelAfterReminiscence();
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayReminiscenceFromMainMenu(bool bFromMainMenu);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayingReminiscence(bool bPlaying);
    
    UFUNCTION(BlueprintCallable)
    static void SetCompletedPrologueReminiscence(EPlayableCharacterID PlayerCharaId, bool bCompleted);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestorePlayerPlacementForPartyChat(UObject* WorldContextObject, const FReminiscenceRestorePlacement& backupData);
    
    UFUNCTION(BlueprintCallable)
    static bool RestorePartyOnPrologueReminiscence();
    
    UFUNCTION(BlueprintCallable)
    static bool RestorePartyOnPlayableReminiscence();
    
    UFUNCTION(BlueprintCallable)
    static void JoinPlayerCharacter(EPlayableCharacterID PlayerCharaId, bool& OutResult, bool& outIsAddMainMember);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayReminiscenceFromMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingReminiscence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingPrologueReminiscence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingPastReminiscence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletedPrologueReminiscence(EPlayableCharacterID PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerLocation GetReturnLevelAfterReminiscence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ExistsReturnLevelAfterReminiscence();
    
    UFUNCTION(BlueprintCallable)
    static bool EndPrologueReminiscence();
    
    UFUNCTION(BlueprintCallable)
    static bool EndPlayableReminiscence();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_GetReminiscenceDebugInfo(FString& outDebugInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ClearReturnLevelAfterReminiscence();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BackupPlayerPlacementForTheater(UObject* WorldContextObject, UPARAM(Ref) FReminiscenceRestorePlacement& outBackupData);
    
};

