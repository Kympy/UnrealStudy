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
		
		ILessonInterface* LessonInterface = Cast<ILessonInterface>(Person);
		if (LessonInterface)
		{
			LessonInterface->DoLesson();
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Cannot do lesson."));
		}
	}
	//for (auto It = People.CreateConstIterator(); It; It++)
	//{
	//	UE_LOG(LogTemp, Log, TEXT("(Iterator)Name is : %s"), *People[It.GetIndex()]->GetName());
	//}
}
