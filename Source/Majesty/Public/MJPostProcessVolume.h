#pragma once
#include "CoreMinimal.h"
#include "Engine/PostProcessVolume.h"
#include "MJPostProcessVolume.generated.h"

class UMaterial;

UCLASS(Blueprintable)
class MAJESTY_API AMJPostProcessVolume : public APostProcessVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 m_nIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* m_pAddPostProcessMaterial;
    
    AMJPostProcessVolume(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void AddPostProcessMaterial(UMaterial* PPM);
    
};

