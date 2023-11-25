#pragma once
#include "Car.h"

class Sedan: public Car
{
public:
	Sedan();
	~Sedan();
	void remove_the_wheels();
	void put_on_the_wheels();
};