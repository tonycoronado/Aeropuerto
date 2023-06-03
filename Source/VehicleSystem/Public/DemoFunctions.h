// Copyright 2019-2020 Kryoshift Software. All Rights Reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DemoFunctions.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLESYSTEM_API UDemoFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	//Returns the project version set in the 'Project Settings' > 'Description' section of the editor
	UFUNCTION(BlueprintPure, Category = "Project")
	static FString GetProjectVersion();
	
};
