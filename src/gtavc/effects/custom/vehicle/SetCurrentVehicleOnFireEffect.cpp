#include "SetCurrentVehicleOnFireEffect.h"

SetCurrentVehicleOnFireEffect::SetCurrentVehicleOnFireEffect ()
    : EffectPlaceholder ("effect_set_current_vehicle_on_fire")
{
}

void
SetCurrentVehicleOnFireEffect::Enable ()
{
    EffectPlaceholder::Enable ();

    CVehicle *playerVehicle = FindPlayerVehicle ();
    if (playerVehicle)
    {
        playerVehicle->m_nFlags.bFireProof = false;
        playerVehicle->m_fHealth           = 249.9f;
    }
}
