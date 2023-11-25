#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() {

}
Car::~Car() {

}

void Car::OnEngine() {
	cout << "Engine On" << endl;
}

void Car::OffEngine() {
	cout << "Engine Off" << endl;
}