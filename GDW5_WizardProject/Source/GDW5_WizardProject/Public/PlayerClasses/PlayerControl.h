// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerControl.generated.h"

UCLASS()
class GDW5_WIZARDPROJECT_API APlayerControl : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerControl();

protected:
	int32 ComboCount;
	float ComboTimer;

	//Combat hitbox components
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* HeadHitbox;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BodyHitbox;

	//Functions that handle collisions
	UFUNCTION()
	void OnHitboxOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnHitboxOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp);

private:	
	void ResetCombo();
	void ExecuteComboAttack();
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);
	void ComboAttackPressed();

};
