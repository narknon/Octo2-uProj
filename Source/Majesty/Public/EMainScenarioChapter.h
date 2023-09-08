#pragma once
#include "CoreMinimal.h"
#include "EMainScenarioChapter.generated.h"

UENUM(BlueprintType)
enum class EMainScenarioChapter : uint8 {
    NONE,
    CHAPTER1,
    CHAPTER1_COMPLETE,
    CHAPTER2,
    CHAPTER2_COMPLETE,
    CHAPTER3,
    CHAPTER3_COMPLETE,
    CHAPTER4,
    CHAPTER4_COMPLETE,
};

