#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MJFieldCommandType.h"
#include "FieldCommandUtil.generated.h"

class AKSCharacterBase;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API UFieldCommandUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFieldCommandUtil();
    UFUNCTION(BlueprintCallable)
    static void SetIsFcV2(bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void OpenFieldCommandPreviewMenu();
    
    UFUNCTION(BlueprintCallable)
    static void OpenFieldCommandMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUseFieldCommandsAllwaysTimeZone(TArray<MJFieldCommandType> Type, AKSCharacterBase* TargetChara, bool IsDayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUseFieldCommandAllwaysTimeZone(MJFieldCommandType Type, AKSCharacterBase* TargetChara, bool IsDayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSwoonFc(MJFieldCommandType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingFieldCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingBadConnectionFieldCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOpenFieldCommandMenu(UObject* WorldContextObject, AKSCharacterBase* refTalk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemFc(MJFieldCommandType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInformationFc(MJFieldCommandType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFollowFc(MJFieldCommandType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFieldCommandTargetNpc(AKSCharacterBase* NPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBadConnectionNPC(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBadConnection(int32 TownID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<MJFieldCommandType> GetSwoonFcTypes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPartyFieldCommand(bool AvaiableOnly, AKSCharacterBase* TargetChara, bool& CanUseCommand, TArray<MJFieldCommandType>& FieldCommandList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<MJFieldCommandType> GetItemFcTypes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsGameOverWhenLoose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsFcV2();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<MJFieldCommandType> GetInformationFcTypes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<MJFieldCommandType> GetFollowFcTypes();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForceSuccessFC(bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForceFailureFC(bool Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetIsForceSuccessFC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetIsForceFailureFC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanExecFieldCommand(FName NPCLabel, MJFieldCommandType FCType);
    
};

