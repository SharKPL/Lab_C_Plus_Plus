#pragma once
#include "Sedan.h"

class Coupe: public Sedan {
public:
	Coupe();
	~Coupe();

	void Open2Doors();
	void Close2Doors();
};