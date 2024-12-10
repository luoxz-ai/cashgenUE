#pragma once
#include "CashGen.h"
#include "CGTileHandle.generated.h"

class ACGTile;

UENUM(BlueprintType)
enum class ETileStatus : uint8
{
	NOT_SPAWNED, SPAWNED, REQUESTED, TRANSITION, IDLE
};

/** Handle for tracking a single tile */
USTRUCT()
struct FCGTileHandle
{
	GENERATED_USTRUCT_BODY()
	// Current rendering status of the sector
	ETileStatus myStatus{ETileStatus::NOT_SPAWNED};
	uint8 myLOD{0};
	int32 myWaterISMIndex{-1};
	// Handle to the tile actor
	UPROPERTY()
	ACGTile* myHandle{nullptr};
	// Bitmask to indicate which players require this sector
	FDateTime myLastRequiredTimestamp{};
};