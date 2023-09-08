#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBPIsValidReturnCode.h"
#include "ELEVEL_DARK_STATE.h"
#include "ELEVEL_TYPE.h"
#include "ELevelTriggerID.h"
#include "EPLACEMENT_TYPE.h"
#include "EncountTriggerData.h"
#include "EquipLanternData.h"
#include "LevelInfoData.h"
#include "PlayerLocation.h"
#include "ReminiscenceRestorePlacement.h"
#include "LevelManagerUtility.generated.h"

class AActor;
class AKSCharacterBase;
class ALevelManager_Others;
class AMJPathSplineObject;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API ULevelManagerUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelManagerUtility();
    UFUNCTION(BlueprintCallable)
    static bool SwitchBattleLevel(int32 MapIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleObjects(EPLACEMENT_TYPE eType, FName Label, bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleEmotionAllNPC(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleBarChangeCharacter();
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleAllObjects(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetVignetteWeakRate(float Param);
    
    UFUNCTION(BlueprintCallable)
    static void SetVignetteNormalRate(float Param);
    
    UFUNCTION(BlueprintCallable)
    static void SetRequestedLevelTriggerID(ELevelTriggerID TriggerID);
    
    UFUNCTION(BlueprintCallable)
    static void SetLevelChangeByLinerShip(bool bLinerShip);
    
    UFUNCTION(BlueprintCallable)
    static void SetGainRateMin(float Param);
    
    UFUNCTION(BlueprintCallable)
    static void SetGainRateMax(float Param);
    
    UFUNCTION(BlueprintCallable)
    static void SetFocalRegionWideAdd(float Param);
    
    UFUNCTION(BlueprintCallable)
    static void SetBgmIdFromOuter(int32 BGMID);
    
    UFUNCTION(BlueprintCallable)
    static void SaveVisitedMap(FName SaveLevel);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCameraLockParam();
    
    UFUNCTION(BlueprintCallable)
    static void RequestRestorePlayerPlacement(const FReminiscenceRestorePlacement& restorePlacement);
    
    UFUNCTION(BlueprintCallable)
    static void RequestMapInLocation(const FPlayerLocation& Location);
    
    UFUNCTION(BlueprintCallable)
    static void RequestMapInEquipLantern(const FEquipLanternData& EquipLantern);
    
    UFUNCTION(BlueprintCallable)
    static void RequestMapInCameraLock(const FVector& CameraLockPos, ELevelTriggerID LevelTriggerID);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestLoadFieldLevel(FName Map, ELevelTriggerID TriggerID, bool Fade, bool ChangeBGM);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTargetNPC_ByID(int32 NPCUniqID);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveObjectFromList(EPLACEMENT_TYPE eType, FName ObjLabel);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllType();
    
    UFUNCTION(BlueprintCallable)
    static bool RefreshSwoon(int32 NPCUniqID);
    
    UFUNCTION(BlueprintCallable)
    static bool RefreshSpawnCurrentLevel(bool FadeChara, bool IsForceSpawn, bool NextTimeZone, bool bUpdateSwoon);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshFlagObjectRenderStateDirty();
    
    UFUNCTION(BlueprintCallable)
    static void RefreshFlagObject();
    
    UFUNCTION(BlueprintCallable)
    static void RefreshBarChangeCharacter();
    
    UFUNCTION(BlueprintCallable)
    static void RecalcCollectedPostProcessVolumes();
    
    UFUNCTION(BlueprintCallable)
    static bool PlayLevelBGM();
    
    UFUNCTION(BlueprintCallable)
    static void ModifyActorSoftReference(UPARAM(Ref) TSoftObjectPtr<AActor>& softRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidLevelManager_Inner();
    
    UFUNCTION(BlueprintCallable)
    static void IsValidLevelManager(TEnumAsByte<EBPIsValidReturnCode::Type>& returnCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTransitionToGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTownById(int32 levelId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSameLevelChanging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRequestedMapInLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPrevLevelSea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPrevLevelInGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNowLevelTown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNowLevelSea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNowLevelInGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNextLevelInGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLevelChanging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsImmovableByFieldChanging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameOverPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameOverLevelLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFirstVisitLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDungeonById(int32 levelId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletedLevelChanging();
    
    UFUNCTION(BlueprintCallable)
    static void HouseChangeVisible(bool inHouse, int32 floor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetVignetteWeakRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetVignetteNormalRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetShowLevelName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FReminiscenceRestorePlacement GetRestorePlayherPlacement();
    
    UFUNCTION(BlueprintCallable)
    static bool GetRestoreEncountDataAfterReminiscence(FEncountTriggerData& outEncountTriggerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELevelTriggerID GetRequestedLevelTriggerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPrevTownID(bool useSubTownID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPrevLevelName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPrevLevelDataID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPrevLevelData(FLevelInfoData& outLevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELEVEL_DARK_STATE GetPrevLevelDarkState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AKSCharacterBase* GetNPCUniqID(int32 UniqID);
    
    UFUNCTION(BlueprintCallable)
    static void GetNPCPathList(UPARAM(Ref) TArray<AMJPathSplineObject*>& outNpcPathList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AKSCharacterBase* GetNPC(FName ObjLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNowTownID(bool useSubTownID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetNowLevelName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNowLevelDataID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNowLevelData(FLevelInfoData& outLevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextTownID(bool useSubTownID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetNextLevelName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextLevelDataID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNextLevelData(FLevelInfoData& outLevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerLocation GetMapInLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEquipLanternData GetMapInEquipLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ALevelManager_Others* GetLevelManageOthersActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLevelChangeByLinerShip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGainRateMin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGainRateMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFocalRegionWideAdd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELEVEL_DARK_STATE GetCurrentLevelDarkState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetBattleEnemyGroupID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELEVEL_TYPE GetActiveLevelType();
    
    UFUNCTION(BlueprintCallable)
    static bool FinishBattleLevel();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ShowPostProcessVolumeInfo();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetBarPlaceCharaRateOne(int32 Param);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetBarNotPlaceCharaRate(int32 Param);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetBarCharaList(const TArray<int32>& Param);
    
    UFUNCTION(BlueprintCallable)
    static bool Debug_LevelChange(FName levelName, uint8 triggerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Debug_GetBarPlaceCharaRateOne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Debug_GetBarNotPlaceCharaRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> Debug_GetBarCharaList();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ChangeBarChara();
    
    UFUNCTION(BlueprintCallable)
    static void ClearRestorePlayherPlacement();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMapInLocation();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMapInEquipLantern();
    
    UFUNCTION(BlueprintCallable)
    static void ClearCollisionDisabledNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcLostWayProbability();
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyScreenBrightness(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyRestorePlayerPlacement();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPostProcessCurrentParam(bool bCheckEventPlaying);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyCurrentLevelResolution(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyCornerDarkness(bool IsNormal, bool CheckEventPlaying);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionDisabledNPC(int32 NPCUniqID);
    
};

