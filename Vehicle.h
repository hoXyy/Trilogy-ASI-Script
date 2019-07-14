#pragma once

#include "plugin.h"
#include "common.h"
#include <random>

#include "CTimer.h"
#include "CStreaming.h"
#include "CModelInfo.h"
#include "CMonsterTruck.h"
#include "CQuadBike.h"
#include "CHeli.h"
#include "CPlane.h"
#include "CBmx.h"
#include "CTrailer.h"
#include "CBoat.h"
#include "CTrain.h"
#include "CWorld.h"
#include "CTheScripts.h"

#define _USE_MATH_DEFINES

#include <math.h>

class Vehicle
{
public:
	static void SpawnVehicle(int modelID, CVector position, float orientation);
	static void SpawnForPlayer(int modelID);
	static void BlowUpAllCars();

	static void SetPlayerVehicleOnFire();
	static void PopAllVehicleTires();
	static void StairwayToHeaven();
	static void TurnVehiclesAround();

private:
	static void InvertVehicle(CMatrix* matrix);
};