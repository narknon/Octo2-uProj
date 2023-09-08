#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CameraLockParams.h"
#include "ECharacterMoveModeForDB.h"
#include "EKSCharacterDir.h"
#include "ELevelTriggerID.h"
#include "EquipLanternData.h"
#include "LevelTransitionData.h"
#include "LevelTriggerActor.generated.h"

class ACameraLockTrigger;
class AProceduralLinePlace;
class ASwitchIndoorTrigger;
class USceneComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class MAJESTY_API ALevelTriggerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_SpawnPointObj;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACameraLockTrigger> TargetCameraLockTriggerX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACameraLockTrigger> TargetCameraLockTriggerY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACameraLockTrigger> TargetCameraLockTriggerZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLockParams CameraLockParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelTriggerID MyLevelTriggerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTransitionDataFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelTriggerID NextLevelTriggerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterDir MapInCharaDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipLanternData EquipLanternData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString strNextMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedButtonInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ButtonInputCollisionMatchToTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelTransitionData> ConditionalTransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASwitchIndoorTrigger> m_MapInSwitchIndoorTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AProceduralLinePlace> m_MapInUseLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterMoveModeForDB m_MapInMoveMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsTriggerActive;
    
public:
    ALevelTriggerActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetupDataOnLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void SetupBGMControl();
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionComponent(UShapeComponent* pComp, FVector vPos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAttachLadderPlayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshTransitionalData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTriggerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsIgnoreShowOnRadarMap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetTriggerCollisionLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetSpawnLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterMoveModeForDB GetMapInMoveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEquipLanternData GetEquipLanternData() const;
    
};

