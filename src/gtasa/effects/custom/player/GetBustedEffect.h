#pragma once

#include "effects/EffectPlaceholder.h"

#include "CCutsceneMgr.h"

class GetBustedEffect : public EffectPlaceholder
{
public:
	GetBustedEffect();

	void Enable() override;
};
