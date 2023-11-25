#pragma once

#include "Vehicle.h"

class Car: public Vehicle {
protected:

public:
	Car();
	~Car();

	void OnEngine();
	void OffEngine();
};