// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.generated.h"

/**
 * 
 */
UCLASS()
class INTERFACETEST_API UPerson : public UObject
{
	GENERATED_BODY()
public:
	UPerson();

	FORCEINLINE FString& GetName() { return Name; }
	//FORECEINLINE 

protected:
	UPROPERTY()
	FString Name;
};
