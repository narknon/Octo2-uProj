#pragma once
#include "CoreMinimal.h"
#include "ECONTROL_GUIDE_BUTTON_TYPE.h"
#include "GuideData.generated.h"

USTRUCT(BlueprintType)
struct FGuideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECONTROL_GUIDE_BUTTON_TYPE m_eButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsForceDisplay;
    
    MAJESTY_API FGuideData();
};

