// Fill out your copyright notice in the Description page of Project Settings.


#include "Student.h"

UStudent::UStudent()
{
	Name = TEXT("Student");
}

void UStudent::DoLesson()
{
	UE_LOG(LogTemp, Log, TEXT("Study"));
}
