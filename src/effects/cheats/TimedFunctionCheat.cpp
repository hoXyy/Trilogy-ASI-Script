// Copyright (c) 2019 Lordmau5
#include "TimedFunctionCheat.h"

TimedFunctionCheat::TimedFunctionCheat(void* _function, int _address, int _duration, const std::string& _description)
	: TimedEffect(_duration, _description) {
	function = _function;
	address = reinterpret_cast<bool*>(_address);
}

TimedFunctionCheat::TimedFunctionCheat(void* _function, int _address, int _duration, const std::string& _description, const char* _type)
	: TimedFunctionCheat(_function, _address, _duration, _description) {
	AddType(_type);
}

void TimedFunctionCheat::Disable() {
	if (function && address && *address) {
		reinterpret_cast<void(*)()> (function) ();
	}

	TimedEffect::Disable();
}

void TimedFunctionCheat::HandleTick() {
	if (function && address && !*address) {
		reinterpret_cast<void(*)()> (function) ();
	}
}
