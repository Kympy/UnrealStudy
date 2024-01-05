// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TitleUI.h"
#include "GameFramework/GameModeBase.h"
#include "TitleGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ATitleGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UI)
	TSubclassOf<UTitleUI> TitleUI;
	
private:
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void InitGameState() override;
	virtual void BeginPlay() override;
};
