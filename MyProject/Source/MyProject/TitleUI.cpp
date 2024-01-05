// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleUI.h"

#include "MyGameInstance.h"

void UTitleUI::NativeConstruct()
{
	TestButton->OnClicked.AddDynamic(this, &UTitleUI::OnClickTestButton);
}


void UTitleUI::OnClickTestButton()
{
	UMyGameInstance* GI = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());
	if (GI)
	{
		GI->ChangeLevel("GameScene");
	}
}
