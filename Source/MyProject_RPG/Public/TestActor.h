// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class MYPROJECT_RPG_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component");
	UCapsuleComponent* Capsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component");
	UStaticMeshComponent* StaticMesh;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnCapsuleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
