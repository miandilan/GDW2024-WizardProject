// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerClasses/PlayerControl.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"

APlayerControl::APlayerControl()
{
	//Initialize combo vars
	ComboCount = 0;
	ComboTimer = 0.0f;
}

void APlayerControl::ResetCombo()
{
	ComboCount = 0;
}

void APlayerControl::ExecuteComboAttack()
{
	//The switch case below causes different types of attacks to occur depending on the combo count.

	switch (ComboCount)
	{
	    case 1:
			//First attack
			break;
		case 2: 
			//Second attack
			break;
		default:
			//Handle invalid combo state or loop back to the 1st attack
			ResetCombo();
			//Execute the 1st attack
			break;
	}
}

void APlayerControl::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Bind an input action to trigger combo attacks
	PlayerInputComponent->BindAction("ComboAttack", IE_Pressed, this, &APlayerControl::ComboAttackPressed);
}

void APlayerControl::ComboAttackPressed() 
{
	//Increment the combo count then execute combo attack
	ComboCount++;
	ExecuteComboAttack();
}