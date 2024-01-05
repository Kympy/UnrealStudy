// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "TitleUI.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UTitleUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	class UButton* TestButton;

private:
	virtual void NativeConstruct() override;
	UFUNCTION()
	void OnClickTestButton();
};
