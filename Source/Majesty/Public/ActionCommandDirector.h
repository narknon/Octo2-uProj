#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceDirector.h"
#include "EBATTLE_VOICE_TYPE.h"
#include "EKSCharacterAction.h"
#include "EPlayableCharacterID.h"
#include "EVibrationPower.h"
#include "EWEAPON_CATEGORY.h"
#include "ActionCommandDirector.generated.h"

class AActionCommandBase;
class ABattleCharacterBase;
class AEmitter;
class UParticleSystem;

UCLASS(Blueprintable)
class MAJESTY_API UActionCommandDirector : public ULevelSequenceDirector {
    GENERATED_BODY()
public:
    UActionCommandDirector();
    UFUNCTION(BlueprintCallable)
    void WeaponChange_Implementation(EWEAPON_CATEGORY WeaponType);
    
    UFUNCTION(BlueprintCallable)
    void WaitSummonAbility_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void WaitSessionSupporter_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void WaitSessionAbility_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void WaitEnemyAction_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void WaitCaptureMainParty_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void WaitCallSubParty_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void WaitBusinessSupporter_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ShowInfomation_Implementation(FName TextID);
    
    UFUNCTION(BlueprintCallable)
    void ShowBusinessSupportInfomation_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialParameter_Vector_Implementation(AEmitter* Emitter, FName ParameterName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialParameter_Float_Implementation(AEmitter* Emitter, FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetActionCommand(AActionCommandBase* cActionCommand);
    
    UFUNCTION(BlueprintCallable)
    void ReturnSummonCharacter_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ReturnSessionSupporter_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ReturnBusinessSupporter_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnHitSE_Implementation(FName SEID);
    
    UFUNCTION(BlueprintCallable)
    void RandomJumpToMarker_Implementation(float Rate, const FString& Marker);
    
    UFUNCTION(BlueprintCallable)
    void RandomJumpToFrame_Implementation(float Rate, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void PlayWeaponAttack_Implementation(ABattleCharacterBase* ActionCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceWithAbilityHit_Implementation(EBATTLE_VOICE_TYPE VoiceType, EPlayableCharacterID UniqueCharaID, EBATTLE_VOICE_TYPE UniqueVoiceType, bool OnHit);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice_Implementation(EBATTLE_VOICE_TYPE VoiceType, EPlayableCharacterID UniqueCharaID, EBATTLE_VOICE_TYPE UniqueVoiceType);
    
    UFUNCTION(BlueprintCallable)
    void PlayVibration_Implementation(FName VibrationID, EVibrationPower Power);
    
    UFUNCTION(BlueprintCallable)
    void PlaySEWithAbilityHit_Implementation(FName SEID, bool OnHit);
    
    UFUNCTION(BlueprintCallable)
    void PlaySessionAction_Implementation(EKSCharacterAction BattleActionID);
    
    UFUNCTION(BlueprintCallable)
    void PlaySE_Implementation(FName SEID);
    
    UFUNCTION(BlueprintCallable)
    void PlayBusinessSupportAction_Implementation(EKSCharacterAction BattleActionID);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionWithAbilityHit_Implementation(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleActionID, EPlayableCharacterID UniqueCharaID, EKSCharacterAction UniqueActionID, bool OnHit);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionForSelfOnly_Implementation(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleSelfActionID, EKSCharacterAction BattleOtherActionID, bool bExceptEnforcer);
    
    UFUNCTION(BlueprintCallable)
    void PlayAction_Implementation(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleActionID, EPlayableCharacterID UniqueCharaID, EKSCharacterAction UniqueActionID, bool bExceptEnforcer);
    
    UFUNCTION(BlueprintCallable)
    void PlayAbilitySEWithAbilityHit_Implementation(int32 Index, bool OnHit);
    
    UFUNCTION(BlueprintCallable)
    void PlayAbilitySE_Implementation(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void JumpToMarker_Implementation(const FString& strMarker);
    
    UFUNCTION(BlueprintCallable)
    void JumpToFrame_Implementation(int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void HideInfomation_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ExecSummonCharacter_Implementation(int32 SummonIndex, bool Random);
    
    UFUNCTION(BlueprintCallable)
    void ExecSummonAbility_Implementation(int32 SummonIndex);
    
    UFUNCTION(BlueprintCallable)
    void ExecStepCounter_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ExecStartCharacterWarp_Implementation(FVector cCommandOffset);
    
    UFUNCTION(BlueprintCallable)
    void ExecSpecialAilment_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ExecSessionAbility_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ExecPlayDiseaseMissUI_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ExecEndCharacterWarp_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ExecCaptureMainParty_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ExecCallSubParty_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void ExecAilmentWithAbilityHit_Implementation(int32 Index, bool AllAilment, bool LastHit, bool OnHit);
    
    UFUNCTION(BlueprintCallable)
    void ExecAilment_Implementation(int32 Index, bool AllAilment, bool LastHit);
    
    UFUNCTION(BlueprintCallable)
    void CheckPattern3JumpToMarker_Implementation(const FString& PatternB, const FString& PatternC);
    
    UFUNCTION(BlueprintCallable)
    void CheckPattern3JumpToFrame_Implementation(int32 PatternB, int32 PatternC);
    
    UFUNCTION(BlueprintCallable)
    void CheckPattern2JumpToMarker_Implementation(const FString& PatternB);
    
    UFUNCTION(BlueprintCallable)
    void CheckPattern2JumpToFrame_Implementation(int32 PatternB);
    
    UFUNCTION(BlueprintCallable)
    void CheckMultiPatternJumpToMarker_Implementation(TArray<FString> MarkerList);
    
    UFUNCTION(BlueprintCallable)
    void CheckMultiPatternJumpToFrame_Implementation(TArray<int32> FrameList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGPUEmitter(UParticleSystem* cTarget, int32 nIndex);
    
    UFUNCTION(BlueprintCallable)
    void CheckCounterJumpToMarker_Implementation(const FString& Marker);
    
    UFUNCTION(BlueprintCallable)
    void CheckCounterJumpToFrame_Implementation(int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void CheckBoostLevelLessJumpToMarker_Implementation(int32 BorderLevel, bool ContainEqual, const FString& Marker);
    
    UFUNCTION(BlueprintCallable)
    void CheckBoostLevelLessJumpToFrame_Implementation(int32 BorderLevel, bool ContainEqual, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void CheckBoostLevelGreaterJumpToMarker_Implementation(int32 BoostLevel, bool ContainEqual, const FString& Marker);
    
    UFUNCTION(BlueprintCallable)
    void CheckBoostLevelGreaterJumpToFrame_Implementation(int32 BoostLevel, bool ContainEqual, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void CheckAbilityHitJumpToMarker_Implementation(bool OnHit, const FString& Marker);
    
    UFUNCTION(BlueprintCallable)
    void CheckAbilityHitJumpToFrame_Implementation(bool OnHit, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void CallSessionSupporter_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void CallBusinessSupporter_Implementation();
    
};

