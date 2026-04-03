// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TestCapsule"));
	RootComponent = Capsule;
	Capsule->InitCapsuleSize(42.0f, 84.0f);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TestStaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	

}

void ATestActor::OnCapsuleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != this)
	{
		UE_LOG(LogTemp, Log, TEXT("Overlap! Applying 10 Damage to %s"), *OtherActor->GetName());
		
	}
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

