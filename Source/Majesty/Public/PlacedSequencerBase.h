#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceDirector.h"
#include "EEventBalloonDir.h"
#include "PlacedSequencerBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UPlacedSequencerBase : public ULevelSequenceDirector {
    GENERATED_BODY()
public:
    UPlacedSequencerBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SetUpFrameNumber(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenAutoBalloonWithNPCFunction(FName TalkDataLabel, FName PlacementLabel, FVector2D balloonOffset, float DispTime, float DispDistance, EEventBalloonDir BalloonDir, bool EnableTail);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenAutoBalloonFunction(FName TalkTargetTag, FName TalkDataLabel, FVector2D balloonOffset, float DispTime, float DispDistance, EEventBalloonDir BalloonDir, bool EnableTail);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitSeqData();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

