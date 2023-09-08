#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "EKSCharacterDir.h"
#include "NPCSpawnData.h"
#include "NPCSpawnTarget.generated.h"

class AKSCharacterBase;
class AKSObjectBase;

UCLASS(Blueprintable)
class MAJESTY_API ANPCSpawnTarget : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKSCharacterBase* NPCCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKSObjectBase* SpawnObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterDir Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPCSpawnData> SpawnData;
    
    ANPCSpawnTarget(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    bool IsSpawn(const TArray<int32>& EventFlag, const FNPCSpawnData& CheckData);
    
};

