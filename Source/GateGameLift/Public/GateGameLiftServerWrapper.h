// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GateGameLiftServerWrapper.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, meta = (DisplayName = "Gate GameLiftServer Wrapper"), ClassGroup = (Custom))
class GATEGAMELIFT_API UGateGameLiftServerWrapper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:


	UFUNCTION(BlueprintCallable, Category = "GateGameLift")
	static bool RemovePlayerSession(const FString& playerSessionId);

	UFUNCTION(BlueprintCallable, Category = "GateGameLift")
	static bool FinishGameSession();

};
