#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DebugPrimitiveData.h"
#include "DebugTextData.h"
#include "DebugCanvasComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UDebugCanvasComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoArrangement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StartPos;
    
    UDebugCanvasComponent();
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoArrangement(bool Enable, FVector2D Pos);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTextWithID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveText();
    
    UFUNCTION(BlueprintCallable)
    void RemovePrimitiveWithID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void RemovePrimitive();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllText();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllPrimitive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTextWithID(int32 ID, const FDebugTextData& textData);
    
    UFUNCTION(BlueprintCallable)
    void AddText(const FDebugTextData& textData);
    
    UFUNCTION(BlueprintCallable)
    void AddRowPartText(FText Text, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void AddPrimitiveWithID(int32 ID, const FDebugPrimitiveData& primData);
    
    UFUNCTION(BlueprintCallable)
    void AddPrimitive(const FDebugPrimitiveData& primData);
    
};

