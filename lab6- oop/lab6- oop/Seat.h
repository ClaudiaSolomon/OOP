#pragma once
#include"Car.h"
class Seat: public Car
{
public:
	Seat(int id)
	{
		this->id = id;
	}
	void SetFuelCapacity();
	void SetFuelConsumption();
	void PutAverageSpeed(Weather weather);
	float GetFuelCapacity();
	float GetFuelConsumption();
	float GetAvgSpeed();
	int GetId();
};

