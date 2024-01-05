// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

UMyGameInstance::UMyGameInstance()
{
	UE_LOG(LogTemp, Log, TEXT("Game Instance Initialized."));
}

void UMyGameInstance::Init()
{
	Super::Init();
	//ChangeLevel(L"/Game/GameScene.GameScene'");
}

void UMyGameInstance::ChangeLevel(FString LevelName) const
{
	UWorld* World = GetWorld();
	if (World)
	{
		UGameplayStatics::OpenLevel(World, *LevelName);
		UE_LOG(LogTemp, Log, TEXT("%s level opened."), *LevelName);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GetWorld() is nullptr."));
	}
}
