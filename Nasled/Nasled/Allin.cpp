#include "Allin.h"

#include "Vehicle.h"
#include "Car.h"
#include "Sedan.h"
#include "Coupe.h"

#include <iostream>

using namespace std;

void Allin::vehicle() {
	Vehicle veh = Vehicle();
	veh.drive();

}

void Allin::car() {
	Car cr = Car();
	cr.OnEngine();
	cr.OffEngine();
	cr.drive();
}

void Allin::sedan() {
	Sedan sdn = Sedan();
	sdn.remove_the_wheels();
	sdn.put_on_the_wheels();
	sdn.OffEngine();
	sdn.OnEngine();
	sdn.drive();
}

void Allin::coupe() {
	Coupe cop = Coupe();
	cop.Open2Doors();
	cop.Close2Doors();
	cop.remove_the_wheels();
	cop.put_on_the_wheels();
	cop.OffEngine();
	cop.OnEngine();
	cop.drive();
	
}

void Allin::print() {
	vehicle();
	cout << "+ - - - - - - - - - - - - - - +" << endl;
	car();
	cout << "+ - - - - - - - - - - - - - - +" << endl;
	sedan();
	cout << "+ - - - - - - - - - - - - - - +" << endl;
	coupe();
}


