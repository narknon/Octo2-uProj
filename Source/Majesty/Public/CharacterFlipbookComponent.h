#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PaperFlipbookComponent.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterDir.h"
#include "CharacterFlipbookComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UCharacterFlipbookComponent : public UPaperFlipbookComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> m_FlipbookMaterialList;
    
public:
    UCharacterFlipbookComponent();
    UFUNCTION(BlueprintCallable)
    void SetFlipbookVisibility(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetFlipbookOffset(const FVector& Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterDir(EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterActionLabel(FName CharaActionLabel);
    
    UFUNCTION(BlueprintCallable)
    void PlayCurrentAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(EKSCharacterAction eAction);
    
    UFUNCTION(BlueprintCallable)
    bool IsFlipbookVisibile();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetCurrentFlipbookMaterial();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetCachedFlipbookMaterial(FName FlipbookName);
    
};

