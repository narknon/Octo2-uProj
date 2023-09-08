#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorUtil.generated.h"

class AActor;

UCLASS(Blueprintable)
class MAJESTY_API UActorUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorUtil();
    UFUNCTION(BlueprintCallable)
    static void ChangeOutLinerName(AActor* Actor, const FString& NewName);
    
};

