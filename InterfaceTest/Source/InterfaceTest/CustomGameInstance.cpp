// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameInstance.h"
#include "Person.h"
#include "Student.h"
#include "Staff.h"
#include "Teacher.h"

void UCustomGameInstance::Init()
{
	Super::Init();

	TArray<UPerson*> People = { NewObject<UStudent>(), NewObject<UTeacher>(), NewObject<UStaff>() };

	for (const TArray<UPerson*>::ElementType Person : People)
	{
		UE_LOG(LogTemp, Log, TEXT("(Foreach)Name is : %s"), *Person->GetName());
	}
	for (auto It = People.CreateConstIterator(); It; It++)
	{
		UE_LOG(LogTemp, Log, TEXT("(Iterator)Name is : %s"), *People[It.GetIndex()]->GetName());
	}
}
