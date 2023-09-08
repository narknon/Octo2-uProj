#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "Templates/SubclassOf.h"
#include "KSListWidgetBase.generated.h"

class UKSListColumnWidgetBase;
class UKSListItemWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UKSListWidgetBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKSListColumnWidgetBase> m_ColumnWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKSListItemWidgetBase> m_ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSListColumnWidgetBase* m_ColumnWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ContainerName;
    
    UKSListWidgetBase();
};

