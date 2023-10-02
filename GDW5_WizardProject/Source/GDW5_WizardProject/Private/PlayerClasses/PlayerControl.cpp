// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerClasses/PlayerControl.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "AttackCombo.generated.h"

UCLASS()
class GDW5_WizardProject AAttackCombo : public AActor
{
	GENERATED_BODY)()

public:
	UPROPERTY(VisibleAnywhere)
	UTextRenderComponent* ComboText;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* TargetObject;

	int32 ComboCount;

protected:
	virtual void BeginPlay() override;

public: 
	void IncreaseCombo();
	void ResetCombo();
	void UpdateComboText():
};


// Sets default values
APlayerControl::APlayerControl()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerControl::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerControl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerControl::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

