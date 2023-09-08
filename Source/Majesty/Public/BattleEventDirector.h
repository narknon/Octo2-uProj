#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceDirector.h"
#include "EKSCharacterAction.h"
#include "EPlayableCharacterID.h"
#include "ETUTORIAL_TYPE.h"
#include "EVibrationPower.h"
#include "BattleEventDirector.generated.h"

class ABattleCharacterBase;
class ABattleSequenceDirector;

UCLASS(Blueprintable)
class MAJESTY_API UBattleEventDirector : public ULevelSequenceDirector {
    GENERATED_BODY()
public:
    UBattleEventDirector();
    UFUNCTION(BlueprintCallable)
    void WaitReturnCapture_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void StopBGM_Implementation(float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SetWhiteOutFlag_Implementation(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEventFlag_Implementation(FName FlagName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSequenceDirector(ABattleSequenceDirector* cSequenceDirector);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleEnemyVisibility_Implementation(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetAdvancedAbility_Implementation(EPlayableCharacterID CharacterID, int32 nIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ReturnCapture_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBoostEffect_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ReleasePotentialityAction_Implementation(EPlayableCharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void RandomJumpToFrame_Implementation(float Rate, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void PlayVibration_Implementation(FName VibrationID, EVibrationPower Power);
    
    UFUNCTION(BlueprintCallable)
    void PlaySE_Implementation(FName SEID);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM_Implementation(FName BgmLabel, float FadeOutTime, float FadeInTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayAction_Implementation(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleActionID);
    
    UFUNCTION(BlueprintCallable)
    void OpenTutorial_Implementation(ETUTORIAL_TYPE TutorialType, bool bForcedDisplay);
    
    UFUNCTION(BlueprintCallable)
    void OpenTalk_Implementation(FName TalkTextID, FVector2D Offset, bool WaitFinish);
    
    UFUNCTION(BlueprintCallable)
    void OpenActionInfoFromAdvancedAbility_Implementation(FName TextID, EPlayableCharacterID CharaID, int32 nAbilityIndex);
    
    UFUNCTION(BlueprintCallable)
    void OpenActionInfoForEightBattle_Implementation(FName TextID);
    
    UFUNCTION(BlueprintCallable)
    void OpenActionInfo_Implementation(FName TextID);
    
    UFUNCTION(BlueprintCallable)
    void JumpToFrame_Implementation(int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void InstantDeath_EnemyAll_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void FixBattleCamera_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ExecPotentialityAction_Implementation(ABattleCharacterBase* ActionCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ExecExtendBGM_Implementation(int32 nIndex);
    
    UFUNCTION(BlueprintCallable)
    void ExecBattleSuspend_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ControlDisease_Implementation(ABattleCharacterBase* TargetCharacter, bool Remove, FName DiseaseName, int32 InvocationValue, int32 InvocationTurn);
    
    UFUNCTION(BlueprintCallable)
    void CloseTalk_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void CloseActionInfo_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharacterName_Implementation(ABattleCharacterBase* TargetCharacter, FName CharacterNameID);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBoostLevel_Implementation(ABattleCharacterBase* ActionCharacter, int32 BoostLevel);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActionMode_Implementation(ABattleCharacterBase* ActionCharacter, bool bIsEnable, int32 nModeIndex, bool bUseTransition);
    
};

