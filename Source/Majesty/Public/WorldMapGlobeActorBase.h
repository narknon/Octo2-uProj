#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EWorldMapIslandLayerArea.h"
#include "EWorldMapMaskArea.h"
#include "EWorldMapPrologueMaskArea.h"
#include "WorldMapGlobeActorBase.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class MAJESTY_API AWorldMapGlobeActorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_WorldMapDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> m_MaterialResourceLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldMapMaskArea, FName> m_MaskAreaParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldMapPrologueMaskArea, FName> m_PrologueMaskAreaParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldMapIslandLayerArea, FName> m_IslandLayerAreaParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWorldMapMaskArea> m_DisableMaskInPlayerSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWorldMapPrologueMaskArea> m_DisablePrologueMaskInPlayerSelect;
    
public:
    AWorldMapGlobeActorBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsMaskedPrologueArea(EWorldMapPrologueMaskArea MaskArea, bool isMasked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsMaskedArea(EWorldMapMaskArea MaskArea, bool isMasked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsEnableMasksForPlayerSelect(bool IsEnable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsEnableMask(bool IsEnable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsDisplayedIslandLayer(EWorldMapIslandLayerArea MaskArea, bool isDisplayed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetWorldMapDynamicMaterial() const;
    
};

