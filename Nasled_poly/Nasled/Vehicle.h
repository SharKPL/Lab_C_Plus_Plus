#pragma once


class Vehicle {
protected:

public:
	Vehicle();
	~Vehicle();

	virtual void drive() = 0;
};