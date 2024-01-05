// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleGameMode.h"

#include "TitleUI.h"
#include "Kismet/GameplayStatics.h"

void ATitleGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	
	UE_LOG(LogTemp, Log, TEXT("Title Game Mode : InitGame"));
}

void ATitleGameMode::InitGameState()
{
	Super::InitGameState();

	UE_LOG(LogTemp, Log, TEXT("Title Game Mode : InitGameState"));
}

void ATitleGameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	if (World)
	{
		APlayerController* Controller = UGameplayStatics::GetPlayerController(World, 0);
		if (Controller)
		{
			Controller->SetShowMouseCursor(true);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("GetPlayerController failed."));
		}

		// UI 생성
		UTitleUI* CreatedTitleUI = CreateWidget<UTitleUI>(World, TitleUI);
		if (CreatedTitleUI)
		{
			CreatedTitleUI->AddToViewport();
			CreatedTitleUI->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Title UI creation failed."))
		}
	}
}

