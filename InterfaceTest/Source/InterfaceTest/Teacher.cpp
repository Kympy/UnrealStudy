// Fill out your copyright notice in the Description page of Project Settings.


#include "Teacher.h"

UTeacher::UTeacher()
{
	Name = TEXT("Teacher");
}

void UTeacher::DoLesson()
{
	UE_LOG(LogTemp, Log, TEXT("Teach"));
}
