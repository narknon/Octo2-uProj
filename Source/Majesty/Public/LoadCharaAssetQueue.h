#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LoadCharaAssetQueue.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULoadCharaAssetQueue : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_FlipbookResources;
    
    ULoadCharaAssetQueue();
    UFUNCTION(BlueprintCallable)
    void CallbackLoadResource();
    
    UFUNCTION(BlueprintCallable)
    void CallbackLoadFlipbook(UPARAM(Ref) TArray<UObject*>& loadObjList);
    
};

