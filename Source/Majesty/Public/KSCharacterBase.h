#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PaperCharacter.h"
#include "CharacterActionResource.h"
#include "EBATTLE_ACTION_TYPE.h"
#include "EBATTLE_DAMAGE_TYPE.h"
#include "ECANOE_MOVE_EFFECT.h"
#include "ECHARACTER_MODE.h"
#include "ECharacterState.h"
#include "EDEBUFF_ATTACHSOCKET_TYPE.h"
#include "EEMOTION_TYPE.h"
#include "EHUNTER_PARTNER_OFFSET_TYPE.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterAnimationLoop.h"
#include "EKSCharacterCategory.h"
#include "EKSCharacterDir.h"
#include "EKSCharacterMoveMode.h"
#include "ENpcSwoonType.h"
#include "EPlayableCharacterID.h"
#include "ERADARMAP_ICON_TYPE.h"
#include "ETRANSPORTATION_TYPE.h"
#include "EquipLanternData.h"
#include "FinishMoveDispatherDelegate.h"
#include "KSCharaFlipbook.h"
#include "MJSpriteSocketData.h"
#include "PlayAction.h"
#include "KSCharacterBase.generated.h"

class AKSCharacterBase;
class ASpotLight;
class UAtomComponent;
class UBoxComponent;
class UCapsuleComponent;
class UCurveFloat;
class UHunterPartnerFbComponent;
class UKSPaperFlipbook;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNpcPropertyComponent;
class UObject;
class UOperationPlayerCameraComponentBase;
class UPaperFlipbook;
class UPaperFlipbookComponent;
class UParticleSystemComponent;
class UPartyCharaPropertyComponent;
class UPlacementFadeComponent;
class UPlayerPropertyComponent;
class USceneComponent;
class USplineMoveComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class MAJESTY_API AKSCharacterBase : public APaperCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterState CharaState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFadeInWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentFlipbookName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterDir Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HouseChangeVisibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnimEndOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterAnimationLoop ManualLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FixAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReverseSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayAction NextActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterAction NowActionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterActionResource ActionResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKSCharaFlipbook ActionFlipbook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TempLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_CurrentWeaponTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> InitMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MoveSpeed_EventPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> InitMoveSpeed_EventPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterCategory CharacterCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CharacterEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedCharacterEnableCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterMoveMode MoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Moving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKSPaperFlipbook* CustomFlipbook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> m_CustomFlipbookMaterialList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bChangeDirLock;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LanternRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpotLight* m_pcLanternLight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsingLantern;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipLanternData EquipLanternData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* NpcFadeCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcFadeCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcFadeCollisionLengthRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FormCollision;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveStopLen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveLadderPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LoopEmotionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayEmotionType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsNpcTalking;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstFootStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstCanoeFootStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstStepCanoeDeltaTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishMoveDispather m_FinishMoveEventDispather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsOpeningGuildMenu;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CanoeCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCanoeIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultCanoePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_CanoeLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> m_CanoeRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_CanoeScaleOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CanoeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CanoeMeshA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CanoeMeshB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CanoeLanternComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_CanoeEffects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootStepDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterMoveMode OldMoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayFootStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFootStepCheckStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFootStepCheckEndOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForcedPlayFootStepTypeLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionFootStepLabelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ActionFootStepLabelIntervalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterFootstep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBreakAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> loadedResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLadderIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpritePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultSpritePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PCListenerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShoudTickEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCalcBillboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERADARMAP_ICON_TYPE m_RadarMapIconType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHUNTER_PARTNER_OFFSET_TYPE, FVector> HunterPartnerOffsetA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHUNTER_PARTNER_OFFSET_TYPE, FVector> HunterPartnerOffsetB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKSCharacterDir, FVector> HunterPartnerFieldOffsetA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKSCharacterDir, FVector> HunterPartnerFieldOffsetB;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultFBRelativePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_PlayerTorchMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nChangeDirCntDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nChangeDirCnt;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nDebugType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vDebugOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDebugSize;
    
    AKSCharacterBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void VisibleEmotion(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNpcFadeCollisionSize(float cameraDist);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMove(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFootStep(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFirstStepDeltaTime(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCanoeDir(EKSCharacterDir CurrentDir);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAction();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMoveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopTransportEffectOnStartBattle();
    
    UFUNCTION(BlueprintCallable)
    void StopMusicRecorad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopCharacter();
    
    UFUNCTION(BlueprintCallable)
    void StopCanoePitching();
    
    UFUNCTION(BlueprintCallable)
    void StopAllCanoeEffect(ECANOE_MOVE_EFFECT ExclusionType);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEmotionWithOffset(EEMOTION_TYPE EmotionType, FVector SpawnOffset);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEmotion(EEMOTION_TYPE EmotionType, FVector SpawnOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleHouseChange(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityToPartnerFB(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetupWeaponTextureInMaterial(UMaterialInstanceDynamic*& targetMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUpMoveSpeedData(EMovementMode EMovementMode, int32 nMode);
    
    UFUNCTION(BlueprintCallable)
    void SetupFlipbookMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    void SetUpFadeMaterialData(const UPaperFlipbookComponent* pPaperFlip, const UPlacementFadeComponent* pPlecementComponent, UMaterialInstance* Material);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupCanoeEffect();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupCameraLockPosDirectly(FVector CameraLockPos, UCapsuleComponent* charaCapsule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupCameraLock(FVector lockPos, bool bLock, bool bUnlock, bool bEnableX, bool bEnableY, bool bEnableZ, bool bAfterLevelChange);
    
    UFUNCTION(BlueprintCallable)
    void SetTempLocation(const FVector& BeforLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetDir(AKSCharacterBase* DirTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStateGuard(bool Guard);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStateBoost(int32 BoostLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSocketBit(EDEBUFF_ATTACHSOCKET_TYPE eSocket);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetReverseSpriteFlag(bool bReverse);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetReturnCameraOffset(bool LockFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetResetCameraPos(const FVector& ResetPos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayFootStep(bool bIsPlayFootStep);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayAnimationFrame(int32 nFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPartyLadderOffset(EKSCharacterDir NewDir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetMovePoint(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetMapinPlayerLocation(FVector Location, EKSCharacterDir charaDir);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadedCharacterEnableCancel(bool Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLevelLightParam_InDebug(float Intencity, float AttenuationRadius, FLinearColor LightColor, float SourceRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLevelLightParam(bool bEnable, FName levelName);
    
    UFUNCTION(BlueprintCallable)
    void SetLantern(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetLadderMoveParams(const FVector& upEndPos, const FVector& downEndPos, const FVector& moveLadderPos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLadderIdle();
    
    UFUNCTION(BlueprintCallable)
    void SetIsOpeningGuild(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMoveUpdate(bool bMoveUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDisableCharacterMovementFlag(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetIndoorFocusDistance(float focusDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetIndoorFloor(int32 FloorNum);
    
    UFUNCTION(BlueprintCallable)
    void SetIndoorFlag(bool Indoor);
    
    UFUNCTION(BlueprintCallable)
    void SetHouseChangeVisibleFlag(bool isVisble);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHideMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetForcedPlayFootStep(FName ForcedPlayFootStepType);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowOffset(int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetFixAnimation(bool Eanble, EKSCharacterAction eAction, EKSCharacterAnimationLoop eLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishMove(bool Force);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipmentLanternData(const FEquipLanternData& lanternData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnablePlayAction(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEmotionVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDirTargetActor(AKSCharacterBase* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDir(EKSCharacterDir eDir, bool SetIdle);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetDebugTouchLockTrigger(const FString& TriggerName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDamageAction(EBATTLE_DAMAGE_TYPE DamageType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWeaponTexture(UTexture2D* weaponTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetCineCameraRelativeRotation(const FRotator& Rotator);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterState(ECharacterState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterLocation(const FVector& InLocation, EKSCharacterDir InDir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterCollision(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeDirLock(bool bChangeDirLock);
    
    UFUNCTION(BlueprintCallable)
    void SetCanoeVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCanoePitchingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCanoeMeshOffset(const FVector canoeOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCanoeIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetCameraLockPos(const FVector& CameraLockPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetCameraDistanceRateToOperationCameraComp(float cameraDistanceRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleSelectMaterial(bool Select, bool Boost);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleAlphaMode(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetActorHiddenInGameBP(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void ResumeSpritePlayRateByLadder();
    
    UFUNCTION(BlueprintCallable)
    bool RespawnEmotion();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetSelf();
    
    UFUNCTION(BlueprintCallable)
    void ResetOnLevelBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void ResetForceLadder();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFootStep();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetCameraPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetCameraLock();
    
    UFUNCTION(BlueprintCallable)
    void RequestRespawnEmotionAfterTalk();
    
    UFUNCTION(BlueprintCallable)
    void RemoveEmotion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshLocationHistoryIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshFadeMaterial(bool bClearMaterialParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshCurrentLocation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshCanoeObject();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayMusicRecorad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFootStep(FName SELabel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerReplace();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEncountCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCharacterAction(EKSCharacterAction Label, EKSCharacterDir Direction, bool StackClear);
    
    UFUNCTION(BlueprintCallable)
    void PlayCanoePitching();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool PlayCanoeEffectByMoveMode(EKSCharacterMoveMode Mode);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayCanoeEffect(ECANOE_MOVE_EFFECT effType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayBreakAnimation(bool Break);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayBattleAction(EBATTLE_ACTION_TYPE BattleAction, bool StackClear);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationDir(EKSCharacterAction eAction, EKSCharacterDir eDir, int32 nFrame);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(EKSCharacterAction eAction, int32 nFrame);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAction(EKSCharacterAction ActionID, bool Force, int32 nFrame, EKSCharacterAnimationLoop LoopSetting);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteTemplateSpriteSockets(EKSCharacterAction eAction, EKSCharacterDir eDir);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteSpriteSockets(TMap<FName, FMJSpriteSocketData> SocketData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenFieldCommandPopupWidget(bool IgnoreEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnFinishAutoBalloon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndOverlapFromPlayerChara();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginOverlapFromPlayerChara();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAnimationFinish();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveSpeedInHouse(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveBP(FVector vMove);
    
    UFUNCTION(BlueprintCallable)
    void LoadedCharacterEnableCancelRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LadderOffset(int32 PartyIndex, EKSCharacterDir NewDir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnedEmotion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningFade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingCanoePitching() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingCanoeEffect(ECANOE_MOVE_EFFECT effType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsPlayerCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsPlayBattleAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsPartyCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNpcTalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveCanoeMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderMoveMode(EKSCharacterMoveMode Mode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsHunterPartner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFollowNpcCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFieldNpcCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFCAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeInWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeWalkLadderCanoe(EKSCharacterMoveMode nowMode, EKSCharacterMoveMode nextMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanoeMoveMode(EKSCharacterMoveMode Mode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanoe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAfterIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionLooping() const;
    
    UFUNCTION(BlueprintCallable)
    void InitAction(FName ActionLabelName, bool bBattle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Idle(bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetTextInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USplineMoveComponent* GetSplineObject();
    
    UFUNCTION(BlueprintCallable)
    bool GetSocketPos(EDEBUFF_ATTACHSOCKET_TYPE eType, FVector& vOutPos);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReverseSpriteFlag() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetReturnCameraOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRespawnEmotionAfterTalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERADARMAP_ICON_TYPE GetRadarMapIconType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCharacterMoveMode GetPrevMoveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UPlayerPropertyComponent* GetPlayerPropertyComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetPlayerCameraPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayAnimationFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayableCharacterID GetPlayableCharacterID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UPlacementFadeComponent* GetPlacementFadeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetPCListenerPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UPartyCharaPropertyComponent* GetPartyCharaPropertyComponent();
    
    UFUNCTION(BlueprintCallable)
    FVector GetPartnerOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPartnerFieldOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UOperationPlayerCameraComponentBase* GetOperationPlayerCameraComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UNpcPropertyComponent* GetNpcPropertyComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCharacterAction GetNowActionID() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMoveSpeed(EKSCharacterMoveMode NewMoveMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCharacterMoveMode GetMoveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCharacterDir GetMoveDir(FVector inMoveDir, float AdjustX, float AdjustY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EKSCharacterAction GetMoveAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ECHARACTER_MODE GetMode();
    
    UFUNCTION(BlueprintCallable)
    void GetLadderMoveParams(FVector& outUpEndPos, FVector& outDownEndPos, FVector& outMoveLadderPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUsingLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOpeningGuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoveUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDisableCharacterMovementFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIndoorFocusDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndoorFloor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIndoorFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EKSCharacterAction GetIdleAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UHunterPartnerFbComponent* GetHunterPartnerFbComponent();
    
    UFUNCTION(BlueprintCallable)
    bool GetHouseChangeVisibleFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFollowOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetFlipbookOverrideMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetFlipbookMaterial(FName customFlipbookName, bool bClearParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEquipLanternData GetEquipmentLanternData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEmotionVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEmotionLocation(FVector Offset);
    
private:
    UFUNCTION(BlueprintCallable)
    FString GetEmotionEffectLabel(EEMOTION_TYPE EmotionType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCharacterDir GetDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefaultFlipbookRelativePos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCurrentWeaponTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETRANSPORTATION_TYPE GetCurrentTransportType();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentMoveSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetCineCameraWorldLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetCineCameraRelativeTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterState GetCharacterState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UCapsuleComponent* GetCharacterCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCharacterCategory GetCharacterCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperFlipbook* GetCharacterAction(EKSCharacterAction ActionID, EKSCharacterDir InDir) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetChangeDirLock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetCameraLockPos();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetCameraInitOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCharacterAction GetBattleIdle(EKSCharacterAction eChkIdleAction, EKSCharacterDir eDir);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetAnimationTexture(const int32 FrameIndex, FVector2D& vUV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActionLabel() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActionFlipbookName(EKSCharacterAction eAction, EKSCharacterDir eDir, FName& outFlipbookName, bool& outIsReverse) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceMovePoint(FVector InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FirstMoveStep();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishCallbackLoaded();
    
    UFUNCTION(BlueprintCallable)
    void DetachDebuffEffect(UParticleSystemComponent* pTargetParticle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugShowInfoUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ShowSocketInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetForceUpdateFootStep(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetBarItemHandRate(int32 Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_MoveFallingReturnLocation();
    
    UFUNCTION(BlueprintCallable)
    bool Debug_GetForceUpdateFootStep();
    
    UFUNCTION(BlueprintCallable)
    void Debug_GetEquipmentLanternData(FString& OutInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FString Debug_GetDebugInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FString Debug_GetDebugFollowInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Debug_GetBarItemHandRate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateSoundComponent();
    
    UFUNCTION(BlueprintCallable)
    void ClearSocketBit(EDEBUFF_ATTACHSOCKET_TYPE eSocket);
    
    UFUNCTION(BlueprintCallable)
    void ClearRespawnEmotionAfterTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearActionReferenceObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckFlipbookMaterialKey(FName customFlipbookName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeTransport(ETRANSPORTATION_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ChangeSwoonState(const FVector& SwoonOffsetPos, EKSCharacterAction SwoonAction, ENpcSwoonType SwoonType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFlipbook(FName FlipbookName, UMaterialInstanceDynamic* pMatInst);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharacterModelOnly(FName ResourceLabel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeCanoeEffectOnStop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanOpenAutoBalloon();
    
private:
    UFUNCTION(BlueprintCallable)
    void CanoeTimelineUpdate(float Offset);
    
    UFUNCTION(BlueprintCallable)
    void CanoeTimelineFinish();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallTalkEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallbackLoaded(UPARAM(Ref) TArray<UObject*>& objList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcLandLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector CalcEmotionOffset();
    
    UFUNCTION(BlueprintCallable)
    bool AttachDebuffEffect(UParticleSystemComponent* pTargetParticle, EDEBUFF_ATTACHSOCKET_TYPE eType);
    
    UFUNCTION(BlueprintCallable)
    void AddRegistMusicRecordDeleagete();
    
    UFUNCTION(BlueprintCallable)
    void AddMoveSpeed(float inAddSpeed);
    
    UFUNCTION(BlueprintCallable)
    void AddFlipbookMaterial(FName customFlipbookName, UMaterialInstanceDynamic* pNewMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ActionSearch();
    
};

