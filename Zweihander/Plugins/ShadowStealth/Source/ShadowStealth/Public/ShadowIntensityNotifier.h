#pragma once

#include "CoreMinimal.h"
#include "ShadowIntensityNotifier.generated.h"

USTRUCT(BlueprintType)
struct SHADOWSTEALTH_API FShadowIntensityNotifier
{
    GENERATED_BODY()

	typedef TArray<FShadowIntensityNotifier, TNonRelocatableInlineAllocator<16>> TLocalArray;
	
	UPROPERTY(Category = "ShadowStealth", EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(Category = "ShadowStealth", EditAnywhere, BlueprintReadWrite)
	float Intensity;

	UPROPERTY(Category = "ShadowStealth", EditAnywhere, BlueprintReadWrite)
	bool bExeeded;

	UPROPERTY(Category = "ShadowStealth", EditAnywhere, BlueprintReadWrite)
	bool bFellBelow;
};
