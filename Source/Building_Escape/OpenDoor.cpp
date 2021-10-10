// Copyright Martin Fucik 2021

#include "OpenDoor.h"
#include "GameFramework/Actor.h"

UOpenDoor::UOpenDoor()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
}

void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UE_LOG(LogTemp, Display, TEXT("Current Yaw is: %f"), GetOwner()->GetActorRotation().Yaw);

    FMath::Lerp(/*StartingYaw, TargetYaw, 0-1*/);

    // float myFloat = 90.f;

    // FRotator CurrentRotation = GetOwner()->GetActorRotation();
    // CurrentRotation.Yaw -= myFloat;

    // GetOwner()->SetActorRotation(CurrentRotation);
}