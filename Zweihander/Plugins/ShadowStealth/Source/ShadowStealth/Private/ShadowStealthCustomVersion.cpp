// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ShadowStealthCustomVersion.h"
#include "Serialization/CustomVersion.h"

const FGuid FShadowStealthCustomVersion::GUID(0x267738ec, 0x9ff74c75, 0xa6a4a095, 0x342d2d5e);

FCustomVersionRegistration GRegisterShadowStealthCustomVersion(FShadowStealthCustomVersion::GUID, FShadowStealthCustomVersion::LatestVersion, TEXT("ShadowStealthVer"));
