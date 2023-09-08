#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EKSCharacterDir.h"
#include "EOBJ_TYPE.h"
#include "KSObjectBase.generated.h"

class UObject;
class UStaticMesh;

UCLASS(Blueprintable)
class MAJESTY_API AKSObjectBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterDir Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> LoadedMeshes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HouseChangeVisibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOBJ_TYPE m_ObjType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PlacementLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_SpawnPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ObjUniqueID;
    
public:
    AKSObjectBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetupObjectAfterSpawn(FName PlacementLabel, EOBJ_TYPE ObjType, FVector spawnPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAfterLoad();
    
    UFUNCTION(BlueprintCallable)
    void SetObjectUniqueID(int32 UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetObjectEnable(bool Enable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMoveEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHouseChangeVisibleFlag(bool isVisble);
    
    UFUNCTION(BlueprintCallable)
    void SetDir(EKSCharacterDir eDir);
    
    UFUNCTION(BlueprintCallable)
    bool Move(const FVector& Location, float Sec);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsOpenedTreasureBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlacementLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FName GetOpenText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectUniqueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOBJ_TYPE GetObjectType() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHouseChangeVisibleFlag();
    
    UFUNCTION(BlueprintCallable)
    void CbLoadedAssets(UPARAM(Ref) TArray<UObject*>& objList);
    
    UFUNCTION(BlueprintCallable)
    void ActionEnter_Implementation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionEnter();
    
};

