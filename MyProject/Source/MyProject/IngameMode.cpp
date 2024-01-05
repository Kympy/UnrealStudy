// Fill out your copyright notice in the Description page of Project Settings.


#include "IngameMode.h"

void AIngameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	UE_LOG(LogTemp, Log, TEXT("IngameMode InitGame"));	
}

void AIngameMode::InitGameState()
{
	Super::InitGameState();
	UE_LOG(LogTemp, Log, TEXT("IngameMode InitGameState"));
}

