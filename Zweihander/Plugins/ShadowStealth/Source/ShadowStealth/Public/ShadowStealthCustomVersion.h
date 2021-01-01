// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Misc/Guid.h"

struct SHADOWSTEALTH_API FShadowStealthCustomVersion
{
	enum Type
	{
		BeforeCustomVersion = 0,
		ShadowSightTarget = 1,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1
	};

	const static FGuid GUID;

private:
	FShadowStealthCustomVersion();
};
