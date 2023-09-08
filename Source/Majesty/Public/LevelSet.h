#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelSet.generated.h"

class ULevelStreamingCustom;

UCLASS(Blueprintable)
class MAJESTY_API ULevelSet : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    ULevelStreamingCustom* m_ParentLevelStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TMap<FName, ULevelStreamingCustom*> m_SubLevelStreaming;
    
public:
    ULevelSet();
private:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void OnUnloaded();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void OnShown();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void OnLoaded();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void OnHidden();
    
};

