// Fill out your copyright notice in the Description page of Project Settings.


#include "Gauntlet.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AGauntlet::AGauntlet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mStaticMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Obj"));
	RootComponent = mStaticMesh2;

	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh2(TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube"));
	if (mesh2.Succeeded()) {
		mStaticMesh2->SetStaticMesh(mesh2.Object);
		mStaticMesh2->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));
	}
}

// Called when the game starts or when spawned
void AGauntlet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGauntlet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

