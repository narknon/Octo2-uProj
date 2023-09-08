#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELEVEL_TYPE.h"
#include "StreamingLevels.generated.h"

class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class MAJESTY_API UStreamingLevels : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> m_Field;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> m_Battle;
    
public:
    UStreamingLevels();
    UFUNCTION(BlueprintCallable)
    bool SetStreamingLevel(ELEVEL_TYPE eLevelType, ULevelStreamingDynamic* Stream);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLevel(ULevelStreamingDynamic* UnloadLevel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllLevel();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllFieldLevel();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllBattleLevel();
    
    UFUNCTION(BlueprintCallable)
    void Init(int32 nFieldArrayBuffer, int32 nBattleArrayBuffer);
    
    UFUNCTION(BlueprintCallable)
    ULevelStreamingDynamic* GetStreamingLevel(ELEVEL_TYPE eLevelType, int32 nIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<ULevelStreamingDynamic*> GetLevels(ELEVEL_TYPE eLevelType);
    
};

