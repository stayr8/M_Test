// Fill out your copyright notice in the Description page of Project Settings.


#include "Sword.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ASword::ASword()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Obj"));
	RootComponent = mStaticMesh;
	
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube"));
	if (mesh.Succeeded()) {
		mStaticMesh->SetStaticMesh(mesh.Object);
		mStaticMesh->SetRelativeScale3D(FVector(1.3f, 0.05f, 0.05f));

		//SetActorScale3D(FVector(1.3f, 0.05f, 0.05f));
	}

}

// Called when the game starts or when spawned
void ASword::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASword::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

