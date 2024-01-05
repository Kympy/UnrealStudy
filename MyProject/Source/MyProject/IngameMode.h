// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IngameMode.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AIngameMode : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void InitGameState() override;
};
